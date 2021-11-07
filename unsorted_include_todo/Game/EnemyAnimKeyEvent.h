#ifndef _GAME_ENEMYANIMKEYEVENT_H
#define _GAME_ENEMYANIMKEYEVENT_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct EnemyAnimKeyEvent : public CNode {
	virtual ~EnemyAnimKeyEvent(); // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
