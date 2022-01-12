#include "Game/EnemyAnimatorBase.h"
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
    : EnemyAnimatorBase()
    , m_animator()
{
}

/*
 * --INFO--
 * Address:	8012E12C
 * Size:	000024
 */
void EnemyBlendAnimatorBase::setAnimMgr(SysShape::AnimMgr* mgr) { m_animator.setAnimMgr(mgr); }

/*
 * --INFO--
 * Address:	8012E150
 * Size:	000008
 */
SysShape::Animator& EnemyBlendAnimatorBase::getAnimator() { return *m_animator.m_animators; }

/*
 * getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
 * --INFO--
 * Address:	8012E158
 * Size:	000014
 */
SysShape::Animator& EnemyBlendAnimatorBase::getAnimator(int index) { return m_animator.m_animators[index]; }

/*
 * --INFO--
 * Address:	8012E16C
 * Size:	00009C
 */
void EnemyBlendAnimatorBase::startBlend(int p1, int p2, SysShape::BlendFunction* function, float p4, SysShape::MotionListener* listener)
{
	getAnimator(0).startAnim(p1, nullptr);
	getAnimator(1).startAnim(p2, nullptr);
	m_animator.startBlend(function, p4, listener);
}

/*
 * --INFO--
 * Address:	8012E208
 * Size:	000024
 */
void EnemyBlendAnimatorBase::endBlend() { m_animator.endBlend(); }

/*
 * animate__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape13BlendFunctionfff
 * --INFO--
 * Address:	8012E22C
 * Size:	000048
 */
void EnemyBlendAnimatorBase::animate(SysShape::BlendFunction* function, float p2, float p3, float p4)
{
	if (!(m_flags.m_flags & 1)) {
		m_animator.animate(function, p2, p3, p4);
	} else {
		m_animator.animate(function, 0.0f, 0.0f, 0.0f);
	}
}

/*
 * animate__Q24Game22EnemyBlendAnimatorBaseFf
 * --INFO--
 * Address:	8012E274
 * Size:	0000B0
 */
void EnemyBlendAnimatorBase::animate(float p1)
{
	SysShape::BlendLinearFun function;
	if (!(m_flags.m_flags & 1)) {
		if (!(m_flags.m_flags & 1)) {
			m_animator.animate(&function, p1, p1, p1);
		} else {
			m_animator.animate(&function, 0.0f, 0.0f, 0.0f);
		}
	} else {
		if (!(m_flags.m_flags & 1)) {
			m_animator.animate(&function, 0.0f, 0.0f, 0.0f);
		} else {
			m_animator.animate(&function, 0.0f, 0.0f, 0.0f);
		}
	}
}

} // namespace Game

// namespace SysShape {

// /*
//  * --INFO--
//  * Address:	8012E324
//  * Size:	000004
//  */
// void BlendLinearFun::getValue(float) { }

// } // namespace SysShape

/*
 * --INFO--
 * Address:	8012E328
 * Size:	00001C
 */
// void __sinit_enemyBlendAnimatorBase_cpp(void)
// {
/*
lis      r4, __vt__Q28SysShape14BlendLinearFun@ha
lis      r3, __vt__Q28SysShape18BlendQuadraticFunc@ha
addi     r4, r4, __vt__Q28SysShape14BlendLinearFun@l
addi     r0, r3, __vt__Q28SysShape18BlendQuadraticFunc@l
stw      r4, sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase@sda21(r13)
stw      r0, sBlendQuadraticFun__Q24Game22EnemyBlendAnimatorBase@sda21(r13)
blr
*/
// }

// namespace SysShape {

// /*
//  * --INFO--
//  * Address:	8012E344
//  * Size:	000008
//  */
// void BlendQuadraticFunc::getValue(float)
// {
// 	/*
// 	fmuls    f1, f1, f1
// 	blr
// 	*/
// }
// } // namespace SysShape
