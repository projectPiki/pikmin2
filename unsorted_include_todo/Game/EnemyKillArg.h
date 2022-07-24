#ifndef _GAME_ENEMYKILLARG_H
#define _GAME_ENEMYKILLARG_H

/*
    __vt__Q24Game12EnemyKillArg:
    .4byte 0
    .4byte 0
    .4byte getName__Q24Game12EnemyKillArgFv
*/

namespace Game {
struct EnemyKillArg {
	virtual void getName(); // _08 (inline)
};
} // namespace Game

#endif
