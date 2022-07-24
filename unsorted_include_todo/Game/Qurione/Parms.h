#ifndef _GAME_QURIONE_PARMS_H
#define _GAME_QURIONE_PARMS_H

/*
    __vt__Q34Game7Qurione5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game7Qurione5ParmsFR6Stream
*/

namespace Game {
namespace Qurione {
struct Parms {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace Qurione
} // namespace Game

#endif
