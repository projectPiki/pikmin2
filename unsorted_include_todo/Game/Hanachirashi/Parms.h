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
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Hanachirashi
} // namespace Game

#endif
