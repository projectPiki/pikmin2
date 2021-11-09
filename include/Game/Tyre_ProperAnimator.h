#ifndef _GAME_TYRE_PROPERANIMATOR_H
#define _GAME_TYRE_PROPERANIMATOR_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace Tyre {
	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();                   // _00
		virtual void setAnimMgr(SysShape::AnimMgr*); // _04
		virtual Animator& getAnimator();             // _08
		virtual Animator& getAnimator(int);          // _0C
	};
} // namespace Tyre
} // namespace Game

#endif
