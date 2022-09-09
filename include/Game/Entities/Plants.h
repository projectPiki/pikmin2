#ifndef _GAME_ENTITIES_PLANTS_H
#define _GAME_ENTITIES_PLANTS_H

#include "Game/EnemyAnimatorBase.h"

/**
 * --Header for Plant Base Class--
 * Derived classes:
 * Chiyogami		= Chiyogami Paper
 * Clover			= Clover
 * DiodeGreen		= Glowstem (Green)
 * DiodeRed			= Glowstem (Red)
 * HikariKinoko		= Common Glowcap
 * KareOoinu_l		= Figwort (Brown, Large)
 * KareOoinu_s		= Figwort (Brown, Small)
 * Margaret			= Margaret
 * Nekojarashi		= Foxtail
 * Ooinu_l			= Figwort (Red, Large)
 * Ooinu_s			= Figwort (Red, Small)
 * Tanpopo			= Dandelion
 * Tukushi			= Horsetail
 * Wakame_l			= Shoot (Large)
 * Wakame_s			= Shoot (Small)
 * Watage			= Seeding Dandelion
 * Zenmai			= Fiddlehead
 */

namespace Game {
namespace Plants {
struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr*);                     // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int);                    // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};
} // namespace Plants
} // namespace Game

#endif
