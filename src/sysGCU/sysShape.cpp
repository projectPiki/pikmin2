#include "SysShape/Animator.h"
#include "SysShape/AnimInfo.h"
#include "SysShape/Joint.h"
#include "SysShape/Model.h"
#include "SysShape/MtxObject.h"
#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_sysShape_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499C58
    lbl_80499C58:
        .skip 0xC
        .asciz "sysShape"
        .skip 3
    .global lbl_80499C70
    lbl_80499C70:
        .asciz "sysShape.cpp"
        .skip 3
    .global lbl_80499C80
    lbl_80499C80:
        .asciz "go to hell !\n"
        .skip 2
    .global lbl_80499C90
    lbl_80499C90:
        .asciz "ExMotionErr::setFrameByKeyType(%d)\n"
    .global lbl_80499CB4
    lbl_80499CB4:
        .asciz "mismatch LOOP_START - LOOP_END\n"
        .asciz "BlendAnimator : at least 1 motion is required!\n"
    .global lbl_80499D04
    lbl_80499D04:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80499D10
    lbl_80499D10:
        .asciz "reached eof\n"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EBDC8
    lbl_804EBDC8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q28SysShape8AnimInfo
    __vt__Q28SysShape8AnimInfo:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28SysShape8AnimInfoFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q28SysShape7AnimMgr
    __vt__Q28SysShape7AnimMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28SysShape7AnimMgrFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q28SysShape13BlendAnimator
    __vt__Q28SysShape13BlendAnimator:
        .4byte 0
        .4byte 0
        .4byte getCalc__Q28SysShape13BlendAnimatorFv
    .global __vt__Q28SysShape8Animator
    __vt__Q28SysShape8Animator:
        .4byte 0
        .4byte 0
        .4byte getCalc__Q28SysShape8AnimatorFv
        .4byte animate__Q28SysShape8AnimatorFf

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805161A0
    lbl_805161A0:
        .skip 0x4
    .global lbl_805161A4
    lbl_805161A4:
        .skip 0x4
    .global verbose__Q28SysShape8Animator
    verbose__Q28SysShape8Animator:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520528
    lbl_80520528:
        .4byte 0x00000000
    .global lbl_8052052C
    lbl_8052052C:
        .4byte 0x4F4B4F4B
        .4byte 0x0A000000
    .global lbl_80520534
    lbl_80520534:
        .float 1.0
    .global lbl_80520538
    lbl_80520538:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520540
    lbl_80520540:
        .4byte 0x47FA0000
        .4byte 0x00000000
*/

