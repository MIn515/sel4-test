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
  <summary>函数参数</summary>
  
  ```c
  //10.1.1
  init_kernel
  (dummy=3221397504, keystone_dram_base=3224977408, 
    keystone_dram_size=18446744072635916288, keystone_runtime_start=241670, keystone_user_start=0, 
    keystone_free_start=2153775104, keystone_utm_ptr=18446744071562067968, keystone_utm_size=1)
  
  keystone_map_kernel_window (dram_start=3224977408, dram_end=2151342080)
  
  ```
  
  ```c
  //11.0.0
  init_kernel
  
  
  
  ```
  
  </details>
