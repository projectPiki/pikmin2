#ifndef _GAME_ENEMYANIMATORBASE_H
#define _GAME_ENEMYANIMATORBASE_H

#include "types.h"
#include "SysShape/Animator.h"
namespace Game {
struct EnemyAnimatorBase {
	EnemyAnimatorBase();
	virtual ~EnemyAnimatorBase() { }                  // _04
	virtual void setAnimMgr(SysShape::AnimMgr*)  = 0; // _08
	virtual SysShape::Animator& getAnimator()    = 0; // _0C
	virtual SysShape::Animator& getAnimator(int) = 0; // _10
	virtual void animate(float);                      // _14
	virtual void animate(int, float);                 // _18
	virtual void resetAnimSpeed();                    // _1C
	virtual u32 getTypeID();                          // _20

	inline void reset()
	{
		m_flags.byteView.a = 0;
		m_flags.byteView.b = 0;
		m_flags.byteView.c = 0;
		m_flags.byteView.d = 0;
	}

	static const f32 defaultAnimSpeed;

	// _00, VTBL
	f32 m_animSpeed; // _04
	f32 _08;         // _08
	union {
		struct {
			u8 a, b, c, d;
		} byteView;
		u32 m_flags; // _0C
	} m_flags;
};

struct EnemyBlendAnimatorBase : public EnemyAnimatorBase {
	EnemyBlendAnimatorBase();

	virtual ~EnemyBlendAnimatorBase();            // _00
	virtual void setAnimMgr(SysShape::AnimMgr*);  // _04
	virtual SysShape::Animator& getAnimator();    // _08
	virtual SysShape::Animator& getAnimator(int); // _0C
	virtual void animate(float);                  // _10
	/**
	 * @reifiedAddress{8010AA4C}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual void animate(int p1, float p2) // _14
	{
		EnemyAnimatorBase::animate(p1, p2);
	}
	virtual void resetAnimSpeed(); // _18
	/**
	 * @reifiedAddress{8010AA6C}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual u32 getTypeID() { return 'blnd'; } // _1C

	void startBlend(int, int, SysShape::BlendFunction*, float, SysShape::MotionListener*);
	void endBlend();
	void animate(SysShape::BlendFunction*, float, float, float);

	SysShape::BlendAnimator m_animator; // _10

	static SysShape::BlendLinearFun sBlendLinearFun;
	static SysShape::BlendQuadraticFunc sBlendQuadraticFun;
};
} // namespace Game

#endif
