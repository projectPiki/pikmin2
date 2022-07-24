#ifndef _GAME_PELLETINITARG_H
#define _GAME_PELLETINITARG_H

/*
    __vt__Q24Game13PelletInitArg:
    .4byte 0
    .4byte 0
    .4byte getName__Q24Game13PelletInitArgFv
*/

namespace Game {
struct PelletInitArg {
	virtual void getName(); // _08 (inline)

	PelletInitArg();
};
} // namespace Game

#endif
