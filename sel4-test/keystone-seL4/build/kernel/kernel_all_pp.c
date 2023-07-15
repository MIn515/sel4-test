# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/kernel_all_copy.c"
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/kernel_all_copy.c"
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c"
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




/* Compile-time configuration parameters. Might be set by the build system. */


# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/autoconf/autoconf.h" 1



# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_config/kernel/gen_config.h" 1
# 5 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/autoconf/autoconf.h" 2
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 2


/* size of the initial thread's root CNode (2^x slots, x >= 4) */




/* number of timer ticks until a thread is preempted  */




/* the number of scheduler domains */




/* number of priorities per domain */




/* maximum number of caps that can be created in one retype invocation */




/* chunk size for memory clears during retype, in bits. */




/* maximum number of iterations until we preempt a delete/revoke invocation */




/* address range to flush per preemption work unit */




/* maximum number of untyped caps in bootinfo */
/* WARNING: must match value in libsel4! */
/* CONSTRAINT: (16 * CONFIG_MAX_NUM_BOOTINFO_DEVICE_REGIONS) + (5 * CONFIG_MAX_NUM_BOOTINFO_UNTYPED_CAPS) <= 4036 */




/* length of a timer tick in ms  */




/* maximum number of different tracepoints which can be placed in the kernel */




/* maximum number of IOMMU RMRR entries we can record while ACPI parsing */




/* maximum number of IOAPIC supported */




/* Alias CONFIG_MAX_NUM_NODES > 1 to ENABLE_SMP_SUPPORT */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/basic_types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/64/mode/stdint.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 2

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long long int64_t;
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/basic_types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h"
/* time constants */
# 52 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h"
/** MODIFIES: */
void __builtin_unreachable(void);







/* Borrowed from linux/include/linux/compiler.h */







/* need that for compiling with c99 instead of gnu99 */


/* Evaluate a Kconfig-provided configuration setting at compile-time. */






/* Check the existence of a configuration setting, returning one value if it
 * exists and a different one if it does not */





/** MODIFIES:
    FNSPEC
        halt_spec: "\<Gamma> \<turnstile> {} Call halt_'proc {}"
*/
void halt(void) __attribute__((__noreturn__));
void memzero(void *s, unsigned long n);
void *memset(void *s, unsigned long c, unsigned long n) __attribute__((externally_visible));
void *memcpy(void* ptr_dst, const void* ptr_src, unsigned long n) __attribute__((externally_visible));
int __attribute__((__pure__)) strncmp(const char *s1, const char *s2, int n);
long __attribute__((__const__)) char_to_long(char c);
long __attribute__((__pure__)) str_to_long(const char* str);


int __builtin_clzl (unsigned long x);
int __builtin_ctzl (unsigned long x);


uint32_t __clzsi2(uint32_t x);
uint32_t __ctzsi2(uint32_t x);
uint32_t __clzdi2(uint64_t x);
uint32_t __ctzdi2(uint64_t x);

/** MODIFIES: */
/** DONT_TRANSLATE */
/** FNSPEC clzl_spec:
  "\<forall>s. \<Gamma> \<turnstile>
    {\<sigma>. s = \<sigma> \<and> x_' s \<noteq> 0 }
      \<acute>ret__long :== PROC clzl(\<acute>x)
    \<lbrace> \<acute>ret__long = of_nat (word_clz (x_' s)) \<rbrace>"
*/
static inline long
__attribute__((__const__)) clzl(unsigned long x)
{
    return __builtin_clzl(x);
}

/** MODIFIES: */
/** DONT_TRANSLATE */
/** FNSPEC ctzl_spec:
  "\<forall>s. \<Gamma> \<turnstile>
    {\<sigma>. s = \<sigma> \<and> x_' s \<noteq> 0 }
      \<acute>ret__long :== PROC ctzl(\<acute>x)
    \<lbrace> \<acute>ret__long = of_nat (word_ctz (x_' s)) \<rbrace>"
*/
static inline long
__attribute__((__const__)) ctzl(unsigned long x)
{
    return __builtin_ctzl(x);
}



int __builtin_popcountl (unsigned long x);

/** DONT_TRANSLATE */
static inline long
__attribute__((__const__)) popcountl(unsigned long mask)
{

    unsigned int count; // c accumulates the total bits set in v
    for (count = 0; mask; count++) {
        mask &= mask - 1; // clear the least significant bit set
    }

    return count;



}



/* Can be used to insert padding to the next L1 cache line boundary */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 2



void _fail(
    const char* str,
    const char* file,
    unsigned int line,
    const char* function
) __attribute__((__noreturn__));



void _assert_fail(
    const char* assertion,
    const char* file,
    unsigned int line,
    const char* function
) __attribute__((__noreturn__));
# 46 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h"
/* Create an assert that will trigger a compile error if it fails. */



/* Sometimes compile asserts contain expressions that the C parser cannot
 * handle. For such expressions unverified_compile_assert should be used. */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/types.h" 2

typedef int __assert_failed_long_is_64bits[(sizeof(unsigned long) == 8) ? 1 : -1];
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 2

typedef unsigned long word_t;
typedef signed long sword_t;
typedef word_t vptr_t;
typedef word_t paddr_t;
typedef word_t pptr_t;
typedef word_t cptr_t;
typedef word_t dev_id_t;
typedef word_t cpu_id_t;
typedef word_t node_id_t;
typedef word_t dom_t;

/* for libsel4 headers that the kernel shares */
typedef word_t seL4_Word;
typedef cptr_t seL4_CPtr;
typedef uint32_t seL4_Uint32;
typedef uint8_t seL4_Uint8;
typedef node_id_t seL4_NodeId;
typedef paddr_t seL4_PAddr;
typedef dom_t seL4_Domain;
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/basic_types.h" 2

enum _bool {
    false = 0,
    true = 1
};
typedef word_t bool_t;

typedef struct region {
    pptr_t start;
    pptr_t end;
} region_t;

typedef struct p_region {
    paddr_t start;
    paddr_t end;
} p_region_t;

typedef struct v_region {
    vptr_t start;
    vptr_t end;
} v_region_t;




/* equivalent to a word_t except that we tell the compiler that we may alias with
 * any other type (similar to a char pointer) */
typedef word_t __attribute__((__may_alias__)) word_t_may_alias;
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/compound_types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/compound_types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h" 1



# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 5 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 6 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 7 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 8 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h" 2
struct seL4_MessageInfo {
    uint64_t words[1];
};
typedef struct seL4_MessageInfo seL4_MessageInfo_t;

static inline seL4_MessageInfo_t __attribute__((__const__))
seL4_MessageInfo_new(uint64_t label, uint64_t capsUnwrapped, uint64_t extraCaps, uint64_t length) {
    seL4_MessageInfo_t seL4_MessageInfo;

    /* fail if user has passed bits that we will override */
    if(!((label & ~0xfffffffffffffull) == ((0 && (label & (1ull << 63))) ? 0x0 : 0))) _assert_fail("(label & ~0xfffffffffffffull) == ((0 && (label & (1ull << 63))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h", 18, __FUNCTION__);
    if(!((capsUnwrapped & ~0x7ull) == ((0 && (capsUnwrapped & (1ull << 63))) ? 0x0 : 0))) _assert_fail("(capsUnwrapped & ~0x7ull) == ((0 && (capsUnwrapped & (1ull << 63))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h", 19, __FUNCTION__);
    if(!((extraCaps & ~0x3ull) == ((0 && (extraCaps & (1ull << 63))) ? 0x0 : 0))) _assert_fail("(extraCaps & ~0x3ull) == ((0 && (extraCaps & (1ull << 63))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h", 20, __FUNCTION__);
    if(!((length & ~0x7full) == ((0 && (length & (1ull << 63))) ? 0x0 : 0))) _assert_fail("(length & ~0x7full) == ((0 && (length & (1ull << 63))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h", 21, __FUNCTION__);

    seL4_MessageInfo.words[0] = 0
        | (label & 0xfffffffffffffull) << 12
        | (capsUnwrapped & 0x7ull) << 9
        | (extraCaps & 0x3ull) << 7
        | (length & 0x7full) << 0;

    return seL4_MessageInfo;
}

static inline uint64_t __attribute__((__const__))
seL4_MessageInfo_get_label(seL4_MessageInfo_t seL4_MessageInfo) {
    uint64_t ret;
    ret = (seL4_MessageInfo.words[0] & 0xfffffffffffff000ull) >> 12;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (63)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
seL4_MessageInfo_get_capsUnwrapped(seL4_MessageInfo_t seL4_MessageInfo) {
    uint64_t ret;
    ret = (seL4_MessageInfo.words[0] & 0xe00ull) >> 9;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (63)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline seL4_MessageInfo_t __attribute__((__const__))
seL4_MessageInfo_set_capsUnwrapped(seL4_MessageInfo_t seL4_MessageInfo, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xe00 >> 9 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (63)))) ? 0x0 : 0))) _assert_fail("(((~0xe00 >> 9 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (63)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h", 57, __FUNCTION__);
    seL4_MessageInfo.words[0] &= ~0xe00ull;
    seL4_MessageInfo.words[0] |= (v64 << 9) & 0xe00ull;
    return seL4_MessageInfo;
}

static inline uint64_t __attribute__((__const__))
seL4_MessageInfo_get_extraCaps(seL4_MessageInfo_t seL4_MessageInfo) {
    uint64_t ret;
    ret = (seL4_MessageInfo.words[0] & 0x180ull) >> 7;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (63)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline seL4_MessageInfo_t __attribute__((__const__))
seL4_MessageInfo_set_extraCaps(seL4_MessageInfo_t seL4_MessageInfo, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x180 >> 7 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (63)))) ? 0x0 : 0))) _assert_fail("(((~0x180 >> 7 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (63)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h", 77, __FUNCTION__);
    seL4_MessageInfo.words[0] &= ~0x180ull;
    seL4_MessageInfo.words[0] |= (v64 << 7) & 0x180ull;
    return seL4_MessageInfo;
}

static inline uint64_t __attribute__((__const__))
seL4_MessageInfo_get_length(seL4_MessageInfo_t seL4_MessageInfo) {
    uint64_t ret;
    ret = (seL4_MessageInfo.words[0] & 0x7full) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (63)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline seL4_MessageInfo_t __attribute__((__const__))
seL4_MessageInfo_set_length(seL4_MessageInfo_t seL4_MessageInfo, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x7f >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (63)))) ? 0x0 : 0))) _assert_fail("(((~0x7f >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (63)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h", 97, __FUNCTION__);
    seL4_MessageInfo.words[0] &= ~0x7full;
    seL4_MessageInfo.words[0] |= (v64 << 0) & 0x7full;
    return seL4_MessageInfo;
}

struct seL4_CNode_CapData {
    uint64_t words[1];
};
typedef struct seL4_CNode_CapData seL4_CNode_CapData_t;

static inline uint64_t __attribute__((__const__))
seL4_CNode_CapData_get_guard(seL4_CNode_CapData_t seL4_CNode_CapData) {
    uint64_t ret;
    ret = (seL4_CNode_CapData.words[0] & 0xffffffffffffffc0ull) >> 6;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (63)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
seL4_CNode_CapData_get_guardSize(seL4_CNode_CapData_t seL4_CNode_CapData) {
    uint64_t ret;
    ret = (seL4_CNode_CapData.words[0] & 0x3full) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (63)))) {
        ret |= 0x0;
    }
    return ret;
}

struct seL4_CapRights {
    uint64_t words[1];
};
typedef struct seL4_CapRights seL4_CapRights_t;

static inline uint64_t __attribute__((__const__))
seL4_CapRights_get_capAllowGrant(seL4_CapRights_t seL4_CapRights) {
    uint64_t ret;
    ret = (seL4_CapRights.words[0] & 0x4ull) >> 2;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (63)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
seL4_CapRights_get_capAllowRead(seL4_CapRights_t seL4_CapRights) {
    uint64_t ret;
    ret = (seL4_CapRights.words[0] & 0x2ull) >> 1;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (63)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
seL4_CapRights_get_capAllowWrite(seL4_CapRights_t seL4_CapRights) {
    uint64_t ret;
    ret = (seL4_CapRights.words[0] & 0x1ull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (63)))) {
        ret |= 0x0;
    }
    return ret;
}
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/objecttype.h" 1
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




typedef enum api_object {
    seL4_UntypedObject,
    seL4_TCBObject,
    seL4_EndpointObject,
    seL4_NotificationObject,
    seL4_CapTableObject,
    seL4_NonArchObjectTypeCount,
} seL4_ObjectType;

__attribute__((deprecated("use seL4_NotificationObject"))) static const seL4_ObjectType seL4_AsyncEndpointObject = seL4_NotificationObject;

typedef seL4_Word api_object_t;
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/api/objecttype.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */





# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/autoconf/autoconf.h" 1
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/api/objecttype.h" 2


typedef enum _mode_object {
    seL4_RISCV_Giga_Page = seL4_NonArchObjectTypeCount,



    seL4_ModeObjectTypeCount
} seL4_ModeObjectType;
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/objecttype.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */





# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/autoconf/autoconf.h" 1
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/objecttype.h" 2


typedef enum _object {
    seL4_RISCV_4K_Page = seL4_ModeObjectTypeCount,
    seL4_RISCV_Mega_Page,
    seL4_RISCV_PageTableObject,
    seL4_ObjectTypeCount
} seL4_ArchObjectType;

typedef seL4_Word object_t;
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/types.h" 2




enum asidConstants {
    asidInvalid = 0
};



typedef word_t asid_t;
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/macros.h" 1
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




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/autoconf/autoconf.h" 1
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/macros.h" 2

/*
 * Some compilers attempt to pack enums into the smallest possible type.
 * For ABI compatibility with the kernel, we need to ensure they remain
 * the same size as a 'long'.
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/constants.h" 1
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





# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/autoconf/autoconf.h" 1
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/constants.h" 2
# 52 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/constants.h"
enum priorityConstants {
    seL4_InvalidPrio = -1,
    seL4_MinPrio = 0,
    seL4_MaxPrio = 256 - 1
};

/* seL4_MessageInfo_t defined in api/shared_types.bf */

enum seL4_MsgLimits {
    seL4_MsgLengthBits = 7,
    seL4_MsgExtraCapBits = 2
};

enum {
    seL4_MsgMaxLength = 120,
};


typedef enum {
    seL4_NoFailure = 0,
    seL4_InvalidRoot,
    seL4_MissingCapability,
    seL4_DepthMismatch,
    seL4_GuardMismatch,
    _enum_pad_seL4_LookupFailureType = (1ULL << ((sizeof(long)*8) - 1)) - 1,
} seL4_LookupFailureType;
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/shared_types.h" 1
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




/* this file is shared between the kernel and libsel4 */

typedef struct seL4_IPCBuffer_ {
    seL4_MessageInfo_t tag;
    seL4_Word msg[seL4_MsgMaxLength];
    seL4_Word userData;
    seL4_Word caps_or_badges[((1ul<<(seL4_MsgExtraCapBits))-1)];
    seL4_CPtr receiveCNode;
    seL4_CPtr receiveIndex;
    seL4_Word receiveDepth;
} seL4_IPCBuffer __attribute__ ((__aligned__ (sizeof(struct seL4_IPCBuffer_))));

enum {
    seL4_CapFault_IP,
    seL4_CapFault_Addr,
    seL4_CapFault_InRecvPhase,
    seL4_CapFault_LookupFailureType,
    seL4_CapFault_BitsLeft,
    seL4_CapFault_DepthMismatch_BitsFound,
    seL4_CapFault_GuardMismatch_GuardFound = seL4_CapFault_DepthMismatch_BitsFound,
    seL4_CapFault_GuardMismatch_BitsFound,
    _enum_pad_seL4_CapFault_Msg = (1ULL << ((sizeof(long)*8) - 1)) - 1,
} seL4_CapFault_Msg;
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 2





/* most arm platforms just call this for putConsoleChar, so
 * prototype it here */
void putDebugChar(unsigned char c);



/* io for dumping capdl */
unsigned char getDebugChar(void);



/* printf will result in output */
void putConsoleChar(unsigned char c);
void putchar(char c);

word_t kprintf(const char *format, ...) __attribute__((externally_visible)) __attribute__((format(printf, 1, 2)));
word_t puts(const char *s) __attribute__((externally_visible));
word_t print_unsigned_long(unsigned long x, word_t ui_base) __attribute__((externally_visible));
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 2

/* seL4_CapRights_t defined in mode/api/shared_types.bf */

typedef word_t prio_t;

enum domainConstants {
    minDom = 0,
    maxDom = 1 - 1
};

struct cap_transfer {
    cptr_t ctReceiveRoot;
    cptr_t ctReceiveIndex;
    word_t ctReceiveDepth;
};
typedef struct cap_transfer cap_transfer_t;

enum ctLimits {
    capTransferDataSize = 3
};

static inline seL4_CapRights_t __attribute__((__const__))
rightsFromWord(word_t w)
{
    seL4_CapRights_t seL4_CapRights;

    seL4_CapRights.words[0] = w;
    return seL4_CapRights;
}

static inline word_t __attribute__((__const__))
wordFromRights(seL4_CapRights_t seL4_CapRights)
{
    return seL4_CapRights.words[0] & ((1ul << (3))-1ul);
}

static inline cap_transfer_t __attribute__((__pure__))
capTransferFromWords(word_t *wptr)
{
    cap_transfer_t transfer;

    transfer.ctReceiveRoot = (cptr_t)wptr[0];
    transfer.ctReceiveIndex = (cptr_t)wptr[1];
    transfer.ctReceiveDepth = wptr[2];
    return transfer;
}

static inline seL4_MessageInfo_t __attribute__((__const__))
messageInfoFromWord_raw(word_t w)
{
    seL4_MessageInfo_t mi;

    mi.words[0] = w;
    return mi;
}

static inline seL4_MessageInfo_t __attribute__((__const__))
messageInfoFromWord(word_t w)
{
    seL4_MessageInfo_t mi;
    word_t len;

    mi.words[0] = w;

    len = seL4_MessageInfo_get_length(mi);
    if (len > seL4_MsgMaxLength) {
        mi = seL4_MessageInfo_set_length(mi, seL4_MsgMaxLength);
    }

    return mi;
}

static inline word_t __attribute__((__const__))
wordFromMessageInfo(seL4_MessageInfo_t mi)
{
    return mi.words[0];
}
# 113 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h"
/*
 * thread name is only available if the kernel is built in debug mode.
 */






/*
 * Print to serial a message helping userspace programmers to determine why the
 * kernel is not performing their requested operation.
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/compound_types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h" 1



# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 5 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 6 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 7 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 8 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h" 2
struct notification {
    uint64_t words[4];
};
typedef struct notification notification_t;

static inline uint64_t __attribute__((__pure__))
notification_ptr_get_ntfnBoundTCB(notification_t *notification_ptr) {
    uint64_t ret;
    ret = (notification_ptr->words[3] & 0xffffffffffffull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline void
notification_ptr_set_ntfnBoundTCB(notification_t *notification_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffff << 0) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0))) _assert_fail("(((~0xffffffffffff << 0) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 27, __FUNCTION__);
    notification_ptr->words[3] &= ~0xffffffffffffull;
    notification_ptr->words[3] |= (v64 >> 0) & 0xffffffffffff;
}

static inline uint64_t __attribute__((__pure__))
notification_ptr_get_ntfnMsgIdentifier(notification_t *notification_ptr) {
    uint64_t ret;
    ret = (notification_ptr->words[2] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline void
notification_ptr_set_ntfnMsgIdentifier(notification_t *notification_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffffff >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffffffff >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 46, __FUNCTION__);
    notification_ptr->words[2] &= ~0xffffffffffffffffull;
    notification_ptr->words[2] |= (v64 << 0) & 0xffffffffffffffff;
}

static inline uint64_t __attribute__((__pure__))
notification_ptr_get_ntfnQueue_head(notification_t *notification_ptr) {
    uint64_t ret;
    ret = (notification_ptr->words[1] & 0xffffffffffffull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline void
notification_ptr_set_ntfnQueue_head(notification_t *notification_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffff << 0) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0))) _assert_fail("(((~0xffffffffffff << 0) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 65, __FUNCTION__);
    notification_ptr->words[1] &= ~0xffffffffffffull;
    notification_ptr->words[1] |= (v64 >> 0) & 0xffffffffffff;
}

static inline uint64_t __attribute__((__pure__))
notification_ptr_get_ntfnQueue_tail(notification_t *notification_ptr) {
    uint64_t ret;
    ret = (notification_ptr->words[0] & 0xffffffffffff0000ull) >> 16;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline void
notification_ptr_set_ntfnQueue_tail(notification_t *notification_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffff0000 >> 16) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0))) _assert_fail("(((~0xffffffffffff0000 >> 16) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 84, __FUNCTION__);
    notification_ptr->words[0] &= ~0xffffffffffff0000ull;
    notification_ptr->words[0] |= (v64 << 16) & 0xffffffffffff0000;
}

static inline uint64_t __attribute__((__pure__))
notification_ptr_get_state(notification_t *notification_ptr) {
    uint64_t ret;
    ret = (notification_ptr->words[0] & 0x3ull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline void
notification_ptr_set_state(notification_t *notification_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x3 >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x3 >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 103, __FUNCTION__);
    notification_ptr->words[0] &= ~0x3ull;
    notification_ptr->words[0] |= (v64 << 0) & 0x3;
}

struct pte {
    uint64_t words[1];
};
typedef struct pte pte_t;

static inline pte_t __attribute__((__const__))
pte_new(uint64_t ppn, uint64_t sw, uint64_t dirty, uint64_t accessed, uint64_t global, uint64_t user, uint64_t execute, uint64_t write, uint64_t read, uint64_t valid) {
    pte_t pte;

    /* fail if user has passed bits that we will override */
    if(!((ppn & ~0xfffffffffffull) == ((1 && (ppn & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(ppn & ~0xfffffffffffull) == ((1 && (ppn & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 118, __FUNCTION__);
    if(!((sw & ~0x3ull) == ((1 && (sw & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(sw & ~0x3ull) == ((1 && (sw & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 119, __FUNCTION__);
    if(!((dirty & ~0x1ull) == ((1 && (dirty & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(dirty & ~0x1ull) == ((1 && (dirty & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 120, __FUNCTION__);
    if(!((accessed & ~0x1ull) == ((1 && (accessed & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(accessed & ~0x1ull) == ((1 && (accessed & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 121, __FUNCTION__);
    if(!((global & ~0x1ull) == ((1 && (global & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(global & ~0x1ull) == ((1 && (global & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 122, __FUNCTION__);
    if(!((user & ~0x1ull) == ((1 && (user & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(user & ~0x1ull) == ((1 && (user & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 123, __FUNCTION__);
    if(!((execute & ~0x1ull) == ((1 && (execute & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(execute & ~0x1ull) == ((1 && (execute & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 124, __FUNCTION__);
    if(!((write & ~0x1ull) == ((1 && (write & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(write & ~0x1ull) == ((1 && (write & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 125, __FUNCTION__);
    if(!((read & ~0x1ull) == ((1 && (read & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(read & ~0x1ull) == ((1 && (read & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 126, __FUNCTION__);
    if(!((valid & ~0x1ull) == ((1 && (valid & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(valid & ~0x1ull) == ((1 && (valid & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 127, __FUNCTION__);

    pte.words[0] = 0
        | (ppn & 0xfffffffffffull) << 10
        | (sw & 0x3ull) << 8
        | (dirty & 0x1ull) << 7
        | (accessed & 0x1ull) << 6
        | (global & 0x1ull) << 5
        | (user & 0x1ull) << 4
        | (execute & 0x1ull) << 3
        | (write & 0x1ull) << 2
        | (read & 0x1ull) << 1
        | (valid & 0x1ull) << 0;

    return pte;
}

static inline uint64_t __attribute__((__pure__))
pte_ptr_get_ppn(pte_t *pte_ptr) {
    uint64_t ret;
    ret = (pte_ptr->words[0] & 0x3ffffffffffc00ull) >> 10;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__pure__))
pte_ptr_get_execute(pte_t *pte_ptr) {
    uint64_t ret;
    ret = (pte_ptr->words[0] & 0x8ull) >> 3;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__pure__))
pte_ptr_get_write(pte_t *pte_ptr) {
    uint64_t ret;
    ret = (pte_ptr->words[0] & 0x4ull) >> 2;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__pure__))
pte_ptr_get_read(pte_t *pte_ptr) {
    uint64_t ret;
    ret = (pte_ptr->words[0] & 0x2ull) >> 1;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__pure__))
pte_ptr_get_valid(pte_t *pte_ptr) {
    uint64_t ret;
    ret = (pte_ptr->words[0] & 0x1ull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

struct satp {
    uint64_t words[1];
};
typedef struct satp satp_t;

static inline satp_t __attribute__((__const__))
satp_new(uint64_t mode, uint64_t asid, uint64_t ppn) {
    satp_t satp;

    /* fail if user has passed bits that we will override */
    if(!((mode & ~0xfull) == ((1 && (mode & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(mode & ~0xfull) == ((1 && (mode & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 209, __FUNCTION__);
    if(!((asid & ~0xffffull) == ((1 && (asid & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(asid & ~0xffffull) == ((1 && (asid & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 210, __FUNCTION__);
    if(!((ppn & ~0xfffffffffffull) == ((1 && (ppn & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(ppn & ~0xfffffffffffull) == ((1 && (ppn & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 211, __FUNCTION__);

    satp.words[0] = 0
        | (mode & 0xfull) << 60
        | (asid & 0xffffull) << 44
        | (ppn & 0xfffffffffffull) << 0;

    return satp;
}

struct thread_state {
    uint64_t words[3];
};
typedef struct thread_state thread_state_t;

static inline uint64_t __attribute__((__pure__))
thread_state_ptr_get_blockingIPCBadge(thread_state_t *thread_state_ptr) {
    uint64_t ret;
    ret = (thread_state_ptr->words[2] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline void
thread_state_ptr_set_blockingIPCBadge(thread_state_t *thread_state_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffffff >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffffffff >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 240, __FUNCTION__);
    thread_state_ptr->words[2] &= ~0xffffffffffffffffull;
    thread_state_ptr->words[2] |= (v64 << 0) & 0xffffffffffffffff;
}

static inline uint64_t __attribute__((__pure__))
thread_state_ptr_get_blockingIPCCanGrant(thread_state_t *thread_state_ptr) {
    uint64_t ret;
    ret = (thread_state_ptr->words[1] & 0x8ull) >> 3;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline void
thread_state_ptr_set_blockingIPCCanGrant(thread_state_t *thread_state_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x8 >> 3) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x8 >> 3) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 259, __FUNCTION__);
    thread_state_ptr->words[1] &= ~0x8ull;
    thread_state_ptr->words[1] |= (v64 << 3) & 0x8;
}

static inline uint64_t __attribute__((__pure__))
thread_state_ptr_get_blockingIPCIsCall(thread_state_t *thread_state_ptr) {
    uint64_t ret;
    ret = (thread_state_ptr->words[1] & 0x4ull) >> 2;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline void
thread_state_ptr_set_blockingIPCIsCall(thread_state_t *thread_state_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x4 >> 2) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x4 >> 2) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 278, __FUNCTION__);
    thread_state_ptr->words[1] &= ~0x4ull;
    thread_state_ptr->words[1] |= (v64 << 2) & 0x4;
}

static inline uint64_t __attribute__((__const__))
thread_state_get_tcbQueued(thread_state_t thread_state) {
    uint64_t ret;
    ret = (thread_state.words[1] & 0x1ull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline void
thread_state_ptr_set_tcbQueued(thread_state_t *thread_state_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x1 >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x1 >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 297, __FUNCTION__);
    thread_state_ptr->words[1] &= ~0x1ull;
    thread_state_ptr->words[1] |= (v64 << 0) & 0x1;
}

static inline uint64_t __attribute__((__pure__))
thread_state_ptr_get_blockingObject(thread_state_t *thread_state_ptr) {
    uint64_t ret;
    ret = (thread_state_ptr->words[0] & 0xfffffffffff0ull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline void
thread_state_ptr_set_blockingObject(thread_state_t *thread_state_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xfffffffffff0 << 0) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0))) _assert_fail("(((~0xfffffffffff0 << 0) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 316, __FUNCTION__);
    thread_state_ptr->words[0] &= ~0xfffffffffff0ull;
    thread_state_ptr->words[0] |= (v64 >> 0) & 0xfffffffffff0;
}

static inline uint64_t __attribute__((__const__))
thread_state_get_tsType(thread_state_t thread_state) {
    uint64_t ret;
    ret = (thread_state.words[0] & 0xfull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__pure__))
thread_state_ptr_get_tsType(thread_state_t *thread_state_ptr) {
    uint64_t ret;
    ret = (thread_state_ptr->words[0] & 0xfull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline void
thread_state_ptr_set_tsType(thread_state_t *thread_state_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xf >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xf >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 346, __FUNCTION__);
    thread_state_ptr->words[0] &= ~0xfull;
    thread_state_ptr->words[0] |= (v64 << 0) & 0xf;
}

struct vm_attributes {
    uint64_t words[1];
};
typedef struct vm_attributes vm_attributes_t;

static inline uint64_t __attribute__((__const__))
vm_attributes_get_riscvExecuteNever(vm_attributes_t vm_attributes) {
    uint64_t ret;
    ret = (vm_attributes.words[0] & 0x1ull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

struct endpoint {
    uint64_t words[2];
};
typedef struct endpoint endpoint_t;

static inline uint64_t __attribute__((__pure__))
endpoint_ptr_get_epQueue_head(endpoint_t *endpoint_ptr) {
    uint64_t ret;
    ret = (endpoint_ptr->words[1] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline void
endpoint_ptr_set_epQueue_head(endpoint_t *endpoint_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffffff >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffffffff >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 386, __FUNCTION__);
    endpoint_ptr->words[1] &= ~0xffffffffffffffffull;
    endpoint_ptr->words[1] |= (v64 << 0) & 0xffffffffffffffff;
}

static inline uint64_t __attribute__((__pure__))
endpoint_ptr_get_epQueue_tail(endpoint_t *endpoint_ptr) {
    uint64_t ret;
    ret = (endpoint_ptr->words[0] & 0xfffffffffffcull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline void
endpoint_ptr_set_epQueue_tail(endpoint_t *endpoint_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xfffffffffffc << 0) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0))) _assert_fail("(((~0xfffffffffffc << 0) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 405, __FUNCTION__);
    endpoint_ptr->words[0] &= ~0xfffffffffffcull;
    endpoint_ptr->words[0] |= (v64 >> 0) & 0xfffffffffffc;
}

static inline uint64_t __attribute__((__pure__))
endpoint_ptr_get_state(endpoint_t *endpoint_ptr) {
    uint64_t ret;
    ret = (endpoint_ptr->words[0] & 0x3ull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline void
endpoint_ptr_set_state(endpoint_t *endpoint_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x3 >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x3 >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 424, __FUNCTION__);
    endpoint_ptr->words[0] &= ~0x3ull;
    endpoint_ptr->words[0] |= (v64 << 0) & 0x3;
}

struct mdb_node {
    uint64_t words[2];
};
typedef struct mdb_node mdb_node_t;

static inline mdb_node_t __attribute__((__const__))
mdb_node_new(uint64_t mdbNext, uint64_t mdbRevocable, uint64_t mdbFirstBadged, uint64_t mdbPrev) {
    mdb_node_t mdb_node;

    /* fail if user has passed bits that we will override */
    if(!((mdbNext & ~0xfffffffffffcull) == ((1 && (mdbNext & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(mdbNext & ~0xfffffffffffcull) == ((1 && (mdbNext & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 439, __FUNCTION__);
    if(!((mdbRevocable & ~0x1ull) == ((1 && (mdbRevocable & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(mdbRevocable & ~0x1ull) == ((1 && (mdbRevocable & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 440, __FUNCTION__);
    if(!((mdbFirstBadged & ~0x1ull) == ((1 && (mdbFirstBadged & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(mdbFirstBadged & ~0x1ull) == ((1 && (mdbFirstBadged & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 441, __FUNCTION__);

    mdb_node.words[0] = 0
        | mdbPrev << 0;;
    mdb_node.words[1] = 0
        | (mdbNext & 0xfffffffffffcull) >> 0
        | (mdbRevocable & 0x1ull) << 1
        | (mdbFirstBadged & 0x1ull) << 0;

    return mdb_node;
}

static inline uint64_t __attribute__((__const__))
mdb_node_get_mdbNext(mdb_node_t mdb_node) {
    uint64_t ret;
    ret = (mdb_node.words[1] & 0xfffffffffffcull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline void
mdb_node_ptr_set_mdbNext(mdb_node_t *mdb_node_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xfffffffffffc << 0) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0))) _assert_fail("(((~0xfffffffffffc << 0) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 467, __FUNCTION__);
    mdb_node_ptr->words[1] &= ~0xfffffffffffcull;
    mdb_node_ptr->words[1] |= (v64 >> 0) & 0xfffffffffffc;
}

static inline uint64_t __attribute__((__const__))
mdb_node_get_mdbRevocable(mdb_node_t mdb_node) {
    uint64_t ret;
    ret = (mdb_node.words[1] & 0x2ull) >> 1;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline mdb_node_t __attribute__((__const__))
mdb_node_set_mdbRevocable(mdb_node_t mdb_node, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x2 >> 1 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x2 >> 1 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 486, __FUNCTION__);
    mdb_node.words[1] &= ~0x2ull;
    mdb_node.words[1] |= (v64 << 1) & 0x2ull;
    return mdb_node;
}

static inline void
mdb_node_ptr_set_mdbRevocable(mdb_node_t *mdb_node_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x2 >> 1) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x2 >> 1) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 495, __FUNCTION__);
    mdb_node_ptr->words[1] &= ~0x2ull;
    mdb_node_ptr->words[1] |= (v64 << 1) & 0x2;
}

static inline uint64_t __attribute__((__const__))
mdb_node_get_mdbFirstBadged(mdb_node_t mdb_node) {
    uint64_t ret;
    ret = (mdb_node.words[1] & 0x1ull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline mdb_node_t __attribute__((__const__))
mdb_node_set_mdbFirstBadged(mdb_node_t mdb_node, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x1 >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x1 >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 514, __FUNCTION__);
    mdb_node.words[1] &= ~0x1ull;
    mdb_node.words[1] |= (v64 << 0) & 0x1ull;
    return mdb_node;
}

static inline void
mdb_node_ptr_set_mdbFirstBadged(mdb_node_t *mdb_node_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0x1 >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x1 >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 523, __FUNCTION__);
    mdb_node_ptr->words[1] &= ~0x1ull;
    mdb_node_ptr->words[1] |= (v64 << 0) & 0x1;
}

static inline uint64_t __attribute__((__const__))
mdb_node_get_mdbPrev(mdb_node_t mdb_node) {
    uint64_t ret;
    ret = (mdb_node.words[0] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline mdb_node_t __attribute__((__const__))
mdb_node_set_mdbPrev(mdb_node_t mdb_node, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffffff >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffffffff >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 542, __FUNCTION__);
    mdb_node.words[0] &= ~0xffffffffffffffffull;
    mdb_node.words[0] |= (v64 << 0) & 0xffffffffffffffffull;
    return mdb_node;
}

static inline void
mdb_node_ptr_set_mdbPrev(mdb_node_t *mdb_node_ptr, uint64_t v64) {
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffffff >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffffffff >> 0) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 551, __FUNCTION__);
    mdb_node_ptr->words[0] &= ~0xffffffffffffffffull;
    mdb_node_ptr->words[0] |= (v64 << 0) & 0xffffffffffffffff;
}

struct cap {
    uint64_t words[2];
};
typedef struct cap cap_t;

enum cap_tag {
    cap_null_cap = 0,
    cap_untyped_cap = 2,
    cap_endpoint_cap = 4,
    cap_notification_cap = 6,
    cap_reply_cap = 8,
    cap_cnode_cap = 10,
    cap_thread_cap = 12,
    cap_irq_control_cap = 14,
    cap_irq_handler_cap = 16,
    cap_zombie_cap = 18,
    cap_domain_cap = 20,
    cap_frame_cap = 1,
    cap_page_table_cap = 3,
    cap_asid_control_cap = 11,
    cap_asid_pool_cap = 13
};
typedef enum cap_tag cap_tag_t;

static inline uint64_t __attribute__((__const__))
cap_get_capType(cap_t cap) {
    return (cap.words[0] >> 59) & 0x1full;
}

static inline int __attribute__((__const__))
cap_capType_equals(cap_t cap, uint64_t cap_type_tag) {
    return ((cap.words[0] >> 59) & 0x1full) == cap_type_tag;
}

static inline cap_t __attribute__((__const__))
cap_null_cap_new(void) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)cap_null_cap & ~0x1full) == ((1 && ((uint64_t)cap_null_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_null_cap & ~0x1full) == ((1 && ((uint64_t)cap_null_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 595, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_null_cap & 0x1full) << 59;
    cap.words[1] = 0;

    return cap;
}

static inline cap_t __attribute__((__const__))
cap_untyped_cap_new(uint64_t capFreeIndex, uint64_t capIsDevice, uint64_t capBlockSize, uint64_t capPtr) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!((capFreeIndex & ~0xffffffffffffull) == ((1 && (capFreeIndex & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capFreeIndex & ~0xffffffffffffull) == ((1 && (capFreeIndex & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 609, __FUNCTION__);
    if(!((capIsDevice & ~0x1ull) == ((1 && (capIsDevice & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capIsDevice & ~0x1ull) == ((1 && (capIsDevice & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 610, __FUNCTION__);
    if(!((capBlockSize & ~0x3full) == ((1 && (capBlockSize & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capBlockSize & ~0x3full) == ((1 && (capBlockSize & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 611, __FUNCTION__);
    if(!(((uint64_t)cap_untyped_cap & ~0x1full) == ((1 && ((uint64_t)cap_untyped_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_untyped_cap & ~0x1full) == ((1 && ((uint64_t)cap_untyped_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 612, __FUNCTION__);
    if(!((capPtr & ~0xffffffffffffull) == ((1 && (capPtr & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(capPtr & ~0xffffffffffffull) == ((1 && (capPtr & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 613, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_untyped_cap & 0x1full) << 59
        | (capPtr & 0xffffffffffffull) >> 0;
    cap.words[1] = 0
        | (capFreeIndex & 0xffffffffffffull) << 16
        | (capIsDevice & 0x1ull) << 6
        | (capBlockSize & 0x3full) << 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_untyped_cap_get_capFreeIndex(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_untyped_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_untyped_cap",
                          "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 629 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                          630
# 629 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                           ;

    ret = (cap.words[1] & 0xffffffffffff0000ull) >> 16;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_untyped_cap_set_capFreeIndex(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_untyped_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_untyped_cap",
                          "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 642 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                          643
# 642 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                           ;
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffff0000ull >> 16 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffff0000ull >> 16 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 645, __FUNCTION__);

    cap.words[1] &= ~0xffffffffffff0000ull;
    cap.words[1] |= (v64 << 16) & 0xffffffffffff0000ull;
    return cap;
}

static inline void
cap_untyped_cap_ptr_set_capFreeIndex(cap_t *cap_ptr,
                                      uint64_t v64) {
    if(!(((cap_ptr->words[0] >> 59) & 0x1f) == cap_untyped_cap)) _assert_fail("((cap_ptr->words[0] >> 59) & 0x1f) == cap_untyped_cap",
                          "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 655 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                          656
# 655 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                           ;

    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffff0000ull >> 16) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffff0000ull >> 16) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 659, __FUNCTION__);

    cap_ptr->words[1] &= ~0xffffffffffff0000ull;
    cap_ptr->words[1] |= (v64 << 16) & 0xffffffffffff0000ull;
}

static inline uint64_t __attribute__((__const__))
cap_untyped_cap_get_capIsDevice(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_untyped_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_untyped_cap",
                          "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 668 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                          669
# 668 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                           ;

    ret = (cap.words[1] & 0x40ull) >> 6;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
cap_untyped_cap_get_capBlockSize(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_untyped_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_untyped_cap",
                          "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 682 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                          683
# 682 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                           ;

    ret = (cap.words[1] & 0x3full) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
cap_untyped_cap_get_capPtr(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_untyped_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_untyped_cap",
                          "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 696 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                          697
# 696 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                           ;

    ret = (cap.words[0] & 0xffffffffffffull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_endpoint_cap_new(uint64_t capEPBadge, uint64_t capCanGrant, uint64_t capCanSend, uint64_t capCanReceive, uint64_t capEPPtr) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)cap_endpoint_cap & ~0x1full) == ((1 && ((uint64_t)cap_endpoint_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_endpoint_cap & ~0x1full) == ((1 && ((uint64_t)cap_endpoint_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 712, __FUNCTION__);
    if(!((capCanGrant & ~0x1ull) == ((1 && (capCanGrant & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capCanGrant & ~0x1ull) == ((1 && (capCanGrant & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 713, __FUNCTION__);
    if(!((capCanSend & ~0x1ull) == ((1 && (capCanSend & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capCanSend & ~0x1ull) == ((1 && (capCanSend & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 714, __FUNCTION__);
    if(!((capCanReceive & ~0x1ull) == ((1 && (capCanReceive & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capCanReceive & ~0x1ull) == ((1 && (capCanReceive & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 715, __FUNCTION__);
    if(!((capEPPtr & ~0xffffffffffffull) == ((1 && (capEPPtr & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(capEPPtr & ~0xffffffffffffull) == ((1 && (capEPPtr & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 716, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_endpoint_cap & 0x1full) << 59
        | (capCanGrant & 0x1ull) << 58
        | (capCanSend & 0x1ull) << 56
        | (capCanReceive & 0x1ull) << 57
        | (capEPPtr & 0xffffffffffffull) >> 0;
    cap.words[1] = 0
        | capEPBadge << 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_endpoint_cap_get_capEPBadge(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap",
                           "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 733 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                           734
# 733 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                            ;

    ret = (cap.words[1] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_endpoint_cap_set_capEPBadge(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap",
                           "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 746 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                           747
# 746 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                            ;
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffffffull >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffffffffull >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 749, __FUNCTION__);

    cap.words[1] &= ~0xffffffffffffffffull;
    cap.words[1] |= (v64 << 0) & 0xffffffffffffffffull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_endpoint_cap_get_capCanGrant(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap",
                           "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 759 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                           760
# 759 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                            ;

    ret = (cap.words[0] & 0x400000000000000ull) >> 58;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_endpoint_cap_set_capCanGrant(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap",
                           "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 772 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                           773
# 772 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                            ;
    /* fail if user has passed bits that we will override */
    if(!((((~0x400000000000000ull >> 58 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x400000000000000ull >> 58 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 775, __FUNCTION__);

    cap.words[0] &= ~0x400000000000000ull;
    cap.words[0] |= (v64 << 58) & 0x400000000000000ull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_endpoint_cap_get_capCanReceive(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap",
                           "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 785 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                           786
# 785 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                            ;

    ret = (cap.words[0] & 0x200000000000000ull) >> 57;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_endpoint_cap_set_capCanReceive(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap",
                           "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 798 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                           799
# 798 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                            ;
    /* fail if user has passed bits that we will override */
    if(!((((~0x200000000000000ull >> 57 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x200000000000000ull >> 57 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 801, __FUNCTION__);

    cap.words[0] &= ~0x200000000000000ull;
    cap.words[0] |= (v64 << 57) & 0x200000000000000ull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_endpoint_cap_get_capCanSend(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap",
                           "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 811 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                           812
# 811 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                            ;

    ret = (cap.words[0] & 0x100000000000000ull) >> 56;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_endpoint_cap_set_capCanSend(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap",
                           "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 824 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                           825
# 824 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                            ;
    /* fail if user has passed bits that we will override */
    if(!((((~0x100000000000000ull >> 56 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x100000000000000ull >> 56 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 827, __FUNCTION__);

    cap.words[0] &= ~0x100000000000000ull;
    cap.words[0] |= (v64 << 56) & 0x100000000000000ull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_endpoint_cap_get_capEPPtr(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_endpoint_cap",
                           "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 837 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                           838
# 837 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                            ;

    ret = (cap.words[0] & 0xffffffffffffull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_notification_cap_new(uint64_t capNtfnBadge, uint64_t capNtfnCanReceive, uint64_t capNtfnCanSend, uint64_t capNtfnPtr) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)cap_notification_cap & ~0x1full) == ((1 && ((uint64_t)cap_notification_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_notification_cap & ~0x1full) == ((1 && ((uint64_t)cap_notification_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 853, __FUNCTION__);
    if(!((capNtfnCanReceive & ~0x1ull) == ((1 && (capNtfnCanReceive & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capNtfnCanReceive & ~0x1ull) == ((1 && (capNtfnCanReceive & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 854, __FUNCTION__);
    if(!((capNtfnCanSend & ~0x1ull) == ((1 && (capNtfnCanSend & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capNtfnCanSend & ~0x1ull) == ((1 && (capNtfnCanSend & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 855, __FUNCTION__);
    if(!((capNtfnPtr & ~0xffffffffffffull) == ((1 && (capNtfnPtr & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(capNtfnPtr & ~0xffffffffffffull) == ((1 && (capNtfnPtr & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 856, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_notification_cap & 0x1full) << 59
        | (capNtfnCanReceive & 0x1ull) << 58
        | (capNtfnCanSend & 0x1ull) << 57
        | (capNtfnPtr & 0xffffffffffffull) >> 0;
    cap.words[1] = 0
        | capNtfnBadge << 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_notification_cap_get_capNtfnBadge(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_notification_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_notification_cap",
                               "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 872 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                               873
# 872 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                ;

    ret = (cap.words[1] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_notification_cap_set_capNtfnBadge(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_notification_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_notification_cap",
                               "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 885 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                               886
# 885 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                ;
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffffffull >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffffffffull >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 888, __FUNCTION__);

    cap.words[1] &= ~0xffffffffffffffffull;
    cap.words[1] |= (v64 << 0) & 0xffffffffffffffffull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_notification_cap_get_capNtfnCanReceive(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_notification_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_notification_cap",
                               "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 898 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                               899
# 898 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                ;

    ret = (cap.words[0] & 0x400000000000000ull) >> 58;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_notification_cap_set_capNtfnCanReceive(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_notification_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_notification_cap",
                               "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 911 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                               912
# 911 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                ;
    /* fail if user has passed bits that we will override */
    if(!((((~0x400000000000000ull >> 58 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x400000000000000ull >> 58 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 914, __FUNCTION__);

    cap.words[0] &= ~0x400000000000000ull;
    cap.words[0] |= (v64 << 58) & 0x400000000000000ull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_notification_cap_get_capNtfnCanSend(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_notification_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_notification_cap",
                               "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 924 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                               925
# 924 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                ;

    ret = (cap.words[0] & 0x200000000000000ull) >> 57;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_notification_cap_set_capNtfnCanSend(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_notification_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_notification_cap",
                               "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 937 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                               938
# 937 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                ;
    /* fail if user has passed bits that we will override */
    if(!((((~0x200000000000000ull >> 57 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x200000000000000ull >> 57 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 940, __FUNCTION__);

    cap.words[0] &= ~0x200000000000000ull;
    cap.words[0] |= (v64 << 57) & 0x200000000000000ull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_notification_cap_get_capNtfnPtr(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_notification_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_notification_cap",
                               "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 950 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                               951
# 950 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                ;

    ret = (cap.words[0] & 0xffffffffffffull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_reply_cap_new(uint64_t capReplyMaster, uint64_t capTCBPtr) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!((capReplyMaster & ~0x1ull) == ((1 && (capReplyMaster & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capReplyMaster & ~0x1ull) == ((1 && (capReplyMaster & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 966, __FUNCTION__);
    if(!(((uint64_t)cap_reply_cap & ~0x1full) == ((1 && ((uint64_t)cap_reply_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_reply_cap & ~0x1full) == ((1 && ((uint64_t)cap_reply_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 967, __FUNCTION__);

    cap.words[0] = 0
        | (capReplyMaster & 0x1ull) << 0
        | ((uint64_t)cap_reply_cap & 0x1full) << 59;
    cap.words[1] = 0
        | capTCBPtr << 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_reply_cap_get_capTCBPtr(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_reply_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_reply_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 981 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        982
# 981 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[1] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
cap_reply_cap_get_capReplyMaster(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_reply_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_reply_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 995 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        996
# 995 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[0] & 0x1ull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_cnode_cap_new(uint64_t capCNodeRadix, uint64_t capCNodeGuardSize, uint64_t capCNodeGuard, uint64_t capCNodePtr) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!((capCNodeRadix & ~0x3full) == ((1 && (capCNodeRadix & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capCNodeRadix & ~0x3full) == ((1 && (capCNodeRadix & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1011, __FUNCTION__);
    if(!((capCNodeGuardSize & ~0x3full) == ((1 && (capCNodeGuardSize & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capCNodeGuardSize & ~0x3full) == ((1 && (capCNodeGuardSize & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1012, __FUNCTION__);
    if(!(((uint64_t)cap_cnode_cap & ~0x1full) == ((1 && ((uint64_t)cap_cnode_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_cnode_cap & ~0x1full) == ((1 && ((uint64_t)cap_cnode_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1013, __FUNCTION__);
    if(!((capCNodePtr & ~0xfffffffffffeull) == ((1 && (capCNodePtr & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(capCNodePtr & ~0xfffffffffffeull) == ((1 && (capCNodePtr & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1014, __FUNCTION__);

    cap.words[0] = 0
        | (capCNodeRadix & 0x3full) << 47
        | (capCNodeGuardSize & 0x3full) << 53
        | ((uint64_t)cap_cnode_cap & 0x1full) << 59
        | (capCNodePtr & 0xfffffffffffeull) >> 1;
    cap.words[1] = 0
        | capCNodeGuard << 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_cnode_cap_get_capCNodeGuard(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1030 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1031
# 1030 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[1] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_cnode_cap_set_capCNodeGuard(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1043 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1044
# 1043 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffffffull >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffffffffull >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1046, __FUNCTION__);

    cap.words[1] &= ~0xffffffffffffffffull;
    cap.words[1] |= (v64 << 0) & 0xffffffffffffffffull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_cnode_cap_get_capCNodeGuardSize(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1056 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1057
# 1056 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[0] & 0x7e0000000000000ull) >> 53;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_cnode_cap_set_capCNodeGuardSize(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1069 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1070
# 1069 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;
    /* fail if user has passed bits that we will override */
    if(!((((~0x7e0000000000000ull >> 53 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x7e0000000000000ull >> 53 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1072, __FUNCTION__);

    cap.words[0] &= ~0x7e0000000000000ull;
    cap.words[0] |= (v64 << 53) & 0x7e0000000000000ull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_cnode_cap_get_capCNodeRadix(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1082 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1083
# 1082 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[0] & 0x1f800000000000ull) >> 47;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
cap_cnode_cap_get_capCNodePtr(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_cnode_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1096 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1097
# 1096 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[0] & 0x7fffffffffffull) << 1;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_thread_cap_new(uint64_t capTCBPtr) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)cap_thread_cap & ~0x1full) == ((1 && ((uint64_t)cap_thread_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_thread_cap & ~0x1full) == ((1 && ((uint64_t)cap_thread_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1112, __FUNCTION__);
    if(!((capTCBPtr & ~0xffffffffffffull) == ((1 && (capTCBPtr & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(capTCBPtr & ~0xffffffffffffull) == ((1 && (capTCBPtr & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1113, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_thread_cap & 0x1full) << 59
        | (capTCBPtr & 0xffffffffffffull) >> 0;
    cap.words[1] = 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_thread_cap_get_capTCBPtr(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_thread_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_thread_cap",
                         "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1126 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                         1127
# 1126 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                          ;

    ret = (cap.words[0] & 0xffffffffffffull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_irq_control_cap_new(void) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)cap_irq_control_cap & ~0x1full) == ((1 && ((uint64_t)cap_irq_control_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_irq_control_cap & ~0x1full) == ((1 && ((uint64_t)cap_irq_control_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1142, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_irq_control_cap & 0x1full) << 59;
    cap.words[1] = 0;

    return cap;
}

static inline cap_t __attribute__((__const__))
cap_irq_handler_cap_new(uint64_t capIRQ) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!((capIRQ & ~0xffull) == ((1 && (capIRQ & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capIRQ & ~0xffull) == ((1 && (capIRQ & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1156, __FUNCTION__);
    if(!(((uint64_t)cap_irq_handler_cap & ~0x1full) == ((1 && ((uint64_t)cap_irq_handler_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_irq_handler_cap & ~0x1full) == ((1 && ((uint64_t)cap_irq_handler_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1157, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_irq_handler_cap & 0x1full) << 59;
    cap.words[1] = 0
        | (capIRQ & 0xffull) << 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_irq_handler_cap_get_capIRQ(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_irq_handler_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_irq_handler_cap",
                              "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1170 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                              1171
# 1170 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                               ;

    ret = (cap.words[1] & 0xffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_zombie_cap_new(uint64_t capZombieID, uint64_t capZombieType) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)cap_zombie_cap & ~0x1full) == ((1 && ((uint64_t)cap_zombie_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_zombie_cap & ~0x1full) == ((1 && ((uint64_t)cap_zombie_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1186, __FUNCTION__);
    if(!((capZombieType & ~0x7full) == ((1 && (capZombieType & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capZombieType & ~0x7full) == ((1 && (capZombieType & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1187, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_zombie_cap & 0x1full) << 59
        | (capZombieType & 0x7full) << 0;
    cap.words[1] = 0
        | capZombieID << 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_zombie_cap_get_capZombieID(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_zombie_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_zombie_cap",
                         "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1201 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                         1202
# 1201 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                          ;

    ret = (cap.words[1] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_zombie_cap_set_capZombieID(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_zombie_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_zombie_cap",
                         "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1214 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                         1215
# 1214 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                          ;
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffffffull >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffffffffffffffffull >> 0 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1217, __FUNCTION__);

    cap.words[1] &= ~0xffffffffffffffffull;
    cap.words[1] |= (v64 << 0) & 0xffffffffffffffffull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_zombie_cap_get_capZombieType(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_zombie_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_zombie_cap",
                         "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1227 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                         1228
# 1227 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                          ;

    ret = (cap.words[0] & 0x7full) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_domain_cap_new(void) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)cap_domain_cap & ~0x1full) == ((1 && ((uint64_t)cap_domain_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_domain_cap & ~0x1full) == ((1 && ((uint64_t)cap_domain_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1243, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_domain_cap & 0x1full) << 59;
    cap.words[1] = 0;

    return cap;
}

static inline cap_t __attribute__((__const__))
cap_frame_cap_new(uint64_t capFMappedASID, uint64_t capFBasePtr, uint64_t capFSize, uint64_t capFVMRights, uint64_t capFIsDevice, uint64_t capFMappedAddress) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!((capFMappedASID & ~0xffffull) == ((1 && (capFMappedASID & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capFMappedASID & ~0xffffull) == ((1 && (capFMappedASID & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1257, __FUNCTION__);
    if(!((capFBasePtr & ~0xffffffffffffull) == ((1 && (capFBasePtr & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(capFBasePtr & ~0xffffffffffffull) == ((1 && (capFBasePtr & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1258, __FUNCTION__);
    if(!(((uint64_t)cap_frame_cap & ~0x1full) == ((1 && ((uint64_t)cap_frame_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_frame_cap & ~0x1full) == ((1 && ((uint64_t)cap_frame_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1259, __FUNCTION__);
    if(!((capFSize & ~0x3ull) == ((1 && (capFSize & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capFSize & ~0x3ull) == ((1 && (capFSize & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1260, __FUNCTION__);
    if(!((capFVMRights & ~0x7ull) == ((1 && (capFVMRights & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capFVMRights & ~0x7ull) == ((1 && (capFVMRights & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1261, __FUNCTION__);
    if(!((capFIsDevice & ~0x1ull) == ((1 && (capFIsDevice & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capFIsDevice & ~0x1ull) == ((1 && (capFIsDevice & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1262, __FUNCTION__);
    if(!((capFMappedAddress & ~0xffffffffffffull) == ((1 && (capFMappedAddress & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(capFMappedAddress & ~0xffffffffffffull) == ((1 && (capFMappedAddress & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1263, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_frame_cap & 0x1full) << 59
        | (capFSize & 0x3ull) << 57
        | (capFVMRights & 0x7ull) << 54
        | (capFIsDevice & 0x1ull) << 53
        | (capFMappedAddress & 0xffffffffffffull) >> 0;
    cap.words[1] = 0
        | (capFMappedASID & 0xffffull) << 48
        | (capFBasePtr & 0xffffffffffffull) >> 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_frame_cap_get_capFMappedASID(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_frame_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_frame_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1281 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1282
# 1281 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[1] & 0xffff000000000000ull) >> 48;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_frame_cap_set_capFMappedASID(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_frame_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_frame_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1294 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1295
# 1294 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;
    /* fail if user has passed bits that we will override */
    if(!((((~0xffff000000000000ull >> 48 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffff000000000000ull >> 48 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1297, __FUNCTION__);

    cap.words[1] &= ~0xffff000000000000ull;
    cap.words[1] |= (v64 << 48) & 0xffff000000000000ull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_frame_cap_get_capFBasePtr(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_frame_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_frame_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1307 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1308
# 1307 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[1] & 0xffffffffffffull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
cap_frame_cap_get_capFSize(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_frame_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_frame_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1321 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1322
# 1321 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[0] & 0x600000000000000ull) >> 57;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
cap_frame_cap_get_capFVMRights(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_frame_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_frame_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1335 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1336
# 1335 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[0] & 0x1c0000000000000ull) >> 54;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_frame_cap_set_capFVMRights(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_frame_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_frame_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1348 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1349
# 1348 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;
    /* fail if user has passed bits that we will override */
    if(!((((~0x1c0000000000000ull >> 54 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x1c0000000000000ull >> 54 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1351, __FUNCTION__);

    cap.words[0] &= ~0x1c0000000000000ull;
    cap.words[0] |= (v64 << 54) & 0x1c0000000000000ull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_frame_cap_get_capFIsDevice(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_frame_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_frame_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1361 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1362
# 1361 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[0] & 0x20000000000000ull) >> 53;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
cap_frame_cap_get_capFMappedAddress(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_frame_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_frame_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1375 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1376
# 1375 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;

    ret = (cap.words[0] & 0xffffffffffffull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_frame_cap_set_capFMappedAddress(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_frame_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_frame_cap",
                        "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1388 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                        1389
# 1388 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                         ;
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffull << 0 ) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0))) _assert_fail("(((~0xffffffffffffull << 0 ) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1391, __FUNCTION__);

    cap.words[0] &= ~0xffffffffffffull;
    cap.words[0] |= (v64 >> 0) & 0xffffffffffffull;
    return cap;
}

static inline cap_t __attribute__((__const__))
cap_page_table_cap_new(uint64_t capPTMappedASID, uint64_t capPTBasePtr, uint64_t capPTIsMapped, uint64_t capPTMappedAddress) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!((capPTMappedASID & ~0xffffull) == ((1 && (capPTMappedASID & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capPTMappedASID & ~0xffffull) == ((1 && (capPTMappedASID & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1403, __FUNCTION__);
    if(!((capPTBasePtr & ~0xffffffffffffull) == ((1 && (capPTBasePtr & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(capPTBasePtr & ~0xffffffffffffull) == ((1 && (capPTBasePtr & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1404, __FUNCTION__);
    if(!(((uint64_t)cap_page_table_cap & ~0x1full) == ((1 && ((uint64_t)cap_page_table_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_page_table_cap & ~0x1full) == ((1 && ((uint64_t)cap_page_table_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1405, __FUNCTION__);
    if(!((capPTIsMapped & ~0x1ull) == ((1 && (capPTIsMapped & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capPTIsMapped & ~0x1ull) == ((1 && (capPTIsMapped & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1406, __FUNCTION__);
    if(!((capPTMappedAddress & ~0xffffffffffffull) == ((1 && (capPTMappedAddress & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(capPTMappedAddress & ~0xffffffffffffull) == ((1 && (capPTMappedAddress & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1407, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_page_table_cap & 0x1full) << 59
        | (capPTIsMapped & 0x1ull) << 48
        | (capPTMappedAddress & 0xffffffffffffull) >> 0;
    cap.words[1] = 0
        | (capPTMappedASID & 0xffffull) << 48
        | (capPTBasePtr & 0xffffffffffffull) >> 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_page_table_cap_get_capPTMappedASID(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1423 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1424
# 1423 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;

    ret = (cap.words[1] & 0xffff000000000000ull) >> 48;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_page_table_cap_set_capPTMappedASID(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1436 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1437
# 1436 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;
    /* fail if user has passed bits that we will override */
    if(!((((~0xffff000000000000ull >> 48 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0xffff000000000000ull >> 48 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1439, __FUNCTION__);

    cap.words[1] &= ~0xffff000000000000ull;
    cap.words[1] |= (v64 << 48) & 0xffff000000000000ull;
    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_page_table_cap_get_capPTBasePtr(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1449 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1450
# 1449 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;

    ret = (cap.words[1] & 0xffffffffffffull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
cap_page_table_cap_get_capPTIsMapped(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1463 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1464
# 1463 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;

    ret = (cap.words[0] & 0x1000000000000ull) >> 48;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_page_table_cap_set_capPTIsMapped(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1476 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1477
# 1476 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;
    /* fail if user has passed bits that we will override */
    if(!((((~0x1000000000000ull >> 48 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x1000000000000ull >> 48 ) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1479, __FUNCTION__);

    cap.words[0] &= ~0x1000000000000ull;
    cap.words[0] |= (v64 << 48) & 0x1000000000000ull;
    return cap;
}

static inline void
cap_page_table_cap_ptr_set_capPTIsMapped(cap_t *cap_ptr,
                                      uint64_t v64) {
    if(!(((cap_ptr->words[0] >> 59) & 0x1f) == cap_page_table_cap)) _assert_fail("((cap_ptr->words[0] >> 59) & 0x1f) == cap_page_table_cap",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1489 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1490
# 1489 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;

    /* fail if user has passed bits that we will override */
    if(!((((~0x1000000000000ull >> 48) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0))) _assert_fail("(((~0x1000000000000ull >> 48) | 0x0) & v64) == ((0 && (v64 & (1ull << (47)))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1493, __FUNCTION__);

    cap_ptr->words[0] &= ~0x1000000000000ull;
    cap_ptr->words[0] |= (v64 << 48) & 0x1000000000000ull;
}

static inline uint64_t __attribute__((__const__))
cap_page_table_cap_get_capPTMappedAddress(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1502 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1503
# 1502 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;

    ret = (cap.words[0] & 0xffffffffffffull) << 0;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

static inline cap_t __attribute__((__const__))
cap_page_table_cap_set_capPTMappedAddress(cap_t cap, uint64_t v64) {
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_page_table_cap",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1515 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1516
# 1515 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;
    /* fail if user has passed bits that we will override */
    if(!((((~0xffffffffffffull << 0 ) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0))) _assert_fail("(((~0xffffffffffffull << 0 ) | 0xffff000000000000) & v64) == ((1 && (v64 & (1ull << (47)))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1518, __FUNCTION__);

    cap.words[0] &= ~0xffffffffffffull;
    cap.words[0] |= (v64 >> 0) & 0xffffffffffffull;
    return cap;
}

static inline cap_t __attribute__((__const__))
cap_asid_control_cap_new(void) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)cap_asid_control_cap & ~0x1full) == ((1 && ((uint64_t)cap_asid_control_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_asid_control_cap & ~0x1full) == ((1 && ((uint64_t)cap_asid_control_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1530, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_asid_control_cap & 0x1full) << 59;
    cap.words[1] = 0;

    return cap;
}

static inline cap_t __attribute__((__const__))
cap_asid_pool_cap_new(uint64_t capASIDBase, uint64_t capASIDPool) {
    cap_t cap;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)cap_asid_pool_cap & ~0x1full) == ((1 && ((uint64_t)cap_asid_pool_cap & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)cap_asid_pool_cap & ~0x1full) == ((1 && ((uint64_t)cap_asid_pool_cap & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1544, __FUNCTION__);
    if(!((capASIDBase & ~0xffffull) == ((1 && (capASIDBase & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(capASIDBase & ~0xffffull) == ((1 && (capASIDBase & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1545, __FUNCTION__);
    if(!((capASIDPool & ~0xfffffffff800ull) == ((1 && (capASIDPool & (1ull << 47))) ? 0xffff000000000000 : 0))) _assert_fail("(capASIDPool & ~0xfffffffff800ull) == ((1 && (capASIDPool & (1ull << 47))) ? 0xffff000000000000 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1546, __FUNCTION__);

    cap.words[0] = 0
        | ((uint64_t)cap_asid_pool_cap & 0x1full) << 59
        | (capASIDBase & 0xffffull) << 43
        | (capASIDPool & 0xfffffffff800ull) >> 11;
    cap.words[1] = 0;

    return cap;
}

static inline uint64_t __attribute__((__const__))
cap_asid_pool_cap_get_capASIDBase(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_asid_pool_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_asid_pool_cap",
                            "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1560 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                            1561
# 1560 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                             ;

    ret = (cap.words[0] & 0x7fff80000000000ull) >> 43;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
cap_asid_pool_cap_get_capASIDPool(cap_t cap) {
    uint64_t ret;
    if(!(((cap.words[0] >> 59) & 0x1f) == cap_asid_pool_cap)) _assert_fail("((cap.words[0] >> 59) & 0x1f) == cap_asid_pool_cap",
                            "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1574 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                            1575
# 1574 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                             ;

    ret = (cap.words[0] & 0x1fffffffffull) << 11;
    /* Possibly sign extend */
    if (1 && (ret & (1ull << (47)))) {
        ret |= 0xffff000000000000;
    }
    return ret;
}

struct seL4_Fault {
    uint64_t words[2];
};
typedef struct seL4_Fault seL4_Fault_t;

enum seL4_Fault_tag {
    seL4_Fault_NullFault = 0,
    seL4_Fault_CapFault = 1,
    seL4_Fault_UnknownSyscall = 2,
    seL4_Fault_UserException = 3,
    seL4_Fault_VMFault = 5
};
typedef enum seL4_Fault_tag seL4_Fault_tag_t;

static inline uint64_t __attribute__((__const__))
seL4_Fault_get_seL4_FaultType(seL4_Fault_t seL4_Fault) {
    return (seL4_Fault.words[0] >> 0) & 0x7ull;
}

static inline uint64_t __attribute__((__pure__))
seL4_Fault_ptr_get_seL4_FaultType(seL4_Fault_t *seL4_Fault_ptr) {
    return (seL4_Fault_ptr->words[0] >> 0) & 0x7ull;
}

static inline seL4_Fault_t __attribute__((__const__))
seL4_Fault_NullFault_new(void) {
    seL4_Fault_t seL4_Fault;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)seL4_Fault_NullFault & ~0x7ull) == ((1 && ((uint64_t)seL4_Fault_NullFault & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)seL4_Fault_NullFault & ~0x7ull) == ((1 && ((uint64_t)seL4_Fault_NullFault & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1614, __FUNCTION__);

    seL4_Fault.words[0] = 0
        | ((uint64_t)seL4_Fault_NullFault & 0x7ull) << 0;
    seL4_Fault.words[1] = 0;

    return seL4_Fault;
}

static inline seL4_Fault_t __attribute__((__const__))
seL4_Fault_CapFault_new(uint64_t address, uint64_t inReceivePhase) {
    seL4_Fault_t seL4_Fault;

    /* fail if user has passed bits that we will override */
    if(!((inReceivePhase & ~0x1ull) == ((1 && (inReceivePhase & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(inReceivePhase & ~0x1ull) == ((1 && (inReceivePhase & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1628, __FUNCTION__);
    if(!(((uint64_t)seL4_Fault_CapFault & ~0x7ull) == ((1 && ((uint64_t)seL4_Fault_CapFault & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)seL4_Fault_CapFault & ~0x7ull) == ((1 && ((uint64_t)seL4_Fault_CapFault & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1629, __FUNCTION__);

    seL4_Fault.words[0] = 0
        | (inReceivePhase & 0x1ull) << 63
        | ((uint64_t)seL4_Fault_CapFault & 0x7ull) << 0;
    seL4_Fault.words[1] = 0
        | address << 0;

    return seL4_Fault;
}

static inline uint64_t __attribute__((__const__))
seL4_Fault_CapFault_get_address(seL4_Fault_t seL4_Fault) {
    uint64_t ret;
    if(!(((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_CapFault)) _assert_fail("((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_CapFault",
                              "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1643 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                              1644
# 1643 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                               ;

    ret = (seL4_Fault.words[1] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
seL4_Fault_CapFault_get_inReceivePhase(seL4_Fault_t seL4_Fault) {
    uint64_t ret;
    if(!(((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_CapFault)) _assert_fail("((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_CapFault",
                              "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1657 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                              1658
# 1657 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                               ;

    ret = (seL4_Fault.words[0] & 0x8000000000000000ull) >> 63;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline seL4_Fault_t __attribute__((__const__))
seL4_Fault_UnknownSyscall_new(uint64_t syscallNumber) {
    seL4_Fault_t seL4_Fault;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)seL4_Fault_UnknownSyscall & ~0x7ull) == ((1 && ((uint64_t)seL4_Fault_UnknownSyscall & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)seL4_Fault_UnknownSyscall & ~0x7ull) == ((1 && ((uint64_t)seL4_Fault_UnknownSyscall & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1673, __FUNCTION__);

    seL4_Fault.words[0] = 0
        | ((uint64_t)seL4_Fault_UnknownSyscall & 0x7ull) << 0;
    seL4_Fault.words[1] = 0
        | syscallNumber << 0;

    return seL4_Fault;
}

static inline uint64_t __attribute__((__const__))
seL4_Fault_UnknownSyscall_get_syscallNumber(seL4_Fault_t seL4_Fault) {
    uint64_t ret;
    if(!(((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_UnknownSyscall)) _assert_fail("((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_UnknownSyscall",
                                    "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1686 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                                    1687
# 1686 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                     ;

    ret = (seL4_Fault.words[1] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline seL4_Fault_t __attribute__((__const__))
seL4_Fault_UserException_new(uint64_t number, uint64_t code) {
    seL4_Fault_t seL4_Fault;

    /* fail if user has passed bits that we will override */
    if(!((number & ~0xffffffffull) == ((1 && (number & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(number & ~0xffffffffull) == ((1 && (number & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1702, __FUNCTION__);
    if(!((code & ~0x1fffffffull) == ((1 && (code & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(code & ~0x1fffffffull) == ((1 && (code & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1703, __FUNCTION__);
    if(!(((uint64_t)seL4_Fault_UserException & ~0x7ull) == ((1 && ((uint64_t)seL4_Fault_UserException & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)seL4_Fault_UserException & ~0x7ull) == ((1 && ((uint64_t)seL4_Fault_UserException & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1704, __FUNCTION__);

    seL4_Fault.words[0] = 0
        | (number & 0xffffffffull) << 32
        | (code & 0x1fffffffull) << 3
        | ((uint64_t)seL4_Fault_UserException & 0x7ull) << 0;
    seL4_Fault.words[1] = 0;

    return seL4_Fault;
}

static inline uint64_t __attribute__((__const__))
seL4_Fault_UserException_get_number(seL4_Fault_t seL4_Fault) {
    uint64_t ret;
    if(!(((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_UserException)) _assert_fail("((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_UserException",
                                   "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1718 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                                   1719
# 1718 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                    ;

    ret = (seL4_Fault.words[0] & 0xffffffff00000000ull) >> 32;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
seL4_Fault_UserException_get_code(seL4_Fault_t seL4_Fault) {
    uint64_t ret;
    if(!(((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_UserException)) _assert_fail("((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_UserException",
                                   "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1732 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                                   1733
# 1732 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                    ;

    ret = (seL4_Fault.words[0] & 0xfffffff8ull) >> 3;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline seL4_Fault_t __attribute__((__const__))
seL4_Fault_VMFault_new(uint64_t address, uint64_t FSR, uint64_t instructionFault) {
    seL4_Fault_t seL4_Fault;

    /* fail if user has passed bits that we will override */
    if(!((FSR & ~0x1full) == ((1 && (FSR & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(FSR & ~0x1full) == ((1 && (FSR & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1748, __FUNCTION__);
    if(!((instructionFault & ~0x1ull) == ((1 && (instructionFault & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(instructionFault & ~0x1ull) == ((1 && (instructionFault & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1749, __FUNCTION__);
    if(!(((uint64_t)seL4_Fault_VMFault & ~0x7ull) == ((1 && ((uint64_t)seL4_Fault_VMFault & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)seL4_Fault_VMFault & ~0x7ull) == ((1 && ((uint64_t)seL4_Fault_VMFault & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1750, __FUNCTION__);

    seL4_Fault.words[0] = 0
        | (FSR & 0x1full) << 27
        | (instructionFault & 0x1ull) << 19
        | ((uint64_t)seL4_Fault_VMFault & 0x7ull) << 0;
    seL4_Fault.words[1] = 0
        | address << 0;

    return seL4_Fault;
}

static inline uint64_t __attribute__((__const__))
seL4_Fault_VMFault_get_address(seL4_Fault_t seL4_Fault) {
    uint64_t ret;
    if(!(((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_VMFault)) _assert_fail("((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_VMFault",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1765 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1766
# 1765 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;

    ret = (seL4_Fault.words[1] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
seL4_Fault_VMFault_get_FSR(seL4_Fault_t seL4_Fault) {
    uint64_t ret;
    if(!(((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_VMFault)) _assert_fail("((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_VMFault",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1779 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1780
# 1779 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;

    ret = (seL4_Fault.words[0] & 0xf8000000ull) >> 27;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
seL4_Fault_VMFault_get_instructionFault(seL4_Fault_t seL4_Fault) {
    uint64_t ret;
    if(!(((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_VMFault)) _assert_fail("((seL4_Fault.words[0] >> 0) & 0x7) == seL4_Fault_VMFault",
                             "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1793 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                             1794
# 1793 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                              ;

    ret = (seL4_Fault.words[0] & 0x80000ull) >> 19;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

struct lookup_fault {
    uint64_t words[2];
};
typedef struct lookup_fault lookup_fault_t;

enum lookup_fault_tag {
    lookup_fault_invalid_root = 0,
    lookup_fault_missing_capability = 1,
    lookup_fault_depth_mismatch = 2,
    lookup_fault_guard_mismatch = 3
};
typedef enum lookup_fault_tag lookup_fault_tag_t;

static inline uint64_t __attribute__((__const__))
lookup_fault_get_lufType(lookup_fault_t lookup_fault) {
    return (lookup_fault.words[0] >> 0) & 0x3ull;
}

static inline lookup_fault_t __attribute__((__const__))
lookup_fault_invalid_root_new(void) {
    lookup_fault_t lookup_fault;

    /* fail if user has passed bits that we will override */
    if(!(((uint64_t)lookup_fault_invalid_root & ~0x3ull) == ((1 && ((uint64_t)lookup_fault_invalid_root & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)lookup_fault_invalid_root & ~0x3ull) == ((1 && ((uint64_t)lookup_fault_invalid_root & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1827, __FUNCTION__);

    lookup_fault.words[0] = 0
        | ((uint64_t)lookup_fault_invalid_root & 0x3ull) << 0;
    lookup_fault.words[1] = 0;

    return lookup_fault;
}

static inline lookup_fault_t __attribute__((__const__))
lookup_fault_missing_capability_new(uint64_t bitsLeft) {
    lookup_fault_t lookup_fault;

    /* fail if user has passed bits that we will override */
    if(!((bitsLeft & ~0x7full) == ((1 && (bitsLeft & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(bitsLeft & ~0x7full) == ((1 && (bitsLeft & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1841, __FUNCTION__);
    if(!(((uint64_t)lookup_fault_missing_capability & ~0x3ull) == ((1 && ((uint64_t)lookup_fault_missing_capability & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)lookup_fault_missing_capability & ~0x3ull) == ((1 && ((uint64_t)lookup_fault_missing_capability & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1842, __FUNCTION__);

    lookup_fault.words[0] = 0
        | (bitsLeft & 0x7full) << 2
        | ((uint64_t)lookup_fault_missing_capability & 0x3ull) << 0;
    lookup_fault.words[1] = 0;

    return lookup_fault;
}

static inline uint64_t __attribute__((__const__))
lookup_fault_missing_capability_get_bitsLeft(lookup_fault_t lookup_fault) {
    uint64_t ret;
    if(!(((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_missing_capability)) _assert_fail("((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_missing_capability",
                                          "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1855 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                                          1856
# 1855 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                           ;

    ret = (lookup_fault.words[0] & 0x1fcull) >> 2;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline lookup_fault_t __attribute__((__const__))
lookup_fault_depth_mismatch_new(uint64_t bitsFound, uint64_t bitsLeft) {
    lookup_fault_t lookup_fault;

    /* fail if user has passed bits that we will override */
    if(!((bitsFound & ~0x7full) == ((1 && (bitsFound & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(bitsFound & ~0x7full) == ((1 && (bitsFound & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1871, __FUNCTION__);
    if(!((bitsLeft & ~0x7full) == ((1 && (bitsLeft & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(bitsLeft & ~0x7full) == ((1 && (bitsLeft & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1872, __FUNCTION__);
    if(!(((uint64_t)lookup_fault_depth_mismatch & ~0x3ull) == ((1 && ((uint64_t)lookup_fault_depth_mismatch & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)lookup_fault_depth_mismatch & ~0x3ull) == ((1 && ((uint64_t)lookup_fault_depth_mismatch & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1873, __FUNCTION__);

    lookup_fault.words[0] = 0
        | (bitsFound & 0x7full) << 9
        | (bitsLeft & 0x7full) << 2
        | ((uint64_t)lookup_fault_depth_mismatch & 0x3ull) << 0;
    lookup_fault.words[1] = 0;

    return lookup_fault;
}

static inline uint64_t __attribute__((__const__))
lookup_fault_depth_mismatch_get_bitsFound(lookup_fault_t lookup_fault) {
    uint64_t ret;
    if(!(((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_depth_mismatch)) _assert_fail("((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_depth_mismatch",
                                      "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1887 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                                      1888
# 1887 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                       ;

    ret = (lookup_fault.words[0] & 0xfe00ull) >> 9;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
lookup_fault_depth_mismatch_get_bitsLeft(lookup_fault_t lookup_fault) {
    uint64_t ret;
    if(!(((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_depth_mismatch)) _assert_fail("((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_depth_mismatch",
                                      "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1901 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                                      1902
# 1901 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                       ;

    ret = (lookup_fault.words[0] & 0x1fcull) >> 2;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline lookup_fault_t __attribute__((__const__))
lookup_fault_guard_mismatch_new(uint64_t guardFound, uint64_t bitsLeft, uint64_t bitsFound) {
    lookup_fault_t lookup_fault;

    /* fail if user has passed bits that we will override */
    if(!((bitsLeft & ~0x7full) == ((1 && (bitsLeft & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(bitsLeft & ~0x7full) == ((1 && (bitsLeft & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1917, __FUNCTION__);
    if(!((bitsFound & ~0x7full) == ((1 && (bitsFound & (1ull << 47))) ? 0x0 : 0))) _assert_fail("(bitsFound & ~0x7full) == ((1 && (bitsFound & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1918, __FUNCTION__);
    if(!(((uint64_t)lookup_fault_guard_mismatch & ~0x3ull) == ((1 && ((uint64_t)lookup_fault_guard_mismatch & (1ull << 47))) ? 0x0 : 0))) _assert_fail("((uint64_t)lookup_fault_guard_mismatch & ~0x3ull) == ((1 && ((uint64_t)lookup_fault_guard_mismatch & (1ull << 47))) ? 0x0 : 0)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h", 1919, __FUNCTION__);

    lookup_fault.words[0] = 0
        | (bitsLeft & 0x7full) << 9
        | (bitsFound & 0x7full) << 2
        | ((uint64_t)lookup_fault_guard_mismatch & 0x3ull) << 0;
    lookup_fault.words[1] = 0
        | guardFound << 0;

    return lookup_fault;
}

static inline uint64_t __attribute__((__const__))
lookup_fault_guard_mismatch_get_guardFound(lookup_fault_t lookup_fault) {
    uint64_t ret;
    if(!(((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_guard_mismatch)) _assert_fail("((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_guard_mismatch",
                                      "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1934 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                                      1935
# 1934 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                       ;

    ret = (lookup_fault.words[1] & 0xffffffffffffffffull) >> 0;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
lookup_fault_guard_mismatch_get_bitsLeft(lookup_fault_t lookup_fault) {
    uint64_t ret;
    if(!(((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_guard_mismatch)) _assert_fail("((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_guard_mismatch",
                                      "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1948 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                                      1949
# 1948 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                       ;

    ret = (lookup_fault.words[0] & 0xfe00ull) >> 9;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}

static inline uint64_t __attribute__((__const__))
lookup_fault_guard_mismatch_get_bitsFound(lookup_fault_t lookup_fault) {
    uint64_t ret;
    if(!(((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_guard_mismatch)) _assert_fail("((lookup_fault.words[0] >> 0) & 0x3) == lookup_fault_guard_mismatch",
                                      "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
# 1962 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    ,
                                      1963
# 1962 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h"
    , __FUNCTION__)
                                       ;

    ret = (lookup_fault.words[0] & 0x1fcull) >> 2;
    /* Possibly sign extend */
    if (0 && (ret & (1ull << (47)))) {
        ret |= 0x0;
    }
    return ret;
}
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/macros.h" 1
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
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/constants.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation_.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation_.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/basic_types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation_.h" 2
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 2

enum irq_state {
    IRQInactive = 0,
    IRQSignal = 1,
    IRQTimer = 2,



    IRQReserved
};
typedef word_t irq_state_t;

typedef struct dschedule {
    dom_t domain;
    word_t length;
} dschedule_t;

/* Arch-independent object types */
enum endpoint_state {
    EPState_Idle = 0,
    EPState_Send = 1,
    EPState_Recv = 2
};
typedef word_t endpoint_state_t;

enum notification_state {
    NtfnState_Idle = 0,
    NtfnState_Waiting = 1,
    NtfnState_Active = 2
};
typedef word_t notification_state_t;
# 67 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h"
// We would like the actual 'tcb' region (the portion that contains the tcb_t) of the tcb
// to be as large as possible, but it still needs to be aligned. As the TCB object contains
// two sub objects the largest we can make either sub object whilst preserving size alignment
// is half the total size. To halve an object size defined in bits we just subtract 1






/* Generate a tcb_t or cte_t pointer from a tcb block reference */




/* Generate a cte_t pointer from a tcb_t pointer */
# 92 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h"
static inline cap_t __attribute__((__const__))
Zombie_new(word_t number, word_t type, word_t ptr)
{
    word_t mask;

    if (type == (1ul << (6))) {
        mask = ((1ul << (4 + 1))-1ul);
    } else {
        mask = ((1ul << (type + 1))-1ul);
    }

    return cap_zombie_cap_new((ptr & ~mask) | (number & mask), type);
}

static inline word_t __attribute__((__const__))
cap_zombie_cap_get_capZombieBits(cap_t cap)
{
    word_t type = cap_zombie_cap_get_capZombieType(cap);
    if (type == (1ul << (6))) {
        return 4;
    }
    return ((type) & ((1ul << (6))-1ul)); /* cnode radix */
}

static inline word_t __attribute__((__const__))
cap_zombie_cap_get_capZombieNumber(cap_t cap)
{
    word_t radix = cap_zombie_cap_get_capZombieBits(cap);
    return cap_zombie_cap_get_capZombieID(cap) & ((1ul << (radix + 1))-1ul);
}

static inline word_t __attribute__((__const__))
cap_zombie_cap_get_capZombiePtr(cap_t cap)
{
    word_t radix = cap_zombie_cap_get_capZombieBits(cap);
    return cap_zombie_cap_get_capZombieID(cap) & ~((1ul << (radix + 1))-1ul);
}

static inline cap_t __attribute__((__const__))
cap_zombie_cap_set_capZombieNumber(cap_t cap, word_t n)
{
    word_t radix = cap_zombie_cap_get_capZombieBits(cap);
    word_t ptr = cap_zombie_cap_get_capZombieID(cap) & ~((1ul << (radix + 1))-1ul);
    return cap_zombie_cap_set_capZombieID(cap, ptr | (n & ((1ul << (radix + 1))-1ul)));
}

/* Capability table entry (CTE) */
struct cte {
    cap_t cap;
    mdb_node_t cteMDBNode;
};
typedef struct cte cte_t;



/* Thread state */
enum _thread_state {
    ThreadState_Inactive = 0,
    ThreadState_Running,
    ThreadState_Restart,
    ThreadState_BlockedOnReceive,
    ThreadState_BlockedOnSend,
    ThreadState_BlockedOnReply,
    ThreadState_BlockedOnNotification,



    ThreadState_IdleThreadState
};
typedef word_t _thread_state_t;

/* A TCB CNode and a TCB are always allocated together, and adjacently.
 * The CNode comes first. */
enum tcb_cnode_index {
    /* CSpace root */
    tcbCTable = 0,

    /* VSpace root */
    tcbVTable = 1,

    /* Reply cap slot */
    tcbReply = 2,

    /* TCB of most recent IPC sender */
    tcbCaller = 3,

    /* IPC buffer cap slot */
    tcbBuffer = 4,

    tcbCNodeEntries
};
typedef word_t tcb_cnode_index_t;

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */





# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 2

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 2

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 2



# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/linker.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/linker.h" 2
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 2

/* code that is only used during kernel bootstrapping */


/* read-only data only used during kernel bootstrapping */


/* read/write data only used during kernel bootstrapping */


/* node-local bss data that is only used during kernel bootstrapping */


/* data will be aligned to n bytes in a special BSS section */


/* data that will be mapped into and permitted to be used in the restricted SKIM
 * address space */


/* bss data that is permitted to be used in the restricted SKIM address space */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 2

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 32 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/api/constants.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */





# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/autoconf/autoconf.h" 1
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/api/constants.h" 2



/* log 2 bits in a word */
# 36 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/api/constants.h"
/* Sv39/Sv48 pages/ptes sizes */
# 49 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/api/constants.h"
/* Untyped size limits */



enum {
    seL4_VMFault_IP,
    seL4_VMFault_Addr,
    seL4_VMFault_PrefetchFault,
    seL4_VMFault_FSR,
    seL4_VMFault_Length,
} seL4_VMFault_Msg;

enum {
    seL4_UnknownSyscall_FaultIP,
    seL4_UnknownSyscall_SP,
    seL4_UnknownSyscall_RA,
    seL4_UnknownSyscall_A0,
    seL4_UnknownSyscall_A1,
    seL4_UnknownSyscall_A2,
    seL4_UnknownSyscall_A3,
    seL4_UnknownSyscall_A4,
    seL4_UnknownSyscall_A5,
    seL4_UnknownSyscall_A6,
    seL4_UnknownSyscall_Syscall,
    seL4_UnknownSyscall_Length,
} seL4_UnknownSyscall_Msg;

enum {
    seL4_UserException_FaultIP,
    seL4_UserException_SP,
    seL4_UserException_FLAGS,
    seL4_UserException_Number,
    seL4_UserException_Code,
    seL4_UserException_Length,
} seL4_UserException_Msg;
# 33 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 2



/* MMU RISC-V related definitions. See RISC-V manual priv-1.10 */

/* Extract the n-level PT index from a virtual address. This works for any
 * configured RISC-V system with CONFIG_PT_LEVEL (which can be 2 on Sv32,
 * 3 on Sv38, or 4 on Sv48)
 */



/*
 * These values are defined in RISC-V priv-1.10 manual, they represent the
 * exception codes saved in scause register (by the hardware) on traps.
 */
enum vm_fault_type {
    RISCVInstructionMisaligned = 0,
    RISCVInstructionAccessFault = 1,
    RISCVInstructionIllegal = 2,
    RISCVBreakpoint = 3,
    RISCVLoadAccessFault = 5,
    RISCVAddressMisaligned = 6,
    RISCVStoreAccessFault = 7,
    RISCVEnvCall = 8,
    RISCVInstructionPageFault = 12,
    RISCVLoadPageFault = 13,
    RISCVStorePageFault = 15
};
typedef uint32_t vm_fault_type_t;

enum frameSizeConstants {
    RISCVPageBits = 12,
    RISCVMegaPageBits = 21,
    RISCVGigaPageBits = 30,



};

enum vm_page_size {
    RISCV_4K_Page,
    RISCV_Mega_Page,
    RISCV_Giga_Page,
    RISCV_Tera_Page
};
typedef uint32_t vm_page_size_t;

static inline unsigned int __attribute__((__const__))
pageBitsForSize(vm_page_size_t pagesize)
{
    switch (pagesize) {
    case RISCV_4K_Page:
        return RISCVPageBits;

    case RISCV_Mega_Page:
        return RISCVMegaPageBits;


    case RISCV_Giga_Page:
        return RISCVGigaPageBits;







    default:
        _fail("Invalid page size", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h", 102, __func__);
    }
}
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/registerset.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/registerset.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/encoding.h" 1
/* Copyright (c) 2010-2017, The Regents of the University of California
 * (Regents).  All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Regents nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
 * SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
 * HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

/* This file is copied from RISC-V tools, it might change for
 * new spec releases.
 */
# 187 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/encoding.h"
/* page table entry (PTE) fields */
# 220 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/encoding.h"
/* Automatically generated by parse-opcodes.  */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/registerset.h" 2



# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/registerset.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/registerset.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/registerset.h" 2

enum _register {

    ra = 0, LR = 0,

    sp = 1, SP = 1,
    gp = 2,
    tp = 3,
    TLS_BASE = tp,

    t0 = 4,
    t1 = 5,
    t2 = 6,
    s0 = 7,
    s1 = 8,

    /* x10-x17 > a0-a7 */
    a0 = 9, capRegister = 9, badgeRegister = 9,
    a1 = 10, msgInfoRegister = 10,
    a2 = 11,
    a3 = 12,
    a4 = 13,
    a5 = 14,
    a6 = 15,
    a7 = 16,

    s2 = 17,
    s3 = 18,
    s4 = 10,
    s5 = 20,
    s6 = 21,
    s7 = 22,
    s8 = 23,
    s9 = 24,
    s10 = 25,
    s11 = 26,

    t3 = 27,
    t4 = 28,
    t5 = 29,
    t6 = 30,

    /* End of GP registers, the following are additional kernel-saved state. */
    SCAUSE,
    SSTATUS,
    SEPC,
    NEXTPC,

    /* TODO: add other user-level CSRs if needed (i.e. to avoid channels) */

    n_contextRegisters
};

typedef uint64_t register_t;

enum messageSizes {
    n_msgRegisters = 4,
    n_frameRegisters = 17,
    n_gpRegisters = 0,
    n_exceptionMessage = 3,
    n_syscallMessage = 10
};

extern const register_t msgRegisters[] __attribute__((externally_visible));
extern const register_t frameRegisters[] __attribute__((externally_visible));
extern const register_t gpRegisters[] __attribute__((externally_visible));

struct user_context {
    word_t registers[n_contextRegisters];
};
typedef struct user_context user_context_t;

static inline void Arch_initContext(user_context_t* context)
{
    /* Enable supervisor interrupts (when going to user-mode) */
    context->registers[SSTATUS] = 0x00000020;
}

static inline word_t __attribute__((__const__))
sanitiseRegister(register_t reg, word_t v, bool_t archInfo)
{
    return v;
}
# 31 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/object/structures.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/object/structures.h" 2

enum asidSizeConstants {
    asidHighBits = 6,
    asidLowBits = 10
};
# 32 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 2



struct asid_pool {
    pte_t* array[(1ul << (asidLowBits))];
};

typedef struct asid_pool asid_pool_t;
# 48 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h"
typedef struct arch_tcb {
    user_context_t tcbContext;
} arch_tcb_t;

enum vm_rights {
    VMKernelOnly = 0,
    VMReadOnly = 1,
    VMWriteOnly = 2,
    VMReadWrite = 3
};
typedef uint32_t vm_rights_t;

typedef pte_t vspace_root_t;

/* Generic fastpath.c code expects pde_t for stored_hw_asid
 * that's a workaround in the time being.
 */
typedef pte_t pde_t;
# 80 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h"
static inline bool_t __attribute__((__const__))
cap_get_archCapIsPhysical(cap_t cap)
{
    cap_tag_t ctag;

    ctag = cap_get_capType(cap);

    switch (ctag) {

    case cap_frame_cap:
        return true;

    case cap_page_table_cap:
        return true;

    case cap_asid_control_cap:
        return false;

    case cap_asid_pool_cap:
        return true;

    default:
        _fail("Invalid arch cap type", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h", 102, __func__);
    }
}

static inline unsigned int __attribute__((__const__))
cap_get_archCapSizeBits(cap_t cap)
{
    cap_tag_t ctag;

    ctag = cap_get_capType(cap);

    switch (ctag) {
    case cap_frame_cap:
        return pageBitsForSize(cap_frame_cap_get_capFSize(cap));

    case cap_page_table_cap:
        return 12;

    case cap_asid_control_cap:
        return 0;

    case cap_asid_pool_cap:
        return 12;

    default:
        if(!(!"Unknown cap type")) _assert_fail("!\"Unknown cap type\"", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h", 127, __FUNCTION__);
        /* Unreachable, but GCC can't figure that out */
        return 0;
    }
}

static inline void * __attribute__((__const__))
cap_get_archCapPtr(cap_t cap)
{
    cap_tag_t ctag;

    ctag = cap_get_capType(cap);

    switch (ctag) {

    case cap_frame_cap:
        return (void *)(cap_frame_cap_get_capFBasePtr(cap));

    case cap_page_table_cap:
        return ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(cap)));

    case cap_asid_control_cap:
        return ((void *)0);

    case cap_asid_pool_cap:
        return ((asid_pool_t*)cap_asid_pool_cap_get_capASIDPool(cap));

    default:
        if(!(!"Unknown cap type")) _assert_fail("!\"Unknown cap type\"", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h", 155, __FUNCTION__);
        /* Unreachable, but GCC can't figure that out */
        return ((void *)0);
    }
}

static inline bool_t __attribute__((__const__))
Arch_isCapRevocable(cap_t derivedCap, cap_t srcCap)
{
    return false;
}
# 186 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 2

static inline word_t __attribute__((__const__))
wordFromVMRights(vm_rights_t vm_rights)
{
    return (word_t)vm_rights;
}

static inline vm_rights_t __attribute__((__const__))
vmRightsFromWord(word_t w)
{
    return (vm_rights_t)w;
}

static inline vm_attributes_t __attribute__((__const__))
vmAttributesFromWord(word_t w)
{
    vm_attributes_t attr;

    attr.words[0] = w;
    return attr;
}

/* TCB: size 64 bytes + sizeof(arch_tcb_t) (aligned to nearest power of 2) */
struct tcb {
    /* arch specific tcb state (including context)*/
    arch_tcb_t tcbArch;

    /* Thread state, 12 bytes */
    thread_state_t tcbState;

    /* Notification that this TCB is bound to. If this is set, when this TCB waits on
     * any sync endpoint, it may receive a signal from a Notification object.
     * 4 bytes*/
    notification_t *tcbBoundNotification;

    /* Current fault, 8 bytes */
    seL4_Fault_t tcbFault;

    /* Current lookup failure, 8 bytes */
    lookup_fault_t tcbLookupFailure;

    /* Domain, 1 byte (packed to 4) */
    dom_t tcbDomain;

    /*  maximum controlled priority, 1 byte (packed to 4) */
    prio_t tcbMCP;

    /* Priority, 1 byte (packed to 4) */
    prio_t tcbPriority;

    /* Timeslice remaining, 4 bytes */
    word_t tcbTimeSlice;

    /* Capability pointer to thread fault handler, 4 bytes */
    cptr_t tcbFaultHandler;

    /* userland virtual address of thread IPC buffer, 4 bytes */
    word_t tcbIPCBuffer;






    /* Previous and next pointers for scheduler queues , 8 bytes */
    struct tcb* tcbSchedNext;
    struct tcb* tcbSchedPrev;
    /* Preivous and next pointers for endpoint and notification queues, 8 bytes */
    struct tcb* tcbEPNext;
    struct tcb* tcbEPPrev;






    /* Pointers for list of all tcbs that is maintained
     * when CONFIG_DEBUG_BUILD is enabled */
    struct tcb *tcbDebugNext;
    struct tcb *tcbDebugPrev;
    /* Use any remaining space for a thread name */
    char tcbName[];

};
typedef struct tcb tcb_t;

/* Ensure object sizes are sane */
typedef int __assert_failed_cte_size_sane[(sizeof(cte_t) <= (1ul << (5))) ? 1 : -1];
typedef int __assert_failed_tcb_cte_size_sane[((4 + 5) <= (10 - 1)) ? 1 : -1];
typedef int __assert_failed_tcb_size_sane[((1ul << ((10 - 1))) >= sizeof(tcb_t)) ? 1 : -1];

typedef int __assert_failed_tcb_size_not_excessive[((1ul << ((10 - 1) - 1)) < sizeof(tcb_t)) ? 1 : -1];

typedef int __assert_failed_ep_size_sane[(sizeof(endpoint_t) <= (1ul << (4))) ? 1 : -1];
typedef int __assert_failed_notification_size_sane[(sizeof(notification_t) <= (1ul << (5))) ? 1 : -1];

/* Check the IPC buffer is the right size */
typedef int __assert_failed_ipc_buf_size_sane[(sizeof(seL4_IPCBuffer) == (1ul << (10))) ? 1 : -1];

/* helper functions */

static inline word_t __attribute__((__const__))
isArchCap(cap_t cap)
{
    return (cap_get_capType(cap) % 2);
}

static inline word_t __attribute__((__const__))
cap_get_capSizeBits(cap_t cap)
{

    cap_tag_t ctag;

    ctag = cap_get_capType(cap);

    switch (ctag) {
    case cap_untyped_cap:
        return cap_untyped_cap_get_capBlockSize(cap);

    case cap_endpoint_cap:
        return 4;

    case cap_notification_cap:
        return 5;

    case cap_cnode_cap:
        return cap_cnode_cap_get_capCNodeRadix(cap) + 5;

    case cap_thread_cap:
        return 10;

    case cap_zombie_cap: {
        word_t type = cap_zombie_cap_get_capZombieType(cap);
        if (type == (1ul << (6))) {
            return 10;
        }
        return ((type) & ((1ul << (6))-1ul)) + 5;
    }

    case cap_null_cap:
        return 0;

    case cap_domain_cap:
        return 0;

    case cap_reply_cap:
        return 0;

    case cap_irq_control_cap:
        return 0;

    case cap_irq_handler_cap:
        return 0;

    default:
        return cap_get_archCapSizeBits(cap);
    }

}

/* Returns whether or not this capability has memory associated
 * with it or not. Referring to this as 'being physical' is to
 * match up with the Haskell and abstract specifications */
static inline bool_t __attribute__((__const__))
cap_get_capIsPhysical(cap_t cap)
{
    cap_tag_t ctag;

    ctag = cap_get_capType(cap);

    switch (ctag) {
    case cap_untyped_cap:
        return true;

    case cap_endpoint_cap:
        return true;

    case cap_notification_cap:
        return true;

    case cap_cnode_cap:
        return true;

    case cap_thread_cap:
        return true;

    case cap_zombie_cap:
        return true;

    case cap_domain_cap:
        return false;

    case cap_reply_cap:
        return false;

    case cap_irq_control_cap:
        return false;

    case cap_irq_handler_cap:
        return false;

    default:
        return cap_get_archCapIsPhysical(cap);
    }
}

static inline void * __attribute__((__const__))
cap_get_capPtr(cap_t cap)
{
    cap_tag_t ctag;

    ctag = cap_get_capType(cap);

    switch (ctag) {
    case cap_untyped_cap:
        return ((word_t *)(cap_untyped_cap_get_capPtr(cap)));

    case cap_endpoint_cap:
        return ((endpoint_t *)(cap_endpoint_cap_get_capEPPtr(cap)));

    case cap_notification_cap:
        return ((notification_t *)(cap_notification_cap_get_capNtfnPtr(cap)));

    case cap_cnode_cap:
        return ((cte_t *)(cap_cnode_cap_get_capCNodePtr(cap)));

    case cap_thread_cap:
        return (((cte_t *)((word_t)(cap_thread_cap_get_capTCBPtr(cap))&~((1ul << (10))-1ul)))+(0));

    case cap_zombie_cap:
        return ((cte_t *)(cap_zombie_cap_get_capZombiePtr(cap)));

    case cap_domain_cap:
        return ((void *)0);

    case cap_reply_cap:
        return ((void *)0);

    case cap_irq_control_cap:
        return ((void *)0);

    case cap_irq_handler_cap:
        return ((void *)0);
    default:
        return cap_get_archCapPtr(cap);

    }
}

static inline bool_t __attribute__((__const__))
isCapRevocable(cap_t derivedCap, cap_t srcCap)
{
    if (isArchCap(derivedCap)) {
        return Arch_isCapRevocable(derivedCap, srcCap);
    }
    switch (cap_get_capType(derivedCap)) {
    case cap_endpoint_cap:
        return (cap_endpoint_cap_get_capEPBadge(derivedCap) !=
                cap_endpoint_cap_get_capEPBadge(srcCap));

    case cap_notification_cap:
        return (cap_notification_cap_get_capNtfnBadge(derivedCap) !=
                cap_notification_cap_get_capNtfnBadge(srcCap));

    case cap_irq_handler_cap:
        return (cap_get_capType(srcCap) ==
                cap_irq_control_cap);

    case cap_untyped_cap:
        return true;

    default:
        return false;
    }
}
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/compound_types.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/compound_types.h" 2

struct pde_range {
    pde_t *base;
    word_t length;
};
typedef struct pde_range pde_range_t;

struct pte_range {
    pte_t *base;
    word_t length;
};
typedef struct pte_range pte_range_t;

typedef cte_t *cte_ptr_t;

struct extra_caps {
    cte_ptr_t excaprefs[((1ul<<(seL4_MsgExtraCapBits))-1)];
};
typedef struct extra_caps extra_caps_t;
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 2
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/faults.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */



# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/faults.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/faults.h" 2

word_t setMRs_fault(tcb_t *sender, tcb_t* receiver, word_t *receiveIPCBuffer);
word_t Arch_setMRs_fault(tcb_t *sender, tcb_t* receiver, word_t *receiveIPCBuffer, word_t faultType);

bool_t handleFaultReply(tcb_t *receiver, tcb_t *sender);
bool_t Arch_handleFaultReply(tcb_t *receiver, tcb_t *sender, word_t faultType);
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine.h"
enum IRQConstants {
    INTERRUPT_SW = 0,
    INTERRUPT_TIMER = 5,
    /* TODO: Handle PLIC and add external IRQs upon needed */
    maxIRQ = 5
} platform_interrupt_t;




enum irqNumbers {
    irqInvalid = 6
};

typedef uint32_t interrupt_t;
typedef uint32_t irq_t;
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/registerset.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 2

typedef enum {
    MessageID_Syscall,
    MessageID_Exception
} MessageID_t;


extern const register_t fault_messages[][(((n_syscallMessage)>(n_exceptionMessage))?(n_syscallMessage):(n_exceptionMessage))] __attribute__((externally_visible));

static inline void
setRegister(tcb_t *thread, register_t reg, word_t w)
{
    thread->tcbArch.tcbContext.registers[reg] = w;
}

static inline word_t __attribute__((__pure__))
getRegister(tcb_t *thread, register_t reg)
{
    return thread->tcbArch.tcbContext.registers[reg];
}
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine.h" 2

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 */




/* Place holder for 64-bit machine header */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/64/plat_mode/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */



# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/64/plat_mode/machine/hardware.h" 2


/* The top half of the address space is reserved for the kernel. This means that 256 top level
 * entires are for the user, and 256 are for the kernel. This will be further split into the
 * 'regular' kernel window, which contains mappings to physical memory, and a small higher
 * kernel image window that we use for running the actual kernel from */

/* We steal the top 2 gb entries for the kernel, this means that between PPTR_BASE and
 * KERNEL_BASE there are 254 entries remaining, which represents how much physical memory
 * can be used */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 2

//#if __riscv_xlen == 32

/* Contain the typical location of memory */
//#define PADDR_BASE 0x80000000lu
//#else
/* The main kernel window will start at the 0 physical address so that it can contain
 * any potential memory that may exist */
//#define PADDR_BASE 0x0lu
//#endif

extern word_t keystone_paddr_base;
inline word_t paddr_base(void)
{
  return keystone_paddr_base;
}


//#ifdef CONFIG_BUILD_ROCKET_CHIP_ZEDBOARD
/* The Rocket-Chip for zedboard only has 256MiB of Memory. */
//#define PADDR_LOAD 0x88000000lu
//#else
/* This represents the physical address that the kernel image will be linked to. This needs to
 * be on a 1gb boundary as we currently require being able to creating a mapping to this address
 * as the largest frame size */
//#define PADDR_LOAD 0xC0000000lu
//#endif

extern word_t keystone_paddr_load;
inline word_t paddr_load(void)
{
  return keystone_paddr_load;
}


/* The highest valid physical address that can be indexed in the kernel window */

/* The highest valid physical address that can be used for the kernel image. We offset by
 * PADDR_LOAD as the window for the kernel image is mapped started at PADDR_LOAD */


/* Translates from a physical address and a value in the kernel image */


/* Convert our values into general values expected by the common code */







int get_num_avail_p_regs(void);
p_region_t get_avail_p_reg(unsigned int i);
bool_t add_avail_p_reg(p_region_t reg);
void map_kernel_devices(void);

bool_t __attribute__((__const__)) isReservedIRQ(irq_t irq);
void handleReservedIRQ(irq_t irq);
void ackInterrupt(irq_t irq);
bool_t isIRQPending(void);
/** MODIFIES: [*] */
void maskInterrupt(bool_t enable, irq_t irq);
/** MODIFIES: */
irq_t getActiveIRQ(void);
/** MODIFIES: [*] */
static inline void setInterruptMode(irq_t irq, bool_t levelTrigger, bool_t polarityLow) { }
/** MODIFIES: [*] */
void initTimer(void);
/* L2 cache control */
/** MODIFIES: [*] */
void initL2Cache(void);

void initIRQController(void);

void handleSpuriousIRQ(void);

/** MODIFIES: [*] */
void plat_cleanL2Range(paddr_t start, paddr_t end);
/** MODIFIES: [*] */
void plat_invalidateL2Range(paddr_t start, paddr_t end);
/** MODIFIES: [*] */
void plat_cleanInvalidateL2Range(paddr_t start, paddr_t end);

static inline void* __attribute__((__const__))
paddr_to_kpptr(paddr_t paddr)
{
    if(!(paddr < (-0xFFFFFFFF80000000lu + paddr_load()))) _assert_fail("paddr < PADDR_HIGH_TOP", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h", 111, __FUNCTION__);
    if(!(paddr >= paddr_load())) _assert_fail("paddr >= PADDR_LOAD", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h", 112, __FUNCTION__);
    return (void*)(paddr + (0xFFFFFFFF80000000lu - paddr_load()));
}

static inline paddr_t __attribute__((__const__))
kpptr_to_paddr(void *pptr)
{
    if(!((word_t)pptr >= 0xFFFFFFFF80000000lu)) _assert_fail("(word_t)pptr >= KERNEL_BASE", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h", 119, __FUNCTION__);
    return (paddr_t)pptr - (0xFFFFFFFF80000000lu - paddr_load());
}
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine.h" 2

static inline void* __attribute__((__const__))
ptrFromPAddr(paddr_t paddr)
{
    return (void*)(paddr + (0xFFFFFFC000000000lu - paddr_base()));
}

static inline paddr_t __attribute__((__const__))
addrFromPPtr(void* pptr)
{
    return (paddr_t)pptr - (0xFFFFFFC000000000lu - paddr_base());
}

static inline region_t __attribute__((__const__))
paddr_to_pptr_reg(p_region_t p_reg)
{
    return (region_t) {
        p_reg.start + (0xFFFFFFC000000000lu - paddr_base()), p_reg.end + (0xFFFFFFC000000000lu - paddr_base())
    };
}

static inline p_region_t __attribute__((__const__))
pptr_to_paddr_reg(region_t reg)
{
    return (p_region_t) {
        reg.start - (0xFFFFFFC000000000lu - paddr_base()), reg.end - (0xFFFFFFC000000000lu - paddr_base())
    };
}
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/errors.h" 1
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




typedef enum {
    seL4_NoError = 0,
    seL4_InvalidArgument,
    seL4_InvalidCapability,
    seL4_IllegalOperation,
    seL4_RangeError,
    seL4_AlignmentError,
    seL4_FailedLookup,
    seL4_TruncatedMessage,
    seL4_DeleteFirst,
    seL4_RevokeFirst,
    seL4_NotEnoughMemory,

    /* This should always be the last item in the list
     * so it gives a count of the number of errors in the
     * enum.
     */
    seL4_NumErrors
} seL4_Error;
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 2
/* These datatypes differ markedly from haskell, due to the
 * different implementation of the various fault monads */


enum exception {
    EXCEPTION_NONE,
    EXCEPTION_FAULT,
    EXCEPTION_LOOKUP_FAULT,
    EXCEPTION_SYSCALL_ERROR,
    EXCEPTION_PREEMPTED
};
typedef word_t exception_t;

typedef word_t syscall_error_type_t;

struct syscall_error {
    word_t invalidArgumentNumber;
    word_t invalidCapNumber;
    word_t rangeErrorMin;
    word_t rangeErrorMax;
    word_t memoryLeft;
    bool_t failedLookupWasSource;

    syscall_error_type_t type;
};
typedef struct syscall_error syscall_error_t;

extern lookup_fault_t current_lookup_fault;
extern seL4_Fault_t current_fault;
extern syscall_error_t current_syscall_error;
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 2

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 2

struct slot_range {
    cte_t *cnode;
    word_t offset;
    word_t length;
};
typedef struct slot_range slot_range_t;

exception_t decodeCNodeInvocation(word_t invLabel, word_t length,
                                  cap_t cap, extra_caps_t excaps,
                                  word_t *buffer);
exception_t invokeCNodeRevoke(cte_t *destSlot);
exception_t invokeCNodeDelete(cte_t *destSlot);
exception_t invokeCNodeCancelBadgedSends(cap_t cap);
exception_t invokeCNodeInsert(cap_t cap, cte_t *srcSlot, cte_t *destSlot);
exception_t invokeCNodeMove(cap_t cap, cte_t *srcSlot, cte_t *destSlot);
exception_t invokeCNodeRotate(cap_t cap1, cap_t cap2, cte_t *slot1,
                              cte_t *slot2, cte_t *slot3);
exception_t invokeCNodeSaveCaller(cte_t *destSlot);
void cteInsert(cap_t newCap, cte_t *srcSlot, cte_t *destSlot);
void cteMove(cap_t newCap, cte_t *srcSlot, cte_t *destSlot);
void capSwapForDelete(cte_t *slot1, cte_t *slot2);
void cteSwap(cap_t cap1, cte_t *slot1, cap_t cap2, cte_t *slot2);
exception_t cteRevoke(cte_t *slot);
exception_t cteDelete(cte_t *slot, bool_t exposed);
void cteDeleteOne(cte_t* slot);
void insertNewCap(cte_t *parent, cte_t *slot, cap_t cap);
void setupReplyMaster(tcb_t *thread);
bool_t __attribute__((__pure__)) isMDBParentOf(cte_t *cte_a, cte_t *cte_b);
exception_t ensureNoChildren(cte_t *slot);
exception_t ensureEmptySlot(cte_t *slot);
bool_t __attribute__((__pure__)) isFinalCapability(cte_t *cte);
bool_t __attribute__((__pure__)) slotCapLongRunningDelete(cte_t *slot);
cte_t *getReceiveSlots(tcb_t *thread, word_t *buffer);
cap_transfer_t __attribute__((__pure__)) loadCapTransfer(word_t *buffer);
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 2


/* Maximum length of the tcb name, including null terminator */

typedef int __assert_failed_tcb_name_fits[(((1ul << (10)) - (1ul << ((10 - 1))) - sizeof(tcb_t)) > 0) ? 1 : -1];


struct tcb_queue {
    tcb_t *head;
    tcb_t *end;
};
typedef struct tcb_queue tcb_queue_t;

static inline unsigned int
setMR(tcb_t *receiver, word_t* receiveIPCBuffer,
      unsigned int offset, word_t reg)
{
    if (offset >= n_msgRegisters) {
        if (receiveIPCBuffer) {
            receiveIPCBuffer[offset + 1] = reg;
            return offset + 1;
        } else {
            return n_msgRegisters;
        }
    } else {
        setRegister(receiver, msgRegisters[offset], reg);
        return offset + 1;
    }
}

void tcbSchedEnqueue(tcb_t *tcb);
void tcbSchedAppend(tcb_t *tcb);
void tcbSchedDequeue(tcb_t *tcb);


void tcbDebugAppend(tcb_t *tcb);
void tcbDebugRemove(tcb_t *tcb);
# 81 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h"
tcb_queue_t tcbEPAppend(tcb_t *tcb, tcb_queue_t queue);
tcb_queue_t tcbEPDequeue(tcb_t *tcb, tcb_queue_t queue);

void setupCallerCap(tcb_t *sender, tcb_t *receiver);
void deleteCallerCap(tcb_t *receiver);

word_t copyMRs(tcb_t *sender, word_t *sendBuf, tcb_t *receiver,
               word_t *recvBuf, word_t n);
exception_t decodeTCBInvocation(word_t invLabel, word_t length, cap_t cap,
                                cte_t* slot, extra_caps_t excaps, bool_t call,
                                word_t *buffer);
exception_t decodeCopyRegisters(cap_t cap, word_t length,
                                extra_caps_t excaps, word_t *buffer);
exception_t decodeReadRegisters(cap_t cap, word_t length, bool_t call,
                                word_t *buffer);
exception_t decodeWriteRegisters(cap_t cap, word_t length, word_t *buffer);
exception_t decodeTCBConfigure(cap_t cap, word_t length,
                               cte_t* slot, extra_caps_t rootCaps, word_t *buffer);
exception_t decodeSetPriority(cap_t cap, word_t length, extra_caps_t excaps, word_t *buffer);
exception_t decodeSetMCPriority(cap_t cap, word_t length, extra_caps_t excaps, word_t *buffer);
exception_t decodeSetSchedParams(cap_t cap, word_t length, extra_caps_t excaps, word_t *buffer);
exception_t decodeSetIPCBuffer(cap_t cap, word_t length,
                               cte_t* slot, extra_caps_t excaps, word_t *buffer);
exception_t decodeSetSpace(cap_t cap, word_t length,
                           cte_t* slot, extra_caps_t excaps, word_t *buffer);
exception_t decodeDomainInvocation(word_t invLabel, word_t length,
                                   extra_caps_t excaps, word_t *buffer);
exception_t decodeBindNotification(cap_t cap, extra_caps_t excaps);
exception_t decodeUnbindNotification(cap_t cap);

enum thread_control_flag {
    thread_control_update_priority = 0x1,
    thread_control_update_ipc_buffer = 0x2,
    thread_control_update_space = 0x4,
    thread_control_update_mcp = 0x8,
};

typedef word_t thread_control_flag_t;

exception_t invokeTCB_Suspend(tcb_t *thread);
exception_t invokeTCB_Resume(tcb_t *thread);
exception_t invokeTCB_ThreadControl(tcb_t *target, cte_t* slot, cptr_t faultep,
                                    prio_t mcp, prio_t priority, cap_t cRoot_newCap,
                                    cte_t *cRoot_srcSlot, cap_t vRoot_newCap,
                                    cte_t *vRoot_srcSlot, word_t bufferAddr,
                                    cap_t bufferCap, cte_t *bufferSrcSlot,
                                    thread_control_flag_t updateFlags);
exception_t invokeTCB_CopyRegisters(tcb_t *dest, tcb_t *src,
                                    bool_t suspendSource, bool_t resumeTarget,
                                    bool_t transferFrame, bool_t transferInteger,
                                    word_t transferArch);
exception_t invokeTCB_ReadRegisters(tcb_t *src, bool_t suspendSource,
                                    word_t n, word_t arch, bool_t call);
exception_t invokeTCB_WriteRegisters(tcb_t *dest, bool_t resumeTarget,
                                     word_t n, word_t arch, word_t *buffer);
exception_t invokeTCB_NotificationControl(tcb_t *tcb, notification_t *ntfnPtr);

cptr_t __attribute__((__pure__)) getExtraCPtr(word_t *bufferPtr, word_t i);
void setExtraBadge(word_t *bufferPtr, word_t badge, word_t i);

exception_t lookupExtraCaps(tcb_t* thread, word_t *bufferPtr, seL4_MessageInfo_t info);
word_t setMRs_syscall_error(tcb_t *thread, word_t *receiveIPCBuffer);
word_t __attribute__((__const__)) Arch_decodeTransfer(word_t flags);
exception_t __attribute__((__const__)) Arch_performTransfer(word_t arch, tcb_t *tcb_src,
                                       tcb_t *tcb_dest);






void setThreadName(tcb_t *thread, const char *name);


void Arch_setTCBIPCBuffer(tcb_t *thread, word_t bufferAddr);
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 2
# 45 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h"
/* UP states are declared as VISIBLE so that they are accessible in assembly */
# 65 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h"

extern tcb_queue_t ksReadyQueues[(1 * 256)] __attribute__((externally_visible));
extern word_t ksReadyQueuesL1Bitmap[1] __attribute__((externally_visible));
extern word_t ksReadyQueuesL2Bitmap[1][((256 + (1ul << (6)) - 1) / (1ul << (6)))] __attribute__((externally_visible));
extern tcb_t *ksCurThread __attribute__((externally_visible));
extern tcb_t *ksIdleThread __attribute__((externally_visible));
extern tcb_t *ksSchedulerAction __attribute__((externally_visible));
# 80 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h"
extern tcb_t * ksDebugTCBs __attribute__((externally_visible));


;

extern word_t ksNumCPUs;

extern word_t ksWorkUnitsCompleted;
extern irq_state_t intStateIRQTable[];
extern cte_t *intStateIRQNode;
extern const dschedule_t ksDomSchedule[];
extern const word_t ksDomScheduleLength;
extern word_t ksDomScheduleIdx;
extern dom_t ksCurDomain;
extern word_t ksDomainTime;
extern word_t tlbLockCount __attribute__((externally_visible));
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/vspace.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/vspace.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/vspace.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/vspace.h" 2

cap_t create_it_address_space(cap_t root_cnode_cap, v_region_t it_v_reg);
void map_it_pt_cap(cap_t vspace_cap, cap_t pt_cap);
void map_it_frame_cap(cap_t vspace_cap, cap_t frame_cap);
void keystone_map_kernel_window(word_t start, word_t end);
void map_kernel_window(void);
void map_kernel_frame(paddr_t paddr, pptr_t vaddr, vm_rights_t vm_rights);
void activate_kernel_vspace(void);
void write_it_asid_pool(cap_t it_ap_cap, cap_t it_lvl1pt_cap);


/* ==================== BOOT CODE FINISHES HERE ==================== */


void idle_thread(void);


struct lookupPTSlot_ret {
    pte_t *ptSlot;
    word_t ptBitsLeft;
};

typedef struct lookupPTSlot_ret lookupPTSlot_ret_t;

struct findVSpaceForASID_ret {
    exception_t status;
    pte_t *vspace_root;
};
typedef struct findVSpaceForASID_ret findVSpaceForASID_ret_t;

void copyGlobalMappings(pte_t *newlvl1pt);
word_t* __attribute__((__pure__)) lookupIPCBuffer(bool_t isReceiver, tcb_t *thread);
lookupPTSlot_ret_t lookupPTSlot(pte_t *lvl1pt, vptr_t vptr);
exception_t handleVMFault(tcb_t *thread, vm_fault_type_t vm_faultType);
void unmapPageTable(asid_t, vptr_t vaddr, pte_t* pt);
void unmapPage(vm_page_size_t page_size, asid_t asid, vptr_t vptr, pptr_t pptr);
void deleteASID(asid_t asid, pte_t *vspace);
void deleteASIDPool(asid_t asid_base, asid_pool_t* pool);
bool_t __attribute__((__const__)) isValidVTableRoot(cap_t cap);
exception_t checkValidIPCBuffer(vptr_t vptr, cap_t cap);
vm_rights_t __attribute__((__const__)) maskVMRights(vm_rights_t vm_rights,
                               seL4_CapRights_t cap_rights_mask);
exception_t decodeRISCVMMUInvocation(word_t label, unsigned int length, cptr_t cptr,
                                     cte_t *cte, cap_t cap, extra_caps_t extraCaps,
                                     word_t *buffer);
exception_t performPageTableInvocationMap(cap_t cap, cte_t *ctSlot,
                                          pte_t lvl1pt, pte_t *ptSlot);
exception_t performPageTableInvocationUnmap(cap_t cap, cte_t *ctSlot);
exception_t performPageInvocationMapPTE(cap_t cap, cte_t *ctSlot,
                                        pte_t pte, pte_t *base);
exception_t performPageInvocationRemapPTE(pte_t pte, pte_t *base);
exception_t performPageInvocationUnmap(cap_t cap, cte_t *ctSlot);
void setVMRoot(tcb_t *tcb);


void Arch_userStackTrace(tcb_t *tptr);
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 2
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/arch/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

/* This header was generated by kernel/tools/syscall_header_gen.py.
 *
 * To add a system call number, edit kernel/include/api/syscall.xml
 *
 */
# 38 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/arch/api/syscall.h"
enum syscall {
    SysCall = -1,
    SysReplyRecv = -2,
    SysSend = -3,
    SysNBSend = -4,
    SysRecv = -5,
    SysReply = -6,
    SysYield = -7,
    SysNBRecv = -8,

    SysDebugPutChar = -9,
    SysDebugDumpScheduler = -10,


    SysDebugHalt = -11,
    SysDebugCapIdentify = -12,
    SysDebugSnapshot = -13,
    SysDebugNameThread = -14,
# 78 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/arch/api/syscall.h"
};
typedef word_t syscall_t;

/* System call names */

static char *syscall_names[] __attribute__((unused)) = {
         [1] = "Call",
         [2] = "ReplyRecv",
         [3] = "Send",
         [4] = "NBSend",
         [5] = "Recv",
         [6] = "Reply",
         [7] = "Yield",
         [8] = "NBRecv",
};
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h" 2





# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 1
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/benchmark.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/benchmark.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/benchmark.h" 2
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track_types.h" 1
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





# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/autoconf/autoconf.h" 1
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track_types.h" 2




/* the following code can be used at any point in the kernel
 * to determine detail about the kernel entry point */
typedef enum {
    Entry_Interrupt,
    Entry_UnknownSyscall,
    Entry_UserLevelFault,
    Entry_DebugFault,
    Entry_VMFault,
    Entry_Syscall,
    Entry_UnimplementedDevice,






} entry_type_t;

/**
 * @brief Kernel entry logging
 *
 * Encapsulates useful info about the cause of the kernel entry
 */
typedef struct __attribute__((packed)) kernel_entry {
    seL4_Word path: 3;
    union {
        struct {
            seL4_Word word: 29;
        };
        /* Tracked kernel entry info filled from outside this file */
        struct {
            seL4_Word syscall_no: 4;
            seL4_Word cap_type: 5;
            seL4_Word is_fastpath: 1;
            seL4_Word invocation_tag: 19;
        };
    };
} kernel_entry_t;
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/constants.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 2

struct lookupCap_ret {
    exception_t status;
    cap_t cap;
};
typedef struct lookupCap_ret lookupCap_ret_t;

struct lookupCapAndSlot_ret {
    exception_t status;
    cap_t cap;
    cte_t *slot;
};
typedef struct lookupCapAndSlot_ret lookupCapAndSlot_ret_t;

struct lookupSlot_raw_ret {
    exception_t status;
    cte_t *slot;
};
typedef struct lookupSlot_raw_ret lookupSlot_raw_ret_t;

struct lookupSlot_ret {
    exception_t status;
    cte_t *slot;
};
typedef struct lookupSlot_ret lookupSlot_ret_t;

struct resolveAddressBits_ret {
    exception_t status;
    cte_t *slot;
    word_t bitsRemaining;
};
typedef struct resolveAddressBits_ret resolveAddressBits_ret_t;

lookupCap_ret_t lookupCap(tcb_t *thread, cptr_t cPtr);
lookupCapAndSlot_ret_t lookupCapAndSlot(tcb_t *thread, cptr_t cPtr);
lookupSlot_raw_ret_t lookupSlot(tcb_t *thread, cptr_t capptr);
lookupSlot_ret_t lookupSlotForCNodeOp(bool_t isSource,
                                      cap_t root, cptr_t capptr,
                                      word_t depth);
lookupSlot_ret_t lookupSourceSlot(cap_t root, cptr_t capptr,
                                  word_t depth);
lookupSlot_ret_t lookupTargetSlot(cap_t root, cptr_t capptr,
                                  word_t depth);
lookupSlot_ret_t lookupPivotSlot(cap_t root, cptr_t capptr,
                                 word_t depth);
resolveAddressBits_ret_t resolveAddressBits(cap_t nodeCap,
                                            cptr_t capptr,
                                            word_t n_bits);
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 2



extern kernel_entry_t ksKernelEntry;
# 56 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h"
static inline void
benchmark_debug_syscall_start(word_t cptr, word_t msgInfo, word_t syscall)
{
    seL4_MessageInfo_t info = messageInfoFromWord_raw(msgInfo);
    lookupCapAndSlot_ret_t lu_ret = lookupCapAndSlot(ksCurThread, cptr);
    ksKernelEntry.path = Entry_Syscall;
    ksKernelEntry.syscall_no = -syscall;
    ksKernelEntry.cap_type = cap_get_capType(lu_ret.cap);
    ksKernelEntry.invocation_tag = seL4_MessageInfo_get_label(info);
}
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/arch/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

/* This header was generated by kernel/tools/syscall_header_gen.py.
 *
 * To add a system call number, edit kernel/include/api/syscall.xml
 *
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/vspace.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */





# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/encoding.h" 1
/* Copyright (c) 2010-2017, The Regents of the University of California
 * (Regents).  All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Regents nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
 * SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
 * HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

/* This file is copied from RISC-V tools, it might change for
 * new spec releases.
 */
# 220 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/encoding.h"
/* Automatically generated by parse-opcodes.  */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * Copyright 2018, DornerWorks
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_DORNERWORKS_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/devices.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 2



/* TODO: add RISCV-dependent fields here */
/* Bitmask of all cores should receive the reschedule IPI */
extern word_t ipiReschedulePending __attribute__((externally_visible));
;

extern asid_pool_t *riscvKSASIDTable[(1ul << (asidHighBits))];

/* Kernel Page Tables */
extern pte_t kernel_root_pageTable[(1ul << (9))] __attribute__((externally_visible));
extern pte_t kernel_root_level2_pageTable[(1ul << (9))] __attribute__((externally_visible));

/* If our PADDR_LOAD is not 1GiB aligned then we need to introduce a level2 pagetable
 * in order to map in our kernel image at KERNEL_BASE */
//#if CONFIG_PT_LEVELS == 3 && !IS_ALIGNED(PADDR_LOAD, RISCV_GET_LVL_PGSIZE_BITS(1))

extern pte_t kernel_image_level2_pt[(1ul << (9))];
extern pte_t kernel_image_level3_pt[(1ul << (9))];
//#endif
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/sbi.h" 1
/* Copyright (c) 2010-2017, The Regents of the University of California
 * (Regents).  All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Regents nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
 * SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
 * HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

/* This file is copied from RISC-V tools/linux project, it might change for
 * new spec releases.
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 35 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/sbi.h" 2
# 58 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/sbi.h"
/* Lazy implementations until SBI is finalized */




static inline void sbi_console_putchar(int ch)
{
    ({ register unsigned long a0 __asm__ ("a0") = (unsigned long)(ch); register unsigned long a1 __asm__ ("a1") = (unsigned long)(0); register unsigned long a2 __asm__ ("a2") = (unsigned long)(0); register unsigned long a7 __asm__ ("a7") = (unsigned long)(1); __asm__ volatile ("ecall" : "+r" (a0) : "r" (a1), "r" (a2), "r" (a7) : "memory"); a0; });
}

static inline int sbi_console_getchar(void)
{
    return ({ register unsigned long a0 __asm__ ("a0") = (unsigned long)(0); register unsigned long a1 __asm__ ("a1") = (unsigned long)(0); register unsigned long a2 __asm__ ("a2") = (unsigned long)(0); register unsigned long a7 __asm__ ("a7") = (unsigned long)(2); __asm__ volatile ("ecall" : "+r" (a0) : "r" (a1), "r" (a2), "r" (a7) : "memory"); a0; });
}

static inline void sbi_set_timer(unsigned long long stime_value)
{



    ({ register unsigned long a0 __asm__ ("a0") = (unsigned long)(stime_value); register unsigned long a1 __asm__ ("a1") = (unsigned long)(0); register unsigned long a2 __asm__ ("a2") = (unsigned long)(0); register unsigned long a7 __asm__ ("a7") = (unsigned long)(0); __asm__ volatile ("ecall" : "+r" (a0) : "r" (a1), "r" (a2), "r" (a7) : "memory"); a0; });

}
static inline void sbi_clear_ipi(void)
{
    ({ register unsigned long a0 __asm__ ("a0") = (unsigned long)(0); register unsigned long a1 __asm__ ("a1") = (unsigned long)(0); register unsigned long a2 __asm__ ("a2") = (unsigned long)(0); register unsigned long a7 __asm__ ("a7") = (unsigned long)(3); __asm__ volatile ("ecall" : "+r" (a0) : "r" (a1), "r" (a2), "r" (a7) : "memory"); a0; });
}

static inline void sbi_send_ipi(const unsigned long *hart_mask)
{
    ({ register unsigned long a0 __asm__ ("a0") = (unsigned long)(hart_mask); register unsigned long a1 __asm__ ("a1") = (unsigned long)(0); register unsigned long a2 __asm__ ("a2") = (unsigned long)(0); register unsigned long a7 __asm__ ("a7") = (unsigned long)(4); __asm__ volatile ("ecall" : "+r" (a0) : "r" (a1), "r" (a2), "r" (a7) : "memory"); a0; });
}

static inline void sbi_remote_fence_i(const unsigned long *hart_mask)
{
    ({ register unsigned long a0 __asm__ ("a0") = (unsigned long)(hart_mask); register unsigned long a1 __asm__ ("a1") = (unsigned long)(0); register unsigned long a2 __asm__ ("a2") = (unsigned long)(0); register unsigned long a7 __asm__ ("a7") = (unsigned long)(5); __asm__ volatile ("ecall" : "+r" (a0) : "r" (a1), "r" (a2), "r" (a7) : "memory"); a0; });
}

static inline void sbi_remote_sfence_vma(const unsigned long *hart_mask,
                                         unsigned long start,
                                         unsigned long size)
{
    ({ register unsigned long a0 __asm__ ("a0") = (unsigned long)(hart_mask); register unsigned long a1 __asm__ ("a1") = (unsigned long)(0); register unsigned long a2 __asm__ ("a2") = (unsigned long)(0); register unsigned long a7 __asm__ ("a7") = (unsigned long)(6); __asm__ volatile ("ecall" : "+r" (a0) : "r" (a1), "r" (a2), "r" (a7) : "memory"); a0; });
}

static inline void sbi_remote_sfence_vma_asid(const unsigned long *hart_mask,
                                              unsigned long start,
                                              unsigned long size,
                                              unsigned long asid)
{
    ({ register unsigned long a0 __asm__ ("a0") = (unsigned long)(hart_mask); register unsigned long a1 __asm__ ("a1") = (unsigned long)(0); register unsigned long a2 __asm__ ("a2") = (unsigned long)(0); register unsigned long a7 __asm__ ("a7") = (unsigned long)(7); __asm__ volatile ("ecall" : "+r" (a0) : "r" (a1), "r" (a2), "r" (a7) : "memory"); a0; });
}
# 120 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/sbi.h"
static inline void sbi_stop_enclave(uint64_t request) {
  ({ register unsigned long a0 __asm__ ("a0") = (unsigned long)(request); register unsigned long a1 __asm__ ("a1") = (unsigned long)(0); register unsigned long a2 __asm__ ("a2") = (unsigned long)(0); register unsigned long a7 __asm__ ("a7") = (unsigned long)(106); __asm__ volatile ("ecall" : "+r" (a0) : "r" (a1), "r" (a2), "r" (a7) : "memory"); a0; });
}

static inline void sbi_shutdown(void)
{
//    // Keystone Enclave Exit
      ({ register unsigned long a0 __asm__ ("a0") = (unsigned long)(0); register unsigned long a1 __asm__ ("a1") = (unsigned long)(0); register unsigned long a2 __asm__ ("a2") = (unsigned long)(0); register unsigned long a7 __asm__ ("a7") = (unsigned long)(1101); __asm__ volatile ("ecall" : "+r" (a0) : "r" (a1), "r" (a2), "r" (a7) : "memory"); a0; });
}
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 2

static inline void sfence(void)
{
    __asm__ volatile ("sfence.vma" ::: "memory");
}

static inline void hwASIDFlush(asid_t asid)
{
    __asm__ volatile ("sfence.vma x0, %0" :: "r" (asid): "memory");
}

word_t __attribute__((__pure__)) getRestartPC(tcb_t *thread);
void setNextPC(tcb_t *thread, word_t v);

/* Cleaning memory before user-level access */
static inline void clearMemory(void* ptr, unsigned int bits)
{
    memzero(ptr, (1ul << (bits)));
}

static inline void write_sptbr(word_t value)
{
    __asm__ volatile("csrw sptbr, %0" :: "rK"(value));
}

static inline void write_stvec(word_t value)
{
    __asm__ volatile("csrw stvec, %0" :: "rK"(value));
}

static inline word_t read_sbadaddr(void)
{
    word_t temp;
    __asm__ volatile("csrr %0, sbadaddr" : "=r"(temp));
    return temp;
}

static inline word_t read_scause(void)
{
    word_t temp;
    __asm__ volatile("csrr %0, scause" : "=r"(temp));
    return temp;
}

static inline word_t read_sepc(void)
{
    word_t temp;
    __asm__ volatile("csrr %0, sepc" : "=r"(temp));
    return temp;
}

static inline word_t read_sstatus(void)
{
    word_t temp;
    __asm__ volatile("csrr %0, sstatus" : "=r"(temp));
    return temp;
}

static inline void set_sie_mask(word_t mask_high)
{
    word_t temp;
    __asm__ volatile("csrrs %0, sie, %1" : "=r"(temp) : "rK"(mask_high));
}

static inline void clear_sie_mask(word_t mask_low)
{
    word_t temp;
    __asm__ volatile("csrrc %0, sie, %1" : "=r"(temp) : "rK"(mask_low));
}

static inline void clear_sip_mask(word_t mask_low)
{
    word_t temp;
    __asm__ volatile("csrrc %0, sip, %1" : "=r"(temp) : "rK"(mask_low));
}
# 114 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h"
static inline void setVSpaceRoot(paddr_t addr, asid_t asid)
{
    satp_t satp = satp_new(8llu, /* mode */
                           asid, /* asid */
                           addr >> 12); /* PPN */

    /* Current toolchain still uses sptbr register name although it got renamed in priv-1.10.
     * This will most likely need to change with newer toolchains
     */
    write_sptbr(satp.words[0]);

    /* Order read/write operations */
    sfence();
}

static inline void Arch_finaliseInterrupt(void)
{
}
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 2

static inline __attribute__((__const__)) word_t
ready_queues_index(word_t dom, word_t prio)
{
    if (1 > 1) {
        return dom * 256 + prio;
    } else {
        if(!(dom == 0)) _assert_fail("dom == 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h", 25, __FUNCTION__);
        return prio;
    }
}

static inline __attribute__((__const__)) word_t
prio_to_l1index(word_t prio)
{
    return (prio >> 6);
}

static inline __attribute__((__const__)) word_t
l1index_to_prio(word_t l1index)
{
    return (l1index << 6);
}

static inline bool_t __attribute__((__pure__))
isRunnable(const tcb_t *thread)
{
    switch (thread_state_get_tsType(thread->tcbState)) {
    case ThreadState_Running:
    case ThreadState_Restart:



        return true;

    default:
        return false;
    }
}

static inline __attribute__((__const__)) word_t
invert_l1index(word_t l1index)
{
    word_t inverted = (((256 + (1ul << (6)) - 1) / (1ul << (6))) - 1 - l1index);
    if(!(inverted < ((256 + (1ul << (6)) - 1) / (1ul << (6))))) _assert_fail("inverted < L2_BITMAP_SIZE", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h", 62, __FUNCTION__);
    return inverted;
}

static inline prio_t
getHighestPrio(word_t dom)
{
    word_t l1index;
    word_t l2index;
    word_t l1index_inverted;

    /* it's undefined to call clzl on 0 */
    if(!(ksReadyQueuesL1Bitmap[dom] != 0)) _assert_fail("NODE_STATE(ksReadyQueuesL1Bitmap)[dom] != 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h", 74, __FUNCTION__);

    l1index = (1ul << (6)) - 1 - clzl(ksReadyQueuesL1Bitmap[dom]);
    l1index_inverted = invert_l1index(l1index);
    if(!(ksReadyQueuesL2Bitmap[dom][l1index_inverted] != 0)) _assert_fail("NODE_STATE(ksReadyQueuesL2Bitmap)[dom][l1index_inverted] != 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h", 78, __FUNCTION__);
    l2index = (1ul << (6)) - 1 - clzl(ksReadyQueuesL2Bitmap[dom][l1index_inverted]);
    return (l1index_to_prio(l1index) | l2index);
}

static inline bool_t
isHighestPrio(word_t dom, prio_t prio)
{
    return ksReadyQueuesL1Bitmap[dom] == 0 ||
           prio >= getHighestPrio(dom);
}

void configureIdleThread(tcb_t *tcb);
void activateThread(void);
void suspend(tcb_t *target);
void restart(tcb_t *target);
void doIPCTransfer(tcb_t *sender, endpoint_t *endpoint,
                   word_t badge, bool_t grant, tcb_t *receiver);
void doReplyTransfer(tcb_t *sender, tcb_t *receiver, cte_t *slot);
void doNormalTransfer(tcb_t *sender, word_t *sendBuffer, endpoint_t *endpoint,
                      word_t badge, bool_t canGrant, tcb_t *receiver,
                      word_t *receiveBuffer);
void doFaultTransfer(word_t badge, tcb_t *sender, tcb_t *receiver,
                     word_t *receiverIPCBuffer);
void doNBRecvFailedTransfer(tcb_t *thread);
void schedule(void);
void chooseThread(void);
void switchToThread(tcb_t *thread);
void switchToIdleThread(void);
void setDomain(tcb_t *tptr, dom_t dom);
void setPriority(tcb_t *tptr, prio_t prio);
void setMCPriority(tcb_t *tptr, prio_t mcp);
void scheduleTCB(tcb_t *tptr);
void possibleSwitchTo(tcb_t *tptr);
void setThreadState(tcb_t *tptr, _thread_state_t ts);
void timerTick(void);
void rescheduleRequired(void);

/* declare that the thread has had its registers (in its user_context_t) modified and it
 * should ignore any 'efficient' restores next time it is run, and instead restore all
 * registers into their correct place */
void Arch_postModifyRegisters(tcb_t *tptr);
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h" 2



static inline void
debug_printKernelEntryReason(void)
{
    kprintf("\nKernel entry via ");
    switch (ksKernelEntry.path) {
    case Entry_Interrupt:
        kprintf("Interrupt, irq %lu\n", (unsigned long) ksKernelEntry.word);
        break;
    case Entry_UnknownSyscall:
        kprintf("Unknown syscall, word: %lu", (unsigned long) ksKernelEntry.word);
        break;
    case Entry_VMFault:
        kprintf("VM Fault, fault type: %lu\n", (unsigned long) ksKernelEntry.word);
        break;
    case Entry_UserLevelFault:
        kprintf("User level fault, number: %lu", (unsigned long) ksKernelEntry.word);
        break;





    case Entry_Syscall:
        kprintf("Syscall, number: %ld, %s\n", (long) ksKernelEntry.syscall_no, syscall_names[ksKernelEntry.syscall_no]);
        if (ksKernelEntry.syscall_no == -SysSend ||
                ksKernelEntry.syscall_no == -SysNBSend ||
                ksKernelEntry.syscall_no == -SysCall) {

            kprintf("Cap type: %lu, Invocation tag: %lu\n", (unsigned long) ksKernelEntry.cap_type, (unsigned long) ksKernelEntry.invocation_tag)
                                                                ;
        }
        break;
# 67 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h"
    default:
        kprintf("Unknown\n");
        break;

    }
}

/* Prints the user context and stack trace of the current thread */
static inline void
debug_printUserState(void)
{
    tcb_t *tptr = ksCurThread;
    kprintf("Current thread: %s\n", tptr->tcbName);
    kprintf("Next instruction adress: %lx\n", getRestartPC(tptr));
    kprintf("Stack:\n");
    Arch_userStackTrace(tptr);
}

static inline void
debug_printTCB(tcb_t *tcb)
{
    kprintf("%40s\t", tcb->tcbName);
    char* state;
    switch (thread_state_get_tsType(tcb->tcbState)) {
    case ThreadState_Inactive:
        state = "inactive";
        break;
    case ThreadState_Running:
        state = "running";
        break;
    case ThreadState_Restart:
        state = "restart";
        break;
    case ThreadState_BlockedOnReceive:
        state = "blocked on recv";
        break;
    case ThreadState_BlockedOnSend:
        state = "blocked on send";
        break;
    case ThreadState_BlockedOnReply:
        state = "blocked on reply";
        break;
    case ThreadState_BlockedOnNotification:
        state = "blocked on ntfn";
        break;





    case ThreadState_IdleThreadState:
        state = "idle";
        break;
    default:
        _fail("Unknown thread state", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h", 121, __func__);
    }

    word_t core = 0;
    kprintf("%15s\t%p\t%20lu\t%lu\n", state, (void *) getRestartPC(tcb), tcb->tcbPriority, core);
}

static inline void
debug_dumpScheduler(void)
{
    kprintf("Dumping all tcbs!\n");
    kprintf("Name                                    \tState          \tIP                  \t Prio \t Core\n");
    kprintf("--------------------------------------------------------------------------------------\n");
    for (tcb_t *curr = ksDebugTCBs; curr != ((void *)0); curr = curr->tcbDebugNext) {
        debug_printTCB(curr);
    }
}
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 2

exception_t handleSyscall(syscall_t syscall);
exception_t handleInterruptEntry(void);
exception_t handleUnknownSyscall(word_t w);
exception_t handleUserLevelFault(word_t w_a, word_t w_b);
exception_t handleVMFaultEvent(vm_fault_type_t vm_faultType);

static inline word_t __attribute__((__pure__))
getSyscallArg(word_t i, word_t* ipc_buffer)
{
    if (i < n_msgRegisters) {
        return getRegister(ksCurThread, msgRegisters[i]);
    }

    if(!(ipc_buffer != ((void *)0))) _assert_fail("ipc_buffer != NULL", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h", 35, __FUNCTION__);
    return ipc_buffer[i + 1];
}

extern extra_caps_t current_extra_caps;
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/thread.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cap.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */




struct deriveCap_ret {
    exception_t status;
    cap_t cap;
};
typedef struct deriveCap_ret deriveCap_ret_t;

struct finaliseCap_ret {
    cap_t remainder;
    /* potential cap holding information for cleanup that needs to be happen *after* a
     * cap has been deleted. Where deleted here means been removed from the slot in emptySlot */
    cap_t cleanupInfo;
};
typedef struct finaliseCap_ret finaliseCap_ret_t;
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/objecttype.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/objecttype.h" 2

deriveCap_ret_t Arch_deriveCap(cte_t *slot, cap_t cap);
cap_t __attribute__((__const__)) Arch_updateCapData(bool_t preserve, word_t data, cap_t cap);
cap_t __attribute__((__const__)) Arch_maskCapRights(seL4_CapRights_t cap_rights_mask, cap_t cap);
finaliseCap_ret_t Arch_finaliseCap(cap_t cap, bool_t final);
bool_t __attribute__((__const__)) Arch_sameRegionAs(cap_t cap_a, cap_t cap_b);
bool_t __attribute__((__const__)) Arch_sameObjectAs(cap_t cap_a, cap_t cap_b);
cap_t Arch_createObject(object_t t, void *regionBase, int userSize, bool_t deviceMemory);
exception_t Arch_decodeInvocation(word_t label, unsigned int length,
                                  cptr_t cptr, cte_t *slot, cap_t cap,
                                  extra_caps_t extraCaps, bool_t call, word_t *buffer);
void Arch_prepareThreadDelete(tcb_t *thread);
word_t Arch_getObjectSize(word_t t);
bool_t Arch_isFrameType(word_t t);

static inline void
Arch_postCapDeletion(cap_t cap)
{
}
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/interrupt.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/interrupt.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/interrupt.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/interrupt.h" 2

exception_t Arch_decodeIRQControlInvocation(word_t invLabel, word_t length,
                                            cte_t *srcSlot, extra_caps_t excaps,
                                            word_t *buffer);
exception_t Arch_checkIRQ(word_t irq_w);
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 2

exception_t decodeIRQControlInvocation(word_t invLabel, word_t length,
                                       cte_t *srcSlot, extra_caps_t excaps,
                                       word_t *buffer);
exception_t invokeIRQControl(irq_t irq, cte_t *handlerSlot, cte_t *controlSlot);
exception_t decodeIRQHandlerInvocation(word_t invLabel, irq_t irq,
                                       extra_caps_t excaps);
void invokeIRQHandler_AckIRQ(irq_t irq);
void invokeIRQHandler_SetIRQHandler(irq_t irq, cap_t cap, cte_t *slot);
void invokeIRQHandler_ClearIRQHandler(irq_t irq);
void deletingIRQHandler(irq_t irq);
void deletedIRQHandler(irq_t irq);
void handleInterrupt(irq_t irq);
bool_t isIRQActive(irq_t irq);
void setIRQState(irq_state_t irqState, irq_t irq);
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 2

deriveCap_ret_t deriveCap(cte_t *slot, cap_t cap);
finaliseCap_ret_t finaliseCap(cap_t cap, bool_t final, bool_t exposed);
bool_t __attribute__((__const__)) hasCancelSendRights(cap_t cap);
bool_t __attribute__((__const__)) sameRegionAs(cap_t cap_a, cap_t cap_b);
bool_t __attribute__((__const__)) sameObjectAs(cap_t cap_a, cap_t cap_b);
cap_t __attribute__((__const__)) updateCapData(bool_t preserve, word_t newData, cap_t cap);
cap_t __attribute__((__const__)) maskCapRights(seL4_CapRights_t seL4_CapRights, cap_t cap);
cap_t createObject(object_t t, void *regionBase, word_t, bool_t deviceMemory);
void createNewObjects(object_t t, cte_t *parent, slot_range_t slots,
                      void *regionBase, word_t userSize, bool_t deviceMemory);
exception_t decodeInvocation(word_t invLabel, word_t length,
                             cptr_t capIndex, cte_t *slot, cap_t cap,
                             extra_caps_t excaps, bool_t block, bool_t call,
                             word_t *buffer);
exception_t performInvocation_Endpoint(endpoint_t *ep, word_t badge,
                                       bool_t canGrant, bool_t block,
                                       bool_t call);
exception_t performInvocation_Notification(notification_t *ntfn,
                                           word_t badge);
exception_t performInvocation_Reply(tcb_t *thread, cte_t *slot);
word_t getObjectSize(word_t t, word_t userObjSize);

static inline void
postCapDeletion(cap_t cap)
{
    if (cap_get_capType(cap) == cap_irq_handler_cap) {
        irq_t irq = cap_irq_handler_cap_get_capIRQ(cap);
        deletedIRQHandler(irq);
    } else if (isArchCap(cap)) {
        Arch_postCapDeletion(cap);
    }
}
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/notification.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/notification.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/notification.h" 2

void sendSignal(notification_t *ntfnPtr, word_t badge);
void receiveSignal(tcb_t *thread, cap_t cap, bool_t isBlocking);
void cancelAllSignals(notification_t *ntfnPtr);
void cancelSignal(tcb_t *threadPtr, notification_t *ntfnPtr);
void completeSignal(notification_t *ntfnPtr, tcb_t *tcb);
void unbindMaybeNotification(notification_t *ntfnPtr);
void unbindNotification(tcb_t *tcb);
void bindNotification(tcb_t *tcb, notification_t *ntfnPtr);
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/endpoint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/endpoint.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/endpoint.h" 2

void sendIPC(bool_t blocking, bool_t do_call, word_t badge,
             bool_t canGrant, tcb_t *thread, endpoint_t *epptr);
void receiveIPC(tcb_t *thread, cap_t cap, bool_t isBlocking);
void cancelIPC(tcb_t *tptr);
void cancelAllIPC(endpoint_t *epptr);
void cancelBadgedSends(endpoint_t *epptr, word_t badge);
void replyFromKernel_error(tcb_t *thread);
void replyFromKernel_success_empty(tcb_t *thread);
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 2

/* It is assumed that every untyped is within seL4_MinUntypedBits and seL4_MaxUntypedBits
 * (inclusive). This means that every untyped stored as seL4_MinUntypedBits
 * subtracted from its size before it is stored in capBlockSize, and
 * capFreeIndex counts in chunks of size 2^seL4_MinUntypedBits. The seL4_MaxUntypedBits
 * is the minimal untyped that can be stored when considering both how
 * many bits of capBlockSize there are, and the largest offset that can
 * be stored in capFreeIndex */







exception_t decodeUntypedInvocation(word_t invLabel, word_t length,
                                    cte_t *slot, cap_t cap,
                                    extra_caps_t excaps, bool_t call,
                                    word_t *buffer);
exception_t invokeUntyped_Retype(cte_t *srcSlot, bool_t reset,
                                 void* retypeBase, object_t newType,
                                 word_t userSize, slot_range_t destSlots,
                                 bool_t deviceMemory);
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 2
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/thread.h" 2

void Arch_switchToThread(tcb_t *tcb);
void Arch_switchToIdleThread(void);
void Arch_configureIdleThread(tcb_t *tcb);
void __attribute__((__const__)) Arch_activateIdleThread(tcb_t *tcb);

static inline bool_t __attribute__((__const__))
Arch_getSanitiseRegisterInfo(tcb_t *thread)
{
    return 0;
}
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/debug.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/debug.h" 2
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c" 2

/* consistency with libsel4 */
typedef int __assert_failed_InvalidRoot[(lookup_fault_invalid_root + 1 == seL4_InvalidRoot) ? 1 : -1];
typedef int __assert_failed_MissingCapability[(lookup_fault_missing_capability + 1 == seL4_MissingCapability) ? 1 : -1];
typedef int __assert_failed_DepthMismatch[(lookup_fault_depth_mismatch + 1 == seL4_DepthMismatch) ? 1 : -1];
typedef int __assert_failed_GuardMismatch[(lookup_fault_guard_mismatch + 1 == seL4_GuardMismatch) ? 1 : -1];
typedef int __assert_failed_seL4_UnknownSyscall_Syscall[((word_t) n_syscallMessage == seL4_UnknownSyscall_Syscall) ? 1 : -1];
typedef int __assert_failed_seL4_UserException_Number[((word_t) n_exceptionMessage == seL4_UserException_Number) ? 1 : -1];
typedef int __assert_failed_seL4_UserException_Code[((word_t) n_exceptionMessage + 1 == seL4_UserException_Code) ? 1 : -1];

static inline unsigned int
setMRs_lookup_failure(tcb_t *receiver, word_t* receiveIPCBuffer,
                      lookup_fault_t luf, unsigned int offset)
{
    word_t lufType = lookup_fault_get_lufType(luf);
    word_t i;

    i = setMR(receiver, receiveIPCBuffer, offset, lufType + 1);

    /* check constants match libsel4 */
    if (offset == seL4_CapFault_LookupFailureType) {
        if(!(offset + 1 == seL4_CapFault_BitsLeft)) _assert_fail("offset + 1 == seL4_CapFault_BitsLeft", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c", 41, __FUNCTION__);
        if(!(offset + 2 == seL4_CapFault_DepthMismatch_BitsFound)) _assert_fail("offset + 2 == seL4_CapFault_DepthMismatch_BitsFound", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c", 42, __FUNCTION__);
        if(!(offset + 2 == seL4_CapFault_GuardMismatch_GuardFound)) _assert_fail("offset + 2 == seL4_CapFault_GuardMismatch_GuardFound", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c", 43, __FUNCTION__);
        if(!(offset + 3 == seL4_CapFault_GuardMismatch_BitsFound)) _assert_fail("offset + 3 == seL4_CapFault_GuardMismatch_BitsFound", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c", 44, __FUNCTION__);
    } else {
        if(!(offset == 1)) _assert_fail("offset == 1", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c", 46, __FUNCTION__);
    }

    switch (lufType) {
    case lookup_fault_invalid_root:
        return i;

    case lookup_fault_missing_capability:
        return setMR(receiver, receiveIPCBuffer, offset + 1,
                     lookup_fault_missing_capability_get_bitsLeft(luf));

    case lookup_fault_depth_mismatch:
        setMR(receiver, receiveIPCBuffer, offset + 1,
              lookup_fault_depth_mismatch_get_bitsLeft(luf));
        return setMR(receiver, receiveIPCBuffer, offset + 2,
                     lookup_fault_depth_mismatch_get_bitsFound(luf));

    case lookup_fault_guard_mismatch:
        setMR(receiver, receiveIPCBuffer, offset + 1,
              lookup_fault_guard_mismatch_get_bitsLeft(luf));
        setMR(receiver, receiveIPCBuffer, offset + 2,
              lookup_fault_guard_mismatch_get_guardFound(luf));
        return setMR(receiver, receiveIPCBuffer, offset + 3,
                     lookup_fault_guard_mismatch_get_bitsFound(luf));

    default:
        _fail("Invalid lookup failure", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c", 72, __func__);
    }
}

static inline void
copyMRsFaultReply(tcb_t *sender, tcb_t *receiver, MessageID_t id, word_t length)
{
    word_t i;
    bool_t archInfo;

    archInfo = Arch_getSanitiseRegisterInfo(receiver);

    for (i = 0; i < (((length)<(n_msgRegisters))?(length):(n_msgRegisters)); i++) {
        register_t r = fault_messages[id][i];
        word_t v = getRegister(sender, msgRegisters[i]);
        setRegister(receiver, r, sanitiseRegister(r, v, archInfo));
    }

    if (i < length) {
        word_t *sendBuf = lookupIPCBuffer(false, sender);
        if (sendBuf) {
            for (; i < length; i++) {
                register_t r = fault_messages[id][i];
                word_t v = sendBuf[i + 1];
                setRegister(receiver, r, sanitiseRegister(r, v, archInfo));
            }
        }
    }
}

static inline void
copyMRsFault(tcb_t *sender, tcb_t *receiver, MessageID_t id,
             word_t length, word_t *receiveIPCBuffer)
{
    word_t i;
    for (i = 0; i < (((length)<(n_msgRegisters))?(length):(n_msgRegisters)); i++) {
        setRegister(receiver, msgRegisters[i], getRegister(sender, fault_messages[id][i]));
    }

    if (receiveIPCBuffer) {
        for (; i < length; i++) {
            receiveIPCBuffer[i + 1] = getRegister(sender, fault_messages[id][i]);
        }
    }
}

bool_t
handleFaultReply(tcb_t *receiver, tcb_t *sender)
{
    /* These lookups are moved inward from doReplyTransfer */
    seL4_MessageInfo_t tag = messageInfoFromWord(getRegister(sender, msgInfoRegister));
    word_t label = seL4_MessageInfo_get_label(tag);
    word_t length = seL4_MessageInfo_get_length(tag);
    seL4_Fault_t fault = receiver->tcbFault;

    switch (seL4_Fault_get_seL4_FaultType(fault)) {
    case seL4_Fault_CapFault:
        return true;

    case seL4_Fault_UnknownSyscall:
        copyMRsFaultReply(sender, receiver, MessageID_Syscall, (((length)<(n_syscallMessage))?(length):(n_syscallMessage)));
        return (label == 0);

    case seL4_Fault_UserException:
        copyMRsFaultReply(sender, receiver, MessageID_Exception, (((length)<(n_exceptionMessage))?(length):(n_exceptionMessage)));
        return (label == 0);
# 186 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c"
    default:
        return Arch_handleFaultReply(receiver, sender, seL4_Fault_get_seL4_FaultType(fault));
    }
}

word_t
setMRs_fault(tcb_t *sender, tcb_t* receiver, word_t *receiveIPCBuffer)
{
    switch (seL4_Fault_get_seL4_FaultType(sender->tcbFault)) {
    case seL4_Fault_CapFault:
        setMR(receiver, receiveIPCBuffer, seL4_CapFault_IP, getRestartPC(sender));
        setMR(receiver, receiveIPCBuffer, seL4_CapFault_Addr,
              seL4_Fault_CapFault_get_address(sender->tcbFault));
        setMR(receiver, receiveIPCBuffer, seL4_CapFault_InRecvPhase,
              seL4_Fault_CapFault_get_inReceivePhase(sender->tcbFault));
        return setMRs_lookup_failure(receiver, receiveIPCBuffer,
                                     sender->tcbLookupFailure, seL4_CapFault_LookupFailureType);

    case seL4_Fault_UnknownSyscall: {
        copyMRsFault(sender, receiver, MessageID_Syscall, n_syscallMessage,
                     receiveIPCBuffer);

        return setMR(receiver, receiveIPCBuffer, n_syscallMessage,
                     seL4_Fault_UnknownSyscall_get_syscallNumber(sender->tcbFault));
    }

    case seL4_Fault_UserException: {
        copyMRsFault(sender, receiver, MessageID_Exception,
                     n_exceptionMessage, receiveIPCBuffer);
        setMR(receiver, receiveIPCBuffer, n_exceptionMessage,
              seL4_Fault_UserException_get_number(sender->tcbFault));
        return setMR(receiver, receiveIPCBuffer, n_exceptionMessage + 1u,
                     seL4_Fault_UserException_get_code(sender->tcbFault));
    }
# 244 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c"
    default:
        return Arch_setMRs_fault(sender, receiver, receiveIPCBuffer,
                                 seL4_Fault_get_seL4_FaultType(sender->tcbFault));
    }
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/benchmark.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/constants.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_tracepoints_types.h" 1
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





# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/autoconf/autoconf.h" 1
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_tracepoints_types.h" 2
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark.h" 2
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/benchmark.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 1
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation.h" 1
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/benchmark.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation_types.h" 1
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





# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/autoconf/autoconf.h" 1
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation_types.h" 2
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/api/constants.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation.h" 2
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/faults.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/faulthandler.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/faulthandler.h" 2

void handleFault(tcb_t *tptr);
exception_t sendFaultIPC(tcb_t *tptr);
void handleDoubleFault(tcb_t *tptr, seL4_Fault_t ex1);
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/string.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/string.h" 2

word_t strnlen(const char *s, word_t maxlen);
word_t strlcpy(char *dest, const char *src, word_t size);
word_t strlcat(char *dest, const char *src, word_t size);
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/traps.h" 1
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/traps.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/traps.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/traps.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/traps.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/traps.h" 2

static inline void arch_c_entry_hook(void)
{
}

static inline void arch_c_exit_hook(void)
{
}

void c_handle_syscall(word_t cptr, word_t msgInfo, word_t unused1, word_t unused2, word_t unused3, word_t unused4, word_t unused5, syscall_t syscall)
__attribute__((externally_visible)) __attribute__((__noreturn__));

void c_handle_interrupt(void)
__attribute__((externally_visible)) __attribute__((__noreturn__));

void c_handle_exception(void)
__attribute__((externally_visible)) __attribute__((__noreturn__));

void restore_user_context(void)
__attribute__((externally_visible)) __attribute__((__noreturn__));

void handle_exception(void);
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/traps.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * Copyright 2018, DornerWorks
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_DORNERWORKS_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/ipi.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/ipi.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/ipi.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/ipi.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/smp/ipi.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/ipi.h" 2
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 2
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/traps.h" 2

/* This C function should be the first thing called from C after entry from
 * assembly. It provides a single place to do any entry work that is not
 * done in assembly for various reasons */
static inline void c_entry_hook(void)
{
    arch_c_entry_hook();



}

/* This C function should be the last thing called from C before exiting
 * the kernel (be it to assembly or returning to user space). It provides
 * a place to provide any additional instrumentation or functionality
 * in C before leaving the kernel */
static inline void c_exit_hook(void)
{



    arch_c_exit_hook();
}
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2


# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/capdl.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




void capDL(void);
# 33 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c" 2


/* The haskell function 'handleEvent' is split into 'handleXXX' variants
 * for each event causing a kernel entry */

exception_t
handleInterruptEntry(void)
{
    irq_t irq;

    irq = getActiveIRQ();

    if (irq != irqInvalid) {
        handleInterrupt(irq);
        Arch_finaliseInterrupt();
    } else {

        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 50, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Spurious interrupt!"); kprintf(">>" "\033[0m" "\n"); } while (0);

        handleSpuriousIRQ();
    }

    schedule();
    activateThread();

    return EXCEPTION_NONE;
}

exception_t
handleUnknownSyscall(word_t w)
{

    if (w == SysDebugPutChar) {
        putchar(getRegister(ksCurThread, capRegister));
        return EXCEPTION_NONE;
    }
    if (w == SysDebugDumpScheduler) {

        debug_dumpScheduler();

        return EXCEPTION_NONE;
    }


    if (w == SysDebugHalt) {
        tcb_t * __attribute__((unused)) tptr = ksCurThread;
        kprintf("Debug halt syscall from user thread %p \"%s\"\n", tptr, tptr->tcbName);
        halt();
    }
    if (w == SysDebugSnapshot) {
        tcb_t * __attribute__((unused)) tptr = ksCurThread;
        kprintf("Debug snapshot syscall from user thread %p \"%s\"\n", tptr, tptr->tcbName);
        capDL();
        return EXCEPTION_NONE;
    }
    if (w == SysDebugCapIdentify) {
        word_t cptr = getRegister(ksCurThread, capRegister);
        lookupCapAndSlot_ret_t lu_ret = lookupCapAndSlot(ksCurThread, cptr);
        word_t cap_type = cap_get_capType(lu_ret.cap);
        setRegister(ksCurThread, capRegister, cap_type);
        return EXCEPTION_NONE;
    }

    if (w == SysDebugNameThread) {
        /* This is a syscall meant to aid debugging, so if anything goes wrong
         * then assume the system is completely misconfigured and halt */
        const char *name;
        word_t len;
        word_t cptr = getRegister(ksCurThread, capRegister);
        lookupCapAndSlot_ret_t lu_ret = lookupCapAndSlot(ksCurThread, cptr);
        /* ensure we got a TCB cap */
        word_t cap_type = cap_get_capType(lu_ret.cap);
        if (cap_type != cap_thread_cap) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 106, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("SysDebugNameThread: cap is not a TCB, halting"); kprintf(">>" "\033[0m" "\n"); } while (0);
            halt();
        }
        /* Add 1 to the IPC buffer to skip the message info word */
        name = (const char*)(lookupIPCBuffer(true, ksCurThread) + 1);
        if (!name) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 112, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("SysDebugNameThread: Failed to lookup IPC buffer, halting"); kprintf(">>" "\033[0m" "\n"); } while (0);
            halt();
        }
        /* ensure the name isn't too long */
        len = strnlen(name, seL4_MsgMaxLength * sizeof(word_t));
        if (len == seL4_MsgMaxLength * sizeof(word_t)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 118, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("SysDebugNameThread: Name too long, halting"); kprintf(">>" "\033[0m" "\n"); } while (0);
            halt();
        }
        setThreadName(((tcb_t *)(cap_thread_cap_get_capTCBPtr(lu_ret.cap))), name);
        return EXCEPTION_NONE;
    }
# 223 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c"
    current_fault = seL4_Fault_UnknownSyscall_new(w);
    handleFault(ksCurThread);

    schedule();
    activateThread();

    return EXCEPTION_NONE;
}

exception_t
handleUserLevelFault(word_t w_a, word_t w_b)
{
    current_fault = seL4_Fault_UserException_new(w_a, w_b);
    handleFault(ksCurThread);

    schedule();
    activateThread();

    return EXCEPTION_NONE;
}

exception_t
handleVMFaultEvent(vm_fault_type_t vm_faultType)
{
    exception_t status;

    status = handleVMFault(ksCurThread, vm_faultType);
    if (status != EXCEPTION_NONE) {
        handleFault(ksCurThread);
    }

    schedule();
    activateThread();

    return EXCEPTION_NONE;
}


static exception_t
handleInvocation(bool_t isCall, bool_t isBlocking)
{
    seL4_MessageInfo_t info;
    cptr_t cptr;
    lookupCapAndSlot_ret_t lu_ret;
    word_t *buffer;
    exception_t status;
    word_t length;
    tcb_t *thread;

    thread = ksCurThread;

    info = messageInfoFromWord(getRegister(thread, msgInfoRegister));
    cptr = getRegister(thread, capRegister);

    /* faulting section */
    lu_ret = lookupCapAndSlot(thread, cptr);

    if (__builtin_expect(!!(lu_ret.status != EXCEPTION_NONE), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 281, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Invocation of invalid cap #%lu.", cptr); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_fault = seL4_Fault_CapFault_new(cptr, false);

        if (isBlocking) {
            handleFault(thread);
        }

        return EXCEPTION_NONE;
    }

    buffer = lookupIPCBuffer(false, thread);

    status = lookupExtraCaps(thread, buffer, info);

    if (__builtin_expect(!!(status != EXCEPTION_NONE), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 296, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Lookup of extra caps failed."); kprintf(">>" "\033[0m" "\n"); } while (0);
        if (isBlocking) {
            handleFault(thread);
        }
        return EXCEPTION_NONE;
    }

    /* Syscall error/Preemptible section */
    length = seL4_MessageInfo_get_length(info);
    if (__builtin_expect(!!(length > n_msgRegisters && !buffer), 0)) {
        length = n_msgRegisters;
    }
    status = decodeInvocation(seL4_MessageInfo_get_label(info), length,
                              cptr, lu_ret.slot, lu_ret.cap,
                              current_extra_caps, isBlocking, isCall,
                              buffer);

    if (__builtin_expect(!!(status == EXCEPTION_PREEMPTED), 0)) {
        return status;
    }

    if (__builtin_expect(!!(status == EXCEPTION_SYSCALL_ERROR), 0)) {
        if (isCall) {
            replyFromKernel_error(thread);
        }
        return EXCEPTION_NONE;
    }

    if (__builtin_expect(!!(thread_state_get_tsType(thread->tcbState) == ThreadState_Restart), 0)
                                                                                 ) {
        if (isCall) {
            replyFromKernel_success_empty(thread);
        }
        setThreadState(thread, ThreadState_Running);
    }

    return EXCEPTION_NONE;
}

static void
handleReply(void)
{
    cte_t *callerSlot;
    cap_t callerCap;

    callerSlot = (((cte_t *)((word_t)(ksCurThread)&~((1ul << (10))-1ul)))+(tcbCaller));
    callerCap = callerSlot->cap;

    switch (cap_get_capType(callerCap)) {
    case cap_reply_cap: {
        tcb_t *caller;

        if (cap_reply_cap_get_capReplyMaster(callerCap)) {
            break;
        }
        caller = ((tcb_t *)(cap_reply_cap_get_capTCBPtr(callerCap)));
        /* Haskell error:
         * "handleReply: caller must not be the current thread" */
        if(!(caller != ksCurThread)) _assert_fail("caller != NODE_STATE(ksCurThread)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c", 354, __FUNCTION__);
        doReplyTransfer(ksCurThread, caller, callerSlot);
        return;
    }

    case cap_null_cap:
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 360, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Attempted reply operation when no reply cap present."); kprintf(">>" "\033[0m" "\n"); } while (0);
        return;

    default:
        break;
    }

    _fail("handleReply: invalid caller cap", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c", 367, __func__);
}

static void
handleRecv(bool_t isBlocking)
{
    word_t epCPtr;
    lookupCap_ret_t lu_ret;

    epCPtr = getRegister(ksCurThread, capRegister);

    lu_ret = lookupCap(ksCurThread, epCPtr);

    if (__builtin_expect(!!(lu_ret.status != EXCEPTION_NONE), 0)) {
        /* current_lookup_fault has been set by lookupCap */
        current_fault = seL4_Fault_CapFault_new(epCPtr, true);
        handleFault(ksCurThread);
        return;
    }

    switch (cap_get_capType(lu_ret.cap)) {
    case cap_endpoint_cap:
        if (__builtin_expect(!!(!cap_endpoint_cap_get_capCanReceive(lu_ret.cap)), 0)) {
            current_lookup_fault = lookup_fault_missing_capability_new(0);
            current_fault = seL4_Fault_CapFault_new(epCPtr, true);
            handleFault(ksCurThread);
            break;
        }

        deleteCallerCap(ksCurThread);
        receiveIPC(ksCurThread, lu_ret.cap, isBlocking);
        break;

    case cap_notification_cap: {
        notification_t *ntfnPtr;
        tcb_t *boundTCB;
        ntfnPtr = ((notification_t *)(cap_notification_cap_get_capNtfnPtr(lu_ret.cap)));
        boundTCB = (tcb_t*)notification_ptr_get_ntfnBoundTCB(ntfnPtr);
        if (__builtin_expect(!!(!cap_notification_cap_get_capNtfnCanReceive(lu_ret.cap) || (boundTCB && boundTCB != ksCurThread)), 0)
                                                                          ) {
            current_lookup_fault = lookup_fault_missing_capability_new(0);
            current_fault = seL4_Fault_CapFault_new(epCPtr, true);
            handleFault(ksCurThread);
            break;
        }

        receiveSignal(ksCurThread, lu_ret.cap, isBlocking);
        break;
    }
    default:
        current_lookup_fault = lookup_fault_missing_capability_new(0);
        current_fault = seL4_Fault_CapFault_new(epCPtr, true);
        handleFault(ksCurThread);
        break;
    }
}

static void
handleYield(void)
{
    tcbSchedDequeue(ksCurThread);
    tcbSchedAppend(ksCurThread);
    rescheduleRequired();
}

exception_t
handleSyscall(syscall_t syscall)
{
    exception_t ret;
    irq_t irq;

    switch (syscall) {
    case SysSend:
        ret = handleInvocation(false, true);
        if (__builtin_expect(!!(ret != EXCEPTION_NONE), 0)) {
            irq = getActiveIRQ();
            if (irq != irqInvalid) {
                handleInterrupt(irq);
                Arch_finaliseInterrupt();
            }
        }
        break;

    case SysNBSend:
        ret = handleInvocation(false, false);
        if (__builtin_expect(!!(ret != EXCEPTION_NONE), 0)) {
            irq = getActiveIRQ();
            if (irq != irqInvalid) {
                handleInterrupt(irq);
                Arch_finaliseInterrupt();
            }
        }
        break;

    case SysCall:
        ret = handleInvocation(true, true);
        if (__builtin_expect(!!(ret != EXCEPTION_NONE), 0)) {
            irq = getActiveIRQ();
            if (irq != irqInvalid) {
                handleInterrupt(irq);
                Arch_finaliseInterrupt();
            }
        }
        break;

    case SysRecv:
        handleRecv(true);
        break;

    case SysReply:
        handleReply();
        break;

    case SysReplyRecv:
        handleReply();
        handleRecv(true);
        break;

    case SysNBRecv:
        handleRecv(false);
        break;

    case SysYield:
        handleYield();
        break;

    default:
        _fail("Invalid syscall", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c", 494, __func__);
    }

    schedule();
    activateThread();

    return EXCEPTION_NONE;
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/benchmark.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/faults.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c" 2

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/faults.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c" 2

bool_t Arch_handleFaultReply(tcb_t *receiver, tcb_t *sender, word_t faultType)
{
    switch (faultType) {
    case seL4_Fault_VMFault:
        return true;

    default:
        _fail("Invalid fault", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c", 38, __func__);
    }
}

word_t
Arch_setMRs_fault(tcb_t *sender, tcb_t* receiver, word_t *receiveIPCBuffer, word_t faultType)
{
    switch (faultType) {
    case seL4_Fault_VMFault: {
        setMR(receiver, receiveIPCBuffer, seL4_VMFault_IP, getRestartPC(sender));
        setMR(receiver, receiveIPCBuffer, seL4_VMFault_PrefetchFault,
              seL4_Fault_VMFault_get_instructionFault(sender->tcbFault));
        setMR(receiver, receiveIPCBuffer, seL4_VMFault_Addr,
              seL4_Fault_VMFault_get_address(sender->tcbFault));
        return setMR(receiver, receiveIPCBuffer, seL4_VMFault_FSR,
                     seL4_Fault_VMFault_get_FSR(sender->tcbFault));
    }
    default:
        _fail("Invalid fault", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c", 56, __func__);
    }
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h" 2

void slowpath(syscall_t syscall)
__attribute__((__noreturn__));

void fastpath_call(word_t cptr, word_t r_msgInfo)
__attribute__((__noreturn__));

void fastpath_reply_recv(word_t cptr, word_t r_msgInfo)
__attribute__((__noreturn__));

/* Use macros to not break verification */



static inline void __attribute__((always_inline))
switchToThread_fp(tcb_t *thread, pte_t *vroot, pte_t stored_hw_asid)
{
    asid_t asid = (asid_t)(stored_hw_asid.words[0]);

    setVSpaceRoot(addrFromPPtr(vroot), asid);

    setRegister(thread, tp, thread->tcbIPCBuffer);

    ksCurThread = thread;
}

static inline void
mdb_node_ptr_mset_mdbNext_mdbRevocable_mdbFirstBadged(
    mdb_node_t *node_ptr, word_t mdbNext,
    word_t mdbRevocable, word_t mdbFirstBadged)
{
    node_ptr->words[1] = mdbNext | (mdbRevocable << 1) | mdbFirstBadged;
}

static inline void
mdb_node_ptr_set_mdbPrev_np(mdb_node_t *node_ptr, word_t mdbPrev)
{
    node_ptr->words[0] = mdbPrev;
}

static inline bool_t
isValidVTableRoot_fp(cap_t vspace_root_cap)
{
    return cap_capType_equals(vspace_root_cap, cap_page_table_cap) &&
           cap_page_table_cap_get_capPTIsMapped(vspace_root_cap);
}

/* This is an accelerated check that msgLength, which appears
   in the bottom of the msgInfo word, is <= 4 and that msgExtraCaps
   which appears above it is zero. We are assuming that n_msgRegisters == 4
   for this check to be useful. By masking out the bottom 3 bits, we are
   really checking that n + 3 <= MASK(3), i.e. n + 3 <= 7 or n <= 4. */
typedef int __assert_failed_n_msgRegisters_eq_4[(n_msgRegisters == 4) ? 1 : -1];
static inline int
fastpath_mi_check(word_t msgInfo)
{
    return (msgInfo & ((1ul << (seL4_MsgLengthBits + seL4_MsgExtraCapBits))-1ul)) > 4;
}

static inline void
fastpath_copy_mrs(word_t length, tcb_t *src, tcb_t *dest)
{
    word_t i;
    register_t reg;

    /* assuming that length < n_msgRegisters */
    for (i = 0; i < length; i ++) {
        /* assuming that the message registers simply increment */
        reg = msgRegisters[0] + i;
        setRegister(dest, reg, getRegister(src, reg));
    }
}

static inline int
fastpath_reply_cap_check(cap_t cap)
{
    return cap_capType_equals(cap, cap_reply_cap);
}

/** DONT_TRANSLATE */
static inline void __attribute__((__noreturn__))
fastpath_restore(word_t badge, word_t msgInfo, tcb_t *cur_thread)
{
    do {} while (0);

    c_exit_hook();

    register word_t badge_reg __asm__("a0") = badge;
    register word_t msgInfo_reg __asm__("a1") = msgInfo;
    register word_t cur_thread_reg __asm__("t0") = ((word_t)(cur_thread));

    __asm__ volatile(
        "ld" "  ra, (0*%[REGSIZE])(t0)  \n"
        "ld" "  sp, (1*%[REGSIZE])(t0)  \n"
        "ld" "  gp, (2*%[REGSIZE])(t0)  \n"
        /* skip tp */
        /* skip x5/t0 */
        "ld" "  t2, (6*%[REGSIZE])(t0)  \n"
        "ld" "  s0, (7*%[REGSIZE])(t0)  \n"
        "ld" "  s1, (8*%[REGSIZE])(t0)  \n"
        "ld" "  a2, (11*%[REGSIZE])(t0) \n"
        "ld" "  a3, (12*%[REGSIZE])(t0) \n"
        "ld" "  a4, (13*%[REGSIZE])(t0) \n"
        "ld" "  a5, (14*%[REGSIZE])(t0) \n"
        "ld" "  a6, (15*%[REGSIZE])(t0) \n"
        "ld" "  a7, (16*%[REGSIZE])(t0) \n"
        "ld" "  s2, (17*%[REGSIZE])(t0) \n"
        "ld" "  s3, 18*%[REGSIZE](t0) \n"
        "ld" "  s4, 19*%[REGSIZE](t0) \n"
        "ld" "  s5, 20*%[REGSIZE](t0) \n"
        "ld" "  s6, 21*%[REGSIZE](t0) \n"
        "ld" "  s7, 22*%[REGSIZE](t0) \n"
        "ld" "  s8, 23*%[REGSIZE](t0) \n"
        "ld" "  s9, 24*%[REGSIZE](t0) \n"
        "ld" "  s10, 25*%[REGSIZE](t0)\n"
        "ld" "  s11, 26*%[REGSIZE](t0)\n"
        "ld" "  t3, 27*%[REGSIZE](t0) \n"
        "ld" "  t4, 28*%[REGSIZE](t0) \n"
        "ld" "  t5, 29*%[REGSIZE](t0) \n"
        "ld" "  t6, 30*%[REGSIZE](t0) \n"
        /* Get next restored tp */
        "ld" "  t1, 3*%[REGSIZE](t0)  \n"
        /* get restored tp */
        "add tp, t1, x0  \n"
        /* get sepc */
        "ld" "  t1, 34*%[REGSIZE](t0)\n"
        "csrw sepc, t1  \n"

        /* Write back sscratch with cur_thread_reg to get it back on the next trap entry */
        "csrw sscratch, t0\n"

        "ld" "  t1, 32*%[REGSIZE](t0) \n"
        "csrw sstatus, t1\n"

        "ld" "  t1, (5*%[REGSIZE])(t0) \n"
        "ld" "  t0, (4*%[REGSIZE])(t0) \n"
        "sret"
        : /* no output */
        : "r" (cur_thread_reg),
        [REGSIZE] "i" (sizeof(word_t)),
        "r" (badge_reg),
        "r" (msgInfo_reg)
        : "memory"
    );

    __builtin_unreachable();
}
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/traps.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/debug.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c" 2

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 1
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation.h" 1
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c" 2

/** DONT_TRANSLATE */
void __attribute__((externally_visible)) __attribute__((__noreturn__)) restore_user_context(void)
{
    word_t cur_thread_reg = (word_t) ksCurThread->tcbArch.tcbContext.registers;

    c_exit_hook();

    do {} while (0);

    __asm__ volatile(
        "mv t0, %[cur_thread]       \n"
        "ld" " ra, (0*%[REGSIZE])(t0)  \n"
        "ld" "  sp, (1*%[REGSIZE])(t0)  \n"
        "ld" "  gp, (2*%[REGSIZE])(t0)  \n"
        /* skip tp */
        /* skip x5/t0 */
        "ld" "  t2, (6*%[REGSIZE])(t0)  \n"
        "ld" "  s0, (7*%[REGSIZE])(t0)  \n"
        "ld" "  s1, (8*%[REGSIZE])(t0)  \n"
        "ld" "  a0, (9*%[REGSIZE])(t0) \n"
        "ld" "  a1, (10*%[REGSIZE])(t0) \n"
        "ld" "  a2, (11*%[REGSIZE])(t0) \n"
        "ld" "  a3, (12*%[REGSIZE])(t0) \n"
        "ld" "  a4, (13*%[REGSIZE])(t0) \n"
        "ld" "  a5, (14*%[REGSIZE])(t0) \n"
        "ld" "  a6, (15*%[REGSIZE])(t0) \n"
        "ld" "  a7, (16*%[REGSIZE])(t0) \n"
        "ld" "  s2, (17*%[REGSIZE])(t0) \n"
        "ld" "  s3, (18*%[REGSIZE])(t0) \n"
        "ld" "  s4, (19*%[REGSIZE])(t0) \n"
        "ld" "  s5, (20*%[REGSIZE])(t0) \n"
        "ld" "  s6, (21*%[REGSIZE])(t0) \n"
        "ld" "  s7, (22*%[REGSIZE])(t0) \n"
        "ld" "  s8, (23*%[REGSIZE])(t0) \n"
        "ld" "  s9, (24*%[REGSIZE])(t0) \n"
        "ld" "  s10, (25*%[REGSIZE])(t0)\n"
        "ld" "  s11, (26*%[REGSIZE])(t0)\n"
        "ld" "  t3, (27*%[REGSIZE])(t0) \n"
        "ld" "  t4, (28*%[REGSIZE])(t0) \n"
        "ld" "  t5, (29*%[REGSIZE])(t0) \n"
        "ld" "  t6, (30*%[REGSIZE])(t0) \n"
        /* Get next restored tp */
        "ld" "  t1, (3*%[REGSIZE])(t0)  \n"
        /* get restored tp */
        "add tp, t1, x0  \n"
        /* get sepc */
        "ld" "  t1, (34*%[REGSIZE])(t0)\n"
        "csrw sepc, t1  \n"

        /* Write back sscratch with cur_thread_reg to get it back on the next trap entry */
        "csrw sscratch, t0         \n"

        "ld" "  t1, (32*%[REGSIZE])(t0) \n"
        "csrw sstatus, t1\n"

        "ld" "  t1, (5*%[REGSIZE])(t0) \n"
        "ld" "  t0, (4*%[REGSIZE])(t0) \n"
        "sret"
        : /* no output */
        : [REGSIZE] "i" (sizeof(word_t)),
        [cur_thread] "r" (cur_thread_reg)
        : "memory"
    );

    __builtin_unreachable();
}

void __attribute__((externally_visible)) __attribute__((__noreturn__))
c_handle_interrupt(void)
{
    do {} while (0);

    c_entry_hook();

    handleInterruptEntry();

    restore_user_context();
    __builtin_unreachable();
}

void __attribute__((externally_visible)) __attribute__((__noreturn__))
c_handle_exception(void)
{
    do {} while (0);

    c_entry_hook();

    handle_exception();

    restore_user_context();
    __builtin_unreachable();
}

void __attribute__((__noreturn__))
slowpath(syscall_t syscall)
{
    /* check for undefined syscall */
    if (__builtin_expect(!!(syscall < (-8) || syscall > (-1)), 0)) {
        handleUnknownSyscall(syscall);
    } else {
        handleSyscall(syscall);
    }

    restore_user_context();
    __builtin_unreachable();
}

void __attribute__((externally_visible)) __attribute__((__noreturn__))
c_handle_syscall(word_t cptr, word_t msgInfo, word_t unused1, word_t unused2, word_t unused3, word_t unused4, word_t unused5, syscall_t syscall)
{
    do {} while (0);

    c_entry_hook();


    if (syscall == (syscall_t)SysCall) {
        fastpath_call(cptr, msgInfo);
        __builtin_unreachable();
    } else if (syscall == (syscall_t)SysReplyRecv) {
        fastpath_reply_recv(cptr, msgInfo);
        __builtin_unreachable();
    }

    slowpath(syscall);
    __builtin_unreachable();
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/idle.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/idle.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/sbi.h" 1
/* Copyright (c) 2010-2017, The Regents of the University of California
 * (Regents).  All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Regents nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
 * SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
 * HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

/* This file is copied from RISC-V tools/linux project, it might change for
 * new spec releases.
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/idle.c" 2

void idle_thread(void)
{
    while (1) {
        __asm__ volatile("wfi");
    }
}

void __attribute__((externally_visible)) halt(void)
{

    kprintf("halting...");


    sbi_shutdown();

    __builtin_unreachable();
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/boot.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/bootinfo.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/bootinfo.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/bootinfo.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/bootinfo_types.h" 1
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




/* caps with fixed slot positions in the root CNode */

enum {
    seL4_CapNull = 0, /* null cap */
    seL4_CapInitThreadTCB = 1, /* initial thread's TCB cap */
    seL4_CapInitThreadCNode = 2, /* initial thread's root CNode cap */
    seL4_CapInitThreadVSpace = 3, /* initial thread's VSpace cap */
    seL4_CapIRQControl = 4, /* global IRQ controller cap */
    seL4_CapASIDControl = 5, /* global ASID controller cap */
    seL4_CapInitThreadASIDPool = 6, /* initial thread's ASID pool cap */
    seL4_CapIOPortControl = 7, /* global IO port control cap (null cap if not supported) */
    seL4_CapIOSpace = 8, /* global IO space cap (null cap if no IOMMU support) */
    seL4_CapBootInfoFrame = 9, /* bootinfo frame cap */
    seL4_CapInitThreadIPCBuffer = 10, /* initial thread's IPC buffer frame cap */
    seL4_CapDomain = 11, /* global domain controller cap */
    seL4_NumInitialCaps = 12
};

/* Legacy code will have assumptions on the vspace root being a Page Directory
 * type, so for now we define one to the other */


/* types */
typedef seL4_Word seL4_SlotPos;

typedef struct {
    seL4_SlotPos start; /* first CNode slot position OF region */
    seL4_SlotPos end; /* first CNode slot position AFTER region */
} seL4_SlotRegion;

typedef struct {
    seL4_Word paddr; /* physical address of untyped cap  */
    seL4_Uint8 padding1;
    seL4_Uint8 padding2;
    seL4_Uint8 sizeBits;/* size (2^n) bytes of each untyped */
    seL4_Uint8 isDevice;/* whether the untyped is a device  */
} seL4_UntypedDesc;

typedef struct {
    seL4_Word extraLen; /* length of any additional bootinfo information */
    seL4_NodeId nodeID; /* ID [0..numNodes-1] of the seL4 node (0 if uniprocessor) */
    seL4_Word numNodes; /* number of seL4 nodes (1 if uniprocessor) */
    seL4_Word numIOPTLevels; /* number of IOMMU PT levels (0 if no IOMMU support) */
    seL4_IPCBuffer* ipcBuffer; /* pointer to initial thread's IPC buffer */
    seL4_SlotRegion empty; /* empty slots (null caps) */
    seL4_SlotRegion sharedFrames; /* shared-frame caps (shared between seL4 nodes) */
    seL4_SlotRegion userImageFrames; /* userland-image frame caps */
    seL4_SlotRegion userImagePaging; /* userland-image paging structure caps */
    seL4_SlotRegion ioSpaceCaps; /* IOSpace caps for ARM SMMU */
    seL4_SlotRegion extraBIPages; /* caps for any pages used to back the additional bootinfo information */
    seL4_Word initThreadCNodeSizeBits; /* initial thread's root CNode size (2^n slots) */
    seL4_Domain initThreadDomain; /* Initial thread's domain ID */
    seL4_SlotRegion untyped; /* untyped-object caps (untyped caps) */
    seL4_UntypedDesc untypedList[230]; /* information about each untyped */
    /* the untypedList should be the last entry in this struct, in order
     * to make this struct easier to represent in other languages */
} seL4_BootInfo;

/* If extraLen > 0 then 4K after the start of bootinfo is a region of extraLen additional
 * bootinfo structures. Bootinfo structures are arch/platform specific and may or may not
 * exist in any given execution. */
typedef struct {
    /* identifier of the following chunk. IDs are arch/platform specific */
    seL4_Word id;
    /* length of the chunk, including this header */
    seL4_Word len;
} seL4_BootInfoHeader;

/* Bootinfo identifiers share a global namespace, even if they are arch or platform specific
 * and are enumerated here */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/bootinfo.h" 2






/* adjust constants in config.h if this assert fails */
typedef int __assert_failed_bi_size[(sizeof(seL4_BootInfo) <= (1ul << (12))) ? 1 : -1];
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/boot.h" 2







/*
 * Resolve naming differences between the abstract specifications
 * of the bootstrapping phase and the runtime phase of the kernel.
 */
typedef cte_t slot_t;
typedef cte_t* slot_ptr_t;



/* (node-local) state accessed only during bootstrapping */

typedef struct ndks_boot {
    region_t freemem[16];
    seL4_BootInfo* bi_frame;
    seL4_SlotPos slot_pos_cur;
    seL4_SlotPos slot_pos_max;
} ndks_boot_t;

extern ndks_boot_t ndks_boot;

/* function prototypes */

static inline bool_t
is_reg_empty(region_t reg)
{
    return reg.start == reg.end;
}

pptr_t alloc_region(word_t size_bits);
bool_t insert_region(region_t reg);
void write_slot(slot_ptr_t slot_ptr, cap_t cap);
cap_t create_root_cnode(void);
bool_t provide_cap(cap_t root_cnode_cap, cap_t cap);
cap_t create_it_asid_pool(cap_t root_cnode_cap);
void write_it_pd_pts(cap_t root_cnode_cap, cap_t it_pd_cap);
bool_t create_idle_thread(void);
bool_t create_untypeds_for_region(cap_t root_cnode_cap, bool_t device_memory, region_t reg, seL4_SlotPos first_untyped_slot);
bool_t create_kernel_untypeds(cap_t root_cnode_cap, region_t boot_mem_reuse_reg, seL4_SlotPos first_untyped_slot);
void bi_finalise(void);
bool_t create_irq_cnode(void);
void create_domain_cap(cap_t root_cnode_cap);

cap_t create_ipcbuf_frame(cap_t root_cnode_cap, cap_t pd_cap, vptr_t vptr);

region_t allocate_extra_bi_region(word_t extra_size);
pptr_t allocate_bi_frame(node_id_t node_id, word_t num_nodes, vptr_t ipcbuf_vptr);

void create_bi_frame_cap(cap_t root_cnode_cap, cap_t pd_cap, pptr_t pptr, vptr_t vptr);

typedef struct create_frames_of_region_ret {
    seL4_SlotRegion region;
    bool_t success;
} create_frames_of_region_ret_t;

create_frames_of_region_ret_t
create_frames_of_region(
    cap_t root_cnode_cap,
    cap_t pd_cap,
    region_t reg,
    bool_t do_map,
    sword_t pv_offset
);

cap_t
create_it_pd_pts(
    cap_t root_cnode_cap,
    v_region_t ui_v_reg,
    vptr_t ipcbuf_vptr,
    vptr_t bi_frame_vptr
);

tcb_t *
create_initial_thread(
    cap_t root_cnode_cap,
    cap_t it_pd_cap,
    vptr_t ui_v_entry,
    vptr_t bi_frame_vptr,
    vptr_t ipcbuf_vptr,
    cap_t ipcbuf_cap
);

void init_core_state(tcb_t *scheduler_action);
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/boot.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/boot.h" 2

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
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/vspace.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/benchmark.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/fdt.h" 1
/* Copyright (c) 2010-2017, The Regents of the University of California
 * (Regents).  All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Regents nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
 * SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
 * HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

/* This file is copied from RISC-V tools. It's modified to work with seL4 */




void keystoneFDT(uint64_t memstart, uint64_t memsize);
void parseFDT(void *fdt);
uint32_t fdt_size(void *fdt);
# 31 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 32 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdarg.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */







typedef __builtin_va_list va_list;
# 33 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c" 2

/* Keystone Physical Addresses */
word_t keystone_paddr_base;
word_t keystone_paddr_load;

/* pointer to the end of boot code/data in kernel image */
/* need a fake array to get the pointer from the linker script */
extern char ki_boot_end[1];
/* pointer to end of kernel image */
extern char ki_end[1];

__attribute__((__section__(".boot.text"))) static bool_t
create_untypeds(cap_t root_cnode_cap, region_t boot_mem_reuse_reg)
{
    seL4_SlotPos slot_pos_before;
    seL4_SlotPos slot_pos_after;

    slot_pos_before = ndks_boot.slot_pos_cur;
    bool_t res = create_kernel_untypeds(root_cnode_cap, boot_mem_reuse_reg, slot_pos_before);

    slot_pos_after = ndks_boot.slot_pos_cur;
    ndks_boot.bi_frame->untyped = (seL4_SlotRegion) {
        slot_pos_before, slot_pos_after
    };
    return res;

}

__attribute__((__section__(".boot.text"))) cap_t
create_mapped_it_frame_cap(cap_t pd_cap, pptr_t pptr, vptr_t vptr, asid_t asid, bool_t
                           use_large, bool_t executable)
{
    cap_t cap;
    vm_page_size_t frame_size;

    if (use_large) {
        frame_size = RISCV_Mega_Page;
    } else {
        frame_size = RISCV_4K_Page;
    }

    cap = cap_frame_cap_new(
              asid, /* capFMappedASID       */
              pptr, /* capFBasePtr          */
              frame_size, /* capFSize             */
              wordFromVMRights(VMReadWrite), /* capFVMRights         */
              0, /* capFIsDevice         */
              vptr /* capFMappedAddress    */
          );

    map_it_frame_cap(pd_cap, cap);
    return cap;
}

/**
 * Split mem_reg about reserved_reg. If memory exists in the lower
 * segment, insert it. If memory exists in the upper segment, return it.
 */
__attribute__((__section__(".boot.text"))) static region_t
insert_region_excluded(region_t mem_reg, region_t reserved_reg)
{
    region_t residual_reg = mem_reg;
    bool_t result __attribute__((unused));

    if (reserved_reg.start < mem_reg.start) {
        /* Reserved region is below the provided mem_reg. */
        mem_reg.end = 0;
        mem_reg.start = 0;
        /* Fit the residual around the reserved region */
        if (reserved_reg.end > residual_reg.start) {
            residual_reg.start = reserved_reg.end;
        }
    } else if (mem_reg.end > reserved_reg.start) {
        /* Split mem_reg around reserved_reg */
        mem_reg.end = reserved_reg.start;
        residual_reg.start = reserved_reg.end;
    } else {
        /* reserved_reg is completely above mem_reg */
        residual_reg.start = 0;
        residual_reg.end = 0;
    }
    /* Add the lower region if it exists */
    if (mem_reg.start < mem_reg.end) {
        result = insert_region(mem_reg);
        if(!(result)) _assert_fail("result", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c", 117, __FUNCTION__);
    }
    /* Validate the upper region */
    if (residual_reg.start > residual_reg.end) {
        residual_reg.start = residual_reg.end;
    }

    return residual_reg;
}

__attribute__((__section__(".boot.text"))) static void
init_freemem(region_t ui_reg, region_t dtb_reg)
{
    unsigned int i;
    bool_t result __attribute__((unused));
    region_t cur_reg;
    region_t res_reg[] = {
        {
            // We ignore all physical memory before the dtb as the current riscv-pk (proxy kernel)
            // that we use for loading is broken and provides an incorrect memory map where
            // it claims that the memory that is used to provide the m-mode services are
            // free physical memory. As there is no interface to determine what the memory
            // reserved for this is we simply hope it placed the dtb after itself and exclude
            // all memory up until then.
            .start = 0,
            .end = dtb_reg.end
        },
        {
            // This looks a bit awkward as our symbols are a reference in the kernel image window, but
            // we want to do all allocations in terms of the main kernel window, so we do some translation
            .start = (pptr_t)ptrFromPAddr(kpptr_to_paddr((void*)0xFFFFFFFF80000000lu)),
            .end = (pptr_t)ptrFromPAddr(kpptr_to_paddr((void*)ki_end))
        },
        {
            .start = ui_reg.start,
            .end = ui_reg.end
        }
    };
    return;
    for (i = 0; i < 16; i++) {
        ndks_boot.freemem[i] = (region_t){ .start = 0, .end = 0 };
    }

    /* Force ordering and exclusivity of reserved regions. */
    if(!(res_reg[0].start < res_reg[0].end)) _assert_fail("res_reg[0].start < res_reg[0].end", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c", 161, __FUNCTION__);
    if(!(res_reg[1].start < res_reg[1].end)) _assert_fail("res_reg[1].start < res_reg[1].end", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c", 162, __FUNCTION__);
    if(!(res_reg[2].start < res_reg[2].end)) _assert_fail("res_reg[2].start < res_reg[2].end", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c", 163, __FUNCTION__);

    if(!(res_reg[0].end <= res_reg[1].start)) _assert_fail("res_reg[0].end <= res_reg[1].start", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c", 165, __FUNCTION__);
    if(!(res_reg[1].end <= res_reg[2].start)) _assert_fail("res_reg[1].end <= res_reg[2].start", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c", 166, __FUNCTION__);

    for (i = 0; i < get_num_avail_p_regs(); i++) {
        cur_reg = paddr_to_pptr_reg(get_avail_p_reg(i));
        /* Adjust region if it exceeds the kernel window
         * Note that we compare physical address in case of overflow.
         */
        if (addrFromPPtr((void*)cur_reg.end) > (0xFFFFFFFF80000000lu - 0xFFFFFFC000000000lu + paddr_base())) {
            cur_reg.end = 0xFFFFFFFF80000000lu;
        }
        if (addrFromPPtr((void*)cur_reg.start) > (0xFFFFFFFF80000000lu - 0xFFFFFFC000000000lu + paddr_base())) {
            cur_reg.start = 0xFFFFFFFF80000000lu;
        }

        cur_reg = insert_region_excluded(cur_reg, res_reg[0]);
        cur_reg = insert_region_excluded(cur_reg, res_reg[1]);
        cur_reg = insert_region_excluded(cur_reg, res_reg[2]);

        if (cur_reg.start != cur_reg.end) {
            result = insert_region(cur_reg);
            if(!(result)) _assert_fail("result", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c", 186, __FUNCTION__);
        }
    }
}

__attribute__((__section__(".boot.text"))) static void
init_irqs(cap_t root_cnode_cap)
{
    irq_t i;

    for (i = 0; i <= maxIRQ; i++) {
        setIRQState(IRQInactive, i);
    }
    setIRQState(IRQTimer, INTERRUPT_TIMER);

    /* provide the IRQ control cap */
    write_slot((((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapIRQControl)), cap_irq_control_cap_new());
}

/* This and only this function initialises the CPU. It does NOT initialise any kernel state. */
extern char trap_entry[];

__attribute__((__section__(".boot.text"))) static void
init_cpu(void)
{

    /* Write trap entry address to stvec */
    write_stvec((word_t)trap_entry);

    activate_kernel_vspace();
}

/* This and only this function initialises the platform. It does NOT initialise any kernel state. */

__attribute__((__section__(".boot.text"))) static void
init_plat(paddr_t memstart, uint64_t memsize)
{
    keystoneFDT(memstart, memsize);
    //parseFDT((void*)dtb.start);
    initIRQController();
    initTimer();
}

/* Main kernel initialisation function. */

static __attribute__((__section__(".boot.text"))) bool_t
try_init_kernel(
    uint64_t dummy,
    paddr_t keystone_dram_base,
    uint64_t keystone_dram_size,
    paddr_t keystone_runtime_start,
    paddr_t keystone_user_start,
    paddr_t keystone_free_start,
    vptr_t keystone_utm_ptr,
    uint64_t keystone_utm_size
)
{
    (void) dummy;
    cap_t root_cnode_cap;
    cap_t it_pd_cap;
    cap_t it_ap_cap;
    cap_t ipcbuf_cap;

    /* SeL4 Parameters */
    paddr_t ui_p_reg_start;
    paddr_t ui_p_reg_end;
    uint32_t pv_offset;
    vptr_t v_entry;
    /* Keystone Parameters */
    v_entry = read_sepc();
    ui_p_reg_start = keystone_user_start;
    ui_p_reg_end = keystone_free_start;

    pv_offset = keystone_user_start - 0x10000;

    keystone_paddr_base = keystone_dram_base;
    keystone_paddr_load = keystone_runtime_start;

    p_region_t boot_mem_reuse_p_reg = ((p_region_t) {
        kpptr_to_paddr((void*)0xFFFFFFFF80000000lu), kpptr_to_paddr(ki_boot_end)
    });
    region_t boot_mem_reuse_reg = paddr_to_pptr_reg(boot_mem_reuse_p_reg);
    region_t ui_reg = paddr_to_pptr_reg((p_region_t) {
        ui_p_reg_start, ui_p_reg_end
    });
    region_t dtb_reg = paddr_to_pptr_reg((p_region_t) {
        0, 0
    });
    pptr_t bi_frame_pptr;
    vptr_t bi_frame_vptr;
    vptr_t ipcbuf_vptr;
    create_frames_of_region_ret_t create_frames_ret;

    /* convert from physical addresses to userland vptrs */
    v_region_t ui_v_reg;
    v_region_t it_v_reg;
    ui_v_reg.start = (uint32_t) (ui_p_reg_start - pv_offset);
    ui_v_reg.end = (uint32_t) (ui_p_reg_end - pv_offset);

    ipcbuf_vptr = ui_v_reg.end;
    bi_frame_vptr = ipcbuf_vptr + (1ul << (12));

    /* The region of the initial thread is the user image + ipcbuf and boot info */
    it_v_reg.start = ui_v_reg.start;
    it_v_reg.end = bi_frame_vptr + (1ul << (12));


    keystone_map_kernel_window(keystone_dram_base, keystone_dram_base + keystone_dram_size);
    map_kernel_window();

    /* initialise the CPU */
    init_cpu();

    /* initialize the platform */
    init_plat(keystone_dram_base, keystone_dram_size);

    /* make the free memory available to alloc_region() */
    init_freemem(ui_reg, dtb_reg); // this does nothing actually

    region_t cur_reg = ((region_t) {
        0xFFFFFFC000000000lu, 0xFFFFFFC000000000lu + keystone_dram_size
        });
    region_t res_reg = paddr_to_pptr_reg((p_region_t) {
        keystone_runtime_start, keystone_free_start
        });
    cur_reg = insert_region_excluded(cur_reg, res_reg);
    if(cur_reg.start < cur_reg.end)
      if(!(insert_region(cur_reg))) _assert_fail("insert_region(cur_reg)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c", 313, __FUNCTION__);

    /* create the root cnode */
    root_cnode_cap = create_root_cnode();
    if (cap_get_capType(root_cnode_cap) == cap_null_cap) {
        return false;
    }

    /* create the cap for managing thread domains */
    create_domain_cap(root_cnode_cap);

    /* create the IRQ CNode */
    if (!create_irq_cnode()) {
        return false;
    }

    /* initialise the IRQ states and provide the IRQ control cap */
    init_irqs(root_cnode_cap);

    /* create the bootinfo frame */
    bi_frame_pptr = allocate_bi_frame(0, 1, ipcbuf_vptr);
    if (!bi_frame_pptr) {
        return false;
    }

    /* Construct an initial address space with enough virtual addresses
     * to cover the user image + ipc buffer and bootinfo frames */
    it_pd_cap = create_it_address_space(root_cnode_cap, it_v_reg);
    if (cap_get_capType(it_pd_cap) == cap_null_cap) {
        return false;
    }

    /* Create and map bootinfo frame cap */
    create_bi_frame_cap(
        root_cnode_cap,
        it_pd_cap,
        bi_frame_pptr,
        bi_frame_vptr
    );

    /* create the initial thread's IPC buffer */
    ipcbuf_cap = create_ipcbuf_frame(root_cnode_cap, it_pd_cap, ipcbuf_vptr);
    if (cap_get_capType(ipcbuf_cap) == cap_null_cap) {
        return false;
    }

    /* create all userland image frames */
    create_frames_ret =
        create_frames_of_region(
            root_cnode_cap,
            it_pd_cap,
            ui_reg,
            true,
            pv_offset
        );
    if (!create_frames_ret.success) {
        return false;
    }
    ndks_boot.bi_frame->userImageFrames = create_frames_ret.region;

    /* create the initial thread's ASID pool */
    it_ap_cap = create_it_asid_pool(root_cnode_cap);
    if (cap_get_capType(it_ap_cap) == cap_null_cap) {
        return false;
    }
    write_it_asid_pool(it_ap_cap, it_pd_cap);

    /* create the idle thread */
    if (!create_idle_thread()) {
        return false;
    }


    /* create the initial thread */
    tcb_t *initial = create_initial_thread(
                         root_cnode_cap,
                         it_pd_cap,
                         v_entry,
                         bi_frame_vptr,
                         ipcbuf_vptr,
                         ipcbuf_cap
                     );

    if (initial == ((void *)0)) {
        return false;
    }

    init_core_state(initial);

    /* convert the remaining free memory into UT objects and provide the caps */
    if (!create_untypeds(
                root_cnode_cap,
                boot_mem_reuse_reg)) {
        return false;
    }

    /* no shared-frame caps (RISCV has no multikernel support) */
    ndks_boot.bi_frame->sharedFrames = (seL4_SlotRegion){ .start = 0, .end = 0 };

    /* finalise the bootinfo frame */
    bi_finalise();

    ksNumCPUs = 1;

    kprintf("Booting all finished, dropped to user space\n");

    // turning on cycle counter
    unsigned long v = 0x7;
    __asm__ volatile ("csrw scounteren, %0" : :"rK" (v));

    return true;
}

__attribute__((__section__(".boot.text"))) __attribute__((externally_visible)) void
init_kernel(
    uint64_t dummy,
    paddr_t keystone_dram_base,
    uint64_t keystone_dram_size,
    paddr_t keystone_runtime_start,
    paddr_t keystone_user_start,
    paddr_t keystone_free_start,
    vptr_t keystone_utm_ptr,
    uint64_t keystone_utm_size
)
{
    //pptr_t dtb_output = (pptr_t)paddr_to_pptr(dtb_output_p);

    //(void) dtb_output_p;

    bool_t result = try_init_kernel(dummy,
                                    keystone_dram_base,
                                    keystone_dram_size,
                                    keystone_runtime_start,
                                    keystone_user_start,
                                    keystone_free_start,
                                    keystone_utm_ptr,
                                    keystone_utm_size);

    if (!result) {
        _fail("Kernel init failed for some reason :(", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c", 452, __func__);
    }

    schedule();
    activateThread();
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/thread.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * Copyright 2018, DornerWorks
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_DORNERWORKS_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/vspace.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/thread.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/thread.c" 2

extern char kernel_stack_alloc[1][(1ul << (12))];

void
Arch_switchToThread(tcb_t *tcb)
{
    setVMRoot(tcb);
    setRegister(tcb, tp, tcb->tcbIPCBuffer);
}

__attribute__((__section__(".boot.text"))) void
Arch_configureIdleThread(tcb_t *tcb)
{
    setRegister(tcb, NEXTPC, (word_t)(&idle_thread));

    /* Enable interrupts and keep working in supervisor mode */
    setRegister(tcb, SSTATUS, (word_t) 0x00000100 | 0x00000020 | 0x00000002);
    setRegister(tcb, SP, (word_t)kernel_stack_alloc + (1ul << (12)));
}

void
Arch_switchToIdleThread(void)
{
    tcb_t *tcb = ksIdleThread;

    /* Force the idle thread to run on kernel page table */
    setVMRoot(tcb);
}

void
Arch_activateIdleThread(tcb_t *tcb)
{
    /* Don't need to do anything */
}

void
Arch_postModifyRegisters(tcb_t *tptr)
{
    /* Nothing to do */
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * Copyright 2018, DornerWorks
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_DORNERWORKS_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/boot.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/preemption.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/preemption.h" 2

exception_t preemptionPoint(void);
# 31 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 32 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 33 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 34 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/arch/api/invocation.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

/* This header was generated by kernel/tools/invocation_header_gen.py.
 *
 * To add an invocation call number, edit libsel4/include/interfaces/sel4.xml.
 *
 */


# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/arch/api/sel4_invocation.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

/* This header was generated by kernel/tools/invocation_header_gen.py.
 *
 * To add an invocation call number, edit libsel4/include/interfaces/sel4.xml.
 *
 */


# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/api/invocation.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

/* This header was generated by kernel/tools/invocation_header_gen.py.
 *
 * To add an invocation call number, edit libsel4/include/interfaces/sel4.xml.
 *
 */



enum invocation_label {
    InvalidInvocation,
    UntypedRetype,
    TCBReadRegisters,
    TCBWriteRegisters,
    TCBCopyRegisters,
    TCBConfigure,
    TCBSetPriority,
    TCBSetMCPriority,
    TCBSetSchedParams,
    TCBSetIPCBuffer,
    TCBSetSpace,
    TCBSuspend,
    TCBResume,
    TCBBindNotification,
    TCBUnbindNotification,
# 50 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/api/invocation.h"
    TCBSetTLSBase,
    CNodeRevoke,
    CNodeDelete,
    CNodeCancelBadgedSends,
    CNodeCopy,
    CNodeMint,
    CNodeMove,
    CNodeMutate,
    CNodeRotate,
    CNodeSaveCaller,
    IRQIssueIRQHandler,
    IRQAckIRQ,
    IRQSetIRQHandler,
    IRQClearIRQHandler,
    DomainSetSet,
    nInvocationLabels
};
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/arch/api/sel4_invocation.h" 2
enum sel4_arch_invocation_label {
    nSeL4ArchInvocationLabels = nInvocationLabels
};
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/arch/api/invocation.h" 2
enum arch_invocation_label {
    RISCVPageTableMap = nSeL4ArchInvocationLabels,
    RISCVPageTableUnmap,
    RISCVPageMap,
    RISCVPageRemap,
    RISCVPageUnmap,
    RISCVPageGetAddress,
    RISCVASIDControlMakePool,
    RISCVASIDPoolAssign,
    nArchInvocationLabels
};
# 35 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/vspace.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 36 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 37 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/devices.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 38 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 39 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 40 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/stack.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */



# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/stack.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/stack.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/kernel/stack.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/kernel/stack.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/kernel/stack.h" 2
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/stack.h" 2

/* These are the stacks used in kernel, shared between architectures/modes.
 * CONFIG_KERNEL_STACK_BITS is defined in kernel/Kconfig. The physical/offset
 * address of the stack is per-arch-mode aligned. KERNEL_STACK_ALIGNMENT is
 * defined for each arch/mode in <mode/kernel/stack.h>
 */
extern char kernel_stack_alloc[1][(1ul << (12))];
# 41 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c" 2

struct resolve_ret {
    paddr_t frameBase;
    vm_page_size_t frameSize;
    bool_t valid;
};
typedef struct resolve_ret resolve_ret_t;

static exception_t performPageGetAddress(void *vbase_ptr);

static word_t __attribute__((__const__))
RISCVGetWriteFromVMRights(vm_rights_t vm_rights)
{
    return vm_rights != VMReadOnly;
}

static word_t RISCVGetUserFromVMRights(vm_rights_t vm_rights)
{
    return vm_rights != VMKernelOnly;
}

static inline word_t __attribute__((__const__))
RISCVGetReadFromVMRights(vm_rights_t vm_rights)
{
    return vm_rights != VMWriteOnly;
}

static inline bool_t isPTEPageTable(pte_t *pte)
{
    return pte_ptr_get_valid(pte) &&
           !(pte_ptr_get_read(pte) || pte_ptr_get_write(pte) || pte_ptr_get_execute(pte));
}

/** Helper function meant only to be used for mapping the kernel
 * window.
 *
 * Maps all pages with full RWX and supervisor perms by default.
 */
static pte_t pte_next(word_t phys_addr, bool_t is_leaf)
{
    word_t ppn = (word_t)(phys_addr >> 12);

    uint8_t read = is_leaf ? 1 : 0;
    uint8_t write = read;
    uint8_t exec = read;

    return pte_new(ppn,
                   0, /* sw */
                   1, /* dirty */
                   1, /* accessed */
                   1, /* global */
                   0, /* user */
                   exec, /* execute */
                   write, /* write */
                   read, /* read */
                   1 /* valid */
                  );
}

/* ==================== BOOT CODE STARTS HERE ==================== */

/* we need to map PPTR_BASE --> freemem */
__attribute__((__section__(".boot.text"))) __attribute__((externally_visible)) void
keystone_map_kernel_window(word_t dram_start, word_t dram_end)
{
    /*Keystone: we map PPTR_BASE to free memory */
    word_t pptr = 0xFFFFFFC000000000lu; /* 0xffffffc000000000 */
    word_t paddr = dram_start;
//    while (pptr < PPTR_BASE + RISCV_GET_LVL_PGSIZE(2)) { /* 0xffffffc000000000 - 0xffffffff80000000 */
        if(!((!((pptr) & ((1ul << ((((9) * (3 - (2))) + 12)))-1ul))))) _assert_fail("IS_ALIGNED(pptr, RISCV_GET_LVL_PGSIZE_BITS(2))", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c", 110, __FUNCTION__);
        if(!((!((paddr) & ((1ul << ((((9) * (3 - (2))) + 12)))-1ul))))) _assert_fail("IS_ALIGNED(paddr, RISCV_GET_LVL_PGSIZE_BITS(2))", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c", 111, __FUNCTION__);

        /* MAP VA 0xffffffc000000000 --> PA 0x80000000 : up to kernel base */
        kernel_root_pageTable[(((pptr) >> (((9) * ((3) - (1))) + 12)) & ((1ul << (9))-1ul))] =
          pte_next(kpptr_to_paddr(kernel_root_level2_pageTable), false);
        while (pptr < 0xFFFFFFC000000000lu + (dram_end - dram_start)) {
          //printf("pptr:0x%llx --> paddr:0x%llx\n", (unsigned long long) pptr, (unsigned long long) paddr);
          kernel_root_level2_pageTable[(((pptr) >> (((9) * ((3) - (2))) + 12)) & ((1ul << (9))-1ul))] = pte_next(paddr, true);
          pptr += (1ul << ((((9) * (3 - ((2)))) + 12)));
          paddr += (1ul << ((((9) * (3 - ((2)))) + 12)));
        }
   // }
      //   kernel_root_pageTable[RISCV_GET_PT_INDEX(pptr, 1)] = pte_next(paddr, true);
    /*
        pptr += RISCV_GET_LVL_PGSIZE(1);
        paddr += RISCV_GET_LVL_PGSIZE(1);
    }*/
}

  __attribute__((__section__(".boot.text"))) __attribute__((externally_visible)) void
map_kernel_window(void)
{
    /* mapping of kernelBase (virtual address) to kernel's physBase  */
    if(!(3 > 1 && 3 <= 4)) _assert_fail("CONFIG_PT_LEVELS > 1 && CONFIG_PT_LEVELS <= 4", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c", 134, __FUNCTION__);

    /* kernel window starts at PPTR_BASE */
    word_t pptr = 0xFFFFFFC000000000lu; /* 0xffffffc000000000 */

    /* first we map in memory from PADDR_BASE */
    word_t paddr = paddr_base(); /* 0x80000000UL */
    //while (pptr < KERNEL_BASE) { /* 0xffffffc000000000 - 0xffffffff80000000 */
    /*    assert(IS_ALIGNED(pptr, RISCV_GET_LVL_PGSIZE_BITS(1)));
        assert(IS_ALIGNED(paddr, RISCV_GET_LVL_PGSIZE_BITS(1)));
    */
        /* MAP VA 0xffffffc000000000 --> PA 0x80000000 : up to kernel base */
     //   kernel_root_pageTable[RISCV_GET_PT_INDEX(pptr, 1)] = pte_next(paddr, true);
    /*
        pptr += RISCV_GET_LVL_PGSIZE(1);
        paddr += RISCV_GET_LVL_PGSIZE(1);
    }*/

    /* now we should be mapping the 1GiB kernel base, starting again from PADDR_LOAD */
    pptr = 0xFFFFFFFF80000000lu;
    //assert(pptr == KERNEL_BASE);
    paddr = paddr_load(); /* PA 0xc0000000 */

//#ifndef RISCV_KERNEL_WINDOW_LEVEL2_PT
    /* MAP VA 0xffffffff80000000 --> PA 0xc0000000 */
//    kernel_root_pageTable[RISCV_GET_PT_INDEX(pptr, 1)] = pte_next(paddr, true);
//    pptr += RISCV_GET_LVL_PGSIZE(1);
//    paddr += RISCV_GET_LVL_PGSIZE(1);
//#else
    kernel_root_pageTable[(((pptr) >> (((9) * ((3) - (1))) + 12)) & ((1ul << (9))-1ul))] =
        pte_next(kpptr_to_paddr(kernel_image_level2_pt), false);
    kernel_image_level2_pt[(((pptr) >> (((9) * ((3) - (2))) + 12)) & ((1ul << (9))-1ul))] =
        pte_next(kpptr_to_paddr(kernel_image_level3_pt), false);

    while (pptr < 0xFFFFFFFF80000000lu + (1ul << ((((9) * (3 - ((2)))) + 12)))) {
        //printf("pptr:0x%llx --> paddr:0x%llx\n", (unsigned long long) pptr, (unsigned long long) paddr);
        kernel_image_level3_pt[(((pptr) >> (((9) * ((3) - (3))) + 12)) & ((1ul << (9))-1ul))] = pte_next(paddr, true);
        pptr += (1ul << ((((9) * (3 - ((3)))) + 12)));
        paddr += (1ul << ((((9) * (3 - ((3)))) + 12)));
    }
//#endif

    /* There should be 1GiB free where we will put device mapping some day */
    //assert(pptr == UINTPTR_MAX - RISCV_GET_LVL_PGSIZE(1) + 1);
}

__attribute__((__section__(".boot.text"))) void
map_it_pt_cap(cap_t vspace_cap, cap_t pt_cap)
{
    lookupPTSlot_ret_t pt_ret;
    pte_t* targetSlot;
    vptr_t vptr = cap_page_table_cap_get_capPTMappedAddress(pt_cap);
    pte_t* lvl1pt = ((pte_t *)((pptr_t)cap_get_capPtr(vspace_cap)));

    /* pt to be mapped */
    pte_t* pt = ((pte_t *)((pptr_t)cap_get_capPtr(pt_cap)));

    /* Get PT slot to install the address in */
    pt_ret = lookupPTSlot(lvl1pt, vptr);

    targetSlot = pt_ret.ptSlot;

    *targetSlot = pte_new(
                      (addrFromPPtr(pt) >> 12),
                      0, /* sw */
                      1, /* dirty */
                      1, /* accessed */
                      0, /* global */
                      0, /* user */
                      0, /* execute */
                      0, /* write */
                      0, /* read */
                      1 /* valid */
                  );
    sfence();
}

__attribute__((__section__(".boot.text"))) void
map_it_frame_cap(cap_t vspace_cap, cap_t frame_cap)
{
    pte_t* lvl1pt = ((pte_t *)((pptr_t)cap_get_capPtr(vspace_cap)));
    pte_t* frame_pptr = ((pte_t *)((pptr_t)cap_get_capPtr(frame_cap)));
    vptr_t frame_vptr = cap_frame_cap_get_capFMappedAddress(frame_cap);

    /* there's a weird bug in SeL4 that adds some bits to
     * the user VA. for QEMU, it adds 0x100000000, for HiFive, it adds 0x200000000
     * I couldn't figure out why it is doing that, so
     * let's just hack it for now. */
    if(frame_vptr & 0x700000000)
      frame_vptr &= 0xffffffff;
    /* We deal with a frame as 4KiB */
    lookupPTSlot_ret_t lu_ret = lookupPTSlot(lvl1pt, frame_vptr);
    if(!(lu_ret.ptBitsLeft == 12)) _assert_fail("lu_ret.ptBitsLeft == seL4_PageBits", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c", 226, __FUNCTION__);

    pte_t* targetSlot = lu_ret.ptSlot;

    *targetSlot = pte_new(
                      (addrFromPPtr(frame_pptr) >> 12),
                      0, /* sw */
                      1, /* dirty */
                      1, /* accessed */
                      0, /* global */
                      1, /* user */
                      1, /* execute */
                      1, /* write */
                      1, /* read */
                      1 /* valid */
                  );
    sfence();
}

__attribute__((__section__(".boot.text"))) cap_t
create_unmapped_it_frame_cap(pptr_t pptr, bool_t use_large)
{
    cap_t cap = cap_frame_cap_new(
                    asidInvalid, /* capFMappedASID       */
                    pptr, /* capFBasePtr          */
                    0, /* capFSize             */
                    0, /* capFVMRights         */
                    0,
                    0 /* capFMappedAddress    */
                );

    return cap;
}

/* Create a page table for the initial thread */
static __attribute__((__section__(".boot.text"))) cap_t
create_it_pt_cap(cap_t vspace_cap, pptr_t pptr, vptr_t vptr, asid_t asid)
{
    cap_t cap;
    cap = cap_page_table_cap_new(
              asid, /* capPTMappedASID      */
              pptr, /* capPTBasePtr         */
              1, /* capPTIsMapped        */
              vptr /* capPTMappedAddress   */
          );

    map_it_pt_cap(vspace_cap, cap);
    return cap;
}

/* Create an address space for the initial thread.
 * This includes page directory and page tables */
__attribute__((__section__(".boot.text"))) cap_t
create_it_address_space(cap_t root_cnode_cap, v_region_t it_v_reg)
{
    cap_t lvl1pt_cap;
    vptr_t pt_vptr;
    pptr_t pt_pptr;
    pptr_t lvl1pt_pptr;

    /* create 1st level page table obj and cap */
    lvl1pt_pptr = alloc_region(12);

    if (!lvl1pt_pptr) {
        return cap_null_cap_new();
    }
    memzero(((pte_t *)(lvl1pt_pptr)), 1 << 12);

    copyGlobalMappings(((pte_t *)(lvl1pt_pptr)));

    lvl1pt_cap =
        cap_page_table_cap_new(
            1, /* capPTMappedASID    */
            (word_t) lvl1pt_pptr, /* capPTBasePtr       */
            1, /* capPTIsMapped      */
            (word_t) lvl1pt_pptr /* capPTMappedAddress */
        );

    seL4_SlotPos slot_pos_before = ndks_boot.slot_pos_cur;
    write_slot((((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapInitThreadVSpace)), lvl1pt_cap);

    /* create all n level PT objs and caps necessary to cover userland image in 4KiB pages */

    for (int i = 2; i <= 3; i++) {

        for (pt_vptr = (((it_v_reg.start) >> ((((9) * (3 - (i - 1))) + 12))) << ((((9) * (3 - (i - 1))) + 12)));
                pt_vptr < it_v_reg.end;
                pt_vptr += (1ul << ((((9) * (3 - ((i - 1)))) + 12)))) {
            pt_pptr = alloc_region(12);

            if (!pt_pptr) {
                return cap_null_cap_new();
            }

            memzero(((pte_t *)(pt_pptr)), 1 << 12);
            if (!provide_cap(root_cnode_cap,
                             create_it_pt_cap(lvl1pt_cap, pt_pptr, pt_vptr, 1))
               ) {
                return cap_null_cap_new();
            }
        }

    }

    seL4_SlotPos slot_pos_after = ndks_boot.slot_pos_cur;
    ndks_boot.bi_frame->userImagePaging = (seL4_SlotRegion) {
        slot_pos_before, slot_pos_after
    };

    return lvl1pt_cap;
}

__attribute__((__section__(".boot.text"))) void
activate_kernel_vspace(void)
{
    setVSpaceRoot(kpptr_to_paddr(&kernel_root_pageTable), 0);
}

__attribute__((__section__(".boot.text"))) void
write_it_asid_pool(cap_t it_ap_cap, cap_t it_lvl1pt_cap)
{
    asid_pool_t* ap = ((asid_pool_t*)(pptr_t)cap_get_capPtr(it_ap_cap));
    ap->array[1] = ((pte_t *)((pptr_t)cap_get_capPtr(it_lvl1pt_cap)));
    riscvKSASIDTable[1 >> asidLowBits] = ap;
}

/* ==================== BOOT CODE FINISHES HERE ==================== */

static findVSpaceForASID_ret_t findVSpaceForASID(asid_t asid)
{
    findVSpaceForASID_ret_t ret;
    asid_pool_t* poolPtr;
    pte_t* vspace_root;

    poolPtr = riscvKSASIDTable[asid >> asidLowBits];
    if (!poolPtr) {
        current_lookup_fault = lookup_fault_invalid_root_new();

        ret.vspace_root = ((void *)0);
        ret.status = EXCEPTION_LOOKUP_FAULT;
        return ret;
    }

    vspace_root = poolPtr->array[asid & ((1ul << (asidLowBits))-1ul)];
    if (!vspace_root) {
        current_lookup_fault = lookup_fault_invalid_root_new();

        ret.vspace_root = ((void *)0);
        ret.status = EXCEPTION_LOOKUP_FAULT;
        return ret;
    }

    ret.vspace_root = vspace_root;
    ret.status = EXCEPTION_NONE;
    return ret;
}

void
copyGlobalMappings(pte_t *newLvl1pt)
{
    unsigned int i;
    pte_t *global_kernel_vspace = kernel_root_pageTable;

    for (i = (((0xFFFFFFC000000000lu) >> (((9) * ((3) - (1))) + 12)) & ((1ul << (9))-1ul)); i < (1ul << (9)); i++) {
        newLvl1pt[i] = global_kernel_vspace[i];
    }
}

word_t * __attribute__((__pure__))
lookupIPCBuffer(bool_t isReceiver, tcb_t *thread)
{
    word_t w_bufferPtr;
    cap_t bufferCap;
    vm_rights_t vm_rights;

    w_bufferPtr = thread->tcbIPCBuffer;
    bufferCap = (((cte_t *)((word_t)(thread)&~((1ul << (10))-1ul)))+(tcbBuffer))->cap;

    if (__builtin_expect(!!(cap_get_capType(bufferCap) != cap_frame_cap), 0)) {
        return ((void *)0);
    }
    if (__builtin_expect(!!(cap_frame_cap_get_capFIsDevice(bufferCap)), 0)) {
        return ((void *)0);
    }

    vm_rights = cap_frame_cap_get_capFVMRights(bufferCap);
    if (__builtin_expect(!!(vm_rights == VMReadWrite || (!isReceiver && vm_rights == VMReadOnly)), 1)
                                                        ) {
        word_t basePtr;
        unsigned int pageBits;

        basePtr = cap_frame_cap_get_capFBasePtr(bufferCap);
        pageBits = pageBitsForSize(cap_frame_cap_get_capFSize(bufferCap));
        return (word_t *)(basePtr + (w_bufferPtr & ((1ul << (pageBits))-1ul)));
    } else {
        return ((void *)0);
    }
}

static inline pte_t *getPPtrFromHWPTE(pte_t *pte)
{
    return ((pte_t *)(ptrFromPAddr(pte_ptr_get_ppn(pte) << 12)));
}

lookupPTSlot_ret_t
lookupPTSlot(pte_t *lvl1pt, vptr_t vptr)
{
    lookupPTSlot_ret_t ret;
    /* this is how many bits we potentially have left to decode. Initially we have the
     * full address space to decode, and every time we walk this will be reduced. The
     * final value of this after the walk is the size of the frame that can be inserted,
     * or already exists, in ret.ptSlot */
    ret.ptBitsLeft = 9 * 3 + 12;
    ret.ptSlot = ((void *)0);

    pte_t* pt = lvl1pt;
    do {
        ret.ptBitsLeft -= 9;
        word_t index = (vptr >> ret.ptBitsLeft) & ((1ul << (9))-1ul);
        ret.ptSlot = pt + index;
        pt = getPPtrFromHWPTE(ret.ptSlot);
        /* stop when we find something that isn't a page table - either a mapped frame or
         * an empty slot */
    } while (isPTEPageTable(ret.ptSlot));

    return ret;
}

exception_t
handleVMFault(tcb_t *thread, vm_fault_type_t vm_faultType)
{
    uint64_t addr;

    addr = read_sbadaddr();

    switch (vm_faultType) {
    case RISCVLoadPageFault:
    case RISCVLoadAccessFault:
        current_fault = seL4_Fault_VMFault_new(addr, RISCVLoadAccessFault, false);
        return EXCEPTION_FAULT;
    case RISCVStorePageFault:
    case RISCVStoreAccessFault:
        current_fault = seL4_Fault_VMFault_new(addr, RISCVStoreAccessFault, false);
        return EXCEPTION_FAULT;
    case RISCVInstructionPageFault:
    case RISCVInstructionAccessFault:
        setRegister(thread, NEXTPC, getRegister(thread, SEPC));
        current_fault = seL4_Fault_VMFault_new(addr, RISCVInstructionAccessFault, true);
        return EXCEPTION_FAULT;

    default:
        _fail("Invalid VM fault type", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c", 477, __func__);
    }
}

void deleteASIDPool(asid_t asid_base, asid_pool_t* pool)
{
    /* Haskell error: "ASID pool's base must be aligned" */
    if(!((!((asid_base) & ((1ul << (asidLowBits))-1ul))))) _assert_fail("IS_ALIGNED(asid_base, asidLowBits)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c", 484, __FUNCTION__);

    if (riscvKSASIDTable[asid_base >> asidLowBits] == pool) {
        riscvKSASIDTable[asid_base >> asidLowBits] = ((void *)0);
        setVMRoot(ksCurThread);
    }
}

static exception_t performASIDControlInvocation(void* frame, cte_t* slot, cte_t* parent, asid_t asid_base)
{
    cap_untyped_cap_ptr_set_capFreeIndex(&(parent->cap),
                                         ((1ul << ((cap_untyped_cap_get_capBlockSize(parent->cap)) - 4))));

    memzero(frame, 1 << pageBitsForSize(RISCV_4K_Page));
    cteInsert(
        cap_asid_pool_cap_new(
            asid_base, /* capASIDBase  */
            ((word_t)(frame)) /* capASIDPool  */
        ),
        parent,
        slot
    );
    /* Haskell error: "ASID pool's base must be aligned" */
    if(!((asid_base & ((1ul << (asidLowBits))-1ul)) == 0)) _assert_fail("(asid_base & MASK(asidLowBits)) == 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c", 507, __FUNCTION__);
    riscvKSASIDTable[asid_base >> asidLowBits] = (asid_pool_t*)frame;

    return EXCEPTION_NONE;
}

static exception_t performASIDPoolInvocation(asid_t asid, asid_pool_t* poolPtr, cte_t* vspaceCapSlot)
{
    pte_t *regionBase = ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(vspaceCapSlot->cap)));
    cap_t cap = vspaceCapSlot->cap;
    cap = cap_page_table_cap_set_capPTMappedASID(cap, asid);
    cap = cap_page_table_cap_set_capPTIsMapped(cap, 1);
    vspaceCapSlot->cap = cap;

    copyGlobalMappings(regionBase);

    poolPtr->array[asid & ((1ul << (asidLowBits))-1ul)] = regionBase;

    return EXCEPTION_NONE;
}

void deleteASID(asid_t asid, pte_t *vspace)
{
    asid_pool_t* poolPtr;

    poolPtr = riscvKSASIDTable[asid >> asidLowBits];
    if (poolPtr != ((void *)0) && poolPtr->array[asid & ((1ul << (asidLowBits))-1ul)] == vspace) {
        hwASIDFlush(asid);
        poolPtr->array[asid & ((1ul << (asidLowBits))-1ul)] = ((void *)0);
        setVMRoot(ksCurThread);
    }
}

void
unmapPageTable(asid_t asid, vptr_t vptr, pte_t* target_pt)
{
    findVSpaceForASID_ret_t find_ret = findVSpaceForASID(asid);
    if (__builtin_expect(!!(find_ret.status != EXCEPTION_NONE), 0)) {
        /* nothing to do */
        return;
    }

    pte_t *ptSlot = find_ret.vspace_root + (((vptr) >> (((9) * ((3) - (1))) + 12)) & ((1ul << (9))-1ul));
    pte_t *pt = find_ret.vspace_root;

    for (int i = 2; i <= 3; i++) {
        if (__builtin_expect(!!(!isPTEPageTable(ptSlot)), 0)) {
            /* couldn't find it */
            return;
        }
        pt = getPPtrFromHWPTE(ptSlot);
        if (pt == target_pt) {
            /* Found the PT Slot */
            ptSlot = pt + (((vptr) >> (((9) * ((3) - (i - 1))) + 12)) & ((1ul << (9))-1ul));
            break;
        }
        ptSlot = pt + (((vptr) >> (((9) * ((3) - (i))) + 12)) & ((1ul << (9))-1ul));
    }

    if (pt != target_pt) {
        /* didn't find it */
        return;
    }

    *ptSlot = pte_new(
                  0, /* phy_address */
                  0, /* sw */
                  0, /* dirty */
                  0, /* accessed */
                  0, /* global */
                  0, /* user */
                  0, /* execute */
                  0, /* write */
                  0, /* read */
                  0 /* valid */
              );
    sfence();
}

static pte_t pte_pte_invalid_new(void)
{
    return (pte_t) {
        0
    };
}

void
unmapPage(vm_page_size_t page_size, asid_t asid, vptr_t vptr, pptr_t pptr)
{
    findVSpaceForASID_ret_t find_ret;
    lookupPTSlot_ret_t lu_ret;

    find_ret = findVSpaceForASID(asid);
    if (find_ret.status != EXCEPTION_NONE) {
        return;
    }

    lu_ret = lookupPTSlot(find_ret.vspace_root, vptr);
    if (__builtin_expect(!!(lu_ret.ptBitsLeft != pageBitsForSize(page_size)), 0)) {
        return;
    }
    if (!pte_ptr_get_valid(lu_ret.ptSlot) || isPTEPageTable(lu_ret.ptSlot)
            || (pte_ptr_get_ppn(lu_ret.ptSlot) << 12) != addrFromPPtr((void*)pptr)) {
        return;
    }

    lu_ret.ptSlot[0] = pte_pte_invalid_new();
    sfence();
}

void
setVMRoot(tcb_t *tcb)
{
    cap_t threadRoot;
    asid_t asid;
    pte_t *lvl1pt;
    findVSpaceForASID_ret_t find_ret;

    threadRoot = (((cte_t *)((word_t)(tcb)&~((1ul << (10))-1ul)))+(tcbVTable))->cap;

    if (cap_get_capType(threadRoot) != cap_page_table_cap) {
        setVSpaceRoot(kpptr_to_paddr(&kernel_root_pageTable), 0);
        return;
    }

    lvl1pt = ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(threadRoot)));

    asid = cap_page_table_cap_get_capPTMappedASID(threadRoot);
    find_ret = findVSpaceForASID(asid);
    if (__builtin_expect(!!(find_ret.status != EXCEPTION_NONE || find_ret.vspace_root != lvl1pt), 0)) {
        setVSpaceRoot(kpptr_to_paddr(&kernel_root_pageTable), 0);
        return;
    }

    setVSpaceRoot(addrFromPPtr(lvl1pt), asid);
}

bool_t __attribute__((__const__))
isValidVTableRoot(cap_t cap)
{
    return (cap_get_capType(cap) == cap_page_table_cap &&
            cap_page_table_cap_get_capPTMappedASID(cap) != asidInvalid);
}

exception_t
checkValidIPCBuffer(vptr_t vptr, cap_t cap)
{
    if (__builtin_expect(!!(cap_get_capType(cap) != cap_frame_cap), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 655, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Requested IPC Buffer is not a frame cap."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (__builtin_expect(!!(cap_frame_cap_get_capFIsDevice(cap)), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 661, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Specifying a device frame as an IPC buffer is not permitted."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (__builtin_expect(!!(!(!((vptr) & ((1ul << (10))-1ul)))), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 668, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Requested IPC Buffer location 0x%x is not aligned.", (int)vptr); kprintf(">>" "\033[0m" "\n"); } while (0)
                            ;
        current_syscall_error.type = seL4_AlignmentError;
        return EXCEPTION_SYSCALL_ERROR;
    }

    return EXCEPTION_NONE;
}

vm_rights_t __attribute__((__const__))
maskVMRights(vm_rights_t vm_rights, seL4_CapRights_t cap_rights_mask)
{
    if (vm_rights == VMReadOnly &&
            seL4_CapRights_get_capAllowRead(cap_rights_mask)) {
        return VMReadOnly;
    }
    if (vm_rights == VMReadWrite &&
            (seL4_CapRights_get_capAllowRead(cap_rights_mask) || seL4_CapRights_get_capAllowWrite(cap_rights_mask))) {
        if (!seL4_CapRights_get_capAllowWrite(cap_rights_mask)) {
            return VMReadOnly;
        } else if (!seL4_CapRights_get_capAllowRead(cap_rights_mask)) {
            return VMWriteOnly;
        } else {
            return VMReadWrite;
        }
    }
    if (vm_rights == VMWriteOnly &&
            seL4_CapRights_get_capAllowWrite(cap_rights_mask)) {
        return VMWriteOnly;
    }
    if (vm_rights == VMKernelOnly) {
        return VMKernelOnly;
    }
    return VMKernelOnly;
}

/* The rest of the file implements the RISCV object invocations */

static pte_t __attribute__((__const__))
makeUserPTE(paddr_t paddr, bool_t executable, vm_rights_t vm_rights)
{
    return pte_new(
               paddr >> 12,
               0, /* sw */
               1, /* dirty */
               1, /* accessed */
               0, /* global */
               RISCVGetUserFromVMRights(vm_rights), /* user */
               executable, /* execute */
               RISCVGetWriteFromVMRights(vm_rights), /* write */
               RISCVGetReadFromVMRights(vm_rights), /* read */
               1 /* valid */
           );
}

static inline bool_t __attribute__((__const__))
checkVPAlignment(vm_page_size_t sz, word_t w)
{
    return (w & ((1ul << (pageBitsForSize(sz)))-1ul)) == 0;
}

static exception_t
decodeRISCVPageTableInvocation(word_t label, unsigned int length,
                               cte_t *cte, cap_t cap, extra_caps_t extraCaps,
                               word_t *buffer)
{
    if (label == RISCVPageTableUnmap) {
        if (__builtin_expect(!!(!isFinalCapability(cte)), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 735, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageTableUnmap: cannot unmap if more than once cap exists"); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_RevokeFirst;
            return EXCEPTION_SYSCALL_ERROR;
        }
        setThreadState(ksCurThread, ThreadState_Restart);
        return performPageTableInvocationUnmap (cap, cte);
    }

    if (__builtin_expect(!!((label != RISCVPageTableMap)), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 744, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageTable: Illegal Operation"); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (__builtin_expect(!!(length < 2 || extraCaps.excaprefs[0] == ((void *)0)), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 750, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageTable: truncated message"); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (__builtin_expect(!!(cap_page_table_cap_get_capPTMappedASID(cap) != asidInvalid), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 756, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageTable: PageTable is already mapped."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidCapability;
        current_syscall_error.invalidCapNumber = 0;
        return EXCEPTION_SYSCALL_ERROR;
    }

    word_t vaddr = getSyscallArg(0, buffer);
    cap_t lvl1ptCap = extraCaps.excaprefs[0]->cap;

    if (__builtin_expect(!!(cap_get_capType(lvl1ptCap) != cap_page_table_cap || cap_page_table_cap_get_capPTIsMapped(lvl1ptCap) == asidInvalid), 0)
                                                                                ) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 767, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageTableMap: Invalid top-level PageTable."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidCapability;
        current_syscall_error.invalidCapNumber = 1;

        return EXCEPTION_SYSCALL_ERROR;
    }

    pte_t *lvl1pt = ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(lvl1ptCap)));
    asid_t asid = cap_page_table_cap_get_capPTMappedASID(lvl1ptCap);

    if (__builtin_expect(!!(vaddr >= 0xFFFFFFC000000000lu), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 778, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageTableMap: Virtual address cannot be in kernel window."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidArgument;
        current_syscall_error.invalidArgumentNumber = 0;

        return EXCEPTION_SYSCALL_ERROR;
    }

    findVSpaceForASID_ret_t find_ret = findVSpaceForASID(asid);
    if (__builtin_expect(!!(find_ret.status != EXCEPTION_NONE), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 787, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageTableMap: ASID lookup failed"); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_FailedLookup;
        current_syscall_error.failedLookupWasSource = false;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (__builtin_expect(!!(find_ret.vspace_root != lvl1pt), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 794, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageTableMap: ASID lookup failed"); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidCapability;
        current_syscall_error.invalidCapNumber = 1;
        return EXCEPTION_SYSCALL_ERROR;
    }

    lookupPTSlot_ret_t lu_ret = lookupPTSlot(lvl1pt, vaddr);

    /* if there is already something mapped (valid is set) or we have traversed far enough
     * that a page table is not valid to map then tell the user that they ahve to delete
     * something before they can put a PT here */
    if (lu_ret.ptBitsLeft == 12 || pte_ptr_get_valid(lu_ret.ptSlot)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 806, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageTableMap: All objects mapped at this address"); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_DeleteFirst;
        return EXCEPTION_SYSCALL_ERROR;
    }

    /* Get the slot to install the PT in */
    pte_t *ptSlot = lu_ret.ptSlot;

    paddr_t paddr = addrFromPPtr(
                        ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(cap))));
    pte_t pte = pte_new((paddr >> 12),
                        0, /* sw */
                        1, /* dirty */
                        1, /* accessed */
                        0, /* global */
                        0, /* user */
                        0, /* execute */
                        0, /* write */
                        0, /* read */
                        1 /* valid */
                       );

    cap = cap_page_table_cap_set_capPTIsMapped(cap, 1);
    cap = cap_page_table_cap_set_capPTMappedASID(cap, asid);
    cap = cap_page_table_cap_set_capPTMappedAddress(cap, vaddr);

    setThreadState(ksCurThread, ThreadState_Restart);
    return performPageTableInvocationMap(cap, cte, pte, ptSlot);
}

static exception_t
decodeRISCVFrameInvocation(word_t label, unsigned int length,
                           cte_t *cte, cap_t cap, extra_caps_t extraCaps,
                           word_t *buffer)
{
    switch (label) {
    case RISCVPageMap: {
        if (__builtin_expect(!!(length < 3 || extraCaps.excaprefs[0] == ((void *)0)), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 844, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageMap: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_TruncatedMessage;
            return EXCEPTION_SYSCALL_ERROR;
        }

        word_t vaddr = getSyscallArg(0, buffer);
        word_t w_rightsMask = getSyscallArg(1, buffer);
        vm_attributes_t attr = vmAttributesFromWord(getSyscallArg(2, buffer));
        cap_t lvl1ptCap = extraCaps.excaprefs[0]->cap;

        vm_page_size_t frameSize = cap_frame_cap_get_capFSize(cap);
        vm_rights_t capVMRights = cap_frame_cap_get_capFVMRights(cap);

        /* check the frame isn't already mapped */
        if (__builtin_expect(!!(cap_frame_cap_get_capFMappedASID(cap)), 0) != asidInvalid) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 859, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageMap: frame already mapped"); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 0;
            return EXCEPTION_SYSCALL_ERROR;
        }

        if (__builtin_expect(!!(cap_get_capType(lvl1ptCap) != cap_page_table_cap || cap_page_table_cap_get_capPTMappedASID(lvl1ptCap) == asidInvalid), 0)
                                                                                      ) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 867, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageMap: Bad PageTable cap."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 1;
            return EXCEPTION_SYSCALL_ERROR;
        }

        pte_t *lvl1pt = ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(lvl1ptCap)));
        asid_t asid = cap_page_table_cap_get_capPTMappedASID(lvl1ptCap);

        findVSpaceForASID_ret_t find_ret = findVSpaceForASID(asid);
        if (__builtin_expect(!!(find_ret.status != EXCEPTION_NONE), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 878, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageMap: No PageTable for ASID"); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_FailedLookup;
            current_syscall_error.failedLookupWasSource = false;
            return EXCEPTION_SYSCALL_ERROR;
        }

        if (__builtin_expect(!!(find_ret.vspace_root != lvl1pt), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 885, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageMap: ASID lookup failed"); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 1;
            return EXCEPTION_SYSCALL_ERROR;
        }

        /* check the vaddr is valid */
        word_t vtop = vaddr + (1ul << (pageBitsForSize(frameSize))) - 1;
        if (__builtin_expect(!!(vtop >= 0xFFFFFFC000000000lu), 0)) {
            current_syscall_error.type = seL4_InvalidArgument;
            current_syscall_error.invalidArgumentNumber = 0;
            return EXCEPTION_SYSCALL_ERROR;
        }
        if (__builtin_expect(!!(!checkVPAlignment(frameSize, vaddr)), 0)) {
            current_syscall_error.type = seL4_AlignmentError;
            return EXCEPTION_SYSCALL_ERROR;
        }

        /* Check if this page is already mapped */
        lookupPTSlot_ret_t lu_ret = lookupPTSlot(lvl1pt, vaddr);
        if (__builtin_expect(!!(lu_ret.ptBitsLeft != pageBitsForSize(frameSize)), 0)) {
            current_lookup_fault = lookup_fault_missing_capability_new(lu_ret.ptBitsLeft);
            current_syscall_error.type = seL4_FailedLookup;
            current_syscall_error.failedLookupWasSource = false;
            return EXCEPTION_SYSCALL_ERROR;
        }

        /* check this vaddr isn't already mapped */
        if (__builtin_expect(!!(pte_ptr_get_valid(lu_ret.ptSlot)), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 914, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Virtual address already mapped"); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_DeleteFirst;
            return EXCEPTION_SYSCALL_ERROR;
        }

        vm_rights_t vmRights = maskVMRights(capVMRights, rightsFromWord(w_rightsMask));
        paddr_t frame_paddr = addrFromPPtr((void *) cap_frame_cap_get_capFBasePtr(cap));
        cap = cap_frame_cap_set_capFMappedASID(cap, asid);
        cap = cap_frame_cap_set_capFMappedAddress(cap, vaddr);

        bool_t executable = !vm_attributes_get_riscvExecuteNever(attr);
        pte_t pte = makeUserPTE(frame_paddr, executable, vmRights);
        setThreadState(ksCurThread, ThreadState_Restart);
        return performPageInvocationMapPTE(cap, cte, pte, lu_ret.ptSlot);
    }

    case RISCVPageRemap: {
        if (__builtin_expect(!!(length < 2 || extraCaps.excaprefs[0] == ((void *)0)), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 932, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageRemap: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_TruncatedMessage;
            return EXCEPTION_SYSCALL_ERROR;
        }

        word_t w_rightsMask = getSyscallArg(0, buffer);
        vm_attributes_t attr = vmAttributesFromWord(getSyscallArg(1, buffer));
        cap_t lvl1ptCap = extraCaps.excaprefs[0]->cap;
        vm_page_size_t frameSize = cap_frame_cap_get_capFSize(cap);
        vm_rights_t capVMRights = cap_frame_cap_get_capFVMRights(cap);

        if (__builtin_expect(!!(cap_get_capType(lvl1ptCap) != cap_page_table_cap || cap_page_table_cap_get_capPTMappedASID(lvl1ptCap) == asidInvalid), 0)
                                                                                      ) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 945, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageRemap: Bad PageTable cap."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 1;
            return EXCEPTION_SYSCALL_ERROR;
        }

        if (__builtin_expect(!!(cap_frame_cap_get_capFMappedASID(cap)), 0) == asidInvalid) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 952, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageRemap: frame is not mapped"); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 0;
            return EXCEPTION_SYSCALL_ERROR;
        }

        asid_t mappedASID = cap_frame_cap_get_capFMappedASID(cap);
        findVSpaceForASID_ret_t find_ret = findVSpaceForASID(mappedASID);
        if (__builtin_expect(!!(find_ret.status != EXCEPTION_NONE), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 961, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageRemap: No PageTable for ASID"); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_FailedLookup;
            current_syscall_error.failedLookupWasSource = false;
            return EXCEPTION_SYSCALL_ERROR;
        }

        pte_t *lvl1pt = ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(lvl1ptCap)));
        if (__builtin_expect(!!(find_ret.vspace_root != lvl1pt || cap_page_table_cap_get_capPTMappedASID(lvl1ptCap) != mappedASID), 0)
                                                                                     ) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 970, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageRemap: ASID lookup failed"); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 1;
            return EXCEPTION_SYSCALL_ERROR;
        }

        word_t vaddr = cap_frame_cap_get_capFMappedAddress(cap);
        if (__builtin_expect(!!(!checkVPAlignment(frameSize, vaddr)), 0)) {
            current_syscall_error.type = seL4_AlignmentError;
            return EXCEPTION_SYSCALL_ERROR;
        }

        /* Check if this page is already mapped */
        lookupPTSlot_ret_t lu_ret = lookupPTSlot(lvl1pt, vaddr);

        if (__builtin_expect(!!(lu_ret.ptBitsLeft != pageBitsForSize(frameSize)), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 986, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageRemap: No PageTable for this page %p", (void*)vaddr); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_lookup_fault = lookup_fault_missing_capability_new(lu_ret.ptBitsLeft);
            current_syscall_error.type = seL4_FailedLookup;
            current_syscall_error.failedLookupWasSource = false;
            return EXCEPTION_SYSCALL_ERROR;
        }

        if (__builtin_expect(!!(isPTEPageTable(lu_ret.ptSlot)), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 994, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPageRemap: no mapping to remap."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 0;
            return EXCEPTION_SYSCALL_ERROR;
        }

        vm_rights_t vmRights = maskVMRights(capVMRights, rightsFromWord(w_rightsMask));
        paddr_t frame_paddr = addrFromPPtr((void *) cap_frame_cap_get_capFBasePtr(cap));
        bool_t executable = !vm_attributes_get_riscvExecuteNever(attr);
        pte_t pte = makeUserPTE(frame_paddr, executable, vmRights);
        setThreadState(ksCurThread, ThreadState_Restart);
        return performPageInvocationRemapPTE(pte, lu_ret.ptSlot);
    }
    case RISCVPageUnmap: {
        setThreadState(ksCurThread, ThreadState_Restart);
        return performPageInvocationUnmap(cap, cte);
    }

    case RISCVPageGetAddress: {

        /* Check that there are enough message registers */
        if(!(n_msgRegisters >= 1)) _assert_fail("n_msgRegisters >= 1", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c", 1015, __FUNCTION__);

        setThreadState(ksCurThread, ThreadState_Restart);
        return performPageGetAddress((void*)cap_frame_cap_get_capFBasePtr(cap));
    }

    default:
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1022, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVPage: Illegal operation."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;

        return EXCEPTION_SYSCALL_ERROR;
    }

}

exception_t
decodeRISCVMMUInvocation(word_t label, unsigned int length, cptr_t cptr,
                         cte_t *cte, cap_t cap, extra_caps_t extraCaps,
                         word_t *buffer)
{
    switch (cap_get_capType(cap)) {

    case cap_page_table_cap:
        return decodeRISCVPageTableInvocation(label, length, cte, cap, extraCaps, buffer);

    case cap_frame_cap:
        return decodeRISCVFrameInvocation(label, length, cte, cap, extraCaps, buffer);

    case cap_asid_control_cap: {
        word_t i;
        asid_t asid_base;
        word_t index;
        word_t depth;
        cap_t untyped;
        cap_t root;
        cte_t* parentSlot;
        cte_t* destSlot;
        lookupSlot_ret_t lu_ret;
        void* frame;
        exception_t status;

        if (label != RISCVASIDControlMakePool) {
            current_syscall_error.type = seL4_IllegalOperation;

            return EXCEPTION_SYSCALL_ERROR;
        }

        if (length < 2 || extraCaps.excaprefs[0] == ((void *)0)
                || extraCaps.excaprefs[1] == ((void *)0)) {
            current_syscall_error.type = seL4_TruncatedMessage;
            return EXCEPTION_SYSCALL_ERROR;
        }

        index = getSyscallArg(0, buffer);
        depth = getSyscallArg(1, buffer);
        parentSlot = extraCaps.excaprefs[0];
        untyped = parentSlot->cap;
        root = extraCaps.excaprefs[1]->cap;

        /* Find first free pool */
        for (i = 0; i < (1ul << (asidHighBits)) && riscvKSASIDTable[i]; i++);

        if (i == (1ul << (asidHighBits))) {
            /* no unallocated pool is found */
            current_syscall_error.type = seL4_DeleteFirst;

            return EXCEPTION_SYSCALL_ERROR;
        }

        asid_base = i << asidLowBits;

        if (cap_get_capType(untyped) != cap_untyped_cap ||
                cap_untyped_cap_get_capBlockSize(untyped) != 12 ||
                cap_untyped_cap_get_capIsDevice(untyped)) {
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 1;

            return EXCEPTION_SYSCALL_ERROR;
        }

        status = ensureNoChildren(parentSlot);
        if (status != EXCEPTION_NONE) {
            return status;
        }

        frame = ((word_t *)(cap_untyped_cap_get_capPtr(untyped)));

        lu_ret = lookupTargetSlot(root, index, depth);
        if (lu_ret.status != EXCEPTION_NONE) {
            return lu_ret.status;
        }
        destSlot = lu_ret.slot;

        status = ensureEmptySlot(destSlot);
        if (status != EXCEPTION_NONE) {
            return status;
        }

        setThreadState(ksCurThread, ThreadState_Restart);
        return performASIDControlInvocation(frame, destSlot, parentSlot, asid_base);
    }

    case cap_asid_pool_cap: {
        cap_t vspaceCap;
        cte_t* vspaceCapSlot;
        asid_pool_t* pool;
        word_t i;
        asid_t asid;

        if (label != RISCVASIDPoolAssign) {
            current_syscall_error.type = seL4_IllegalOperation;

            return EXCEPTION_SYSCALL_ERROR;
        }
        if (extraCaps.excaprefs[0] == ((void *)0)) {
            current_syscall_error.type = seL4_TruncatedMessage;

            return EXCEPTION_SYSCALL_ERROR;
        }

        vspaceCapSlot = extraCaps.excaprefs[0];
        vspaceCap = vspaceCapSlot->cap;

        if (cap_page_table_cap_get_capPTMappedASID(vspaceCap) != asidInvalid) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1139, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("RISCVASIDPool: Invalid vspace root."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 1;

            return EXCEPTION_SYSCALL_ERROR;
        }

        pool = riscvKSASIDTable[cap_asid_pool_cap_get_capASIDBase(cap) >> asidLowBits];
        if (!pool) {
            current_syscall_error.type = seL4_FailedLookup;
            current_syscall_error.failedLookupWasSource = false;
            current_lookup_fault = lookup_fault_invalid_root_new();
            return EXCEPTION_SYSCALL_ERROR;
        }

        if (pool != ((asid_pool_t*)cap_asid_pool_cap_get_capASIDPool(cap))) {
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 0;
            return EXCEPTION_SYSCALL_ERROR;
        }

        /* Find first free ASID */
        asid = cap_asid_pool_cap_get_capASIDBase(cap);
        for (i = 0; i < (1ul << (asidLowBits)) && (asid + i == 0 || pool->array[i]); i++);

        if (i == (1ul << (asidLowBits))) {
            current_syscall_error.type = seL4_DeleteFirst;

            return EXCEPTION_SYSCALL_ERROR;
        }

        asid += i;

        setThreadState(ksCurThread, ThreadState_Restart);
        return performASIDPoolInvocation(asid, pool, vspaceCapSlot);
    }
    default:
        _fail("Invalid arch cap type", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c", 1176, __func__);
    }
}

exception_t
performPageTableInvocationMap(cap_t cap, cte_t *ctSlot,
                              pte_t pte, pte_t *ptSlot)
{
    ctSlot->cap = cap;
    *ptSlot = pte;
    sfence();

    return EXCEPTION_NONE;
}

exception_t
performPageTableInvocationUnmap(cap_t cap, cte_t *ctSlot)
{
    if (cap_page_table_cap_get_capPTIsMapped(cap)) {
        pte_t *pt = ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(cap)));
        unmapPageTable(
            cap_page_table_cap_get_capPTMappedASID(cap),
            cap_page_table_cap_get_capPTMappedAddress(cap),
            pt
        );
        clearMemory((void *)pt, 12);
    }
    cap_page_table_cap_ptr_set_capPTIsMapped(&(ctSlot->cap), 0);

    return EXCEPTION_NONE;
}

static exception_t
performPageGetAddress(void *vbase_ptr)
{
    paddr_t capFBasePtr;

    /* Get the physical address of this frame. */
    capFBasePtr = addrFromPPtr(vbase_ptr);

    /* return it in the first message register */
    setRegister(ksCurThread, msgRegisters[0], capFBasePtr);
    setRegister(ksCurThread, msgInfoRegister,
                wordFromMessageInfo(seL4_MessageInfo_new(0, 0, 0, 1)));

    return EXCEPTION_NONE;
}

static exception_t updatePTE(pte_t pte, pte_t *base)
{
    *base = pte;
    sfence();
    return EXCEPTION_NONE;
}

exception_t performPageInvocationMapPTE(cap_t cap, cte_t *ctSlot,
                                        pte_t pte, pte_t *base)
{
    ctSlot->cap = cap;
    return updatePTE(pte, base);
}

exception_t
performPageInvocationRemapPTE(pte_t pte, pte_t *base)
{
    return updatePTE(pte, base);
}

exception_t
performPageInvocationUnmap(cap_t cap, cte_t *ctSlot)
{

    if (cap_frame_cap_get_capFMappedASID(cap) != asidInvalid) {
        unmapPage(cap_frame_cap_get_capFSize(cap),
                  cap_frame_cap_get_capFMappedASID(cap),
                  cap_frame_cap_get_capFMappedAddress(cap),
                  cap_frame_cap_get_capFBasePtr(cap)
                 );
    }
    ctSlot->cap = cap_frame_cap_set_capFMappedAddress(ctSlot->cap, 0);
    ctSlot->cap = cap_frame_cap_set_capFMappedASID(ctSlot->cap, asidInvalid);
    return EXCEPTION_NONE;
}


void
Arch_userStackTrace(tcb_t *tptr)
{
    cap_t threadRoot = (((cte_t *)((word_t)(tptr)&~((1ul << (10))-1ul)))+(tcbVTable))->cap;
    if (!isValidVTableRoot(threadRoot)) {
        kprintf("Invalid vspace\n");
        return;
    }

    word_t sp = getRegister(tptr, SP);
    if (!(!((sp) & ((1ul << (3))-1ul)))) {
        kprintf("SP %p not aligned", (void *) sp);
        return;
    }

    pte_t *vspace_root = ((pte_t *)((pptr_t)cap_get_capPtr(threadRoot)));
    for (int i = 0; i < 16; i++) {
        word_t address = sp + (i * sizeof(word_t));
        lookupPTSlot_ret_t ret = lookupPTSlot(vspace_root, address);
        if (pte_ptr_get_valid(ret.ptSlot) && !isPTEPageTable(ret.ptSlot)) {
            pptr_t pptr = (pptr_t) (getPPtrFromHWPTE(ret.ptSlot));
            word_t *value = (word_t*) ((word_t)pptr + (address & ((1ul << (ret.ptBitsLeft))-1ul)));
            kprintf("0x%lx: 0x%lx\n", (long) address, (long) *value);
        } else {
            kprintf("0x%lx: INVALID\n", (long) address);
        }
    }
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/capdl.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/capdl.c" 2



# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/capdl.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/capdl.c" 2

void capDL(void)
{
    _fail("capDL support not implemented", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/capdl.c", 21, __func__);
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/hardware.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/hardware.c" 2

word_t __attribute__((__pure__))
getRestartPC(tcb_t *thread)
{
    return getRegister(thread, SEPC);
}

void
setNextPC(tcb_t *thread, word_t v)
{
    setRegister(thread, NEXTPC, v);
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/io.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/io.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/io.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/io.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/devices.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/io.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/io.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/sbi.h" 1
/* Copyright (c) 2010-2017, The Regents of the University of California
 * (Regents).  All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Regents nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
 * SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
 * HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

/* This file is copied from RISC-V tools/linux project, it might change for
 * new spec releases.
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/io.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/traps.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/io.c" 2

static inline void print_format_cause(int cause_num)
{
    switch (cause_num) {
    case RISCVInstructionMisaligned:
        kprintf("Instruction address misaligned\n");
        break;
    case RISCVInstructionAccessFault:
        kprintf("Instruction access fault\n");
        break;
    case RISCVInstructionIllegal:
        kprintf("Illegal instruction\n");
        break;
    case RISCVBreakpoint:
        kprintf("Breakpoint\n");
        break;
    case RISCVLoadAccessFault:
        kprintf("Load access fault\n");
        break;
    case RISCVAddressMisaligned:
        kprintf("AMO address misaligned\n");
        break;
    case RISCVStoreAccessFault:
        kprintf("Store/AMO access fault\n");
        break;
    case RISCVEnvCall:
        kprintf("Environment call\n");
        break;
    case RISCVInstructionPageFault:
        kprintf("Instruction page fault\n");
        break;
    case RISCVLoadPageFault:
        kprintf("Load page fault\n");
        break;
    case RISCVStorePageFault:
        kprintf("Store page fault\n");
        break;
    default:
        kprintf("Reserved cause %d\n", cause_num);
        break;
    }
}

void handle_exception(void)
{
    word_t scause = read_scause();

    /* handleVMFaultEvent
     * */
    switch (scause) {
    case RISCVInstructionAccessFault:
    case RISCVLoadAccessFault:
    case RISCVStoreAccessFault:
    case RISCVInstructionPageFault:
    case RISCVLoadPageFault:
    case RISCVStorePageFault:
        handleVMFaultEvent(scause);
        break;
    case RISCVInstructionIllegal:
        handleUserLevelFault(0, 0);

        break;
    default:
        print_format_cause(read_scause());
        kprintf("sepc = %p\n", (void*)(word_t)read_sepc());
        kprintf("sbadaddr = %p\n", (void*)(word_t)read_sbadaddr());
        kprintf("sstatus = %p\n", (void*)(word_t)read_sstatus());
        kprintf("Halt!\n");

        kprintf("Register Context Dump \n");

        register word_t __attribute__((unused)) thread_context __asm__("t0");
        for (int i = 0; i < 32; i++) {
            kprintf("x%d = %p\n", i, (void*) * (((word_t *) thread_context) + i));
        }

        halt();

    }
}


void
putConsoleChar(unsigned char c)
{
    sbi_console_putchar(c);
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/registerset.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/registerset.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/registerset.c" 2

const register_t msgRegisters[] = {
    a2, a3, a4, a5
};

const register_t frameRegisters[] = {
    SEPC, ra, sp, gp, tp, t0, t1, t2, s0, s1, a0, a1, a2, a3, a4, a5, a6
};

const register_t gpRegisters[] = {

};
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/model/statedata.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * Copyright 2018, DornerWorks
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_DORNERWORKS_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * Copyright 2018, DornerWorks
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_DORNERWORKS_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/model/statedata.c" 2

/* The top level asid mapping table */
asid_pool_t *riscvKSASIDTable[(1ul << (asidHighBits))];

/* Kernel Page Tables */
pte_t kernel_root_pageTable[(1ul << (9))] __attribute__((__aligned__((1ul << (12))))) __attribute__((__section__(".bss.aligned")));
pte_t kernel_root_level2_pageTable[(1ul << (9))] __attribute__((__aligned__((1ul << (12))))) __attribute__((__section__(".bss.aligned")));

pte_t kernel_image_level2_pt[(1ul << (9))] __attribute__((__aligned__((1ul << (12))))) __attribute__((__section__(".bss.aligned")));
pte_t kernel_image_level3_pt[(1ul << (9))] __attribute__((__aligned__((1ul << (12))))) __attribute__((__section__(".bss.aligned")));
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/interrupt.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/interrupt.c" 2

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/interrupt.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/interrupt.c" 2

exception_t
Arch_checkIRQ(word_t irq)
{
    return EXCEPTION_SYSCALL_ERROR;
}

exception_t
Arch_decodeIRQControlInvocation(word_t invLabel, word_t length,
                                cte_t *srcSlot, extra_caps_t excaps,
                                word_t *buffer)
{
    current_syscall_error.type = seL4_IllegalOperation;
    return EXCEPTION_SYSCALL_ERROR;
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * Copyright 2018, DornerWorks
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_DORNERWORKS_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/objecttype.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c" 2

deriveCap_ret_t
Arch_deriveCap(cte_t *slot, cap_t cap)
{
    deriveCap_ret_t ret;

    switch (cap_get_capType(cap)) {

    case cap_page_table_cap:
        if (cap_page_table_cap_get_capPTIsMapped(cap)) {
            ret.cap = cap;
            ret.status = EXCEPTION_NONE;
        } else {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 39, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Deriving an unmapped PT cap"); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_IllegalOperation;
            ret.cap = cap_null_cap_new();
            ret.status = EXCEPTION_SYSCALL_ERROR;
        }
        return ret;

    case cap_frame_cap:
        cap = cap_frame_cap_set_capFMappedAddress(cap, 0);
        ret.cap = cap_frame_cap_set_capFMappedASID(cap, asidInvalid);
        ret.status = EXCEPTION_NONE;
        return ret;

    case cap_asid_control_cap:
    case cap_asid_pool_cap:
        ret.cap = cap;
        ret.status = EXCEPTION_NONE;
        return ret;

    default:
        /* This assert has no equivalent in haskell,
         * as the options are restricted by type */
        _fail("Invalid arch cap type", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c", 61, __func__);
    }
}

cap_t __attribute__((__const__))
Arch_updateCapData(bool_t preserve, word_t data, cap_t cap)
{
    return cap;
}

cap_t __attribute__((__const__))
Arch_maskCapRights(seL4_CapRights_t cap_rights_mask, cap_t cap)
{
    if (cap_get_capType(cap) == cap_frame_cap) {
        vm_rights_t vm_rights;

        vm_rights = vmRightsFromWord(cap_frame_cap_get_capFVMRights(cap));
        vm_rights = maskVMRights(vm_rights, cap_rights_mask);
        return cap_frame_cap_set_capFVMRights(cap, wordFromVMRights(vm_rights));
    } else {
        return cap;
    }
}

finaliseCap_ret_t
Arch_finaliseCap(cap_t cap, bool_t final)
{
    finaliseCap_ret_t fc_ret;

    switch (cap_get_capType(cap)) {
    case cap_frame_cap:

        if (cap_frame_cap_get_capFMappedASID(cap)) {
            unmapPage(cap_frame_cap_get_capFSize(cap),
                      cap_frame_cap_get_capFMappedASID(cap),
                      cap_frame_cap_get_capFMappedAddress(cap),
                      cap_frame_cap_get_capFBasePtr(cap));
        }
        break;
    case cap_page_table_cap:
        if (final) {
            asid_t asid = cap_page_table_cap_get_capPTMappedASID(cap);
            if (asid != asidInvalid) {
                findVSpaceForASID_ret_t find_ret = findVSpaceForASID(asid);
                pte_t *pte = ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(cap)));
                if (find_ret.status == EXCEPTION_NONE && find_ret.vspace_root == pte) {
                    deleteASID(cap_page_table_cap_get_capPTMappedASID(cap), pte);
                } else if (cap_page_table_cap_get_capPTIsMapped(cap)) {
                    unmapPageTable(asid, cap_page_table_cap_get_capPTMappedAddress(cap), pte);
                }
            }
        }
        break;
    case cap_asid_pool_cap:
        if (final) {
            deleteASIDPool(
                cap_asid_pool_cap_get_capASIDBase(cap),
                ((asid_pool_t*)cap_asid_pool_cap_get_capASIDPool(cap))
            );
        }
        break;
    case cap_asid_control_cap:
        break;
    }
    fc_ret.remainder = cap_null_cap_new();
    fc_ret.cleanupInfo = cap_null_cap_new();
    return fc_ret;
}

bool_t __attribute__((__const__))
Arch_sameRegionAs(cap_t cap_a, cap_t cap_b)
{
    switch (cap_get_capType(cap_a)) {
    case cap_frame_cap:
        if (cap_get_capType(cap_b) == cap_frame_cap) {
            word_t botA, botB, topA, topB;
            botA = cap_frame_cap_get_capFBasePtr(cap_a);
            botB = cap_frame_cap_get_capFBasePtr(cap_b);
            topA = botA + ((1ul << (pageBitsForSize(cap_frame_cap_get_capFSize(cap_a))))-1ul);
            topB = botB + ((1ul << (pageBitsForSize(cap_frame_cap_get_capFSize(cap_b))))-1ul) ;
            return ((botA <= botB) && (topA >= topB) && (botB <= topB));
        }
        break;

    case cap_page_table_cap:
        if (cap_get_capType(cap_b) == cap_page_table_cap) {
            return cap_page_table_cap_get_capPTBasePtr(cap_a) ==
                   cap_page_table_cap_get_capPTBasePtr(cap_b);
        }
        break;
    case cap_asid_control_cap:
        if (cap_get_capType(cap_b) == cap_asid_control_cap) {
            return true;
        }
        break;

    case cap_asid_pool_cap:
        if (cap_get_capType(cap_b) == cap_asid_pool_cap) {
            return cap_asid_pool_cap_get_capASIDPool(cap_a) ==
                   cap_asid_pool_cap_get_capASIDPool(cap_b);
        }
        break;
    }

    return false;
}


bool_t __attribute__((__const__))
Arch_sameObjectAs(cap_t cap_a, cap_t cap_b)
{
    if ((cap_get_capType(cap_a) == cap_frame_cap) &&
            (cap_get_capType(cap_b) == cap_frame_cap)) {
        return ((cap_frame_cap_get_capFBasePtr(cap_a) ==
                 cap_frame_cap_get_capFBasePtr(cap_b)) &&
                (cap_frame_cap_get_capFSize(cap_a) ==
                 cap_frame_cap_get_capFSize(cap_b)) &&
                ((cap_frame_cap_get_capFIsDevice(cap_a) == 0) ==
                 (cap_frame_cap_get_capFIsDevice(cap_b) == 0)));
    }
    return Arch_sameRegionAs(cap_a, cap_b);
}

word_t
Arch_getObjectSize(word_t t)
{
    switch (t) {
    case seL4_RISCV_4K_Page:
    case seL4_RISCV_PageTableObject:
        return 12;
    case seL4_RISCV_Mega_Page:
        return 21;

    case seL4_RISCV_Giga_Page:
        return 30;





    default:
        _fail("Invalid object type", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c", 202, __func__);
        return 0;
    }
}

cap_t Arch_createObject(object_t t, void *regionBase, int userSize, bool_t
                        deviceMemory)
{
    switch (t) {
    case seL4_RISCV_4K_Page:
        return cap_frame_cap_new(
                   asidInvalid, /* capFMappedASID       */
                   (word_t) regionBase, /* capFBasePtr          */
                   RISCV_4K_Page, /* capFSize             */
                   wordFromVMRights(VMReadWrite), /* capFVMRights         */
                   deviceMemory, /* capFIsDevice         */
                   0 /* capFMappedAddress    */
               );

    case seL4_RISCV_Mega_Page: {
        return cap_frame_cap_new(
                   asidInvalid, /* capFMappedASID       */
                   (word_t) regionBase, /* capFBasePtr          */
                   RISCV_Mega_Page, /* capFSize             */
                   wordFromVMRights(VMReadWrite), /* capFVMRights         */
                   deviceMemory, /* capFIsDevice         */
                   0 /* capFMappedAddress    */
               );
    }


    case seL4_RISCV_Giga_Page: {
        return cap_frame_cap_new(
                   asidInvalid, /* capFMappedASID       */
                   (word_t) regionBase, /* capFBasePtr          */
                   RISCV_Giga_Page, /* capFSize             */
                   wordFromVMRights(VMReadWrite), /* capFVMRights         */
                   deviceMemory, /* capFIsDevice         */
                   0 /* capFMappedAddress    */
               );
    }


    case seL4_RISCV_PageTableObject:
        return cap_page_table_cap_new(
                   asidInvalid, /* capPTMappedASID    */
                   (word_t)regionBase, /* capPTBasePtr       */
                   0, /* capPTIsMapped      */
                   0 /* capPTMappedAddress */
               );

    default:
        /*
         * This is a conflation of the haskell error: "Arch.createNewCaps
         * got an API type" and the case where an invalid object type is
         * passed (which is impossible in haskell).
         */
        _fail("Arch_createObject got an API type or invalid object type", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c", 259, __func__);
    }
}

exception_t
Arch_decodeInvocation(
    word_t label,
    unsigned int length,
    cptr_t cptr,
    cte_t *slot,
    cap_t cap,
    extra_caps_t extraCaps,
    bool_t call,
    word_t *buffer
)
{
    return decodeRISCVMMUInvocation(label, length, cptr, slot, cap, extraCaps, buffer);
}

void
Arch_prepareThreadDelete(tcb_t *thread)
{
    /* No action required on RISCV. */
}

bool_t
Arch_isFrameType(word_t t)
{
    switch (t) {




    case seL4_RISCV_Giga_Page:

    case seL4_RISCV_Mega_Page:
    case seL4_RISCV_4K_Page:
        return true;
    default:
        return false;
    }
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/tcb.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/tcb.c" 2

word_t __attribute__((__const__))
Arch_decodeTransfer(word_t flags)
{
    return 0;
}

exception_t __attribute__((__const__))
Arch_performTransfer(word_t arch, tcb_t *tcb_src, tcb_t *tcb_dest)
{
    return EXCEPTION_NONE;
}

void
Arch_setTCBIPCBuffer(tcb_t *thread, word_t bufferAddr)
{
    setRegister(thread, tp, bufferAddr);
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/assert.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/assert.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/assert.c" 2



void _fail(
    const char* s,
    const char* file,
    unsigned int line,
    const char* function)
{
    kprintf("seL4 called fail at %s:%u in function %s, saying \"%s\"\n", file, line, function, s)





     ;
    halt();
}

void _assert_fail(
    const char* assertion,
    const char* file,
    unsigned int line,
    const char* function)
{
    kprintf("seL4 failed assertion '%s' at %s:%u in function %s\n", assertion, file, line, function)




           ;
    halt();
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/benchmark/benchmark_track.c"
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/benchmark/benchmark_track.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 1
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/benchmark/benchmark_track.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/benchmark/benchmark_track.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/benchmark/benchmark_utilisation.c"
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/benchmark/benchmark_utilisation.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation.h" 1
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/benchmark/benchmark_utilisation.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/fastpath/fastpath.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/fastpath/fastpath.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/fastpath/fastpath.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */




/* Fastpath cap lookup.  Returns a null_cap on failure. */
static inline cap_t __attribute__((always_inline))
lookup_fp(cap_t cap, cptr_t cptr)
{
    word_t cptr2;
    cte_t *slot;
    word_t guardBits, radixBits, bits;
    word_t radix, capGuard;

    bits = 0;

    if (__builtin_expect(!!(! cap_capType_equals(cap, cap_cnode_cap)), 0)) {
        return cap_null_cap_new();
    }

    do {
        guardBits = cap_cnode_cap_get_capCNodeGuardSize(cap);
        radixBits = cap_cnode_cap_get_capCNodeRadix(cap);
        cptr2 = cptr << bits;

        capGuard = cap_cnode_cap_get_capCNodeGuard(cap);

        /* Check the guard. Depth mismatch check is deferred.
           The 32MinusGuardSize encoding contains an exception
           when the guard is 0, when 32MinusGuardSize will be
           reported as 0 also. In this case we skip the check */
        if (__builtin_expect(!!(guardBits), 1) && __builtin_expect(!!(cptr2 >> ((1ul << (6)) - guardBits) != capGuard), 0)) {
            return cap_null_cap_new();
        }

        radix = cptr2 << guardBits >> ((1ul << (6)) - radixBits);
        slot = ((cte_t *)(cap_cnode_cap_get_capCNodePtr(cap))) + radix;

        cap = slot->cap;
        bits += guardBits + radixBits;

    } while (__builtin_expect(!!(bits < (1ul << (6)) && cap_capType_equals(cap, cap_cnode_cap)), 0));

    if (__builtin_expect(!!(bits > (1ul << (6))), 0)) {
        /* Depth mismatch. We've overshot wordBits bits. The lookup we've done is
           safe, but wouldn't be allowed by the slowpath. */
        return cap_null_cap_new();
    }

    return cap;
}
/* make sure the fastpath functions conform with structure_*.bf */
static inline void
thread_state_ptr_set_tsType_np(thread_state_t *ts_ptr, word_t tsType)
{
    ts_ptr->words[0] = tsType;
}

static inline void
thread_state_ptr_mset_blockingObject_tsType(thread_state_t *ts_ptr,
                                            word_t ep_ref,
                                            word_t tsType)
{
    ts_ptr->words[0] = ep_ref | tsType;
}

static inline void
cap_reply_cap_ptr_new_np(cap_t *cap_ptr, word_t capReplyMaster,
                         word_t capTCBPtr)
{

    cap_ptr->words[1] = (word_t)capTCBPtr;
    cap_ptr->words[0] = (capReplyMaster) | ((word_t)cap_reply_cap << 59);




}

static inline void
endpoint_ptr_mset_epQueue_tail_state(endpoint_t *ep_ptr, word_t epQueue_tail,
                                     word_t state)
{
    ep_ptr->words[0] = epQueue_tail | state;
}

static inline void
endpoint_ptr_set_epQueue_head_np(endpoint_t *ep_ptr, word_t epQueue_head)
{
    ep_ptr->words[1] = epQueue_head;
}

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 102 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/fastpath/fastpath.h" 2
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/fastpath/fastpath.c" 2




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_utilisation.h" 1
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/fastpath/fastpath.c" 2

void



fastpath_call(word_t cptr, word_t msgInfo)
{
    seL4_MessageInfo_t info;
    cap_t ep_cap;
    endpoint_t *ep_ptr;
    word_t length;
    tcb_t *dest;
    word_t badge;
    cte_t *replySlot, *callerSlot;
    cap_t newVTable;
    vspace_root_t *cap_pd;
    pde_t stored_hw_asid;
    word_t fault_type;
    dom_t dom;

    /* Get message info, length, and fault type. */
    info = messageInfoFromWord_raw(msgInfo);
    length = seL4_MessageInfo_get_length(info);
    fault_type = seL4_Fault_get_seL4_FaultType(ksCurThread->tcbFault);

    /* Check there's no extra caps, the length is ok and there's no
     * saved fault. */
    if (__builtin_expect(!!(fastpath_mi_check(msgInfo) || fault_type != seL4_Fault_NullFault), 0)
                                                    ) {
        slowpath(SysCall);
    }

    /* Lookup the cap */
    ep_cap = lookup_fp((((cte_t *)((word_t)(ksCurThread)&~((1ul << (10))-1ul)))+(tcbCTable))->cap, cptr);

    /* Check it's an endpoint */
    if (__builtin_expect(!!(!cap_capType_equals(ep_cap, cap_endpoint_cap) || !cap_endpoint_cap_get_capCanSend(ep_cap)), 0)
                                                          ) {
        slowpath(SysCall);
    }

    /* Get the endpoint address */
    ep_ptr = ((endpoint_t *)(cap_endpoint_cap_get_capEPPtr(ep_cap)));

    /* Get the destination thread, which is only going to be valid
     * if the endpoint is valid. */
    dest = ((tcb_t *)(endpoint_ptr_get_epQueue_head(ep_ptr)));

    /* Check that there's a thread waiting to receive */
    if (__builtin_expect(!!(endpoint_ptr_get_state(ep_ptr) != EPState_Recv), 0)) {
        slowpath(SysCall);
    }

    /* ensure we are not single stepping the destination in ia32 */






    /* Get destination thread.*/
    newVTable = (((cte_t *)((word_t)(dest)&~((1ul << (10))-1ul)))+(tcbVTable))->cap;

    /* Get vspace root. */
    cap_pd = ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(newVTable)));

    /* Ensure that the destination has a valid VTable. */
    if (__builtin_expect(!!(! isValidVTableRoot_fp(newVTable)), 0)) {
        slowpath(SysCall);
    }
# 104 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/fastpath/fastpath.c"
    /* Get HW ASID */
    stored_hw_asid.words[0] = cap_page_table_cap_get_capPTMappedASID(newVTable);


    /* let gcc optimise this out for 1 domain */
    dom = maxDom ? ksCurDomain : 0;
    /* ensure only the idle thread or lower prio threads are present in the scheduler */
    if (__builtin_expect(!!(dest->tcbPriority < ksCurThread->tcbPriority), 1) &&
            !isHighestPrio(dom, dest->tcbPriority)) {
        slowpath(SysCall);
    }

    /* Ensure that the endpoint has has grant rights so that we can
     * create the reply cap */
    if (__builtin_expect(!!(!cap_endpoint_cap_get_capCanGrant(ep_cap)), 0)) {
        slowpath(SysCall);
    }







    /* Ensure the original caller is in the current domain and can be scheduled directly. */
    if (__builtin_expect(!!(dest->tcbDomain != ksCurDomain && maxDom), 0)) {
        slowpath(SysCall);
    }
# 140 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/fastpath/fastpath.c"
    /*
     * --- POINT OF NO RETURN ---
     *
     * At this stage, we have committed to performing the IPC.
     */





    /* Dequeue the destination. */
    endpoint_ptr_set_epQueue_head_np(ep_ptr, ((word_t)(dest->tcbEPNext)));
    if (__builtin_expect(!!(dest->tcbEPNext), 0)) {
        dest->tcbEPNext->tcbEPPrev = ((void *)0);
    } else {
        endpoint_ptr_mset_epQueue_tail_state(ep_ptr, 0, EPState_Idle);
    }

    badge = cap_endpoint_cap_get_capEPBadge(ep_cap);

    /* Block sender */
    thread_state_ptr_set_tsType_np(&ksCurThread->tcbState,
                                   ThreadState_BlockedOnReply);

    /* Get sender reply slot */
    replySlot = (((cte_t *)((word_t)(ksCurThread)&~((1ul << (10))-1ul)))+(tcbReply));

    /* Get dest caller slot */
    callerSlot = (((cte_t *)((word_t)(dest)&~((1ul << (10))-1ul)))+(tcbCaller));

    /* Insert reply cap */
    cap_reply_cap_ptr_new_np(&callerSlot->cap, 0, ((word_t)(ksCurThread)));
    mdb_node_ptr_set_mdbPrev_np(&callerSlot->cteMDBNode, ((word_t)(replySlot)));
    mdb_node_ptr_mset_mdbNext_mdbRevocable_mdbFirstBadged(
        &replySlot->cteMDBNode, ((word_t)(callerSlot)), 1, 1);

    fastpath_copy_mrs (length, ksCurThread, dest);

    /* Dest thread is set Running, but not queued. */
    thread_state_ptr_set_tsType_np(&dest->tcbState,
                                   ThreadState_Running);
    switchToThread_fp(dest, cap_pd, stored_hw_asid);

    msgInfo = wordFromMessageInfo(seL4_MessageInfo_set_capsUnwrapped(info, 0));

    fastpath_restore(badge, msgInfo, ksCurThread);
}

void
fastpath_reply_recv(word_t cptr, word_t msgInfo)
{
    seL4_MessageInfo_t info;
    cap_t ep_cap;
    endpoint_t *ep_ptr;
    word_t length;
    cte_t *callerSlot;
    cap_t callerCap;
    tcb_t *caller;
    word_t badge;
    tcb_t *endpointTail;
    word_t fault_type;

    cap_t newVTable;
    vspace_root_t *cap_pd;
    pde_t stored_hw_asid;
    dom_t dom;

    /* Get message info and length */
    info = messageInfoFromWord_raw(msgInfo);
    length = seL4_MessageInfo_get_length(info);
    fault_type = seL4_Fault_get_seL4_FaultType(ksCurThread->tcbFault);

    /* Check there's no extra caps, the length is ok and there's no
     * saved fault. */
    if (__builtin_expect(!!(fastpath_mi_check(msgInfo) || fault_type != seL4_Fault_NullFault), 0)
                                                    ) {
        slowpath(SysReplyRecv);
    }

    /* Lookup the cap */
    ep_cap = lookup_fp((((cte_t *)((word_t)(ksCurThread)&~((1ul << (10))-1ul)))+(tcbCTable))->cap,
                       cptr);

    /* Check it's an endpoint */
    if (__builtin_expect(!!(!cap_capType_equals(ep_cap, cap_endpoint_cap) || !cap_endpoint_cap_get_capCanReceive(ep_cap)), 0)
                                                             ) {
        slowpath(SysReplyRecv);
    }

    /* Check there is nothing waiting on the notification */
    if (ksCurThread->tcbBoundNotification &&
            notification_ptr_get_state(ksCurThread->tcbBoundNotification) == NtfnState_Active) {
        slowpath(SysReplyRecv);
    }

    /* Get the endpoint address */
    ep_ptr = ((endpoint_t *)(cap_endpoint_cap_get_capEPPtr(ep_cap)));

    /* Check that there's not a thread waiting to send */
    if (__builtin_expect(!!(endpoint_ptr_get_state(ep_ptr) == EPState_Send), 0)) {
        slowpath(SysReplyRecv);
    }

    /* Only reply if the reply cap is valid. */
    callerSlot = (((cte_t *)((word_t)(ksCurThread)&~((1ul << (10))-1ul)))+(tcbCaller));
    callerCap = callerSlot->cap;
    if (__builtin_expect(!!(!fastpath_reply_cap_check(callerCap)), 0)) {
        slowpath(SysReplyRecv);
    }

    /* Determine who the caller is. */
    caller = ((tcb_t *)(cap_reply_cap_get_capTCBPtr(callerCap)));

    /* ensure we are not single stepping the caller in ia32 */






    /* Check that the caller has not faulted, in which case a fault
       reply is generated instead. */
    fault_type = seL4_Fault_get_seL4_FaultType(caller->tcbFault);
    if (__builtin_expect(!!(fault_type != seL4_Fault_NullFault), 0)) {
        slowpath(SysReplyRecv);
    }

    /* Get destination thread.*/
    newVTable = (((cte_t *)((word_t)(caller)&~((1ul << (10))-1ul)))+(tcbVTable))->cap;

    /* Get vspace root. */
    cap_pd = ((pte_t *)(cap_page_table_cap_get_capPTBasePtr(newVTable)));

    /* Ensure that the destination has a valid MMU. */
    if (__builtin_expect(!!(! isValidVTableRoot_fp (newVTable)), 0)) {
        slowpath(SysReplyRecv);
    }
# 292 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/fastpath/fastpath.c"
    stored_hw_asid.words[0] = cap_page_table_cap_get_capPTMappedASID(newVTable);


    /* Ensure the original caller can be scheduled directly. */
    dom = maxDom ? ksCurDomain : 0;
    if (__builtin_expect(!!(!isHighestPrio(dom, caller->tcbPriority)), 0)) {
        slowpath(SysReplyRecv);
    }
# 308 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/fastpath/fastpath.c"
    /* Ensure the original caller is in the current domain and can be scheduled directly. */
    if (__builtin_expect(!!(caller->tcbDomain != ksCurDomain && maxDom), 0)) {
        slowpath(SysReplyRecv);
    }
# 320 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/fastpath/fastpath.c"
    /*
     * --- POINT OF NO RETURN ---
     *
     * At this stage, we have committed to performing the IPC.
     */





    /* Set thread state to BlockedOnReceive */
    thread_state_ptr_mset_blockingObject_tsType(
        &ksCurThread->tcbState, (word_t)ep_ptr, ThreadState_BlockedOnReceive);

    /* Place the thread in the endpoint queue */
    endpointTail = ((tcb_t *)(endpoint_ptr_get_epQueue_tail(ep_ptr)));
    if (__builtin_expect(!!(!endpointTail), 1)) {
        ksCurThread->tcbEPPrev = ((void *)0);
        ksCurThread->tcbEPNext = ((void *)0);

        /* Set head/tail of queue and endpoint state. */
        endpoint_ptr_set_epQueue_head_np(ep_ptr, ((word_t)(ksCurThread)));
        endpoint_ptr_mset_epQueue_tail_state(ep_ptr, ((word_t)(ksCurThread)),
                                             EPState_Recv);
    } else {
        /* Append current thread onto the queue. */
        endpointTail->tcbEPNext = ksCurThread;
        ksCurThread->tcbEPPrev = endpointTail;
        ksCurThread->tcbEPNext = ((void *)0);

        /* Update tail of queue. */
        endpoint_ptr_mset_epQueue_tail_state(ep_ptr, ((word_t)(ksCurThread)),
                                             EPState_Recv);
    }

    /* Delete the reply cap. */
    mdb_node_ptr_mset_mdbNext_mdbRevocable_mdbFirstBadged(
        &((cte_t *)(mdb_node_get_mdbPrev(callerSlot->cteMDBNode)))->cteMDBNode,
        0, 1, 1);
    callerSlot->cap = cap_null_cap_new();
    callerSlot->cteMDBNode = mdb_node_new(0, false, false, 0);

    /* I know there's no fault, so straight to the transfer. */

    /* Replies don't have a badge. */
    badge = 0;

    fastpath_copy_mrs (length, ksCurThread, caller);

    /* Dest thread is set Running, but not queued. */
    thread_state_ptr_set_tsType_np(&caller->tcbState,
                                   ThreadState_Running);
    switchToThread_fp(caller, cap_pd, stored_hw_asid);

    msgInfo = wordFromMessageInfo(seL4_MessageInfo_set_capsUnwrapped(info, 0));

    fastpath_restore(badge, msgInfo, ksCurThread);
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/inlines.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/inlines.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/inlines.c" 2

lookup_fault_t current_lookup_fault;
seL4_Fault_t current_fault;
syscall_error_t current_syscall_error;
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/boot.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/boot.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/vspace.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c" 2

/* (node-local) state accessed only during bootstrapping */

ndks_boot_t ndks_boot __attribute__((__section__(".boot.data")));

__attribute__((__section__(".boot.text"))) bool_t
insert_region(region_t reg)
{
    word_t i;

    if(!(reg.start <= reg.end)) _assert_fail("reg.start <= reg.end", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c", 33, __FUNCTION__);
    if (is_reg_empty(reg)) {
        return true;
    }
    for (i = 0; i < 16; i++) {
        if (is_reg_empty(ndks_boot.freemem[i])) {
            ndks_boot.freemem[i] = reg;
            return true;
        }
    }
    return false;
}

__attribute__((__section__(".boot.text"))) static inline word_t
reg_size(region_t reg)
{
    return reg.end - reg.start;
}

__attribute__((__section__(".boot.text"))) pptr_t
alloc_region(word_t size_bits)
{
    word_t i;
    word_t reg_index = 0; /* gcc cannot work out that this will not be used uninitialized */
    region_t reg = (region_t){ .start = 0, .end = 0 };
    region_t rem_small = (region_t){ .start = 0, .end = 0 };
    region_t rem_large = (region_t){ .start = 0, .end = 0 };
    region_t new_reg;
    region_t new_rem_small;
    region_t new_rem_large;

    /* Search for a freemem region that will be the best fit for an allocation. We favour allocations
     * that are aligned to either end of the region. If an allocation must split a region we favour
     * an unbalanced split. In both cases we attempt to use the smallest region possible. In general
     * this means we aim to make the size of the smallest remaining region smaller (ideally zero)
     * followed by making the size of the largest remaining region smaller */

    for (i = 0; i < 16; i++) {
        /* Determine whether placing the region at the start or the end will create a bigger left over region */
        if ((((((ndks_boot.freemem[i].start) - 1ul) >> (size_bits)) + 1ul) << (size_bits)) - ndks_boot.freemem[i].start <
                ndks_boot.freemem[i].end - (((ndks_boot.freemem[i].end) >> (size_bits)) << (size_bits))) {
            new_reg.start = (((((ndks_boot.freemem[i].start) - 1ul) >> (size_bits)) + 1ul) << (size_bits));
            new_reg.end = new_reg.start + (1ul << (size_bits));
        } else {
            new_reg.end = (((ndks_boot.freemem[i].end) >> (size_bits)) << (size_bits));
            new_reg.start = new_reg.end - (1ul << (size_bits));
        }
        if (new_reg.end > new_reg.start &&
                new_reg.start >= ndks_boot.freemem[i].start &&
                new_reg.end <= ndks_boot.freemem[i].end) {
            if (new_reg.start - ndks_boot.freemem[i].start < ndks_boot.freemem[i].end - new_reg.end) {
                new_rem_small.start = ndks_boot.freemem[i].start;
                new_rem_small.end = new_reg.start;
                new_rem_large.start = new_reg.end;
                new_rem_large.end = ndks_boot.freemem[i].end;
            } else {
                new_rem_large.start = ndks_boot.freemem[i].start;
                new_rem_large.end = new_reg.start;
                new_rem_small.start = new_reg.end;
                new_rem_small.end = ndks_boot.freemem[i].end;
            }
            if ( is_reg_empty(reg) ||
                    (reg_size(new_rem_small) < reg_size(rem_small)) ||
                    (reg_size(new_rem_small) == reg_size(rem_small) && reg_size(new_rem_large) < reg_size(rem_large)) ) {
                reg = new_reg;
                rem_small = new_rem_small;
                rem_large = new_rem_large;
                reg_index = i;
            }
        }
    }
    if (is_reg_empty(reg)) {
        kprintf("Kernel init failing: not enough memory\n");
        return 0;
    }
    /* Remove the region in question */
    ndks_boot.freemem[reg_index] = (region_t){ .start = 0, .end = 0 };
    /* Add the remaining regions in largest to smallest order */
    insert_region(rem_large);
    if (!insert_region(rem_small)) {
        kprintf("alloc_region(): wasted 0x%lx bytes due to alignment, try to increase MAX_NUM_FREEMEM_REG\n", (word_t)(rem_small.end - rem_small.start))
                                                         ;
    }
    return reg.start;
}

__attribute__((__section__(".boot.text"))) void
write_slot(slot_ptr_t slot_ptr, cap_t cap)
{
    slot_ptr->cap = cap;

    slot_ptr->cteMDBNode = mdb_node_new(0, false, false, 0);
    mdb_node_ptr_set_mdbRevocable (&slot_ptr->cteMDBNode, true);
    mdb_node_ptr_set_mdbFirstBadged(&slot_ptr->cteMDBNode, true);
}

/* Our root CNode needs to be able to fit all the initial caps and not
 * cover all of memory.
 */
typedef int __assert_failed_root_cnode_size_valid[(12 < 32 - 5 && (1U << 12) >= seL4_NumInitialCaps) ? 1 : -1];



__attribute__((__section__(".boot.text"))) cap_t
create_root_cnode(void)
{
    pptr_t pptr;
    cap_t cap;

    /* write the number of root CNode slots to global state */
    ndks_boot.slot_pos_max = (1ul << (12));

    /* create an empty root CNode */
    pptr = alloc_region(12 + 5);
    if (!pptr) {
        kprintf("Kernel init failing: could not create root cnode\n");
        return cap_null_cap_new();
    }
    memzero(((cte_t *)(pptr)), 1U << (12 + 5));
    cap =
        cap_cnode_cap_new(
            12, /* radix      */
            (1ul << (6)) - 12, /* guard size */
            0, /* guard      */
            pptr /* pptr       */
        );

    /* write the root CNode cap into the root CNode */
    write_slot((((slot_ptr_t)(pptr)) + (seL4_CapInitThreadCNode)), cap);

    return cap;
}

typedef int __assert_failed_irq_cnode_size[((1ul << (12 - 5)) > maxIRQ) ? 1 : -1];

__attribute__((__section__(".boot.text"))) bool_t
create_irq_cnode(void)
{
    pptr_t pptr;
    /* create an empty IRQ CNode */
    pptr = alloc_region(12);
    if (!pptr) {
        kprintf("Kernel init failing: could not create irq cnode\n");
        return false;
    }
    memzero((void*)pptr, 1 << 12);
    intStateIRQNode = (cte_t*)pptr;
    return true;
}

/* Check domain scheduler assumptions. */
typedef int __assert_failed_num_domains_valid[(1 >= 1 && 1 <= 256) ? 1 : -1];

typedef int __assert_failed_num_priorities_valid[(256 >= 1 && 256 <= 256) ? 1 : -1];


__attribute__((__section__(".boot.text"))) void
create_domain_cap(cap_t root_cnode_cap)
{
    cap_t cap;
    word_t i;

    /* Check domain scheduler assumptions. */
    if(!(ksDomScheduleLength > 0)) _assert_fail("ksDomScheduleLength > 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c", 196, __FUNCTION__);
    for (i = 0; i < ksDomScheduleLength; i++) {
        if(!(ksDomSchedule[i].domain < 1)) _assert_fail("ksDomSchedule[i].domain < CONFIG_NUM_DOMAINS", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c", 198, __FUNCTION__);
        if(!(ksDomSchedule[i].length > 0)) _assert_fail("ksDomSchedule[i].length > 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c", 199, __FUNCTION__);
    }

    cap = cap_domain_cap_new();
    write_slot((((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapDomain)), cap);
}


__attribute__((__section__(".boot.text"))) cap_t
create_ipcbuf_frame(cap_t root_cnode_cap, cap_t pd_cap, vptr_t vptr)
{
    cap_t cap;
    pptr_t pptr;

    /* allocate the IPC buffer frame */
    pptr = alloc_region(12);
    if (!pptr) {
        kprintf("Kernel init failing: could not create ipc buffer frame\n");
        return cap_null_cap_new();
    }
    clearMemory((void*)pptr, 12);

    /* create a cap of it and write it into the root CNode */
    cap = create_mapped_it_frame_cap(pd_cap, pptr, vptr, 1, false, false);
    write_slot((((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapInitThreadIPCBuffer)), cap);

    return cap;
}

__attribute__((__section__(".boot.text"))) void
create_bi_frame_cap(
    cap_t root_cnode_cap,
    cap_t pd_cap,
    pptr_t pptr,
    vptr_t vptr
)
{
    cap_t cap;

    /* create a cap of it and write it into the root CNode */
    cap = create_mapped_it_frame_cap(pd_cap, pptr, vptr, 1, false, false);
    write_slot((((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapBootInfoFrame)), cap);
}

__attribute__((__section__(".boot.text"))) region_t
allocate_extra_bi_region(word_t extra_size)
{
    /* determine power of 2 size of this region. avoid calling clzl on 0 though */
    if (extra_size == 0) {
        /* return any valid address to correspond to the zero allocation */
        return (region_t) {
            0x1000, 0x1000
        };
    }
    word_t size_bits = 64 - 1 - clzl((((((extra_size) - 1ul) >> (12)) + 1ul) << (12)));
    pptr_t pptr = alloc_region(size_bits);
    if (!pptr) {
        kprintf("Kernel init failed: could not allocate extra bootinfo region size bits %lu\n", size_bits);
        return (region_t){ .start = 0, .end = 0 };
    }

    clearMemory((void*)pptr, size_bits);
    ndks_boot.bi_frame->extraLen = (1ul << (size_bits));

    return (region_t) {
        pptr, pptr + (1ul << (size_bits))
    };
}

__attribute__((__section__(".boot.text"))) pptr_t
allocate_bi_frame(
    node_id_t node_id,
    word_t num_nodes,
    vptr_t ipcbuf_vptr
)
{
    pptr_t pptr;

    /* create the bootinfo frame object */
    pptr = alloc_region(12);
    if (!pptr) {
        kprintf("Kernel init failed: could not allocate bootinfo frame\n");
        return 0;
    }
    clearMemory((void*)pptr, 12);

    /* initialise bootinfo-related global state */
    ndks_boot.bi_frame = ((seL4_BootInfo*)(pptr));
    ndks_boot.slot_pos_cur = seL4_NumInitialCaps;

    ((seL4_BootInfo*)(pptr))->nodeID = node_id;
    ((seL4_BootInfo*)(pptr))->numNodes = num_nodes;
    ((seL4_BootInfo*)(pptr))->numIOPTLevels = 0;
    ((seL4_BootInfo*)(pptr))->ipcBuffer = (seL4_IPCBuffer *) ipcbuf_vptr;
    ((seL4_BootInfo*)(pptr))->initThreadCNodeSizeBits = 12;
    ((seL4_BootInfo*)(pptr))->initThreadDomain = ksDomSchedule[ksDomScheduleIdx].domain;
    ((seL4_BootInfo*)(pptr))->extraLen = 0;
    ((seL4_BootInfo*)(pptr))->extraBIPages.start = 0;
    ((seL4_BootInfo*)(pptr))->extraBIPages.end = 0;

    return pptr;
}

__attribute__((__section__(".boot.text"))) bool_t
provide_cap(cap_t root_cnode_cap, cap_t cap)
{
    if (ndks_boot.slot_pos_cur >= ndks_boot.slot_pos_max) {
        kprintf("Kernel init failed: ran out of cap slots\n");
        return false;
    }
    write_slot((((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (ndks_boot.slot_pos_cur)), cap);
    ndks_boot.slot_pos_cur++;
    return true;
}

__attribute__((__section__(".boot.text"))) create_frames_of_region_ret_t
create_frames_of_region(
    cap_t root_cnode_cap,
    cap_t pd_cap,
    region_t reg,
    bool_t do_map,
    sword_t pv_offset
)
{
    pptr_t f;
    cap_t frame_cap;
    seL4_SlotPos slot_pos_before;
    seL4_SlotPos slot_pos_after;

    slot_pos_before = ndks_boot.slot_pos_cur;

    for (f = reg.start; f < reg.end; f += (1ul << (12))) {
        if (do_map) {
            frame_cap = create_mapped_it_frame_cap(pd_cap, f, addrFromPPtr((void*)(f - pv_offset)), 1, false, true);
        } else {
            frame_cap = create_unmapped_it_frame_cap(f, false);
        }
        if (!provide_cap(root_cnode_cap, frame_cap))
            return (create_frames_of_region_ret_t) {
            (seL4_SlotRegion){ .start = 0, .end = 0 }, false
        };
    }

    slot_pos_after = ndks_boot.slot_pos_cur;

    return (create_frames_of_region_ret_t) {
        (seL4_SlotRegion) { slot_pos_before, slot_pos_after }, true
    };
}

__attribute__((__section__(".boot.text"))) cap_t
create_it_asid_pool(cap_t root_cnode_cap)
{
    pptr_t ap_pptr;
    cap_t ap_cap;

    /* create ASID pool */
    ap_pptr = alloc_region(12);
    if (!ap_pptr) {
        kprintf("Kernel init failed: failed to create initial thread asid pool\n");
        return cap_null_cap_new();
    }
    memzero(((asid_pool_t*)ap_pptr), 1 << 12);
    ap_cap = cap_asid_pool_cap_new(1 >> asidLowBits, ap_pptr);
    write_slot((((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapInitThreadASIDPool)), ap_cap);

    /* create ASID control cap */
    write_slot(
        (((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapASIDControl)),
        cap_asid_control_cap_new()
    );

    return ap_cap;
}

__attribute__((__section__(".boot.text"))) bool_t
create_idle_thread(void)
{
    pptr_t pptr;




        pptr = alloc_region(10);
        if (!pptr) {
            kprintf("Kernel init failed: Unable to allocate tcb for idle thread\n");
            return false;
        }
        memzero((void *)pptr, 1 << 10);
        ksIdleThread = ((tcb_t *)(pptr + (1ul << ((10 - 1)))));
        configureIdleThread(ksIdleThread);

        setThreadName(ksIdleThread, "idle_thread");

        ;



    return true;
}

__attribute__((__section__(".boot.text"))) tcb_t *
create_initial_thread(
    cap_t root_cnode_cap,
    cap_t it_pd_cap,
    vptr_t ui_v_entry,
    vptr_t bi_frame_vptr,
    vptr_t ipcbuf_vptr,
    cap_t ipcbuf_cap
)
{
    pptr_t pptr;
    cap_t cap;
    tcb_t* tcb;
    deriveCap_ret_t dc_ret;

    /* allocate TCB */
    pptr = alloc_region(10);
    if (!pptr) {
        kprintf("Kernel init failed: Unable to allocate tcb for initial thread\n");
        return ((void *)0);
    }
    memzero((void*)pptr, 1 << 10);
    tcb = ((tcb_t *)(pptr + (1ul << ((10 - 1)))));
    tcb->tcbTimeSlice = 5;
    Arch_initContext(&tcb->tcbArch.tcbContext);

    /* derive a copy of the IPC buffer cap for inserting */
    dc_ret = deriveCap((((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapInitThreadIPCBuffer)), ipcbuf_cap);
    if (dc_ret.status != EXCEPTION_NONE) {
        kprintf("Failed to derive copy of IPC Buffer\n");
        return ((void *)0);
    }

    /* initialise TCB (corresponds directly to abstract specification) */
    cteInsert(
        root_cnode_cap,
        (((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapInitThreadCNode)),
        (((slot_ptr_t)(pptr)) + (tcbCTable))
    );
    cteInsert(
        it_pd_cap,
        (((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapInitThreadVSpace)),
        (((slot_ptr_t)(pptr)) + (tcbVTable))
    );
    cteInsert(
        dc_ret.cap,
        (((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapInitThreadIPCBuffer)),
        (((slot_ptr_t)(pptr)) + (tcbBuffer))
    );
    tcb->tcbIPCBuffer = ipcbuf_vptr;

    /* Set the root thread's IPC buffer */
    Arch_setTCBIPCBuffer(tcb, ipcbuf_vptr);

    setRegister(tcb, capRegister, bi_frame_vptr);
    setNextPC(tcb, ui_v_entry);

    /* initialise TCB */
    tcb->tcbPriority = seL4_MaxPrio;
    tcb->tcbMCP = seL4_MaxPrio;
    setupReplyMaster(tcb);
    setThreadState(tcb, ThreadState_Running);

    ksCurDomain = ksDomSchedule[ksDomScheduleIdx].domain;
    ksDomainTime = ksDomSchedule[ksDomScheduleIdx].length;
    if(!(ksCurDomain < 1 && ksDomainTime > 0)) _assert_fail("ksCurDomain < CONFIG_NUM_DOMAINS && ksDomainTime > 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c", 465, __FUNCTION__);

    ;

    /* create initial thread's TCB cap */
    cap = cap_thread_cap_new(((word_t)(tcb)));
    write_slot((((slot_ptr_t)((pptr_t)cap_get_capPtr(root_cnode_cap))) + (seL4_CapInitThreadTCB)), cap);


    setThreadName(tcb, "rootserver");


    return tcb;
}

__attribute__((__section__(".boot.text"))) void
init_core_state(tcb_t *scheduler_action)
{




    /* add initial threads to the debug queue */
    ksDebugTCBs = ((void *)0);
    if (scheduler_action != ((tcb_t*)0) &&
            scheduler_action != ((tcb_t*) 1)) {
        tcbDebugAppend(scheduler_action);
    }
    tcbDebugAppend(ksIdleThread);

    ksSchedulerAction = scheduler_action;
    ksCurThread = ksIdleThread;
}

__attribute__((__section__(".boot.text"))) static bool_t
provide_untyped_cap(
    cap_t root_cnode_cap,
    bool_t device_memory,
    pptr_t pptr,
    word_t size_bits,
    seL4_SlotPos first_untyped_slot
)
{
    bool_t ret;
    cap_t ut_cap;
    word_t i = ndks_boot.slot_pos_cur - first_untyped_slot;
    if (i < 230) {
        ndks_boot.bi_frame->untypedList[i] = (seL4_UntypedDesc) {
            addrFromPPtr((void*)pptr), 0, 0, size_bits, device_memory
        };
        ut_cap = cap_untyped_cap_new(((1ul << ((size_bits) - 4))),
                                     device_memory, size_bits, pptr);
        ret = provide_cap(root_cnode_cap, ut_cap);
    } else {
        kprintf("Kernel init: Too many untyped regions for boot info\n");
        ret = true;
    }
    return ret;
}

__attribute__((__section__(".boot.text"))) bool_t
create_untypeds_for_region(
    cap_t root_cnode_cap,
    bool_t device_memory,
    region_t reg,
    seL4_SlotPos first_untyped_slot
)
{
    word_t align_bits;
    word_t size_bits;

    while (!is_reg_empty(reg)) {
        /* Determine the maximum size of the region */
        size_bits = 64 - 1 - clzl(reg.end - reg.start);

        /* Determine the alignment of the region */
        if (reg.start != 0) {
            align_bits = ctzl(reg.start);
        } else {
            align_bits = size_bits;
        }
        /* Reduce size bits to align if needed */
        if (align_bits < size_bits) {
            size_bits = align_bits;
        }
        if (size_bits > 47) {
            size_bits = 47;
        }

        if (size_bits >= 4) {
            if (!provide_untyped_cap(root_cnode_cap, device_memory, reg.start, size_bits, first_untyped_slot)) {
                return false;
            }
        }
        reg.start += (1ul << (size_bits));
    }
    return true;
}

__attribute__((__section__(".boot.text"))) bool_t
create_kernel_untypeds(cap_t root_cnode_cap, region_t boot_mem_reuse_reg, seL4_SlotPos first_untyped_slot)
{
    word_t i;
    region_t reg;

    /* if boot_mem_reuse_reg is not empty, we can create UT objs from boot code/data frames */
    if (!create_untypeds_for_region(root_cnode_cap, false, boot_mem_reuse_reg, first_untyped_slot)) {
        return false;
    }

    /* convert remaining freemem into UT objects and provide the caps */
    for (i = 0; i < 16; i++) {
        reg = ndks_boot.freemem[i];
        ndks_boot.freemem[i] = (region_t){ .start = 0, .end = 0 };
        if (!create_untypeds_for_region(root_cnode_cap, false, reg, first_untyped_slot)) {
            return false;
        }
    }

    return true;
}

__attribute__((__section__(".boot.text"))) void
bi_finalise(void)
{
    seL4_SlotPos slot_pos_start = ndks_boot.slot_pos_cur;
    seL4_SlotPos slot_pos_end = ndks_boot.slot_pos_max;
    ndks_boot.bi_frame->empty = (seL4_SlotRegion) {
        slot_pos_start, slot_pos_end
    };
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/cspace.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/cspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/cspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/cspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/cspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/cspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/cspace.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/cspace.c" 2

lookupCap_ret_t
lookupCap(tcb_t *thread, cptr_t cPtr)
{
    lookupSlot_raw_ret_t lu_ret;
    lookupCap_ret_t ret;

    lu_ret = lookupSlot(thread, cPtr);
    if (__builtin_expect(!!(lu_ret.status != EXCEPTION_NONE), 0)) {
        ret.status = lu_ret.status;
        ret.cap = cap_null_cap_new();
        return ret;
    }

    ret.status = EXCEPTION_NONE;
    ret.cap = lu_ret.slot->cap;
    return ret;
}

lookupCapAndSlot_ret_t
lookupCapAndSlot(tcb_t *thread, cptr_t cPtr)
{
    lookupSlot_raw_ret_t lu_ret;
    lookupCapAndSlot_ret_t ret;

    lu_ret = lookupSlot(thread, cPtr);
    if (__builtin_expect(!!(lu_ret.status != EXCEPTION_NONE), 0)) {
        ret.status = lu_ret.status;
        ret.slot = ((void *)0);
        ret.cap = cap_null_cap_new();
        return ret;
    }

    ret.status = EXCEPTION_NONE;
    ret.slot = lu_ret.slot;
    ret.cap = lu_ret.slot->cap;
    return ret;
}

lookupSlot_raw_ret_t
lookupSlot(tcb_t *thread, cptr_t capptr)
{
    cap_t threadRoot;
    resolveAddressBits_ret_t res_ret;
    lookupSlot_raw_ret_t ret;

    threadRoot = (((cte_t *)((word_t)(thread)&~((1ul << (10))-1ul)))+(tcbCTable))->cap;
    res_ret = resolveAddressBits(threadRoot, capptr, (1ul << (6)));

    ret.status = res_ret.status;
    ret.slot = res_ret.slot;
    return ret;
}

lookupSlot_ret_t
lookupSlotForCNodeOp(bool_t isSource, cap_t root, cptr_t capptr,
                     word_t depth)
{
    resolveAddressBits_ret_t res_ret;
    lookupSlot_ret_t ret;

    ret.slot = ((void *)0);

    if (__builtin_expect(!!(cap_get_capType(root) != cap_cnode_cap), 0)) {
        current_syscall_error.type = seL4_FailedLookup;
        current_syscall_error.failedLookupWasSource = isSource;
        current_lookup_fault = lookup_fault_invalid_root_new();
        ret.status = EXCEPTION_SYSCALL_ERROR;
        return ret;
    }

    if (__builtin_expect(!!(depth < 1 || depth > (1ul << (6))), 0)) {
        current_syscall_error.type = seL4_RangeError;
        current_syscall_error.rangeErrorMin = 1;
        current_syscall_error.rangeErrorMax = (1ul << (6));
        ret.status = EXCEPTION_SYSCALL_ERROR;
        return ret;
    }
    res_ret = resolveAddressBits(root, capptr, depth);
    if (__builtin_expect(!!(res_ret.status != EXCEPTION_NONE), 0)) {
        current_syscall_error.type = seL4_FailedLookup;
        current_syscall_error.failedLookupWasSource = isSource;
        /* current_lookup_fault will have been set by resolveAddressBits */
        ret.status = EXCEPTION_SYSCALL_ERROR;
        return ret;
    }

    if (__builtin_expect(!!(res_ret.bitsRemaining != 0), 0)) {
        current_syscall_error.type = seL4_FailedLookup;
        current_syscall_error.failedLookupWasSource = isSource;
        current_lookup_fault =
            lookup_fault_depth_mismatch_new(0, res_ret.bitsRemaining);
        ret.status = EXCEPTION_SYSCALL_ERROR;
        return ret;
    }

    ret.slot = res_ret.slot;
    ret.status = EXCEPTION_NONE;
    return ret;
}

lookupSlot_ret_t
lookupSourceSlot(cap_t root, cptr_t capptr, word_t depth)
{
    return lookupSlotForCNodeOp(true, root, capptr, depth);
}

lookupSlot_ret_t
lookupTargetSlot(cap_t root, cptr_t capptr, word_t depth)
{
    return lookupSlotForCNodeOp(false, root, capptr, depth);
}

lookupSlot_ret_t
lookupPivotSlot(cap_t root, cptr_t capptr, word_t depth)
{
    return lookupSlotForCNodeOp(true, root, capptr, depth);
}

resolveAddressBits_ret_t
resolveAddressBits(cap_t nodeCap, cptr_t capptr, word_t n_bits)
{
    resolveAddressBits_ret_t ret;
    word_t radixBits, guardBits, levelBits, guard;
    word_t capGuard, offset;
    cte_t *slot;

    ret.bitsRemaining = n_bits;
    ret.slot = ((void *)0);

    if (__builtin_expect(!!(cap_get_capType(nodeCap) != cap_cnode_cap), 0)) {
        current_lookup_fault = lookup_fault_invalid_root_new();
        ret.status = EXCEPTION_LOOKUP_FAULT;
        return ret;
    }

    while (1) {
        radixBits = cap_cnode_cap_get_capCNodeRadix(nodeCap);
        guardBits = cap_cnode_cap_get_capCNodeGuardSize(nodeCap);
        levelBits = radixBits + guardBits;

        /* Haskell error: "All CNodes must resolve bits" */
        if(!(levelBits != 0)) _assert_fail("levelBits != 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/cspace.c", 160, __FUNCTION__);

        capGuard = cap_cnode_cap_get_capCNodeGuard(nodeCap);

        /* sjw --- the MASK(5) here is to avoid the case where n_bits = 32
           and guardBits = 0, as it violates the C spec to >> by more
           than 31 */

        guard = (capptr >> ((n_bits - guardBits) & ((1ul << (6))-1ul))) & ((1ul << (guardBits))-1ul);
        if (__builtin_expect(!!(guardBits > n_bits || guard != capGuard), 0)) {
            current_lookup_fault =
                lookup_fault_guard_mismatch_new(capGuard, n_bits, guardBits);
            ret.status = EXCEPTION_LOOKUP_FAULT;
            return ret;
        }

        if (__builtin_expect(!!(levelBits > n_bits), 0)) {
            current_lookup_fault =
                lookup_fault_depth_mismatch_new(levelBits, n_bits);
            ret.status = EXCEPTION_LOOKUP_FAULT;
            return ret;
        }

        offset = (capptr >> (n_bits - levelBits)) & ((1ul << (radixBits))-1ul);
        slot = ((cte_t *)(cap_cnode_cap_get_capCNodePtr(nodeCap))) + offset;

        if (__builtin_expect(!!(n_bits <= levelBits), 1)) {
            ret.status = EXCEPTION_NONE;
            ret.slot = slot;
            ret.bitsRemaining = 0;
            return ret;
        }

        /** GHOSTUPD: "(\<acute>levelBits > 0, id)" */

        n_bits -= levelBits;
        nodeCap = slot->cap;

        if (__builtin_expect(!!(cap_get_capType(nodeCap) != cap_cnode_cap), 0)) {
            ret.status = EXCEPTION_NONE;
            ret.slot = slot;
            ret.bitsRemaining = n_bits;
            return ret;
        }
    }

    ret.status = EXCEPTION_NONE;
    return ret;
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/faulthandler.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/faulthandler.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/faulthandler.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/faulthandler.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/faulthandler.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/faulthandler.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/faulthandler.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/faulthandler.c" 2

void
handleFault(tcb_t *tptr)
{
    exception_t status;
    seL4_Fault_t fault = current_fault;

    status = sendFaultIPC(tptr);
    if (status != EXCEPTION_NONE) {
        handleDoubleFault(tptr, fault);
    }
}

exception_t
sendFaultIPC(tcb_t *tptr)
{
    cptr_t handlerCPtr;
    cap_t handlerCap;
    lookupCap_ret_t lu_ret;
    lookup_fault_t original_lookup_fault;

    original_lookup_fault = current_lookup_fault;

    handlerCPtr = tptr->tcbFaultHandler;
    lu_ret = lookupCap(tptr, handlerCPtr);
    if (lu_ret.status != EXCEPTION_NONE) {
        current_fault = seL4_Fault_CapFault_new(handlerCPtr, false);
        return EXCEPTION_FAULT;
    }
    handlerCap = lu_ret.cap;

    if (cap_get_capType(handlerCap) == cap_endpoint_cap &&
            cap_endpoint_cap_get_capCanSend(handlerCap) &&
            cap_endpoint_cap_get_capCanGrant(handlerCap)) {
        tptr->tcbFault = current_fault;
        if (seL4_Fault_get_seL4_FaultType(current_fault) == seL4_Fault_CapFault) {
            tptr->tcbLookupFailure = original_lookup_fault;
        }
        sendIPC(true, false,
                cap_endpoint_cap_get_capEPBadge(handlerCap),
                true, tptr,
                ((endpoint_t *)(cap_endpoint_cap_get_capEPPtr(handlerCap))));

        return EXCEPTION_NONE;
    } else {
        current_fault = seL4_Fault_CapFault_new(handlerCPtr, false);
        current_lookup_fault = lookup_fault_missing_capability_new(0);

        return EXCEPTION_FAULT;
    }
}


static void
print_fault(seL4_Fault_t f)
{
    switch (seL4_Fault_get_seL4_FaultType(f)) {
    case seL4_Fault_NullFault:
        kprintf("null fault");
        break;
    case seL4_Fault_CapFault:
        kprintf("cap fault in %s phase at address %p", seL4_Fault_CapFault_get_inReceivePhase(f) ? "receive" : "send", (void *)seL4_Fault_CapFault_get_address(f))

                                                          ;
        break;
    case seL4_Fault_VMFault:
        kprintf("vm fault on %s at address %p with status %p", seL4_Fault_VMFault_get_instructionFault(f) ? "code" : "data", (void *)seL4_Fault_VMFault_get_address(f), (void *)seL4_Fault_VMFault_get_FSR(f))


                                                     ;
        break;
    case seL4_Fault_UnknownSyscall:
        kprintf("unknown syscall %p", (void *)seL4_Fault_UnknownSyscall_get_syscallNumber(f))
                                                                      ;
        break;
    case seL4_Fault_UserException:
        kprintf("user exception %p code %p", (void *)seL4_Fault_UserException_get_number(f), (void *)seL4_Fault_UserException_get_code(f))

                                                            ;
        break;
    default:
        kprintf("unknown fault");
        break;
    }
}


/* The second fault, ex2, is stored in the global current_fault */
void
handleDoubleFault(tcb_t *tptr, seL4_Fault_t ex1)
{

    seL4_Fault_t ex2 = current_fault;
    kprintf("Caught ");
    print_fault(ex2);
    kprintf("\nwhile trying to handle:\n");
    print_fault(ex1);


    kprintf("\nin thread %p \"%s\" ", tptr, tptr->tcbName);


    kprintf("at address %p\n", (void*)getRestartPC(tptr));
    kprintf("With stack:\n");
    Arch_userStackTrace(tptr);


    setThreadState(tptr, ThreadState_Inactive);
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/stack.c"
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/stack.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/stack.c" 2

__attribute__((externally_visible)) __attribute__((__aligned__(8)))
char kernel_stack_alloc[1][(1ul << (12))];
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/faults.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/thread.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c" 2

static seL4_MessageInfo_t
transferCaps(seL4_MessageInfo_t info, extra_caps_t caps,
             endpoint_t *endpoint, tcb_t *receiver,
             word_t *receiveBuffer);

static inline bool_t __attribute__((__pure__))
isBlocked(const tcb_t *thread)
{
    switch (thread_state_get_tsType(thread->tcbState)) {
    case ThreadState_Inactive:
    case ThreadState_BlockedOnReceive:
    case ThreadState_BlockedOnSend:
    case ThreadState_BlockedOnNotification:
    case ThreadState_BlockedOnReply:
        return true;

    default:
        return false;
    }
}

__attribute__((__section__(".boot.text"))) void
configureIdleThread(tcb_t *tcb)
{
    Arch_configureIdleThread(tcb);
    setThreadState(tcb, ThreadState_IdleThreadState);
}

void
activateThread(void)
{
    switch (thread_state_get_tsType(ksCurThread->tcbState)) {
    case ThreadState_Running:



        break;

    case ThreadState_Restart: {
        word_t pc;

        pc = getRestartPC(ksCurThread);
        setNextPC(ksCurThread, pc);
        setThreadState(ksCurThread, ThreadState_Running);
        break;
    }

    case ThreadState_IdleThreadState:
        Arch_activateIdleThread(ksCurThread);
        break;

    default:
        _fail("Current thread is blocked", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c", 77, __func__);
    }
}

void
suspend(tcb_t *target)
{
    cancelIPC(target);
    setThreadState(target, ThreadState_Inactive);
    tcbSchedDequeue(target);
}

void
restart(tcb_t *target)
{
    if (isBlocked(target)) {
        cancelIPC(target);
        setupReplyMaster(target);
        setThreadState(target, ThreadState_Restart);
        tcbSchedEnqueue(target);
        possibleSwitchTo(target);
    }
}

void
doIPCTransfer(tcb_t *sender, endpoint_t *endpoint, word_t badge,
              bool_t grant, tcb_t *receiver)
{
    void *receiveBuffer, *sendBuffer;

    receiveBuffer = lookupIPCBuffer(true, receiver);

    if (__builtin_expect(!!(seL4_Fault_get_seL4_FaultType(sender->tcbFault) == seL4_Fault_NullFault), 1)) {
        sendBuffer = lookupIPCBuffer(false, sender);
        doNormalTransfer(sender, sendBuffer, endpoint, badge, grant,
                         receiver, receiveBuffer);
    } else {
        doFaultTransfer(badge, sender, receiver, receiveBuffer);
    }
}

void
doReplyTransfer(tcb_t *sender, tcb_t *receiver, cte_t *slot)
{
    if(!(thread_state_get_tsType(receiver->tcbState) == ThreadState_BlockedOnReply)) _assert_fail("thread_state_get_tsType(receiver->tcbState) == ThreadState_BlockedOnReply",
                                     "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c"
# 121 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c"
    ,
                                     122
# 121 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c"
    , __FUNCTION__)
                                      ;

    if (__builtin_expect(!!(seL4_Fault_get_seL4_FaultType(receiver->tcbFault) == seL4_Fault_NullFault), 1)) {
        doIPCTransfer(sender, ((void *)0), 0, true, receiver);
        /** GHOSTUPD: "(True, gs_set_assn cteDeleteOne_'proc (ucast cap_reply_cap))" */
        cteDeleteOne(slot);
        setThreadState(receiver, ThreadState_Running);
        possibleSwitchTo(receiver);
    } else {
        bool_t restart;

        /** GHOSTUPD: "(True, gs_set_assn cteDeleteOne_'proc (ucast cap_reply_cap))" */
        cteDeleteOne(slot);
        restart = handleFaultReply(receiver, sender);
        receiver->tcbFault = seL4_Fault_NullFault_new();
        if (restart) {
            setThreadState(receiver, ThreadState_Restart);
            possibleSwitchTo(receiver);
        } else {
            setThreadState(receiver, ThreadState_Inactive);
        }
    }
}

void
doNormalTransfer(tcb_t *sender, word_t *sendBuffer, endpoint_t *endpoint,
                 word_t badge, bool_t canGrant, tcb_t *receiver,
                 word_t *receiveBuffer)
{
    word_t msgTransferred;
    seL4_MessageInfo_t tag;
    exception_t status;
    extra_caps_t caps;

    tag = messageInfoFromWord(getRegister(sender, msgInfoRegister));

    if (canGrant) {
        status = lookupExtraCaps(sender, sendBuffer, tag);
        caps = current_extra_caps;
        if (__builtin_expect(!!(status != EXCEPTION_NONE), 0)) {
            caps.excaprefs[0] = ((void *)0);
        }
    } else {
        caps = current_extra_caps;
        caps.excaprefs[0] = ((void *)0);
    }

    msgTransferred = copyMRs(sender, sendBuffer, receiver, receiveBuffer,
                             seL4_MessageInfo_get_length(tag));

    tag = transferCaps(tag, caps, endpoint, receiver, receiveBuffer);

    tag = seL4_MessageInfo_set_length(tag, msgTransferred);
    setRegister(receiver, msgInfoRegister, wordFromMessageInfo(tag));
    setRegister(receiver, badgeRegister, badge);
}

void
doFaultTransfer(word_t badge, tcb_t *sender, tcb_t *receiver,
                word_t *receiverIPCBuffer)
{
    word_t sent;
    seL4_MessageInfo_t msgInfo;

    sent = setMRs_fault(sender, receiver, receiverIPCBuffer);
    msgInfo = seL4_MessageInfo_new(
                  seL4_Fault_get_seL4_FaultType(sender->tcbFault), 0, 0, sent);
    setRegister(receiver, msgInfoRegister, wordFromMessageInfo(msgInfo));
    setRegister(receiver, badgeRegister, badge);
}

/* Like getReceiveSlots, this is specialised for single-cap transfer. */
static seL4_MessageInfo_t
transferCaps(seL4_MessageInfo_t info, extra_caps_t caps,
             endpoint_t *endpoint, tcb_t *receiver,
             word_t *receiveBuffer)
{
    word_t i;
    cte_t* destSlot;

    info = seL4_MessageInfo_set_extraCaps(info, 0);
    info = seL4_MessageInfo_set_capsUnwrapped(info, 0);

    if (__builtin_expect(!!(!caps.excaprefs[0] || !receiveBuffer), 1)) {
        return info;
    }

    destSlot = getReceiveSlots(receiver, receiveBuffer);

    for (i = 0; i < ((1ul<<(seL4_MsgExtraCapBits))-1) && caps.excaprefs[i] != ((void *)0); i++) {
        cte_t *slot = caps.excaprefs[i];
        cap_t cap = slot->cap;

        if (cap_get_capType(cap) == cap_endpoint_cap &&
                ((endpoint_t *)(cap_endpoint_cap_get_capEPPtr(cap))) == endpoint) {
            /* If this is a cap to the endpoint on which the message was sent,
             * only transfer the badge, not the cap. */
            setExtraBadge(receiveBuffer,
                          cap_endpoint_cap_get_capEPBadge(cap), i);

            info = seL4_MessageInfo_set_capsUnwrapped(info,
                                                      seL4_MessageInfo_get_capsUnwrapped(info) | (1 << i));

        } else {
            deriveCap_ret_t dc_ret;

            if (!destSlot) {
                break;
            }

            dc_ret = deriveCap(slot, cap);

            if (dc_ret.status != EXCEPTION_NONE) {
                break;
            }
            if (cap_get_capType(dc_ret.cap) == cap_null_cap) {
                break;
            }

            cteInsert(dc_ret.cap, slot, destSlot);

            destSlot = ((void *)0);
        }
    }

    return seL4_MessageInfo_set_extraCaps(info, i);
}

void doNBRecvFailedTransfer(tcb_t *thread)
{
    /* Set the badge register to 0 to indicate there was no message */
    setRegister(thread, badgeRegister, 0);
}

static void
nextDomain(void)
{
    ksDomScheduleIdx++;
    if (ksDomScheduleIdx >= ksDomScheduleLength) {
        ksDomScheduleIdx = 0;
    }
    ksWorkUnitsCompleted = 0;
    ksCurDomain = ksDomSchedule[ksDomScheduleIdx].domain;
    ksDomainTime = ksDomSchedule[ksDomScheduleIdx].length;
}

static void
scheduleChooseNewThread(void)
{
    if (ksDomainTime == 0) {
        nextDomain();
    }
    chooseThread();
}

void
schedule(void)
{
    if (ksSchedulerAction != ((tcb_t*)0)) {
        bool_t was_runnable;
        if (isRunnable(ksCurThread)) {
            was_runnable = true;
            tcbSchedEnqueue(ksCurThread);
        } else {
            was_runnable = false;
        }

        if (ksSchedulerAction == ((tcb_t*) 1)) {
            scheduleChooseNewThread();
        } else {
            tcb_t *candidate = ksSchedulerAction;
            /* Avoid checking bitmap when ksCurThread is higher prio, to
             * match fast path.
             * Don't look at ksCurThread prio when it's idle, to respect
             * information flow in non-fastpath cases. */
            bool_t fastfail =
                ksCurThread == ksIdleThread
                || (candidate->tcbPriority < ksCurThread->tcbPriority);
            if (fastfail &&
                    !isHighestPrio(ksCurDomain, candidate->tcbPriority)) {
                tcbSchedEnqueue(candidate);
                /* we can't, need to reschedule */
                ksSchedulerAction = ((tcb_t*) 1);
                scheduleChooseNewThread();
            } else if (was_runnable && candidate->tcbPriority == ksCurThread->tcbPriority) {
                /* We append the candidate at the end of the scheduling queue, that way the
                 * current thread, that was enqueued at the start of the scheduling queue
                 * will get picked during chooseNewThread */
                tcbSchedAppend(candidate);
                ksSchedulerAction = ((tcb_t*) 1);
                scheduleChooseNewThread();
            } else {
                if(!(candidate != ksCurThread)) _assert_fail("candidate != NODE_STATE(ksCurThread)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c", 314, __FUNCTION__);
                switchToThread(candidate);
            }
        }
    }
    ksSchedulerAction = ((tcb_t*)0);




}

void
chooseThread(void)
{
    word_t prio;
    word_t dom;
    tcb_t *thread;

    if (1 > 1) {
        dom = ksCurDomain;
    } else {
        dom = 0;
    }

    if (__builtin_expect(!!(ksReadyQueuesL1Bitmap[dom]), 1)) {
        prio = getHighestPrio(dom);
        thread = ksReadyQueues[ready_queues_index(dom, prio)].head;
        if(!(thread)) _assert_fail("thread", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c", 342, __FUNCTION__);
        if(!(isRunnable(thread))) _assert_fail("isRunnable(thread)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c", 343, __FUNCTION__);
        switchToThread(thread);
    } else {
        switchToIdleThread();
    }
}

void
switchToThread(tcb_t *thread)
{



    Arch_switchToThread(thread);
    tcbSchedDequeue(thread);
    ksCurThread = thread;
}

void
switchToIdleThread(void)
{



    Arch_switchToIdleThread();
    ksCurThread = ksIdleThread;
}

void
setDomain(tcb_t *tptr, dom_t dom)
{
    tcbSchedDequeue(tptr);
    tptr->tcbDomain = dom;
    if (isRunnable(tptr)) {
        tcbSchedEnqueue(tptr);
    }
    if (tptr == ksCurThread) {
        rescheduleRequired();
    }
}

void
setMCPriority(tcb_t *tptr, prio_t mcp)
{
    tptr->tcbMCP = mcp;
}

void
setPriority(tcb_t *tptr, prio_t prio)
{
    tcbSchedDequeue(tptr);
    tptr->tcbPriority = prio;
    if (isRunnable(tptr)) {
        tcbSchedEnqueue(tptr);
        rescheduleRequired();
    }
}

/* Note that this thread will possibly continue at the end of this kernel
 * entry. Do not queue it yet, since a queue+unqueue operation is wasteful
 * if it will be picked. Instead, it waits in the 'ksSchedulerAction' site
 * on which the scheduler will take action. */
void
possibleSwitchTo(tcb_t* target)
{
    if (ksCurDomain != target->tcbDomain
            ) {
        tcbSchedEnqueue(target);
    } else if (ksSchedulerAction != ((tcb_t*)0)) {
        /* Too many threads want special treatment, use regular queues. */
        rescheduleRequired();
        tcbSchedEnqueue(target);
    } else {
        ksSchedulerAction = target;
    }
}

void
setThreadState(tcb_t *tptr, _thread_state_t ts)
{
    thread_state_ptr_set_tsType(&tptr->tcbState, ts);
    scheduleTCB(tptr);
}

void
scheduleTCB(tcb_t *tptr)
{
    if (tptr == ksCurThread &&
            ksSchedulerAction == ((tcb_t*)0) &&
            !isRunnable(tptr)) {
        rescheduleRequired();
    }
}

void
timerTick(void)
{
    if (__builtin_expect(!!(thread_state_get_tsType(ksCurThread->tcbState) == ThreadState_Running), 1)
                                   ) {
        if (ksCurThread->tcbTimeSlice > 1) {
            ksCurThread->tcbTimeSlice--;
        } else {
            ksCurThread->tcbTimeSlice = 5;
            tcbSchedAppend(ksCurThread);
            rescheduleRequired();
        }
    }

    if (1 > 1) {
        ksDomainTime--;
        if (ksDomainTime == 0) {
            rescheduleRequired();
        }
    }
}

void
rescheduleRequired(void)
{
    if (ksSchedulerAction != ((tcb_t*)0)
            && ksSchedulerAction != ((tcb_t*) 1)) {
        tcbSchedEnqueue(ksSchedulerAction);
    }
    ksSchedulerAction = ((tcb_t*) 1);
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/fpu.c"
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/fpu.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/fpu.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/fpu.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/fpu.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/fpu.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/fpu.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/fpu.h" 2
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/fpu.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/fpu.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/fpu.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/structures.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/fpu.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/io.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/io.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/io.c" 2



# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdarg.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/io.c" 2

void
putchar(char c)
{
    putConsoleChar(c);
    if (c == '\n') {
        putConsoleChar('\r');
    }
}

static unsigned int
print_spaces(int n)
{
    for (int i = 0; i < n; i++) {
        putchar(' ');
    }

    return n;
}

static unsigned int
print_string(const char *s)
{
    unsigned int n;

    for (n = 0; *s; s++, n++) {
        putchar(*s);
    }

    return n;
}

static unsigned long
xdiv(unsigned long x, unsigned int denom)
{
    switch (denom) {
    case 16:
        return x / 16;
    case 10:
        return x / 10;
    default:
        return 0;
    }
}

static unsigned long
xmod(unsigned long x, unsigned int denom)
{
    switch (denom) {
    case 16:
        return x % 16;
    case 10:
        return x % 10;
    default:
        return 0;
    }
}

word_t
print_unsigned_long(unsigned long x, word_t ui_base)
{
    char out[sizeof(unsigned long) * 2 + 3];
    word_t i, j;
    unsigned int d;

    /*
     * Only base 10 and 16 supported for now. We want to avoid invoking the
     * compiler's support libraries through doing arbitrary divisions.
     */
    if (ui_base != 10 && ui_base != 16) {
        return 0;
    }

    if (x == 0) {
        putchar('0');
        return 1;
    }

    for (i = 0; x; x = xdiv(x, ui_base), i++) {
        d = xmod(x, ui_base);

        if (d >= 10) {
            out[i] = 'a' + d - 10;
        } else {
            out[i] = '0' + d;
        }
    }

    for (j = i; j > 0; j--) {
        putchar(out[j - 1]);
    }

    return i;
}

/* The print_unsigned_long_long function assumes that an unsinged int
   is half the size of an unsigned long long */
typedef int __assert_failed_print_unsigned_long_long_sizes[(sizeof(unsigned int) * 2 == sizeof(unsigned long long)) ? 1 : -1];

static unsigned int
print_unsigned_long_long(unsigned long long x, unsigned int ui_base)
{
    unsigned int upper, lower;
    unsigned int n = 0;
    unsigned int mask = 0xF0000000u;
    unsigned int shifts = 0;

    /* only implemented for hex, decimal is harder without 64 bit division */
    if (ui_base != 16) {
        return 0;
    }

    /* we can't do 64 bit division so break it up into two hex numbers */
    upper = (unsigned int) (x >> 32llu);
    lower = (unsigned int) x & 0xffffffff;

    /* print first 32 bits if they exist */
    if (upper > 0) {
        n += print_unsigned_long(upper, ui_base);
        /* print leading 0s */
        while (!(mask & lower)) {
            putchar('0');
            n++;
            mask = mask >> 4;
            shifts++;
            if (shifts == 8) {
                break;
            }
        }
    }
    /* print last 32 bits */
    n += print_unsigned_long(lower, ui_base);

    return n;
}

static inline bool_t
isdigit(char c)
{
    return c >= '0' &&
           c <= '9';
}

static inline int
atoi(char c)
{
    return c - '0';
}

static int
vprintf(const char *format, va_list ap)
{
    unsigned int n;
    unsigned int formatting;
    int nspaces = 0;

    if (!format) {
        return 0;
    }

    n = 0;
    formatting = 0;
    while (*format) {
        if (formatting) {
            while (isdigit(*format)) {
                nspaces = nspaces * 10 + atoi(*format);
                format++;
                if (format == ((void *)0)) {
                    break;
                }
            }
            switch (*format) {
            case '%':
                putchar('%');
                n++;
                format++;
                break;

            case 'd': {
                int x = __builtin_va_arg(ap,int);

                if (x < 0) {
                    putchar('-');
                    n++;
                    x = -x;
                }

                n += print_unsigned_long(x, 10);
                format++;
                break;
            }

            case 'u':
                n += print_unsigned_long(__builtin_va_arg(ap,unsigned int), 10);
                format++;
                break;

            case 'x':
                n += print_unsigned_long(__builtin_va_arg(ap,unsigned int), 16);
                format++;
                break;

            case 'p': {
                unsigned long p = __builtin_va_arg(ap,unsigned long);
                if (p == 0) {
                    n += print_string("(nil)");
                } else {
                    n += print_string("0x");
                    n += print_unsigned_long(p, 16);
                }
                format++;
                break;
            }

            case 's':
                n += print_string(__builtin_va_arg(ap,char *));
                format++;
                break;

            case 'l':
                format++;
                switch (*format) {
                case 'd': {
                    long x = __builtin_va_arg(ap,long);

                    if (x < 0) {
                        putchar('-');
                        n++;
                        x = -x;
                    }

                    n += print_unsigned_long((unsigned long)x, 10);
                    format++;
                }
                break;
                case 'l':
                    if (*(format + 1) == 'x') {
                        n += print_unsigned_long_long(__builtin_va_arg(ap,unsigned long long), 16);
                    }
                    format += 2;
                    break;
                case 'u':
                    n += print_unsigned_long(__builtin_va_arg(ap,unsigned long), 10);
                    format++;
                    break;
                case 'x':
                    n += print_unsigned_long(__builtin_va_arg(ap,unsigned long), 16);
                    format++;
                    break;

                default:
                    /* format not supported */
                    return -1;
                }
                break;
            default:
                /* format not supported */
                return -1;
            }

            n += print_spaces(nspaces - n);
            nspaces = 0;
            formatting = 0;
        } else {
            switch (*format) {
            case '%':
                formatting = 1;
                format++;
                break;

            default:
                putchar(*format);
                n++;
                format++;
                break;
            }
        }
    }

    return n;
}

word_t puts(const char *s)
{
    for (; *s; s++) {
        putchar(*s);
    }
    putchar('\n');
    return 0;
}

word_t
kprintf(const char *format, ...)
{
    va_list args;
    word_t i;

    __builtin_va_start(args,format);
    i = vprintf(format, args);
    __builtin_va_end(args);
    return i;
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/registerset.c"
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/registerset.c" 2

const register_t fault_messages[][(((n_syscallMessage)>(n_exceptionMessage))?(n_syscallMessage):(n_exceptionMessage))] = {
    [MessageID_Syscall] = { [seL4_UnknownSyscall_FaultIP] = SEPC, [seL4_UnknownSyscall_SP] = SP, [seL4_UnknownSyscall_RA] = LR, [seL4_UnknownSyscall_A0] = a0, [seL4_UnknownSyscall_A1] = a1, [seL4_UnknownSyscall_A2] = a2, [seL4_UnknownSyscall_A3] = a3, [seL4_UnknownSyscall_A4] = a4, [seL4_UnknownSyscall_A5] = a5, [seL4_UnknownSyscall_A6] = a6,},
    [MessageID_Exception] = { [seL4_UserException_FaultIP] = SEPC, [seL4_UserException_SP] = SP, [seL4_UserException_Number] = a7, }
};
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/preemption.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/preemption.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/preemption.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/preemption.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/preemption.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/preemption.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/preemption.c" 2

/*
 * Possibly preempt the current thread to allow an interrupt to be handled.
 */
exception_t
preemptionPoint(void)
{
    /* Record that we have performed some work. */
    ksWorkUnitsCompleted++;

    /*
     * If we have performed a non-trivial amount of work since last time we
     * checked for preemption, and there is an interrupt pending, handle the
     * interrupt.
     *
     * We avoid checking for pending IRQs every call, as our callers tend to
     * call us in a tight loop and checking for pending IRQs can be quite slow.
     */
    if (ksWorkUnitsCompleted >= 100) {
        ksWorkUnitsCompleted = 0;
        if (isIRQPending()) {
            return EXCEPTION_PREEMPTED;
        }
    }

    return EXCEPTION_NONE;
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/smp.c"
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/smp.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/smp.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */




# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/smp.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/types.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/smp.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/model/statedata.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * Copyright 2018, DornerWorks
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_DORNERWORKS_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/smp.h" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/smp.h" 2
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/smp.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/smp.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/debug.h" 2
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/smp.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/benchmark/benchmark_track.h" 1
/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c" 2

/* Collective cpu states, including both pre core architecture dependant and independent data */
;

/* Global count of how many cpus there are */
word_t ksNumCPUs;

/* Pointer to the head of the scheduler queue for each priority */
tcb_queue_t ksReadyQueues[(1 * 256)];
word_t ksReadyQueuesL1Bitmap[1];
word_t ksReadyQueuesL2Bitmap[1][((256 + (1ul << (6)) - 1) / (1ul << (6)))];
typedef int __assert_failed_ksReadyQueuesL1BitmapBigEnough[((((256 + (1ul << (6)) - 1) / (1ul << (6))) - 1) <= (1ul << (6))) ? 1 : -1];

/* Current thread TCB pointer */
tcb_t * ksCurThread;

/* Idle thread TCB pointer */
tcb_t * ksIdleThread;

/* Values of 0 and ~0 encode ResumeCurrentThread and ChooseNewThread
 * respectively; other values encode SwitchToThread and must be valid
 * tcb pointers */
tcb_t * ksSchedulerAction;
# 52 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/statedata.c"
tcb_t * ksDebugTCBs;


/* Units of work we have completed since the last time we checked for
 * pending interrupts */
word_t ksWorkUnitsCompleted;

/* CNode containing interrupt handler endpoints */
irq_state_t intStateIRQTable[maxIRQ + 1];
cte_t *intStateIRQNode;

/* Currently active domain */
dom_t ksCurDomain;

/* Domain timeslice remaining */
word_t ksDomainTime;

/* An index into ksDomSchedule for active domain and length. */
word_t ksDomScheduleIdx;

/* Only used by lockTLBEntry */
word_t tlbLockCount = 0;


kernel_entry_t ksKernelEntry;
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/api/invocation.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

/* This header was generated by kernel/tools/invocation_header_gen.py.
 *
 * To add an invocation call number, edit libsel4/include/interfaces/sel4.xml.
 *
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/preemption.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c" 2

struct finaliseSlot_ret {
    exception_t status;
    bool_t success;
    cap_t cleanupInfo;
};
typedef struct finaliseSlot_ret finaliseSlot_ret_t;

static finaliseSlot_ret_t finaliseSlot(cte_t *slot, bool_t exposed);
static void emptySlot(cte_t *slot, cap_t cleanupInfo);
static exception_t reduceZombie(cte_t* slot, bool_t exposed);

exception_t
decodeCNodeInvocation(word_t invLabel, word_t length, cap_t cap,
                      extra_caps_t excaps, word_t *buffer)
{
    lookupSlot_ret_t lu_ret;
    cte_t *destSlot;
    word_t index, w_bits;
    exception_t status;

    /* Haskell error: "decodeCNodeInvocation: invalid cap" */
    if(!(cap_get_capType(cap) == cap_cnode_cap)) _assert_fail("cap_get_capType(cap) == cap_cnode_cap", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 50, __FUNCTION__);

    if (invLabel < CNodeRevoke || invLabel > CNodeSaveCaller) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 53, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNodeCap: Illegal Operation attempted."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (length < 2) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 59, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode operation: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }
    index = getSyscallArg(0, buffer);
    w_bits = getSyscallArg(1, buffer);

    lu_ret = lookupTargetSlot(cap, index, w_bits);
    if (lu_ret.status != EXCEPTION_NONE) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 68, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode operation: Target slot invalid."); kprintf(">>" "\033[0m" "\n"); } while (0);
        return lu_ret.status;
    }
    destSlot = lu_ret.slot;

    if (invLabel >= CNodeCopy && invLabel <= CNodeMutate) {
        cte_t *srcSlot;
        word_t srcIndex, srcDepth, capData;
        bool_t isMove;
        seL4_CapRights_t cap_rights;
        cap_t srcRoot, newCap;
        deriveCap_ret_t dc_ret;
        cap_t srcCap;

        if (length < 4 || excaps.excaprefs[0] == ((void *)0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 83, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode Copy/Mint/Move/Mutate: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_TruncatedMessage;
            return EXCEPTION_SYSCALL_ERROR;
        }
        srcIndex = getSyscallArg(2, buffer);
        srcDepth = getSyscallArg(3, buffer);

        srcRoot = excaps.excaprefs[0]->cap;

        status = ensureEmptySlot(destSlot);
        if (status != EXCEPTION_NONE) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 94, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode Copy/Mint/Move/Mutate: Destination not empty."); kprintf(">>" "\033[0m" "\n"); } while (0);
            return status;
        }

        lu_ret = lookupSourceSlot(srcRoot, srcIndex, srcDepth);
        if (lu_ret.status != EXCEPTION_NONE) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 100, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode Copy/Mint/Move/Mutate: Invalid source slot."); kprintf(">>" "\033[0m" "\n"); } while (0);
            return lu_ret.status;
        }
        srcSlot = lu_ret.slot;

        if (cap_get_capType(srcSlot->cap) == cap_null_cap) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 106, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode Copy/Mint/Move/Mutate: Source slot invalid or empty."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_FailedLookup;
            current_syscall_error.failedLookupWasSource = 1;
            current_lookup_fault =
                lookup_fault_missing_capability_new(srcDepth);
            return EXCEPTION_SYSCALL_ERROR;
        }

        switch (invLabel) {
        case CNodeCopy:

            if (length < 5) {
                do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 118, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Truncated message for CNode Copy operation."); kprintf(">>" "\033[0m" "\n"); } while (0);
                current_syscall_error.type = seL4_TruncatedMessage;
                return EXCEPTION_SYSCALL_ERROR;
            }

            cap_rights = rightsFromWord(getSyscallArg(4, buffer));
            srcCap = maskCapRights(cap_rights, srcSlot->cap);
            dc_ret = deriveCap(srcSlot, srcCap);
            if (dc_ret.status != EXCEPTION_NONE) {
                do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 127, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Error deriving cap for CNode Copy operation."); kprintf(">>" "\033[0m" "\n"); } while (0);
                return dc_ret.status;
            }
            newCap = dc_ret.cap;
            isMove = false;

            break;

        case CNodeMint:
            if (length < 6) {
                do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 137, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode Mint: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
                current_syscall_error.type = seL4_TruncatedMessage;
                return EXCEPTION_SYSCALL_ERROR;
            }

            cap_rights = rightsFromWord(getSyscallArg(4, buffer));
            capData = getSyscallArg(5, buffer);
            srcCap = maskCapRights(cap_rights, srcSlot->cap);
            dc_ret = deriveCap(srcSlot,
                               updateCapData(false, capData, srcCap));
            if (dc_ret.status != EXCEPTION_NONE) {
                do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 148, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Error deriving cap for CNode Mint operation."); kprintf(">>" "\033[0m" "\n"); } while (0);
                return dc_ret.status;
            }
            newCap = dc_ret.cap;
            isMove = false;

            break;

        case CNodeMove:
            newCap = srcSlot->cap;
            isMove = true;

            break;

        case CNodeMutate:
            if (length < 5) {
                do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 164, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode Mutate: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
                current_syscall_error.type = seL4_TruncatedMessage;
                return EXCEPTION_SYSCALL_ERROR;
            }

            capData = getSyscallArg(4, buffer);
            newCap = updateCapData(true, capData, srcSlot->cap);
            isMove = true;

            break;

        default:
            if(!(0)) _assert_fail("0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 176, __FUNCTION__);
            return EXCEPTION_NONE;
        }

        if (cap_get_capType(newCap) == cap_null_cap) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 181, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode Copy/Mint/Move/Mutate: Mutated cap would be invalid."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_IllegalOperation;
            return EXCEPTION_SYSCALL_ERROR;
        }

        setThreadState(ksCurThread, ThreadState_Restart);
        if (isMove) {
            return invokeCNodeMove(newCap, srcSlot, destSlot);
        } else {
            return invokeCNodeInsert(newCap, srcSlot, destSlot);
        }
    }

    if (invLabel == CNodeRevoke) {
        setThreadState(ksCurThread, ThreadState_Restart);
        return invokeCNodeRevoke(destSlot);
    }

    if (invLabel == CNodeDelete) {
        setThreadState(ksCurThread, ThreadState_Restart);
        return invokeCNodeDelete(destSlot);
    }

    if (invLabel == CNodeSaveCaller) {
        status = ensureEmptySlot(destSlot);
        if (status != EXCEPTION_NONE) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 207, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode SaveCaller: Destination slot not empty."); kprintf(">>" "\033[0m" "\n"); } while (0);
            return status;
        }

        setThreadState(ksCurThread, ThreadState_Restart);
        return invokeCNodeSaveCaller(destSlot);
    }

    if (invLabel == CNodeCancelBadgedSends) {
        cap_t destCap;

        destCap = destSlot->cap;

        if (!hasCancelSendRights(destCap)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 221, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode CancelBadgedSends: Target cap invalid."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_IllegalOperation;
            return EXCEPTION_SYSCALL_ERROR;
        }
        setThreadState(ksCurThread, ThreadState_Restart);
        return invokeCNodeCancelBadgedSends(destCap);
    }

    if (invLabel == CNodeRotate) {
        word_t pivotNewData, pivotIndex, pivotDepth;
        word_t srcNewData, srcIndex, srcDepth;
        cte_t *pivotSlot, *srcSlot;
        cap_t pivotRoot, srcRoot, newSrcCap, newPivotCap;

        if (length < 8 || excaps.excaprefs[0] == ((void *)0)
                || excaps.excaprefs[1] == ((void *)0)) {
            current_syscall_error.type = seL4_TruncatedMessage;
            return EXCEPTION_SYSCALL_ERROR;
        }
        pivotNewData = getSyscallArg(2, buffer);
        pivotIndex = getSyscallArg(3, buffer);
        pivotDepth = getSyscallArg(4, buffer);
        srcNewData = getSyscallArg(5, buffer);
        srcIndex = getSyscallArg(6, buffer);
        srcDepth = getSyscallArg(7, buffer);

        pivotRoot = excaps.excaprefs[0]->cap;
        srcRoot = excaps.excaprefs[1]->cap;

        lu_ret = lookupSourceSlot(srcRoot, srcIndex, srcDepth);
        if (lu_ret.status != EXCEPTION_NONE) {
            return lu_ret.status;
        }
        srcSlot = lu_ret.slot;

        lu_ret = lookupPivotSlot(pivotRoot, pivotIndex, pivotDepth);
        if (lu_ret.status != EXCEPTION_NONE) {
            return lu_ret.status;
        }
        pivotSlot = lu_ret.slot;

        if (pivotSlot == srcSlot || pivotSlot == destSlot) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 263, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode Rotate: Pivot slot the same as source or dest slot."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_IllegalOperation;
            return EXCEPTION_SYSCALL_ERROR;
        }

        if (srcSlot != destSlot) {
            status = ensureEmptySlot(destSlot);
            if (status != EXCEPTION_NONE) {
                return status;
            }
        }

        if (cap_get_capType(srcSlot->cap) == cap_null_cap) {
            current_syscall_error.type = seL4_FailedLookup;
            current_syscall_error.failedLookupWasSource = 1;
            current_lookup_fault = lookup_fault_missing_capability_new(srcDepth);
            return EXCEPTION_SYSCALL_ERROR;
        }

        if (cap_get_capType(pivotSlot->cap) == cap_null_cap) {
            current_syscall_error.type = seL4_FailedLookup;
            current_syscall_error.failedLookupWasSource = 0;
            current_lookup_fault = lookup_fault_missing_capability_new(pivotDepth);
            return EXCEPTION_SYSCALL_ERROR;
        }

        newSrcCap = updateCapData(true, srcNewData, srcSlot->cap);
        newPivotCap = updateCapData(true, pivotNewData, pivotSlot->cap);

        if (cap_get_capType(newSrcCap) == cap_null_cap) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 293, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode Rotate: Source cap invalid."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_IllegalOperation;
            return EXCEPTION_SYSCALL_ERROR;
        }

        if (cap_get_capType(newPivotCap) == cap_null_cap) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 299, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode Rotate: Pivot cap invalid."); kprintf(">>" "\033[0m" "\n"); } while (0);
            current_syscall_error.type = seL4_IllegalOperation;
            return EXCEPTION_SYSCALL_ERROR;
        }

        setThreadState(ksCurThread, ThreadState_Restart);
        return invokeCNodeRotate(newSrcCap, newPivotCap,
                                 srcSlot, pivotSlot, destSlot);
    }

    return EXCEPTION_NONE;
}

exception_t
invokeCNodeRevoke(cte_t *destSlot)
{
    return cteRevoke(destSlot);
}

exception_t
invokeCNodeDelete(cte_t *destSlot)
{
    return cteDelete(destSlot, true);
}

exception_t
invokeCNodeCancelBadgedSends(cap_t cap)
{
    word_t badge = cap_endpoint_cap_get_capEPBadge(cap);
    if (badge) {
        endpoint_t* ep = (endpoint_t*)
                         cap_endpoint_cap_get_capEPPtr(cap);
        cancelBadgedSends(ep, badge);
    }
    return EXCEPTION_NONE;
}

exception_t
invokeCNodeInsert(cap_t cap, cte_t *srcSlot, cte_t *destSlot)
{
    cteInsert(cap, srcSlot, destSlot);

    return EXCEPTION_NONE;
}

exception_t
invokeCNodeMove(cap_t cap, cte_t *srcSlot, cte_t *destSlot)
{
    cteMove(cap, srcSlot, destSlot);

    return EXCEPTION_NONE;
}

exception_t
invokeCNodeRotate(cap_t cap1, cap_t cap2, cte_t *slot1,
                  cte_t *slot2, cte_t *slot3)
{
    if (slot1 == slot3) {
        cteSwap(cap1, slot1, cap2, slot2);
    } else {
        cteMove(cap2, slot2, slot3);
        cteMove(cap1, slot1, slot2);
    }

    return EXCEPTION_NONE;
}

exception_t
invokeCNodeSaveCaller(cte_t *destSlot)
{
    cap_t cap;
    cte_t *srcSlot;

    srcSlot = (((cte_t *)((word_t)(ksCurThread)&~((1ul << (10))-1ul)))+(tcbCaller));
    cap = srcSlot->cap;

    switch (cap_get_capType(cap)) {
    case cap_null_cap:
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 377, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("CNode SaveCaller: Reply cap not present."); kprintf(">>" "\033[0m" "\n"); } while (0);
        break;

    case cap_reply_cap:
        if (!cap_reply_cap_get_capReplyMaster(cap)) {
            cteMove(cap, srcSlot, destSlot);
        }
        break;

    default:
        _fail("caller capability must be null or reply", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 387, __func__);
        break;
    }

    return EXCEPTION_NONE;
}

/*
 * If creating a child UntypedCap, don't allow new objects to be created in the
 * parent.
 */
static void
setUntypedCapAsFull(cap_t srcCap, cap_t newCap, cte_t *srcSlot)
{
    if ((cap_get_capType(srcCap) == cap_untyped_cap)
            && (cap_get_capType(newCap) == cap_untyped_cap)) {
        if ((cap_untyped_cap_get_capPtr(srcCap)
                == cap_untyped_cap_get_capPtr(newCap))
                && (cap_untyped_cap_get_capBlockSize(newCap)
                    == cap_untyped_cap_get_capBlockSize(srcCap))) {
            cap_untyped_cap_ptr_set_capFreeIndex(&(srcSlot->cap),
                                                 ((1ul << ((cap_untyped_cap_get_capBlockSize(srcCap)) - 4))));
        }
    }
}

void
cteInsert(cap_t newCap, cte_t *srcSlot, cte_t *destSlot)
{
    mdb_node_t srcMDB, newMDB;
    cap_t srcCap;
    bool_t newCapIsRevocable;

    srcMDB = srcSlot->cteMDBNode;
    srcCap = srcSlot->cap;

    newCapIsRevocable = isCapRevocable(newCap, srcCap);

    newMDB = mdb_node_set_mdbPrev(srcMDB, ((word_t)(srcSlot)));
    newMDB = mdb_node_set_mdbRevocable(newMDB, newCapIsRevocable);
    newMDB = mdb_node_set_mdbFirstBadged(newMDB, newCapIsRevocable);

    /* Haskell error: "cteInsert to non-empty destination" */
    if(!(cap_get_capType(destSlot->cap) == cap_null_cap)) _assert_fail("cap_get_capType(destSlot->cap) == cap_null_cap", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 430, __FUNCTION__);
    /* Haskell error: "cteInsert: mdb entry must be empty" */
    if(!((cte_t*)mdb_node_get_mdbNext(destSlot->cteMDBNode) == ((void *)0) && (cte_t*)mdb_node_get_mdbPrev(destSlot->cteMDBNode) == ((void *)0))) _assert_fail("(cte_t*)mdb_node_get_mdbNext(destSlot->cteMDBNode) == NULL && (cte_t*)mdb_node_get_mdbPrev(destSlot->cteMDBNode) == NULL",
                                                                     "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c"
# 432 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c"
    ,
                                                                     433
# 432 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c"
    , __FUNCTION__)
                                                                      ;

    /* Prevent parent untyped cap from being used again if creating a child
     * untyped from it. */
    setUntypedCapAsFull(srcCap, newCap, srcSlot);

    destSlot->cap = newCap;
    destSlot->cteMDBNode = newMDB;
    mdb_node_ptr_set_mdbNext(&srcSlot->cteMDBNode, ((word_t)(destSlot)));
    if (mdb_node_get_mdbNext(newMDB)) {
        mdb_node_ptr_set_mdbPrev(
            &((cte_t *)(mdb_node_get_mdbNext(newMDB)))->cteMDBNode,
            ((word_t)(destSlot)));
    }
}

void
cteMove(cap_t newCap, cte_t *srcSlot, cte_t *destSlot)
{
    mdb_node_t mdb;
    word_t prev_ptr, next_ptr;

    /* Haskell error: "cteMove to non-empty destination" */
    if(!(cap_get_capType(destSlot->cap) == cap_null_cap)) _assert_fail("cap_get_capType(destSlot->cap) == cap_null_cap", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 456, __FUNCTION__);
    /* Haskell error: "cteMove: mdb entry must be empty" */
    if(!((cte_t*)mdb_node_get_mdbNext(destSlot->cteMDBNode) == ((void *)0) && (cte_t*)mdb_node_get_mdbPrev(destSlot->cteMDBNode) == ((void *)0))) _assert_fail("(cte_t*)mdb_node_get_mdbNext(destSlot->cteMDBNode) == NULL && (cte_t*)mdb_node_get_mdbPrev(destSlot->cteMDBNode) == NULL",
                                                                     "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c"
# 458 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c"
    ,
                                                                     459
# 458 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c"
    , __FUNCTION__)
                                                                      ;

    mdb = srcSlot->cteMDBNode;
    destSlot->cap = newCap;
    srcSlot->cap = cap_null_cap_new();
    destSlot->cteMDBNode = mdb;
    srcSlot->cteMDBNode = mdb_node_new(0, false, false, 0);

    prev_ptr = mdb_node_get_mdbPrev(mdb);
    if (prev_ptr)
        mdb_node_ptr_set_mdbNext(
            &((cte_t *)(prev_ptr))->cteMDBNode,
            ((word_t)(destSlot)));

    next_ptr = mdb_node_get_mdbNext(mdb);
    if (next_ptr)
        mdb_node_ptr_set_mdbPrev(
            &((cte_t *)(next_ptr))->cteMDBNode,
            ((word_t)(destSlot)));
}

void
capSwapForDelete(cte_t *slot1, cte_t *slot2)
{
    cap_t cap1, cap2;

    if (slot1 == slot2) {
        return;
    }

    cap1 = slot1->cap;
    cap2 = slot2->cap;

    cteSwap(cap1, slot1, cap2, slot2);
}

void
cteSwap(cap_t cap1, cte_t *slot1, cap_t cap2, cte_t *slot2)
{
    mdb_node_t mdb1, mdb2;
    word_t next_ptr, prev_ptr;

    slot1->cap = cap2;
    slot2->cap = cap1;

    mdb1 = slot1->cteMDBNode;

    prev_ptr = mdb_node_get_mdbPrev(mdb1);
    if (prev_ptr)
        mdb_node_ptr_set_mdbNext(
            &((cte_t *)(prev_ptr))->cteMDBNode,
            ((word_t)(slot2)));

    next_ptr = mdb_node_get_mdbNext(mdb1);
    if (next_ptr)
        mdb_node_ptr_set_mdbPrev(
            &((cte_t *)(next_ptr))->cteMDBNode,
            ((word_t)(slot2)));

    mdb2 = slot2->cteMDBNode;
    slot1->cteMDBNode = mdb2;
    slot2->cteMDBNode = mdb1;

    prev_ptr = mdb_node_get_mdbPrev(mdb2);
    if (prev_ptr)
        mdb_node_ptr_set_mdbNext(
            &((cte_t *)(prev_ptr))->cteMDBNode,
            ((word_t)(slot1)));

    next_ptr = mdb_node_get_mdbNext(mdb2);
    if (next_ptr)
        mdb_node_ptr_set_mdbPrev(
            &((cte_t *)(next_ptr))->cteMDBNode,
            ((word_t)(slot1)));
}

exception_t
cteRevoke(cte_t *slot)
{
    cte_t *nextPtr;
    exception_t status;

    /* there is no need to check for a NullCap as NullCaps are
       always accompanied by null mdb pointers */
    for (nextPtr = ((cte_t *)(mdb_node_get_mdbNext(slot->cteMDBNode)));
            nextPtr && isMDBParentOf(slot, nextPtr);
            nextPtr = ((cte_t *)(mdb_node_get_mdbNext(slot->cteMDBNode)))) {
        status = cteDelete(nextPtr, true);
        if (status != EXCEPTION_NONE) {
            return status;
        }

        status = preemptionPoint();
        if (status != EXCEPTION_NONE) {
            return status;
        }
    }

    return EXCEPTION_NONE;
}

exception_t
cteDelete(cte_t *slot, bool_t exposed)
{
    finaliseSlot_ret_t fs_ret;

    fs_ret = finaliseSlot(slot, exposed);
    if (fs_ret.status != EXCEPTION_NONE) {
        return fs_ret.status;
    }

    if (exposed || fs_ret.success) {
        emptySlot(slot, fs_ret.cleanupInfo);
    }
    return EXCEPTION_NONE;
}

static void
emptySlot(cte_t *slot, cap_t cleanupInfo)
{
    if (cap_get_capType(slot->cap) != cap_null_cap) {
        mdb_node_t mdbNode;
        cte_t *prev, *next;

        mdbNode = slot->cteMDBNode;
        prev = ((cte_t *)(mdb_node_get_mdbPrev(mdbNode)));
        next = ((cte_t *)(mdb_node_get_mdbNext(mdbNode)));

        if (prev) {
            mdb_node_ptr_set_mdbNext(&prev->cteMDBNode, ((word_t)(next)));
        }
        if (next) {
            mdb_node_ptr_set_mdbPrev(&next->cteMDBNode, ((word_t)(prev)));
        }
        if (next)
            mdb_node_ptr_set_mdbFirstBadged(&next->cteMDBNode,
                                            mdb_node_get_mdbFirstBadged(next->cteMDBNode) ||
                                            mdb_node_get_mdbFirstBadged(mdbNode));
        slot->cap = cap_null_cap_new();
        slot->cteMDBNode = mdb_node_new(0, false, false, 0);

        postCapDeletion(cleanupInfo);
    }
}

static inline bool_t __attribute__((__const__))
capRemovable(cap_t cap, cte_t* slot)
{
    switch (cap_get_capType(cap)) {
    case cap_null_cap:
        return true;
    case cap_zombie_cap: {
        word_t n = cap_zombie_cap_get_capZombieNumber(cap);
        cte_t* z_slot = (cte_t*)cap_zombie_cap_get_capZombiePtr(cap);
        return (n == 0 || (n == 1 && slot == z_slot));
    }
    default:
        _fail("finaliseCap should only return Zombie or NullCap", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 616, __func__);
    }
}

static inline bool_t __attribute__((__const__))
capCyclicZombie(cap_t cap, cte_t *slot)
{
    return cap_get_capType(cap) == cap_zombie_cap &&
           ((cte_t *)(cap_zombie_cap_get_capZombiePtr(cap))) == slot;
}

static finaliseSlot_ret_t
finaliseSlot(cte_t *slot, bool_t immediate)
{
    bool_t final;
    finaliseCap_ret_t fc_ret;
    exception_t status;
    finaliseSlot_ret_t ret;

    while (cap_get_capType(slot->cap) != cap_null_cap) {
        final = isFinalCapability(slot);
        fc_ret = finaliseCap(slot->cap, final, false);

        if (capRemovable(fc_ret.remainder, slot)) {
            ret.status = EXCEPTION_NONE;
            ret.success = true;
            ret.cleanupInfo = fc_ret.cleanupInfo;
            return ret;
        }

        slot->cap = fc_ret.remainder;

        if (!immediate && capCyclicZombie(fc_ret.remainder, slot)) {
            ret.status = EXCEPTION_NONE;
            ret.success = false;
            ret.cleanupInfo = fc_ret.cleanupInfo;
            return ret;
        }

        status = reduceZombie(slot, immediate);
        if (status != EXCEPTION_NONE) {
            ret.status = status;
            ret.success = false;
            ret.cleanupInfo = cap_null_cap_new();
            return ret;
        }

        status = preemptionPoint();
        if (status != EXCEPTION_NONE) {
            ret.status = status;
            ret.success = false;
            ret.cleanupInfo = cap_null_cap_new();
            return ret;
        }
    }
    ret.status = EXCEPTION_NONE;
    ret.success = true;
    ret.cleanupInfo = cap_null_cap_new();
    return ret;
}

static exception_t
reduceZombie(cte_t* slot, bool_t immediate)
{
    cte_t* ptr;
    word_t n, type;
    exception_t status;

    if(!(cap_get_capType(slot->cap) == cap_zombie_cap)) _assert_fail("cap_get_capType(slot->cap) == cap_zombie_cap", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 684, __FUNCTION__);
    ptr = (cte_t*)cap_zombie_cap_get_capZombiePtr(slot->cap);
    n = cap_zombie_cap_get_capZombieNumber(slot->cap);
    type = cap_zombie_cap_get_capZombieType(slot->cap);

    /* Haskell error: "reduceZombie: expected unremovable zombie" */
    if(!(n > 0)) _assert_fail("n > 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 690, __FUNCTION__);

    if (immediate) {
        cte_t* endSlot = &ptr[n - 1];

        status = cteDelete(endSlot, false);
        if (status != EXCEPTION_NONE) {
            return status;
        }

        switch (cap_get_capType(slot->cap)) {
        case cap_null_cap:
            break;

        case cap_zombie_cap: {
            cte_t* ptr2 =
                (cte_t*)cap_zombie_cap_get_capZombiePtr(slot->cap);

            if (ptr == ptr2 &&
                    cap_zombie_cap_get_capZombieNumber(slot->cap) == n &&
                    cap_zombie_cap_get_capZombieType(slot->cap) == type) {
                if(!(cap_get_capType(endSlot->cap) == cap_null_cap)) _assert_fail("cap_get_capType(endSlot->cap) == cap_null_cap", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 711, __FUNCTION__);
                slot->cap =
                    cap_zombie_cap_set_capZombieNumber(slot->cap, n - 1);
            } else {
                /* Haskell error:
                 * "Expected new Zombie to be self-referential."
                 */
                if(!(ptr2 == slot && ptr != slot)) _assert_fail("ptr2 == slot && ptr != slot", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 718, __FUNCTION__);
            }
            break;
        }

        default:
            _fail("Expected recursion to result in Zombie.", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 724, __func__);
        }
    } else {
        /* Haskell error: "Cyclic zombie passed to unexposed reduceZombie" */
        if(!(ptr != slot)) _assert_fail("ptr != slot", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 728, __FUNCTION__);

        if (cap_get_capType(ptr->cap) == cap_zombie_cap) {
            /* Haskell error: "Moving self-referential Zombie aside." */
            if(!(ptr != ((cte_t *)(cap_zombie_cap_get_capZombiePtr(ptr->cap))))) _assert_fail("ptr != CTE_PTR(cap_zombie_cap_get_capZombiePtr(ptr->cap))", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c", 732, __FUNCTION__);
        }

        capSwapForDelete(ptr, slot);
    }
    return EXCEPTION_NONE;
}

void
cteDeleteOne(cte_t* slot)
{
    word_t cap_type = cap_get_capType(slot->cap);
    if (cap_type != cap_null_cap) {
        bool_t final;
        finaliseCap_ret_t fc_ret __attribute__((unused));

        /** GHOSTUPD: "(gs_get_assn cteDeleteOne_'proc \<acute>ghost'state = (-1)
            \<or> gs_get_assn cteDeleteOne_'proc \<acute>ghost'state = \<acute>cap_type, id)" */

        final = isFinalCapability(slot);
        fc_ret = finaliseCap(slot->cap, final, true);
        /* Haskell error: "cteDeleteOne: cap should be removable" */
        if(!(capRemovable(fc_ret.remainder, slot) && cap_get_capType(fc_ret.cleanupInfo) == cap_null_cap)) _assert_fail("capRemovable(fc_ret.remainder, slot) && cap_get_capType(fc_ret.cleanupInfo) == cap_null_cap",
                                                                  "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c"
# 754 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c"
        ,
                                                                  755
# 754 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c"
        , __FUNCTION__)
                                                                   ;
        emptySlot(slot, cap_null_cap_new());
    }
}

void
insertNewCap(cte_t *parent, cte_t *slot, cap_t cap)
{
    cte_t *next;

    next = ((cte_t *)(mdb_node_get_mdbNext(parent->cteMDBNode)));
    slot->cap = cap;
    slot->cteMDBNode = mdb_node_new(((word_t)(next)), true, true, ((word_t)(parent)));
    if (next) {
        mdb_node_ptr_set_mdbPrev(&next->cteMDBNode, ((word_t)(slot)));
    }
    mdb_node_ptr_set_mdbNext(&parent->cteMDBNode, ((word_t)(slot)));
}

void
setupReplyMaster(tcb_t *thread)
{
    cte_t *slot;

    slot = (((cte_t *)((word_t)(thread)&~((1ul << (10))-1ul)))+(tcbReply));
    if (cap_get_capType(slot->cap) == cap_null_cap) {
        /* Haskell asserts that no reply caps exist for this thread here. This
         * cannot be translated. */
        slot->cap = cap_reply_cap_new(true, ((word_t)(thread)));
        slot->cteMDBNode = mdb_node_new(0, false, false, 0);
        mdb_node_ptr_set_mdbRevocable(&slot->cteMDBNode, true);
        mdb_node_ptr_set_mdbFirstBadged(&slot->cteMDBNode, true);
    }
}

bool_t __attribute__((__pure__))
isMDBParentOf(cte_t *cte_a, cte_t *cte_b)
{
    if (!mdb_node_get_mdbRevocable(cte_a->cteMDBNode)) {
        return false;
    }
    if (!sameRegionAs(cte_a->cap, cte_b->cap)) {
        return false;
    }
    switch (cap_get_capType(cte_a->cap)) {
    case cap_endpoint_cap: {
        word_t badge;

        badge = cap_endpoint_cap_get_capEPBadge(cte_a->cap);
        if (badge == 0) {
            return true;
        }
        return (badge == cap_endpoint_cap_get_capEPBadge(cte_b->cap)) &&
               !mdb_node_get_mdbFirstBadged(cte_b->cteMDBNode);
        break;
    }

    case cap_notification_cap: {
        word_t badge;

        badge = cap_notification_cap_get_capNtfnBadge(cte_a->cap);
        if (badge == 0) {
            return true;
        }
        return
            (badge == cap_notification_cap_get_capNtfnBadge(cte_b->cap)) &&
            !mdb_node_get_mdbFirstBadged(cte_b->cteMDBNode);
        break;
    }

    default:
        return true;
        break;
    }
}

exception_t
ensureNoChildren(cte_t *slot)
{
    if (mdb_node_get_mdbNext(slot->cteMDBNode) != 0) {
        cte_t *next;

        next = ((cte_t *)(mdb_node_get_mdbNext(slot->cteMDBNode)));
        if (isMDBParentOf(slot, next)) {
            current_syscall_error.type = seL4_RevokeFirst;
            return EXCEPTION_SYSCALL_ERROR;
        }
    }

    return EXCEPTION_NONE;
}

exception_t
ensureEmptySlot(cte_t *slot)
{
    if (cap_get_capType(slot->cap) != cap_null_cap) {
        current_syscall_error.type = seL4_DeleteFirst;
        return EXCEPTION_SYSCALL_ERROR;
    }

    return EXCEPTION_NONE;
}

bool_t __attribute__((__pure__))
isFinalCapability(cte_t *cte)
{
    mdb_node_t mdb;
    bool_t prevIsSameObject;

    mdb = cte->cteMDBNode;

    if (mdb_node_get_mdbPrev(mdb) == 0) {
        prevIsSameObject = false;
    } else {
        cte_t *prev;

        prev = ((cte_t *)(mdb_node_get_mdbPrev(mdb)));
        prevIsSameObject = sameObjectAs(prev->cap, cte->cap);
    }

    if (prevIsSameObject) {
        return false;
    } else {
        if (mdb_node_get_mdbNext(mdb) == 0) {
            return true;
        } else {
            cte_t *next;

            next = ((cte_t *)(mdb_node_get_mdbNext(mdb)));
            return !sameObjectAs(cte->cap, next->cap);
        }
    }
}

bool_t __attribute__((__pure__))
slotCapLongRunningDelete(cte_t *slot)
{
    if (cap_get_capType(slot->cap) == cap_null_cap) {
        return false;
    } else if (! isFinalCapability(slot)) {
        return false;
    }
    switch (cap_get_capType(slot->cap)) {
    case cap_thread_cap:
    case cap_zombie_cap:
    case cap_cnode_cap:
        return true;
    default:
        return false;
    }
}

/* This implementation is specialised to the (current) limit
 * of one cap receive slot. */
cte_t *
getReceiveSlots(tcb_t *thread, word_t *buffer)
{
    cap_transfer_t ct;
    cptr_t cptr;
    lookupCap_ret_t luc_ret;
    lookupSlot_ret_t lus_ret;
    cte_t *slot;
    cap_t cnode;

    if (!buffer) {
        return ((void *)0);
    }

    ct = loadCapTransfer(buffer);
    cptr = ct.ctReceiveRoot;

    luc_ret = lookupCap(thread, cptr);
    if (luc_ret.status != EXCEPTION_NONE) {
        return ((void *)0);
    }
    cnode = luc_ret.cap;

    lus_ret = lookupTargetSlot(cnode, ct.ctReceiveIndex, ct.ctReceiveDepth);
    if (lus_ret.status != EXCEPTION_NONE) {
        return ((void *)0);
    }
    slot = lus_ret.slot;

    if (cap_get_capType(slot->cap) != cap_null_cap) {
        return ((void *)0);
    }

    return slot;
}

cap_transfer_t __attribute__((__pure__))
loadCapTransfer(word_t *buffer)
{
    const int offset = seL4_MsgMaxLength + ((1ul<<(seL4_MsgExtraCapBits))-1) + 2;
    return capTransferFromWords(buffer + offset);
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/registerset.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/notification.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/endpoint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c" 2

static inline tcb_queue_t __attribute__((__pure__))
ep_ptr_get_queue(endpoint_t *epptr)
{
    tcb_queue_t queue;

    queue.head = (tcb_t*)endpoint_ptr_get_epQueue_head(epptr);
    queue.end = (tcb_t*)endpoint_ptr_get_epQueue_tail(epptr);

    return queue;
}

static inline void
ep_ptr_set_queue(endpoint_t *epptr, tcb_queue_t queue)
{
    endpoint_ptr_set_epQueue_head(epptr, (word_t)queue.head);
    endpoint_ptr_set_epQueue_tail(epptr, (word_t)queue.end);
}

void
sendIPC(bool_t blocking, bool_t do_call, word_t badge,
        bool_t canGrant, tcb_t *thread, endpoint_t *epptr)
{
    switch (endpoint_ptr_get_state(epptr)) {
    case EPState_Idle:
    case EPState_Send:
        if (blocking) {
            tcb_queue_t queue;

            /* Set thread state to BlockedOnSend */
            thread_state_ptr_set_tsType(&thread->tcbState,
                                        ThreadState_BlockedOnSend);
            thread_state_ptr_set_blockingObject(
                &thread->tcbState, ((word_t)(epptr)));
            thread_state_ptr_set_blockingIPCBadge(
                &thread->tcbState, badge);
            thread_state_ptr_set_blockingIPCCanGrant(
                &thread->tcbState, canGrant);
            thread_state_ptr_set_blockingIPCIsCall(
                &thread->tcbState, do_call);

            scheduleTCB(thread);

            /* Place calling thread in endpoint queue */
            queue = ep_ptr_get_queue(epptr);
            queue = tcbEPAppend(thread, queue);
            endpoint_ptr_set_state(epptr, EPState_Send);
            ep_ptr_set_queue(epptr, queue);
        }
        break;

    case EPState_Recv: {
        tcb_queue_t queue;
        tcb_t *dest;

        /* Get the head of the endpoint queue. */
        queue = ep_ptr_get_queue(epptr);
        dest = queue.head;

        /* Haskell error "Receive endpoint queue must not be empty" */
        if(!(dest)) _assert_fail("dest", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c", 80, __FUNCTION__);

        /* Dequeue the first TCB */
        queue = tcbEPDequeue(dest, queue);
        ep_ptr_set_queue(epptr, queue);

        if (!queue.head) {
            endpoint_ptr_set_state(epptr, EPState_Idle);
        }

        /* Do the transfer */
        doIPCTransfer(thread, epptr, badge, canGrant, dest);

        setThreadState(dest, ThreadState_Running);
        possibleSwitchTo(dest);

        if (do_call ||
                seL4_Fault_ptr_get_seL4_FaultType(&thread->tcbFault) != seL4_Fault_NullFault) {
            if (canGrant) {
                setupCallerCap(thread, dest);
            } else {
                setThreadState(thread, ThreadState_Inactive);
            }
        }

        break;
    }
    }
}

void
receiveIPC(tcb_t *thread, cap_t cap, bool_t isBlocking)
{
    endpoint_t *epptr;
    notification_t *ntfnPtr;

    /* Haskell error "receiveIPC: invalid cap" */
    if(!(cap_get_capType(cap) == cap_endpoint_cap)) _assert_fail("cap_get_capType(cap) == cap_endpoint_cap", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c", 117, __FUNCTION__);

    epptr = ((endpoint_t *)(cap_endpoint_cap_get_capEPPtr(cap)));

    /* Check for anything waiting in the notification */
    ntfnPtr = thread->tcbBoundNotification;
    if (ntfnPtr && notification_ptr_get_state(ntfnPtr) == NtfnState_Active) {
        completeSignal(ntfnPtr, thread);
    } else {
        switch (endpoint_ptr_get_state(epptr)) {
        case EPState_Idle:
        case EPState_Recv: {
            tcb_queue_t queue;

            if (isBlocking) {
                /* Set thread state to BlockedOnReceive */
                thread_state_ptr_set_tsType(&thread->tcbState,
                                            ThreadState_BlockedOnReceive);
                thread_state_ptr_set_blockingObject(
                    &thread->tcbState, ((word_t)(epptr)));

                scheduleTCB(thread);

                /* Place calling thread in endpoint queue */
                queue = ep_ptr_get_queue(epptr);
                queue = tcbEPAppend(thread, queue);
                endpoint_ptr_set_state(epptr, EPState_Recv);
                ep_ptr_set_queue(epptr, queue);
            } else {
                doNBRecvFailedTransfer(thread);
            }
            break;
        }

        case EPState_Send: {
            tcb_queue_t queue;
            tcb_t *sender;
            word_t badge;
            bool_t canGrant;
            bool_t do_call;

            /* Get the head of the endpoint queue. */
            queue = ep_ptr_get_queue(epptr);
            sender = queue.head;

            /* Haskell error "Send endpoint queue must not be empty" */
            if(!(sender)) _assert_fail("sender", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c", 163, __FUNCTION__);

            /* Dequeue the first TCB */
            queue = tcbEPDequeue(sender, queue);
            ep_ptr_set_queue(epptr, queue);

            if (!queue.head) {
                endpoint_ptr_set_state(epptr, EPState_Idle);
            }

            /* Get sender IPC details */
            badge = thread_state_ptr_get_blockingIPCBadge(&sender->tcbState);
            canGrant =
                thread_state_ptr_get_blockingIPCCanGrant(&sender->tcbState);

            /* Do the transfer */
            doIPCTransfer(sender, epptr, badge,
                          canGrant, thread);

            do_call = thread_state_ptr_get_blockingIPCIsCall(&sender->tcbState);

            if (do_call ||
                    seL4_Fault_get_seL4_FaultType(sender->tcbFault) != seL4_Fault_NullFault) {
                if (canGrant) {
                    setupCallerCap(sender, thread);
                } else {
                    setThreadState(sender, ThreadState_Inactive);
                }
            } else {
                setThreadState(sender, ThreadState_Running);
                possibleSwitchTo(sender);
            }

            break;
        }
        }
    }
}

void
replyFromKernel_error(tcb_t *thread)
{
    word_t len;
    word_t *ipcBuffer;

    ipcBuffer = lookupIPCBuffer(true, thread);
    setRegister(thread, badgeRegister, 0);
    len = setMRs_syscall_error(thread, ipcBuffer);
    setRegister(thread, msgInfoRegister, wordFromMessageInfo(
                    seL4_MessageInfo_new(current_syscall_error.type, 0, 0, len)));
}

void
replyFromKernel_success_empty(tcb_t *thread)
{
    setRegister(thread, badgeRegister, 0);
    setRegister(thread, msgInfoRegister, wordFromMessageInfo(
                    seL4_MessageInfo_new(0, 0, 0, 0)));
}

void
cancelIPC(tcb_t *tptr)
{
    thread_state_t *state = &tptr->tcbState;

    switch (thread_state_ptr_get_tsType(state)) {
    case ThreadState_BlockedOnSend:
    case ThreadState_BlockedOnReceive: {
        /* blockedIPCCancel state */
        endpoint_t *epptr;
        tcb_queue_t queue;

        epptr = ((endpoint_t *)(thread_state_ptr_get_blockingObject(state)));

        /* Haskell error "blockedIPCCancel: endpoint must not be idle" */
        if(!(endpoint_ptr_get_state(epptr) != EPState_Idle)) _assert_fail("endpoint_ptr_get_state(epptr) != EPState_Idle", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c", 238, __FUNCTION__);

        /* Dequeue TCB */
        queue = ep_ptr_get_queue(epptr);
        queue = tcbEPDequeue(tptr, queue);
        ep_ptr_set_queue(epptr, queue);

        if (!queue.head) {
            endpoint_ptr_set_state(epptr, EPState_Idle);
        }

        setThreadState(tptr, ThreadState_Inactive);
        break;
    }

    case ThreadState_BlockedOnNotification:
        cancelSignal(tptr,
                     ((notification_t *)(thread_state_ptr_get_blockingObject(state))));
        break;

    case ThreadState_BlockedOnReply: {
        cte_t *slot, *callerCap;

        tptr->tcbFault = seL4_Fault_NullFault_new();

        /* Get the reply cap slot */
        slot = (((cte_t *)((word_t)(tptr)&~((1ul << (10))-1ul)))+(tcbReply));

        callerCap = ((cte_t *)(mdb_node_get_mdbNext(slot->cteMDBNode)));
        if (callerCap) {
            /** GHOSTUPD: "(True,
                gs_set_assn cteDeleteOne_'proc (ucast cap_reply_cap))" */
            cteDeleteOne(callerCap);
        }

        break;
    }
    }
}

void
cancelAllIPC(endpoint_t *epptr)
{
    switch (endpoint_ptr_get_state(epptr)) {
    case EPState_Idle:
        break;

    default: {
        tcb_t *thread = ((tcb_t *)(endpoint_ptr_get_epQueue_head(epptr)));

        /* Make endpoint idle */
        endpoint_ptr_set_state(epptr, EPState_Idle);
        endpoint_ptr_set_epQueue_head(epptr, 0);
        endpoint_ptr_set_epQueue_tail(epptr, 0);

        /* Set all blocked threads to restart */
        for (; thread; thread = thread->tcbEPNext) {
            setThreadState (thread, ThreadState_Restart);
            tcbSchedEnqueue(thread);
        }

        rescheduleRequired();
        break;
    }
    }
}

void
cancelBadgedSends(endpoint_t *epptr, word_t badge)
{
    switch (endpoint_ptr_get_state(epptr)) {
    case EPState_Idle:
    case EPState_Recv:
        break;

    case EPState_Send: {
        tcb_t *thread, *next;
        tcb_queue_t queue = ep_ptr_get_queue(epptr);

        /* this is a de-optimisation for verification
         * reasons. it allows the contents of the endpoint
         * queue to be ignored during the for loop. */
        endpoint_ptr_set_state(epptr, EPState_Idle);
        endpoint_ptr_set_epQueue_head(epptr, 0);
        endpoint_ptr_set_epQueue_tail(epptr, 0);

        for (thread = queue.head; thread; thread = next) {
            word_t b = thread_state_ptr_get_blockingIPCBadge(
                           &thread->tcbState);
            next = thread->tcbEPNext;
            if (b == badge) {
                setThreadState(thread, ThreadState_Restart);
                tcbSchedEnqueue(thread);
                queue = tcbEPDequeue(thread, queue);
            }
        }
        ep_ptr_set_queue(epptr, queue);

        if (queue.head) {
            endpoint_ptr_set_state(epptr, EPState_Send);
        }

        rescheduleRequired();

        break;
    }

    default:
        _fail("invalid EP state", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c", 346, __func__);
    }
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/api/invocation.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

/* This header was generated by kernel/tools/invocation_header_gen.py.
 *
 * To add an invocation call number, edit libsel4/include/interfaces/sel4.xml.
 *
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/notification.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/timer.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */



static inline void resetTimer(void);
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/timer.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/ipi.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c" 2

exception_t
decodeIRQControlInvocation(word_t invLabel, word_t length,
                           cte_t *srcSlot, extra_caps_t excaps,
                           word_t *buffer)
{
    if (invLabel == IRQIssueIRQHandler) {
        word_t index, depth, irq_w;
        irq_t irq;
        cte_t *destSlot;
        cap_t cnodeCap;
        lookupSlot_ret_t lu_ret;
        exception_t status;

        if (length < 3 || excaps.excaprefs[0] == ((void *)0)) {
            current_syscall_error.type = seL4_TruncatedMessage;
            return EXCEPTION_SYSCALL_ERROR;
        }
        irq_w = getSyscallArg(0, buffer);
        irq = (irq_t) irq_w;
        index = getSyscallArg(1, buffer);
        depth = getSyscallArg(2, buffer);

        cnodeCap = excaps.excaprefs[0]->cap;

        status = Arch_checkIRQ(irq_w);
        if (status != EXCEPTION_NONE) {
            return status;
        }

        if (isIRQActive(irq)) {
            current_syscall_error.type = seL4_RevokeFirst;
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 59, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Rejecting request for IRQ %u. Already active.", (int)irq); kprintf(">>" "\033[0m" "\n"); } while (0);
            return EXCEPTION_SYSCALL_ERROR;
        }

        lu_ret = lookupTargetSlot(cnodeCap, index, depth);
        if (lu_ret.status != EXCEPTION_NONE) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 66, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Target slot for new IRQ Handler cap invalid: cap %lu, IRQ %u.", getExtraCPtr(buffer, 0), (int)irq); kprintf(">>" "\033[0m" "\n"); } while (0)
                                                        ;
            return lu_ret.status;
        }
        destSlot = lu_ret.slot;

        status = ensureEmptySlot(destSlot);
        if (status != EXCEPTION_NONE) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 74, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Target slot for new IRQ Handler cap not empty: cap %lu, IRQ %u.", getExtraCPtr(buffer, 0), (int)irq); kprintf(">>" "\033[0m" "\n"); } while (0)
                                                        ;
            return status;
        }

        setThreadState(ksCurThread, ThreadState_Restart);
        return invokeIRQControl(irq, destSlot, srcSlot);
    } else {
        return Arch_decodeIRQControlInvocation(invLabel, length, srcSlot, excaps, buffer);
    }
}

exception_t
invokeIRQControl(irq_t irq, cte_t *handlerSlot, cte_t *controlSlot)
{
    setIRQState(IRQSignal, irq);
    cteInsert(cap_irq_handler_cap_new(irq), controlSlot, handlerSlot);

    return EXCEPTION_NONE;
}

exception_t
decodeIRQHandlerInvocation(word_t invLabel, irq_t irq,
                           extra_caps_t excaps)
{
    switch (invLabel) {
    case IRQAckIRQ:
        setThreadState(ksCurThread, ThreadState_Restart);
        invokeIRQHandler_AckIRQ(irq);
        return EXCEPTION_NONE;

    case IRQSetIRQHandler: {
        cap_t ntfnCap;
        cte_t *slot;

        if (excaps.excaprefs[0] == ((void *)0)) {
            current_syscall_error.type = seL4_TruncatedMessage;
            return EXCEPTION_SYSCALL_ERROR;
        }
        ntfnCap = excaps.excaprefs[0]->cap;
        slot = excaps.excaprefs[0];

        if (cap_get_capType(ntfnCap) != cap_notification_cap ||
                !cap_notification_cap_get_capNtfnCanSend(ntfnCap)) {
            if (cap_get_capType(ntfnCap) != cap_notification_cap) {
                do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 118, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("IRQSetHandler: provided cap is not an notification capability."); kprintf(">>" "\033[0m" "\n"); } while (0);
            } else {
                do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 120, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("IRQSetHandler: caller does not have send rights on the endpoint."); kprintf(">>" "\033[0m" "\n"); } while (0);
            }
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 0;
            return EXCEPTION_SYSCALL_ERROR;
        }

        setThreadState(ksCurThread, ThreadState_Restart);
        invokeIRQHandler_SetIRQHandler(irq, ntfnCap, slot);
        return EXCEPTION_NONE;
    }

    case IRQClearIRQHandler:
        setThreadState(ksCurThread, ThreadState_Restart);
        invokeIRQHandler_ClearIRQHandler(irq);
        return EXCEPTION_NONE;

    default:
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 138, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("IRQHandler: Illegal operation."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }
}

void
invokeIRQHandler_AckIRQ(irq_t irq)
{
    maskInterrupt(false, irq);
}

void
invokeIRQHandler_SetIRQHandler(irq_t irq, cap_t cap, cte_t *slot)
{
    cte_t *irqSlot;

    irqSlot = intStateIRQNode + irq;
    /** GHOSTUPD: "(True, gs_set_assn cteDeleteOne_'proc (-1))" */
    cteDeleteOne(irqSlot);
    cteInsert(cap, slot, irqSlot);
}

void
invokeIRQHandler_ClearIRQHandler(irq_t irq)
{
    cte_t *irqSlot;

    irqSlot = intStateIRQNode + irq;
    /** GHOSTUPD: "(True, gs_set_assn cteDeleteOne_'proc (-1))" */
    cteDeleteOne(irqSlot);
}

void
deletingIRQHandler(irq_t irq)
{
    cte_t *slot;

    slot = intStateIRQNode + irq;
    /** GHOSTUPD: "(True, gs_set_assn cteDeleteOne_'proc (ucast cap_notification_cap))" */
    cteDeleteOne(slot);
}

void
deletedIRQHandler(irq_t irq)
{
    setIRQState(IRQInactive, irq);
}

void
handleInterrupt(irq_t irq)
{
    if (__builtin_expect(!!(irq > maxIRQ), 0)) {
        /* mask, ack and pretend it didn't happen. We assume that because
         * the interrupt controller for the platform returned this IRQ that
         * it is safe to use in mask and ack operations, even though it is
         * above the claimed maxIRQ. i.e. we're assuming maxIRQ is wrong */
        kprintf("Received IRQ %d, which is above the platforms maxIRQ of %d\n", (int)irq, (int)maxIRQ);
        maskInterrupt(true, irq);
        ackInterrupt(irq);
        return;
    }
    switch (intStateIRQTable[irq]) {
    case IRQSignal: {
        cap_t cap;

        cap = intStateIRQNode[irq].cap;

        if (cap_get_capType(cap) == cap_notification_cap &&
                cap_notification_cap_get_capNtfnCanSend(cap)) {
            sendSignal(((notification_t *)(cap_notification_cap_get_capNtfnPtr(cap))),
                       cap_notification_cap_get_capNtfnBadge(cap));
        } else {

            kprintf("Undelivered IRQ: %d\n", (int)irq);

        }
        maskInterrupt(true, irq);
        break;
    }

    case IRQTimer:
        timerTick();
        resetTimer();
        break;







    case IRQReserved:

        kprintf("Received reserved IRQ: %d", (int)irq);

        handleReservedIRQ(irq);
        break;

    case IRQInactive:
        /*
         * This case shouldn't happen anyway unless the hardware or
         * platform code is broken. Hopefully masking it again should make
         * the interrupt go away.
         */
        maskInterrupt(true, irq);

        kprintf("Received disabled IRQ: %d\n", (int)irq);

        break;

    default:
        /* No corresponding haskell error */
        _fail("Invalid IRQ state", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c", 251, __func__);
    }

    ackInterrupt(irq);
}

bool_t
isIRQActive(irq_t irq)
{
    return intStateIRQTable[irq] != IRQInactive;
}

void
setIRQState(irq_state_t irqState, irq_t irq)
{
    intStateIRQTable[irq] = irqState;
    maskInterrupt(irqState == IRQInactive, irq);
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c" 2

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/endpoint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c" 2

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/notification.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c" 2

static inline tcb_queue_t __attribute__((__pure__))
ntfn_ptr_get_queue(notification_t *ntfnPtr)
{
    tcb_queue_t ntfn_queue;

    ntfn_queue.head = (tcb_t*)notification_ptr_get_ntfnQueue_head(ntfnPtr);
    ntfn_queue.end = (tcb_t*)notification_ptr_get_ntfnQueue_tail(ntfnPtr);

    return ntfn_queue;
}

static inline void
ntfn_ptr_set_queue(notification_t *ntfnPtr, tcb_queue_t ntfn_queue)
{
    notification_ptr_set_ntfnQueue_head(ntfnPtr, (word_t)ntfn_queue.head);
    notification_ptr_set_ntfnQueue_tail(ntfnPtr, (word_t)ntfn_queue.end);
}

static inline void
ntfn_set_active(notification_t *ntfnPtr, word_t badge)
{
    notification_ptr_set_state(ntfnPtr, NtfnState_Active);
    notification_ptr_set_ntfnMsgIdentifier(ntfnPtr, badge);
}


void
sendSignal(notification_t *ntfnPtr, word_t badge)
{
    switch (notification_ptr_get_state(ntfnPtr)) {
    case NtfnState_Idle: {
        tcb_t *tcb = (tcb_t*)notification_ptr_get_ntfnBoundTCB(ntfnPtr);
        /* Check if we are bound and that thread is waiting for a message */
        if (tcb) {
            if (thread_state_ptr_get_tsType(&tcb->tcbState) == ThreadState_BlockedOnReceive) {
                /* Send and start thread running */
                cancelIPC(tcb);
                setThreadState(tcb, ThreadState_Running);
                setRegister(tcb, badgeRegister, badge);
                possibleSwitchTo(tcb);
# 78 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c"
            } else {
                /* In particular, this path is taken when a thread
                 * is waiting on a reply cap since BlockedOnReply
                 * would also trigger this path. I.e, a thread
                 * with a bound notification will not be awakened
                 * by signals on that bound notification if it is
                 * in the middle of an seL4_Call.
                 */
                ntfn_set_active(ntfnPtr, badge);
            }
        } else {
            ntfn_set_active(ntfnPtr, badge);
        }
        break;
    }
    case NtfnState_Waiting: {
        tcb_queue_t ntfn_queue;
        tcb_t *dest;

        ntfn_queue = ntfn_ptr_get_queue(ntfnPtr);
        dest = ntfn_queue.head;

        /* Haskell error "WaitingNtfn Notification must have non-empty queue" */
        if(!(dest)) _assert_fail("dest", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c", 101, __FUNCTION__);

        /* Dequeue TCB */
        ntfn_queue = tcbEPDequeue(dest, ntfn_queue);
        ntfn_ptr_set_queue(ntfnPtr, ntfn_queue);

        /* set the thread state to idle if the queue is empty */
        if (!ntfn_queue.head) {
            notification_ptr_set_state(ntfnPtr, NtfnState_Idle);
        }

        setThreadState(dest, ThreadState_Running);
        setRegister(dest, badgeRegister, badge);
        possibleSwitchTo(dest);
        break;
    }

    case NtfnState_Active: {
        word_t badge2;

        badge2 = notification_ptr_get_ntfnMsgIdentifier(ntfnPtr);
        badge2 |= badge;

        notification_ptr_set_ntfnMsgIdentifier(ntfnPtr, badge2);
        break;
    }
    }
}

void
receiveSignal(tcb_t *thread, cap_t cap, bool_t isBlocking)
{
    notification_t *ntfnPtr;

    ntfnPtr = ((notification_t *)(cap_notification_cap_get_capNtfnPtr(cap)));

    switch (notification_ptr_get_state(ntfnPtr)) {
    case NtfnState_Idle:
    case NtfnState_Waiting: {
        tcb_queue_t ntfn_queue;

        if (isBlocking) {
            /* Block thread on notification object */
            thread_state_ptr_set_tsType(&thread->tcbState,
                                        ThreadState_BlockedOnNotification);
            thread_state_ptr_set_blockingObject(&thread->tcbState,
                                                ((word_t)(ntfnPtr)));
            scheduleTCB(thread);

            /* Enqueue TCB */
            ntfn_queue = ntfn_ptr_get_queue(ntfnPtr);
            ntfn_queue = tcbEPAppend(thread, ntfn_queue);

            notification_ptr_set_state(ntfnPtr, NtfnState_Waiting);
            ntfn_ptr_set_queue(ntfnPtr, ntfn_queue);
        } else {
            doNBRecvFailedTransfer(thread);
        }

        break;
    }

    case NtfnState_Active:
        setRegister(
            thread, badgeRegister,
            notification_ptr_get_ntfnMsgIdentifier(ntfnPtr));
        notification_ptr_set_state(ntfnPtr, NtfnState_Idle);
        break;
    }
}

void
cancelAllSignals(notification_t *ntfnPtr)
{
    if (notification_ptr_get_state(ntfnPtr) == NtfnState_Waiting) {
        tcb_t *thread = ((tcb_t *)(notification_ptr_get_ntfnQueue_head(ntfnPtr)));

        notification_ptr_set_state(ntfnPtr, NtfnState_Idle);
        notification_ptr_set_ntfnQueue_head(ntfnPtr, 0);
        notification_ptr_set_ntfnQueue_tail(ntfnPtr, 0);

        /* Set all waiting threads to Restart */
        for (; thread; thread = thread->tcbEPNext) {
            setThreadState(thread, ThreadState_Restart);
            tcbSchedEnqueue(thread);
        }
        rescheduleRequired();
    }
}

void
cancelSignal(tcb_t *threadPtr, notification_t *ntfnPtr)
{
    tcb_queue_t ntfn_queue;

    /* Haskell error "cancelSignal: notification object must be in a waiting" state */
    if(!(notification_ptr_get_state(ntfnPtr) == NtfnState_Waiting)) _assert_fail("notification_ptr_get_state(ntfnPtr) == NtfnState_Waiting", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c", 197, __FUNCTION__);

    /* Dequeue TCB */
    ntfn_queue = ntfn_ptr_get_queue(ntfnPtr);
    ntfn_queue = tcbEPDequeue(threadPtr, ntfn_queue);
    ntfn_ptr_set_queue(ntfnPtr, ntfn_queue);

    /* Make notification object idle */
    if (!ntfn_queue.head) {
        notification_ptr_set_state(ntfnPtr, NtfnState_Idle);
    }

    /* Make thread inactive */
    setThreadState(threadPtr, ThreadState_Inactive);
}

void
completeSignal(notification_t *ntfnPtr, tcb_t *tcb)
{
    word_t badge;

    if (__builtin_expect(!!(tcb && notification_ptr_get_state(ntfnPtr) == NtfnState_Active), 1)) {
        badge = notification_ptr_get_ntfnMsgIdentifier(ntfnPtr);
        setRegister(tcb, badgeRegister, badge);
        notification_ptr_set_state(ntfnPtr, NtfnState_Idle);
    } else {
        _fail("tried to complete signal with inactive notification object", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c", 223, __func__);
    }
}

static inline void
doUnbindNotification(notification_t *ntfnPtr, tcb_t *tcbptr)
{
    notification_ptr_set_ntfnBoundTCB(ntfnPtr, (word_t) 0);
    tcbptr->tcbBoundNotification = ((void *)0);
}

void
unbindMaybeNotification(notification_t *ntfnPtr)
{
    tcb_t *boundTCB;
    boundTCB = (tcb_t*)notification_ptr_get_ntfnBoundTCB(ntfnPtr);

    if (boundTCB) {
        doUnbindNotification(ntfnPtr, boundTCB);
    }
}

void
unbindNotification(tcb_t *tcb)
{
    notification_t *ntfnPtr;
    ntfnPtr = tcb->tcbBoundNotification;

    if (ntfnPtr) {
        doUnbindNotification(ntfnPtr, tcb);
    }
}

void
bindNotification(tcb_t *tcb, notification_t *ntfnPtr)
{
    notification_ptr_set_ntfnBoundTCB(ntfnPtr, (word_t)tcb);
    tcb->tcbBoundNotification = ntfnPtr;
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/object/objecttype.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/notification.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/endpoint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/interrupt.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 31 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/string.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 32 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c" 2

word_t getObjectSize(word_t t, word_t userObjSize)
{
    if (t >= seL4_NonArchObjectTypeCount) {
        return Arch_getObjectSize(t);
    } else {
        switch (t) {
        case seL4_TCBObject:
            return 10;
        case seL4_EndpointObject:
            return 4;
        case seL4_NotificationObject:
            return 5;
        case seL4_CapTableObject:
            return 5 + userObjSize;
        case seL4_UntypedObject:
            return userObjSize;
        default:
            _fail("Invalid object type", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c", 50, __func__);
            return 0;
        }
    }
}

deriveCap_ret_t
deriveCap(cte_t *slot, cap_t cap)
{
    deriveCap_ret_t ret;

    if (isArchCap(cap)) {
        return Arch_deriveCap(slot, cap);
    }

    switch (cap_get_capType(cap)) {
    case cap_zombie_cap:
        ret.status = EXCEPTION_NONE;
        ret.cap = cap_null_cap_new();
        break;

    case cap_irq_control_cap:
        ret.status = EXCEPTION_NONE;
        ret.cap = cap_null_cap_new();
        break;

    case cap_untyped_cap:
        ret.status = ensureNoChildren(slot);
        if (ret.status != EXCEPTION_NONE) {
            ret.cap = cap_null_cap_new();
        } else {
            ret.cap = cap;
        }
        break;

    case cap_reply_cap:
        ret.status = EXCEPTION_NONE;
        ret.cap = cap_null_cap_new();
        break;

    default:
        ret.status = EXCEPTION_NONE;
        ret.cap = cap;
    }

    return ret;
}

finaliseCap_ret_t
finaliseCap(cap_t cap, bool_t final, bool_t exposed)
{
    finaliseCap_ret_t fc_ret;

    if (isArchCap(cap)) {
        return Arch_finaliseCap(cap, final);
    }

    switch (cap_get_capType(cap)) {
    case cap_endpoint_cap:
        if (final) {
            cancelAllIPC(((endpoint_t *)(cap_endpoint_cap_get_capEPPtr(cap))));
        }

        fc_ret.remainder = cap_null_cap_new();
        fc_ret.cleanupInfo = cap_null_cap_new();
        return fc_ret;

    case cap_notification_cap:
        if (final) {
            notification_t *ntfn = ((notification_t *)(cap_notification_cap_get_capNtfnPtr(cap)));

            unbindMaybeNotification(ntfn);
            cancelAllSignals(ntfn);
        }
        fc_ret.remainder = cap_null_cap_new();
        fc_ret.cleanupInfo = cap_null_cap_new();
        return fc_ret;

    case cap_reply_cap:
    case cap_null_cap:
    case cap_domain_cap:
        fc_ret.remainder = cap_null_cap_new();
        fc_ret.cleanupInfo = cap_null_cap_new();
        return fc_ret;
    }

    if (exposed) {
        _fail("finaliseCap: failed to finalise immediately.", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c", 137, __func__);
    }

    switch (cap_get_capType(cap)) {
    case cap_cnode_cap: {
        if (final) {
            fc_ret.remainder =
                Zombie_new(
                    1ul << cap_cnode_cap_get_capCNodeRadix(cap),
                    cap_cnode_cap_get_capCNodeRadix(cap),
                    cap_cnode_cap_get_capCNodePtr(cap)
                );
            fc_ret.cleanupInfo = cap_null_cap_new();
            return fc_ret;
        }
        break;
    }

    case cap_thread_cap: {
        if (final) {
            tcb_t *tcb;
            cte_t *cte_ptr;

            tcb = ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap)));
           
            cte_ptr = (((cte_t *)((word_t)(tcb)&~((1ul << (10))-1ul)))+(tcbCTable));
            unbindNotification(tcb);
            suspend(tcb);

            tcbDebugRemove(tcb);

            Arch_prepareThreadDelete(tcb);
            fc_ret.remainder =
                Zombie_new(
                    tcbCNodeEntries,
                    (1ul << (6)),
                    ((word_t)(cte_ptr))
                );
            fc_ret.cleanupInfo = cap_null_cap_new();
            return fc_ret;
        }
        break;
    }

    case cap_zombie_cap:
        fc_ret.remainder = cap;
        fc_ret.cleanupInfo = cap_null_cap_new();
        return fc_ret;

    case cap_irq_handler_cap:
        if (final) {
            irq_t irq = cap_irq_handler_cap_get_capIRQ(cap);

            deletingIRQHandler(irq);

            fc_ret.remainder = cap_null_cap_new();
            fc_ret.cleanupInfo = cap;
            return fc_ret;
        }
        break;
    }

    fc_ret.remainder = cap_null_cap_new();
    fc_ret.cleanupInfo = cap_null_cap_new();
    return fc_ret;
}

bool_t __attribute__((__const__))
hasCancelSendRights(cap_t cap)
{
    switch (cap_get_capType(cap)) {
    case cap_endpoint_cap:
        return cap_endpoint_cap_get_capCanSend(cap) &&
               cap_endpoint_cap_get_capCanReceive(cap) &&
               cap_endpoint_cap_get_capCanGrant(cap);

    default:
        return false;
    }
}

bool_t __attribute__((__const__))
sameRegionAs(cap_t cap_a, cap_t cap_b)
{
    switch (cap_get_capType(cap_a)) {
    case cap_untyped_cap:
        if (cap_get_capIsPhysical(cap_b)) {
            word_t aBase, bBase, aTop, bTop;

            aBase = (word_t)((word_t *)(cap_untyped_cap_get_capPtr(cap_a)));
            bBase = (word_t)cap_get_capPtr(cap_b);

            aTop = aBase + ((1ul << (cap_untyped_cap_get_capBlockSize(cap_a)))-1ul);
            bTop = bBase + ((1ul << (cap_get_capSizeBits(cap_b)))-1ul);

            return (aBase <= bBase) && (bTop <= aTop) && (bBase <= bTop);
        }
        break;

    case cap_endpoint_cap:
        if (cap_get_capType(cap_b) == cap_endpoint_cap) {
            return cap_endpoint_cap_get_capEPPtr(cap_a) ==
                   cap_endpoint_cap_get_capEPPtr(cap_b);
        }
        break;

    case cap_notification_cap:
        if (cap_get_capType(cap_b) == cap_notification_cap) {
            return cap_notification_cap_get_capNtfnPtr(cap_a) ==
                   cap_notification_cap_get_capNtfnPtr(cap_b);
        }
        break;

    case cap_cnode_cap:
        if (cap_get_capType(cap_b) == cap_cnode_cap) {
            return (cap_cnode_cap_get_capCNodePtr(cap_a) ==
                    cap_cnode_cap_get_capCNodePtr(cap_b)) &&
                   (cap_cnode_cap_get_capCNodeRadix(cap_a) ==
                    cap_cnode_cap_get_capCNodeRadix(cap_b));
        }
        break;

    case cap_thread_cap:
        if (cap_get_capType(cap_b) == cap_thread_cap) {
            return cap_thread_cap_get_capTCBPtr(cap_a) ==
                   cap_thread_cap_get_capTCBPtr(cap_b);
        }
        break;

    case cap_reply_cap:
        if (cap_get_capType(cap_b) == cap_reply_cap) {
            return cap_reply_cap_get_capTCBPtr(cap_a) ==
                   cap_reply_cap_get_capTCBPtr(cap_b);
        }
        break;

    case cap_domain_cap:
        if (cap_get_capType(cap_b) == cap_domain_cap) {
            return true;
        }
        break;

    case cap_irq_control_cap:
        if (cap_get_capType(cap_b) == cap_irq_control_cap ||
                cap_get_capType(cap_b) == cap_irq_handler_cap) {
            return true;
        }
        break;

    case cap_irq_handler_cap:
        if (cap_get_capType(cap_b) == cap_irq_handler_cap) {
            return (irq_t)cap_irq_handler_cap_get_capIRQ(cap_a) ==
                   (irq_t)cap_irq_handler_cap_get_capIRQ(cap_b);
        }
        break;

    default:
        if (isArchCap(cap_a) &&
                isArchCap(cap_b)) {
            return Arch_sameRegionAs(cap_a, cap_b);
        }
        break;
    }

    return false;
}

bool_t __attribute__((__const__))
sameObjectAs(cap_t cap_a, cap_t cap_b)
{
    if (cap_get_capType(cap_a) == cap_untyped_cap) {
        return false;
    }
    if (cap_get_capType(cap_a) == cap_irq_control_cap &&
            cap_get_capType(cap_b) == cap_irq_handler_cap) {
        return false;
    }
    if (isArchCap(cap_a) && isArchCap(cap_b)) {
        return Arch_sameObjectAs(cap_a, cap_b);
    }
    return sameRegionAs(cap_a, cap_b);
}

cap_t __attribute__((__const__))
updateCapData(bool_t preserve, word_t newData, cap_t cap)
{
    if (isArchCap(cap)) {
        return Arch_updateCapData(preserve, newData, cap);
    }

    switch (cap_get_capType(cap)) {
    case cap_endpoint_cap:
        if (!preserve && cap_endpoint_cap_get_capEPBadge(cap) == 0) {
            return cap_endpoint_cap_set_capEPBadge(cap, newData);
        } else {
            return cap_null_cap_new();
        }

    case cap_notification_cap:
        if (!preserve && cap_notification_cap_get_capNtfnBadge(cap) == 0) {
            return cap_notification_cap_set_capNtfnBadge(cap, newData);
        } else {
            return cap_null_cap_new();
        }

    case cap_cnode_cap: {
        word_t guard, guardSize;
        seL4_CNode_CapData_t w = { .words = { newData } };

        guardSize = seL4_CNode_CapData_get_guardSize(w);

        if (guardSize + cap_cnode_cap_get_capCNodeRadix(cap) > (1ul << (6))) {
            return cap_null_cap_new();
        } else {
            cap_t new_cap;

            guard = seL4_CNode_CapData_get_guard(w) & ((1ul << (guardSize))-1ul);
            new_cap = cap_cnode_cap_set_capCNodeGuard(cap, guard);
            new_cap = cap_cnode_cap_set_capCNodeGuardSize(new_cap,
                                                          guardSize);

            return new_cap;
        }
    }

    default:
        return cap;
    }
}

cap_t __attribute__((__const__))
maskCapRights(seL4_CapRights_t cap_rights, cap_t cap)
{
    if (isArchCap(cap)) {
        return Arch_maskCapRights(cap_rights, cap);
    }

    switch (cap_get_capType(cap)) {
    case cap_null_cap:
    case cap_domain_cap:
    case cap_cnode_cap:
    case cap_untyped_cap:
    case cap_reply_cap:
    case cap_irq_control_cap:
    case cap_irq_handler_cap:
    case cap_zombie_cap:
    case cap_thread_cap:
        return cap;

    case cap_endpoint_cap: {
        cap_t new_cap;

        new_cap = cap_endpoint_cap_set_capCanSend(
                      cap, cap_endpoint_cap_get_capCanSend(cap) &
                      seL4_CapRights_get_capAllowWrite(cap_rights));
        new_cap = cap_endpoint_cap_set_capCanReceive(
                      new_cap, cap_endpoint_cap_get_capCanReceive(cap) &
                      seL4_CapRights_get_capAllowRead(cap_rights));
        new_cap = cap_endpoint_cap_set_capCanGrant(
                      new_cap, cap_endpoint_cap_get_capCanGrant(cap) &
                      seL4_CapRights_get_capAllowGrant(cap_rights));

        return new_cap;
    }

    case cap_notification_cap: {
        cap_t new_cap;

        new_cap = cap_notification_cap_set_capNtfnCanSend(
                      cap, cap_notification_cap_get_capNtfnCanSend(cap) &
                      seL4_CapRights_get_capAllowWrite(cap_rights));
        new_cap = cap_notification_cap_set_capNtfnCanReceive(new_cap,
                                                             cap_notification_cap_get_capNtfnCanReceive(cap) &
                                                             seL4_CapRights_get_capAllowRead(cap_rights));

        return new_cap;
    }

    default:
        _fail("Invalid cap type", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c", 416, __func__); /* Sentinel for invalid enums */
    }
}

cap_t
createObject(object_t t, void *regionBase, word_t userSize, bool_t deviceMemory)
{
    /* Handle architecture-specific objects. */
    if (t >= (object_t) seL4_NonArchObjectTypeCount) {
        return Arch_createObject(t, regionBase, userSize, deviceMemory);
    }

    /* Create objects. */
    switch ((api_object_t)t) {
    case seL4_TCBObject: {
        tcb_t *tcb;
        tcb = ((tcb_t *)((word_t)regionBase + (1ul << ((10 - 1)))));
        /** AUXUPD: "(True, ptr_retyps 1
          (Ptr ((ptr_val \<acute>tcb) - ctcb_offset) :: (cte_C[5]) ptr)
            o (ptr_retyp \<acute>tcb))" */

        /* Setup non-zero parts of the TCB. */

        Arch_initContext(&tcb->tcbArch.tcbContext);
        tcb->tcbTimeSlice = 5;
        tcb->tcbDomain = ksCurDomain;

        /* Initialize the new TCB to the current core */
        ;


        strlcpy(tcb->tcbName, "child of: '", ((1ul << (10)) - (1ul << ((10 - 1))) - sizeof(tcb_t)));
        strlcat(tcb->tcbName, ksCurThread->tcbName, ((1ul << (10)) - (1ul << ((10 - 1))) - sizeof(tcb_t)));
        strlcat(tcb->tcbName, "'", ((1ul << (10)) - (1ul << ((10 - 1))) - sizeof(tcb_t)));
        tcbDebugAppend(tcb);


        return cap_thread_cap_new(((word_t)(tcb)));
    }

    case seL4_EndpointObject:
        /** AUXUPD: "(True, ptr_retyp
          (Ptr (ptr_val \<acute>regionBase) :: endpoint_C ptr))" */
        return cap_endpoint_cap_new(0, true, true, true,
                                    ((word_t)(regionBase)));

    case seL4_NotificationObject:
        /** AUXUPD: "(True, ptr_retyp
              (Ptr (ptr_val \<acute>regionBase) :: notification_C ptr))" */
        return cap_notification_cap_new(0, true, true,
                                        ((word_t)(regionBase)));

    case seL4_CapTableObject:
        /** AUXUPD: "(True, ptr_arr_retyps (2 ^ (unat \<acute>userSize))
          (Ptr (ptr_val \<acute>regionBase) :: cte_C ptr))" */
        /** GHOSTUPD: "(True, gs_new_cnodes (unat \<acute>userSize)
                                (ptr_val \<acute>regionBase)
                                (4 + unat \<acute>userSize))" */
        return cap_cnode_cap_new(userSize, 0, 0, ((word_t)(regionBase)));

    case seL4_UntypedObject:
        /*
         * No objects need to be created; instead, just insert caps into
         * the destination slots.
         */
        return cap_untyped_cap_new(0, !!deviceMemory, userSize, ((word_t)(regionBase)));

    default:
        _fail("Invalid object type", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c", 484, __func__);
    }
}

void
createNewObjects(object_t t, cte_t *parent, slot_range_t slots,
                 void *regionBase, word_t userSize, bool_t deviceMemory)
{
    word_t objectSize;
    void *nextFreeArea;
    word_t i;
    word_t totalObjectSize __attribute__((unused));

    /* ghost check that we're visiting less bytes than the max object size */
    objectSize = getObjectSize(t, userSize);
    totalObjectSize = slots.length << objectSize;
    /** GHOSTUPD: "(gs_get_assn cap_get_capSizeBits_'proc \<acute>ghost'state = 0
        \<or> \<acute>totalObjectSize <= gs_get_assn cap_get_capSizeBits_'proc \<acute>ghost'state, id)" */

    /* Create the objects. */
    nextFreeArea = regionBase;
    for (i = 0; i < slots.length; i++) {
        /* Create the object. */
        /** AUXUPD: "(True, typ_region_bytes (ptr_val \<acute> nextFreeArea + ((\<acute> i) << unat (\<acute> objectSize))) (unat (\<acute> objectSize)))" */
        cap_t cap = createObject(t, (void *)((word_t)nextFreeArea + (i << objectSize)), userSize, deviceMemory);

        /* Insert the cap into the user's cspace. */
        insertNewCap(parent, &slots.cnode[slots.offset + i], cap);

        /* Move along to the next region of memory. been merged into a formula of i */
    }
}

exception_t
decodeInvocation(word_t invLabel, word_t length,
                 cptr_t capIndex, cte_t *slot, cap_t cap,
                 extra_caps_t excaps, bool_t block, bool_t call,
                 word_t *buffer)
{
    if (isArchCap(cap)) {
        return Arch_decodeInvocation(invLabel, length, capIndex,
                                     slot, cap, excaps, call, buffer);
    }

    switch (cap_get_capType(cap)) {
    case cap_null_cap:
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 530, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Attempted to invoke a null cap #%lu.", capIndex); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidCapability;
        current_syscall_error.invalidCapNumber = 0;
        return EXCEPTION_SYSCALL_ERROR;

    case cap_zombie_cap:
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 536, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Attempted to invoke a zombie cap #%lu.", capIndex); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidCapability;
        current_syscall_error.invalidCapNumber = 0;
        return EXCEPTION_SYSCALL_ERROR;

    case cap_endpoint_cap:
        if (__builtin_expect(!!(!cap_endpoint_cap_get_capCanSend(cap)), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 544, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Attempted to invoke a read-only endpoint cap #%lu.", capIndex); kprintf(">>" "\033[0m" "\n"); } while (0)
                               ;
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 0;
            return EXCEPTION_SYSCALL_ERROR;
        }

        setThreadState(ksCurThread, ThreadState_Restart);
        return performInvocation_Endpoint(
                   ((endpoint_t *)(cap_endpoint_cap_get_capEPPtr(cap))),
                   cap_endpoint_cap_get_capEPBadge(cap),
                   cap_endpoint_cap_get_capCanGrant(cap), block, call);

    case cap_notification_cap: {
        if (__builtin_expect(!!(!cap_notification_cap_get_capNtfnCanSend(cap)), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 559, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Attempted to invoke a read-only notification cap #%lu.", capIndex); kprintf(">>" "\033[0m" "\n"); } while (0)
                               ;
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 0;
            return EXCEPTION_SYSCALL_ERROR;
        }

        setThreadState(ksCurThread, ThreadState_Restart);
        return performInvocation_Notification(
                   ((notification_t *)(cap_notification_cap_get_capNtfnPtr(cap))),
                   cap_notification_cap_get_capNtfnBadge(cap));
    }

    case cap_reply_cap:
        if (__builtin_expect(!!(cap_reply_cap_get_capReplyMaster(cap)), 0)) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 574, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Attempted to invoke an invalid reply cap #%lu.", capIndex); kprintf(">>" "\033[0m" "\n"); } while (0)
                               ;
            current_syscall_error.type = seL4_InvalidCapability;
            current_syscall_error.invalidCapNumber = 0;
            return EXCEPTION_SYSCALL_ERROR;
        }

        setThreadState(ksCurThread, ThreadState_Restart);
        return performInvocation_Reply(
                   ((tcb_t *)(cap_reply_cap_get_capTCBPtr(cap))), slot);

    case cap_thread_cap:
        return decodeTCBInvocation(invLabel, length, cap,
                                   slot, excaps, call, buffer);

    case cap_domain_cap:
        return decodeDomainInvocation(invLabel, length, excaps, buffer);

    case cap_cnode_cap:
        return decodeCNodeInvocation(invLabel, length, cap, excaps, buffer);

    case cap_untyped_cap:
        return decodeUntypedInvocation(invLabel, length, slot, cap, excaps,
                                       call, buffer);

    case cap_irq_control_cap:
        return decodeIRQControlInvocation(invLabel, length, slot,
                                          excaps, buffer);

    case cap_irq_handler_cap:
        return decodeIRQHandlerInvocation(invLabel,
                                          cap_irq_handler_cap_get_capIRQ(cap), excaps);

    default:
        _fail("Invalid cap type", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c", 607, __func__);
    }
}

exception_t
performInvocation_Endpoint(endpoint_t *ep, word_t badge,
                           bool_t canGrant, bool_t block,
                           bool_t call)
{
    sendIPC(block, call, badge, canGrant, ksCurThread, ep);

    return EXCEPTION_NONE;
}

exception_t
performInvocation_Notification(notification_t *ntfn, word_t badge)
{
    sendSignal(ntfn, badge);

    return EXCEPTION_NONE;
}

exception_t
performInvocation_Reply(tcb_t *thread, cte_t *slot)
{
    doReplyTransfer(ksCurThread, thread, slot);
    return EXCEPTION_NONE;
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/api/invocation.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

/* This header was generated by kernel/tools/invocation_header_gen.py.
 *
 * To add an invocation call number, edit libsel4/include/interfaces/sel4.xml.
 *
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/shared_types.h" 1
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
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/tcb.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/string.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/smp/ipi_inline.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c" 2



static exception_t
checkPrio(prio_t prio, tcb_t *auth)
{
    prio_t mcp;

    mcp = auth->tcbMCP;

    /* system invariant: existing MCPs are bounded */
    if(!(mcp <= seL4_MaxPrio)) _assert_fail("mcp <= seL4_MaxPrio", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c", 41, __FUNCTION__);

    /* can't assign a priority greater than our own mcp */
    if (prio > mcp) {
        current_syscall_error.type = seL4_RangeError;
        current_syscall_error.rangeErrorMin = seL4_MinPrio;
        current_syscall_error.rangeErrorMax = mcp;
        return EXCEPTION_SYSCALL_ERROR;
    }

    return EXCEPTION_NONE;
}

static inline void
addToBitmap(word_t cpu, word_t dom, word_t prio)
{
    word_t l1index;
    word_t l1index_inverted;

    l1index = prio_to_l1index(prio);
    l1index_inverted = invert_l1index(l1index);

    ksReadyQueuesL1Bitmap[dom] |= (1ul << (l1index));
    /* we invert the l1 index when accessed the 2nd level of the bitmap in
       order to increase the liklihood that high prio threads l2 index word will
       be on the same cache line as the l1 index word - this makes sure the
       fastpath is fastest for high prio threads */
    ksReadyQueuesL2Bitmap[dom][l1index_inverted] |= (1ul << (prio & ((1ul << (6))-1ul)));
}

static inline void
removeFromBitmap(word_t cpu, word_t dom, word_t prio)
{
    word_t l1index;
    word_t l1index_inverted;

    l1index = prio_to_l1index(prio);
    l1index_inverted = invert_l1index(l1index);
    ksReadyQueuesL2Bitmap[dom][l1index_inverted] &= ~(1ul << (prio & ((1ul << (6))-1ul)));
    if (__builtin_expect(!!(!ksReadyQueuesL2Bitmap[dom][l1index_inverted]), 0)) {
        ksReadyQueuesL1Bitmap[dom] &= ~(1ul << (l1index));
    }
}

/* Add TCB to the head of a scheduler queue */
void
tcbSchedEnqueue(tcb_t *tcb)
{
    if (!thread_state_get_tcbQueued(tcb->tcbState)) {
        tcb_queue_t queue;
        dom_t dom;
        prio_t prio;
        word_t idx;

        dom = tcb->tcbDomain;
        prio = tcb->tcbPriority;
        idx = ready_queues_index(dom, prio);
        queue = ksReadyQueues[idx];

        if (!queue.end) { /* Empty list */
            queue.end = tcb;
            addToBitmap(0, dom, prio);
        } else {
            queue.head->tcbSchedPrev = tcb;
        }
        tcb->tcbSchedPrev = ((void *)0);
        tcb->tcbSchedNext = queue.head;
        queue.head = tcb;

        ksReadyQueues[idx] = queue;

        thread_state_ptr_set_tcbQueued(&tcb->tcbState, true);
    }
}

/* Add TCB to the end of a scheduler queue */
void
tcbSchedAppend(tcb_t *tcb)
{
    if (!thread_state_get_tcbQueued(tcb->tcbState)) {
        tcb_queue_t queue;
        dom_t dom;
        prio_t prio;
        word_t idx;

        dom = tcb->tcbDomain;
        prio = tcb->tcbPriority;
        idx = ready_queues_index(dom, prio);
        queue = ksReadyQueues[idx];

        if (!queue.head) { /* Empty list */
            queue.head = tcb;
            addToBitmap(0, dom, prio);
        } else {
            queue.end->tcbSchedNext = tcb;
        }
        tcb->tcbSchedPrev = queue.end;
        tcb->tcbSchedNext = ((void *)0);
        queue.end = tcb;

        ksReadyQueues[idx] = queue;

        thread_state_ptr_set_tcbQueued(&tcb->tcbState, true);
    }
}

/* Remove TCB from a scheduler queue */
void
tcbSchedDequeue(tcb_t *tcb)
{
    if (thread_state_get_tcbQueued(tcb->tcbState)) {
        tcb_queue_t queue;
        dom_t dom;
        prio_t prio;
        word_t idx;

        dom = tcb->tcbDomain;
        prio = tcb->tcbPriority;
        idx = ready_queues_index(dom, prio);
        queue = ksReadyQueues[idx];

        if (tcb->tcbSchedPrev) {
            tcb->tcbSchedPrev->tcbSchedNext = tcb->tcbSchedNext;
        } else {
            queue.head = tcb->tcbSchedNext;
            if (__builtin_expect(!!(!tcb->tcbSchedNext), 1)) {
                removeFromBitmap(0, dom, prio);
            }
        }

        if (tcb->tcbSchedNext) {
            tcb->tcbSchedNext->tcbSchedPrev = tcb->tcbSchedPrev;
        } else {
            queue.end = tcb->tcbSchedPrev;
        }

        ksReadyQueues[idx] = queue;

        thread_state_ptr_set_tcbQueued(&tcb->tcbState, false);
    }
}


void tcbDebugAppend(tcb_t *tcb)
{
    /* prepend to the list */
    tcb->tcbDebugPrev = ((void *)0);

    tcb->tcbDebugNext = ksDebugTCBs;

    if (ksDebugTCBs) {
        ksDebugTCBs->tcbDebugPrev = tcb;
    }

    ksDebugTCBs = tcb;
}

void tcbDebugRemove(tcb_t *tcb)
{
    if(!(ksDebugTCBs != ((void *)0))) _assert_fail("NODE_STATE_ON_CORE(ksDebugTCBs, tcb->tcbAffinity) != NULL", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c", 200, __FUNCTION__);
    if (tcb == ksDebugTCBs) {
        ksDebugTCBs = ksDebugTCBs->tcbDebugNext;
    } else {
        if(!(tcb->tcbDebugPrev)) _assert_fail("tcb->tcbDebugPrev", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c", 204, __FUNCTION__);
        tcb->tcbDebugPrev->tcbDebugNext = tcb->tcbDebugNext;
    }

    if (tcb->tcbDebugNext) {
        tcb->tcbDebugNext->tcbDebugPrev = tcb->tcbDebugPrev;
    }

    tcb->tcbDebugPrev = ((void *)0);
    tcb->tcbDebugNext = ((void *)0);
}


/* Add TCB to the end of an endpoint queue */
tcb_queue_t
tcbEPAppend(tcb_t *tcb, tcb_queue_t queue)
{
    if (!queue.head) { /* Empty list */
        queue.head = tcb;
    } else {
        queue.end->tcbEPNext = tcb;
    }
    tcb->tcbEPPrev = queue.end;
    tcb->tcbEPNext = ((void *)0);
    queue.end = tcb;

    return queue;
}

/* Remove TCB from an endpoint queue */
tcb_queue_t
tcbEPDequeue(tcb_t *tcb, tcb_queue_t queue)
{
    if (tcb->tcbEPPrev) {
        tcb->tcbEPPrev->tcbEPNext = tcb->tcbEPNext;
    } else {
        queue.head = tcb->tcbEPNext;
    }

    if (tcb->tcbEPNext) {
        tcb->tcbEPNext->tcbEPPrev = tcb->tcbEPPrev;
    } else {
        queue.end = tcb->tcbEPPrev;
    }

    return queue;
}

cptr_t __attribute__((__pure__))
getExtraCPtr(word_t *bufferPtr, word_t i)
{
    return (cptr_t)bufferPtr[seL4_MsgMaxLength + 2 + i];
}

void
setExtraBadge(word_t *bufferPtr, word_t badge,
              word_t i)
{
    bufferPtr[seL4_MsgMaxLength + 2 + i] = badge;
}

void
setupCallerCap(tcb_t *sender, tcb_t *receiver)
{
    cte_t *replySlot, *callerSlot;
    cap_t masterCap __attribute__((unused)), callerCap __attribute__((unused));

    setThreadState(sender, ThreadState_BlockedOnReply);
    replySlot = (((cte_t *)((word_t)(sender)&~((1ul << (10))-1ul)))+(tcbReply));
    masterCap = replySlot->cap;
    /* Haskell error: "Sender must have a valid master reply cap" */
    if(!(cap_get_capType(masterCap) == cap_reply_cap)) _assert_fail("cap_get_capType(masterCap) == cap_reply_cap", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c", 275, __FUNCTION__);
    if(!(cap_reply_cap_get_capReplyMaster(masterCap))) _assert_fail("cap_reply_cap_get_capReplyMaster(masterCap)", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c", 276, __FUNCTION__);
    if(!(((tcb_t *)(cap_reply_cap_get_capTCBPtr(masterCap))) == sender)) _assert_fail("TCB_PTR(cap_reply_cap_get_capTCBPtr(masterCap)) == sender", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c", 277, __FUNCTION__);
    callerSlot = (((cte_t *)((word_t)(receiver)&~((1ul << (10))-1ul)))+(tcbCaller));
    callerCap = callerSlot->cap;
    /* Haskell error: "Caller cap must not already exist" */
    if(!(cap_get_capType(callerCap) == cap_null_cap)) _assert_fail("cap_get_capType(callerCap) == cap_null_cap", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c", 281, __FUNCTION__);
    cteInsert(cap_reply_cap_new(false, ((word_t)(sender))),
              replySlot, callerSlot);
}

void
deleteCallerCap(tcb_t *receiver)
{
    cte_t *callerSlot;

    callerSlot = (((cte_t *)((word_t)(receiver)&~((1ul << (10))-1ul)))+(tcbCaller));
    /** GHOSTUPD: "(True, gs_set_assn cteDeleteOne_'proc (ucast cap_reply_cap))" */
    cteDeleteOne(callerSlot);
}

extra_caps_t current_extra_caps;

exception_t
lookupExtraCaps(tcb_t* thread, word_t *bufferPtr, seL4_MessageInfo_t info)
{
    lookupSlot_raw_ret_t lu_ret;
    cptr_t cptr;
    word_t i, length;

    if (!bufferPtr) {
        current_extra_caps.excaprefs[0] = ((void *)0);
        return EXCEPTION_NONE;
    }

    length = seL4_MessageInfo_get_extraCaps(info);

    for (i = 0; i < length; i++) {
        cptr = getExtraCPtr(bufferPtr, i);

        lu_ret = lookupSlot(thread, cptr);
        if (lu_ret.status != EXCEPTION_NONE) {
            current_fault = seL4_Fault_CapFault_new(cptr, false);
            return lu_ret.status;
        }

        current_extra_caps.excaprefs[i] = lu_ret.slot;
    }
    if (i < ((1ul<<(seL4_MsgExtraCapBits))-1)) {
        current_extra_caps.excaprefs[i] = ((void *)0);
    }

    return EXCEPTION_NONE;
}

/* Copy IPC MRs from one thread to another */
word_t
copyMRs(tcb_t *sender, word_t *sendBuf, tcb_t *receiver,
        word_t *recvBuf, word_t n)
{
    word_t i;

    /* Copy inline words */
    for (i = 0; i < n && i < n_msgRegisters; i++) {
        setRegister(receiver, msgRegisters[i],
                    getRegister(sender, msgRegisters[i]));
    }

    if (!recvBuf || !sendBuf) {
        return i;
    }

    /* Copy out-of-line words */
    for (; i < n; i++) {
        recvBuf[i + 1] = sendBuf[i + 1];
    }

    return i;
}
# 663 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c"
static exception_t
invokeSetTLSBase(tcb_t *thread, word_t tls_base)
{
    setRegister(thread, TLS_BASE, tls_base);
    if (thread == ksCurThread) {
        /* If this is the current thread force a reschedule to ensure that any changes
         * to the TLS_BASE are realized */
        rescheduleRequired();
    }

    return EXCEPTION_NONE;
}

static exception_t
decodeSetTLSBase(cap_t cap, word_t length, word_t *buffer)
{
    word_t tls_base;

    if (length < 1) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 682, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetTLSBase: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    tls_base = getSyscallArg(0, buffer);

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeSetTLSBase(((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))), tls_base);
}

/* The following functions sit in the syscall error monad, but include the
 * exception cases for the preemptible bottom end, as they call the invoke
 * functions directly.  This is a significant deviation from the Haskell
 * spec. */
exception_t
decodeTCBInvocation(word_t invLabel, word_t length, cap_t cap,
                    cte_t* slot, extra_caps_t excaps, bool_t call,
                    word_t *buffer)
{
    /* Stall the core if we are operating on a remote TCB that is currently running */
   

    switch (invLabel) {
    case TCBReadRegisters:
        /* Second level of decoding */
        return decodeReadRegisters(cap, length, call, buffer);

    case TCBWriteRegisters:
        return decodeWriteRegisters(cap, length, buffer);

    case TCBCopyRegisters:
        return decodeCopyRegisters(cap, length, excaps, buffer);

    case TCBSuspend:
        /* Jump straight to the invoke */
        setThreadState(ksCurThread, ThreadState_Restart);
        return invokeTCB_Suspend(
                   ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))));

    case TCBResume:
        setThreadState(ksCurThread, ThreadState_Restart);
        return invokeTCB_Resume(
                   ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))));

    case TCBConfigure:
        return decodeTCBConfigure(cap, length, slot, excaps, buffer);

    case TCBSetPriority:
        return decodeSetPriority(cap, length, excaps, buffer);

    case TCBSetMCPriority:
        return decodeSetMCPriority(cap, length, excaps, buffer);

    case TCBSetSchedParams:
        return decodeSetSchedParams(cap, length, excaps, buffer);

    case TCBSetIPCBuffer:
        return decodeSetIPCBuffer(cap, length, slot, excaps, buffer);

    case TCBSetSpace:
        return decodeSetSpace(cap, length, slot, excaps, buffer);

    case TCBBindNotification:
        return decodeBindNotification(cap, excaps);

    case TCBUnbindNotification:
        return decodeUnbindNotification(cap);






        /* There is no notion of arch specific TCB invocations so this needs to go here */
# 776 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c"
    case TCBSetTLSBase:
        return decodeSetTLSBase(cap, length, buffer);

    default:
        /* Haskell: "throw IllegalOperation" */
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 781, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB: Illegal operation."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }
}

enum CopyRegistersFlags {
    CopyRegisters_suspendSource = 0,
    CopyRegisters_resumeTarget = 1,
    CopyRegisters_transferFrame = 2,
    CopyRegisters_transferInteger = 3
};

exception_t
decodeCopyRegisters(cap_t cap, word_t length,
                    extra_caps_t excaps, word_t *buffer)
{
    word_t transferArch;
    tcb_t *srcTCB;
    cap_t source_cap;
    word_t flags;

    if (length < 1 || excaps.excaprefs[0] == ((void *)0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 804, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB CopyRegisters: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    flags = getSyscallArg(0, buffer);

    transferArch = Arch_decodeTransfer(flags >> 8);

    source_cap = excaps.excaprefs[0]->cap;

    if (cap_get_capType(source_cap) == cap_thread_cap) {
        srcTCB = ((tcb_t *)(cap_thread_cap_get_capTCBPtr(source_cap)));
    } else {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 818, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB CopyRegisters: Invalid source TCB."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidCapability;
        current_syscall_error.invalidCapNumber = 1;
        return EXCEPTION_SYSCALL_ERROR;
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_CopyRegisters(
               ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))), srcTCB,
               flags & (1ul << (CopyRegisters_suspendSource)),
               flags & (1ul << (CopyRegisters_resumeTarget)),
               flags & (1ul << (CopyRegisters_transferFrame)),
               flags & (1ul << (CopyRegisters_transferInteger)),
               transferArch);

}

enum ReadRegistersFlags {
    ReadRegisters_suspend = 0
};

exception_t
decodeReadRegisters(cap_t cap, word_t length, bool_t call,
                    word_t *buffer)
{
    word_t transferArch, flags, n;
    tcb_t* thread;

    if (length < 2) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 847, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB ReadRegisters: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    flags = getSyscallArg(0, buffer);
    n = getSyscallArg(1, buffer);

    if (n < 1 || n > n_frameRegisters + n_gpRegisters) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 857, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB ReadRegisters: Attempted to read an invalid number of registers (%d).", (int)n); kprintf(">>" "\033[0m" "\n"); } while (0)
                         ;
        current_syscall_error.type = seL4_RangeError;
        current_syscall_error.rangeErrorMin = 1;
        current_syscall_error.rangeErrorMax = n_frameRegisters +
                                              n_gpRegisters;
        return EXCEPTION_SYSCALL_ERROR;
    }

    transferArch = Arch_decodeTransfer(flags >> 8);

    thread = ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap)));
    if (thread == ksCurThread) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 869, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB ReadRegisters: Attempted to read our own registers."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_ReadRegisters(
               ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))),
               flags & (1ul << (ReadRegisters_suspend)),
               n, transferArch, call);
}

enum WriteRegistersFlags {
    WriteRegisters_resume = 0
};

exception_t
decodeWriteRegisters(cap_t cap, word_t length, word_t *buffer)
{
    word_t flags, w;
    word_t transferArch;
    tcb_t* thread;

    if (length < 2) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 893, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB WriteRegisters: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    flags = getSyscallArg(0, buffer);
    w = getSyscallArg(1, buffer);

    if (length - 2 < w) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 903, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB WriteRegisters: Message too short for requested write size (%d/%d).", (int)(length - 2), (int)w); kprintf(">>" "\033[0m" "\n"); } while (0)
                                            ;
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    transferArch = Arch_decodeTransfer(flags >> 8);

    thread = ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap)));
    if (thread == ksCurThread) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 912, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB WriteRegisters: Attempted to write our own registers."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_WriteRegisters(thread,
                                    flags & (1ul << (WriteRegisters_resume)),
                                    w, transferArch, buffer);
}

/* SetPriority, SetMCPriority, SetSchedParams, SetIPCBuffer and SetSpace are all
 * specialisations of TCBConfigure. */
exception_t
decodeTCBConfigure(cap_t cap, word_t length, cte_t* slot,
                   extra_caps_t rootCaps, word_t *buffer)
{
    cte_t *bufferSlot, *cRootSlot, *vRootSlot;
    cap_t bufferCap, cRootCap, vRootCap;
    deriveCap_ret_t dc_ret;
    cptr_t faultEP;
    word_t cRootData, vRootData, bufferAddr;

    if (length < 4 || rootCaps.excaprefs[0] == ((void *)0)
            || rootCaps.excaprefs[1] == ((void *)0)
            || rootCaps.excaprefs[2] == ((void *)0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 938, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB Configure: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    faultEP = getSyscallArg(0, buffer);
    cRootData = getSyscallArg(1, buffer);
    vRootData = getSyscallArg(2, buffer);
    bufferAddr = getSyscallArg(3, buffer);

    cRootSlot = rootCaps.excaprefs[0];
    cRootCap = rootCaps.excaprefs[0]->cap;
    vRootSlot = rootCaps.excaprefs[1];
    vRootCap = rootCaps.excaprefs[1]->cap;
    bufferSlot = rootCaps.excaprefs[2];
    bufferCap = rootCaps.excaprefs[2]->cap;

    if (bufferAddr == 0) {
        bufferSlot = ((void *)0);
    } else {
        dc_ret = deriveCap(bufferSlot, bufferCap);
        if (dc_ret.status != EXCEPTION_NONE) {
            return dc_ret.status;
        }
        bufferCap = dc_ret.cap;

        exception_t e = checkValidIPCBuffer(bufferAddr, bufferCap);
        if (e != EXCEPTION_NONE) {
            return e;
        }
    }

    if (slotCapLongRunningDelete(
                (((cte_t *)((word_t)(cap_thread_cap_get_capTCBPtr(cap))&~((1ul << (10))-1ul)))+(tcbCTable))) ||
            slotCapLongRunningDelete(
                (((cte_t *)((word_t)(cap_thread_cap_get_capTCBPtr(cap))&~((1ul << (10))-1ul)))+(tcbVTable)))) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 974, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB Configure: CSpace or VSpace currently being deleted."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (cRootData != 0) {
        cRootCap = updateCapData(false, cRootData, cRootCap);
    }

    dc_ret = deriveCap(cRootSlot, cRootCap);
    if (dc_ret.status != EXCEPTION_NONE) {
        return dc_ret.status;
    }
    cRootCap = dc_ret.cap;

    if (cap_get_capType(cRootCap) != cap_cnode_cap) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 990, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB Configure: CSpace cap is invalid."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (vRootData != 0) {
        vRootCap = updateCapData(false, vRootData, vRootCap);
    }

    dc_ret = deriveCap(vRootSlot, vRootCap);
    if (dc_ret.status != EXCEPTION_NONE) {
        return dc_ret.status;
    }
    vRootCap = dc_ret.cap;

    if (!isValidVTableRoot(vRootCap)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1006, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB Configure: VSpace cap is invalid."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_ThreadControl(
               ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))), slot,
               faultEP, 0, 0,
               cRootCap, cRootSlot,
               vRootCap, vRootSlot,
               bufferAddr, bufferCap,
               bufferSlot, thread_control_update_space |
               thread_control_update_ipc_buffer);
}

exception_t
decodeSetPriority(cap_t cap, word_t length, extra_caps_t excaps, word_t *buffer)
{
    if (length < 1 || excaps.excaprefs[0] == ((void *)0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1026, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetPriority: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    prio_t newPrio = getSyscallArg(0, buffer);
    cap_t authCap = excaps.excaprefs[0]->cap;

    if (cap_get_capType(authCap) != cap_thread_cap) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1035, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Set priority: authority cap not a TCB."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidCapability;
        current_syscall_error.invalidCapNumber = 1;
        return EXCEPTION_SYSCALL_ERROR;
    }

    tcb_t *authTCB = ((tcb_t *)(cap_thread_cap_get_capTCBPtr(authCap)));
    exception_t status = checkPrio(newPrio, authTCB);
    if (status != EXCEPTION_NONE) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1045, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetPriority: Requested priority %lu too high (max %lu).", (unsigned long) newPrio, (unsigned long) authTCB->tcbMCP); kprintf(">>" "\033[0m" "\n"); } while (0)
                                                                           ;
        return status;
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_ThreadControl(
               ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))), ((void *)0),
               0, 0, newPrio,
               cap_null_cap_new(), ((void *)0),
               cap_null_cap_new(), ((void *)0),
               0, cap_null_cap_new(),
               ((void *)0), thread_control_update_priority);
}

exception_t
decodeSetMCPriority(cap_t cap, word_t length, extra_caps_t excaps, word_t *buffer)
{
    if (length < 1 || excaps.excaprefs[0] == ((void *)0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1063, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetMCPriority: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    prio_t newMcp = getSyscallArg(0, buffer);
    cap_t authCap = excaps.excaprefs[0]->cap;

    if (cap_get_capType(authCap) != cap_thread_cap) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1072, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetMCPriority: authority cap not a TCB."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidCapability;
        current_syscall_error.invalidCapNumber = 1;
        return EXCEPTION_SYSCALL_ERROR;
    }

    tcb_t *authTCB = ((tcb_t *)(cap_thread_cap_get_capTCBPtr(authCap)));
    exception_t status = checkPrio(newMcp, authTCB);
    if (status != EXCEPTION_NONE) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1082, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetMCPriority: Requested maximum controlled priority %lu too high (max %lu).", (unsigned long) newMcp, (unsigned long) authTCB->tcbMCP); kprintf(">>" "\033[0m" "\n"); } while (0)
                                                                          ;
        return status;
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_ThreadControl(
               ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))), ((void *)0),
               0, newMcp, 0,
               cap_null_cap_new(), ((void *)0),
               cap_null_cap_new(), ((void *)0),
               0, cap_null_cap_new(),
               ((void *)0), thread_control_update_mcp);
}

exception_t
decodeSetSchedParams(cap_t cap, word_t length, extra_caps_t excaps, word_t *buffer)
{
    if (length < 2 || excaps.excaprefs[0] == ((void *)0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1100, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetSchedParams: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    prio_t newMcp = getSyscallArg(0, buffer);
    prio_t newPrio = getSyscallArg(1, buffer);
    cap_t authCap = excaps.excaprefs[0]->cap;

    if (cap_get_capType(authCap) != cap_thread_cap) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1110, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetSchedParams: authority cap not a TCB."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidCapability;
        current_syscall_error.invalidCapNumber = 1;
        return EXCEPTION_SYSCALL_ERROR;
    }

    tcb_t *authTCB = ((tcb_t *)(cap_thread_cap_get_capTCBPtr(authCap)));
    exception_t status = checkPrio(newMcp, authTCB);
    if (status != EXCEPTION_NONE) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1120, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetSchedParams: Requested maximum controlled priority %lu too high (max %lu).", (unsigned long) newMcp, (unsigned long) authTCB->tcbMCP); kprintf(">>" "\033[0m" "\n"); } while (0)
                                                                          ;
        return status;
    }

    status = checkPrio(newPrio, authTCB);
    if (status != EXCEPTION_NONE) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1127, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetSchedParams: Requested priority %lu too high (max %lu).", (unsigned long) newMcp, (unsigned long) authTCB->tcbMCP); kprintf(">>" "\033[0m" "\n"); } while (0)
                                                                          ;
        return status;
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_ThreadControl(
               ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))), ((void *)0),
               0, newMcp, newPrio,
               cap_null_cap_new(), ((void *)0),
               cap_null_cap_new(), ((void *)0),
               0, cap_null_cap_new(),
               ((void *)0), thread_control_update_mcp |
               thread_control_update_priority);
}


exception_t
decodeSetIPCBuffer(cap_t cap, word_t length, cte_t* slot,
                   extra_caps_t excaps, word_t *buffer)
{
    cptr_t cptr_bufferPtr;
    cap_t bufferCap;
    cte_t *bufferSlot;

    if (length < 1 || excaps.excaprefs[0] == ((void *)0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1152, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetIPCBuffer: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    cptr_bufferPtr = getSyscallArg(0, buffer);
    bufferSlot = excaps.excaprefs[0];
    bufferCap = excaps.excaprefs[0]->cap;

    if (cptr_bufferPtr == 0) {
        bufferSlot = ((void *)0);
    } else {
        exception_t e;
        deriveCap_ret_t dc_ret;

        dc_ret = deriveCap(bufferSlot, bufferCap);
        if (dc_ret.status != EXCEPTION_NONE) {
            return dc_ret.status;
        }
        bufferCap = dc_ret.cap;
        e = checkValidIPCBuffer(cptr_bufferPtr, bufferCap);
        if (e != EXCEPTION_NONE) {
            return e;
        }
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_ThreadControl(
               ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))), slot,
               0, 0, 0,
               cap_null_cap_new(), ((void *)0),
               cap_null_cap_new(), ((void *)0),
               cptr_bufferPtr, bufferCap,
               bufferSlot, thread_control_update_ipc_buffer);
}

exception_t
decodeSetSpace(cap_t cap, word_t length, cte_t* slot,
               extra_caps_t excaps, word_t *buffer)
{
    cptr_t faultEP;
    word_t cRootData, vRootData;
    cte_t *cRootSlot, *vRootSlot;
    cap_t cRootCap, vRootCap;
    deriveCap_ret_t dc_ret;

    if (length < 3 || excaps.excaprefs[0] == ((void *)0)
            || excaps.excaprefs[1] == ((void *)0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1200, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetSpace: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    faultEP = getSyscallArg(0, buffer);
    cRootData = getSyscallArg(1, buffer);
    vRootData = getSyscallArg(2, buffer);

    cRootSlot = excaps.excaprefs[0];
    cRootCap = excaps.excaprefs[0]->cap;
    vRootSlot = excaps.excaprefs[1];
    vRootCap = excaps.excaprefs[1]->cap;

    if (slotCapLongRunningDelete(
                (((cte_t *)((word_t)(cap_thread_cap_get_capTCBPtr(cap))&~((1ul << (10))-1ul)))+(tcbCTable))) ||
            slotCapLongRunningDelete(
                (((cte_t *)((word_t)(cap_thread_cap_get_capTCBPtr(cap))&~((1ul << (10))-1ul)))+(tcbVTable)))) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1218, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetSpace: CSpace or VSpace currently being deleted."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (cRootData != 0) {
        cRootCap = updateCapData(false, cRootData, cRootCap);
    }

    dc_ret = deriveCap(cRootSlot, cRootCap);
    if (dc_ret.status != EXCEPTION_NONE) {
        return dc_ret.status;
    }
    cRootCap = dc_ret.cap;

    if (cap_get_capType(cRootCap) != cap_cnode_cap) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1234, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetSpace: Invalid CNode cap."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (vRootData != 0) {
        vRootCap = updateCapData(false, vRootData, vRootCap);
    }

    dc_ret = deriveCap(vRootSlot, vRootCap);
    if (dc_ret.status != EXCEPTION_NONE) {
        return dc_ret.status;
    }
    vRootCap = dc_ret.cap;

    if (!isValidVTableRoot(vRootCap)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1250, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB SetSpace: Invalid VSpace cap."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_ThreadControl(
               ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap))), slot,
               faultEP,
               0, 0,
               cRootCap, cRootSlot,
               vRootCap, vRootSlot,
               0, cap_null_cap_new(), ((void *)0), thread_control_update_space);
}

exception_t
decodeDomainInvocation(word_t invLabel, word_t length, extra_caps_t excaps, word_t *buffer)
{
    word_t domain;
    cap_t tcap;

    if (__builtin_expect(!!(invLabel != DomainSetSet), 0)) {
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (__builtin_expect(!!(length == 0), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1277, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Domain Configure: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    } else {
        domain = getSyscallArg(0, buffer);
        if (domain >= 1) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1284, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Domain Configure: invalid domain (%lu >= %u).", domain, 1); kprintf(">>" "\033[0m" "\n"); } while (0)
                                                 ;
            current_syscall_error.type = seL4_InvalidArgument;
            current_syscall_error.invalidArgumentNumber = 0;
            return EXCEPTION_SYSCALL_ERROR;
        }
    }

    if (__builtin_expect(!!(excaps.excaprefs[0] == ((void *)0)), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1292, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Domain Configure: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    tcap = excaps.excaprefs[0]->cap;
    if (__builtin_expect(!!(cap_get_capType(tcap) != cap_thread_cap), 0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1299, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Domain Configure: thread cap required."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidArgument;
        current_syscall_error.invalidArgumentNumber = 1;
        return EXCEPTION_SYSCALL_ERROR;
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    setDomain(((tcb_t *)(cap_thread_cap_get_capTCBPtr(tcap))), domain);
    return EXCEPTION_NONE;
}

exception_t
decodeBindNotification(cap_t cap, extra_caps_t excaps)
{
    notification_t *ntfnPtr;
    tcb_t *tcb;
    cap_t ntfn_cap;

    if (excaps.excaprefs[0] == ((void *)0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1318, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB BindNotification: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    tcb = ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap)));

    if (tcb->tcbBoundNotification) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1326, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB BindNotification: TCB already has a bound notification."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    ntfn_cap = excaps.excaprefs[0]->cap;

    if (cap_get_capType(ntfn_cap) == cap_notification_cap) {
        ntfnPtr = ((notification_t *)(cap_notification_cap_get_capNtfnPtr(ntfn_cap)));
    } else {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1336, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB BindNotification: Notification is invalid."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if (!cap_notification_cap_get_capNtfnCanReceive(ntfn_cap)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1342, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB BindNotification: Insufficient access rights"); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    if ((tcb_t*)notification_ptr_get_ntfnQueue_head(ntfnPtr)
            || (tcb_t*)notification_ptr_get_ntfnBoundTCB(ntfnPtr)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1349, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB BindNotification: Notification cannot be bound."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }


    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_NotificationControl(tcb, ntfnPtr);
}

exception_t
decodeUnbindNotification(cap_t cap)
{
    tcb_t *tcb;

    tcb = ((tcb_t *)(cap_thread_cap_get_capTCBPtr(cap)));

    if (!tcb->tcbBoundNotification) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 1367, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("TCB UnbindNotification: TCB already has no bound Notification."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeTCB_NotificationControl(tcb, ((void *)0));
}

/* The following functions sit in the preemption monad and implement the
 * preemptible, non-faulting bottom end of a TCB invocation. */
exception_t
invokeTCB_Suspend(tcb_t *thread)
{
    suspend(thread);
    return EXCEPTION_NONE;
}

exception_t
invokeTCB_Resume(tcb_t *thread)
{
    restart(thread);
    return EXCEPTION_NONE;
}

exception_t
invokeTCB_ThreadControl(tcb_t *target, cte_t* slot,
                        cptr_t faultep, prio_t mcp, prio_t priority,
                        cap_t cRoot_newCap, cte_t *cRoot_srcSlot,
                        cap_t vRoot_newCap, cte_t *vRoot_srcSlot,
                        word_t bufferAddr, cap_t bufferCap,
                        cte_t *bufferSrcSlot,
                        thread_control_flag_t updateFlags)
{
    exception_t e;
    cap_t tCap = cap_thread_cap_new((word_t)target);

    if (updateFlags & thread_control_update_space) {
        target->tcbFaultHandler = faultep;
    }

    if (updateFlags & thread_control_update_mcp) {
        setMCPriority(target, mcp);
    }

    if (updateFlags & thread_control_update_priority) {
        setPriority(target, priority);
    }

    if (updateFlags & thread_control_update_space) {
        cte_t *rootSlot;

        rootSlot = (((cte_t *)((word_t)(target)&~((1ul << (10))-1ul)))+(tcbCTable));
        e = cteDelete(rootSlot, true);
        if (e != EXCEPTION_NONE) {
            return e;
        }
        if (sameObjectAs(cRoot_newCap, cRoot_srcSlot->cap) &&
                sameObjectAs(tCap, slot->cap)) {
            cteInsert(cRoot_newCap, cRoot_srcSlot, rootSlot);
        }
    }

    if (updateFlags & thread_control_update_space) {
        cte_t *rootSlot;

        rootSlot = (((cte_t *)((word_t)(target)&~((1ul << (10))-1ul)))+(tcbVTable));
        e = cteDelete(rootSlot, true);
        if (e != EXCEPTION_NONE) {
            return e;
        }
        if (sameObjectAs(vRoot_newCap, vRoot_srcSlot->cap) &&
                sameObjectAs(tCap, slot->cap)) {
            cteInsert(vRoot_newCap, vRoot_srcSlot, rootSlot);
        }
    }

    if (updateFlags & thread_control_update_ipc_buffer) {
        cte_t *bufferSlot;

        bufferSlot = (((cte_t *)((word_t)(target)&~((1ul << (10))-1ul)))+(tcbBuffer));
        e = cteDelete(bufferSlot, true);
        if (e != EXCEPTION_NONE) {
            return e;
        }
        target->tcbIPCBuffer = bufferAddr;

        Arch_setTCBIPCBuffer(target, bufferAddr);

        if (bufferSrcSlot && sameObjectAs(bufferCap, bufferSrcSlot->cap) &&
                sameObjectAs(tCap, slot->cap)) {
            cteInsert(bufferCap, bufferSrcSlot, bufferSlot);
        }

        if (target == ksCurThread) {
            rescheduleRequired();
        }
    }

    return EXCEPTION_NONE;
}

exception_t
invokeTCB_CopyRegisters(tcb_t *dest, tcb_t *tcb_src,
                        bool_t suspendSource, bool_t resumeTarget,
                        bool_t transferFrame, bool_t transferInteger,
                        word_t transferArch)
{
    if (suspendSource) {
        suspend(tcb_src);
    }

    if (resumeTarget) {
        restart(dest);
    }

    if (transferFrame) {
        word_t i;
        word_t v;
        word_t pc;

        for (i = 0; i < n_frameRegisters; i++) {
            v = getRegister(tcb_src, frameRegisters[i]);
            setRegister(dest, frameRegisters[i], v);
        }

        pc = getRestartPC(dest);
        setNextPC(dest, pc);
    }

    if (transferInteger) {
        word_t i;
        word_t v;

        for (i = 0; i < n_gpRegisters; i++) {
            v = getRegister(tcb_src, gpRegisters[i]);
            setRegister(dest, gpRegisters[i], v);
        }
    }

    Arch_postModifyRegisters(dest);

    if (dest == ksCurThread) {
        /* If we modified the current thread we may need to reschedule
         * due to changing registers are only reloaded in Arch_switchToThread */
        rescheduleRequired();
    }

    return Arch_performTransfer(transferArch, tcb_src, dest);
}

/* ReadRegisters is a special case: replyFromKernel & setMRs are
 * unfolded here, in order to avoid passing the large reply message up
 * to the top level in a global (and double-copying). We prevent the
 * top-level replyFromKernel_success_empty() from running by setting the
 * thread state. Retype does this too.
 */
exception_t
invokeTCB_ReadRegisters(tcb_t *tcb_src, bool_t suspendSource,
                        word_t n, word_t arch, bool_t call)
{
    word_t i, j;
    exception_t e;
    tcb_t *thread;

    thread = ksCurThread;

    if (suspendSource) {
        suspend(tcb_src);
    }

    e = Arch_performTransfer(arch, tcb_src, ksCurThread);
    if (e != EXCEPTION_NONE) {
        return e;
    }

    if (call) {
        word_t *ipcBuffer;

        ipcBuffer = lookupIPCBuffer(true, thread);

        setRegister(thread, badgeRegister, 0);

        for (i = 0; i < n && i < n_frameRegisters && i < n_msgRegisters; i++) {
            setRegister(thread, msgRegisters[i],
                        getRegister(tcb_src, frameRegisters[i]));
        }

        if (ipcBuffer != ((void *)0) && i < n && i < n_frameRegisters) {
            for (; i < n && i < n_frameRegisters; i++) {
                ipcBuffer[i + 1] = getRegister(tcb_src, frameRegisters[i]);
            }
        }

        j = i;

        for (i = 0; i < n_gpRegisters && i + n_frameRegisters < n
                && i + n_frameRegisters < n_msgRegisters; i++) {
            setRegister(thread, msgRegisters[i + n_frameRegisters],
                        getRegister(tcb_src, gpRegisters[i]));
        }

        if (ipcBuffer != ((void *)0) && i < n_gpRegisters
                && i + n_frameRegisters < n) {
            for (; i < n_gpRegisters && i + n_frameRegisters < n; i++) {
                ipcBuffer[i + n_frameRegisters + 1] =
                    getRegister(tcb_src, gpRegisters[i]);
            }
        }

        setRegister(thread, msgInfoRegister, wordFromMessageInfo(
                        seL4_MessageInfo_new(0, 0, 0, i + j)));
    }
    setThreadState(thread, ThreadState_Running);

    return EXCEPTION_NONE;
}

exception_t
invokeTCB_WriteRegisters(tcb_t *dest, bool_t resumeTarget,
                         word_t n, word_t arch, word_t *buffer)
{
    word_t i;
    word_t pc;
    exception_t e;
    bool_t archInfo;

    e = Arch_performTransfer(arch, ksCurThread, dest);
    if (e != EXCEPTION_NONE) {
        return e;
    }

    if (n > n_frameRegisters + n_gpRegisters) {
        n = n_frameRegisters + n_gpRegisters;
    }

    archInfo = Arch_getSanitiseRegisterInfo(dest);

    for (i = 0; i < n_frameRegisters && i < n; i++) {
        /* Offset of 2 to get past the initial syscall arguments */
        setRegister(dest, frameRegisters[i],
                    sanitiseRegister(frameRegisters[i],
                                     getSyscallArg(i + 2, buffer), archInfo));
    }

    for (i = 0; i < n_gpRegisters && i + n_frameRegisters < n; i++) {
        setRegister(dest, gpRegisters[i],
                    sanitiseRegister(gpRegisters[i],
                                     getSyscallArg(i + n_frameRegisters + 2,
                                                   buffer), archInfo));
    }

    pc = getRestartPC(dest);
    setNextPC(dest, pc);

    Arch_postModifyRegisters(dest);

    if (resumeTarget) {
        restart(dest);
    }

    if (dest == ksCurThread) {
        /* If we modified the current thread we may need to reschedule
         * due to changing registers are only reloaded in Arch_switchToThread */
        rescheduleRequired();
    }

    return EXCEPTION_NONE;
}

exception_t
invokeTCB_NotificationControl(tcb_t *tcb, notification_t *ntfnPtr)
{
    if (ntfnPtr) {
        bindNotification(tcb, ntfnPtr);
    } else {
        unbindNotification(tcb);
    }

    return EXCEPTION_NONE;
}


void
setThreadName(tcb_t *tcb, const char *name)
{
    strlcpy(tcb->tcbName, name, ((1ul << (10)) - (1ul << ((10 - 1))) - sizeof(tcb_t)));
}


word_t
setMRs_syscall_error(tcb_t *thread, word_t *receiveIPCBuffer)
{
    switch (current_syscall_error.type) {
    case seL4_InvalidArgument:
        return setMR(thread, receiveIPCBuffer, 0,
                     current_syscall_error.invalidArgumentNumber);

    case seL4_InvalidCapability:
        return setMR(thread, receiveIPCBuffer, 0,
                     current_syscall_error.invalidCapNumber);

    case seL4_IllegalOperation:
        return 0;

    case seL4_RangeError:
        setMR(thread, receiveIPCBuffer, 0,
              current_syscall_error.rangeErrorMin);
        return setMR(thread, receiveIPCBuffer, 1,
                     current_syscall_error.rangeErrorMax);

    case seL4_AlignmentError:
        return 0;

    case seL4_FailedLookup:
        setMR(thread, receiveIPCBuffer, 0,
              current_syscall_error.failedLookupWasSource ? 1 : 0);
        return setMRs_lookup_failure(thread, receiveIPCBuffer,
                                     current_lookup_fault, 1);

    case seL4_TruncatedMessage:
    case seL4_DeleteFirst:
    case seL4_RevokeFirst:
        return 0;
    case seL4_NotEnoughMemory:
        return setMR(thread, receiveIPCBuffer, 0,
                     current_syscall_error.memoryLeft);
    default:
        _fail("Invalid syscall error", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c", 1695, __func__);
    }
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/failures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/gen_headers/api/invocation.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

/* This header was generated by kernel/tools/invocation_header_gen.py.
 *
 * To add an invocation call number, edit libsel4/include/interfaces/sel4.xml.
 *
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 18 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/untyped.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 19 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/objecttype.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/cnode.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/cspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c" 2

static word_t
alignUp(word_t baseValue, word_t alignment)
{
    return (baseValue + ((1ul << (alignment)) - 1)) & ~((1ul << (alignment))-1ul);
}

exception_t
decodeUntypedInvocation(word_t invLabel, word_t length, cte_t *slot,
                        cap_t cap, extra_caps_t excaps,
                        bool_t call, word_t *buffer)
{
    word_t newType, userObjSize, nodeIndex;
    word_t nodeDepth, nodeOffset, nodeWindow;
    cte_t *rootSlot __attribute__((unused));
    exception_t status;
    cap_t nodeCap;
    lookupSlot_ret_t lu_ret;
    word_t nodeSize;
    word_t i;
    slot_range_t slots;
    word_t freeRef, alignedFreeRef, objectSize, untypedFreeBytes;
    word_t freeIndex;
    bool_t deviceMemory;
    bool_t reset;

    /* Ensure operation is valid. */
    if (invLabel != UntypedRetype) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 52, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped cap: Illegal operation attempted."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_IllegalOperation;
        return EXCEPTION_SYSCALL_ERROR;
    }

    /* Ensure message length valid. */
    if (length < 6 || excaps.excaprefs[0] == ((void *)0)) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 59, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped invocation: Truncated message."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_TruncatedMessage;
        return EXCEPTION_SYSCALL_ERROR;
    }

    /* Fetch arguments. */
    newType = getSyscallArg(0, buffer);
    userObjSize = getSyscallArg(1, buffer);
    nodeIndex = getSyscallArg(2, buffer);
    nodeDepth = getSyscallArg(3, buffer);
    nodeOffset = getSyscallArg(4, buffer);
    nodeWindow = getSyscallArg(5, buffer);

    rootSlot = excaps.excaprefs[0];

    /* Is the requested object type valid? */
    if (newType >= seL4_ObjectTypeCount) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 76, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Invalid object type."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidArgument;
        current_syscall_error.invalidArgumentNumber = 0;
        return EXCEPTION_SYSCALL_ERROR;
    }

    objectSize = getObjectSize(newType, userObjSize);

    /* Exclude impossibly large object sizes. getObjectSize can overflow if userObjSize
       is close to 2^wordBits, which is nonsensical in any case, so we check that this
       did not happen. userObjSize will always need to be less than wordBits. */
    if (userObjSize >= (1ul << (6)) || objectSize > 47) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 88, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Invalid object size."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_RangeError;
        current_syscall_error.rangeErrorMin = 0;
        current_syscall_error.rangeErrorMax = 47;
        return EXCEPTION_SYSCALL_ERROR;
    }

    /* If the target object is a CNode, is it at least size 1? */
    if (newType == seL4_CapTableObject && userObjSize == 0) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 97, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Requested CapTable size too small."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidArgument;
        current_syscall_error.invalidArgumentNumber = 1;
        return EXCEPTION_SYSCALL_ERROR;
    }

    /* If the target object is a Untyped, is it at least size 4? */
    if (newType == seL4_UntypedObject && userObjSize < 4) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 105, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Requested UntypedItem size too small."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidArgument;
        current_syscall_error.invalidArgumentNumber = 1;
        return EXCEPTION_SYSCALL_ERROR;
    }

    /* Lookup the destination CNode (where our caps will be placed in). */
    if (nodeDepth == 0) {
        nodeCap = excaps.excaprefs[0]->cap;
    } else {
        cap_t rootCap = excaps.excaprefs[0]->cap;
        lu_ret = lookupTargetSlot(rootCap, nodeIndex, nodeDepth);
        if (lu_ret.status != EXCEPTION_NONE) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 118, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Invalid destination address."); kprintf(">>" "\033[0m" "\n"); } while (0);
            return lu_ret.status;
        }
        nodeCap = lu_ret.slot->cap;
    }

    /* Is the destination actually a CNode? */
    if (cap_get_capType(nodeCap) != cap_cnode_cap) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 126, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Destination cap invalid or read-only."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_FailedLookup;
        current_syscall_error.failedLookupWasSource = 0;
        current_lookup_fault = lookup_fault_missing_capability_new(nodeDepth);
        return EXCEPTION_SYSCALL_ERROR;
    }

    /* Is the region where the user wants to put the caps valid? */
    nodeSize = 1ul << cap_cnode_cap_get_capCNodeRadix(nodeCap);
    if (nodeOffset > nodeSize - 1) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 137, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Destination node offset #%d too large.", (int)nodeOffset); kprintf(">>" "\033[0m" "\n"); } while (0)
                                  ;
        current_syscall_error.type = seL4_RangeError;
        current_syscall_error.rangeErrorMin = 0;
        current_syscall_error.rangeErrorMax = nodeSize - 1;
        return EXCEPTION_SYSCALL_ERROR;
    }
    if (nodeWindow < 1 || nodeWindow > 256) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 145, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Number of requested objects (%d) too small or large.", (int)nodeWindow); kprintf(">>" "\033[0m" "\n"); } while (0)
                                  ;
        current_syscall_error.type = seL4_RangeError;
        current_syscall_error.rangeErrorMin = 1;
        current_syscall_error.rangeErrorMax = 256;
        return EXCEPTION_SYSCALL_ERROR;
    }
    if (nodeWindow > nodeSize - nodeOffset) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 152, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Requested destination window overruns size of node."); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_RangeError;
        current_syscall_error.rangeErrorMin = 1;
        current_syscall_error.rangeErrorMax = nodeSize - nodeOffset;
        return EXCEPTION_SYSCALL_ERROR;
    }

    /* Ensure that the destination slots are all empty. */
    slots.cnode = ((cte_t *)(cap_cnode_cap_get_capCNodePtr(nodeCap)));
    slots.offset = nodeOffset;
    slots.length = nodeWindow;
    for (i = nodeOffset; i < nodeOffset + nodeWindow; i++) {
        status = ensureEmptySlot(slots.cnode + i);
        if (status != EXCEPTION_NONE) {
            do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 167, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Slot #%d in destination window non-empty.", (int)i); kprintf(">>" "\033[0m" "\n"); } while (0)
                             ;
            return status;
        }
    }

    /*
     * Determine where in the Untyped region we should start allocating new
     * objects.
     *
     * If we have no children, we can start allocating from the beginning of
     * our untyped, regardless of what the "free" value in the cap states.
     * (This may happen if all of the objects beneath us got deleted).
     *
     * If we have children, we just keep allocating from the "free" value
     * recorded in the cap.
     */
    status = ensureNoChildren(slot);
    if (status != EXCEPTION_NONE) {
        freeIndex = cap_untyped_cap_get_capFreeIndex(cap);
        reset = false;
    } else {
        freeIndex = 0;
        reset = true;
    }
    freeRef = ((word_t)(((word_t)(cap_untyped_cap_get_capPtr(cap))) + ((freeIndex)<<4)));

    /*
     * Determine the maximum number of objects we can create, and return an
     * error if we don't have enough space.
     *
     * We don't need to worry about alignment in this case, because if anything
     * fits, it will also fit aligned up (by packing it on the right hand side
     * of the untyped).
     */
    untypedFreeBytes = (1ul << (cap_untyped_cap_get_capBlockSize(cap))) -
                       ((freeIndex)<<4);

    if ((untypedFreeBytes >> objectSize) < nodeWindow) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 209, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Insufficient memory " "(%lu * %lu bytes needed, %lu bytes available).", (word_t)nodeWindow, (objectSize >= (1ul << (6)) ? -1 : (1ul << objectSize)), (word_t)(untypedFreeBytes)); kprintf(">>" "\033[0m" "\n"); } while (0)



                                             ;
        current_syscall_error.type = seL4_NotEnoughMemory;
        current_syscall_error.memoryLeft = untypedFreeBytes;
        return EXCEPTION_SYSCALL_ERROR;
    }

    deviceMemory = cap_untyped_cap_get_capIsDevice(cap);
    if ((deviceMemory && !Arch_isFrameType(newType))
            && newType != seL4_UntypedObject) {
        do { kprintf("\033[0m" "\033[30;1m" "<<" "\033[0m" "\033[32m" "seL4(CPU %lu)" "\033[0m" "\033[30;1m" " [%s/%d T%p \"%s\" @%lx]: ", 0lu, __func__, 218, ksCurThread, ksCurThread->tcbName, (word_t)getRestartPC(ksCurThread)); kprintf("Untyped Retype: Creating kernel objects with device untyped"); kprintf(">>" "\033[0m" "\n"); } while (0);
        current_syscall_error.type = seL4_InvalidArgument;
        current_syscall_error.invalidArgumentNumber = 1;
        return EXCEPTION_SYSCALL_ERROR;
    }

    /* Align up the free region so that it is aligned to the target object's
     * size. */
    alignedFreeRef = alignUp(freeRef, objectSize);

    /* Perform the retype. */
    setThreadState(ksCurThread, ThreadState_Restart);
    return invokeUntyped_Retype(slot, reset,
                                (void*)alignedFreeRef, newType, userObjSize,
                                slots, deviceMemory);
}

static exception_t
resetUntypedCap(cte_t *srcSlot)
{
    cap_t prev_cap = srcSlot->cap;
    word_t block_size = cap_untyped_cap_get_capBlockSize(prev_cap);
    void *regionBase = ((word_t *)(cap_untyped_cap_get_capPtr(prev_cap)));
    int chunk = 8;
    word_t offset = ((cap_untyped_cap_get_capFreeIndex(prev_cap))<<4);
    exception_t status;
    bool_t deviceMemory = cap_untyped_cap_get_capIsDevice(prev_cap);

    if (offset == 0) {
        return EXCEPTION_NONE;
    }

    /** AUXUPD: "(True, typ_region_bytes (ptr_val \<acute>regionBase)
        (unat \<acute>block_size))" */
    /** GHOSTUPD: "(True, gs_clear_region (ptr_val \<acute>regionBase)
        (unat \<acute>block_size))" */

    if (deviceMemory || block_size < chunk) {
        if (! deviceMemory) {
            clearMemory(regionBase, block_size);
        }
        srcSlot->cap = cap_untyped_cap_set_capFreeIndex(prev_cap, 0);
    } else {
        for (offset = (((offset - 1) >> (chunk)) << (chunk));
                offset != - (1ul << (chunk)); offset -= (1ul << (chunk))) {
            clearMemory(((void *)(((word_t)(regionBase)) + (offset))), chunk);
            srcSlot->cap = cap_untyped_cap_set_capFreeIndex(prev_cap, ((offset)>>4));
            status = preemptionPoint();
            if (status != EXCEPTION_NONE) {
                return status;
            }
        }
    }
    return EXCEPTION_NONE;
}

exception_t
invokeUntyped_Retype(cte_t *srcSlot,
                     bool_t reset, void* retypeBase,
                     object_t newType, word_t userSize,
                     slot_range_t destSlots, bool_t deviceMemory)
{
    word_t freeRef;
    word_t totalObjectSize;
    void *regionBase = ((word_t *)(cap_untyped_cap_get_capPtr(srcSlot->cap)));
    exception_t status;

    freeRef = ((word_t)(((word_t)(regionBase)) + ((cap_untyped_cap_get_capFreeIndex(srcSlot->cap))<<4)));

    if (reset) {
        status = resetUntypedCap(srcSlot);
        if (status != EXCEPTION_NONE) {
            return status;
        }
    }

    /* Update the amount of free space left in this untyped cap. */
    totalObjectSize = destSlots.length << getObjectSize(newType, userSize);
    freeRef = (word_t)retypeBase + totalObjectSize;
    srcSlot->cap = cap_untyped_cap_set_capFreeIndex(srcSlot->cap,
                                                    (((word_t)(freeRef) - (word_t)(regionBase))>>4));

    /* Create new objects and caps. */
    createNewObjects(newType, srcSlot, destSlots, retypeBase, userSize,
                     deviceMemory);

    return EXCEPTION_NONE;
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c"
/* Copyright (c) 2010-2017, The Regents of the University of California
 * (Regents).  All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Regents nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
 * SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
 * HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

/* This file is copied from RISC-V tools. It's modified to work with seL4 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/string.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 31 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 32 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/string.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 33 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/fdt.h" 1
/* Copyright (c) 2010-2017, The Regents of the University of California
 * (Regents).  All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Regents nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
 * SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
 * HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

/* This file is copied from RISC-V tools. It's modified to work with seL4 */
# 34 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 35 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 36 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c" 2
# 46 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c"
struct fdt_header {
    uint32_t magic;
    uint32_t totalsize;
    uint32_t off_dt_struct;
    uint32_t off_dt_strings;
    uint32_t off_mem_rsvmap;
    uint32_t version;
    uint32_t last_comp_version; /* <= 17 */
    uint32_t boot_cpuid_phys;
    uint32_t size_dt_strings;
    uint32_t size_dt_struct;
};

struct fdt_scan_node {
    const struct fdt_scan_node *parent;
    const char *name;
    int address_cells;
    int size_cells;
};

struct fdt_scan_prop {
    const struct fdt_scan_node *node;
    const char *name;
    uint32_t *value;
    int len; // in bytes of value
};

/* workaround because string literals are not supported by the C parser */
const char fdt_address_cells[] = {'#', 'a', 'd', 'd', 'r', 'e', 's', 's', '-', 'c', 'e', 'l', 'l', 's', 0};
const char fdt_size_cells[] = {'#', 's', 'i', 'z', 'e', '-', 'c', 'e', 'l', 'l', 's', 0};
const char fdt_reg[] = {'r', 'e', 'g', 0};
const char fdt_device_type[] = {'d', 'e', 'v', 'i', 'c', 'e', '_', 't', 'y', 'p', 'e', 0};
const char fdt_memory[] = {'m', 'e', 'm', 'o', 'r', 'y', 0};

static inline uint32_t bswap(uint32_t x)
{
    uint32_t y = (x & 0x00FF00FF) << 8 | (x & 0xFF00FF00) >> 8;
    uint32_t z = (y & 0x0000FFFF) << 16 | (y & 0xFFFF0000) >> 16;
    return z;
}

struct scan_state {
    int found_memory;
    const uint32_t *reg_value;
    int reg_len;
};

static const uint32_t *fdt_get_address(const struct fdt_scan_node *node, const uint32_t *value, uint64_t *result)
{
    *result = 0;
    for (int cells = node->address_cells; cells > 0; --cells) {
        *result = (*result << 32) + bswap(*value++);
    }
    return value;
}

static const uint32_t *fdt_get_size(const struct fdt_scan_node *node, const uint32_t *value, uint64_t *result)
{
    *result = 0;
    for (int cells = node->size_cells; cells > 0; --cells) {
        *result = (*result << 32) + bswap(*value++);
    }
    return value;
}

static uint32_t *fdt_scan_helper(
    uint32_t *lex,
    const char *strings,
    struct fdt_scan_node *node,
    struct scan_state *state)
{
    struct fdt_scan_node child;
    struct fdt_scan_prop prop;
    int __attribute__((unused)) last = 0;

    child.parent = node;
    // these are the default cell counts, as per the FDT spec
    child.address_cells = 2;
    child.size_cells = 1;
    prop.node = node;

    while (1) {
        switch (bswap(lex[0])) {
        case 4: {
            lex += 1;
            break;
        }
        case 3: {
            if(!(!last)) _assert_fail("!last", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c", 134, __FUNCTION__);
            prop.name = strings + bswap(lex[2]);
            prop.len = bswap(lex[1]);
            prop.value = lex + 3;
            if (node && !strncmp(prop.name, fdt_address_cells, 14)) {
                node->address_cells = bswap(lex[3]);
            }
            if (node && !strncmp(prop.name, fdt_size_cells, 11)) {
                node->size_cells = bswap(lex[3]);
            }
            lex += 3 + (prop.len + 3) / 4;
            if (state->found_memory && strncmp(prop.name, fdt_reg, 3) == 0) {
                state->reg_value = prop.value;
                state->reg_len = prop.len;
            }
            if (strncmp(prop.name, fdt_device_type, 11) == 0 && strncmp((const char*)prop.value, fdt_memory, 6) == 0) {
                state->found_memory = 1;
            }
            break;
        }
        case 1: {
            uint32_t *lex_next;
            last = 1;
            child.name = (const char *)(lex + 1);
            lex_next = fdt_scan_helper(
                           lex + 2 + strnlen(child.name, 1024) / 4,
                           strings, &child, state);
            lex = lex_next;
            break;
        }
        case 2: {
            if (state->found_memory) {
                const uint32_t *value = state->reg_value;
                const uint32_t *end = value + state->reg_len / 4;

                if(!(state->reg_value && state->reg_len % 4 == 0)) _assert_fail("state->reg_value && state->reg_len % 4 == 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c", 169, __FUNCTION__);

                while (end - value > 0) {
                    uint64_t base, size;
                    value = fdt_get_address(node->parent, value, &base);
                    value = fdt_get_size (node->parent, value, &size);
                    if (!add_avail_p_reg((p_region_t) {
                    base, base + size
                })) {
                        kprintf("Failed to add physical memory region %llu-%llu\n", (unsigned long long)base, (unsigned long long)(base + size));
                    }
                }
                state->found_memory = 0;
            }
            return lex + 1;
        }
        default: { // FDT_END
            return lex;
        }
        }
    }
}

void keystoneFDT(uint64_t memstart, uint64_t memsize)
{
  if (!add_avail_p_reg((p_region_t){
        memstart, memstart + memsize
        })) {
    kprintf("Failed to add physical memory region %llu-%llu\n", (unsigned long long)memstart, (unsigned long long)(memstart + memsize))
                                                 ;
  }
}

void parseFDT(void *fdt)
{
    struct fdt_header *header = (struct fdt_header *)fdt;

    // Only process FDT that we understand
    if (bswap(header->magic) != 0xd00dfeed ||
            bswap(header->last_comp_version) > 17) {
        return;
    }

    const char *strings = (const char *)((word_t)fdt + bswap(header->off_dt_strings));
    uint32_t *lex = (uint32_t *)((word_t)fdt + bswap(header->off_dt_struct));

    struct scan_state state;
    state.found_memory = 0;

    fdt_scan_helper(lex, strings, 0, &state);
}

uint32_t fdt_size(void *fdt)
{
    struct fdt_header *header = (struct fdt_header *)fdt;

    // Only process FDT that we understand
    if (bswap(header->magic) != 0xd00dfeed ||
            bswap(header->last_comp_version) > 17) {
        return 0;
    }
    return bswap(header->totalsize);
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c"
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/types.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 20 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/machine/io.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/vspace.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 24 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/kernel/vspace.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 25 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 26 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/linker.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 27 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/devices.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 28 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/*
 *
 * Copyright 2016, 2017 Hesham Almatary, Data61/CSIRO <hesham.almatary@data61.csiro.au>
 * Copyright 2015, 2016 Hesham Almatary <heshamelmatary@gmail.com>
 */
# 29 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/sbi.h" 1
/* Copyright (c) 2010-2017, The Regents of the University of California
 * (Regents).  All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Regents nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
 * SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
 * HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

/* This file is copied from RISC-V tools/linux project, it might change for
 * new spec releases.
 */
# 30 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c" 2





/* Available physical memory regions on platform (RAM minus kernel image). */
/* NOTE: Regions are not allowed to be adjacent! */

static word_t __attribute__((__section__(".boot.data"))) num_avail_p_regs = 0;
static p_region_t __attribute__((__section__(".boot.data"))) avail_p_regs[2];

__attribute__((__section__(".boot.text"))) int get_num_avail_p_regs(void)
{
    return num_avail_p_regs;
}

__attribute__((__section__(".boot.text"))) p_region_t get_avail_p_reg(unsigned int i)
{
    return avail_p_regs[i];
}

__attribute__((__section__(".boot.text"))) bool_t add_avail_p_reg(p_region_t reg)
{
    if (num_avail_p_regs == 2) {
        return false;
    }
    avail_p_regs[num_avail_p_regs] = reg;
    num_avail_p_regs++;
    return true;
}

/**
   DONT_TRANSLATE
 */
interrupt_t
getActiveIRQ(void)
{

    uint64_t temp = 0;
    __asm__ volatile ("csrr %0, scause":"=r" (temp)::);

    if (!(temp & (1ul << (64 - 1)))) {
        return irqInvalid;
    }

    return (temp & 0xf);
}

/* Check for pending IRQ */
bool_t isIRQPending(void)
{
    return (getActiveIRQ() != irqInvalid);
}

/* Enable or disable irq according to the 'disable' flag. */
/**
   DONT_TRANSLATE
*/
void
maskInterrupt(bool_t disable, interrupt_t irq)
{
    if (disable) {
        if (irq > 1) {
            clear_sie_mask((1ul << (irq)));
        }
    } else {
        /* FIXME: currently only account for user/supervisor and timer interrupts */
        if (irq == 4 /* user timer */ || irq == 5 /* supervisor timer */) {
            set_sie_mask((1ul << (irq)));
        } else {
            /* TODO: account for external and PLIC interrupts */
        }
    }
}

/* Determine if the given IRQ should be reserved by the kernel. */
bool_t __attribute__((__const__))
isReservedIRQ(irq_t irq)
{
    kprintf("isReservedIRQ \n");
    return false;
}

/* Handle a platform-reserved IRQ. */
void
handleReservedIRQ(irq_t irq)
{
    kprintf("handleReservedIRQ \n");
}

void
ackInterrupt(irq_t irq)
{
    // don't ack the kernel timer interrupt, see the comment in resetTimer
    // to understand why
    if (irq != INTERRUPT_TIMER) {
        clear_sip_mask((1ul << (irq)));
    }
    //set_csr(scause, 0);

    if (irq == 1) {
        sbi_clear_ipi();
    }
}

static inline uint64_t get_cycles(void)
# 146 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c"
{
    uint64_t n;
    __asm__ __volatile__ (
        "rdtime %0"
        : "=r" (n));
    return n;
}


static inline int read_current_timer(unsigned long *timer_val)
{
    *timer_val = get_cycles();
    return 0;
}

void
resetTimer(void)
{
    uint64_t target;
    // ack the timer interrupt. we do this here as due to slow simulation platform there
    // is a race between us setting the new interrupt here, and the ackInterrupt call in
    // handleInterrupt that will happen at some point after this call to resetTimer
    clear_sip_mask(INTERRUPT_TIMER);
    // repeatedly try and set the timer in a loop as otherwise there is a race and we
    // may set a timeout in the past, resulting in it never getting triggered
    do {
        sbi_stop_enclave(0);
        target = get_cycles() + ((10000000 / 1000llu) * 2);
        sbi_set_timer(target);
    } while (get_cycles() > target);
}

/**
   DONT_TRANSLATE
 */
__attribute__((__section__(".boot.text"))) void
initTimer(void)
{
  sbi_set_timer(get_cycles() + ((10000000 / 1000llu) * 2)*10);
}

void plat_cleanL2Range(paddr_t start, paddr_t end)
{
}
void plat_invalidateL2Range(paddr_t start, paddr_t end)
{
}

void plat_cleanInvalidateL2Range(paddr_t start, paddr_t end)
{
}

/**
   DONT_TRANSLATE
 */
__attribute__((__section__(".boot.text"))) void
initL2Cache(void)
{
}

/**
   DONT_TRANSLATE
 */
__attribute__((__section__(".boot.text"))) void
initIRQController(void)
{
    /* Do nothing */
}

void
handleSpuriousIRQ(void)
{
    /* Do nothing */
    kprintf("Superior IRQ!! \n");
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/smp/ipi.c"
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/smp/ipi.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/64/mode/smp/ipi.h" 1
/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/smp/ipi.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/ipi.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 16 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/smp/ipi.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 17 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/smp/ipi.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/smp/lock.c"
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/smp/lock.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/smp/lock.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 15 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/smp/lock.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/string.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/string.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/string.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/string.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/string.c" 2

word_t strnlen(const char *s, word_t maxlen)
{
    word_t len;
    for (len = 0; len < maxlen && s[len]; len++);
    return len;
}

word_t strlcpy(char *dest, const char *src, word_t size)
{
    word_t len;
    for (len = 0; len + 1 < size && src[len]; len++) {
        dest[len] = src[len];
    }
    dest[len] = '\0';
    return len;
}

word_t strlcat(char *dest, const char *src, word_t size)
{
    word_t len;
    /* get to the end of dest */
    for (len = 0; len < size && dest[len]; len++);
    /* check that dest was at least 'size' length to prevent inserting
     * a null byte when we shouldn't */
    if (len < size) {
        for (; len + 1 < size && *src; len++, src++) {
            dest[len] = *src;
        }
        dest[len] = '\0';
    }
    return len;
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/util.c"
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/assert.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 12 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/util.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/stdint.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 13 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/util.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/util.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 14 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/util.c" 2

/*
 * memzero needs a custom type that allows us to use a word
 * that has the aliasing properties of a char.
 */
typedef unsigned long __attribute__((__may_alias__)) ulong_alias;

/*
 * Zero 'n' bytes of memory starting from 's'.
 *
 * 'n' and 's' must be word aligned.
 */
void
memzero(void *s, unsigned long n)
{
    uint8_t *p = s;

    /* Ensure alignment constraints are met. */
    if(!((unsigned long)s % sizeof(unsigned long) == 0)) _assert_fail("(unsigned long)s % sizeof(unsigned long) == 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/util.c", 32, __FUNCTION__);
    if(!(n % sizeof(unsigned long) == 0)) _assert_fail("n % sizeof(unsigned long) == 0", "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/util.c", 33, __FUNCTION__);

    /* We will never memzero an area larger than the largest current
       live object */
    /** GHOSTUPD: "(gs_get_assn cap_get_capSizeBits_'proc \<acute>ghost'state = 0
        \<or> \<acute>n <= gs_get_assn cap_get_capSizeBits_'proc \<acute>ghost'state, id)" */

    /* Write out words. */
    while (n != 0) {
        *(ulong_alias *)p = 0;
        p += sizeof(ulong_alias);
        n -= sizeof(ulong_alias);
    }
}

void* __attribute__((externally_visible))
memset(void *s, unsigned long c, unsigned long n)
{
    uint8_t *p;

    /*
     * If we are only writing zeros and we are word aligned, we can
     * use the optimized 'memzero' function.
     */
    if (__builtin_expect(!!(c == 0 && ((unsigned long)s % sizeof(unsigned long)) == 0 && (n % sizeof(unsigned long)) == 0), 1)) {
        memzero(s, n);
    } else {
        /* Otherwise, we use a slower, simple memset. */
        for (p = (uint8_t *)s; n > 0; n--, p++) {
            *p = (uint8_t)c;
        }
    }

    return s;
}

void* __attribute__((externally_visible))
memcpy(void* ptr_dst, const void* ptr_src, unsigned long n)
{
    uint8_t *p;
    const uint8_t *q;

    for (p = (uint8_t *)ptr_dst, q = (const uint8_t *)ptr_src; n; n--, p++, q++) {
        *p = *q;
    }

    return ptr_dst;
}

int __attribute__((__pure__))
strncmp(const char* s1, const char* s2, int n)
{
    word_t i;
    int diff;

    for (i = 0; i < n; i++) {
        diff = ((unsigned char*)s1)[i] - ((unsigned char*)s2)[i];
        if (diff != 0 || s1[i] == '\0') {
            return diff;
        }
    }

    return 0;
}

long __attribute__((__const__))
char_to_long(char c)
{
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    } else if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }
    return -1;
}

long __attribute__((__pure__))
str_to_long(const char* str)
{
    unsigned int base;
    long res;
    long val = 0;
    char c;

    /*check for "0x" */
    if (*str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X')) {
        base = 16;
        str += 2;
    } else {
        base = 10;
    }

    if (!*str) {
        return -1;
    }

    c = *str;
    while (c != '\0') {
        res = char_to_long(c);
        if (res == -1 || res >= base) {
            return -1;
        }
        val = val * base + res;
        str++;
        c = *str;
    }

    return val;
}


uint32_t __clzsi2(uint32_t x)
{
    uint32_t count = 0;
    while ( !(x & 0x80000000U) && count < 34) {
        x <<= 1;
        count++;
    }
    return count;
}

uint32_t __ctzsi2(uint32_t x)
{
    uint32_t count = 0;
    while ( !(x & 0x000000001) && count <= 32) {
        x >>= 1;
        count++;
    }
    return count;
}

uint32_t __clzdi2(uint64_t x)
{
    uint32_t count = 0;
    while ( !(x & 0x8000000000000000U) && count < 65) {
        x <<= 1;
        count++;
    }
    return count;
}

uint32_t __ctzdi2(uint64_t x)
{
    uint32_t count = 0;
    while ( !(x & 0x00000000000000001) && count <= 64) {
        x >>= 1;
        count++;
    }
    return count;
}
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/projects/sel4test/domain_schedule.c"
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

/* This is a domain schedule that is suitable for the domains tests in sel4test. All
 * sel4test actually needs is for every domain to be executable for some period of time
 * in order for the tests to make progress
 */

/* remember that this is compiled as part of the kernel, and so is referencing kernel headers */

# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/config.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 21 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/projects/sel4test/domain_schedule.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h" 1
/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */
# 22 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/projects/sel4test/domain_schedule.c" 2
# 1 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/model/statedata.h" 1
/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */
# 23 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/projects/sel4test/domain_schedule.c" 2

/* Default schedule. */
const dschedule_t ksDomSchedule[] = {
    { .domain = 0, .length = 1 },
# 75 "/home/wmin/riscv/keystone-master/keystone/keystone-seL4/projects/sel4test/domain_schedule.c"
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
