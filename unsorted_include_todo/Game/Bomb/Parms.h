#ifndef _GAME_BOMB_PARMS_H
#define _GAME_BOMB_PARMS_H

/*
    __vt__Q34Game4Bomb5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game4Bomb5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace Bomb {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Bomb
} // namespace Game

#endif
