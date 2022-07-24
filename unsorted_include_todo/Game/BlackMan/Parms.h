#ifndef _GAME_BLACKMAN_PARMS_H
#define _GAME_BLACKMAN_PARMS_H

/*
    __vt__Q34Game8BlackMan5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game8BlackMan5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace BlackMan {
struct Parms {
	virtual void read(Stream&); // _08 (inline)
	virtual void _0C() = 0;     // _0C

	Parms();
};
} // namespace BlackMan
} // namespace Game

#endif
