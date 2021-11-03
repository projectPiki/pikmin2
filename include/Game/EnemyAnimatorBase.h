#ifndef _GAME_ENEMYANIMATORBASE_H
#define _GAME_ENEMYANIMATORBASE_H

#include "types.h"

namespace SysShape {
struct AnimMgr;
struct AnimInfo;
struct MotionListener;
struct KeyEvent;
} // namespace SysShape

namespace Game {
struct Animator {
	u32 _00;                              // _00
	SysShape::MotionListener* m_listener; // _04
	f32 m_timer;                          // _08
	SysShape::AnimInfo* m_animInfo;       // _0C
	SysShape::AnimMgr* m_animMgr;         // _10
	SysShape::KeyEvent* m_curAnimKey;     // _14
	u8 m_flags;                           // _18
};

struct EnemyAnimatorBase {
	EnemyAnimatorBase();
	virtual ~EnemyAnimatorBase() { }

	virtual void setAnimMgr(SysShape::AnimMgr*) = 0;
	virtual Animator& getAnimator()             = 0;
	virtual Animator& getAnimator(int)          = 0;
	virtual void animate(float);
	virtual void animate(int, float);
	virtual void resetAnimSpeed();
	virtual void getTypeID();

	// _00, VTBL
	f32 m_animSpeed;     // _04
	f32 _08;             // _08
	u8 m_flags;          // _0C
	u8 _0D;              // _0D
	u8 _0E;              // _0E
	u8 _0F;              // _0F
	Animator m_animator; // _10
};
} // namespace Game

#endif
