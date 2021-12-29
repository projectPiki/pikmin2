#ifndef _GAME_SARAI_PARMS_H
#define _GAME_SARAI_PARMS_H

/*
    __vt__Q34Game5Sarai5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game5Sarai5ParmsFR6Stream
*/

namespace Game {
namespace Sarai {
	struct Parms {
		virtual void read(Stream&); // _00

		// _00 VTBL
	};
} // namespace Sarai
} // namespace Game

#endif
