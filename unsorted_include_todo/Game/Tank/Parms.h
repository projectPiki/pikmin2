#ifndef _GAME_TANK_PARMS_H
#define _GAME_TANK_PARMS_H

/*
    __vt__Q34Game4Tank5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game4Tank5ParmsFR6Stream
*/

namespace Game {
namespace Tank {
struct Parms {
	virtual void read(Stream&); // _08 (weak)

	Parms();
};
} // namespace Tank
} // namespace Game

#endif
