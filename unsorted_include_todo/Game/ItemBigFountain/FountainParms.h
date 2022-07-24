#ifndef _GAME_ITEMBIGFOUNTAIN_FOUNTAINPARMS_H
#define _GAME_ITEMBIGFOUNTAIN_FOUNTAINPARMS_H

/*
    __vt__Q34Game15ItemBigFountain13FountainParms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game15ItemBigFountain13FountainParmsFR6Stream
*/

namespace Game {
namespace ItemBigFountain {
struct FountainParms {
	virtual void read(Stream&); // _08 (inline)

	FountainParms();
};
} // namespace ItemBigFountain
} // namespace Game

#endif
