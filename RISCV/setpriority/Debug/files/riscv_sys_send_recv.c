/**
 * riscv_sys_send_recv函数用于向指定的进程发送IPC消息并接收返回值。
 * @param sys 系统调用号
 * @param dest 目标进程的CPtr
 * @param out_badge 用于返回发送方进程的badge
 * @param info_arg 用于传递消息信息的参数
 * @param out_info 用于返回接收到的返回值
 * @param in_out_mr0~3 用于传递消息内容的参数（输入输出类型）
 * @param reply 未使用的参数
 */
static inline void riscv_sys_send_recv(seL4_Word sys, seL4_Word dest, seL4_Word *out_badge, seL4_Word info_arg,
                                       seL4_Word *out_info, seL4_Word *in_out_mr0, seL4_Word *in_out_mr1, seL4_Word *in_out_mr2,
                                       seL4_Word *in_out_mr3, LIBSEL4_UNUSED seL4_Word reply)
{
    // 将dest赋值给destptr
    register seL4_Word destptr asm("a0") = dest;
    // 将info_arg赋值给info
    register seL4_Word info asm("a1") = info_arg;
    /* Load beginning of the message into registers. */
    // 将in_out_mr0~3中的值分别赋值给msg0~3
    register seL4_Word msg0 asm("a2") = *in_out_mr0;
    register seL4_Word msg1 asm("a3") = *in_out_mr1;
    register seL4_Word msg2 asm("a4") = *in_out_mr2;
    register seL4_Word msg3 asm("a5") = *in_out_mr3;
    MCS_PARAM_DECL("a6");
    /* Perform the system call. */
    // 将sys赋值给scno
    register seL4_Word scno asm("a7") = sys;
    // 执行ecall指令，实现系统调用
    asm volatile(
        "ecall"
        : "+r"(msg0), "+r"(msg1), "+r"(msg2), "+r"(msg3),
        "+r"(info), "+r"(destptr)
        : "r"(scno) MCS_PARAM
        : "memory"
    );
    // 将info的值赋值给out_info
    *out_info = info;
    // 将destptr的值赋值给out_badge
    *out_badge = destptr;
    // 将msg0~3的值赋值给in_out_mr0~3
    *in_out_mr0 = msg0;
    *in_out_mr1 = msg1;
    *in_out_mr2 = msg2;
    *in_out_mr3 = msg3;
}
