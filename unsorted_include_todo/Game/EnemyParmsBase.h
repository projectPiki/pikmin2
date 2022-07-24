#ifndef _GAME_ENEMYPARMSBASE_H
#define _GAME_ENEMYPARMSBASE_H

/*
    __vt__Q24Game14EnemyParmsBase:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game14EnemyParmsBaseFR6Stream
*/

namespace Game {
struct EnemyParmsBase {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace Game

#endif
