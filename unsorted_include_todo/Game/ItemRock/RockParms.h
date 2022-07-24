#ifndef _GAME_ITEMROCK_ROCKPARMS_H
#define _GAME_ITEMROCK_ROCKPARMS_H

/*
    __vt__Q34Game8ItemRock9RockParms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game8ItemRock9RockParmsFR6Stream
*/

namespace Game {
namespace ItemRock {
struct RockParms {
	virtual void read(Stream&); // _08 (inline)

	RockParms();
};
} // namespace ItemRock
} // namespace Game

#endif
