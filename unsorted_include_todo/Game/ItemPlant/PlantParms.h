#ifndef _GAME_ITEMPLANT_PLANTPARMS_H
#define _GAME_ITEMPLANT_PLANTPARMS_H

/*
    __vt__Q34Game9ItemPlant10PlantParms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game9ItemPlant10PlantParmsFR6Stream
*/

namespace Game {
namespace ItemPlant {
struct PlantParms {
	virtual void read(Stream&); // _08 (inline)

	PlantParms();
};
} // namespace ItemPlant
} // namespace Game

#endif
