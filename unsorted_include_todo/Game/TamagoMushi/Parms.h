#ifndef _GAME_TAMAGOMUSHI_PARMS_H
#define _GAME_TAMAGOMUSHI_PARMS_H

/*
    __vt__Q34Game11TamagoMushi5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game11TamagoMushi5ParmsFR6Stream
*/

namespace Game {
namespace TamagoMushi {
struct Parms {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};
} // namespace TamagoMushi
} // namespace Game

#endif
