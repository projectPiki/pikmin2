#include "DvdThreadCommand.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499C18
    lbl_80499C18:
        .asciz "dvdThread.cpp"
        .skip 2
    .global lbl_80499C28
    lbl_80499C28:
        .asciz "P2Assert"
        .skip 7

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__9DvdThread
    __vt__9DvdThread:
        .4byte 0
        .4byte 0
        .4byte __dt__9DvdThreadFv
        .4byte run__9DvdThreadFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805204B0
    lbl_805204B0:
        .4byte 0x61726300
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80424818
 * Size:	000080
 */
DvdThreadCommand::DvdThreadCommand()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	addi     r3, r4, 0x5c
	bl       __ct__10JSUPtrLinkFPv
	li       r5, 0
	li       r4, 1
	stw      r5, 0(r31)
	li       r0, 0x20
	addi     r3, r31, 0x1c
	stw      r4, 4(r31)
	stw      r5, 8(r31)
	stw      r5, 0xc(r31)
	stw      r0, 0x10(r31)
	stw      r4, 0x14(r31)
	stw      r5, 0x18(r31)
	bl       OSInitMutex
	li       r0, 0
	addi     r3, r31, 0x38
	stw      r0, 0x34(r31)
	addi     r4, r31, 0x58
	li       r5, 1
	bl       OSInitMessageQueue
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<DvdThreadCommand>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80424898
 * Size:	000020
 */
