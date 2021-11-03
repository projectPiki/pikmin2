#ifndef _GAME_KOCHAPPYBASE_H
#define _GAME_KOCHAPPYBASE_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace KochappyBase {

	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();

		virtual void setAnimMgr(SysShape::AnimMgr*);
		virtual Animator& getAnimator();
		virtual Animator& getAnimator(int);
	};
} // namespace KochappyBase

} // namespace Game

#endif
