#ifndef _GAME_TADPOLE_PARMS_H
#define _GAME_TADPOLE_PARMS_H

/*
    __vt__Q34Game7Tadpole5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game7Tadpole5ParmsFR6Stream
*/

namespace Game {
namespace Tadpole {
struct Parms {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};
} // namespace Tadpole
} // namespace Game

#endif
