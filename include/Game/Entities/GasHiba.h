#ifndef _GAME_ENTITIES_GASHIBA_H
#define _GAME_ENTITIES_GASHIBA_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace GasHiba {
	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();                    // _00
		virtual void setAnimMgr(SysShape::AnimMgr*);  // _04
		virtual SysShape::Animator& getAnimator();    // _08
		virtual SysShape::Animator& getAnimator(int); // _0C

		SysShape::Animator m_animator; // _10
	};
} // namespace GasHiba
} // namespace Game

#endif
