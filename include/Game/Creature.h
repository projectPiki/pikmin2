#ifndef _GAME_CREATURE_H
#define _GAME_CREATURE_H

#include "types.h"

namespace Game {
struct Creature {
    u8 _00[376]; // _00

    bool isStickTo();
    void endStick();

    bool isTeki();
    bool isNavi();
};
} // namespace Game

#endif