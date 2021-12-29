#ifndef _GAME_PIKICONTAINER_H
#define _GAME_PIKICONTAINER_H

/*
    __vt__Q24Game13PikiContainer:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game13PikiContainerFR6Stream
    .4byte write__Q24Game13PikiContainerFR6Stream
*/

namespace Game {
struct PikiContainer {
	virtual void read(Stream&);  // _00
	virtual void write(Stream&); // _04

	// _00 VTBL
};
} // namespace Game

#endif
