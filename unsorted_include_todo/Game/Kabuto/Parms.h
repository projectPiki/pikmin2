#ifndef _GAME_KABUTO_PARMS_H
#define _GAME_KABUTO_PARMS_H

/*
    __vt__Q34Game6Kabuto5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game6Kabuto5ParmsFR6Stream
*/

namespace Game {
namespace Kabuto {
struct Parms {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};
} // namespace Kabuto
} // namespace Game

#endif
