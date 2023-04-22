## 修改策略

1.✔️：增加 keystone_map_kernel_window 函数
2.✔️：修改 map_kernel_window 函数

```c++
/* first we map in memory from PADDR_BASE */
    word_t paddr = PADDR_BASE; /* 0x80000000UL */
    //while (pptr < KERNEL_BASE) { /* 0xffffffc000000000 - 0xffffffff80000000 */
    /*    assert(IS_ALIGNED(pptr, RISCV_GET_LVL_PGSIZE_BITS(1)));
        assert(IS_ALIGNED(paddr, RISCV_GET_LVL_PGSIZE_BITS(1)));
    */
        /* MAP VA 0xffffffc000000000 --> PA 0x80000000 : up to kernel base */
     //   kernel_root_pageTable[RISCV_GET_PT_INDEX(pptr, 1)] = pte_next(paddr, true);
    /*
        pptr += RISCV_GET_LVL_PGSIZE(1);
        paddr += RISCV_GET_LVL_PGSIZE(1);
    }*/
```

```c++
/* now we should be mapping the 1GiB kernel base */

    paddr = PADDR_LOAD; /* PA 0xc0000000 */

//#ifndef RISCV_KERNEL_WINDOW_LEVEL2_PT
    /* MAP VA 0xffffffff80000000 --> PA 0xc0000000 */
//    kernel_root_pageTable[RISCV_GET_PT_INDEX(pptr, 1)] = pte_next(paddr, true);
//    pptr += RISCV_GET_LVL_PGSIZE(1);
//    paddr += RISCV_GET_LVL_PGSIZE(1);
//#else
```

```c++
/* The kernel image are mapped twice, locating the two indexes in the
     * root page table, pointing them to the same second level page table.
     */
    kernel_root_pageTable[RISCV_GET_PT_INDEX(PADDR_LOAD + BASE_OFFSET, 1)] =
        pte_next(kpptr_to_paddr(kernel_image_level2_pt), false);
    kernel_root_pageTable[RISCV_GET_PT_INDEX(pptr, 1)] =
        pte_next(kpptr_to_paddr(kernel_image_level2_pt), false);
    kernel_image_level2_pt[RISCV_GET_PT_INDEX(pptr, 2)] =
        pte_next(kpptr_to_paddr(kernel_image_level3_pt), false);

    while (pptr < KERNEL_BASE + RISCV_GET_LVL_PGSIZE(2)) {
        //printf("pptr:0x%llx --> paddr:0x%llx\n", (unsigned long long) pptr, (unsigned long long) paddr);
        kernel_image_level3_pt[RISCV_GET_PT_INDEX(pptr, 3)] = pte_next(paddr, true);
        pptr += RISCV_GET_LVL_PGSIZE(3);
        paddr += RISCV_GET_LVL_PGSIZE(3);
    }
```

```C++
/* There should be 1GiB free where we will put device mapping some day */
// 全部注释
```

3..✔️：增加 cap_frame_cap_get_capFMappedAddress 函数里面一段话
```c++
    /* there's a weird bug in SeL4 that adds some bits to
     * the user VA. for QEMU, it adds 0x100000000, for HiFive, it adds 0x200000000
     * I couldn't figure out why it is doing that, so
     * let's just hack it for now. */
    if(frame_vptr & 0x700000000)
      frame_vptr &= 0xffffffff;
```
