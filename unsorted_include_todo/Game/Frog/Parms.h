#ifndef _GAME_FROG_PARMS_H
#define _GAME_FROG_PARMS_H

/*
    __vt__Q34Game4Frog5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game4Frog5ParmsFR6Stream
*/

namespace Game {
namespace Frog {
	struct Parms {
		virtual void read(Stream&); // _00

		// _00 VTBL
	};
} // namespace Frog
} // namespace Game

#endif
