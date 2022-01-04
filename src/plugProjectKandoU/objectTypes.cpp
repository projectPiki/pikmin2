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
/*
 * --INFO--
 * Address:	8017D3F8
 * Size:	000054
 */
char* getName(u16 type)
{
	for (s32 i = 0;; i++) {
		if (infos[i].m_type == 0xFFFF) {
			return nullptr;
		}

		if (type == infos[i].m_type) {
			return infos[i].m_name;
		}
	}
}
} // namespace ObjType
} // namespace Game