void DvdThreadCommand::loadUseCallBack(IDelegate*)
{
	/*
	stw      r4, 0(r3)
	li       r4, 2
	li       r0, 0
	stw      r4, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void DvdThreadCommand::loadArchive(char*, JKRHeap*, DvdThreadCommand::EHeapDirection)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void DvdThreadCommand::loadFile(char*, JKRHeap*, DvdThreadCommand::EHeapDirection)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void DvdThreadCommand::invokeCallBack()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void DvdThreadCommand::wait()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void DvdThreadCommand::loading()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void DvdThreadCommand::finish()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void DvdThreadCommand::getDataType()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void DvdThreadCommand::checkExp(const char*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804248B8
 * Size:	00004C
 */
DvdThread::DvdThread(unsigned long, int, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__9AppThreadFUlii
	lis      r4, __vt__9DvdThread@ha
	addi     r3, r31, 0x7c
	addi     r0, r4, __vt__9DvdThread@l
	stw      r0, 0(r31)
	bl       initiate__10JSUPtrListFv
	lwz      r3, 0x2c(r31)
	bl       OSResumeThread
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<DvdThreadCommand>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80424904
 * Size:	000194
 */
void DvdThread::run()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	lis      r29, 0x4454

lbl_80424924:
	addi     r3, r30, 0x30
	addi     r4, r1, 0xc
	li       r5, 1
	bl       OSReceiveMessage
	lwz      r31, 0xc(r1)
	addi     r3, r31, 0x1c
	bl       OSLockMutex
	li       r0, 1
	stw      r0, 0x18(r31)
	lwz      r0, 4(r31)
	cmpwi    r0, 1
	bne      lbl_804249E8
	lwz      r3, 8(r31)
	bl       strlen
	lwz      r0, 8(r31)
	addi     r5, r3, -1
	add      r4, r0, r5

lbl_80424968:
	lbz      r0, 0(r4)
	cmpwi    r0, 0x2e
	beq      lbl_80424980
	addi     r4, r4, -1
	addi     r5, r5, -1
	b        lbl_80424968

lbl_80424980:
	addi     r0, r3, -1
	subf     r0, r5, r0
	cmplwi   r0, 4
	bge      lbl_804249D4
	addi     r7, r1, 8
	li       r6, 0
	b        lbl_804249B8

lbl_8042499C:
	lwz      r0, 8(r31)
	add      r4, r0, r6
	addi     r6, r6, 1
	addi     r0, r4, 1
	lbzx     r0, r5, r0
	stb      r0, 0(r7)
	addi     r7, r7, 1

lbl_804249B8:
	add      r0, r5, r6
	cmplw    r3, r0
	bgt      lbl_8042499C
	addi     r3, r1, 8
	li       r0, 0
	stbx     r0, r3, r6
	b        lbl_804249DC

lbl_804249D4:
	li       r0, 0
	stb      r0, 8(r1)

lbl_804249DC:
	addi     r4, r1, 8
	addi     r3, r2, lbl_805204B0@sda21
	bl       strcmp

lbl_804249E8:
	lwz      r0, 4(r31)
	cmpwi    r0, 1
	beq      lbl_80424A4C
	bge      lbl_80424A04
	cmpwi    r0, 0
	bge      lbl_80424A5C
	b        lbl_80424A68

lbl_80424A04:
	cmpwi    r0, 3
	bge      lbl_80424A68
	lwz      r0, 0(r31)
	cmplwi   r0, 0
	bne      lbl_80424A34
	lis      r3, lbl_80499C18@ha
	lis      r5, lbl_80499C28@ha
	addi     r3, r3, lbl_80499C18@l
	li       r4, 0x84
	addi     r5, r5, lbl_80499C28@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80424A34:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80424A68

lbl_80424A4C:
	mr       r3, r30
	mr       r4, r31
	bl       loadArchive__9DvdThreadFP16DvdThreadCommand
	b        lbl_80424A68

lbl_80424A5C:
	mr       r3, r30
	mr       r4, r31
	bl       loadFile__9DvdThreadFP16DvdThreadCommand

lbl_80424A68:
	li       r0, 2
	addi     r3, r31, 0x38
	stw      r0, 0x18(r31)
	addi     r4, r29, 0x4c46
	li       r5, 0
	bl       OSSendMessage
	addi     r3, r30, 0x7c
	addi     r4, r31, 0x5c
	bl       remove__10JSUPtrListFP10JSUPtrLink
	addi     r3, r31, 0x1c
	bl       OSUnlockMutex
	b        lbl_80424924
	*/
}

/*
 * --INFO--
 * Address:	80424A98
 * Size:	00009C
 */
void DvdThread::loadArchive(DvdThreadCommand*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x34(r4)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x14(r29)
	mr       r4, r3
	lwz      r3, 8(r29)
	mr       r30, r4
	cmpwi    r0, 1
	lwz      r5, 0x34(r29)
	li       r4, 1
	li       r6, 2
	bne      lbl_80424AE4
	li       r6, 1

lbl_80424AE4:
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r31, r3, r3
	bne      lbl_80424B0C
	lis      r3, lbl_80499C18@ha
	lis      r5, lbl_80499C28@ha
	addi     r3, r3, lbl_80499C18@l
	li       r4, 0x113
	addi     r5, r5, lbl_80499C28@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80424B0C:
	stw      r31, 0xc(r29)
	mr       r3, r30
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80424B34
 * Size:	000108
 */
void DvdThread::loadFile(DvdThreadCommand*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r4
	li       r31, -32
	lwz      r0, 0x14(r4)
	cmpwi    r0, 1
	bne      lbl_80424B5C
	li       r31, 0x20

lbl_80424B5C:
	lwz      r3, 0x34(r27)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r30, 8(r27)
	mr       r28, r3
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0xf8
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r29, r3, r3
	beq      lbl_80424B90
	mr       r4, r30
	bl       __ct__10JKRDvdFileFPCc
	mr       r29, r3

lbl_80424B90:
	cmplwi   r29, 0
	bne      lbl_80424BB4
	lis      r3, lbl_80499C18@ha
	lis      r5, lbl_80499C28@ha
	addi     r3, r3, lbl_80499C18@l
	li       r4, 0x15a
	addi     r5, r5, lbl_80499C28@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80424BB4:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	mr       r30, r3
	bl       __nwa__FUli
	mr       r0, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	mr       r31, r0
	mr       r4, r31
	mr       r5, r30
	lwz      r12, 0x14(r12)
	li       r6, 0
	mtctr    r12
	bctrl
	cmplwi   r29, 0
	beq      lbl_80424C1C
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80424C1C:
	stw      r31, 0xc(r27)
	mr       r3, r28
	bl       becomeCurrentHeap__7JKRHeapFv
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80424C3C
 * Size:	000060
 */
void DvdThread::sendCommand(DvdThreadCommand*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x7c
	stw      r0, 0x18(r4)
	addi     r4, r31, 0x5c
	bl       append__10JSUPtrListFP10JSUPtrLink

lbl_80424C6C:
	mr       r4, r31
	addi     r3, r30, 0x30
	li       r5, 0
	bl       OSSendMessage
	cmpwi    r3, 0
	beq      lbl_80424C6C
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
 * Address:	80424C9C
 * Size:	0000B0
 */
void DvdThread::sync(DvdThreadCommand*, DvdThread::ESyncBlockFlag)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmpwi    r5, 0
	li       r3, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	bne      lbl_80424D20
	lis      r4, lbl_80499C18@ha
	lis      r3, lbl_80499C28@ha
	addi     r30, r4, lbl_80499C18@l
	addi     r31, r3, lbl_80499C28@l
	b        lbl_80424D0C

lbl_80424CD8:
	addi     r3, r29, 0x38
	addi     r4, r1, 8
	li       r5, 1
	bl       OSReceiveMessage
	lwz      r3, 8(r1)
	addis    r0, r3, 0xbbac
	cmplwi   r0, 0x4c46
	beq      lbl_80424D0C
	mr       r3, r30
	mr       r5, r31
	li       r4, 0x18c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80424D0C:
	lwz      r0, 0x18(r29)
	cmpwi    r0, 2
	bne      lbl_80424CD8
	li       r3, 1
	b        lbl_80424D30

lbl_80424D20:
	lwz      r0, 0x18(r29)
	cmpwi    r0, 2
	bne      lbl_80424D30
	li       r3, 1

lbl_80424D30:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80424D4C
 * Size:	0000CC
 */
void DvdThread::syncAll(DvdThread::ESyncBlockFlag)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r26, r4
	li       r27, 0
	lwz      r28, 0x7c(r3)
	b        lbl_80424DF8

lbl_80424D6C:
	cmpwi    r26, 0
	lwz      r29, 0(r28)
	li       r3, 0
	bne      lbl_80424DD8
	lis      r4, lbl_80499C18@ha
	lis      r3, lbl_80499C28@ha
	addi     r30, r4, lbl_80499C18@l
	addi     r31, r3, lbl_80499C28@l
	b        lbl_80424DC4

lbl_80424D90:
	addi     r3, r29, 0x38
	addi     r4, r1, 8
	li       r5, 1
	bl       OSReceiveMessage
	lwz      r3, 8(r1)
	addis    r0, r3, 0xbbac
	cmplwi   r0, 0x4c46
	beq      lbl_80424DC4
	mr       r3, r30
	mr       r5, r31
	li       r4, 0x18c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80424DC4:
	lwz      r0, 0x18(r29)
	cmpwi    r0, 2
	bne      lbl_80424D90
	li       r3, 1
	b        lbl_80424DE8

lbl_80424DD8:
	lwz      r0, 0x18(r29)
	cmpwi    r0, 2
	bne      lbl_80424DE8
	li       r3, 1

lbl_80424DE8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80424DF4
	addi     r27, r27, 1

lbl_80424DF4:
	lwz      r28, 0xc(r28)

lbl_80424DF8:
	cmplwi   r28, 0
	bne      lbl_80424D6C
	mr       r3, r27
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
