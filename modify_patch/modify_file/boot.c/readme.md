 <details>
<summary>8. diff --git src/arch/riscv/kernel/boot.c src/arch/riscv/kernel/boot.c </summary>
 
 ```
diff --git src/arch/riscv/kernel/boot.c src/arch/riscv/kernel/boot.c
index f00c4b66..8449e884 100644
--- src/arch/riscv/kernel/boot.c
+++ src/arch/riscv/kernel/boot.c
@@ -30,6 +30,10 @@
 #include <plat/machine/fdt.h>
 #include <machine.h>
 
+/* Keystone Physical Addresses */
+word_t keystone_paddr_base;
+word_t keystone_paddr_load;
+
 /* pointer to the end of boot code/data in kernel image */
 /* need a fake array to get the pointer from the linker script */
 extern char ki_boot_end[1];
@@ -147,7 +151,7 @@ init_freemem(region_t ui_reg, region_t dtb_reg)
             .end = ui_reg.end
         }
     };
-
+    return;
     for (i = 0; i < MAX_NUM_FREEMEM_REG; i++) {
         ndks_boot.freemem[i] = REG_EMPTY;
     }
@@ -213,9 +217,10 @@ init_cpu(void)
 /* This and only this function initialises the platform. It does NOT initialise any kernel state. */
 
 BOOT_CODE static void
-init_plat(region_t dtb)
+init_plat(paddr_t memstart, uint64_t memsize)
 {
-    parseFDT((void*)dtb.start);
+    keystoneFDT(memstart, memsize);
+    //parseFDT((void*)dtb.start);
     initIRQController();
     initTimer();
 }
@@ -224,18 +229,37 @@ init_plat(region_t dtb)
 
 static BOOT_CODE bool_t
 try_init_kernel(
-    paddr_t ui_p_reg_start,
-    paddr_t ui_p_reg_end,
-    paddr_t dtb_p_reg_start,
-    paddr_t dtb_p_reg_end,
-    uint32_t pv_offset,
-    vptr_t  v_entry
+    uint64_t dummy,
+    paddr_t keystone_dram_base,
+    uint64_t keystone_dram_size,
+    paddr_t keystone_runtime_start,
+    paddr_t keystone_user_start,
+    paddr_t keystone_free_start,
+    vptr_t  keystone_utm_ptr,
+    uint64_t  keystone_utm_size
 )
 {
+    (void) dummy;
     cap_t root_cnode_cap;
     cap_t it_pd_cap;
     cap_t it_ap_cap;
     cap_t ipcbuf_cap;
+
+    /* SeL4 Parameters */
+    paddr_t ui_p_reg_start;
+    paddr_t ui_p_reg_end;
+    uint32_t pv_offset;
+    vptr_t v_entry;
+    /* Keystone Parameters */
+    v_entry = read_sepc();
+    ui_p_reg_start = keystone_user_start;
+    ui_p_reg_end = keystone_free_start;
+
+    pv_offset = keystone_user_start - 0x10000;
+
+    keystone_paddr_base = keystone_dram_base;
+    keystone_paddr_load = keystone_runtime_start;
+
     p_region_t boot_mem_reuse_p_reg = ((p_region_t) {
         kpptr_to_paddr((void*)KERNEL_BASE), kpptr_to_paddr(ki_boot_end)
     });
@@ -244,7 +268,7 @@ try_init_kernel(
         ui_p_reg_start, ui_p_reg_end
     });
     region_t dtb_reg = paddr_to_pptr_reg((p_region_t) {
-        dtb_p_reg_start, dtb_p_reg_end
+        0, 0
     });
     pptr_t bi_frame_pptr;
     vptr_t bi_frame_vptr;
@@ -264,16 +288,28 @@ try_init_kernel(
     it_v_reg.start = ui_v_reg.start;
     it_v_reg.end = bi_frame_vptr + BIT(PAGE_BITS);
 
+
+    keystone_map_kernel_window(keystone_dram_base, keystone_dram_base + keystone_dram_size);
     map_kernel_window();
 
     /* initialise the CPU */
     init_cpu();
 
     /* initialize the platform */
-    init_plat(dtb_reg);
+    init_plat(keystone_dram_base, keystone_dram_size);
 
     /* make the free memory available to alloc_region() */
-    init_freemem(ui_reg, dtb_reg);
+    init_freemem(ui_reg, dtb_reg); // this does nothing actually
+
+    region_t cur_reg = ((region_t) {
+        PPTR_BASE, PPTR_BASE + keystone_dram_size
+        });
+    region_t res_reg = paddr_to_pptr_reg((p_region_t) {
+        keystone_runtime_start, keystone_free_start
+        });
+    cur_reg = insert_region_excluded(cur_reg, res_reg);
+    if(cur_reg.start < cur_reg.end)
+      assert(insert_region(cur_reg));
 
     /* create the root cnode */
     root_cnode_cap = create_root_cnode();
@@ -378,28 +414,38 @@ try_init_kernel(
     ksNumCPUs = 1;
 
     printf("Booting all finished, dropped to user space\n");
+
+    // turning on cycle counter
+    unsigned long v = 0x7;
+    asm volatile ("csrw scounteren, %0" : :"rK" (v));
+
     return true;
 }
 
 BOOT_CODE VISIBLE void
 init_kernel(
-    paddr_t ui_p_reg_start,
-    paddr_t ui_p_reg_end,
-    sword_t pv_offset,
-    vptr_t  v_entry,
-    word_t hartid,
-    paddr_t dtb_output_p
+    uint64_t dummy,
+    paddr_t keystone_dram_base,
+    uint64_t keystone_dram_size,
+    paddr_t keystone_runtime_start,
+    paddr_t keystone_user_start,
+    paddr_t keystone_free_start,
+    vptr_t  keystone_utm_ptr,
+    uint64_t  keystone_utm_size
 )
 {
-    pptr_t dtb_output = (pptr_t)paddr_to_pptr(dtb_output_p);
-
-    bool_t result = try_init_kernel(ui_p_reg_start,
-                                    ui_p_reg_end,
-                                    dtb_output_p,
-                                    dtb_output_p + fdt_size((void*)dtb_output),
-                                    pv_offset,
-                                    v_entry
-                                   );
+    //pptr_t dtb_output = (pptr_t)paddr_to_pptr(dtb_output_p);
+
+    //(void) dtb_output_p;
+
+    bool_t result = try_init_kernel(dummy,
+                                    keystone_dram_base,
+                                    keystone_dram_size,
+                                    keystone_runtime_start,
+                                    keystone_user_start,
+                                    keystone_free_start,
+                                    keystone_utm_ptr,
+                                    keystone_utm_size);
 
     if (!result) {
         fail ("Kernel init failed for some reason :(");
 ```
 
 </details>


# 修改策略

1. ✔️ : 增加 keystone 
2. ❌：return 没有修改，因为改动比较大，不确定加在哪里
3. ✔️：增加 keystoneFDT
4. ✔️：修改 try_init_kernel函数参数
5. ✔️：增加 
6. ❌：修改 dtb_reg = paddr_to_pptr_reg , 没有此函数
7. ✔️：增加
8. ✔️：修改 init_plat()
9. ✔️：修改及增加 init_freemem，
10. ✔️ ：增加：printf("Booting all finished, dropped to user space\n");后面
11. 

```c++
#ifdef ENABLE_SMP_SUPPORT
    ,
    word_t hart_id,
    word_t core_id
#endif
```
ENABLE_SMP_SUPPORT 是否启用有关吗？先全部替换，不保留 hart_id。
