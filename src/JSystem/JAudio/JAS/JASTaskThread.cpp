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
	JASCmdHeap::Header* header = JASKernel::getCommandHeap()->alloc(fullLength);
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
	BOOL sendResult = OSSendMessage(&mMsgQueue, header, OS_MESSAGE_NOBLOCK);
	if (!sendResult) {
		JASKernel::getCommandHeap()->free(header);
	}
	return sendResult;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r30, r6
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	addi     r26, r30, 8
	bl       getCommandHeap__9JASKernelFv
	mr       r31, r3
	addi     r3, r31, 4
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r25, 0(r31)
	lwz      r0, 4(r25)
	subfic   r0, r0, 0x400
	cmplw    r0, r26
	bge      lbl_800A8AF4
	cmplwi   r26, 0x400
	ble      lbl_800A8A2C
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r31, 0
	b        lbl_800A8B20

lbl_800A8A2C:
	cmplwi   r25, 0
	beq      lbl_800A8A50
	lwz      r0, 8(r25)
	cmplwi   r0, 0
	bne      lbl_800A8A50
	li       r0, 0
	li       r3, 1
	stw      r0, 4(r25)
	b        lbl_800A8ADC

lbl_800A8A50:
	bl       getSystemHeap__9JASKernelFv
	mr       r4, r3
	li       r3, 0x40c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_800A8A7C
	stw      r25, 0(r3)
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)

lbl_800A8A7C:
	stw      r3, 0(r31)
	lwz      r0, 0(r31)
	cmplwi   r0, 0
	beq      lbl_800A8A94
	li       r3, 1
	b        lbl_800A8ADC

lbl_800A8A94:
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x40c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_800A8ABC
	stw      r25, 0(r3)
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)

lbl_800A8ABC:
	stw      r3, 0(r31)
	lwz      r0, 0(r31)
	cmplwi   r0, 0
	beq      lbl_800A8AD4
	li       r3, 1
	b        lbl_800A8ADC

lbl_800A8AD4:
	stw      r25, 0(r31)
	li       r3, 0

lbl_800A8ADC:
	clrlwi.  r0, r3, 0x18
	bne      lbl_800A8AF4
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r31, 0
	b        lbl_800A8B20

lbl_800A8AF4:
	lwz      r5, 0(r31)
	lwz      r3, 8(r1)
	lwz      r4, 4(r5)
	add      r0, r4, r26
	addi     r31, r4, 0xc
	stw      r0, 4(r5)
	add      r31, r5, r31
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	bl       OSUnlockMutex

lbl_800A8B20:
	cmplwi   r31, 0
	bne      lbl_800A8B30
	li       r31, 0
	b        lbl_800A8B4C

lbl_800A8B30:
	li       r0, 1
	mr       r3, r29
	stw      r0, 4(r31)
	mr       r5, r30
	addi     r4, r31, 8
	bl       bcopy__7JASCalcFPCvPvUl
	stw      r28, 0(r31)

lbl_800A8B4C:
	cmplwi   r31, 0
	bne      lbl_800A8B5C
	li       r3, 0
	b        lbl_800A8C14

lbl_800A8B5C:
	mr       r4, r31
	addi     r3, r27, 0x30
	li       r5, 0
	bl       OSSendMessage
	or.      r28, r3, r3
	bne      lbl_800A8C10
	bl       getCommandHeap__9JASKernelFv
	mr       r27, r3
	addi     r3, r27, 4
	stw      r3, 0xc(r1)
	bl       OSLockMutex
	lwz      r3, 0(r27)
	li       r26, 0
	b        lbl_800A8C00

lbl_800A8B94:
	addi     r0, r3, 0xc
	li       r4, 0
	cmplw    r0, r31
	bgt      lbl_800A8BB4
	addi     r0, r3, 0x40c
	cmplw    r31, r0
	bge      lbl_800A8BB4
	li       r4, 1

lbl_800A8BB4:
	clrlwi.  r0, r4, 0x18
	beq      lbl_800A8BF8
	lwz      r4, 8(r3)
	addi     r0, r4, -1
	stw      r0, 8(r3)
	lwz      r0, 0(r27)
	cmplw    r3, r0
	beq      lbl_800A8BEC
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	bne      lbl_800A8BEC
	lwz      r27, 0(r3)
	bl       __dl__FPv
	stw      r27, 0(r26)

lbl_800A8BEC:
	lwz      r3, 0xc(r1)
	bl       OSUnlockMutex
	b        lbl_800A8C10

