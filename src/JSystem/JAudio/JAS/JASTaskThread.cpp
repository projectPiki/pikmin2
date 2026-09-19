#include "Dolphin/OS/OSMessage.h"
#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASKernel.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASThread.h"
#include "JSystem/JKernel/JKRThread.h"

/**
 * @note Address: 0x800A8840
 * @note Size: 0x60
 */
JASTaskThread::JASTaskThread(int threadPriority, int msgCount, u32 stackSize)
    : JKRThread(JASDram, stackSize, msgCount, threadPriority)
    , _84(0)
{
	OSInitThreadQueue(&_7C);
}

/**
 * @note Address: 0x800A88A0
 * @note Size: 0x128
 */
JASTaskThread::~JASTaskThread()
{
	OSMessage msg;
	BOOL received;
	while (true) {
		msg = waitMessage(&received);
		if (!received) {
			return;
		}
		JASCmdHeap* heap = JASKernel::getCommandHeap();
		heap->free(msg);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x198
 */
JASCmdHeap::Header* JASTaskThread::allocCallStack(RunFunction cmd, const void* msg, u32 msgLength)
{
	// UNUSED FUNCTION
	// TODO: Wrong.
	size_t fullLength          = msgLength + 8;
	JASCmdHeap::Header* header = (JASCmdHeap::Header*)JASKernel::getCommandHeap()->alloc(fullLength);
	if (header == nullptr) {
		return nullptr;
	}
	header->mMsgLength = 1;
	JASCalc::bcopy(msg, header + 1, msgLength);
	header->mCommand = cmd;
	return header;
}

/**
 * @note Address: N/A
 * @note Size: 0x184
 */
void* JASTaskThread::allocCallStack(RunFunction cmd, void* data)
{
	JASCmdHeap* heap;
	JASThreadCallStack* callStack;
	heap      = JASKernel::getCommandHeap();
	callStack = (JASThreadCallStack*)heap->alloc(0xc);
	if (callStack == nullptr) {
		return nullptr;
	}
	callStack->_04         = 0;
	callStack->mVoidBuffer = data;
	callStack->mRunFunc    = cmd;
	return callStack;
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A89C8
 * @note Size: 0x260
 */
int JASTaskThread::sendCmdMsg(RunFunction cmd, const void* msg, u32 msgLength)
{
	void* header = allocCallStack(cmd, msg, msgLength);
	if (header == nullptr) {
		return FALSE;
	}
	BOOL sendResult = sendMessage(header);
	if (!sendResult) {
		JASKernel::getCommandHeap()->free(header);
	}
	return sendResult;
}

/**
 * @note Address: 0x800A8C28
 * @note Size: 0x234
 */
int JASTaskThread::sendCmdMsg(RunFunction func, void* p2)
{
	void* pvVar1;

	pvVar1 = allocCallStack(func, p2);
	if (pvVar1 == NULL) {
		return 0;
	}
	int iVar2 = sendMessage(pvVar1);
	if (iVar2 == 0) {
		JASCmdHeap* heap = JASKernel::getCommandHeap();
		heap->free(pvVar1);
	}
	return iVar2;
}

/**
 * @note Address: 0x800A8E5C
 * @note Size: 0x148
 */
void* JASTaskThread::run()
{
	OSInitFastCast();
	do {
		JASThreadCallStack* callStack = (JASThreadCallStack*)waitMessageBlock();
		if (_84) {
			OSSleepThread(&_7C);
		}
		if (callStack->_04) {
			callStack->mRunFunc(callStack->mByteBuffer);
		} else {
			callStack->mRunFunc(callStack->mVoidBuffer);
		}
		JASCmdHeap* heap = JASKernel::getCommandHeap();
		heap->free(callStack);
	} while (true);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r3, 4
	stw      r30, 0x18(r1)
	oris     r3, r3, 4
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
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

lbl_800A8EAC:
	addi     r3, r31, 0x30
	addi     r4, r1, 0xc
	li       r5, 1
	bl       OSReceiveMessage
	lbz      r0, 0x84(r31)
	lwz      r28, 0xc(r1)
	cmplwi   r0, 0
	beq      lbl_800A8ED4
	addi     r3, r31, 0x7c
	bl       OSSleepThread

lbl_800A8ED4:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	beq      lbl_800A8EF4
	lwz      r12, 0(r28)
	addi     r3, r28, 8
	mtctr    r12
	bctrl
	b        lbl_800A8F04

lbl_800A8EF4:
	lwz      r12, 0(r28)
	lwz      r3, 8(r28)
	mtctr    r12
	bctrl

lbl_800A8F04:
	bl       getCommandHeap__9JASKernelFv
	mr       r30, r3
	addi     r3, r30, 4
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r3, 0(r30)
	li       r29, 0
	b        lbl_800A8F90

lbl_800A8F24:
	addi     r0, r3, 0xc
	li       r4, 0
	cmplw    r0, r28
	bgt      lbl_800A8F44
	addi     r0, r3, 0x40c
	cmplw    r28, r0
	bge      lbl_800A8F44
	li       r4, 1

lbl_800A8F44:
	clrlwi.  r0, r4, 0x18
	beq      lbl_800A8F88
	lwz      r4, 8(r3)
	addi     r0, r4, -1
	stw      r0, 8(r3)
	lwz      r0, 0(r30)
	cmplw    r3, r0
	beq      lbl_800A8F7C
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	bne      lbl_800A8F7C
	lwz      r28, 0(r3)
	bl       __dl__FPv
	stw      r28, 0(r29)

lbl_800A8F7C:
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	b        lbl_800A8EAC

lbl_800A8F88:
	mr       r29, r3
	lwz      r3, 0(r3)

lbl_800A8F90:
	cmplwi   r3, 0
	bne      lbl_800A8F24
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	b        lbl_800A8EAC
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void JASTaskThread::pause(bool)
{
	// UNUSED FUNCTION
}
