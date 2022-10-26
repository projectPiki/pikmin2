#ifndef _OBJECTTYPES_H
#define _OBJECTTYPES_H

#include "types.h"

#define OBJTYPE_PROTAGONIST_START 0x0000
#define OBJTYPE_GAMEOBJECT_START  0x0401
#define OBJTYPE_INVALID_START     0xFFFE

enum ObjTypes {
	// Protagonists
	OBJTYPE_Piki = OBJTYPE_PROTAGONIST_START,
	OBJTYPE_Navi,
	OBJTYPE_Teki,

	// Gameobjects
	OBJTYPE_Pellet = OBJTYPE_GAMEOBJECT_START,
	OBJTYPE_Onyon,
	OBJTYPE_Ufo,
	OBJTYPE_Gate,
	OBJTYPE_Hole,
	OBJTYPE_Honey,
	OBJTYPE_Pikihead,
	OBJTYPE_Plant,
	OBJTYPE_Rock,
	OBJTYPE_Cave,
	OBJTYPE_Fountain,
	OBJTYPE_BigFountain,
	OBJTYPE_Bridge,
	OBJTYPE_Treasure,
	OBJTYPE_Downfloor,
	OBJTYPE_Unused, // value is never used
	OBJTYPE_Ujamushi,
	OBJTYPE_Weed,
	OBJTYPE_Ball,

	// Invalid (end of list identifiers)
	OBJTYPE_Undef = OBJTYPE_INVALID_START,
	OBJTYPE_End
};

struct ObjTypeInfo {
	u16 m_type;   // _00
	char* m_name; // _04
};

extern ObjTypeInfo infos[];

namespace Game {
namespace ObjType {
char* getName(u16 type);
}
} // namespace Game

#endif
