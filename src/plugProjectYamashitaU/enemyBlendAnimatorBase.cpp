#include "Game/EnemyAnimatorBase.h"
#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8012E0E8
 * Size:	000044
 */
EnemyBlendAnimatorBase::EnemyBlendAnimatorBase() { }

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
void EnemyBlendAnimatorBase::startBlend(int startAnim, int endAnim, SysShape::BlendFunction* function, f32 framerate,
                                        SysShape::MotionListener* listener)
{
	getAnimator(0).startAnim(startAnim, nullptr);
	getAnimator(1).startAnim(endAnim, nullptr);
	m_animator.startBlend(function, framerate, listener);
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
void EnemyBlendAnimatorBase::animate(SysShape::BlendFunction* function, f32 p2, f32 p3, f32 p4)
{
	if (!(m_flags.typeView & 1)) {
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
void EnemyBlendAnimatorBase::animate(f32 p1)
{
	SysShape::BlendLinearFun function;
	if (!(m_flags.typeView & 1)) {
		if (!(m_flags.typeView & 1)) {
			m_animator.animate(&function, p1, p1, p1);
		} else {
			m_animator.animate(&function, 0.0f, 0.0f, 0.0f);
		}
	} else {
		if (!(m_flags.typeView & 1)) {
			m_animator.animate(&function, 0.0f, 0.0f, 0.0f);
		} else {
			m_animator.animate(&function, 0.0f, 0.0f, 0.0f);
		}
	}
}

/*
 * Static Initializers
 */
SysShape::BlendLinearFun EnemyBlendAnimatorBase::sBlendLinearFun;
SysShape::BlendQuadraticFunc EnemyBlendAnimatorBase::sBlendQuadraticFun;

} // namespace Game
