# 


## v-1

![image](https://github.com/MIn515/sel4-test/assets/74185337/8d5a36ff-ce49-47c4-b153-b9f48444f363)


<details>
  <summary>代码1</summary>
  
  ```c

/*   kinds_main/nomodify_thrad_2.c.   */
// sel4_11.0.0 在 RISCV 上运行的代码与结果 //
#include <autoconf.h>

#include <stdio.h>
#include <assert.h>

#include <sel4/sel4.h>

#include <simple/simple.h>
#include <simple-default/simple-default.h>

#include <vka/object.h>

#include <allocman/allocman.h>
#include <allocman/bootstrap.h>
#include <allocman/vka.h>

#include <utils/arith.h>
#include <utils/zf_log.h>
#include <sel4utils/sel4_zf_logif.h>
#include <sel4utils/thread.h>

#include <sel4platsupport/bootinfo.h>

/* global environment variables */

/* seL4_BootInfo defined in bootinfo.h */
seL4_BootInfo *info;

/* simple_t defined in simple.h */
simple_t simple;

/* vka_t defined in vka.h */
vka_t vka;

/* allocman_t defined in allocman.h */
allocman_t *allocman;

/* static memory for the allocator to bootstrap with */
#define ALLOCATOR_STATIC_POOL_SIZE (BIT(seL4_PageBits) * 10)
UNUSED static char allocator_mem_pool[ALLOCATOR_STATIC_POOL_SIZE];

/* stack for the new thread */
#define THREAD_2_STACK_SIZE 512
static uint64_t thread_2_stack[THREAD_2_STACK_SIZE] __attribute__((aligned(2048)));

/* function to run in the new thread */
void thread_2(void)
{
    /* TASK 15: print something */
    printf("thread_2:helloword!\n");
    while (1);
}

int main(void)
{
    UNUSED int error = 0;
    /* TASK 1: get boot info */
    info = platsupport_get_bootinfo();
    ZF_LOGF_IF(info == NULL, "Failed to get bootinfo.");
    zf_log_set_tag_prefix("dynamic-1:");
    NAME_THREAD(seL4_CapInitThreadTCB, "dynamic-1");
    /* TASK 2: initialise simple object */
    simple_default_init_bootinfo(&simple, info);
    /* TASK 3: print out bootinfo and other info about simple */
    simple_print(&simple);
    /* TASK 4: create an allocator */
    allocman = bootstrap_use_current_simple(&simple, ALLOCATOR_STATIC_POOL_SIZE, allocator_mem_pool);

    ZF_LOGF_IF(allocman == NULL, "Failed to initialize alloc manager.\n"
                                 "\tMemory pool sufficiently sized?\n"
                                 "\tMemory pool pointer valid?\n");
    /* TASK 5: create a vka (interface for interacting with the underlying allocator) */
    allocman_make_vka(&vka, allocman);

    /* TASK 6: get our cspace root cnode */
    seL4_CPtr cspace_cap;
    cspace_cap = simple_get_cnode(&simple);
    /* TASK 7: get our vspace root page diretory */
    seL4_CPtr pd_cap;
    pd_cap = simple_get_pd(&simple);
    /* TASK 8: create a new TCB */
    vka_object_t tcb_object = {0};
    error = vka_alloc_tcb(&vka, &tcb_object);

    ZF_LOGF_IFERR(error, "Failed to allocate new TCB.\n"
                         "\tVKA given sufficient bootstrap memory?");
    /* TASK 9: initialise the new TCB */
    error = seL4_TCB_Configure(tcb_object.cptr, seL4_CapNull, cspace_cap, seL4_NilData, pd_cap,
                               seL4_NilData, 0, 0);
    ZF_LOGF_IFERR(error, "Failed to configure the new TCB object.\n"
                         "\tWe're running the new thread with the root thread's CSpace.\n"
                         "\tWe're running the new thread in the root thread's VSpace.\n"
                         "\tWe will not be executing any IPC in this app.\n");

    error = seL4_TCB_SetPriority(tcb_object.cptr, simple_get_tcb(&simple), 255);
    ZF_LOGF_IFERR(error, "Failed to set the priority for the new TCB object.\n");
    /* TASK 10: give the new thread a name */
    NAME_THREAD(tcb_object.cptr, "thread_2");
    UNUSED seL4_UserContext regs = {0};
    /* TASK 11: set instruction pointer where the thread shoud start running */
    sel4utils_set_instruction_pointer(&regs, (seL4_Word)thread_2);
    const int stack_alignment_requirement = sizeof(seL4_Word) * 2;
    uintptr_t thread_2_stack_top = (uintptr_t)thread_2_stack + sizeof(thread_2_stack);
    ZF_LOGF_IF(thread_2_stack_top % (stack_alignment_requirement) != 0,
               "Stack top isn't aligned correctly to a %dB boundary.\n"
               "\tDouble check to ensure you're not trampling.",
               stack_alignment_requirement);
    /* TASK 12: set stack pointer for the new thread */
    sel4utils_set_stack_pointer(&regs, thread_2_stack_top);
    /* TASK 13: actually write the TCB registers. */
    error = seL4_TCB_WriteRegisters(tcb_object.cptr, 0, 0, 2, &regs);
    ZF_LOGF_IFERR(error, "Failed to write the new thread's register set.\n"
                         "\tDid you write the correct number of registers? See arg4.\n");
    /* TASK 14: start the new thread running */
    error = seL4_TCB_Resume(tcb_object.cptr);
    ZF_LOGF_IFERR(error, "Failed to start new thread.\n");
    /* we are done, say hello */
    printf("hello，world!\n");
    return 0;
}
  
  ```
</details>

## 调试 
  
![image](https://github.com/MIn515/sel4-test/assets/74185337/1a81d064-169c-4ae9-8703-1f94ca5df404)

  
```
__libc_csu_init (argc=<optimized out>, argv=0x3fffa43d58, envp=0x3fffa43d78)
    at ../csu/elf-init.c:87
87	../csu/elf-init.c: 没有那个文件或目录.


__libc_start_main (main=0x1072a <main>, argc=<optimized out>, argv=0x3fffa43d58, 
    init=0x7dd1c <__libc_csu_init>, fini=0x7ddac <__libc_csu_fini>, rtld_fini=0x0, 
    stack_end=<optimized out>) at libc-start.c:288
288	libc-start.c: 没有那个文件或目录.

```
  
## v-2
  
 ![image](https://github.com/MIn515/sel4-test/assets/74185337/0d145ca1-d219-4196-a896-789b3f7fbb7e)

<details>
  <summary>代码1</summary>
  
  ```c

/*   kinds_main/nomodify_thrad_2.c.   */
// sel4_11.0.0 在 RISCV 上运行的代码与结果 //
#include <autoconf.h>

#include <stdio.h>
#include <assert.h>

#include <sel4/sel4.h>

#include <simple/simple.h>
#include <simple-default/simple-default.h>

#include <vka/object.h>

#include <allocman/allocman.h>
#include <allocman/bootstrap.h>
#include <allocman/vka.h>

#include <utils/arith.h>
#include <utils/zf_log.h>
#include <sel4utils/sel4_zf_logif.h>
#include <sel4utils/thread.h>

#include <sel4platsupport/bootinfo.h>

/* global environment variables */

/* seL4_BootInfo defined in bootinfo.h */
seL4_BootInfo *info;

/* simple_t defined in simple.h */
simple_t simple;

/* vka_t defined in vka.h */
vka_t vka;

/* allocman_t defined in allocman.h */
allocman_t *allocman;

/* static memory for the allocator to bootstrap with */
#define ALLOCATOR_STATIC_POOL_SIZE (BIT(seL4_PageBits) * 10)
UNUSED static char allocator_mem_pool[ALLOCATOR_STATIC_POOL_SIZE];

/* stack for the new thread */
#define THREAD_2_STACK_SIZE 512
static uint64_t thread_2_stack[THREAD_2_STACK_SIZE] __attribute__((aligned(2048)));

/* function to run in the new thread */
void thread_2(void)
{
    /* TASK 15: print something */
    printf("thread_2:helloword!\n");
    while (1);
}

int main(void)
{
    UNUSED int error = 0;
    /* TASK 1: get boot info */
    info = platsupport_get_bootinfo();
    ZF_LOGF_IF(info == NULL, "Failed to get bootinfo.");
    zf_log_set_tag_prefix("dynamic-1:");
    NAME_THREAD(seL4_CapInitThreadTCB, "dynamic-1");
    /* TASK 2: initialise simple object */
    simple_default_init_bootinfo(&simple, info);
    /* TASK 3: print out bootinfo and other info about simple */
    simple_print(&simple);
    /* TASK 4: create an allocator */
    allocman = bootstrap_use_current_simple(&simple, ALLOCATOR_STATIC_POOL_SIZE, allocator_mem_pool);

    ZF_LOGF_IF(allocman == NULL, "Failed to initialize alloc manager.\n"
                                 "\tMemory pool sufficiently sized?\n"
                                 "\tMemory pool pointer valid?\n");
    /* TASK 5: create a vka (interface for interacting with the underlying allocator) */
    allocman_make_vka(&vka, allocman);

    /* TASK 6: get our cspace root cnode */
    seL4_CPtr cspace_cap;
    cspace_cap = simple_get_cnode(&simple);
    /* TASK 7: get our vspace root page diretory */
    seL4_CPtr pd_cap;
    pd_cap = simple_get_pd(&simple);
    /* TASK 8: create a new TCB */
    vka_object_t tcb_object = {0};
    error = vka_alloc_tcb(&vka, &tcb_object);

    ZF_LOGF_IFERR(error, "Failed to allocate new TCB.\n"
                         "\tVKA given sufficient bootstrap memory?");
    /* TASK 9: initialise the new TCB */
    error = seL4_TCB_Configure(tcb_object.cptr, seL4_CapNull, cspace_cap, seL4_NilData, pd_cap,
                               seL4_NilData, 0, 0);
    ZF_LOGF_IFERR(error, "Failed to configure the new TCB object.\n"
                         "\tWe're running the new thread with the root thread's CSpace.\n"
                         "\tWe're running the new thread in the root thread's VSpace.\n"
                         "\tWe will not be executing any IPC in this app.\n");

    error = seL4_TCB_SetPriority(tcb_object.cptr, simple_get_tcb(&simple), 255);
    ZF_LOGF_IFERR(error, "Failed to set the priority for the new TCB object.\n");
    /* TASK 10: give the new thread a name */
    NAME_THREAD(tcb_object.cptr, "thread_2");
    UNUSED seL4_UserContext regs = {0};
    /* TASK 11: set instruction pointer where the thread shoud start running */
    sel4utils_set_instruction_pointer(&regs, (seL4_Word)thread_2);
    const int stack_alignment_requirement = sizeof(seL4_Word) * 2;
    uintptr_t thread_2_stack_top = (uintptr_t)thread_2_stack + sizeof(thread_2_stack);
    ZF_LOGF_IF(thread_2_stack_top % (stack_alignment_requirement) != 0,
               "Stack top isn't aligned correctly to a %dB boundary.\n"
               "\tDouble check to ensure you're not trampling.",
               stack_alignment_requirement);
    /* TASK 12: set stack pointer for the new thread */
    sel4utils_set_stack_pointer(&regs, thread_2_stack_top);
    /* TASK 13: actually write the TCB registers. */
    error = seL4_TCB_WriteRegisters(tcb_object.cptr, 0, 0, 2, &regs);
    ZF_LOGF_IFERR(error, "Failed to write the new thread's register set.\n"
                         "\tDid you write the correct number of registers? See arg4.\n");
    /* TASK 14: start the new thread running */
    error = seL4_TCB_Resume(tcb_object.cptr);
    ZF_LOGF_IFERR(error, "Failed to start new thread.\n");
    /* we are done, say hello */
    printf("main: hello world\n");
    return 0;
}
  
  ```
</details>
