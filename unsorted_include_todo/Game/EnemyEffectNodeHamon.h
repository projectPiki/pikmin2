#ifndef _GAME_ENEMYEFFECTNODEHAMON_H
#define _GAME_ENEMYEFFECTNODEHAMON_H

/*
    __vt__Q24Game20EnemyEffectNodeHamon:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game20EnemyEffectNodeHamonFv
    .4byte getChildCount__5CNodeFv
    .4byte create__Q24Game20EnemyEffectNodeHamonFPQ24Game9EnemyBase
    .4byte fade__Q24Game20EnemyEffectNodeHamonFPQ24Game9EnemyBase
    .4byte forceKill__Q24Game20EnemyEffectNodeHamonFPQ24Game9EnemyBase
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct EnemyEffectNodeHamon : public CNode {
	virtual ~EnemyEffectNodeHamon();    // _08
	virtual void create(EnemyBase*);    // _10
	virtual void fade(EnemyBase*);      // _14
	virtual void forceKill(EnemyBase*); // _18

	// _00 VTBL
};
} // namespace Game

#endif
