#ifndef _GAME_ENTITIES_SARAI_H
#define _GAME_ENTITIES_SARAI_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace Sarai {
struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                     // _00
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _04
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _08
	virtual SysShape::Animator& getAnimator(int);                     // _0C

	SysShape::Animator m_animator; // _10
};
} // namespace Sarai
} // namespace Game

#endif
