#ifndef _GAME_ENTITIES_KURAGE_H
#define _GAME_ENTITIES_KURAGE_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace Kurage {
	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();                    // _00
		virtual void setAnimMgr(SysShape::AnimMgr*);  // _04
		virtual SysShape::Animator& getAnimator();    // _08
		virtual SysShape::Animator& getAnimator(int); // _0C

		SysShape::Animator m_animator; // _10
	};
} // namespace Kurage
} // namespace Game

#endif
