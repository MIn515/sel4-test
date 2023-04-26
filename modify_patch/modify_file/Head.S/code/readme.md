```S
#include <config.h>
#include <util.h>

/* 指定代码段为 .boot.text，链接类型为 ax */
.section .boot.text, "ax"

/* _start 是全局标记，可以被链接器识别 */
.global _start

/* 声明外部符号，需要在其他地方定义 */
.extern init_kernel
.extern kernel_stack_alloc
.extern __global_pointer$
.extern restore_user_context
.extern trap_entry

/* _start 标记的代码段 */
_start:

/* 保存当前的 option，然后设置 norelax 选项 */
.option push
.option norelax

/* 设置全局指针 gp 为 __global_pointer$ 的地址 */
1:auipc gp, %pcrel_hi(__global_pointer$)
  addi  gp, gp, %pcrel_lo(1b)

/* 恢复之前的 option */
.option pop

/* 获取 hartid 存储在 a4 中 */
  /* hartid is in a4 */

/* 设置内核栈的大小为 CONFIG_KERNEL_STACK_BITS，然后乘以 hartid；为内核栈分配一定的空间 */
/* li :将立即数加载到寄存器 */
  li  sp, BIT(CONFIG_KERNEL_STACK_BITS)
/* sp 寄存器（栈指针寄存器）的值乘以 a4 寄存器的值，并将结果存储回 sp 寄存器中
      (将栈指针向上或向下调整 a4 倍，从而分配或释放 a4 个 32 位字的栈空间) */
  mul sp, sp, a4

/* 获取 kernel_stack_alloc 的地址，加上 CONFIG_KERNEL_STACK_BITS，然后把结果保存在 x1 中 */
  la  x1, (kernel_stack_alloc + (BIT(CONFIG_KERNEL_STACK_BITS)))

/* 把 x1 的值加到 sp 中，作为内核栈的起始地址 */
  add sp, sp, x1

/* 把 a4 的值保存到 sscratch 寄存器中，以便 init_kernel 使用 */
/* 先把 特权级下的 sscratch 寄存器写入到 a4，再把 x0 寄存器值写入到 sscratch ， x0寄存器是伪寄存器，恒为0，因此，sscratch被清零 */
  csrrw x0, sscratch, a4 /* zero sscratch for the init task */

/* 跳转到 init_kernel 函数 */
  jal init_kernel

/* 设置返回地址为 restore_user_context，然后跳转 */
  la ra, restore_user_context
  jr ra

```

```S
#include <config.h>
#include <util.h>

.section .boot.text, "ax"
.global _start
.extern init_kernel
.extern kernel_stack_alloc
.extern __global_pointer$
.extern restore_user_context
.extern trap_entry

/*
 * When SMP is enabled, the elfloader passes the hart ID in a4
 * and logical core ID in a5.
 */
_start:
  fence.i // 添加了一个 fence.i 指令，用于保证指令和数据的一致性
.option push
.option norelax
1:auipc gp, %pcrel_hi(__global_pointer$)
  addi  gp, gp, %pcrel_lo(1b)
.option pop
  // 第一段汇编代码中，设置栈指针的指令在这里
  la sp, (kernel_stack_alloc + BIT(CONFIG_KERNEL_STACK_BITS))

  // 添加了一个指令，将 sscratch 寄存器清零，为 init 任务准备好 sscratch 寄存器
  csrw sscratch, x0 /* zero sscratch for the init task */

#if CONFIG_MAX_NUM_NODES > 1
  /* setup the per-core stack */
  // 获取逻辑核心 ID，用于计算栈的位置
  mv t0, a5
  // 计算出栈指针的位置，并将其保存到 sp 寄存器中
  slli t0, t0, CONFIG_KERNEL_STACK_BITS
  add  sp, sp, t0
  /* put the stack in sscratch */
  // 将栈指针保存到 sscratch 寄存器中
  csrw sscratch, sp
#endif

  // 跳转到 init_kernel 函数
  jal init_kernel

  // 加载 restore_user_context 函数的地址到 ra 寄存器中
  la ra, restore_user_context
  // 跳转到 restore_user_context 函数
  jr ra

```
**第二段汇编代码相对于第一段汇编代码主要有以下变化：**
1. 添加了一条 fence.i 指令，用于保证指令和数据的一致性。这条指令的作用是将之前的所有指令和数据在处理器内部进行同步，保证多核情况下的正确性。第一段汇编代码中没有这个指令，因为第一段代码是单核版本的，不存在同步问题。

2. 移动了 la sp, (kernel_stack_alloc + BIT(CONFIG_KERNEL_STACK_BITS)) 这条指令的位置，把它放在了条件编译块的前面。这是因为在多核版本中，每个核都需要有自己的栈空间，而在单核版本中，所有任务都使用同一块栈空间。

3. 添加了两条指令用于设置栈指针，并将栈指针保存到 sscratch 寄存器中。这部分代码位于一个条件编译块中，当 CONFIG_MAX_NUM_NODES 大于 1 时才会被编译进去。这是因为在多核情况下，每个核心需要有自己的栈空间。
