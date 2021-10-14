#ifndef _GAME_TSOUNDEVENT_H
#define _GAME_TSOUNDEVENT_H

#include "types.h"

namespace Game {
struct TSoundEvent {
	enum State { Finish = 0x04 };

	TSoundEvent();

	u32 event();
	void finish();
	u32 update();

	u8 m_state; // _00
	s32 _04;
	u32 _08;
};
} // namespace Game

#endif
