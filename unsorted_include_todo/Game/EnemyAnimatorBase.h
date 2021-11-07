#ifndef _GAME_ENEMYANIMATORBASE_H
#define _GAME_ENEMYANIMATORBASE_H

namespace Game {
struct EnemyAnimatorBase {
	virtual ~EnemyAnimatorBase();     // _00
	virtual void _04() = 0;           // _04
	virtual void _08() = 0;           // _08
	virtual void _0C() = 0;           // _0C
	virtual void animate(float);      // _10
	virtual void animate(int, float); // _14
	virtual void resetAnimSpeed();    // _18
	virtual void getTypeID();         // _1C

	// _00 VTBL
};
} // namespace Game

#endif
