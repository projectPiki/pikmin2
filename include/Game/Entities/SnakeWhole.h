#ifndef _GAME_ENTITIES_SNAKEWHOLE_H
#define _GAME_ENTITIES_SNAKEWHOLE_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace SnakeWhole {
struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                     // _00
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _04
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _08
	virtual SysShape::Animator& getAnimator(int);                     // _0C

	SysShape::Animator m_animator; // _10
};
} // namespace SnakeWhole
} // namespace Game

#endif
