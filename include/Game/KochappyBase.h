#ifndef _GAME_KOCHAPPYBASE_H
#define _GAME_KOCHAPPYBASE_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace KochappyBase {
	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();
		virtual void setAnimMgr(SysShape::AnimMgr*);
		virtual SysShape::Animator& getAnimator();
		virtual SysShape::Animator& getAnimator(int);

		SysShape::Animator m_animator; // _10
	};
} // namespace KochappyBase

} // namespace Game

#endif
