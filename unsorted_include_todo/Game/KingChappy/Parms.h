#ifndef _GAME_KINGCHAPPY_PARMS_H
#define _GAME_KINGCHAPPY_PARMS_H

/*
    __vt__Q34Game10KingChappy5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game10KingChappy5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace KingChappy {
struct Parms {
	virtual void read(Stream&); // _08 (inline)
	virtual void _0C() = 0;     // _0C

	Parms();
};
} // namespace KingChappy
} // namespace Game

#endif
