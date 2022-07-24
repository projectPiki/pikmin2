#ifndef _GAME_UJIA_PARMS_H
#define _GAME_UJIA_PARMS_H

/*
    __vt__Q34Game4Ujia5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game4Ujia5ParmsFR6Stream
*/

namespace Game {
namespace Ujia {
struct Parms {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};
} // namespace Ujia
} // namespace Game

#endif
