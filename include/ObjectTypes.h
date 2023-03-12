#ifndef _OBJECTTYPES_H
#define _OBJECTTYPES_H

#include "types.h"

#define OBJTYPE_PROTAGONIST_START 0x0000
#define OBJTYPE_GAMEOBJECT_START  0x0401
#define OBJTYPE_INVALID_START     0xFFFE

enum ObjTypes {
	// Protagonists
	OBJTYPE_Piki = OBJTYPE_PROTAGONIST_START, // 0x000
	OBJTYPE_Navi,                             // 0x001
	OBJTYPE_Teki,                             // 0x002

	// Gameobjects
	OBJTYPE_Pellet = OBJTYPE_GAMEOBJECT_START, // 0x401
	OBJTYPE_Onyon,                             // 0x402
	OBJTYPE_Ufo,                               // 0x403
	OBJTYPE_Gate,                              // 0x404
	OBJTYPE_Hole,                              // 0x405
	OBJTYPE_Honey,                             // 0x406
	OBJTYPE_Pikihead,                          // 0x407
	OBJTYPE_Plant,                             // 0x408
	OBJTYPE_Rock,                              // 0x409
	OBJTYPE_Cave,                              // 0x40A
	OBJTYPE_Fountain,                          // 0x40B
	OBJTYPE_BigFountain,                       // 0x40C
	OBJTYPE_Bridge,                            // 0x40D
	OBJTYPE_Treasure,                          // 0x40E
	OBJTYPE_Downfloor,                         // 0x40F
	OBJTYPE_Barrel,                            // 0x410
	OBJTYPE_Ujamushi,                          // 0x411
	OBJTYPE_Weed,                              // 0x412
	OBJTYPE_Ball,                              // 0x413

	// Invalid (end of list identifiers)
	OBJTYPE_Undef = OBJTYPE_INVALID_START, // 0xFFFE
	OBJTYPE_End                            // 0xFFFF
};

struct ObjTypeInfo {
	u16 mType;   // _00
	char* mName; // _04
};

extern ObjTypeInfo infos[];

namespace Game {
namespace ObjType {
char* getName(u16 type);
}
} // namespace Game

#endif
