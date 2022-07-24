#ifndef _GAME_SNAKECROW_PARMS_H
#define _GAME_SNAKECROW_PARMS_H

/*
    __vt__Q34Game9SnakeCrow5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game9SnakeCrow5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace SnakeCrow {
struct Parms {
	virtual void read(Stream&); // _08 (inline)
	virtual void _0C() = 0;     // _0C

	Parms();
};
} // namespace SnakeCrow
} // namespace Game

#endif
