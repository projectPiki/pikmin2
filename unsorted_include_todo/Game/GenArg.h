#ifndef _GAME_GENARG_H
#define _GAME_GENARG_H

/*
    __vt__Q24Game6GenArg:
    .4byte 0
    .4byte 0
    .4byte getName__Q24Game6GenArgFv
*/

namespace Game {
struct GenArg {
	virtual void getName(); // _08 (weak)
};
} // namespace Game

#endif
