File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/arch/object/structures_gen.h:
1558:	static uint64_t cap_asid_pool_cap_get_capASIDBase(cap_t);
1572:	static uint64_t cap_asid_pool_cap_get_capASIDPool(cap_t);
1540:	static cap_t cap_asid_pool_cap_new(uint64_t, uint64_t);
1054:	static uint64_t cap_cnode_cap_get_capCNodeGuardSize(cap_t);
1094:	static uint64_t cap_cnode_cap_get_capCNodePtr(cap_t);
1080:	static uint64_t cap_cnode_cap_get_capCNodeRadix(cap_t);
1007:	static cap_t cap_cnode_cap_new(uint64_t, uint64_t, uint64_t, uint64_t);
783:	static uint64_t cap_endpoint_cap_get_capCanReceive(cap_t);
809:	static uint64_t cap_endpoint_cap_get_capCanSend(cap_t);
731:	static uint64_t cap_endpoint_cap_get_capEPBadge(cap_t);
835:	static uint64_t cap_endpoint_cap_get_capEPPtr(cap_t);
1305:	static uint64_t cap_frame_cap_get_capFBasePtr(cap_t);
1359:	static uint64_t cap_frame_cap_get_capFIsDevice(cap_t);
1279:	static uint64_t cap_frame_cap_get_capFMappedASID(cap_t);
1319:	static uint64_t cap_frame_cap_get_capFSize(cap_t);
1253:	static cap_t cap_frame_cap_new(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);
1293:	static cap_t cap_frame_cap_set_capFMappedASID(uint64_t, cap_t);
1387:	static cap_t cap_frame_cap_set_capFMappedAddress(uint64_t, cap_t);
1168:	static uint64_t cap_irq_handler_cap_get_capIRQ(cap_t);
870:	static uint64_t cap_notification_cap_get_capNtfnBadge(cap_t);
922:	static uint64_t cap_notification_cap_get_capNtfnCanSend(cap_t);
948:	static uint64_t cap_notification_cap_get_capNtfnPtr(cap_t);
1447:	static uint64_t cap_page_table_cap_get_capPTBasePtr(cap_t);
1461:	static uint64_t cap_page_table_cap_get_capPTIsMapped(cap_t);
1421:	static uint64_t cap_page_table_cap_get_capPTMappedASID(cap_t);
1399:	static cap_t cap_page_table_cap_new(uint64_t, uint64_t, uint64_t, uint64_t);
1475:	static cap_t cap_page_table_cap_set_capPTIsMapped(uint64_t, cap_t);
993:	static uint64_t cap_reply_cap_get_capReplyMaster(cap_t);
979:	static uint64_t cap_reply_cap_get_capTCBPtr(cap_t);
1124:	static uint64_t cap_thread_cap_get_capTCBPtr(cap_t);
1108:	static cap_t cap_thread_cap_new(uint64_t);
680:	static uint64_t cap_untyped_cap_get_capBlockSize(cap_t);
694:	static uint64_t cap_untyped_cap_get_capPtr(cap_t);
605:	static cap_t cap_untyped_cap_new(uint64_t, uint64_t, uint64_t, uint64_t);
1225:	static uint64_t cap_zombie_cap_get_capZombieType(cap_t);
403:	static void endpoint_ptr_set_epQueue_tail(endpoint_t *, uint64_t);
1867:	static lookup_fault_t lookup_fault_depth_mismatch_new(uint64_t, uint64_t);
1837:	static lookup_fault_t lookup_fault_missing_capability_new(uint64_t);
435:	static mdb_node_t mdb_node_new(uint64_t, uint64_t, uint64_t, uint64_t);
465:	static void mdb_node_ptr_set_mdbNext(mdb_node_t *, uint64_t);
25:	static void notification_ptr_set_ntfnBoundTCB(notification_t *, uint64_t);
63:	static void notification_ptr_set_ntfnQueue_head(notification_t *, uint64_t);
82:	static void notification_ptr_set_ntfnQueue_tail(notification_t *, uint64_t);
114:	
    static pte_t pte_new(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);
