#ifndef _GAME_BIGTREASURE_PARMS_H
#define _GAME_BIGTREASURE_PARMS_H

/*
    __vt__Q34Game11BigTreasure5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game11BigTreasure5ParmsFR6Stream
*/

namespace Game {
namespace BigTreasure {
struct Parms {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace BigTreasure
} // namespace Game

#endif
