#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_enemyBlendAnimatorBase_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28SysShape14BlendLinearFun
    __vt__Q28SysShape14BlendLinearFun:
        .4byte 0
        .4byte 0
        .4byte getValue__Q28SysShape14BlendLinearFunFf
    .global __vt__Q24Game22EnemyBlendAnimatorBase
    __vt__Q24Game22EnemyBlendAnimatorBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game22EnemyBlendAnimatorBaseFv
        .4byte setAnimMgr__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape7AnimMgr
        .4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFv
        .4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
        .4byte animate__Q24Game22EnemyBlendAnimatorBaseFf
        .4byte animate__Q24Game22EnemyBlendAnimatorBaseFif
        .4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
        .4byte getTypeID__Q24Game22EnemyBlendAnimatorBaseFv
    .global __vt__Q28SysShape18BlendQuadraticFunc
    __vt__Q28SysShape18BlendQuadraticFunc:
        .4byte 0
        .4byte 0
        .4byte getValue__Q28SysShape18BlendQuadraticFuncFf

    .section .sbss # 0x80514D80 - 0x80516360
    .global sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase
    sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase:
        .skip 0x4
    .global sBlendQuadraticFun__Q24Game22EnemyBlendAnimatorBase
    sBlendQuadraticFun__Q24Game22EnemyBlendAnimatorBase:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518118
    lbl_80518118:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8012E0E8
 * Size:	000044
 */
EnemyBlendAnimatorBase::EnemyBlendAnimatorBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r4, __vt__Q24Game22EnemyBlendAnimatorBase@ha
	addi     r3, r31, 0x10
	addi     r0, r4, __vt__Q24Game22EnemyBlendAnimatorBase@l
	stw      r0, 0(r31)
	bl       __ct__Q28SysShape13BlendAnimatorFv
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
 * Address:	8012E12C
 * Size:	000024
 */
void EnemyBlendAnimatorBase::setAnimMgr(SysShape::AnimMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x10
	stw      r0, 0x14(r1)
	bl       setAnimMgr__Q28SysShape13BlendAnimatorFPQ28SysShape7AnimMgr
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012E150
 * Size:	000008
 */
void EnemyBlendAnimatorBase::getAnimator()
{
	/*
	addi     r3, r3, 0x14
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012E158
 * Size:	000014
 */
void EnemyBlendAnimatorBase::getAnimator(int)
{
	/*
	mulli    r4, r4, 0x1c
	mr       r0, r3
	addi     r3, r4, 0x14
	add      r3, r0, r3
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012E16C
 * Size:	00009C
 */
void EnemyBlendAnimatorBase::startBlend(int, int, SysShape::BlendFunction*,
                                        float, SysShape::MotionListener*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x28(r1)
	  fmr       f31, f1
	  stmw      r27, 0x14(r1)
	  mr        r28, r4
	  mr        r27, r3
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  li        r5, 0
	  bl        0x2FAAD4
	  mr        r3, r27
	  li        r4, 0x1
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  li        r5, 0
	  bl        0x2FAAB0
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  addi      r3, r27, 0x10
	  bl        0x2FB20C
	  lfd       f31, 0x28(r1)
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E208
 * Size:	000024
 */
void EnemyBlendAnimatorBase::endBlend()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x10
	stw      r0, 0x14(r1)
	bl       endBlend__Q28SysShape13BlendAnimatorFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012E22C
 * Size:	000048
 */
void EnemyBlendAnimatorBase::animate(SysShape::BlendFunction*, float, float,
                                     float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xC(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x24
	  addi      r3, r3, 0x10
	  bl        0x2FB324
	  b         .loc_0x38

	.loc_0x24:
	  lfs       f1, -0x6248(r2)
	  addi      r3, r3, 0x10
	  fmr       f2, f1
	  fmr       f3, f1
	  bl        0x2FB30C

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E274
 * Size:	0000B0
 */
void EnemyBlendAnimatorBase::animate(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__Q28SysShape13BlendFunction@ha
	lis      r4, __vt__Q28SysShape14BlendLinearFun@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, __vt__Q28SysShape13BlendFunction@l
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q28SysShape14BlendLinearFun@l
	stw      r0, 8(r1)
	lwz      r0, 0xc(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8012E2DC
	bne      lbl_8012E2C0
	fmr      f2, f1
	addi     r3, r3, 0x10
	fmr      f3, f1
	addi     r4, r1, 8
	bl       animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
	b        lbl_8012E314

lbl_8012E2C0:
	lfs      f1, lbl_80518118@sda21(r2)
	addi     r3, r3, 0x10
	addi     r4, r1, 8
	fmr      f2, f1
	fmr      f3, f1
	bl       animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
	b        lbl_8012E314

lbl_8012E2DC:
	bne      lbl_8012E2FC
	lfs      f1, lbl_80518118@sda21(r2)
	addi     r3, r3, 0x10
	addi     r4, r1, 8
	fmr      f2, f1
	fmr      f3, f1
	bl       animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
	b        lbl_8012E314

lbl_8012E2FC:
	lfs      f1, lbl_80518118@sda21(r2)
	addi     r3, r3, 0x10
	addi     r4, r1, 8
	fmr      f2, f1
	fmr      f3, f1
	bl       animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff

lbl_8012E314:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

namespace SysShape {

/*
 * --INFO--
 * Address:	8012E324
 * Size:	000004
 */
void BlendLinearFun::getValue(float) { }

} // namespace SysShape

/*
 * --INFO--
 * Address:	8012E328
 * Size:	00001C
 */
void __sinit_enemyBlendAnimatorBase_cpp(void)
{
	/*
	lis      r4, __vt__Q28SysShape14BlendLinearFun@ha
	lis      r3, __vt__Q28SysShape18BlendQuadraticFunc@ha
	addi     r4, r4, __vt__Q28SysShape14BlendLinearFun@l
	addi     r0, r3, __vt__Q28SysShape18BlendQuadraticFunc@l
	stw      r4, sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase@sda21(r13)
	stw      r0, sBlendQuadraticFun__Q24Game22EnemyBlendAnimatorBase@sda21(r13)
	blr
	*/
}

namespace SysShape {

/*
 * --INFO--
 * Address:	8012E344
 * Size:	000008
 */
void BlendQuadraticFunc::getValue(float)
{
	/*
	fmuls    f1, f1, f1
	blr
	*/
}
} // namespace SysShape
