#ifndef _GAME_MEMORYCARD_MGR_H
#define _GAME_MEMORYCARD_MGR_H

#include "types.h"

namespace Game {
namespace MemoryCard {
    struct Mgr {
        ~Mgr() { destroyResource(); }

        void destroyResource();
    };
} // namespace MemoryCard
} // namespace Game

#endif