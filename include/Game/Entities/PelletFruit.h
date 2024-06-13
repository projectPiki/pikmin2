#ifndef _GAME_ENTITIES_PELLETFRUIT_H
#define _GAME_ENTITIES_PELLETFRUIT_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "Game/BasePelletMgr.h"

// the maximum berry pellets that can be active at once
#define PELLET_FRUIT_MAXCOUNT    (64)
#define PELLET_FRUIT_MAXMODEL    (64)
#define PELLET_FRUIT_MAXCOLLPART (128)

namespace Game {
namespace PelletFruit {
struct Object : public Pellet {
	Object()
	    : Pellet()
	{
	}

	virtual void do_onInit(CreatureInitArg*);          // _1CC
	virtual void do_update();                          // _1EC
	virtual u8 getKind() { return PelletType::Berry; } // _1F4 (weak)
	virtual void changeMaterial();                     // _1F8

	// _00      = VTBL
	// _00-_458 = Pellet
	f32 mBurstTimer; // _458, seconds before rotting/bursting
};

struct Mgr : public FixedSizePelletMgr<Object> {
	Mgr();

	virtual void setupResources();                      // _44
	virtual void onCreateModel(SysShape::Model*);       // _54
	virtual char* getMgrName() { return "fruit"; }      // _58 (weak)
	virtual u8 getMgrID() { return PelletType::Berry; } // _5C (weak)

	// _00      = VTABLE
	// _00-_A0  = FixedSizePelletMgr
};

extern Mgr* mgr;

} // namespace PelletFruit
} // namespace Game

#endif
