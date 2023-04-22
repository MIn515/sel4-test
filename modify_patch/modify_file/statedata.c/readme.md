## 修改策略

1. 
```c++
/* Kernel Page Tables */
pte_t kernel_root_pageTable[BIT(PT_INDEX_BITS)] ALIGN_BSS(BIT(seL4_PageTableBits));
pte_t kernel_root_level2_pageTable[BIT(PT_INDEX_BITS)] ALIGN_BSS(BIT(seL4_PageTableBits));    // 增加的

#if __riscv_xlen != 32
//  等价于 #ifdef RISCV_KERNEL_WINDOW_LEVEL2_PT
pte_t kernel_image_level2_pt[BIT(PT_INDEX_BITS)] ALIGN_BSS(BIT(seL4_PageTableBits));
pte_t kernel_image_level3_pt[BIT(PT_INDEX_BITS)] ALIGN_BSS(BIT(seL4_PageTableBits));  // 增加的
#endif```
