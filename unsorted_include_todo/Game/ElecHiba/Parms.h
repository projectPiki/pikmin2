#ifndef _GAME_ELECHIBA_PARMS_H
#define _GAME_ELECHIBA_PARMS_H

/*
    __vt__Q34Game8ElecHiba5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game8ElecHiba5ParmsFR6Stream
*/

namespace Game {
namespace ElecHiba {
struct Parms {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace ElecHiba
} // namespace Game

#endif
