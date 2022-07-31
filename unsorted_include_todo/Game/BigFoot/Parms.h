#ifndef _GAME_BIGFOOT_PARMS_H
#define _GAME_BIGFOOT_PARMS_H

/*
    __vt__Q34Game7BigFoot5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game7BigFoot5ParmsFR6Stream
*/

namespace Game {
namespace BigFoot {
struct Parms {
	virtual void read(Stream&); // _08 (weak)

	Parms();
};
} // namespace BigFoot
} // namespace Game

#endif
