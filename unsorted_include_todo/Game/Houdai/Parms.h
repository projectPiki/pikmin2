#ifndef _GAME_HOUDAI_PARMS_H
#define _GAME_HOUDAI_PARMS_H

/*
    __vt__Q34Game6Houdai5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game6Houdai5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace Houdai {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Houdai
} // namespace Game

#endif
