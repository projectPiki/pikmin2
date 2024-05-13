#ifndef _GAME_ENEMYANIMATORBASE_H
#define _GAME_ENEMYANIMATORBASE_H

#include "SysShape/Animator.h"
#include "BitFlag.h"

namespace Game {
struct EnemyAnimatorBase {
	EnemyAnimatorBase();

	virtual ~EnemyAnimatorBase() { }                                // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* newMgr)         = 0; // _0C
	virtual SysShape::Animator& getAnimator()                  = 0; // _10
	virtual SysShape::Animator& getAnimator(int animatorIndex) = 0; // _14

	/**
	 * @brief Runs the animate function of an inherited animator based on the frame count. The progress will reverse if
	 * it reaches the end and will playback forwards if it reaches the start.
	 */
	virtual void animate(f32 speed);                    // _18
	virtual void animate(int animatorIndex, f32 speed); // _1C (weak)

	virtual void resetAnimSpeed() { mSpeed = defaultAnimSpeed; } // _20 (weak)
	virtual u32 getTypeID() { return 'base'; }                   // _24 (weak)

	inline void reset()
	{
		mFlags.byteView[0] = 0;
		mFlags.byteView[1] = 0;
		mFlags.byteView[2] = 0;
		mFlags.byteView[3] = 0;
	}

	static const f32 defaultAnimSpeed;

	// _00, VTBL
	f32 mSpeed;          // _04
	f32 mNormalizedTime; // _08, from 0 (start) to 1 (end, multiplied by frame count)
	BitFlag<u32> mFlags; // _0C
};

struct EnemyBlendAnimatorBase : public EnemyAnimatorBase {
	EnemyBlendAnimatorBase();

	virtual ~EnemyBlendAnimatorBase() { }             // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);  // _0C
	virtual SysShape::Animator& getAnimator();        // _10
	virtual SysShape::Animator& getAnimator(int idx); // _14
	virtual void animate(f32 speed);                  // _18
	/**
	 * @reifiedAddress{8010AA4C}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual void animate(int animatorIndex, f32 speed) // _1C (weak)
	{
		EnemyAnimatorBase::animate(animatorIndex, speed);
	}
	/**
	 * @reifiedAddress{8010AA6C}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual u32 getTypeID() { return 'blnd'; } // _24 (weak)

	void startBlend(int startAnim, int endAnim, SysShape::BlendFunction* function, f32 framerate, SysShape::MotionListener* listener);
	void endBlend();
	void animate(SysShape::BlendFunction* function, f32, f32, f32);

	static SysShape::BlendLinearFun sBlendLinearFun;
	static SysShape::BlendQuadraticFunc sBlendQuadraticFun;

	// _00     = VTBL
	// _00-_10 = EnemyAnimatorBase
	SysShape::BlendAnimator mAnimator; // _10
};

inline f32 getReverseAnimSpeed(f32 scale) { return EnemyAnimatorBase::defaultAnimSpeed * -scale; }

} // namespace Game

#endif
