#ifndef _GAME_PIKICONTAINER_H
#define _GAME_PIKICONTAINER_H

namespace Game {
struct PikiContainer {
	virtual void read(Stream&);  // _00
	virtual void write(Stream&); // _04

	// _00 VTBL
};
} // namespace Game

#endif
