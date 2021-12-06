#ifndef _GAME_AILOD_H
#define _GAME_AILOD_H

#include "types.h"

namespace Game {
struct AILOD {
	enum Flags {
		FLAG_NONE          = 0x0,
		IsMid              = 0x01,
		IsFar              = 0x02,
		FLAG_NEED_SHADOW   = 0x04,
		FLAG_UNKNOWN4      = 0x08,
		VisibleOnViewport0 = 0x10,
		VisibleOnViewport1 = 0x20,
		VisibleOnViewport2 = 0x40,
		VisibleOnViewport3 = 0x80,
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
	u8 m_flags;   // _00
	s8 m_sndVpId; // _01, sound viewport ID

	static bool drawInfo;
};
} // namespace Game

#endif
