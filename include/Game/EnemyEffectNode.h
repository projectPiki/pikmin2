#ifndef _GAME_ENEMYEFFECTNODE_H
#define _GAME_ENEMYEFFECTNODE_H

#include "types.h"
#include "CNode.h"
#include "efx/TEnemyHamon.h"

namespace Game {
struct EnemyBase;

struct EnemyEffectNodeBase : public CNode {
	inline EnemyEffectNodeBase()
	    : CNode("波紋") // ripple
	{
	}

	virtual ~EnemyEffectNodeBase() { }      // _08 (weak)
	virtual void create(EnemyBase*)    = 0; // _10
	virtual void fade(EnemyBase*)      = 0; // _14
	virtual void forceKill(EnemyBase*) = 0; // _18

	// _00      = VTABLE
	// _04-_18  = CNode
};

struct EnemyEffectNodeHamon : public EnemyEffectNodeBase {
	EnemyEffectNodeHamon();

	virtual ~EnemyEffectNodeHamon() { } // _08 (weak)
	virtual void create(EnemyBase*);    // _10
	virtual void fade(EnemyBase*);      // _14
	virtual void forceKill(EnemyBase*); // _18

	void update(EnemyBase*);

	// _00      = VTABLE
	// _04-_18  = EnemyEffectNodeBase
	efx::TEnemyHamon mEnemyHamon; // _18
};

} // namespace Game

#endif
