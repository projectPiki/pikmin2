#ifndef _GAME_ENTITIES_EGG_H
#define _GAME_ENTITIES_EGG_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyBase.h"

namespace Game {
namespace Egg {
	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();                    // _00
		virtual void setAnimMgr(SysShape::AnimMgr*);  // _04
		virtual SysShape::Animator& getAnimator();    // _08
		virtual SysShape::Animator& getAnimator(int); // _0C

		SysShape::Animator m_animator; // _10
	};

	struct FSM : public EnemyStateMachine {
		virtual void init(EnemyBase*); // _00
	};
} // namespace Egg
} // namespace Game

#endif
