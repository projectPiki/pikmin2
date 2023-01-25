#ifndef _GAME_PIKICONTAINER_H
#define _GAME_PIKICONTAINER_H

#include "Game/Piki.h"
#include "types.h"
#include "stream.h"

namespace Game {
struct Piki;

struct PikiContainer {
	PikiContainer();

	virtual void read(Stream&);  // _00
	virtual void write(Stream&); // _04

	void operator=(PikiContainer&);
	int& operator()(Piki*);
	void clear();
	void dump(char*);
	int& getCount(int color, int headType);
	int getColorSum(int);
	int getHappaSum(int);
	int getTotalSum();

	// VTBL _00
	int* mContainer; // _04, 2D array simplified into 1D access
};
} // namespace Game

#endif
