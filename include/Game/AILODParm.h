#ifndef _GAME_AILODPARM_H
#define _GAME_AILODPARM_H

#include "types.h"

namespace Game {
struct AILODParm {
	AILODParm();

	float m_far;
	float m_close;
	bool m_isCylinder;
};
} // namespace Game

#endif
