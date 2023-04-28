### 方法
> 根据 `build.ninja`  ， `rules.ninja`文件

> 11.0.0
```
wangmin@wangmin-G3-3579:~/sel4-test/temp/11.0.0$ ls | xargs grep -r 'fdt_size('
tools/riscv-pk/bbl/bbl.c:  uint32_t size = fdt_size(source);
⭐ tools/riscv-pk/machine/fdt.h:uint32_t fdt_size(uintptr_t fdt); ⭐
⭐ tools/riscv-pk/machine/fdt.c:uint32_t fdt_size(uintptr_t fdt) ⭐
tools/seL4/elfloader-tool/src/common.c:        *chosen_dtb_size = fdt_size(dtb);
⭐ tools/seL4/elfloader-tool/src/fdt.c:uint32_t fdt_size(void *fdt) ⭐
tools/seL4/elfloader-tool/include/fdt.h:uint32_t fdt_size(void *fdt);
```

> 10.1.1
```
wangmin@wangmin-G3-3579:~/keystone0.4/keystone-sel4_2/keystone-seL4/kernel$ ls | xargs grep -r 'fdt_size('
include/plat/spike/plat/machine/fdt.h:uint32_t fdt_size(void *fdt);
src/plat/spike/machine/fdt.c.orig:uint32_t fdt_size(void *fdt)
src/plat/spike/machine/fdt.c:uint32_t fdt_size(void *fdt)
src/arch/riscv/kernel/boot.c.orig:                                    dtb_output_p + fdt_size((void*)dtb_output),
```


### 更改方法
> tools/seL4/elfloader-tool/src/fdt.c

```c
void keystoneFDT(uint64_t memstart, uint64_t memsize)
{
  if (!add_avail_p_reg((p_region_t){
        memstart, memstart + memsize
        })) {
    printf("Failed to add physical memory region %llu-%llu\n", (unsigned long long)memstart,
        (unsigned long long)(memstart + memsize));
  }
}

uint32_t fdt_size(void *fdt)
{
    struct fdt_header *hdr = (struct fdt_header *)fdt;

    if (be32_to_le(hdr->magic) != FDT_MAGIC ||
        be32_to_le(hdr->last_comp_version) > FDT_MAX_VER) {
        return 0;
    }

    return be32_to_le(hdr->totalsize);
}
```

> 补充：`add_avail_p_reg`未定义
