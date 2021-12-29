#ifndef _GAME_ENEMYEFFECTNODEBASE_H
#define _GAME_ENEMYEFFECTNODEBASE_H

/*
    __vt__Q24Game19EnemyEffectNodeBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game19EnemyEffectNodeBaseFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct EnemyEffectNodeBase : public CNode {
	virtual ~EnemyEffectNodeBase(); // _00
	virtual void getChildCount();   // _04
	virtual void _08() = 0;         // _08
	virtual void _0C() = 0;         // _0C
	virtual void _10() = 0;         // _10

	// _00 VTBL
};
} // namespace Game

#endif
