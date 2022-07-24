#ifndef _GAME_PANMODOKIBASE_PARMS_H
#define _GAME_PANMODOKIBASE_PARMS_H

/*
    __vt__Q34Game13PanModokiBase5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game13PanModokiBase5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace PanModokiBase {
struct Parms {
	virtual void read(Stream&); // _08 (inline)
	virtual void _0C() = 0;     // _0C

	Parms();
};
} // namespace PanModokiBase
} // namespace Game

#endif
