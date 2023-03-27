## 10.1.1

```c
#ifndef _ASM_RISCV_SBI_H
#define _ASM_RISCV_SBI_H

#include <stdint.h>

#define SBI_SET_TIMER 0
#define SBI_CONSOLE_PUTCHAR 1
#define SBI_CONSOLE_GETCHAR 2
#define SBI_CLEAR_IPI 3
#define SBI_SEND_IPI 4
#define SBI_REMOTE_FENCE_I 5
#define SBI_REMOTE_SFENCE_VMA 6
#define SBI_REMOTE_SFENCE_VMA_ASID 7
#define SBI_SHUTDOWN 8

#define SBI_CALL(which, arg0, arg1, arg2) ({ 			\
	register unsigned long a0 asm ("a0") = (unsigned long)(arg0);	\
	register unsigned long a1 asm ("a1") = (unsigned long)(arg1);	\
	register unsigned long a2 asm ("a2") = (unsigned long)(arg2);	\
	register unsigned long a7 asm ("a7") = (unsigned long)(which);	\
	asm volatile ("ecall"					\
		      : "+r" (a0)				\
		      : "r" (a1), "r" (a2), "r" (a7)		\
		      : "memory");				\
	a0;							\
})

/* Lazy implementations until SBI is finalized */
#define SBI_CALL_0(which) SBI_CALL(which, 0, 0, 0)
#define SBI_CALL_1(which, arg0) SBI_CALL(which, arg0, 0, 0)
#define SBI_CALL_2(which, arg0, arg1) SBI_CALL(which, arg0, arg1, 0)

static inline void sbi_console_putchar(int ch)
{
    SBI_CALL_1(SBI_CONSOLE_PUTCHAR, ch);
}

static inline int sbi_console_getchar(void)
{
    return SBI_CALL_0(SBI_CONSOLE_GETCHAR);
}

static inline void sbi_set_timer(unsigned long long stime_value)
{
#if __riscv_xlen == 32
    SBI_CALL_2(SBI_SET_TIMER, stime_value, stime_value >> 32);
#else
    SBI_CALL_1(SBI_SET_TIMER, stime_value);
#endif
}

static inline void sbi_shutdown(void)
{
    SBI_CALL_0(SBI_SHUTDOWN);
}

static inline void sbi_clear_ipi(void)
{
    SBI_CALL_0(SBI_CLEAR_IPI);
}

static inline void sbi_send_ipi(const unsigned long *hart_mask)
{
    SBI_CALL_1(SBI_SEND_IPI, hart_mask);
}

static inline void sbi_remote_fence_i(const unsigned long *hart_mask)
{
    SBI_CALL_1(SBI_REMOTE_FENCE_I, hart_mask);
}

static inline void sbi_remote_sfence_vma(const unsigned long *hart_mask,
                                         unsigned long start,
                                         unsigned long size)
{
    SBI_CALL_1(SBI_REMOTE_SFENCE_VMA, hart_mask);
}

static inline void sbi_remote_sfence_vma_asid(const unsigned long *hart_mask,
                                              unsigned long start,
                                              unsigned long size,
                                              unsigned long asid)
{
    SBI_CALL_1(SBI_REMOTE_SFENCE_VMA_ASID, hart_mask);
}

#endif
```

## 
```c
//---
static inline void sbi_set_timer(unsigned long long stime_value)
{
#if __riscv_xlen == 32
    SBI_CALL_2(SBI_SET_TIMER, stime_value, stime_value >> 32);
#else
    SBI_CALL_1(SBI_SET_TIMER, stime_value);
#endif
}

// static inline void sbi_shutdown(void)
// {
//     SBI_CALL_0(SBI_SHUTDOWN);
// }

static inline void sbi_clear_ipi(void)
{
    SBI_CALL_0(SBI_CLEAR_IPI);
}

//+++
#define SBI_SM_CREATE_ENCLAVE   101
#define SBI_SM_DESTROY_ENCLAVE  102
#define SBI_SM_ATTEST_ENCLAVE   103
#define SBI_SM_RUN_ENCLAVE      105
#define SBI_SM_STOP_ENCLAVE     106
#define SBI_SM_RESUME_ENCLAVE   107
#define SBI_SM_EXIT_ENCLAVE     1101
#define SBI_SM_NOT_IMPLEMENTED  1111

static inline void sbi_stop_enclave(uint64_t request) {
  SBI_CALL_1(SBI_SM_STOP_ENCLAVE, request);
}

static inline void sbi_shutdown(void)
{
//    // Keystone Enclave Exit
      SBI_CALL_1(SBI_SM_EXIT_ENCLAVE, 0);
}

```

