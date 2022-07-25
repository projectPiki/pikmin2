#ifndef _GAME_MAR_PARMS_H
#define _GAME_MAR_PARMS_H

/*
    __vt__Q34Game3Mar5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game3Mar5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace Mar {
struct Parms {
	virtual void read(Stream&); // _08 (weak)
	virtual void _0C() = 0;     // _0C

	Parms();
};
} // namespace Mar
} // namespace Game

#endif
