#ifndef _GAME_EGG_PARMS_H
#define _GAME_EGG_PARMS_H

/*
    __vt__Q34Game3Egg5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game3Egg5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace Egg {
struct Parms {
	virtual void read(Stream&); // _08 (weak)
	virtual void _0C() = 0;     // _0C

	Parms();
};
} // namespace Egg
} // namespace Game

#endif
