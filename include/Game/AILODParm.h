#ifndef _GAME_AILODPARM_H
#define _GAME_AILODPARM_H

#include "types.h"

namespace Game {
struct AILODParm {
	AILODParm();

	f32 m_far;         // _00
	f32 m_close;       // _04
	bool m_isCylinder; // _08
};
} // namespace Game

#endif
