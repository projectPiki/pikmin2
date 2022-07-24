#ifndef _GAME_KOCHAPPYBASE_PARMS_H
#define _GAME_KOCHAPPYBASE_PARMS_H

/*
    __vt__Q34Game12KochappyBase5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game12KochappyBase5ParmsFR6Stream
*/

namespace Game {
namespace KochappyBase {
struct Parms {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};
} // namespace KochappyBase
} // namespace Game

#endif
