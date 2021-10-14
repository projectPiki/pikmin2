#ifndef _GAME_GAMESYSTEM_H
#define _GAME_GAMESYSTEM_H

#include "types.h"

namespace Game {
struct GameSystem {
	s32 calcFrameDist(int);

	u8 _00[0x50]; // _00
	u32 _50;      // _50
};

extern GameSystem* gameSystem;

} // namespace Game

#endif
