#include "JSystem/JAS/JASAudioThread.h"
#include "Dolphin/os.h"
#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASKernel.h"
#include "JSystem/JKR/JKRThread.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804795D8
    lbl_804795D8:
        .4byte 0x55504441
        .4byte 0x54452D44
        .4byte 0x41430000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__14JASAudioThread
    __vt__14JASAudioThread:
        .4byte 0
        .4byte 0
        .4byte __dt__14JASAudioThreadFv
        .4byte run__14JASAudioThreadFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sAudioThread__14JASAudioThread
    sAudioThread__14JASAudioThread:
        .skip 0x4
    .global sThreadQueue__14JASAudioThread
    sThreadQueue__14JASAudioThread:
        .skip 0x8
    .global sVFrameCounter__14JASAudioThread
    sVFrameCounter__14JASAudioThread:
        .skip 0x4
    .global snIntCount__14JASAudioThread
    snIntCount__14JASAudioThread:
        .skip 0x4
    .global sbPauseFlag__14JASAudioThread
    sbPauseFlag__14JASAudioThread:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516E60
    lbl_80516E60:
        .4byte 0x5346525F
        .4byte 0x44535000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
JASAudioThread::JASAudioThread(int stackSize, int msgCount, unsigned long threadPriority)
    : JKRThread(JASDram, stackSize, msgCount, threadPriority)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5B88
 * Size:	000074
 */
void JASAudioThread::create(long threadPriority)
{
	sAudioThread = new (JASDram, 0) JASAudioThread(0x1000, 0x10, threadPriority);
	OSResumeThread(sAudioThread->m_thread);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x7c
	lwz      r4, JASDram@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_800A5BD8
	lwz      r4, JASDram@sda21(r13)
	mr       r7, r30
	li       r5, 0x1000
	li       r6, 0x10
	bl       __ct__9JKRThreadFP7JKRHeapUlii
	lis      r3, __vt__14JASAudioThread@ha
	addi     r0, r3, __vt__14JASAudioThread@l
	stw      r0, 0(r31)

lbl_800A5BD8:
	stw      r31, sAudioThread__14JASAudioThread@sda21(r13)
	lwz      r3, 0x2c(r31)
	bl       OSResumeThread
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A5BFC
 * Size:	000038
 */
void JASAudioThread::stop()
{
	if (sAudioThread != nullptr) {
		OSJamMessage(&sAudioThread->m_msgQueue, (void*)2, OS_MESSAGE_BLOCKING);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JASAudioThread::pause(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5C34
 * Size:	00017C
 */
void* JASAudioThread::run()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
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
	lis      r4, DMACallback__14JASAudioThreadFv@ha
	addi     r3, r4, DMACallback__14JASAudioThreadFv@l
	bl       initAI__9JASDriverFPFv_v
	lis      r4, DSPCallback__14JASAudioThreadFPv@ha
	addi     r3, r4, DSPCallback__14JASAudioThreadFPv@l
	bl       boot__6JASDspFPFPv_v
	bl       initBuffer__6JASDspFv
	bl       initAll__13JASDSPChannelFv
	lwz      r0,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800A5CE4
	bl       OSDisableInterrupts
	lwz      r0,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	stw      r3, 8(r1)
	cmplwi   r0, 0
	bne      lbl_800A5CDC
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0xc
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_800A5CD8
	bl       __ct__17JASGenericMemPoolFv

lbl_800A5CD8:
	stw      r31,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)

lbl_800A5CDC:
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts

lbl_800A5CE4:
	lwz      r3,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	li       r4, 0x118
	li       r5, 0x48
	bl       newMemPool__17JASGenericMemPoolFUli
	bl       startDMA__9JASDriverFv

lbl_800A5CF8:
	addi     r3, r30, 0x30
	addi     r4, r1, 0xc
	li       r5, 1
	bl       OSReceiveMessage
	lwz      r0, 0xc(r1)
	cmpwi    r0, 1
	beq      lbl_800A5D60
	bge      lbl_800A5D24
	cmpwi    r0, 0
	bge      lbl_800A5D30
	b        lbl_800A5CF8

lbl_800A5D24:
	cmpwi    r0, 3
	bge      lbl_800A5CF8
	b        lbl_800A5DA4

lbl_800A5D30:
	lbz      r0, sbPauseFlag__14JASAudioThread@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800A5D48
	bl       stopDMA__9JASDriverFv
	addi     r3, r13, sThreadQueue__14JASAudioThread@sda21
	bl       OSSleepThread

lbl_800A5D48:
	lwz      r4, sVFrameCounter__14JASAudioThread@sda21(r13)
	addi     r0, r4, 1
	stw      r0, sVFrameCounter__14JASAudioThread@sda21(r13)
	bl       updateDac__9JASDriverFv
	bl       updateDacCallback__9JASDriverFv
	b        lbl_800A5CF8

lbl_800A5D60:
	lwz      r4, snIntCount__14JASAudioThread@sda21(r13)
	addi     r0, r4, -1
	stw      r0, snIntCount__14JASAudioThread@sda21(r13)
	lwz      r0, snIntCount__14JASAudioThread@sda21(r13)
	cmpwi    r0, 0
	bne      lbl_800A5D88
	li       r3, 7
	bl       probeFinish__9JASKernelFl
	bl       finishDSPFrame__9JASDriverFv
	b        lbl_800A5CF8

lbl_800A5D88:
	li       r3, 2
	addi     r4, r2, lbl_80516E60@sda21
	bl       probeStart__9JASKernelFlPc
	bl       updateDSP__9JASDriverFv
	li       r3, 2
	bl       probeFinish__9JASKernelFl
	b        lbl_800A5CF8

lbl_800A5DA4:
	li       r3, 0
	bl       OSExitThread
	b        lbl_800A5CF8
	*/
}

/*
 * --INFO--
 * Address:	800A5DB0
 * Size:	000048
 */
void JASAudioThread::DMACallback()
{
	JASKernel::probeFinish(4);
	JASKernel::probeStart(4, "UPDATE-DAC");
	OSSendMessage(&sAudioThread->m_msgQueue, nullptr, OS_MESSAGE_NON_BLOCKING);
}

/*
 * --INFO--
 * Address:	800A5DF8
 * Size:	000064
 */
void JASAudioThread::DSPCallback(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)

lbl_800A5E04:
	bl       DSPCheckMailFromDSP
	cmplwi   r3, 0
	beq      lbl_800A5E04
	bl       DSPReadMailFromDSP
	srwi     r0, r3, 0x10
	cmplwi   r0, 0xf355
	bne      lbl_800A5E4C
	rlwinm   r0, r3, 0, 0x10, 0x17
	cmplwi   r0, 0xff00
	bne      lbl_800A5E44
	lwz      r3, sAudioThread__14JASAudioThread@sda21(r13)
	li       r4, 1
	li       r5, 0
	addi     r3, r3, 0x30
	bl       OSSendMessage
	b        lbl_800A5E4C

lbl_800A5E44:
	clrlwi   r3, r3, 0x10
	bl       finishWork__6JASDspFUs

lbl_800A5E4C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASAudioThread::bootDSP()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASAudioThread::getCurrentVCounter()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5E5C
 * Size:	000060
 */
JASAudioThread::~JASAudioThread()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800A5EA0
	lis      r5, __vt__14JASAudioThread@ha
	li       r4, 0
	addi     r0, r5, __vt__14JASAudioThread@l
	stw      r0, 0(r30)
	bl       __dt__9JKRThreadFv
	extsh.   r0, r31
	ble      lbl_800A5EA0
	mr       r3, r30
	bl       __dl__FPv

lbl_800A5EA0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
