#ifndef _GAME_MEMORYCARD_MGR_H
#define _GAME_MEMORYCARD_MGR_H

#include "types.h"

struct MemoryCardMgr {
    MemoryCardMgr();
};

namespace Game {
namespace MemoryCard {
    struct Mgr : public MemoryCardMgr {
        Mgr();
        virtual ~Mgr();

        enum MemoryCardStatus {
            MCS_Error = 2,
        };

        void destroyResource();
        u32 isErrorOccured();
        u32 getCardStatus();

        u8 _04[0xD4]; // _04
        u32 _D8;      // _D8
        u32 _DC;      // _DC
        u32 _E0;      // _E0
        u8 _E4;       // _E4
        u8 _E5;       // _E5
        u8 _E6;       // _E6
        u8 _E7;       // _E7
    };
} // namespace MemoryCard
} // namespace Game

#endif