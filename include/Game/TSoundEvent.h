#ifndef _GAME_TSOUNDEVENT_H
#define _GAME_TSOUNDEVENT_H

#include "types.h"

namespace Game {
enum TSE_State {
	TSE_Inactive = 0,
	TSE_Active,
	TSE_ApplyTransition,
	TSE_Apply,
	TSE_Finish,
};

struct TSoundEvent {
	TSoundEvent();

	u32 event();
	void finish();
	u32 update();

	u8 mState;     // _00
	s32 mDuration; // _04
	u32 mTimer;    // _08
};
} // namespace Game

#endif
