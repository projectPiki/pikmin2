#ifndef _GAME_ENTITIES_BABY_H
#define _GAME_ENTITIES_BABY_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyBase.h"
namespace Game {
namespace Baby {
struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator();                    // _00
	virtual void setAnimMgr(SysShape::AnimMgr*);  // _04
	virtual SysShape::Animator& getAnimator();    // _08
	virtual SysShape::Animator& getAnimator(int); // _0C

	SysShape::Animator m_animator; // _10
};
struct StateAttack {
	u32* _00;
	u32* _04;
	u32* _08;

	void cleanup(EnemyBase* baby);
};

} // namespace Baby
} // namespace Game

#endif
