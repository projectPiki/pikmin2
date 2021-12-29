#ifndef _GAME_EGG_PARMS_H
#define _GAME_EGG_PARMS_H

/*
    __vt__Q34Game3Egg5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game3Egg5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace Egg {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Egg
} // namespace Game

#endif
