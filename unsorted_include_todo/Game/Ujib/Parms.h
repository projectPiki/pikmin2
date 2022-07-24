#ifndef _GAME_UJIB_PARMS_H
#define _GAME_UJIB_PARMS_H

/*
    __vt__Q34Game4Ujib5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game4Ujib5ParmsFR6Stream
*/

namespace Game {
namespace Ujib {
struct Parms {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};
} // namespace Ujib
} // namespace Game

#endif
