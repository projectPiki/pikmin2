#include "Dolphin/os.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRThread.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JKRThread_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__7JKRTask
    __vt__7JKRTask:
        .4byte 0
        .4byte 0
        .4byte __dt__7JKRTaskFv
        .4byte run__7JKRTaskFv
    .global __vt__9JKRThread
    __vt__9JKRThread:
        .4byte 0
        .4byte 0
        .4byte __dt__9JKRThreadFv
        .4byte run__9JKRThreadFv

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sThreadList__9JKRThread
    sThreadList__9JKRThread:
        .skip 0x38
    .global sTaskList__7JKRTask
    sTaskList__7JKRTask:
        .skip 0xC

    .section .sbss # 0x80514D80 - 0x80516360
    .global sManager__15JKRThreadSwitch
    sManager__15JKRThreadSwitch:
        .skip 0x4
    .global sTotalCount__15JKRThreadSwitch
    sTotalCount__15JKRThreadSwitch:
        .skip 0x4
    .global sTotalStart__15JKRThreadSwitch
    sTotalStart__15JKRThreadSwitch:
        .skip 0x4
    .global lbl_80514EE4
    lbl_80514EE4:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	80025638
 * Size:	0000B8
 * __ct__9JKRThreadFUlii
 */
JKRThread::JKRThread(unsigned long stackSize, int msgCount, int threadPriority)
    : JKRDisposer()
    , m_link(this)
{
	_68           = 0;
	_64           = 0;
	_6C           = 0;
	_60           = 0;
	_70           = 0;
	JKRHeap* heap = JKRHeap::findFromRoot(this);
	if (heap == nullptr) {
		heap = JKRHeap::sSystemHeap;
	}
	setCommon_heapSpecified(heap, stackSize, threadPriority);
	setCommon_mesgQueue(m_heap, msgCount);
}

/*
 * --INFO--
 * Address:	800256F0
 * Size:	0000A0
 * __ct__9JKRThreadFP7JKRHeapUlii
 */
JKRThread::JKRThread(JKRHeap* heap, unsigned long stackSize, int msgCount, int threadPriority)
    : JKRDisposer()
    , m_link(this)
{
	_68 = 0;
	_64 = 0;
	_6C = 0;
	_60 = 0;
	_70 = 0;
	if (heap == nullptr) {
		heap = JKRHeap::sCurrentHeap;
	}
	setCommon_heapSpecified(heap, stackSize, threadPriority);
	setCommon_mesgQueue(m_heap, msgCount);
}

/*
 * --INFO--
 * Address:	80025790
 * Size:	0000A8
 * __ct__9JKRThreadFP8OSThreadi
 */
JKRThread::JKRThread(OSThread* thread, int msgCount)
    : JKRDisposer()
    , m_link(this)
{
	_68         = 0;
	_64         = 0;
	_6C         = 0;
	_60         = 0;
	_70         = 0;
	m_heap      = nullptr;
	m_thread    = thread;
	m_stackSize = (u32)thread->stackEnd - (u32)thread->stackBase;
	m_stack     = thread->stackBase;
	setCommon_mesgQueue(JKRHeap::sSystemHeap, msgCount);
}

/*
 * --INFO--
 * Address:	80025838
 * Size:	0000D8
 * __dt__9JKRThreadFv
 */
JKRThread::~JKRThread()
{
	sThreadList.remove(&m_link);
	if (m_heap != nullptr) {
		if (!OSIsThreadTerminated(m_thread)) {
			OSDetachThread(m_thread);
			OSCancelThread(m_thread);
		}
		JKRHeap::free(m_stack, m_heap);
		JKRHeap::free(m_thread, m_heap);
	}
	JKRHeap::free(m_msgBuffer, nullptr);
}

/*
 * --INFO--
 * Address:	80025910
 * Size:	000070
 */
void JKRThread::setCommon_mesgQueue(JKRHeap* heap, int msgCount)
{
	m_msgCount  = msgCount;
	m_msgBuffer = (OSMessage*)JKRHeap::alloc(m_msgCount << 2, 0, heap);
	OSInitMessageQueue(&m_msgQueue, (void**)m_msgBuffer, m_msgCount);
	JKRThread::sThreadList.append(&m_link);
	_74 = 0;
	_78 = 0;
}

/*
 * --INFO--
 * Address:	80025980
 * Size:	000090
 */
