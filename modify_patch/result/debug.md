## discard
`boot.c`  文件
`try_init_kernel`函数`keystone_map_kernel_window(keystone_dram_base, keystone_dram_base + keystone_dram_size);`语句
> 函参（keystone_dram_size=18446744071629287424, keystone_dram_base=2218528768）

## new
`/src/arch/riscv/kernel/vspace.c`  文件
`keystone_map_kernel_window` 函数
`assert(IS_ALIGNED(paddr, RISCV_GET_LVL_PGSIZE_BITS(2)));`   行

> 
> pptr  = 0xffffffc000000000
> /* 0xffffffc000000000 - 0xffffffff80000000 */
>
> paddr = 2218528768


<details>
  <summary></summary>
  
  ```c
  //10.1.1
  init_kernel
  ```
  
  ```c
  //11.0.0
  init_kernel
  ```
  
  </details>
