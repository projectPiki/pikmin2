#ifndef _GAME_AILOD_H
#define _GAME_AILOD_H

#include "types.h"

namespace Game {
struct AILOD {
	AILOD();

	s8 m_flags;   // _00
	s8 m_sndVpId; // _01, sound viewport ID
};
} // namespace Game

#endif