BOOL JKRThread::setCommon_heapSpecified(JKRHeap* heap, unsigned long stackSize, int threadPriority)
{
	m_heap      = heap;
	m_stackSize = stackSize & ~0x1F;
	m_stack     = JKRHeap::alloc(m_stackSize, 0x20, m_heap);
	m_thread    = (OSThread*)JKRHeap::alloc(sizeof(OSThread), 0x20, m_heap);
	return OSCreateThread(m_thread, &JKRThread::start, this, (void*)((u32)m_stack + m_stackSize), m_stackSize, threadPriority, 1);
}

/*
 * --INFO--
 * Address:	80025A10
 * Size:	00002C
 */
void* JKRThread::start(void* thread) { return static_cast<JKRThread*>(thread)->run(); }

/*
 * --INFO--
 * Address:	80025A3C
 * Size:	000008
 */
// void* JKRThread::run() { return nullptr; }

/*
 * --INFO--
 * Address:	80025A44
 * Size:	000184
 */
void JKRThreadSwitch::loopProc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r0, 0x10(r3)
	cmpwi    r0, 0
	ble      lbl_80025BA8
	lwz      r3, 0xc(r31)
	addi     r0, r3, 1
	stw      r0, 0xc(r31)
	lwz      r3, 0xc(r31)
	lwz      r0, 0x10(r31)
	cmpw     r3, r0
	blt      lbl_80025BA8
	bl       OSDisableInterrupts
	bl       OSDisableScheduler
	bl       OSGetCurrentThread
	lis      r4, sThreadList__9JKRThread@ha
	lwz      r5, sThreadList__9JKRThread@l(r4)
	b        lbl_80025AC0

lbl_80025AA4:
	lwz      r4, 0(r5)
	lwz      r0, 0x2c(r4)
	cmplw    r0, r3
	bne      lbl_80025ABC
	addi     r30, r4, 0x60
	b        lbl_80025ACC

lbl_80025ABC:
	lwz      r5, 0xc(r5)

lbl_80025AC0:
	cmplwi   r5, 0
	bne      lbl_80025AA4
	li       r30, 0

lbl_80025ACC:
	li       r0, 0
	stw      r0, 0xc(r31)
	lwz      r29, sTotalStart__15JKRThreadSwitch@sda21(r13)
	lwz      r28, lbl_80514EE4@sda21(r13)
	bl       OSGetTime
	subfc    r0, r28, r4
	cmplwi   r30, 0
	stw      r0, 0x1c(r31)
	subfe    r0, r29, r3
	stw      r0, 0x18(r31)
	beq      lbl_80025B10
	bl       OSGetTick
	lwz      r4, 0xc(r30)
	lwz      r0, 4(r30)
	subf     r3, r4, r3
	add      r0, r0, r3
	stw      r0, 4(r30)

