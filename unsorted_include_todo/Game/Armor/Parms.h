#ifndef _GAME_ARMOR_PARMS_H
#define _GAME_ARMOR_PARMS_H

/*
    __vt__Q34Game5Armor5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game5Armor5ParmsFR6Stream
*/

namespace Game {
namespace Armor {
struct Parms {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};
} // namespace Armor
} // namespace Game

#endif
