#include "Dolphin/os.h"
#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASThread.h"
#include "JSystem/JKR/JKRThread.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13JASTaskThread
    __vt__13JASTaskThread:
        .4byte 0
        .4byte 0
        .4byte __dt__13JASTaskThreadFv
        .4byte run__13JASTaskThreadFv
*/

/*
 * --INFO--
 * Address:	800A8840
 * Size:	000060
 */
JASTaskThread::JASTaskThread(int threadPriority, int msgCount, unsigned long stackSize)
    : JKRThread(JASDram, stackSize, msgCount, threadPriority)
    , _84(0)
{
	OSInitThreadQueue(&_7C);
}

/*
 * --INFO--
 * Address:	800A88A0
 * Size:	000128
 */
JASTaskThread::~JASTaskThread()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	or.      r30, r3, r3
	mr       r31, r4
	beq      lbl_800A89B0
	lis      r3, __vt__13JASTaskThread@ha
	addi     r0, r3, __vt__13JASTaskThread@l
	stw      r0, 0(r30)

lbl_800A88C8:
	addi     r3, r30, 0x30
	addi     r4, r1, 0xc
	li       r5, 0
	bl       OSReceiveMessage
	addic.   r0, r1, 0x10
	beq      lbl_800A88E4
	stw      r3, 0x10(r1)

lbl_800A88E4:
	lwz      r0, 0x10(r1)
	lwz      r28, 0xc(r1)
	cmpwi    r0, 0
	beq      lbl_800A8994
	bl       getCommandHeap__9JASKernelFv
	mr       r29, r3
	addi     r3, r29, 4
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r3, 0(r29)
	li       r27, 0
	b        lbl_800A8980

lbl_800A8914:
	addi     r0, r3, 0xc
	li       r4, 0
	cmplw    r0, r28
	bgt      lbl_800A8934
	addi     r0, r3, 0x40c
	cmplw    r28, r0
	bge      lbl_800A8934
	li       r4, 1

lbl_800A8934:
	clrlwi.  r0, r4, 0x18
	beq      lbl_800A8978
	lwz      r4, 8(r3)
	addi     r0, r4, -1
	stw      r0, 8(r3)
	lwz      r0, 0(r29)
	cmplw    r3, r0
	beq      lbl_800A896C
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	bne      lbl_800A896C
	lwz      r28, 0(r3)
	bl       __dl__FPv
	stw      r28, 0(r27)

lbl_800A896C:
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	b        lbl_800A88C8

lbl_800A8978:
	mr       r27, r3
	lwz      r3, 0(r3)

lbl_800A8980:
	cmplwi   r3, 0
	bne      lbl_800A8914
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	b        lbl_800A88C8

lbl_800A8994:
	mr       r3, r30
	li       r4, 0
	bl       __dt__9JKRThreadFv
	extsh.   r0, r31
	ble      lbl_800A89B0
	mr       r3, r30
	bl       __dl__FPv

lbl_800A89B0:
	mr       r3, r30
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000198
 */
void JASTaskThread::allocCallStack(void (*)(void*), const void*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void JASTaskThread::allocCallStack(void (*)(void*), void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A89C8
 * Size:	000260
 */
int JASTaskThread::sendCmdMsg(void (*)(void*), const void*, unsigned long)
{
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

/*
 * --INFO--
 * Address:	800A8C28
 * Size:	000234
 */
int JASTaskThread::sendCmdMsg(void (*)(void*), void*)
{
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

/*
 * --INFO--
 * Address:	800A8E5C
 * Size:	000148
 */
void* JASTaskThread::run()
{
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

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JASTaskThread::pause(bool)
{
	// UNUSED FUNCTION
}
