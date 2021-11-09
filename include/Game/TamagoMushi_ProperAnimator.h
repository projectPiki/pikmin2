#ifndef _GAME_TAMAGOMUSHI_PROPERANIMATOR_H
#define _GAME_TAMAGOMUSHI_PROPERANIMATOR_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace TamagoMushi {
	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();                   // _00
		virtual void setAnimMgr(SysShape::AnimMgr*); // _04
		virtual Animator& getAnimator();             // _08
		virtual Animator& getAnimator(int);          // _0C
	};
} // namespace TamagoMushi
} // namespace Game

#endif
