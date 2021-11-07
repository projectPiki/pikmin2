#ifndef _GAME_ENEMYEFFECTNODEHAMON_H
#define _GAME_ENEMYEFFECTNODEHAMON_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct EnemyEffectNodeHamon : public CNode {
	virtual ~EnemyEffectNodeHamon();    // _00
	virtual void getChildCount();       // _04
	virtual void create(EnemyBase*);    // _08
	virtual void fade(EnemyBase*);      // _0C
	virtual void forceKill(EnemyBase*); // _10

	// _00 VTBL
};
} // namespace Game

#endif