## new
```c

#pragma once

#include <config.h>
#include <stdint.h>

/* See https://github.com/riscv/riscv-sbi-doc/blob/master/riscv-sbi.adoc for
 * details about these command codes, they are the "legacy extensions"
 * introduced by BBL and supported by OpenSBI.
 */
#define SBI_SET_TIMER 0
#define SBI_CONSOLE_PUTCHAR 1
#define SBI_CONSOLE_GETCHAR 2
#define SBI_CLEAR_IPI 3
#define SBI_SEND_IPI 4
#define SBI_REMOTE_FENCE_I 5
#define SBI_REMOTE_SFENCE_VMA 6
#define SBI_REMOTE_SFENCE_VMA_ASID 7
#define SBI_SHUTDOWN 8
/* The values 9 - 15 are reserved. */

static inline word_t sbi_call(word_t cmd,
                              word_t arg_0,
                              word_t arg_1,
                              word_t arg_2)
{
    register word_t a0 asm("a0") = arg_0;
    register word_t a1 asm("a1") = arg_1;
    register word_t a2 asm("a2") = arg_2;
    register word_t a7 asm("a7") = cmd;
    register word_t result asm("a0");
    asm volatile("ecall"
                 : "=r"(result)
                 : "r"(a0), "r"(a1), "r"(a2), "r"(a7)
                 : "memory");
    return result;
}

/* Lazy implementations until SBI is finalized */
#define SBI_CALL_0(which) sbi_call(which, 0, 0, 0)
#define SBI_CALL_1(which, arg0) sbi_call(which, arg0, 0, 0)
#define SBI_CALL_2(which, arg0, arg1) sbi_call(which, arg0, arg1, 0)

static inline void sbi_console_putchar(int ch)
{
    SBI_CALL_1(SBI_CONSOLE_PUTCHAR, ch);
}

static inline int sbi_console_getchar(void)
{
    return (int)(SBI_CALL_0(SBI_CONSOLE_GETCHAR));
}

static inline void sbi_set_timer(unsigned long long stime_value)
{
#if __riscv_xlen == 32
    SBI_CALL_2(SBI_SET_TIMER, stime_value, stime_value >> 32);
#else
    SBI_CALL_1(SBI_SET_TIMER, stime_value);
#endif
}

static inline void sbi_shutdown(void)
{
    SBI_CALL_0(SBI_SHUTDOWN);
}

#ifdef ENABLE_SMP_SUPPORT

static inline void sbi_clear_ipi(void)
{
    SBI_CALL_0(SBI_CLEAR_IPI);
}

static inline void sbi_send_ipi(word_t hart_mask)
{
   
    word_t virt_addr_hart_mask = (word_t)&hart_mask;
    SBI_CALL_1(SBI_SEND_IPI, virt_addr_hart_mask);
}

static inline void sbi_remote_fence_i(word_t hart_mask)
{
    /* See comment at sbi_send_ipi() about the pointer parameter. */
    word_t virt_addr_hart_mask = (word_t)&hart_mask;
    SBI_CALL_1(SBI_REMOTE_FENCE_I, virt_addr_hart_mask);
}

static inline void sbi_remote_sfence_vma(word_t hart_mask,
                                         unsigned long start,
                                         unsigned long size)
{
    /* See comment at sbi_send_ipi() about the pointer parameter. */
    word_t virt_addr_hart_mask = (word_t)&hart_mask;
    SBI_CALL_1(SBI_REMOTE_SFENCE_VMA, virt_addr_hart_mask);
}

static inline void sbi_remote_sfence_vma_asid(word_t hart_mask,
                                              unsigned long start,
                                              unsigned long size,
                                              unsigned long asid)
{
    /* See comment at sbi_send_ipi() about the pointer parameter. */
    word_t virt_addr_hart_mask = (word_t)&hart_mask;
    SBI_CALL_1(SBI_REMOTE_SFENCE_VMA_ASID, virt_addr_hart_mask);
}

#endif /* ENABLE_SMP_SUPPORT */
```

