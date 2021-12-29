#ifndef _GAME_ELECBUG_PARMS_H
#define _GAME_ELECBUG_PARMS_H

/*
    __vt__Q34Game7ElecBug5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game7ElecBug5ParmsFR6Stream
*/

namespace Game {
namespace ElecBug {
	struct Parms {
		virtual void read(Stream&); // _00

		// _00 VTBL
	};
} // namespace ElecBug
} // namespace Game

#endif
