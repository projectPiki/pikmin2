#include "Game/EnemyAnimatorBase.h"
#include "types.h"

namespace Game {

/**
 * @note Address: 0x8012E0E8
 * @note Size: 0x44
 */
EnemyBlendAnimatorBase::EnemyBlendAnimatorBase() { }

/**
 * @note Address: 0x8012E12C
 * @note Size: 0x24
 */
void EnemyBlendAnimatorBase::setAnimMgr(SysShape::AnimMgr* mgr) { mAnimator.setAnimMgr(mgr); }

/**
 * @note Address: 0x8012E150
 * @note Size: 0x8
 */
SysShape::Animator& EnemyBlendAnimatorBase::getAnimator() { return *mAnimator.mAnimators; }

/**
 * getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
 * @note Address: 0x8012E158
 * @note Size: 0x14
 */
SysShape::Animator& EnemyBlendAnimatorBase::getAnimator(int index) { return mAnimator.mAnimators[index]; }

/**
 * @note Address: 0x8012E16C
 * @note Size: 0x9C
 */
void EnemyBlendAnimatorBase::startBlend(int startAnim, int endAnim, SysShape::BlendFunction* function, f32 framerate,
                                        SysShape::MotionListener* listener)
{
	getAnimator(0).startAnim(startAnim, nullptr);
	getAnimator(1).startAnim(endAnim, nullptr);
	mAnimator.startBlend(function, framerate, listener);
}

/**
 * @note Address: 0x8012E208
 * @note Size: 0x24
 */
void EnemyBlendAnimatorBase::endBlend() { mAnimator.endBlend(); }

/**
 * animate__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape13BlendFunctionfff
 * @note Address: 0x8012E22C
 * @note Size: 0x48
 */
void EnemyBlendAnimatorBase::animate(SysShape::BlendFunction* function, f32 timeRate, f32 speedA, f32 speedB)
{
	if (!(mFlags.isSet(1))) {
		mAnimator.animate(function, timeRate, speedA, speedB);
	} else {
		mAnimator.animate(function, 0.0f, 0.0f, 0.0f);
	}
}

/**
 * animate__Q24Game22EnemyBlendAnimatorBaseFf
 * @note Address: 0x8012E274
 * @note Size: 0xB0
 */
void EnemyBlendAnimatorBase::animate(f32 speed)
{
	SysShape::BlendLinearFun function;
	if (!(mFlags.isSet(1))) {
		if (!(mFlags.isSet(1))) {
			mAnimator.animate(&function, speed, speed, speed);
		} else {
			mAnimator.animate(&function, 0.0f, 0.0f, 0.0f);
		}
	} else {
		if (!(mFlags.isSet(1))) {
			mAnimator.animate(&function, 0.0f, 0.0f, 0.0f);
		} else {
			mAnimator.animate(&function, 0.0f, 0.0f, 0.0f);
		}
	}
}

/**
 * Static Initializers
 */
SysShape::BlendLinearFun EnemyBlendAnimatorBase::sBlendLinearFun;
SysShape::BlendQuadraticFunc EnemyBlendAnimatorBase::sBlendQuadraticFun;

} // namespace Game
