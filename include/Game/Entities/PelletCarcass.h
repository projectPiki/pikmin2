#ifndef _GAME_ENTITIES_PELLETCARCASS_H
#define _GAME_ENTITIES_PELLETCARCASS_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "Game/BasePelletMgr.h"

namespace Game {
namespace PelletCarcass {
struct Object : public Pellet {
	Object();

	virtual u8 getKind(); // _1F4 (weak)

	// _00      = VTBL
	// _00-_458 = Pellet
};

struct Mgr : public FixedSizePelletMgr<Object> {
	Mgr();

	virtual void setupResources();                  // _44
	virtual char* getMgrName();                     // _58 (weak)
	virtual u8 getMgrID();                          // _5C (weak)
	virtual SysShape::Model* createShape(int, int); // _6C (weak)
	virtual ~Mgr();                                 // _C8 (weak)

	// _00      = VTABLE
	// _00-_A0  = FixedSizePelletMgr
	u8 _A0[0x4]; // _A0, unknown
};

extern Mgr* mgr;

} // namespace PelletCarcass
} // namespace Game

#endif
