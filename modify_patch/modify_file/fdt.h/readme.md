## 方法

根据搜索 `.ninja`文件 和 搜索函数`fdt_size`   定位到
> 11.0.0/tools/seL4/elfloader-tool/include/fdt.h

对照 `fdt.c`，`fdt.c`
> 
```
tools/riscv-pk/machine/fdt.h:uint32_t fdt_size(uintptr_t fdt);
tools/riscv-pk/machine/fdt.c:uint32_t fdt_size(uintptr_t fdt)
tools/seL4/elfloader-tool/src/common.c:        *chosen_dtb_size = fdt_size(dtb);
tools/seL4/elfloader-tool/src/fdt.c:uint32_t fdt_size(void *fdt)
```

其中，`riscv-pk/machine`没有在`*.ninja`文件中出现

因此，大概率是 `seL4/elfloader-tool/src/`文件夹里面的


## 更改方法

> tools/seL4/elfloader-tool/include/fdt.h

```c
void keystoneFDT(uint64_t memstart, uint64_t memsize);    //+++
uint32_t fdt_size(void *fdt);
```


## new--更改方法

> 直接在 ` kernel/src/arch/riscv/kernel/boot.c `文件中，增加 `keystoneFDT` 函数的定义与实现

另外 `add_avail_p_reg`需要包含头文件，
