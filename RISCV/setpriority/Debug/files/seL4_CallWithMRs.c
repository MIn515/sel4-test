// seL4_CallWithMRs函数用于向指定的进程发送IPC消息并获取返回值。
LIBSEL4_INLINE_FUNC seL4_MessageInfo_t seL4_CallWithMRs(seL4_CPtr dest, seL4_MessageInfo_t msgInfo,
                                                        seL4_Word *mr0, seL4_Word *mr1, seL4_Word *mr2, seL4_Word *mr3)
{
    seL4_MessageInfo_t info;    // 定义一个seL4_MessageInfo_t类型的变量info，用于保存返回值
    seL4_Word msg0 = 0;    // 定义msg0~3，用于保存消息内容
    seL4_Word msg1 = 0;
    seL4_Word msg2 = 0;
    seL4_Word msg3 = 0;
    // 如果mr0~3不为空，且消息长度大于0、1、2、3，则将消息内容赋值给msg0~3
    if (mr0 != seL4_Null && seL4_MessageInfo_get_length(msgInfo) > 0) {
        msg0 = *mr0;
    }
    if (mr1 != seL4_Null && seL4_MessageInfo_get_length(msgInfo) > 1) {
        msg1 = *mr1;
    }
    if (mr2 != seL4_Null && seL4_MessageInfo_get_length(msgInfo) > 2) {
        msg2 = *mr2;
    }
    if (mr3 != seL4_Null && seL4_MessageInfo_get_length(msgInfo) > 3) {
        msg3 = *mr3;
    }
    // 调用riscv_sys_send_recv函数来发送IPC消息并获取返回值
    riscv_sys_send_recv(seL4_SysCall, dest, &dest, msgInfo.words[0], &info.words[0], &msg0, &msg1,
                        &msg2, &msg3, 0);
    // 如果mr0~3不为空，则将msg0~3的值赋给mr0~3
    if (mr0 != seL4_Null) {
        *mr0 = msg0;
    }
    if (mr1 != seL4_Null) {
        *mr1 = msg1;
    }
    if (mr2 != seL4_Null) {
        *mr2 = msg2;
    }
    if (mr3 != seL4_Null) {
        *mr3 = msg3;
    }
    // 返回获取到的返回值
    return info;
}
