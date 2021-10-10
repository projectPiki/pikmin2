#ifndef _GAME_TSOUNDEVENT_H
#define _GAME_TSOUNDEVENT_H

#include "types.h"

namespace Game {
struct TSoundEvent {
	TSoundEvent();

	u32 event();
	void finish();
	u32 update();

	u8 _00;
	s32 _04;
	u32 _08;
};
} // namespace Game

#endif