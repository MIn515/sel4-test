## 10.1.1  no_modify

```c
#ifndef __ARCH_KERNEL_BOOT_H
#define __ARCH_KERNEL_BOOT_H

#include <types.h>

cap_t create_unmapped_it_frame_cap(pptr_t pptr, bool_t use_large);
cap_t create_mapped_it_frame_cap(cap_t pd_cap, pptr_t pptr, vptr_t vptr, asid_t asid, bool_t use_large, bool_t executable);

void init_kernel(
    paddr_t ui_p_reg_start,
    paddr_t ui_p_reg_end,
    sword_t pv_offset,
    vptr_t  v_entry,
    word_t hartid,
    paddr_t dtb_output
);

#endif
```

## 10.1.1 apply_patch

```c
#ifndef __ARCH_KERNEL_BOOT_H
#define __ARCH_KERNEL_BOOT_H

#include <types.h>

cap_t create_unmapped_it_frame_cap(pptr_t pptr, bool_t use_large);
cap_t create_mapped_it_frame_cap(cap_t pd_cap, pptr_t pptr, vptr_t vptr, asid_t asid, bool_t use_large, bool_t executable);

void init_kernel(
    uint64_t dummy,
    paddr_t keystone_dram_base,
    uint64_t keystone_dram_size,
    paddr_t keystone_runtime_start,
    paddr_t keystone_user_start,
    paddr_t keystone_free_start,
    vptr_t keystone_utm_ptr,
    uint64_t keystone_utm_size
);

#endif
```

## 11.0.0 未修改

```c
#ifndef __ARCH_KERNEL_BOOT_H
#define __ARCH_KERNEL_BOOT_H

#include <config.h>
#include <types.h>

cap_t create_unmapped_it_frame_cap(pptr_t pptr, bool_t use_large);
cap_t create_mapped_it_frame_cap(cap_t pd_cap, pptr_t pptr, vptr_t vptr, asid_t asid, bool_t use_large,
                                 bool_t executable);

void init_kernel(
    paddr_t ui_p_reg_start,
    paddr_t ui_p_reg_end,
    sword_t pv_offset,
    vptr_t  v_entry
#ifdef ENABLE_SMP_SUPPORT
    ,
    word_t hart_id,
    word_t core_id
#endif
);

#endif

```

## 11.0.0 try to modify 

```c
#ifndef __ARCH_KERNEL_BOOT_H
#define __ARCH_KERNEL_BOOT_H

#include <config.h>
#include <types.h>

cap_t create_unmapped_it_frame_cap(pptr_t pptr, bool_t use_large);
cap_t create_mapped_it_frame_cap(cap_t pd_cap, pptr_t pptr, vptr_t vptr, asid_t asid, bool_t use_large,
                                 bool_t executable);

void init_kernel(
    uint64_t dummy,
    paddr_t keystone_dram_base,
    uint64_t keystone_dram_size,
    paddr_t keystone_runtime_start,
    paddr_t keystone_user_start,
    paddr_t keystone_free_start,
    vptr_t keystone_utm_ptr,
    uint64_t keystone_utm_size
#ifdef ENABLE_SMP_SUPPORT
    ,
    word_t hart_id,
    word_t core_id
#endif
);

#endif
```
