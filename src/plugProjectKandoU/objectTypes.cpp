#include "ObjectTypes.h"

// clang-format off
ObjTypeInfo infos[] = {
	// Protagonists
	{ OBJTYPE_Piki, "piki" },
	{ OBJTYPE_Navi, "navi" },
	{ OBJTYPE_Teki, "teki" },

	// Gameobjects
	{ OBJTYPE_Pellet, "pellet" },
	{ OBJTYPE_Onyon, "onyon" },
	{ OBJTYPE_Ufo, "ufo" },
	{ OBJTYPE_Gate, "gate" },
	{ OBJTYPE_Hole, "hole" },
	{ OBJTYPE_Honey, "honey" },
	{ OBJTYPE_Pikihead, "pikihead" },
	{ OBJTYPE_Plant, "plant" },
	{ OBJTYPE_Rock, "rock" },
	{ OBJTYPE_Cave, "cave" },
	{ OBJTYPE_Fountain, "fountain" },
	{ OBJTYPE_BigFountain, "bigfountain" },
	{ OBJTYPE_Bridge, "bridge" },
	{ OBJTYPE_Treasure, "treasure" },
	{ OBJTYPE_Downfloor, "downfloor" },
	{ OBJTYPE_Ujamushi, "ujamushi" },
	{ OBJTYPE_Weed, "weed" },
	{ OBJTYPE_Ball, "ball" },

	// Invalid (end of list identifiers)
	{ OBJTYPE_Undef, "undef" },
	{ OBJTYPE_End, "end" },
};
// clang-format on

namespace Game {
namespace ObjType {
/**
 * @note Address: 0x8017D3F8
 * @note Size: 0x54
 */
char* getName(u16 type)
{
	for (s32 i = 0;; i++) {
		if (infos[i].mType == OBJTYPE_End) {
			return nullptr;
		}

		if (type == infos[i].mType) {
			return infos[i].mName;
		}
	}
}
} // namespace ObjType
} // namespace Game
