#ifndef _GAME_GAMESYSTEM_H
#define _GAME_GAMESYSTEM_H

#include "types.h"

namespace Game {
struct GameSystem {
    u8 _00[80]; // _00
    u32 _50;    // _50

    s32 calcFrameDist(int);
};

extern GameSystem* gameSystem;

} // namespace Game

#endif