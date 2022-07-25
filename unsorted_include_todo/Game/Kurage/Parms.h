#ifndef _GAME_KURAGE_PARMS_H
#define _GAME_KURAGE_PARMS_H

/*
    __vt__Q34Game6Kurage5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game6Kurage5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace Kurage {
struct Parms {
	virtual void read(Stream&); // _08 (weak)
	virtual void _0C() = 0;     // _0C

	Parms();
};
} // namespace Kurage
} // namespace Game

#endif
