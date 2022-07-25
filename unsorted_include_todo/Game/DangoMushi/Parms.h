#ifndef _GAME_DANGOMUSHI_PARMS_H
#define _GAME_DANGOMUSHI_PARMS_H

/*
    __vt__Q34Game10DangoMushi5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game10DangoMushi5ParmsFR6Stream
    .4byte 0
*/

namespace Game {
namespace DangoMushi {
struct Parms {
	virtual void read(Stream&); // _08 (weak)
	virtual void _0C() = 0;     // _0C

	Parms();
};
} // namespace DangoMushi
} // namespace Game

#endif
