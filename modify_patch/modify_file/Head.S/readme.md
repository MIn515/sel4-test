## 10.1.1  no_modify

```c
#include <config.h>
#include <util.h>

.section .boot.text, "ax"
.global _start
.extern init_kernel
.extern kernel_stack_alloc
.extern __global_pointer$
.extern restore_user_context
.extern trap_entry

_start:
.option push
.option norelax
1:auipc gp, %pcrel_hi(__global_pointer$)
  addi  gp, gp, %pcrel_lo(1b)
.option pop

  /* hartid is in a4 */
  li  sp, BIT(CONFIG_KERNEL_STACK_BITS)
  mul sp, sp, a4
  la  x1, (kernel_stack_alloc + (BIT(CONFIG_KERNEL_STACK_BITS)))
  add sp, sp, x1

  csrrw x0, sscratch, a4 /* zero sscratch for the init task */

  /* la sp, (kernel_stack_alloc + BIT(CONFIG_KERNEL_STACK_BITS)) */
  jal init_kernel

  la ra, restore_user_context
  jr ra
```

## 10.1.1 apply_patch

```c
  /* hartid is in a4 */
  li  sp, BIT(CONFIG_KERNEL_STACK_BITS)
  //mul sp, sp, a4
  mul sp, sp, x0
  la  x1, (kernel_stack_alloc + (BIT(CONFIG_KERNEL_STACK_BITS)))
  add sp, sp, x1

//csrrw x0, sscratch, a4 /* zero sscratch for the init task */
csrrw x0, sscratch, x0 //a4 /* zero sscratch for the init task */ b 
```

## 11.0.0 相差很大

```c
_start:
  fence.i
.option push
.option norelax
1:auipc gp, %pcrel_hi(__global_pointer$)
  addi  gp, gp, %pcrel_lo(1b)
.option pop
  la sp, (kernel_stack_alloc + BIT(CONFIG_KERNEL_STACK_BITS))
  csrw sscratch, x0 /* zero sscratch for the init task */

#if CONFIG_MAX_NUM_NODES > 1
/* setup the per-core stack */
  mv t0, a5
  slli t0, t0, CONFIG_KERNEL_STACK_BITS
  add  sp, sp, t0
  /* put the stack in sscratch */
  csrw sscratch, sp
#endif
  jal init_kernel
  la ra, restore_user_context
  jr ra
```

## 11.0.0 try to modify 

11.0.0对SMP的支持；keystone 是否支持？  此版修改，设置SeL4 默认不支持SMP(CONFIG_MAX_NUM_NODES = 1.)

```c
//未改
```
