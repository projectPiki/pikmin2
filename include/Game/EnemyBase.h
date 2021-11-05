#ifndef _GAME_ENEMYBASE_H
#define _GAME_ENEMYBASE_H

#include "types.h"
#include "Game/Creature.h"
#include "Game/AILODParm.h"

namespace Game {
struct EnemyBase_VTBL {
	u8 gap0[476];

	void (*_1DC)(struct EnemyBase*);
	void (*_1E0)(struct EnemyBase*);
};

struct EnemyBase : public Creature {
	EnemyBase_VTBL* m_vtbl;    // _00
	u8 _04[0x1DC];             // _04
	u32 m_flags;               // _1E0
	u8 _1E4[0x80];             // _1E4
	Game::AILODParm m_lodParm; // _264
	u8 _268[0x58 - 8];         // _268

	bool isCullingOff();
	void createEffects();
	void fadeEffects();
};
} // namespace Game

#endif
