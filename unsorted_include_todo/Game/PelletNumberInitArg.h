#ifndef _GAME_PELLETNUMBERINITARG_H
#define _GAME_PELLETNUMBERINITARG_H

/*
    __vt__Q24Game19PelletNumberInitArg:
    .4byte 0
    .4byte 0
    .4byte getName__Q24Game13PelletInitArgFv
*/

namespace Game {
struct PelletInitArg {
	virtual void getName(); // _08 (weak)
};
} // namespace Game

namespace Game {
struct PelletNumberInitArg : public PelletInitArg {

	PelletNumberInitArg(int, int);
};
} // namespace Game

#endif
