#ifndef _GAME_DAMAGUMO_PARMS_H
#define _GAME_DAMAGUMO_PARMS_H

/*
    __vt__Q34Game8Damagumo5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game8Damagumo5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace Damagumo {
struct Parms {
	virtual void read(Stream&); // _08
	virtual void _0C() = 0;     // _0C

	// _00 VTBL
};
} // namespace Damagumo
} // namespace Game

#endif
