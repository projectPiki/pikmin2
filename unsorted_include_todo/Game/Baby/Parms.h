#ifndef _GAME_BABY_PARMS_H
#define _GAME_BABY_PARMS_H

/*
    __vt__Q34Game4Baby5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game4Baby5ParmsFR6Stream
*/

namespace Game {
namespace Baby {
struct Parms {
	virtual void read(Stream&); // _08 (weak)

	Parms();
};
} // namespace Baby
} // namespace Game

#endif
