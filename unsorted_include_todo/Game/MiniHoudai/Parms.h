#ifndef _GAME_MINIHOUDAI_PARMS_H
#define _GAME_MINIHOUDAI_PARMS_H

/*
    __vt__Q34Game10MiniHoudai5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game10MiniHoudai5ParmsFR6Stream
*/

namespace Game {
namespace MiniHoudai {
struct Parms {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace MiniHoudai
} // namespace Game

#endif
