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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct EnemyAnimKeyEvent : public CNode {
	virtual ~EnemyAnimKeyEvent(); // _08 (inline)
};
} // namespace Game

#endif
