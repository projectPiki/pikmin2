#ifndef _GAME_ENTITIES_SNAKECROW_H
#define _GAME_ENTITIES_SNAKECROW_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace SnakeCrow {
struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                     // _00
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _04
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _08
	virtual SysShape::Animator& getAnimator(int);                     // _0C

	SysShape::Animator m_animator; // _10
};
} // namespace SnakeCrow
} // namespace Game

#endif
