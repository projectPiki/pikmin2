#ifndef _GAME_HANACHIRASHI_PARMS_H
#define _GAME_HANACHIRASHI_PARMS_H

/*
    __vt__Q34Game12Hanachirashi5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game12Hanachirashi5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace Hanachirashi {
struct Parms {
	virtual void read(Stream&); // _08 (inline)
	virtual void _0C() = 0;     // _0C

	Parms();
};
} // namespace Hanachirashi
} // namespace Game

#endif
