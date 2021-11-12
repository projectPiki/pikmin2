#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048FF20
    lbl_8048FF20:
        .4byte 0x50535461
        .4byte 0x736B4261
        .4byte 0x73652E63
        .4byte 0x70700000
    .global lbl_8048FF30
    lbl_8048FF30:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x50535461
        .4byte 0x736B4261
        .4byte 0x73652E68
        .4byte 0x00000000
*/

namespace PSSystem {

/*
 * --INFO--
 * Address:	8033E1F8
 * Size:	000054
 */
TaskBase::TaskBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__Q28PSSystem8TaskBase@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q28PSSystem8TaskBase@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	stw      r0, 0(r3)
	addi     r3, r31, 4
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x14(r31)
	stb      r0, 0x15(r31)
	stw      r0, 0x18(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033E24C
 * Size:	000024
 */
void TaskEntry::append(PSSystem::TaskBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r4, 4
	stw      r0, 0x14(r1)
	bl
	"append_Lock__Q28PSSystem31MutexList<Q28PSSystem8TaskBase>FP29JSULink<Q28PSSystem8TaskBase>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033E270
 * Size:	000034
 */
void TaskEntryMgr::isUnderTask_byDirector(PSSystem::DirectorBase*)
{
	/*
	lwz      r5, 0(r3)
	b        lbl_8033E294

lbl_8033E278:
	lwz      r3, 0(r5)
	lwz      r0, 0x24(r3)
	cmplw    r0, r4
	bne      lbl_8033E290
	li       r3, 1
	blr

lbl_8033E290:
	lwz      r5, 0xc(r5)

lbl_8033E294:
	cmplwi   r5, 0
	bne      lbl_8033E278
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033E2A4
 * Size:	000150
 */
void TaskEntryMgr::update()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r31, r3
	lwz      r0, 0x24(r3)
	cmplwi   r0, 0
	bne      lbl_8033E2E0
	lis      r3, lbl_8048FF20@ha
	lis      r5, lbl_8048FF30@ha
	addi     r3, r3, lbl_8048FF20@l
	li       r4, 0xc5
	addi     r5, r5, lbl_8048FF30@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033E2E0:
	addi     r3, r31, 0xc
	bl       OSLockMutex
	lwz      r28, 0(r31)
	cmplwi   r28, 0
	beq      lbl_8033E3D8
	lwz      r30, 0(r28)
	lwz      r29, 0x24(r31)
	addi     r3, r30, 0xc
	bl       OSLockMutex
	lwz      r27, 0(r30)
	cmplwi   r27, 0
	bne      lbl_8033E3B0
	addi     r3, r30, 0xc
	bl       OSUnlockMutex
	li       r0, 0
	stw      r0, 0x24(r30)
	b        lbl_8033E3C4
	b        lbl_8033E3B0

lbl_8033E328:
	lwz      r26, 0(r27)
	li       r3, -16
	lwz      r4, 0x18(r26)
	cmplwi   r4, 0
	beq      lbl_8033E34C
	lwz      r0, 4(r4)
	cmplwi   r0, 0
	bne      lbl_8033E34C
	li       r3, -1

lbl_8033E34C:
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_8033E370
	mr       r3, r26
	mr       r4, r29
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8033E370:
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8033E398
	mr       r3, r30
	mr       r4, r27
	bl       remove__10JSUPtrListFP10JSUPtrLink
	li       r0, 0
	stb      r0, 0x14(r26)
	stb      r0, 0x15(r26)
	stw      r0, 0x18(r26)

lbl_8033E398:
	lbz      r0, 0x15(r26)
	cmplwi   r0, 0
	beq      lbl_8033E3AC
	lwz      r27, 0xc(r27)
	b        lbl_8033E3B0

lbl_8033E3AC:
	li       r27, 0

lbl_8033E3B0:
	cmplwi   r27, 0
	bne      lbl_8033E328
	addi     r3, r30, 0xc
	bl       OSUnlockMutex
	li       r0, 1

lbl_8033E3C4:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8033E3D8
	mr       r3, r31
	mr       r4, r28
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033E3D8:
	addi     r3, r31, 0xc
	bl       OSUnlockMutex
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033E3F4
 * Size:	0000A0
 */
void TaskEntryMgr::appendEntry(PSSystem::TaskEntry*, PSSystem::DirectorBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	lis      r4, lbl_8048FF20@ha
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r31, r4, lbl_8048FF20@l
	bne      lbl_8033E43C
	addi     r3, r31, 0
	addi     r5, r31, 0x10
	li       r4, 0xdc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033E43C:
	li       r0, 0
	cmplwi   r30, 0
	stw      r0, 0x24(r29)
	beq      lbl_8033E468
	bne      lbl_8033E464
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x10
	li       r4, 0x50
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033E464:
	stw      r30, 0x24(r29)

lbl_8033E468:
	mr       r3, r28
	addi     r4, r29, 0x28
	bl
"append_Lock__Q28PSSystem32MutexList<Q28PSSystem9TaskEntry>FP30JSULink<Q28PSSystem9TaskEntry>"
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
 * Address:	8033E494
 * Size:	000074
 */
void TaskEntryMgr::removeEntry(PSSystem::TaskEntry*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	or.      r30, r4, r4
	beq      lbl_8033E4F0
	addi     r4, r30, 0x28
	bl
"remove_Lock__Q28PSSystem32MutexList<Q28PSSystem9TaskEntry>FP30JSULink<Q28PSSystem9TaskEntry>"
	addi     r3, r30, 0xc
	bl       OSLockMutex
	lwz      r4, 0(r30)
	b        lbl_8033E4D8

lbl_8033E4C8:
	lwz      r31, 0xc(r4)
	mr       r3, r30
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r4, r31

lbl_8033E4D8:
	cmplwi   r4, 0
	bne      lbl_8033E4C8
	addi     r3, r30, 0xc
	bl       OSUnlockMutex
	li       r0, 0
	stw      r0, 0x24(r30)

lbl_8033E4F0:
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
 * Address:	8033E508
 * Size:	0000A4
 */
void TaskEntryMgr::removeAllEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r29, 0xc
	bl       OSLockMutex
	lwz      r3, 0(r29)
	cmplwi   r3, 0
	beq      lbl_8033E588
	lwz      r31, 0(r3)
	cmplwi   r31, 0
	beq      lbl_8033E588
	mr       r3, r29
	addi     r4, r31, 0x28
	bl
"remove_Lock__Q28PSSystem32MutexList<Q28PSSystem9TaskEntry>FP30JSULink<Q28PSSystem9TaskEntry>"
	addi     r3, r31, 0xc
	bl       OSLockMutex
	lwz      r4, 0(r31)
	b        lbl_8033E570

lbl_8033E560:
	lwz      r30, 0xc(r4)
	mr       r3, r31
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r4, r30

lbl_8033E570:
	cmplwi   r4, 0
	bne      lbl_8033E560
	addi     r3, r31, 0xc
	bl       OSUnlockMutex
	li       r0, 0
	stw      r0, 0x24(r31)

lbl_8033E588:
	addi     r3, r29, 0xc
	bl       OSUnlockMutex
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
 * Address:	8033E5AC
 * Size:	000058
 */
void MutexList<PSSystem::TaskEntry>::remove_Lock(JSULink<PSSystem::TaskEntry>*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0xc
	bl       OSLockMutex
	mr       r3, r30
	mr       r4, r31
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r31, r3
	addi     r3, r30, 0xc
	bl       OSUnlockMutex
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033E604
 * Size:	000058
 */
void MutexList<PSSystem::TaskBase>::append_Lock(JSULink<PSSystem::TaskBase>*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0xc
	bl       OSLockMutex
	mr       r3, r30
	mr       r4, r31
	bl       append__10JSUPtrListFP10JSUPtrLink
	mr       r31, r3
	addi     r3, r30, 0xc
	bl       OSUnlockMutex
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033E65C
 * Size:	000058
 */
void MutexList<PSSystem::TaskEntry>::append_Lock(JSULink<PSSystem::TaskEntry>*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0xc
	bl       OSLockMutex
	mr       r3, r30
	mr       r4, r31
	bl       append__10JSUPtrListFP10JSUPtrLink
	mr       r31, r3
	addi     r3, r30, 0xc
	bl       OSUnlockMutex
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace PSSystem
