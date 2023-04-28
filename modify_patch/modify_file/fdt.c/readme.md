### 方法
> 根据 `build.ninja`  ， `rules.ninja`文件

> 11.0.0
```
wangmin@wangmin-G3-3579:~/sel4-test/temp/11.0.0$ ls | xargs grep -r 'fdt_size('
tools/riscv-pk/bbl/bbl.c:  uint32_t size = fdt_size(source);
tools/riscv-pk/machine/fdt.h:uint32_t fdt_size(uintptr_t fdt);
tools/riscv-pk/machine/fdt.c:uint32_t fdt_size(uintptr_t fdt)
tools/seL4/elfloader-tool/src/common.c:        *chosen_dtb_size = fdt_size(dtb);
tools/seL4/elfloader-tool/src/fdt.c:uint32_t fdt_size(void *fdt)
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
