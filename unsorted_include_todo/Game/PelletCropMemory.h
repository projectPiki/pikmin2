#ifndef _GAME_PELLETCROPMEMORY_H
#define _GAME_PELLETCROPMEMORY_H

namespace Game {
struct PelletCropMemory {
	virtual void read(Stream&);  // _00
	virtual void write(Stream&); // _04

	// _00 VTBL
};
} // namespace Game

#endif
