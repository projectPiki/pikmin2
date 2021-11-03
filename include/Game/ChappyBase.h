#ifndef _GAME_CHAPPYBASE_H
#define _GAME_CHAPPYBASE_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace ChappyBase {
	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();

		virtual void setAnimMgr(SysShape::AnimMgr*);
		virtual Animator& getAnimator();
		virtual Animator& getAnimator(int);
	};
} // namespace ChappyBase
} // namespace Game

#endif
