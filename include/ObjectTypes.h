#ifndef _OBJECTTYPES_H
#define _OBJECTTYPES_H

#include "types.h"

#define OBJTYPE_PROTAGONIST 0x0000
#define OBJTYPE_GAMEOBJECT  0x0400
#define OBJTYPE_INVALID     0xFFF0

enum ObjTypes {
	// Protagonists
	OBJTYPE_Piki = OBJTYPE_PROTAGONIST + 0x0,
	OBJTYPE_Navi = OBJTYPE_PROTAGONIST + 0x1,
	OBJTYPE_Teki = OBJTYPE_PROTAGONIST + 0x2,

	// Gameobjects
	OBJTYPE_Pellet      = OBJTYPE_GAMEOBJECT + 0x1,
	OBJTYPE_Onyon       = OBJTYPE_GAMEOBJECT + 0x2,
	OBJTYPE_Ufo         = OBJTYPE_GAMEOBJECT + 0x3,
	OBJTYPE_Gate        = OBJTYPE_GAMEOBJECT + 0x4,
	OBJTYPE_Hole        = OBJTYPE_GAMEOBJECT + 0x5,
	OBJTYPE_Honey       = OBJTYPE_GAMEOBJECT + 0x6,
	OBJTYPE_Pikihead    = OBJTYPE_GAMEOBJECT + 0x7,
	OBJTYPE_Plant       = OBJTYPE_GAMEOBJECT + 0x8,
	OBJTYPE_Rock        = OBJTYPE_GAMEOBJECT + 0x9,
	OBJTYPE_Cave        = OBJTYPE_GAMEOBJECT + 0xA,
	OBJTYPE_Fountain    = OBJTYPE_GAMEOBJECT + 0xB,
	OBJTYPE_BigFountain = OBJTYPE_GAMEOBJECT + 0xC,
	OBJTYPE_Bridge      = OBJTYPE_GAMEOBJECT + 0xD,
	OBJTYPE_Treasure    = OBJTYPE_GAMEOBJECT + 0xE,
	OBJTYPE_Downfloor   = OBJTYPE_GAMEOBJECT + 0xF,
	OBJTYPE_Ujamushi    = OBJTYPE_GAMEOBJECT + 0x11,
	OBJTYPE_Weed        = OBJTYPE_GAMEOBJECT + 0x12,
	OBJTYPE_Ball        = OBJTYPE_GAMEOBJECT + 0x13,

	// Invalid (end of list identifiers)
	OBJTYPE_Undef = OBJTYPE_INVALID + 0xE,
	OBJTYPE_End   = OBJTYPE_INVALID + 0xF,
};

struct ObjTypeInfo {
	u16 m_type;   // _00
	char* m_name; // _04
};

extern ObjTypeInfo infos[];

namespace Game {
namespace ObjType {
	char* getName(u16 type);
} // namespace ObjType
} // namespace Game

#endif
