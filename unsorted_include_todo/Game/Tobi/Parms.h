#ifndef _GAME_TOBI_PARMS_H
#define _GAME_TOBI_PARMS_H

/*
    __vt__Q34Game4Tobi5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game4Tobi5ParmsFR6Stream
*/

namespace Game {
namespace Tobi {
struct Parms {
	virtual void read(Stream&); // _08 (weak)

	Parms();
};
} // namespace Tobi
} // namespace Game

#endif
