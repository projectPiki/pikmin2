#ifndef _GAME_TYRE_PARMS_H
#define _GAME_TYRE_PARMS_H

/*
    __vt__Q34Game4Tyre5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game4Tyre5ParmsFR6Stream
*/

namespace Game {
namespace Tyre {
struct Parms {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace Tyre
} // namespace Game

#endif
