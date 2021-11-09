#ifndef _GAME_JIGUMO_PROPERANIMATOR_H
#define _GAME_JIGUMO_PROPERANIMATOR_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace Jigumo {
	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();                   // _00
		virtual void setAnimMgr(SysShape::AnimMgr*); // _04
		virtual Animator& getAnimator();             // _08
		virtual Animator& getAnimator(int);          // _0C
	};
} // namespace Jigumo
} // namespace Game

#endif
