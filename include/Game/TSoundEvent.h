#ifndef _GAME_TSOUNDEVENT_H
#define _GAME_TSOUNDEVENT_H

#include "types.h"

namespace Game {
struct TSoundEvent {
    u8 _00;
    s32 _04;
    u32 _08;

    TSoundEvent();

    u32 event();
    void finish();
    u32 update();
};
} // namespace Game

#endif