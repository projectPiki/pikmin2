#ifndef _GAME_ENTITIES_TANK_H
#define _GAME_ENTITIES_TANK_H

#include "Game/EnemyAnimatorBase.h"

/**
 * --Header for (Ground) Blowhogs--
 * Tank		= Base Class for Blowhogs
 * Ftank	= Fiery Blowhog
 * Wtank	= Watery Blowhog
 */

namespace Game {
namespace Tank {
struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr*);                     // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int);                    // _14

	SysShape::Animator m_animator; // _10
};
} // namespace Tank
} // namespace Game

#endif
