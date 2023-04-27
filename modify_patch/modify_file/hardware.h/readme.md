## 与 hardware.c 处理方法不一样
> `hardware.c`在`riscv/arch/machine`里面
> 但 `riscv/arch/machine` 里的`hardware.h` ，两个版本基本一样





## 10.1.1 补丁

<details>
  <summary>patch</summary>
  
  <details>
    <summary> 1. 注释掉 </summary>   
    
    ```c
    #if __riscv_xlen == 32
    /* 包含内存的典型位置 */
    #define PADDR_BASE 0x80000000lu
    #else
    /*主内核窗口将从0物理地址开始，以便它可以包含任何可能存在的潜在内存*/
    #define PADDR_BASE 0x0lu
    #endif
    ```
    
  </details>
    <details>
    <summary> 2. 添加 </summary>
      
    ```c
    //在1. 后面紧接着
    extern word_t keystone_paddr_base;
    inline word_t paddr_base(void)
    {
       return keystone_paddr_base;
    }
    #define PADDR_BASE paddr_base()
    ```   
      
  </details>
  
  <details>
    <summary> 3. 注释</summary>
    
    ```c
    #ifdef CONFIG_BUILD_ROCKET_CHIP_ZEDBOARD
    /* The Rocket-Chip for zedboard only has 256MiB of Memory. */
    #define PADDR_LOAD 0x88000000lu
    #else
    /*这表示内核映像将链接到的物理地址。这需要在1gb的边界上，因为我们目前需要能够创建到此地址的映射，作为最大的帧大小*/
    #define PADDR_LOAD 0xC0000000lu
    #endif
    ```
  </details>
  
   <details>
   <summary> 4. 添加 </summary>
    
    ```c
      //在3. 后面添加
      extern word_t keystone_paddr_load;
      inline word_t paddr_load(void)
        {
           return keystone_paddr_load;
        }
      #define PADDR_LOAD paddr_load()
    ```
  </details>
    
</details>
