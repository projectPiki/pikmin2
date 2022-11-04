#include "JSystem/JAI/JAIBasic.h"
#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JAI/JAInter.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global deadObjectFreePointer__Q27JAInter14DummyObjectMgr
    deadObjectFreePointer__Q27JAInter14DummyObjectMgr:
        .skip 0x4
    .global deadObjectUsedPointer__Q27JAInter14DummyObjectMgr
    deadObjectUsedPointer__Q27JAInter14DummyObjectMgr:
        .skip 0x4
    .global deadObjectObject__Q27JAInter14DummyObjectMgr
    deadObjectObject__Q27JAInter14DummyObjectMgr:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	800AD490
 * Size:	0000DC
 */
void JAInter::DummyObjectMgr::init()
{
	deadObjectFreePointer   = new (JAIBasic::msCurrentHeap, 0x20) DummyObject[JAIGlobalParameter::getParamDummyObjectMax()];
	deadObjectUsedPointer   = nullptr;
	deadObjectObject        = deadObjectFreePointer;
	deadObjectObject[0]._00 = nullptr;
	deadObjectObject[0]._04 = deadObjectObject + 1;
	u32 i;
	for (i = 1; i < JAIGlobalParameter::getParamDummyObjectMax() - 1; i++) {
		deadObjectObject[i]._00 = &deadObjectObject[i - 1];
		deadObjectObject[i]._04 = &deadObjectObject[i + 1];
	}
	deadObjectObject[i]._00 = &deadObjectObject[i - 1];
	deadObjectObject[i]._04 = nullptr;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r31, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamDummyObjectMax__18JAIGlobalParameterFv
	mulli    r3, r3, 0x1c
	mr       r4, r31
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	li       r0, 0
	stw      r3, deadObjectObject__Q27JAInter14DummyObjectMgr@sda21(r13)
	li       r31, 1
	li       r30, 0x1c
	stw      r3, deadObjectFreePointer__Q27JAInter14DummyObjectMgr@sda21(r13)
	stw      r0, deadObjectUsedPointer__Q27JAInter14DummyObjectMgr@sda21(r13)
	stw      r0, 0(r3)
	lwz      r3, deadObjectObject__Q27JAInter14DummyObjectMgr@sda21(r13)
	addi     r0, r3, 0x1c
	stw      r0, 4(r3)
	b        lbl_800AD51C

lbl_800AD4E8:
	addi     r0, r31, -1
	addi     r3, r31, 1
	mulli    r4, r0, 0x1c
	lwz      r5, deadObjectObject__Q27JAInter14DummyObjectMgr@sda21(r13)
	addi     r0, r30, 4
	addi     r31, r31, 1
	add      r4, r5, r4
	stwx     r4, r5, r30
	mulli    r3, r3, 0x1c
	addi     r30, r30, 0x1c
	lwz      r4, deadObjectObject__Q27JAInter14DummyObjectMgr@sda21(r13)
	add      r3, r4, r3
	stwx     r3, r4, r0

lbl_800AD51C:
	bl       getParamDummyObjectMax__18JAIGlobalParameterFv
	addi     r0, r3, -1
	cmplw    r31, r0
	blt      lbl_800AD4E8
	addi     r0, r31, -1
	lwz      r3, deadObjectObject__Q27JAInter14DummyObjectMgr@sda21(r13)
	mulli    r0, r0, 0x1c
	li       r4, 0
	mulli    r5, r31, 0x1c
	add      r0, r3, r0
	stwx     r0, r3, r5
	lwz      r0, deadObjectObject__Q27JAInter14DummyObjectMgr@sda21(r13)
	add      r3, r0, r5
	stw      r4, 4(r3)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD56C
 * Size:	000068
 */
JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::getPointer(u32 p1)
{
	DummyObject* ptr = deadObjectFreePointer;
	if (deadObjectFreePointer != nullptr) {
		if (deadObjectUsedPointer != nullptr) {
			DummyObject** v1      = &deadObjectFreePointer->_04;
			deadObjectFreePointer = deadObjectFreePointer->_04;
			*v1                   = nullptr;
		} else {
			DummyObject** v1           = &deadObjectFreePointer->_04;
			deadObjectFreePointer      = deadObjectFreePointer->_04;
			*v1                        = nullptr;
			deadObjectUsedPointer->_00 = ptr;
		}
		ptr->_00              = nullptr;
		deadObjectUsedPointer = ptr;
		ptr->_18              = p1;
		ptr->m_sound          = nullptr;
	} else {
		ptr = nullptr;
	}
	return ptr;
	/*
	lwz      r0, deadObjectFreePointer__Q27JAInter14DummyObjectMgr@sda21(r13)
	addi     r5, r13, deadObjectFreePointer__Q27JAInter14DummyObjectMgr@sda21
	addi     r6, r13, deadObjectUsedPointer__Q27JAInter14DummyObjectMgr@sda21
	cmplwi   r0, 0
	beq      lbl_800AD5C8
	lwz      r7, 0(r5)
	lwz      r4, 0(r6)
	lwz      r0, 4(r7)
	cmplwi   r4, 0
	stw      r0, 0(r5)
	beq      lbl_800AD5A8
	stw      r4, 4(r7)
	lwz      r4, 0(r6)
	stw      r7, 0(r4)
	b        lbl_800AD5B0

lbl_800AD5A8:
	li       r0, 0
	stw      r0, 4(r7)

lbl_800AD5B0:
	li       r0, 0
	stw      r0, 0(r7)
	stw      r7, 0(r6)
	stw      r3, 0x18(r7)
	stw      r0, 8(r7)
	b        lbl_800AD5CC

lbl_800AD5C8:
	li       r7, 0

lbl_800AD5CC:
	mr       r3, r7
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAInter::DummyObjectMgr::releasePointer(JAInter::DummyVec*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD5D4
 * Size:	0000F8
 */
void JAInter::DummyObjectMgr::check(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r31, deadObjectUsedPointer__Q27JAInter14DummyObjectMgr@sda21(r13)
	b        lbl_800AD6AC

lbl_800AD5F0:
	lwz      r3, 0x18(r31)
	lwz      r30, 4(r31)
	addi     r0, r3, -1
	stw      r0, 0x18(r31)
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	beq      lbl_800AD618
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	bne      lbl_800AD6A8

lbl_800AD618:
	lwz      r3, 8(r31)
	cmplwi   r3, 0
	beq      lbl_800AD638
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_800AD638:
	lwz      r0, deadObjectUsedPointer__Q27JAInter14DummyObjectMgr@sda21(r13)
	addi     r4, r13, deadObjectFreePointer__Q27JAInter14DummyObjectMgr@sda21
	addi     r3, r13, deadObjectUsedPointer__Q27JAInter14DummyObjectMgr@sda21
	cmplw    r0, r31
	beq      lbl_800AD670
	lwz      r0, 4(r31)
	lwz      r3, 0(r31)
	stw      r0, 4(r3)
	lwz      r3, 4(r31)
	cmplwi   r3, 0
	beq      lbl_800AD68C
	lwz      r0, 0(r31)
	stw      r0, 0(r3)
	b        lbl_800AD68C

lbl_800AD670:
	lwz      r0, 4(r31)
	stw      r0, 0(r3)
	lwz      r3, 4(r31)
	cmplwi   r3, 0
	beq      lbl_800AD68C
	li       r0, 0
	stw      r0, 0(r3)

lbl_800AD68C:
	lwz      r0, 0(r4)
	stw      r0, 4(r31)
	lwz      r3, 4(r31)
	cmplwi   r3, 0
	beq      lbl_800AD6A4
	stw      r31, 0(r3)

lbl_800AD6A4:
	stw      r31, 0(r4)

lbl_800AD6A8:
	mr       r31, r30

lbl_800AD6AC:
	cmplwi   r31, 0
	bne      lbl_800AD5F0
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
