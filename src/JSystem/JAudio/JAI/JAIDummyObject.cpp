#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "types.h"

JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::deadObjectFreePointer;
JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::deadObjectUsedPointer;
JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::deadObjectObject;

/*
 * --INFO--
 * Address:	800AD490
 * Size:	0000DC
 */
void JAInter::DummyObjectMgr::init()
{
	JKRHeap* heap         = JAIGetCurrentHeap();
	deadObjectFreePointer = deadObjectObject
	    = (DummyObject*)new (heap, 0x20) u8[sizeof(DummyObject) * JAIGlobalParameter::getParamDummyObjectMax()];
	deadObjectUsedPointer = nullptr;
	// deadObjectObject        = deadObjectFreePointer;
	deadObjectObject[0]._00 = nullptr;
	deadObjectObject[0]._04 = deadObjectObject + 1;
	u32 i;
	for (i = 1; i < JAIGlobalParameter::getParamDummyObjectMax() - 1; i++) {
		deadObjectObject[i]._00 = &deadObjectObject[i - 1];
		deadObjectObject[i]._04 = &deadObjectObject[i + 1];
	}
	deadObjectObject[i]._00 = &deadObjectObject[i - 1];
	deadObjectObject[i]._04 = nullptr;
}

/*
 * --INFO--
 * Address:	800AD56C
 * Size:	000068
 */
JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::getPointer(u32 p1)
{
	DummyObject** r5 = &deadObjectFreePointer;
	DummyObject** r6 = &deadObjectUsedPointer;
	DummyObject* v1;
	if (deadObjectFreePointer != nullptr) {
		v1              = (*r5)->_04;
		DummyObject* r4 = *r6;
		*r5             = v1;
		if (r4 != nullptr) {
			(*r5)->_04 = r4;
			(*r6)->_00 = (*r5);
		} else {
			(*r5)->_04 = nullptr;
		}
		(*r5)->_00 = v1;
		*r6        = v1;
		v1->_18    = p1;
		v1->mSound = nullptr;
	} else {
		v1 = nullptr;
	}
	return v1;
	// DummyObject* r0  = deadObjectFreePointer;
	// DummyObject** r5 = &deadObjectFreePointer;
	// DummyObject** r6 = &deadObjectUsedPointer;
	// if (r0 != nullptr) {
	// 	r0              = (*r5)->_04;
	// 	DummyObject* r4 = *r6;
	// 	*r5             = r0;
	// 	if (r4 != nullptr) {
	// 		(*r5)->_04 = r4;
	// 		(*r6)->_00 = (*r5);
	// 	} else {
	// 		r0         = nullptr;
	// 		(*r5)->_04 = r0;
	// 	}
	// 	r0->_00     = nullptr;
	// 	*r6         = r0;
	// 	r0->_18     = p1;
	// 	r0->mSound = nullptr;
	// } else {
	// 	r0 = nullptr;
	// }
	// return r0;
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
void JAInter::DummyObjectMgr::check()
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