lbl_800A8BF8:
	mr       r26, r3
	lwz      r3, 0(r3)

lbl_800A8C00:
	cmplwi   r3, 0
	bne      lbl_800A8B94
	lwz      r3, 0xc(r1)
	bl       OSUnlockMutex

lbl_800A8C10:
	mr       r3, r28

lbl_800A8C14:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	bl       getCommandHeap__9JASKernelFv
	mr       r28, r3
	addi     r3, r28, 4
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r27, 0(r28)
	lwz      r0, 4(r27)
	subfic   r0, r0, 0x400
	cmplwi   r0, 0xc
	bge      lbl_800A8D34
	cmplwi   r27, 0
	beq      lbl_800A8C90
	lwz      r0, 8(r27)
	cmplwi   r0, 0
	bne      lbl_800A8C90
	li       r0, 0
	li       r3, 1
	stw      r0, 4(r27)
	b        lbl_800A8D1C

lbl_800A8C90:
	bl       getSystemHeap__9JASKernelFv
	mr       r4, r3
	li       r3, 0x40c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_800A8CBC
	stw      r27, 0(r3)
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)

lbl_800A8CBC:
	stw      r3, 0(r28)
	lwz      r0, 0(r28)
	cmplwi   r0, 0
	beq      lbl_800A8CD4
	li       r3, 1
	b        lbl_800A8D1C

lbl_800A8CD4:
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x40c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_800A8CFC
	stw      r27, 0(r3)
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)

lbl_800A8CFC:
	stw      r3, 0(r28)
	lwz      r0, 0(r28)
	cmplwi   r0, 0
	beq      lbl_800A8D14
	li       r3, 1
	b        lbl_800A8D1C

lbl_800A8D14:
	stw      r27, 0(r28)
	li       r3, 0

lbl_800A8D1C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_800A8D34
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r27, 0
	b        lbl_800A8D60

lbl_800A8D34:
	lwz      r5, 0(r28)
	lwz      r3, 8(r1)
	lwz      r4, 4(r5)
	addi     r0, r4, 0xc
	stw      r0, 4(r5)
	mr       r27, r0
	add      r27, r5, r27
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	bl       OSUnlockMutex

lbl_800A8D60:
	cmplwi   r27, 0
	bne      lbl_800A8D70
	li       r27, 0
	b        lbl_800A8D80

lbl_800A8D70:
	li       r0, 0
	stw      r0, 4(r27)
	stw      r31, 8(r27)
	stw      r30, 0(r27)

lbl_800A8D80:
	cmplwi   r27, 0
	bne      lbl_800A8D90
	li       r3, 0
	b        lbl_800A8E48

lbl_800A8D90:
	mr       r4, r27
	addi     r3, r29, 0x30
	li       r5, 0
	bl       OSSendMessage
	or.      r30, r3, r3
	bne      lbl_800A8E44
	bl       getCommandHeap__9JASKernelFv
	mr       r29, r3
	addi     r3, r29, 4
	stw      r3, 0xc(r1)
	bl       OSLockMutex
	lwz      r3, 0(r29)
	li       r28, 0
	b        lbl_800A8E34

lbl_800A8DC8:
	addi     r0, r3, 0xc
	li       r4, 0
	cmplw    r0, r27
	bgt      lbl_800A8DE8
	addi     r0, r3, 0x40c
	cmplw    r27, r0
	bge      lbl_800A8DE8
	li       r4, 1

lbl_800A8DE8:
	clrlwi.  r0, r4, 0x18
	beq      lbl_800A8E2C
	lwz      r4, 8(r3)
	addi     r0, r4, -1
	stw      r0, 8(r3)
	lwz      r0, 0(r29)
	cmplw    r3, r0
	beq      lbl_800A8E20
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	bne      lbl_800A8E20
	lwz      r27, 0(r3)
	bl       __dl__FPv
	stw      r27, 0(r28)

lbl_800A8E20:
	lwz      r3, 0xc(r1)
	bl       OSUnlockMutex
	b        lbl_800A8E44

lbl_800A8E2C:
	mr       r28, r3
	lwz      r3, 0(r3)

lbl_800A8E34:
	cmplwi   r3, 0
	bne      lbl_800A8DC8
	lwz      r3, 0xc(r1)
	bl       OSUnlockMutex

lbl_800A8E44:
	mr       r3, r30

lbl_800A8E48:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
