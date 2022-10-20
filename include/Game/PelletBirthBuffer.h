#ifndef _GAME_PELLETBIRTHBUFFER_H
#define _GAME_PELLETBIRTHBUFFER_H

#include "Game/pelletMgr.h"

#define MAX_PELLET_COUNT (128)

namespace Game {
struct PelletBirthBuffer {
	static void birthAll();
	static void clear();
	static void entry(PelletInitArg&);

	static int sNum;
	static PelletInitArg sArgs[];
};
} // namespace Game

#endif
