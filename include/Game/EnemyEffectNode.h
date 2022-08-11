#ifndef _GAME_ENEMYEFFECTNODE_H
#define _GAME_ENEMYEFFECTNODE_H

#include "types.h"
#include "CNode.h"
#include "efx/TEnemyHamon.h"

namespace Game {

struct EnemyEffectNodeBase : public CNode {

	virtual ~EnemyEffectNodeBase();         // _08 (weak)
	virtual void create(EnemyBase*)    = 0; // _10
	virtual void fade(EnemyBase*)      = 0; // _14
	virtual void forceKill(EnemyBase*) = 0; // _18

	// _00      = VTABLE
	// _04-_18  = CNode
};

struct EnemyEffectNodeHamon : public EnemyEffectNodeBase {
	EnemyEffectNodeHamon();

	virtual ~EnemyEffectNodeHamon();    // _08 (weak)
	virtual void create(EnemyBase*);    // _10
	virtual void fade(EnemyBase*);      // _14
	virtual void forceKill(EnemyBase*); // _18

	void update(EnemyBase*);

	// _00      = VTABLE
	// _04-_18  = EnemyEffectNodeBase

	efx::TEnemyHamon m_enemyHamon; // _18
	u8 _60[0x4];                   // _60 - unknown, but size = 64
};

} // namespace Game

#endif