## modify
```c
#pragma once

#include <config.h>
#include <stdint.h>

/* See https://github.com/riscv/riscv-sbi-doc/blob/master/riscv-sbi.adoc for
 * details about these command codes, they are the "legacy extensions"
 * introduced by BBL and supported by OpenSBI.
 */
#define SBI_SET_TIMER 0
#define SBI_CONSOLE_PUTCHAR 1
#define SBI_CONSOLE_GETCHAR 2
#define SBI_CLEAR_IPI 3
#define SBI_SEND_IPI 4
#define SBI_REMOTE_FENCE_I 5
#define SBI_REMOTE_SFENCE_VMA 6
#define SBI_REMOTE_SFENCE_VMA_ASID 7
#define SBI_SHUTDOWN 8
/* The values 9 - 15 are reserved. */

static inline word_t sbi_call(word_t cmd,
                              word_t arg_0,
                              word_t arg_1,
                              word_t arg_2)
{
    register word_t a0 asm("a0") = arg_0;
    register word_t a1 asm("a1") = arg_1;
    register word_t a2 asm("a2") = arg_2;
    register word_t a7 asm("a7") = cmd;
    register word_t result asm("a0");
    asm volatile("ecall"
                 : "=r"(result)
                 : "r"(a0), "r"(a1), "r"(a2), "r"(a7)
                 : "memory");
    return result;
}

/* Lazy implementations until SBI is finalized */
#define SBI_CALL_0(which) sbi_call(which, 0, 0, 0)
#define SBI_CALL_1(which, arg0) sbi_call(which, arg0, 0, 0)
#define SBI_CALL_2(which, arg0, arg1) sbi_call(which, arg0, arg1, 0)

static inline void sbi_console_putchar(int ch)
{
    SBI_CALL_1(SBI_CONSOLE_PUTCHAR, ch);
}

static inline int sbi_console_getchar(void)
{
    return (int)(SBI_CALL_0(SBI_CONSOLE_GETCHAR));
}

static inline void sbi_set_timer(unsigned long long stime_value)
{
#if __riscv_xlen == 32
    SBI_CALL_2(SBI_SET_TIMER, stime_value, stime_value >> 32);
#else
    SBI_CALL_1(SBI_SET_TIMER, stime_value);
#endif
}

//static inline void sbi_shutdown(void)
//{
//    SBI_CALL_0(SBI_SHUTDOWN);
//}

#ifdef ENABLE_SMP_SUPPORT

static inline void sbi_clear_ipi(void)
{
    SBI_CALL_0(SBI_CLEAR_IPI);
}

static inline void sbi_send_ipi(word_t hart_mask)
{
    
    word_t virt_addr_hart_mask = (word_t)&hart_mask;
    SBI_CALL_1(SBI_SEND_IPI, virt_addr_hart_mask);
}

static inline void sbi_remote_fence_i(word_t hart_mask)
{
    /* See comment at sbi_send_ipi() about the pointer parameter. */
    word_t virt_addr_hart_mask = (word_t)&hart_mask;
    SBI_CALL_1(SBI_REMOTE_FENCE_I, virt_addr_hart_mask);
}

static inline void sbi_remote_sfence_vma(word_t hart_mask,
                                         unsigned long start,
                                         unsigned long size)
{
    /* See comment at sbi_send_ipi() about the pointer parameter. */
    word_t virt_addr_hart_mask = (word_t)&hart_mask;
    SBI_CALL_1(SBI_REMOTE_SFENCE_VMA, virt_addr_hart_mask);
}

// +++  //
static inline void sbi_remote_sfence_vma_asid(word_t hart_mask,
                                              unsigned long start,
                                              unsigned long size,
                                              unsigned long asid)
{
    /* See comment at sbi_send_ipi() about the pointer parameter. */
    word_t virt_addr_hart_mask = (word_t)&hart_mask;
    SBI_CALL_1(SBI_REMOTE_SFENCE_VMA_ASID, virt_addr_hart_mask);
}

#define SBI_SM_CREATE_ENCLAVE   101
#define SBI_SM_DESTROY_ENCLAVE  102
#define SBI_SM_ATTEST_ENCLAVE   103
#define SBI_SM_RUN_ENCLAVE      105
#define SBI_SM_STOP_ENCLAVE     106
#define SBI_SM_RESUME_ENCLAVE   107
#define SBI_SM_EXIT_ENCLAVE     1101
#define SBI_SM_NOT_IMPLEMENTED  1111

static inline void sbi_stop_enclave(uint64_t request) {
  SBI_CALL_1(SBI_SM_STOP_ENCLAVE, request);
}

static inline void sbi_shutdown(void)
{
//    // Keystone Enclave Exit
      SBI_CALL_1(SBI_SM_EXIT_ENCLAVE, 0);
}

#endif /* ENABLE_SMP_SUPPORT */
```
