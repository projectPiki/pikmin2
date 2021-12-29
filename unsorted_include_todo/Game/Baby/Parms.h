#ifndef _GAME_BABY_PARMS_H
#define _GAME_BABY_PARMS_H

/*
    __vt__Q34Game4Baby5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game4Baby5ParmsFR6Stream
*/

namespace Game {
namespace Baby {
	struct Parms {
		virtual void read(Stream&); // _00

		// _00 VTBL
	};
} // namespace Baby
} // namespace Game

#endif
