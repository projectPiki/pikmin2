#ifndef _GAME_ONYON_H
#define _GAME_ONYON_H

#include "types.h"
#include "Game/Creature.h"

enum OnyonTypes {
	ONYON_TYPE_BLUE = 0,
	ONYON_TYPE_RED,
	ONYON_TYPE_YELLOW,
	ONYON_TYPE_POD  = 3,
	ONYON_TYPE_SHIP = 4,
};

enum OnyonObjects {
	ONYON_OBJECT_ONYON = 0,
	ONYON_OBJECT_POD,
	ONYON_OBJECT_SHIP,
};

namespace Game {
struct Onyon {
	virtual BOOL isSuckArriveWait();
	u8 _178[0xB6];
	u16 m_onyonType;
	u8 _230[0x10];
	u8 m_carcassType; // _240
	u8 _241[0x1E];
};
} // namespace Game

#endif