205:	static satp_t satp_new(uint64_t, uint64_t, uint64_t);
1655:	static uint64_t seL4_Fault_CapFault_get_inReceivePhase(seL4_Fault_t);
1684:	static uint64_t seL4_Fault_UnknownSyscall_get_syscallNumber(seL4_Fault_t);
1716:	static uint64_t seL4_Fault_UserException_get_number(seL4_Fault_t);
--Type <RET> for more, q to quit, c to continue without paging--c
1791:	static uint64_t seL4_Fault_VMFault_get_instructionFault(seL4_Fault_t);
314:	static void thread_state_ptr_set_blockingObject(thread_state_t *, uint64_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/build/kernel/generated/mode/api/shared_types_gen.h:
14:	static seL4_MessageInfo_t seL4_MessageInfo_new(uint64_t, uint64_t, uint64_t, uint64_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/api/syscall.h:
29:	static word_t getSyscallArg(word_t *, word_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/fastpath/fastpath.h:
111:	static void fastpath_restore(word_t, word_t, tcb_t *);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/arch/riscv/arch/machine/hardware.h:
82:	static unsigned int pageBitsForSize(vm_page_size_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/kernel/thread.h:
67:	static prio_t getHighestPrio(word_t);
59:	static word_t invert_l1index(word_t);
20:	static word_t ready_queues_index(word_t, word_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/object/structures.h:
393:	static void *cap_get_capPtr(cap_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/include/plat/spike/plat/machine/hardware.h:
117:	static paddr_t kpptr_to_paddr(void *);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/faults.c:
119:	bool_t handleFaultReply(tcb_t *, tcb_t *);
192:	word_t setMRs_fault(tcb_t *, tcb_t *, word_t *);
31:	static unsigned int setMRs_lookup_failure(unsigned int, lookup_fault_t, word_t *, tcb_t *);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/api/syscall.c:
39:	exception_t handleInterruptEntry(void);
433:	exception_t handleSyscall(syscall_t);
62:	exception_t handleUnknownSyscall(word_t);
233:	exception_t handleUserLevelFault(word_t, word_t);
245:	exception_t handleVMFaultEvent(vm_fault_type_t);
262:	static exception_t handleInvocation(bool_t, bool_t);
371:	static void handleRecv(bool_t);
336:	static void handleReply(void);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/api/faults.c:
31:	bool_t Arch_handleFaultReply(word_t, tcb_t *, tcb_t *);
43:	word_t Arch_setMRs_fault(tcb_t *, tcb_t *, word_t *, word_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/c_traps.c:
112:	void c_handle_exception(void);
99:	void c_handle_interrupt(void);
139:	void c_handle_syscall(word_t, word_t, word_t, word_t, word_t, word_t, word_t, syscall_t);
32:	void restore_user_context(void);
125:	void slowpath(syscall_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/idle.c:
29:	void halt(void);
22:	void idle_thread(void);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/boot.c:
62:	cap_t create_mapped_it_frame_cap(cap_t, pptr_t, vptr_t, asid_t, bool_t, bool_t);
427:	void init_kernel(uint64_t, paddr_t, uint64_t, paddr_t, paddr_t, paddr_t, vptr_t, uint64_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/thread.c:
55:	void Arch_activateIdleThread(tcb_t *);
36:	void Arch_configureIdleThread(tcb_t *);
61:	void Arch_postModifyRegisters(tcb_t *);
46:	void Arch_switchToIdleThread(void);
29:	void Arch_switchToThread(tcb_t *);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/kernel/vspace.c:
1262:	void Arch_userStackTrace(tcb_t *);
339:	void activate_kernel_vspace(void);
652:	exception_t checkValidIPCBuffer(vptr_t, cap_t);
384:	void copyGlobalMappings(pte_t *);
279:	cap_t create_it_address_space(cap_t, v_region_t);
246:	cap_t create_unmapped_it_frame_cap(pptr_t, bool_t);
1031:	exception_t decodeRISCVMMUInvocation(word_t, unsigned int, cptr_t, cte_t *, cap_t, extra_caps_t, word_t *);
528:	void deleteASID(asid_t, pte_t *);
481:	void deleteASIDPool(asid_t, asid_pool_t *);
455:	exception_t handleVMFault(tcb_t *, vm_fault_type_t);
645:	bool_t isValidVTableRoot(cap_t);
104:	void keystone_map_kernel_window(word_t, word_t);
395:	word_t *lookupIPCBuffer(bool_t, tcb_t *);
431:	lookupPTSlot_ret_t lookupPTSlot(pte_t *, vptr_t);
212:	void map_it_frame_cap(cap_t, cap_t);
181:	void map_it_pt_cap(cap_t, cap_t);
131:	void map_kernel_window(void);
677:	vm_rights_t maskVMRights(vm_rights_t, seL4_CapRights_t);
1231:	exception_t performPageInvocationMapPTE(cap_t, cte_t *, pte_t, pte_t *);
1239:	exception_t performPageInvocationRemapPTE(pte_t, pte_t *);
1245:	exception_t performPageInvocationUnmap(cap_t, cte_t *);
1181:	exception_t performPageTableInvocationMap(cap_t, cte_t *, pte_t, pte_t *);
1192:	exception_t performPageTableInvocationUnmap(cap_t, cte_t *);
618:	void setVMRoot(tcb_t *);
594:	void unmapPage(vm_page_size_t, asid_t, vptr_t, pptr_t);
541:	void unmapPageTable(asid_t, vptr_t, pte_t *);
345:	void write_it_asid_pool(cap_t, cap_t);
354:	static findVSpaceForASID_ret_t findVSpaceForASID(asid_t);
706:	static pte_t makeUserPTE(paddr_t, bool_t, vm_rights_t);
79:	static pte_t pte_next(word_t, bool_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/capdl.c:
19:	void capDL(void);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/hardware.c:
23:	word_t getRestartPC(tcb_t *);
29:	void setNextPC(tcb_t *, word_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/machine/io.c:
69:	void handle_exception(void);
109:	void putConsoleChar(unsigned char);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/interrupt.c:
25:	exception_t Arch_checkIRQ(word_t);
31:	exception_t Arch_decodeIRQControlInvocation(word_t, word_t, cte_t *, extra_caps_t, word_t *);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/objecttype.c:
207:	cap_t Arch_createObject(object_t, void *, int, bool_t);
264:	exception_t Arch_decodeInvocation(word_t, unsigned int, cptr_t, cte_t *, cap_t, extra_caps_t, bool_t, word_t *);
28:	deriveCap_ret_t Arch_deriveCap(cte_t *, cap_t);
86:	finaliseCap_ret_t Arch_finaliseCap(cap_t, bool_t);
185:	word_t Arch_getObjectSize(word_t);
285:	bool_t Arch_isFrameType(word_t);
72:	cap_t Arch_maskCapRights(seL4_CapRights_t, cap_t);
170:	bool_t Arch_sameObjectAs(cap_t, cap_t);
131:	bool_t Arch_sameRegionAs(cap_t, cap_t);
66:	cap_t Arch_updateCapData(bool_t, word_t, cap_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/arch/riscv/object/tcb.c:
27:	word_t Arch_decodeTransfer(word_t);
33:	exception_t Arch_performTransfer(word_t, tcb_t *, tcb_t *);
39:	void Arch_setTCBIPCBuffer(tcb_t *, word_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/assert.c:
32:	void _assert_fail(const char *, const char *, unsigned int, const char *);
16:	void _fail(const char *, const char *, unsigned int, const char *);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/fastpath/fastpath.c:
23:	void fastpath_call(word_t, word_t);
189:	void fastpath_reply_recv(word_t, word_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/boot.c:
53:	pptr_t alloc_region(word_t);
269:	pptr_t allocate_bi_frame(node_id_t, word_t, vptr_t);
244:	region_t allocate_extra_bi_region(word_t);
588:	void bi_finalise(void);
229:	void create_bi_frame_cap(cap_t, cap_t, pptr_t, vptr_t);
190:	void create_domain_cap(cap_t);
315:	create_frames_of_region_ret_t create_frames_of_region(cap_t, cap_t, region_t, bool_t, sword_t);
375:	bool_t create_idle_thread(void);
401:	tcb_t *create_initial_thread(cap_t, cap_t, vptr_t, vptr_t, vptr_t, cap_t);
208:	cap_t create_ipcbuf_frame(cap_t, cap_t, vptr_t);
169:	bool_t create_irq_cnode(void);
350:	cap_t create_it_asid_pool(cap_t);
565:	bool_t create_kernel_untypeds(cap_t, region_t, seL4_SlotPos);
137:	cap_t create_root_cnode(void);
526:	bool_t create_untypeds_for_region(cap_t, bool_t, region_t, seL4_SlotPos);
481:	void init_core_state(tcb_t *);
29:	bool_t insert_region(region_t);
303:	bool_t provide_cap(cap_t, cap_t);
120:	void write_slot(slot_ptr_t, cap_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/cspace.c:
20:	lookupCap_ret_t lookupCap(tcb_t *, cptr_t);
38:	lookupCapAndSlot_ret_t lookupCapAndSlot(tcb_t *, cptr_t);
58:	lookupSlot_raw_ret_t lookupSlot(tcb_t *, cptr_t);
73:	lookupSlot_ret_t lookupSlotForCNodeOp(bool_t, cap_t, cptr_t, word_t);
120:	lookupSlot_ret_t lookupSourceSlot(cap_t, cptr_t, word_t);
126:	lookupSlot_ret_t lookupTargetSlot(cap_t, cptr_t, word_t);
138:	resolveAddressBits_ret_t resolveAddressBits(cap_t, cptr_t, word_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/faulthandler.c:
106:	void handleDoubleFault(tcb_t *, seL4_Fault_t);
19:	void handleFault(tcb_t *);
31:	exception_t sendFaultIPC(tcb_t *);
71:	static void print_fault(seL4_Fault_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/kernel/thread.c:
54:	void activateThread(void);
327:	void chooseThread(void);
47:	void configureIdleThread(tcb_t *);
180:	void doFaultTransfer(word_t, tcb_t *, tcb_t *, word_t *);
102:	void doIPCTransfer(tcb_t *, endpoint_t *, word_t, bool_t, tcb_t *);
250:	void doNBRecvFailedTransfer(tcb_t *);
147:	void doNormalTransfer(tcb_t *, word_t *, endpoint_t *, word_t, bool_t, tcb_t *, word_t *);
119:	void doReplyTransfer(tcb_t *, tcb_t *, cte_t *);
406:	void possibleSwitchTo(tcb_t *);
460:	void rescheduleRequired(void);
90:	void restart(tcb_t *);
278:	void schedule(void);
428:	void scheduleTCB(tcb_t *);
372:	void setDomain(tcb_t *, dom_t);
385:	void setMCPriority(tcb_t *, prio_t);
391:	void setPriority(tcb_t *, prio_t);
421:	void setThreadState(tcb_t *, _thread_state_t);
82:	void suspend(tcb_t *);
362:	void switchToIdleThread(void);
351:	void switchToThread(tcb_t *);
438:	void timerTick(void);
269:	static void scheduleChooseNewThread(void);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/machine/io.c:
309:	word_t kprintf(const char *, ...);
76:	word_t print_unsigned_long(unsigned long, word_t);
19:	void putchar(char);
299:	word_t puts(const char *);
38:	static unsigned int print_string(const char *);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/model/preemption.c:
21:	exception_t preemptionPoint(void);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/cnode.c:
481:	void capSwapForDelete(cte_t *, cte_t *);
561:	exception_t cteDelete(cte_t *, bool_t);
741:	void cteDeleteOne(cte_t *);
414:	void cteInsert(cap_t, cte_t *, cte_t *);
450:	void cteMove(cap_t, cte_t *, cte_t *);
536:	exception_t cteRevoke(cte_t *);
496:	void cteSwap(cap_t, cte_t *, cap_t, cte_t *);
41:	exception_t decodeCNodeInvocation(word_t, word_t, cap_t, extra_caps_t, word_t *);
848:	exception_t ensureEmptySlot(cte_t *);
832:	exception_t ensureNoChildren(cte_t *);
910:	cte_t *getReceiveSlots(tcb_t *, word_t *);
761:	void insertNewCap(cte_t *, cte_t *, cap_t);
325:	exception_t invokeCNodeCancelBadgedSends(cap_t);
319:	exception_t invokeCNodeDelete(cte_t *);
337:	exception_t invokeCNodeInsert(cap_t, cte_t *, cte_t *);
345:	exception_t invokeCNodeMove(cap_t, cte_t *, cte_t *);
313:	exception_t invokeCNodeRevoke(cte_t *);
353:	exception_t invokeCNodeRotate(cap_t, cap_t, cte_t *, cte_t *, cte_t *);
367:	exception_t invokeCNodeSaveCaller(cte_t *);
859:	bool_t isFinalCapability(cte_t *);
791:	bool_t isMDBParentOf(cte_t *, cte_t *);
946:	cap_transfer_t loadCapTransfer(word_t *);
775:	void setupReplyMaster(tcb_t *);
890:	bool_t slotCapLongRunningDelete(cte_t *);
605:	static bool_t capRemovable(cte_t *, cap_t);
577:	static void emptySlot(cte_t *, cap_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/endpoint.c:
279:	void cancelAllIPC(endpoint_t *);
306:	void cancelBadgedSends(endpoint_t *, word_t);
224:	void cancelIPC(tcb_t *);
111:	void receiveIPC(tcb_t *, cap_t, bool_t);
203:	void replyFromKernel_error(tcb_t *);
216:	void replyFromKernel_success_empty(tcb_t *);
40:	void sendIPC(bool_t, bool_t, word_t, bool_t, tcb_t *, endpoint_t *);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/interrupt.c:
29:	exception_t decodeIRQControlInvocation(word_t, word_t, cte_t *, extra_caps_t, word_t *);
95:	exception_t decodeIRQHandlerInvocation(word_t, irq_t, extra_caps_t);
182:	void deletedIRQHandler(irq_t);
188:	void handleInterrupt(irq_t);
86:	exception_t invokeIRQControl(irq_t, cte_t *, cte_t *);
145:	void invokeIRQHandler_AckIRQ(irq_t);
162:	void invokeIRQHandler_ClearIRQHandler(irq_t);
151:	void invokeIRQHandler_SetIRQHandler(irq_t, cap_t, cte_t *);
258:	bool_t isIRQActive(irq_t);
264:	void setIRQState(irq_t, irq_state_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/notification.c:
257:	void bindNotification(tcb_t *, notification_t *);
173:	void cancelAllSignals(notification_t *);
192:	void cancelSignal(tcb_t *, notification_t *);
214:	void completeSignal(notification_t *, tcb_t *);
131:	void receiveSignal(tcb_t *, cap_t, bool_t);
50:	void sendSignal(notification_t *, word_t);
235:	void unbindMaybeNotification(notification_t *);
246:	void unbindNotification(tcb_t *);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/objecttype.c:
489:	void createNewObjects(object_t, cte_t *, slot_range_t, void *, word_t, bool_t);
421:	cap_t createObject(object_t, void *, word_t, bool_t);
518:	exception_t decodeInvocation(word_t, word_t, cptr_t, cte_t *, cap_t, extra_caps_t, bool_t, bool_t, word_t *);
57:	deriveCap_ret_t deriveCap(cte_t *, cap_t);
99:	finaliseCap_ret_t finaliseCap(cap_t, bool_t, bool_t);
33:	word_t getObjectSize(word_t, word_t);
205:	bool_t hasCancelSendRights(cap_t);
368:	cap_t maskCapRights(seL4_CapRights_t, cap_t);
612:	exception_t performInvocation_Endpoint(endpoint_t *, word_t, bool_t, bool_t, bool_t);
622:	exception_t performInvocation_Notification(notification_t *, word_t);
630:	exception_t performInvocation_Reply(tcb_t *, cte_t *);
305:	bool_t sameObjectAs(cap_t, cap_t);
219:	bool_t sameRegionAs(cap_t, cap_t);
321:	cap_t updateCapData(bool_t, word_t, cap_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/tcb.c:
332:	word_t copyMRs(tcb_t *, word_t *, tcb_t *, word_t *, word_t);
1311:	exception_t decodeBindNotification(cap_t, extra_caps_t);
795:	exception_t decodeCopyRegisters(cap_t, word_t, extra_caps_t, word_t *);
1266:	exception_t decodeDomainInvocation(word_t, word_t, extra_caps_t, word_t *);
840:	exception_t decodeReadRegisters(cap_t, word_t, bool_t, word_t *);
1144:	exception_t decodeSetIPCBuffer(cap_t, word_t, cte_t *, extra_caps_t, word_t *);
1060:	exception_t decodeSetMCPriority(cap_t, word_t, extra_caps_t, word_t *);
1023:	exception_t decodeSetPriority(cap_t, word_t, extra_caps_t, word_t *);
1097:	exception_t decodeSetSchedParams(cap_t, word_t, extra_caps_t, word_t *);
1189:	exception_t decodeSetSpace(cap_t, word_t, cte_t *, extra_caps_t, word_t *);
926:	exception_t decodeTCBConfigure(cap_t, word_t, cte_t *, extra_caps_t, word_t *);
698:	exception_t decodeTCBInvocation(word_t, word_t, cap_t, cte_t *, extra_caps_t, bool_t, word_t *);
1360:	exception_t decodeUnbindNotification(cap_t);
886:	exception_t decodeWriteRegisters(cap_t, word_t, word_t *);
287:	void deleteCallerCap(tcb_t *);
253:	cptr_t getExtraCPtr(word_t *, word_t);
1470:	exception_t invokeTCB_CopyRegisters(tcb_t *, tcb_t *, bool_t, bool_t, bool_t, bool_t, word_t);
1638:	exception_t invokeTCB_NotificationControl(tcb_t *, notification_t *);
1525:	exception_t invokeTCB_ReadRegisters(tcb_t *, bool_t, word_t, word_t, bool_t);
1386:	exception_t invokeTCB_Resume(tcb_t *);
1379:	exception_t invokeTCB_Suspend(tcb_t *);
1393:	exception_t invokeTCB_ThreadControl(tcb_t *, cte_t *, cptr_t, prio_t, prio_t, cap_t, cte_t *, cap_t, cte_t *, word_t, cap_t, cte_t *, thread_control_flag_t);
1586:	exception_t invokeTCB_WriteRegisters(tcb_t *, bool_t, word_t, word_t, word_t *);
299:	exception_t lookupExtraCaps(tcb_t *, word_t *, seL4_MessageInfo_t);
259:	void setExtraBadge(word_t *, word_t, word_t);
1658:	word_t setMRs_syscall_error(tcb_t *, word_t *);
1651:	void setThreadName(tcb_t *, const char *);
266:	void setupCallerCap(tcb_t *, tcb_t *);
184:	void tcbDebugAppend(tcb_t *);
198:	void tcbDebugRemove(tcb_t *);
219:	tcb_queue_t tcbEPAppend(tcb_t *, tcb_queue_t);
235:	tcb_queue_t tcbEPDequeue(tcb_t *, tcb_queue_t);
118:	void tcbSchedAppend(tcb_t *);
149:	void tcbSchedDequeue(tcb_t *);
87:	void tcbSchedEnqueue(tcb_t *);
34:	static exception_t checkPrio(tcb_t *, prio_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/object/untyped.c:
32:	exception_t decodeUntypedInvocation(word_t, word_t, cte_t *, cap_t, extra_caps_t, bool_t, word_t *);
275:	exception_t invokeUntyped_Retype(cte_t *, bool_t, void *, object_t, word_t, slot_range_t, bool_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/fdt.c:
221:	uint32_t fdt_size(void *);
192:	void keystoneFDT(uint64_t, uint64_t);
202:	void parseFDT(void *);
111:	static uint32_t *fdt_scan_helper(uint32_t *, const char *, struct fdt_scan_node *, struct scan_state *);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/plat/spike/machine/hardware.c:
121:	void ackInterrupt(irq_t);
51:	bool_t add_avail_p_reg(p_region_t);
65:	interrupt_t getActiveIRQ(void);
46:	p_region_t get_avail_p_reg(unsigned int);
41:	int get_num_avail_p_regs(void);
115:	void handleReservedIRQ(irq_t);
216:	void handleSpuriousIRQ(void);
202:	void initL2Cache(void);
182:	void initTimer(void);
79:	bool_t isIRQPending(void);
107:	bool_t isReservedIRQ(irq_t);
89:	void maskInterrupt(interrupt_t, bool_t);
187:	void plat_cleanL2Range(paddr_t, paddr_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/string.c:
32:	word_t strlcat(char *, const char *, word_t);
22:	word_t strlcpy(char *, const char *, word_t);
15:	word_t strnlen(const char *, word_t);

File /home/wmin/riscv/keystone-master/keystone/keystone-seL4/kernel/src/util.c:
166:	uint32_t __clzdi2(uint64_t);
146:	uint32_t __clzsi2(uint32_t);
176:	uint32_t __ctzdi2(uint64_t);
156:	uint32_t __ctzsi2(uint32_t);
99:	long char_to_long(char);
70:	void *memcpy(void *, const void *, unsigned long);
49:	void *memset(void *, unsigned long, unsigned long);
27:	void memzero(void *, unsigned long);
112:	long str_to_long(const char *);
83:	int strncmp(const char *, const char *, int);
