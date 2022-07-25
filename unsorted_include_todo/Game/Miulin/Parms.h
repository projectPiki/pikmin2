#ifndef _GAME_MIULIN_PARMS_H
#define _GAME_MIULIN_PARMS_H

/*
    __vt__Q34Game6Miulin5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game6Miulin5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace Miulin {
struct Parms {
	virtual void read(Stream&); // _08 (weak)
	virtual void _0C() = 0;     // _0C

	Parms();
};
} // namespace Miulin
} // namespace Game

#endif
