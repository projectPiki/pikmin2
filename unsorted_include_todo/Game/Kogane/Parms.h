#ifndef _GAME_KOGANE_PARMS_H
#define _GAME_KOGANE_PARMS_H

/*
    __vt__Q34Game6Kogane5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game6Kogane5ParmsFR6Stream
*/

namespace Game {
namespace Kogane {
	struct Parms {
		virtual void read(Stream&); // _00

		// _00 VTBL
	};
} // namespace Kogane
} // namespace Game

#endif
