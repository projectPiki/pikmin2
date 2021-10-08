#ifndef _GAME_MEMORYCARD_RESOURCE_H
#define _GAME_MEMORYCARD_RESOURCE_H

#include "Game/MemoryCard/Mgr.h"
#include "JSystem/JKRDisposer.h"
#include "types.h"

namespace Game {
namespace MemoryCard {
    struct Resource : public JKRDisposer {
        virtual ~Resource();

        u8 _04[0x18]; // _04
        Mgr* m_mgr;   // _18
    };
} // namespace MemoryCard
} // namespace Game

#endif