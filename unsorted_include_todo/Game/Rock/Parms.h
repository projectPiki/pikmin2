#ifndef _GAME_ROCK_PARMS_H
#define _GAME_ROCK_PARMS_H

/*
    __vt__Q34Game4Rock5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game4Rock5ParmsFR6Stream
*/

namespace Game {
namespace Rock {
	struct Parms {
		virtual void read(Stream&); // _00

		// _00 VTBL
	};
} // namespace Rock
} // namespace Game

#endif