namespace SysShape {

/*
 * --INFO--
 * Address:	80428C50
 * Size:	000038
 */
void Model::clearAnimatorAll(void)
{
	/*
	li       r6, 0
	li       r5, 0
	b        lbl_80428C78

lbl_80428C5C:
	lwz      r4, 8(r3)
	rlwinm   r0, r6, 2, 0xe, 0x1d
	addi     r6, r6, 1
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwzx     r4, r4, r0
	stw      r5, 0x54(r4)

lbl_80428C78:
	lwz      r0, 0xc(r3)
	cmpw     r6, r0
	blt      lbl_80428C5C
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void Model::setAnimatorAll(SysShape::BaseAnimator&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80428C88
 * Size:	0000C8
 */
void Animator::startAnim(int, SysShape::MotionListener*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x10(r3)
	lwz      r3, 0x2c(r3)
	b        lbl_80428CC4

lbl_80428CB0:
	lha      r0, 0x20(r3)
	cmpw     r4, r0
	bne      lbl_80428CC0
	b        lbl_80428CD0

lbl_80428CC0:
	lwz      r3, 4(r3)

lbl_80428CC4:
	cmplwi   r3, 0
	bne      lbl_80428CB0
	li       r3, 0

lbl_80428CD0:
	stw      r3, 0xc(r30)
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_80428D04
	lwz      r3, 0x10(r30)
	bl       dump__Q28SysShape7AnimMgrFv
	lis      r3, lbl_80499C70@ha
	lis      r5, lbl_80499C80@ha
	addi     r3, r3, lbl_80499C70@l
	li       r4, 0xdc
	addi     r5, r5, lbl_80499C80@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80428D04:
	lfs      f1, lbl_80520528@sda21(r2)
	stfs     f1, 8(r30)
	lwz      r3, 0xc(r30)
	bl       getLowestAnimKey__Q28SysShape8AnimInfoFf
	cmplwi   r31, 0
	stw      r3, 0x14(r30)
	beq      lbl_80428D28
	stw      r31, 4(r30)
	b        lbl_80428D30

lbl_80428D28:
	li       r0, 0
	stw      r0, 4(r30)

lbl_80428D30:
	li       r0, 0
	stb      r0, 0x18(r30)
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
 * Address:	80428D50
 * Size:	000068
 */
void Animator::startExAnim(SysShape::AnimInfo*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80520528@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r4, 0xc(r3)
	stfs     f0, 8(r3)
	stw      r0, 4(r3)
	stb      r0, 0x18(r3)
	stw      r0, 0x14(r3)
	lbz      r0, 0x18(r3)
	ori      r0, r0, 0x80
	stb      r0, 0x18(r3)
	lbz      r0, verbose__Q28SysShape8Animator@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80428DA8
	lis      r3, lbl_80499C70@ha
	li       r4, 0xfc
	addi     r3, r3, lbl_80499C70@l
	addi     r5, r2, lbl_8052052C@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80428DA8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80428DB8
 * Size:	000008
 */
bool Animator::assertValid(SysShape::Model*) { return true; }

/*
 * --INFO--
 * Address:	80428DC0
 * Size:	000040
 */
void Animator::setCurrFrame(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stfs     f1, 8(r3)
	lwz      r3, 0xc(r3)
	bl       getLowestAnimKey__Q28SysShape8AnimInfoFf
	stw      r3, 0x14(r31)
	li       r0, 0
	stb      r0, 0x18(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80428E00
 * Size:	000100
 */
void Animator::setFrameByKeyType(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	lbz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x18, 0x18
	beq      lbl_80428E48
	lis      r3, lbl_80499C70@ha
	lis      r4, lbl_80499C90@ha
	addi     r5, r4, lbl_80499C90@l
	mr       r6, r30
	addi     r3, r3, lbl_80499C70@l
	li       r4, 0x12c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80428E48:
	cmplwi   r30, 0x3e8
	bne      lbl_80428E9C
	lwz      r3, 0xc(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lwz      r3, 0x18(r3)
	lfd      f2, lbl_80520538@sda21(r2)
	lha      r0, 6(r3)
	lfs      f0, lbl_80520534@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fsubs    f1, f1, f0
	stfs     f1, 8(r31)
	lwz      r3, 0xc(r31)
	bl       getLowestAnimKey__Q28SysShape8AnimInfoFf
	stw      r3, 0x14(r31)
	li       r0, 0
	stb      r0, 0x18(r31)
	b        lbl_80428EE8

lbl_80428E9C:
	lwz      r3, 0xc(r31)
	mr       r4, r30
	bl       getAnimKeyByType__Q28SysShape8AnimInfoFUl
	cmplwi   r3, 0
	beq      lbl_80428EE8
	lwz      r3, 0x18(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520538@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f1
	stfs     f1, 8(r31)
	lwz      r3, 0xc(r31)
	bl       getLowestAnimKey__Q28SysShape8AnimInfoFf
	stw      r3, 0x14(r31)
	li       r0, 0
	stb      r0, 0x18(r31)

lbl_80428EE8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80428F00
 * Size:	000078
 */
void Animator::setLastFrame(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0xc(r3)
	cmplwi   r3, 0
	beq      lbl_80428F64
	lwz      r3, 0x18(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lha      r0, 6(r3)
	lfd      f2, lbl_80520538@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_80520534@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fsubs    f1, f1, f0
	stfs     f1, 8(r31)
	lwz      r3, 0xc(r31)
	bl       getLowestAnimKey__Q28SysShape8AnimInfoFf
	stw      r3, 0x14(r31)
	li       r0, 0
	stb      r0, 0x18(r31)

lbl_80428F64:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80428F78
 * Size:	0002AC
 */
void Animator::animate(float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_8042920C
	lfs      f0, 8(r31)
	li       r30, 0
	fadds    f0, f0, f1
	stfs     f0, 8(r31)
	b        lbl_80429074

lbl_80428FB0:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	beq      lbl_80428FE0
	lwz      r3, 0xc(r31)
	lha      r0, 0x20(r3)
	sth      r0, 0x20(r4)
	lwz      r3, 4(r31)
	lwz      r4, 0x14(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80428FE0:
	lwz      r4, 0x14(r31)
	cmplwi   r4, 0
	beq      lbl_804290A4
	lwz      r0, 0x1c(r4)
	cmpwi    r0, 1
	beq      lbl_80428FFC
	b        lbl_80429068

lbl_80428FFC:
	lbz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80429068
	lwz      r3, 0xc(r31)
	bl       getLastLoopStart__Q28SysShape8AnimInfoFPQ28SysShape8KeyEvent
	cmplwi   r3, 0
	beq      lbl_80429040
	lwz      r3, 0x18(r3)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520538@sda21(r2)
	stw      r0, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f1
	stfs     f0, 8(r31)
	b        lbl_80429064

lbl_80429040:
	lfs      f0, lbl_80520528@sda21(r2)
	lis      r3, lbl_80499C70@ha
	lis      r5, lbl_80499CB4@ha
	li       r4, 0x171
	stfs     f0, 8(r31)
	addi     r3, r3, lbl_80499C70@l
	addi     r5, r5, lbl_80499CB4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80429064:
	li       r30, 1

lbl_80429068:
	lwz      r3, 0x14(r31)
	lwz      r0, 4(r3)
	stw      r0, 0x14(r31)

lbl_80429074:
	clrlwi.  r0, r30, 0x18
	bne      lbl_804290A4
	lwz      r4, 0x14(r31)
	cmplwi   r4, 0
	beq      lbl_804290A4
	lfs      f0, 8(r31)
	lwz      r3, 0x18(r4)
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	cmpw     r3, r0
	blt      lbl_80428FB0

lbl_804290A4:
	clrlwi.  r0, r30, 0x18
	beq      lbl_804290BC
	lwz      r3, 0xc(r31)
	lfs      f1, 8(r31)
	bl       getLowestAnimKey__Q28SysShape8AnimInfoFf
	stw      r3, 0x14(r31)

lbl_804290BC:
	lwz      r3, 0xc(r31)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lwz      r3, 0x18(r3)
	lfd      f2, lbl_80520538@sda21(r2)
	lha      r3, 6(r3)
	lfs      f1, 8(r31)
	xoris    r3, r3, 0x8000
	stw      r3, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f2
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_804291D4
	stw      r3, 0x34(r1)
	lfs      f0, lbl_80520534@sda21(r2)
	stw      r0, 0x30(r1)
	lfd      f1, 0x30(r1)
	fsubs    f1, f1, f2
	fsubs    f0, f1, f0
	stfs     f0, 8(r31)
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	beq      lbl_804291D4
	lbz      r0, 0x18(r31)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_804291D4
	addi     r3, r1, 8
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q28SysShape8KeyEvent@ha
	li       r6, 0
	addi     r0, r3, __vt__Q28SysShape8KeyEvent@l
	li       r5, -1
	stw      r0, 8(r1)
	lis      r3, 0x4330
	lfd      f1, lbl_80520538@sda21(r2)
	li       r0, 0x3e8
	stw      r6, 0x20(r1)
	addi     r4, r1, 8
	stw      r6, 0x24(r1)
	sth      r5, 0x28(r1)
	lwz      r5, 0xc(r31)
	stw      r3, 0x30(r1)
	lwz      r3, 0x18(r5)
	lha      r3, 6(r3)
	xoris    r3, r3, 0x8000
	stw      r0, 0x24(r1)
	stw      r3, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	stw      r0, 0x20(r1)
	lha      r0, 0x20(r5)
	sth      r0, 0x28(r1)
	lbz      r0, 0x18(r31)
	ori      r0, r0, 1
	stb      r0, 0x18(r31)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q28SysShape8KeyEvent@ha
	addi     r3, r1, 8
	addi     r0, r4, __vt__Q28SysShape8KeyEvent@l
	li       r4, 0
	stw      r0, 8(r1)
	bl       __dt__5CNodeFv

lbl_804291D4:
	lfs      f0, 8(r31)
	lis      r0, 0x4330
	lwz      r3, 0xc(r31)
	fctiwz   f0, f0
	stw      r0, 0x30(r1)
	lfd      f1, lbl_80520538@sda21(r2)
	lwz      r3, 0x18(r3)
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f1
	stfs     f0, 8(r3)

lbl_8042920C:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80429224
 * Size:	000080
 */
BlendAnimator::BlendAnimator()
    : BaseAnimator()
    , m_animators()
    , m_mtxCalc(nullptr)
    , _3C(0.0f)
    , _40(0.0f)
    , m_motionListener(nullptr)
{
	_49 = 0;
	_48 = 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q28SysShape12BaseAnimator@l
	lis      r4, __ct__Q28SysShape8AnimatorFv@ha
	li       r6, 0x1c
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __vt__Q28SysShape13BlendAnimator@ha
	addi     r4, r4, __ct__Q28SysShape8AnimatorFv@l
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q28SysShape13BlendAnimator@l
	addi     r3, r31, 4
	li       r7, 2
	stw      r0, 0(r31)
	bl       __construct_array
	li       r0, 0
	lfs      f0, lbl_80520528@sda21(r2)
	stw      r0, 0x4c(r31)
	mr       r3, r31
	stfs     f0, 0x3c(r31)
	stfs     f0, 0x40(r31)
	stw      r0, 0x44(r31)
	stb      r0, 0x49(r31)
	stb      r0, 0x48(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804292A4
 * Size:	000154
 */
void BlendAnimator::setAnimMgr(SysShape::AnimMgr*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stmw     r27, 0xc(r1)
	mr       r31, r3
	li       r0, 0
	lis      r3, lbl_80499C58@ha
	stb      r0, 0x48(r31)
	lfs      f31, lbl_80520528@sda21(r2)
	mr       r27, r4
	mr       r29, r31
	addi     r30, r3, lbl_80499C58@l
	li       r28, 0

lbl_804292E0:
	stw      r27, 0x14(r29)
	lwz      r3, 0x14(r29)
	lwz      r3, 0x2c(r3)
	b        lbl_80429304

lbl_804292F0:
	lha      r0, 0x20(r3)
	cmpwi    r0, 0
	bne      lbl_80429300
	b        lbl_80429310

lbl_80429300:
	lwz      r3, 4(r3)

lbl_80429304:
	cmplwi   r3, 0
	bne      lbl_804292F0
	li       r3, 0

lbl_80429310:
	stw      r3, 0x10(r29)
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	bne      lbl_8042933C
	lwz      r3, 0x14(r29)
	bl       dump__Q28SysShape7AnimMgrFv
	addi     r3, r30, 0x18
	addi     r5, r30, 0x28
	li       r4, 0xdc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042933C:
	stfs     f31, 0xc(r29)
	fmr      f1, f31
	lwz      r3, 0x10(r29)
	bl       getLowestAnimKey__Q28SysShape8AnimInfoFf
	stw      r3, 0x18(r29)
	li       r0, 0
	addi     r28, r28, 1
	stw      r0, 8(r29)
	cmpwi    r28, 2
	stbu     r0, 0x1c(r29)
	blt      lbl_804292E0
	lwz      r29, 0x2c(r27)
	b        lbl_80429384

lbl_80429370:
	lha      r0, 0x20(r29)
	cmpwi    r0, 0
	bne      lbl_80429380
	b        lbl_80429390

lbl_80429380:
	lwz      r29, 4(r29)

lbl_80429384:
	cmplwi   r29, 0
	bne      lbl_80429370
	li       r29, 0

lbl_80429390:
	cmplwi   r29, 0
	bne      lbl_804293AC
	addi     r3, r30, 0x18
	addi     r5, r30, 0x7c
	li       r4, 0x1ba
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804293AC:
	lwz      r3, 0x18(r27)
	li       r6, 0
	lwz      r4, 0x18(r29)
	li       r7, 0
	lwz      r3, 8(r3)
	li       r8, 0
	mr       r5, r4
	lwz      r3, 4(r3)
	lwz      r0, 0x18(r3)
	clrlwi   r3, r0, 0x1c
	bl
J3DUNewMtxCalcAnm__FUlP15J3DAnmTransformP15J3DAnmTransformP15J3DAnmTransformP15J3DAnmTransform14J3DMtxCalcFlag
	stw      r3, 0x4c(r31)
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void BlendAnimator::setWeight(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804293F8
 * Size:	00015C
 */
void BlendAnimator::startBlend(SysShape::BlendFunction*, float, SysShape::MotionListener*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r5, 0x44(r3)
	  mr        r31, r3
	  lfs       f0, 0x21C8(r2)
	  mr        r3, r4
	  stfs      f0, 0x3C(r31)
	  stfs      f1, 0x40(r31)
	  fmr       f1, f0
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmr       f31, f1
	  lfs       f0, 0x21C8(r2)
	  li        r0, 0
	  fcmpo     cr0, f0, f31
	  cror      2, 0, 0x2
	  bne-      .loc_0x70
	  lfs       f0, 0x21D4(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x70
	  li        r0, 0x1

	.loc_0x70:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x94
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x6390
	  li        r4, 0x1C6
	  subi      r5, r5, 0x62FC
	  crclr     6, 0x6
	  bl        -0x3FEE48

	.loc_0x94:
	  lwz       r3, 0x10(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lwz       r5, 0x18(r3)
	  b         .loc_0xAC

	.loc_0xA8:
	  li        r5, 0

	.loc_0xAC:
	  lwz       r3, 0x4C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4C(r31)
	  li        r4, 0
	  lfs       f0, 0x21D4(r2)
	  lwz       r12, 0x0(r3)
	  fsubs     f1, f0, f31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  lwz       r5, 0x18(r3)
	  b         .loc_0xFC

	.loc_0xF8:
	  li        r5, 0

	.loc_0xFC:
	  lwz       r3, 0x4C(r31)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4C(r31)
	  fmr       f1, f31
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x49(r31)
	  stb       r0, 0x48(r31)
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80429554
 * Size:	000018
 */
void BlendAnimator::endBlend(void)
{
	/*
	li       r0, 0
	lfs      f0, lbl_80520528@sda21(r2)
	stb      r0, 0x48(r3)
	stb      r0, 0x49(r3)
	stfs     f0, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042956C
 * Size:	000278
 */
void BlendAnimator::animate(SysShape::BlendFunction*, float, float, float)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lbz      r0, 0x48(r3)
	fmr      f30, f1
	fmr      f31, f3
	mr       r31, r3
	cmplwi   r0, 0
	mr       r30, r4
	beq      lbl_804297A4
	addi     r3, r31, 4
	fmr      f1, f2
	lwz      r12, 4(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x20
	fmr      f1, f31
	lwz      r12, 0x20(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x3c(r31)
	fadds    f0, f0, f30
	stfs     f0, 0x3c(r31)
	lfs      f0, 0x3c(r31)
	lfs      f1, 0x40(r31)
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_80429694
	stfs     f1, 0x3c(r31)
	lbz      r0, 0x49(r31)
	cmplwi   r0, 0
	bne      lbl_80429694
	li       r0, 1
	stb      r0, 0x49(r31)
	lwz      r0, 0x44(r31)
	cmplwi   r0, 0
	beq      lbl_80429694
	addi     r3, r1, 8
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q28SysShape8KeyEvent@ha
	li       r5, 0
	addi     r0, r3, __vt__Q28SysShape8KeyEvent@l
	li       r3, -1
	stw      r0, 8(r1)
	li       r0, 0x7d0
	addi     r4, r1, 8
	stw      r5, 0x20(r1)
	stw      r5, 0x24(r1)
	sth      r3, 0x28(r1)
	lfs      f0, 0x40(r31)
	fctiwz   f0, f0
	stw      r0, 0x24(r1)
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	stw      r0, 0x20(r1)
	lwz      r3, 0x44(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q28SysShape8KeyEvent@ha
	addi     r3, r1, 8
	addi     r0, r4, __vt__Q28SysShape8KeyEvent@l
	li       r4, 0
	stw      r0, 8(r1)
	bl       __dt__5CNodeFv

lbl_80429694:
	lfs      f1, 0x3c(r31)
	mr       r3, r30
	lfs      f0, 0x40(r31)
	lwz      r12, 0(r30)
	fdivs    f1, f1, f0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmr      f31, f1
	lfs      f0, lbl_80520528@sda21(r2)
	li       r0, 0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_804296E0
	lfs      f0, lbl_80520534@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_804296E0
	li       r0, 1

lbl_804296E0:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80429704
	lis      r3, lbl_80499C70@ha
	lis      r5, lbl_80499D04@ha
	addi     r3, r3, lbl_80499C70@l
	li       r4, 0x1c6
	addi     r5, r5, lbl_80499D04@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80429704:
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_80429718
	lwz      r5, 0x18(r3)
	b        lbl_8042971C

lbl_80429718:
	li       r5, 0

lbl_8042971C:
	lwz      r3, 0x4c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x4c(r31)
	li       r4, 0
	lfs      f0, lbl_80520534@sda21(r2)
	lwz      r12, 0(r3)
	fsubs    f1, f0, f31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r31)
	cmplwi   r3, 0
	beq      lbl_80429768
	lwz      r5, 0x18(r3)
	b        lbl_8042976C

lbl_80429768:
	li       r5, 0

lbl_8042976C:
	lwz      r3, 0x4c(r31)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x4c(r31)
	fmr      f1, f31
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_804297BC

lbl_804297A4:
	addi     r3, r31, 4
	fmr      f1, f2
	lwz      r12, 4(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_804297BC:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x64(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	804297E4
 * Size:	000040
 */
J3DMtxCalc* BlendAnimator::getCalc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80429804
	lwz      r3, 0x4c(r3)
	b        lbl_80429814

lbl_80429804:
	lwzu     r12, 4(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80429814:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80429824
 * Size:	00007C
 */
void Joint::init(unsigned short, SysShape::Model*, J3DJoint*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	sth      r4, 0x38(r3)
	stw      r5, 0x34(r3)
	stw      r6, 0x18(r3)
	lfs      f0, 0x3c(r6)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x40(r6)
	stfs     f0, 0x20(r3)
	lfs      f0, 0x44(r6)
	stfs     f0, 0x24(r3)
	lfs      f0, 0x48(r6)
	stfs     f0, 0x28(r3)
	lfs      f0, 0x4c(r6)
	stfs     f0, 0x2c(r3)
	lfs      f0, 0x50(r6)
	stfs     f0, 0x30(r3)
	lwz      r3, 8(r5)
	lhz      r4, 0x38(r31)
	lwz      r3, 4(r3)
	lwz      r3, 0x54(r3)
	bl       getName__10JUTNameTabCFUs
	stw      r3, 0x14(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804298A0
 * Size:	000020
 */
void Joint::getWorldMatrix(void)
{
	/*
	lwz      r4, 0x34(r3)
	lhz      r0, 0x38(r3)
	lwz      r3, 8(r4)
	mulli    r0, r0, 0x30
	lwz      r3, 0x84(r3)
	lwz      r3, 0xc(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Joint::setCallback(SysShape::JointCallback*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JointCallback::calc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void AnimInfo::attach(SysShape::Model*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804298C0
 * Size:	00006C
 */
void AnimInfo::getLowestAnimKey(float)
{
	/*
	fctiwz   f0, f1
	stwu     r1, -0x10(r1)
	lfs      f2, lbl_80520540@sda21(r2)
	lis      r0, 0x4330
	lwz      r7, 0x38(r3)
	li       r3, 0
	stfd     f0, 8(r1)
	lfd      f1, lbl_80520538@sda21(r2)
	lwz      r6, 0xc(r1)
	b        lbl_8042991C

lbl_804298E8:
	lwz      r5, 0x18(r7)
	stw      r0, 8(r1)
	xoris    r4, r5, 0x8000
	cmpw     r5, r6
	stw      r4, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	blt      lbl_80429918
	fcmpo    cr0, f0, f2
	bge      lbl_80429918
	fmr      f2, f0
	mr       r3, r7

lbl_80429918:
	lwz      r7, 4(r7)

lbl_8042991C:
	cmplwi   r7, 0
	bne      lbl_804298E8
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void AnimInfo::dump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void AnimInfo::getLastLoopStart(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042992C
 * Size:	000028
 */
void AnimInfo::getLastLoopStart(SysShape::KeyEvent*)
{
	/*
	lwz      r3, 8(r4)
	b        lbl_80429944

lbl_80429934:
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beqlr
	lwz      r3, 8(r3)

lbl_80429944:
	cmplwi   r3, 0
	bne      lbl_80429934
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80429954
 * Size:	000028
 */
void AnimInfo::getAnimKeyByType(unsigned long)
{
	/*
	lwz      r3, 0x38(r3)
	b        lbl_8042996C

lbl_8042995C:
	lwz      r0, 0x1c(r3)
	cmplw    r0, r4
	beqlr
	lwz      r3, 4(r3)

lbl_8042996C:
	cmplwi   r3, 0
	bne      lbl_8042995C
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042997C
 * Size:	000020
 */
void AnimInfo::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       readEditor__Q28SysShape8AnimInfoFR6Stream
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042999C
 * Size:	00010C
 */
void AnimInfo::readEditor(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	li       r4, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	bl       readString__6StreamFPci
	stw      r3, 0x4c(r28)
	mr       r3, r29
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	stw      r3, 0x14(r28)
	b        lbl_80429A50

lbl_804299EC:
	mr       r3, r29
	bl       readInt__6StreamFv
	mr       r31, r3
	cmpwi    r31, -1
	beq      lbl_80429A88
	li       r3, 0x24
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80429A34
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q28SysShape8KeyEvent@ha
	li       r3, 0
	addi     r4, r4, __vt__Q28SysShape8KeyEvent@l
	li       r0, -1
	stw      r4, 0(r30)
	stw      r3, 0x18(r30)
	stw      r3, 0x1c(r30)
	sth      r0, 0x20(r30)

lbl_80429A34:
	stw      r31, 0x18(r30)
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0x1c(r30)
	mr       r4, r30
	addi     r3, r28, 0x28
	bl       add__5CNodeFP5CNode

lbl_80429A50:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804299EC
	lis      r3, lbl_80499C70@ha
	lis      r5, lbl_80499D10@ha
	addi     r3, r3, lbl_80499C70@l
	li       r4, 0x349
	addi     r5, r5, lbl_80499D10@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80429A88:
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
 * Address:	80429AA8
 * Size:	00013C
 */
void AnimMgr::load(char*, J3DModelData*, JKRFileLoader*)
{
	/*
	stwu     r1, -0x450(r1)
	mflr     r0
	li       r6, 0
	li       r8, 2
	stw      r0, 0x454(r1)
	li       r0, 0
	li       r9, 0
	li       r10, 0
	stmw     r26, 0x438(r1)
	mr       r28, r4
	mr       r29, r5
	li       r4, 0
	li       r5, 0
	stw      r0, 8(r1)
	lwz      r7, sSystemHeap__7JKRHeap@sda21(r13)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r30, r3, r3
	bne      lbl_80429AF8
	li       r3, 0
	b        lbl_80429BD0

lbl_80429AF8:
	mr       r4, r30
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_80429B20
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_80429B20:
	li       r3, 0x74
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80429BAC
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q28SysShape7AnimMgr@ha
	addi     r27, r31, 0x1c
	addi     r0, r3, __vt__Q28SysShape7AnimMgr@l
	stw      r0, 0(r31)
	mr       r3, r27
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q28SysShape8AnimInfo@ha
	addi     r26, r27, 0x28
	addi     r0, r3, __vt__Q28SysShape8AnimInfo@l
	stw      r0, 0(r27)
	mr       r3, r26
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q28SysShape8KeyEvent@ha
	li       r3, 0
	addi     r4, r4, __vt__Q28SysShape8KeyEvent@l
	li       r0, -1
	stw      r4, 0(r26)
	stw      r3, 0x18(r26)
	stw      r3, 0x1c(r26)
	sth      r0, 0x20(r26)
	stw      r3, 0x18(r27)
	stw      r3, 0x1c(r27)
	stw      r3, 0x50(r27)
	stw      r3, 0x24(r27)
	sth      r3, 0x70(r31)
	stw      r3, 0x18(r31)
	stw      r3, 0x2c(r31)
	stw      r3, 0x28(r31)
	stw      r3, 0x24(r31)
	stw      r3, 0x20(r31)

lbl_80429BAC:
	mr       r3, r31
	mr       r5, r28
	mr       r6, r29
	addi     r4, r1, 0x10
	li       r7, 0
	bl       load__Q28SysShape7AnimMgrFR6StreamP12J3DModelDataP13JKRFileLoaderPc
	mr       r3, r30
	bl       __dla__FPv
	mr       r3, r31

lbl_80429BD0:
	lmw      r26, 0x438(r1)
	lwz      r0, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x450
	blr
	*/
}

/*
 * --INFO--
 * Address:	80429BE4
 * Size:	000084
 */
AnimInfo::~AnimInfo(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80429C4C
	lis      r3, __vt__Q28SysShape8AnimInfo@ha
	addic.   r0, r30, 0x28
	addi     r0, r3, __vt__Q28SysShape8AnimInfo@l
	stw      r0, 0(r30)
	beq      lbl_80429C30
	lis      r4, __vt__Q28SysShape8KeyEvent@ha
	addi     r3, r30, 0x28
	addi     r0, r4, __vt__Q28SysShape8KeyEvent@l
	li       r4, 0
	stw      r0, 0x28(r30)
	bl       __dt__5CNodeFv

lbl_80429C30:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80429C4C
	mr       r3, r30
	bl       __dl__FPv

lbl_80429C4C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80429C68
 * Size:	000080
 */
void AnimMgr::dump(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_80429CC4

lbl_80429C88:
	lwz      r3, 0x2c(r30)
	b        lbl_80429CA4

lbl_80429C90:
	lha      r0, 0x20(r3)
	cmpw     r31, r0
	bne      lbl_80429CA0
	b        lbl_80429CB0

lbl_80429CA0:
	lwz      r3, 4(r3)

lbl_80429CA4:
	cmplwi   r3, 0
	bne      lbl_80429C90
	li       r3, 0

lbl_80429CB0:
	lwzu     r12, 0x28(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_80429CC4:
	lhz      r0, 0x70(r30)
	cmpw     r31, r0
	blt      lbl_80429C88
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
 * Address:	........
 * Size:	0000CC
 */
void AnimMgr::load(Stream&, SysShape::Model*, JKRFileLoader*, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80429CE8
 * Size:	0000A0
 */
AnimMgr::~AnimMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80429D6C
	lis      r3, __vt__Q28SysShape7AnimMgr@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q28SysShape7AnimMgr@l
	stw      r0, 0(r30)
	beq      lbl_80429D50
	lis      r4, __vt__Q28SysShape8AnimInfo@ha
	addic.   r3, r30, 0x44
	addi     r0, r4, __vt__Q28SysShape8AnimInfo@l
	stw      r0, 0x1c(r30)
	beq      lbl_80429D44
	lis      r4, __vt__Q28SysShape8KeyEvent@ha
	addi     r0, r4, __vt__Q28SysShape8KeyEvent@l
	stw      r0, 0x44(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_80429D44:
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_80429D50:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80429D6C
	mr       r3, r30
	bl       __dl__FPv

lbl_80429D6C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
JointCallback::~JointCallback(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void JointCallback::init(Vec const&, float const (&)[3][4])
{
	// UNUSED FUNCTION
}

} // namespace SysShape

/*
 * --INFO--
 * Address:	80429D88
 * Size:	000028
 */
void __sinit_sysShape_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EBDC8@ha
	stw      r0, lbl_805161A0@sda21(r13)
	stfsu    f0, lbl_804EBDC8@l(r3)
	stfs     f0, lbl_805161A4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
