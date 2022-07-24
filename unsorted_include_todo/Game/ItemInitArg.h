#ifndef _GAME_ITEMINITARG_H
#define _GAME_ITEMINITARG_H

/*
    __vt__Q24Game11ItemInitArg:
    .4byte 0
    .4byte 0
    .4byte getName__Q24Game11ItemInitArgFv
*/

namespace Game {
struct ItemInitArg {
	virtual void getName(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
