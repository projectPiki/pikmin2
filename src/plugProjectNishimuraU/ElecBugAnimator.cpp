#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game7ElecBug14ProperAnimator
    __vt__Q34Game7ElecBug14ProperAnimator:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game7ElecBug14ProperAnimatorFv
        .4byte setAnimMgr__Q34Game7ElecBug14ProperAnimatorFPQ28SysShape7AnimMgr
        .4byte getAnimator__Q34Game7ElecBug14ProperAnimatorFv
        .4byte getAnimator__Q34Game7ElecBug14ProperAnimatorFi
        .4byte animate__Q24Game17EnemyAnimatorBaseFf
        .4byte animate__Q24Game17EnemyAnimatorBaseFif
        .4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
        .4byte getTypeID__Q24Game17EnemyAnimatorBaseFv
*/

namespace Game {

/*
 * --INFO--
 * Address:	8027A828
 * Size:	000008
 */
void ElecBug::ProperAnimator::setAnimMgr(SysShape::AnimMgr* a1)
{
	// Generated from stw r4, 0x20(r3)
	_20 = a1;
}

/*
 * --INFO--
 * Address:	8027A830
 * Size:	000008
 */
void ElecBug::ProperAnimator::getAnimator(int)
{
	/*
	addi     r3, r3, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A838
 * Size:	00005C
 */
ElecBug::ProperAnimator::~ProperAnimator()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8027A87C
	lis      r3, __vt__Q34Game7ElecBug14ProperAnimator@ha
	addi     r0, r3, __vt__Q34Game7ElecBug14ProperAnimator@l
	stw      r0, 0(r31)
	beq      lbl_8027A86C
	lis      r3, __vt__Q24Game17EnemyAnimatorBase@ha
	addi     r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
	stw      r0, 0(r31)

lbl_8027A86C:
	extsh.   r0, r4
	ble      lbl_8027A87C
	mr       r3, r31
	bl       __dl__FPv

lbl_8027A87C:
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
 * Address:	8027A894
 * Size:	000008
 */
void ElecBug::ProperAnimator::getAnimator()
{
	/*
	addi     r3, r3, 0x10
	blr
	*/
}
} // namespace Game
