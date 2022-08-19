#ifndef _GAME_ENEMYANIMATORBASE_H
#define _GAME_ENEMYANIMATORBASE_H

#include "SysShape/Animator.h"
#include "BitFlag.h"

#define EANIM_FLAG_STOPPED (1 << 0) // 1
#define EANIM_FLAG_REWIND  (1 << 1) // 2
#define EANIM_FLAG_FORWARD (1 << 2) // 4

namespace Game {
struct EnemyAnimatorBase {
	EnemyAnimatorBase();
	virtual ~EnemyAnimatorBase() { }                                // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* newMgr)         = 0; // _0C
	virtual SysShape::Animator& getAnimator()                  = 0; // _10
	virtual SysShape::Animator& getAnimator(int animatorIndex) = 0; // _14

	/**
	 * @brief Runs the animate function of an inherited animator based on the frame count. The progress will reverse if it reaches the end
	 * and will playback forwards if it reaches the start.
	 */
	virtual void animate(float currentFrame);                    // _18
	virtual void animate(int animatorIndex, float currentFrame); // _1C (weak)

	virtual void resetAnimSpeed() { m_animSpeed = defaultAnimSpeed; } // _20 (weak)
	virtual u32 getTypeID() { return 'base'; }                        // _24 (weak)

	inline void reset()
	{
		m_flags.byteView[0] = 0;
		m_flags.byteView[1] = 0;
		m_flags.byteView[2] = 0;
		m_flags.byteView[3] = 0;
	}

	static const f32 defaultAnimSpeed;

	// _00, VTBL
	f32 m_animSpeed;      // _04
	f32 m_progress;       // _08, from 0 to 1 (multiplied by frame count)
	BitFlag<u32> m_flags; // _0C
};

struct EnemyBlendAnimatorBase : public EnemyAnimatorBase {
	EnemyBlendAnimatorBase();

	virtual ~EnemyBlendAnimatorBase() { }         // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr*);  // _0C
	virtual SysShape::Animator& getAnimator();    // _10
	virtual SysShape::Animator& getAnimator(int); // _14
	virtual void animate(float);                  // _18
	/**
	 * @reifiedAddress{8010AA4C}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual void animate(int p1, float p2) // _1C (weak)
	{
		EnemyAnimatorBase::animate(p1, p2);
	}
	// virtual void resetAnimSpeed(); // _20
	/**
	 * @reifiedAddress{8010AA6C}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual u32 getTypeID() { return 'blnd'; } // _24 (weak)

	void startBlend(int, int, SysShape::BlendFunction*, float, SysShape::MotionListener*);
	void endBlend();
	void animate(SysShape::BlendFunction*, float, float, float);

	SysShape::BlendAnimator m_animator; // _10

	static SysShape::BlendLinearFun sBlendLinearFun;
	static SysShape::BlendQuadraticFunc sBlendQuadraticFun;
};
} // namespace Game

#endif
