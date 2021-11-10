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
	virtual void getTypeID();                         // _20

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
} // namespace Game

#endif
