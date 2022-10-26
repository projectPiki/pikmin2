#ifndef _GAME_AILOD_H
#define _GAME_AILOD_H

#include "types.h"

#define AILOD_FLAG_NONE        (0x0)
#define AILOD_FLAG_IS_MID      (0x01)
#define AILOD_FLAG_IS_FAR      (0x02)
#define AILOD_FLAG_NEED_SHADOW (0x04)
#define AILOD_FLAG_UNKNOWN4    (0x08)
#define AILOD_FLAG_VISIBLE_VP0 (0x10) // Is it visible on viewport 0? etc.
#define AILOD_FLAG_VISIBLE_VP1 (0x20)
#define AILOD_FLAG_VISIBLE_VP2 (0x40)
#define AILOD_FLAG_VISIBLE_VP3 (0x80)

namespace Game {
struct AILODParm {
	AILODParm();

	f32 m_far;         // _00
	f32 m_close;       // _04
	bool m_isCylinder; // _08
};

struct AILOD {
	AILOD();

	u8 m_flags;   // _00
	s8 m_sndVpId; // _01, sound viewport ID

	static bool drawInfo;
};
} // namespace Game

#endif
