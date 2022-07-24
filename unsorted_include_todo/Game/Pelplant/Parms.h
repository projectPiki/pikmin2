#ifndef _GAME_PELPLANT_PARMS_H
#define _GAME_PELPLANT_PARMS_H

/*
    __vt__Q34Game8Pelplant5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game8Pelplant5ParmsFR6Stream
*/

namespace Game {
namespace Pelplant {
struct Parms {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};
} // namespace Pelplant
} // namespace Game

#endif
