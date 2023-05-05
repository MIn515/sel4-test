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


### 更改方法---discard
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

### 方法---new
> 见`fdt.h`

## 补充
> ：`add_avail_p_reg`未定义

```c
BOOT_CODE bool_t add_avail_p_reg(p_region_t reg)
{
    if (num_avail_p_regs == MAX_AVAIL_P_REGS) {
        return false;
    }
    avail_p_regs[num_avail_p_regs] = reg;
    num_avail_p_regs++;
    return true;
}
```

> 11.0.0.     ls | xargs grep -r 'avail_p_regs'

```
kernel/src/arch/riscv/kernel/boot.c:    init_freemem(get_num_avail_p_regs(), get_avail_p_regs(), MAX_RESERVED, res_reg, ui_v_reg, 0);
kernel/src/arch/riscv/machine/hardware.c:BOOT_CODE int get_num_avail_p_regs(void)
kernel/src/arch/riscv/machine/hardware.c:    return sizeof(avail_p_regs) / sizeof(p_region_t);
kernel/src/arch/riscv/machine/hardware.c:BOOT_CODE p_region_t *get_avail_p_regs(void)
kernel/src/arch/riscv/machine/hardware.c:    return (p_region_t *) avail_p_regs;
kernel/include/plat/spike/plat/instance/rocket-chip/hardware.h:static p_region_t BOOT_DATA avail_p_regs[] = {
kernel/include/arch/riscv/arch/machine.h:int get_num_avail_p_regs(void);
kernel/include/arch/riscv/arch/machine.h:p_region_t *get_avail_p_regs(void);
kernel/include/kernel/boot.h:#define MAX_NUM_FREEMEM_REG (ARRAY_SIZE(avail_p_regs) + MODE_RESERVED + 1 + 1)
```

> `MAX_AVAIL_P_REGS`未找到定义，或许在11.0.0中去除了对`AVAIL_P_REGS`数组大小的限制

### 额外修改方法
>  kernel/src/arch/riscv/machine/hardware.c

```c
//+++   63，11
BOOT_CODE bool_t add_avail_p_reg(p_region_t reg)
{
    //if (num_avail_p_regs == MAX_AVAIL_P_REGS) {
    //    return false;
    //}
    int num_avail_p_regs = get_num_avail_p_regs();
    avail_p_regs[num_avail_p_regs] = reg;
    //num_avail_p_regs++;
    return true;
}
```
> kernel/include/arch/riscv/arch/machine.h

```c
int get_num_avail_p_regs(void);
p_region_t *get_avail_p_regs(void);
//+++   221, 1
bool_t add_avail_p_reg(p_region_t reg);   
```

> kernel/tools/hardware/outputs/c_header.py
`const`无法 add

```py
/* PHYSICAL MEMORY */
static const p_region_t BOOT_RODATA avail_p_regs[] = {
    {% for reg in physical_memory %}
    { {{ "0x{:x}".format(reg.base) }}, {{ "0x{:x}".format(reg.base + reg.size) }} }, /* {{reg.owner.path}} */
    {% endfor %}
};

## const 去掉

/* PHYSICAL MEMORY */
static  p_region_t BOOT_RODATA avail_p_regs[] = {
    {% for reg in physical_memory %}
    { {{ "0x{:x}".format(reg.base) }}, {{ "0x{:x}".format(reg.base + reg.size) }} }, /* {{reg.owner.path}} */
    {% endfor %}
};
```
