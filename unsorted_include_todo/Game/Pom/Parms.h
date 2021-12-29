#ifndef _GAME_POM_PARMS_H
#define _GAME_POM_PARMS_H

/*
    __vt__Q34Game3Pom5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game3Pom5ParmsFR6Stream
*/

namespace Game {
namespace Pom {
	struct Parms {
		virtual void read(Stream&); // _00

		// _00 VTBL
	};
} // namespace Pom
} // namespace Game

#endif
