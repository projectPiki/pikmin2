#ifndef _GAME_AILOD_H
#define _GAME_AILOD_H

#include "types.h"

namespace Game {
struct AILOD {
	enum Flags {
		FLAG_UNKNOWN1    = 0x01,
		FLAG_UNKNOWN2    = 0x02,
		FLAG_NEED_SHADOW = 0x04,
		FLAG_UNKNOWN4    = 0x08
	};
	AILOD();

	// union {
	// 	// Use with Flags.
	// 	Flags byteView;
	// 	// For hacks only.
	// 	// Vanilla didn't use a bitfield.
	// 	u8 padding : 4,
	// 	   m_unknown4 : 1,
	// 	   m_needShadow : 1,
	// 	   m_unknown2 : 1,
	// 	   m_unknown1 : 1;
	// } m_flags;    // _00
	Flags m_flags; // _00
	s8 m_sndVpId;  // _01, sound viewport ID
};
} // namespace Game

#endif
