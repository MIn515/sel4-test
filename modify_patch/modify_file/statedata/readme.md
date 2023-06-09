
<details>
<summary> 10.1.1 未修改</summary>

```c
#ifndef __ARCH_MODEL_STATEDATA_H
#define __ARCH_MODEL_STATEDATA_H

#include <config.h>
#include <types.h>
#include <util.h>
#include <object/structures.h>
#include <arch/types.h>
#include <plat/machine/devices.h>


NODE_STATE_BEGIN(archNodeState)
/* TODO: add RISCV-dependent fields here */
/* Bitmask of all cores should receive the reschedule IPI */
NODE_STATE_DECLARE(word_t, ipiReschedulePending);
NODE_STATE_END(archNodeState);

extern asid_pool_t *riscvKSASIDTable[BIT(asidHighBits)];

/* Kernel Page Tables */
extern pte_t kernel_root_pageTable[BIT(PT_INDEX_BITS)] VISIBLE;

/* If our PADDR_LOAD is not 1GiB aligned then we need to introduce a level2 pagetable
 * in order to map in our kernel image at KERNEL_BASE */
#if CONFIG_PT_LEVELS == 3 && !IS_ALIGNED(PADDR_LOAD, RISCV_GET_LVL_PGSIZE_BITS(1))
#define RISCV_KERNEL_WINDOW_LEVEL2_PT
extern pte_t kernel_image_level2_pt[BIT(PT_INDEX_BITS)];
#endif
#endif
```

</details>

<details>
<summary> 10.1.1 官方修改</summary>

```c
/* Kernel Page Tables */
extern pte_t kernel_root_pageTable[BIT(PT_INDEX_BITS)] VISIBLE;
//+++
extern pte_t kernel_root_level2_pageTable[BIT(PT_INDEX_BITS)] VISIBLE;

/* If our PADDR_LOAD is not 1GiB aligned then we need to introduce a level2 pagetable
 * in order to map in our kernel image at KERNEL_BASE */
//#if CONFIG_PT_LEVELS == 3 && !IS_ALIGNED(PADDR_LOAD, RISCV_GET_LVL_PGSIZE_BITS(1))
#define RISCV_KERNEL_WINDOW_LEVEL2_PT
extern pte_t kernel_image_level2_pt[BIT(PT_INDEX_BITS)];
// +++
extern pte_t kernel_image_level3_pt[BIT(PT_INDEX_BITS)];
//#endif
#endif
```

</details>


<details>
<summary> 11.0.0 未修改</summary>

```c
#ifndef __ARCH_MODEL_STATEDATA_H
#define __ARCH_MODEL_STATEDATA_H

#include <config.h>
#include <types.h>
#include <util.h>
#include <model/statedata.h>
#include <object/structures.h>
#include <arch/types.h>


NODE_STATE_BEGIN(archNodeState)
/* TODO: add RISCV-dependent fields here */
/* Bitmask of all cores should receive the reschedule IPI */
NODE_STATE_DECLARE(word_t, ipiReschedulePending);
NODE_STATE_END(archNodeState);

extern asid_pool_t *riscvKSASIDTable[BIT(asidHighBits)];

/* Kernel Page Tables */
extern pte_t kernel_root_pageTable[BIT(PT_INDEX_BITS)] VISIBLE;

/* We need to introduce a level2 pagetable in order to map the BBL to a separate
 * page entry to avoid PMP exception. */
#if __riscv_xlen != 32
extern pte_t kernel_image_level2_pt[BIT(PT_INDEX_BITS)];
#endif

#endif
```

</details>


<details>
<summary> new 手动修改</summary>

```c
/* Kernel Page Tables */
extern pte_t kernel_root_pageTable[BIT(PT_INDEX_BITS)] VISIBLE; 
extern pte_t kernel_root_level2_pageTable[BIT(PT_INDEX_BITS)] VISIBLE;  //+++

/* We need to introduce a level2 pagetable in order to map the BBL to a separate
 * page entry to avoid PMP exception. */
#if __riscv_xlen != 32
//等价于10.1.1 中的 #ifdef RISCV_KERNEL_WINDOW_LEVEL2_PT
extern pte_t kernel_image_level2_pt[BIT(PT_INDEX_BITS)];
extern pte_t kernel_image_level3_pt[BIT(PT_INDEX_BITS)];  //+++
```

</details>
