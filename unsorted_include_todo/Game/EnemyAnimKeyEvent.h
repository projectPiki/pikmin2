#ifndef _GAME_ENEMYANIMKEYEVENT_H
#define _GAME_ENEMYANIMKEYEVENT_H

/*
    __vt__Q24Game17EnemyAnimKeyEvent:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game17EnemyAnimKeyEventFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct EnemyAnimKeyEvent : public CNode {
	virtual ~EnemyAnimKeyEvent(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
