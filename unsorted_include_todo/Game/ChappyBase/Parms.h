#ifndef _GAME_CHAPPYBASE_PARMS_H
#define _GAME_CHAPPYBASE_PARMS_H

/*
    __vt__Q34Game10ChappyBase5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game10ChappyBase5ParmsFR6Stream
*/

namespace Game {
namespace ChappyBase {
struct Parms {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};
} // namespace ChappyBase
} // namespace Game

#endif
