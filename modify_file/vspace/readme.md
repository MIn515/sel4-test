## 10.1.1  no_modify

```c
#include <object/structures.h>

cap_t create_it_address_space(cap_t root_cnode_cap, v_region_t it_v_reg);
void map_it_pt_cap(cap_t vspace_cap, cap_t pt_cap);
void map_it_frame_cap(cap_t vspace_cap, cap_t frame_cap);
void map_kernel_window(void);
void map_kernel_frame(paddr_t paddr, pptr_t vaddr, vm_rights_t vm_rights);
void activate_kernel_vspace(void);
void write_it_asid_pool(cap_t it_ap_cap, cap_t it_lvl1pt_cap);
```

## 10.1.1 apply_patch

```c
#include <object/structures.h>

cap_t create_it_address_space(cap_t root_cnode_cap, v_region_t it_v_reg);
void map_it_pt_cap(cap_t vspace_cap, cap_t pt_cap);
void map_it_frame_cap(cap_t vspace_cap, cap_t frame_cap);
void keystone_map_kernel_window(word_t start, word_t end);
void map_kernel_window(void);
void map_kernel_frame(paddr_t paddr, pptr_t vaddr, vm_rights_t vm_rights);
void activate_kernel_vspace(void);
void write_it_asid_pool(cap_t it_ap_cap, cap_t it_lvl1pt_cap);
```

## 11.0.0 vspace与10.1.1相差不大，改的地方如下

```c
// 11.0.0 去除下面一句话
exception_t performPageInvocationRemapPTE(pte_t pte, pte_t *base);
```

## 11.0.0 try to modify 

```c
//同 
```
