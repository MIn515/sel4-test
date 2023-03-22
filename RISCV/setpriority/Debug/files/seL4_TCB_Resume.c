LIBSEL4_INLINE seL4_Error
seL4_TCB_Resume(seL4_TCB _service)
{
    // 定义一个名为 result 的 seL4_Error 类型的变量
    seL4_Error result;
    // 创建一个名为 tag 的 seL4_MessageInfo_t 类型的变量，并使用 seL4_MessageInfo_new 函数初始化消息标签
    seL4_MessageInfo_t tag = seL4_MessageInfo_new(TCBResume, 0, 0, 0);
    // 定义四个名为 mr0 到 mr3 的 seL4_Word 类型的变量
    seL4_Word mr0;
    seL4_Word mr1;
    seL4_Word mr2;
    seL4_Word mr3;
    // 将 mr0 到 mr3 初始化为 0
    mr0 = 0;
    mr1 = 0;
    mr2 = 0;
    mr3 = 0;
    // 调用 seL4_CallWithMRs 函数，向指定的线程发送消息，并等待接收回复消息
    seL4_MessageInfo_t output_tag = seL4_CallWithMRs(_service, tag, &mr0, &mr1, &mr2, &mr3);
    // 从回复消息中获取消息标签，并将其转换为 seL4_Error 类型的变量
    result = (seL4_Error) seL4_MessageInfo_get_label(output_tag);
    // 如果恢复线程的操作出现错误，则将 mr0 到 mr3 中的值写入 IPC 缓冲区中
    if (result != seL4_NoError) {
        seL4_SetMR(0, mr0);
        seL4_SetMR(1, mr1);
        seL4_SetMR(2, mr2);
        seL4_SetMR(3, mr3);
#ifdef CONFIG_KERNEL_INVOCATION_REPORT_ERROR_IPC
        // 如果启用了错误报告功能，则输出错误信息
        if (seL4_CanPrintError()) {
            seL4_DebugPutString(seL4_GetDebugError());
        }
#endif
    }
    // 返回 seL4_Error 类型的错误码
    return result;
}
