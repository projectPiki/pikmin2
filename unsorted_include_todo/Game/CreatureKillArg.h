#ifndef _GAME_CREATUREKILLARG_H
#define _GAME_CREATUREKILLARG_H

/*
    __vt__Q24Game15CreatureKillArg:
    .4byte 0
    .4byte 0
    .4byte getName__Q24Game15CreatureKillArgFv
*/

namespace Game {
struct CreatureKillArg {
	virtual void getName(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
