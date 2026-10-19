#ifndef _GAME_ENTITIES_PELLETCARCASS_H
#define _GAME_ENTITIES_PELLETCARCASS_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "Game/BasePelletMgr.h"

// the maximum carcass pellets that can be active at once
#define PELLET_CARCASS_MAXCOUNT    (64) // (known by some as the fabled "corpse limit")
#define PELLET_CARCASS_MAXCOLLPART (128)

namespace Game {
namespace PelletCarcass {
struct Object : public Pellet {
	Object() { }

	virtual u8 getKind() { return PelletType::Carcass; } // _1F4 (weak)

	// _00      = VTBL
	// _00-_458 = Pellet
};

struct Mgr : public FixedSizePelletMgr<Object> {
	Mgr();

	virtual void setupResources();                                     // _44
	virtual SysShape::Model* createShape(int, int) { return nullptr; } // _6C (weak)
	virtual char* getMgrName() { return "carcass"; }                   // _58 (weak)
	virtual u8 getMgrID() { return PelletType::Carcass; }              // _5C (weak)

	// _00      = VTABLE
	// _00-_A0  = FixedSizePelletMgr
};

extern Mgr* mgr;

} // namespace PelletCarcass
} // namespace Game

#endif
