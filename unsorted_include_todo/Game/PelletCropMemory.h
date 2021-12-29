#ifndef _GAME_PELLETCROPMEMORY_H
#define _GAME_PELLETCROPMEMORY_H

/*
    __vt__Q24Game16PelletCropMemory:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game16PelletCropMemoryFR6Stream
    .4byte write__Q24Game16PelletCropMemoryFR6Stream
*/

namespace Game {
struct PelletCropMemory {
	virtual void read(Stream&);  // _00
	virtual void write(Stream&); // _04

	// _00 VTBL
};
} // namespace Game

#endif
