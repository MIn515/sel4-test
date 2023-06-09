/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

/*
 * seL4 tutorial part 2: create and run a new thread
 */

/* Include Kconfig variables. */
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

#include <sel4platsupport/bootinfo.h>

/* global environment variables */


seL4_BootInfo *info;


simple_t simple;

vka_t vka;

allocman_t *allocman;

/* static memory for the allocator to bootstrap with */
#define ALLOCATOR_STATIC_POOL_SIZE (BIT(seL4_PageBits) * 10)
static char allocator_mem_pool[ALLOCATOR_STATIC_POOL_SIZE];

/* stack for the new thread */
#define THREAD_2_STACK_SIZE 512
//static uint64_t thread_2_stack[THREAD_2_STACK_SIZE];
static uint64_t thread_2_stack[THREAD_2_STACK_SIZE] __attribute__((aligned(4096)));

/* function to run in the new thread */
void thread_2(void) {
    printf("this is thread2\n");
    seL4_DebugDumpScheduler();

    //seL4_Yield();
    //printf("this is thread2\n");
    //seL4_DebugDumpScheduler();
    //while (1);
}


int main(void) {
    UNUSED int error = 0;

    info = platsupport_get_bootinfo();
    ZF_LOGF_IF(info == NULL, "Failed to get bootinfo.");
    zf_log_set_tag_prefix("hello-2:");
    seL4_DebugNameThread(seL4_CapInitThreadTCB, "hello-2");

    simple_default_init_bootinfo(&simple, info);


/*- if solution -*/
    //simple_print(&simple);
/*- endif -*/

/*- if solution -*/
    allocman = bootstrap_use_current_simple(&simple, ALLOCATOR_STATIC_POOL_SIZE, allocator_mem_pool);
/*- endif -*/
    ZF_LOGF_IF(allocman == NULL, "Failed to initialize alloc manager.\n"
               "\tMemory pool sufficiently sized?\n"
               "\tMemory pool pointer valid?\n");

/*- if solution -*/
    allocman_make_vka(&vka, allocman);
/*- endif -*/

/*- if solution -*/
    seL4_CPtr cspace_cap;
    cspace_cap = simple_get_cnode(&simple);
/*- endif -*/

/*- if solution -*/
    seL4_CPtr pd_cap;
    pd_cap = simple_get_pd(&simple);
/*- endif -*/

/*- if solution -*/
    vka_object_t tcb_object = {0};
    error = vka_alloc_tcb(&vka, &tcb_object);
/*- endif -*/
    ZF_LOGF_IFERR(error, "Failed to allocate new TCB.\n"
                  "\tVKA given sufficient bootstrap memory?");

/*- if solution -*/
    error = seL4_TCB_Configure(tcb_object.cptr, seL4_CapNull,  cspace_cap, seL4_NilData, pd_cap, seL4_NilData, 0, 0);
/*- endif -*/
    ZF_LOGF_IFERR(error, "Failed to configure the new TCB object.\n"
                  "\tWe're running the new thread with the root thread's CSpace.\n"
                  "\tWe're running the new thread in the root thread's VSpace.\n"
                  "\tWe will not be executing any IPC in this app.\n");

    error =  seL4_TCB_SetPriority(tcb_object.cptr,simple_get_tcb(&simple), 255);
    ZF_LOGF_IFERR(error, "Failed to set the priority for the new TCB object.\n");
    seL4_DebugNameThread(tcb_object.cptr, "hello-2: thread_2");
/*- endif -*/

    /*
     * set start up registers for the new thread:
     */

    UNUSED seL4_UserContext regs = {0};

    sel4utils_set_instruction_pointer(&regs, (seL4_Word)thread_2);

    /* check that stack is aligned correctly */

    const int stack_alignment_requirement = sizeof(seL4_Word) * 2;
    //const int stack_alignment_requirement = sizeof(seL4_Word);
    uintptr_t thread_2_stack_top = (uintptr_t)thread_2_stack + sizeof(thread_2_stack);
    printf("thread_2_stack = %lu\n", (uintptr_t)thread_2_stack);
    ZF_LOGF_IF(thread_2_stack_top % (stack_alignment_requirement) != 0,
               "Stack top isn't aligned correctly to a %dB boundary.\n"
               "\tDouble check to ensure you're not trampling.",
               stack_alignment_requirement);


    sel4utils_set_stack_pointer(&regs, thread_2_stack_top);

   
    error = seL4_TCB_WriteRegisters(tcb_object.cptr, 0, 0, 2, &regs);
    ZF_LOGF_IFERR(error, "Failed to write the new thread's register set.\n"
                  "\tDid you write the correct number of registers? See arg4.\n");

    printf("main: hello world 1 \n\n");
    seL4_DebugDumpScheduler();

    error = seL4_TCB_Resume(tcb_object.cptr);
    ZF_LOGF_IFERR(error, "Failed to start new thread.\n");

    /* we are done, say hello */
    printf("main: hello world 2 \n\n");
    seL4_DebugDumpScheduler();
    
    //seL4_Yield();
    //printf("main: hello world 3 \n\n");
    //seL4_DebugDumpScheduler();
    //seL4_Yield();
    return 0;
}
