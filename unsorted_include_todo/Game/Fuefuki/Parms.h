#ifndef _GAME_FUEFUKI_PARMS_H
#define _GAME_FUEFUKI_PARMS_H

/*
    __vt__Q34Game7Fuefuki5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game7Fuefuki5ParmsFR6Stream
*/

namespace Game {
namespace Fuefuki {
	struct Parms {
		virtual void read(Stream&); // _00

		// _00 VTBL
	};
} // namespace Fuefuki
} // namespace Game

#endif