lbl_80025B10:
	lwz      r5, 0x20(r31)
	cmplwi   r5, 0
	beq      lbl_80025B38
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r4, 0x24(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80025B50

lbl_80025B38:
	mr       r3, r31
	lwz      r4, 0x24(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80025B50:
	lis      r3, sThreadList__9JKRThread@ha
	li       r0, 0
	lwz      r4, sThreadList__9JKRThread@l(r3)
	b        lbl_80025B74

lbl_80025B60:
	lwz      r3, 0(r4)
	stw      r0, 0x68(r3)
	stw      r0, 0x64(r3)
	stw      r0, 0x6c(r3)
	lwz      r4, 0xc(r4)

lbl_80025B74:
	cmplwi   r4, 0
	bne      lbl_80025B60
	li       r0, 0
	stw      r0, sTotalCount__15JKRThreadSwitch@sda21(r13)
	bl       OSGetTime
	cmplwi   r30, 0
	stw      r4, lbl_80514EE4@sda21(r13)
	stw      r3, sTotalStart__15JKRThreadSwitch@sda21(r13)
	beq      lbl_80025BA0
	bl       OSGetTick
	stw      r3, 0xc(r30)

lbl_80025BA0:
	bl       OSEnableScheduler
	bl       OSEnableInterrupts

lbl_80025BA8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80025BC8
 * Size:	000110
 * __dt__7JKRTaskFv
 */
JKRTask::~JKRTask() { sTaskList.remove(&_7C); }

/*
 * --INFO--
 * Address:	80025CD8
 * Size:	0002A4
 */
JKRTask* JKRTask::create(int, int, unsigned long, JKRHeap*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	or.      r30, r6, r6
	mr       r29, r3
	mr       r26, r4
	mr       r27, r5
	bne      lbl_80025D00
	lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)

lbl_80025D00:
	mr       r4, r30
	li       r3, 0x98
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_80025E34
	mr       r28, r31
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__9JKRThread@ha
	mr       r4, r31
	addi     r0, r3, __vt__9JKRThread@l
	addi     r3, r31, 0x18
	stw      r0, 0(r31)
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x68(r31)
	stw      r0, 0x64(r31)
	stw      r0, 0x6c(r31)
	stb      r0, 0x60(r31)
	stw      r0, 0x70(r31)
	bl       findFromRoot__7JKRHeapFPv
	cmplwi   r3, 0
	bne      lbl_80025D64
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)

lbl_80025D64:
	stw      r3, 0x28(r31)
	rlwinm   r0, r27, 0, 0, 0x1a
	li       r4, 0x20
	stw      r0, 0x5c(r31)
	lwz      r3, 0x5c(r31)
	lwz      r5, 0x28(r31)
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x58(r31)
	li       r3, 0x318
	li       r4, 0x20
	lwz      r5, 0x28(r31)
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x2c(r31)
	lis      r3, start__9JKRThreadFPv@ha
	addi     r4, r3, start__9JKRThreadFPv@l
	mr       r5, r31
	lwz      r7, 0x5c(r31)
	mr       r8, r26
	lwz      r0, 0x58(r31)
	li       r9, 1
	lwz      r3, 0x2c(r31)
	add      r6, r0, r7
	bl       OSCreateThread
	lwz      r5, 0x28(r31)
	li       r4, 0
	stw      r29, 0x54(r31)
	lwz      r0, 0x54(r31)
	slwi     r3, r0, 2
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x50(r31)
	addi     r3, r31, 0x30
	lwz      r4, 0x50(r31)
	lwz      r5, 0x54(r31)
	bl       OSInitMessageQueue
	lis      r3, sThreadList__9JKRThread@ha
	addi     r4, r31, 0x18
	addi     r3, r3, sThreadList__9JKRThread@l
	bl       append__10JSUPtrListFP10JSUPtrLink
	li       r5, 0
	lis      r3, __vt__7JKRTask@ha
	stw      r5, 0x74(r31)
	addi     r0, r3, __vt__7JKRTask@l
	mr       r4, r28
	addi     r3, r28, 0x7c
	stw      r5, 0x78(r31)
	stw      r0, 0(r28)
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0
	stw      r0, 0x94(r28)
	lwz      r3, 0x2c(r28)
	bl       OSResumeThread
	mr       r31, r28

lbl_80025E34:
	cmplwi   r31, 0
	bne      lbl_80025E44
	li       r3, 0
	b        lbl_80025F68

lbl_80025E44:
	mulli    r3, r29, 0xc
	mr       r4, r30
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x8c(r31)
	stw      r29, 0x90(r31)
	lwz      r0, 0x8c(r31)
	cmplwi   r0, 0
	bne      lbl_80025E90
	cmplwi   r31, 0
	beq      lbl_80025E88
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80025E88:
	li       r3, 0
	b        lbl_80025F68

lbl_80025E90:
	cmpwi    r29, 0
	li       r12, 0
	ble      lbl_80025F54
	cmpwi    r29, 8
	addi     r3, r29, -8
	ble      lbl_80025F2C
	addi     r0, r3, 7
	li       r11, 0
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80025F2C

lbl_80025EC0:
	lwz      r3, 0x8c(r31)
	li       r10, 0
	addi     r8, r11, 0xc
	addi     r7, r11, 0x18
	stwx     r10, r3, r11
	addi     r6, r11, 0x24
	addi     r5, r11, 0x30
	addi     r4, r11, 0x3c
	lwz      r9, 0x8c(r31)
	addi     r3, r11, 0x48
	addi     r0, r11, 0x54
	addi     r11, r11, 0x60
	stwx     r10, r9, r8
	addi     r12, r12, 8
	lwz      r8, 0x8c(r31)
	stwx     r10, r8, r7
	lwz      r7, 0x8c(r31)
	stwx     r10, r7, r6
	lwz      r6, 0x8c(r31)
	stwx     r10, r6, r5
	lwz      r5, 0x8c(r31)
	stwx     r10, r5, r4
	lwz      r4, 0x8c(r31)
	stwx     r10, r4, r3
	lwz      r3, 0x8c(r31)
	stwx     r10, r3, r0
	bdnz     lbl_80025EC0

lbl_80025F2C:
	subf     r0, r12, r29
	li       r4, 0
	mulli    r5, r12, 0xc
	mtctr    r0
	cmpw     r12, r29
	bge      lbl_80025F54

lbl_80025F44:
	lwz      r3, 0x8c(r31)
	stwx     r4, r3, r5
	addi     r5, r5, 0xc
	bdnz     lbl_80025F44

lbl_80025F54:
	lis      r3, sTaskList__7JKRTask@ha
	addi     r4, r31, 0x7c
	addi     r3, r3, sTaskList__7JKRTask@l
	bl       append__10JSUPtrListFP10JSUPtrLink
	mr       r3, r31

lbl_80025F68:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80025F7C
 * Size:	00009C
 */
void* JKRTask::run()
{
	// void* msg[3];
	// while (true) {
	// 	OSReceiveMessage(&m_msgQueue, msg, OS_MESSAGE_BLOCKING);
	// 	if (msg[0] != nullptr) {
	// 		msg[0](msg[1]);
	// 		if (_94 != nullptr) {
	// 			OSSendMessage(_94, msg[2], OS_MESSAGE_NON_BLOCKING);
	// 		}
	// 	}
	// 	msg[0] = nullptr;
	// }
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 4
	oris     r3, r3, 4
	mtspr    0x392, r3
	li       r3, 5
	oris     r3, r3, 5
	mtspr    0x393, r3
	li       r3, 6
	oris     r3, r3, 6
	mtspr    0x394, r3
	li       r3, 7
	oris     r3, r3, 7
	mtspr    0x395, r3
	li       r31, 0

lbl_80025FCC:
	addi     r3, r29, 0x30
	addi     r4, r1, 8
	li       r5, 1
	bl       OSReceiveMessage
	lwz      r30, 8(r1)
	lwz      r12, 0(r30)
	cmplwi   r12, 0
	beq      lbl_80026010
	lwz      r3, 4(r30)
	mtctr    r12
	bctrl
	lwz      r3, 0x94(r29)
	cmplwi   r3, 0
	beq      lbl_80026010
	lwz      r4, 8(r30)
	li       r5, 0
	bl       OSSendMessage

lbl_80026010:
	stw      r31, 0(r30)
	b        lbl_80025FCC
	*/
}

/*
 * --INFO--
 * Address:	80026018
 * Size:	0000B0
 */
void JKRTask::request(RequestCallback*, void*, void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r7, 0
	stw      r0, 0x14(r1)
	mr       r8, r7
	stw      r31, 0xc(r1)
	lwz      r0, 0x90(r3)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_80026068

lbl_80026040:
	lwz      r9, 0x8c(r3)
	lwzx     r0, r9, r8
	cmplwi   r0, 0
	bne      lbl_8002605C
	mulli    r0, r7, 0xc
	add      r31, r9, r0
	b        lbl_8002606C

lbl_8002605C:
	addi     r8, r8, 0xc
	addi     r7, r7, 1
	bdnz     lbl_80026040

lbl_80026068:
	li       r31, 0

lbl_8002606C:
	cmplwi   r31, 0
	bne      lbl_8002607C
	li       r3, 0
	b        lbl_800260B4

lbl_8002607C:
	stw      r4, 0(r31)
	mr       r4, r31
	addi     r3, r3, 0x30
	stw      r5, 4(r31)
	li       r5, 0
	stw      r6, 8(r31)
	bl       OSSendMessage
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	mr       r3, r0
	bne      lbl_800260B4
	li       r0, 0
	stw      r0, 0(r31)

lbl_800260B4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800260C8
 * Size:	000070
 */
void __sinit_JKRThread_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sThreadList__9JKRThread@ha
	li       r4, 0
	stw      r0, 0x14(r1)
	addi     r3, r3, sThreadList__9JKRThread@l
	bl       __ct__10JSUPtrListFb
	lis      r3, sThreadList__9JKRThread@ha
	lis      r4, "__dt__19JSUList<9JKRThread>Fv"@ha
	lis      r5, lbl_804EFFB0@ha
	addi     r3, r3, sThreadList__9JKRThread@l
	addi     r4, r4, "__dt__19JSUList<9JKRThread>Fv"@l
	addi     r5, r5, lbl_804EFFB0@l
	bl       __register_global_object
	lis      r3, sTaskList__7JKRTask@ha
	addi     r3, r3, sTaskList__7JKRTask@l
	bl       initiate__10JSUPtrListFv
	lis      r3, sTaskList__7JKRTask@ha
	lis      r4, "__dt__17JSUList<7JKRTask>Fv"@ha
	lis      r5, lbl_804EFFBC@ha
	addi     r3, r3, sTaskList__7JKRTask@l
	addi     r4, r4, "__dt__17JSUList<7JKRTask>Fv"@l
	addi     r5, r5, lbl_804EFFBC@l
	bl       __register_global_object
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * @generated{__dt__17JSUList<7JKRTask>Fv}
 * @generated{__dt__19JSUList<9JKRThread>Fv}
 */
