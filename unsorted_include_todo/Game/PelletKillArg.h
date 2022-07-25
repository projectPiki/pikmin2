#ifndef _GAME_PELLETKILLARG_H
#define _GAME_PELLETKILLARG_H

/*
    __vt__Q24Game13PelletKillArg:
    .4byte 0
    .4byte 0
    .4byte getName__Q24Game15CreatureKillArgFv
*/

namespace Game {
struct CreatureKillArg {
	virtual void getName(); // _08 (weak)
};
} // namespace Game

namespace Game {
struct PelletKillArg : public CreatureKillArg {
};
} // namespace Game

#endif
