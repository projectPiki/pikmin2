#ifndef _GAME_ENTITIES_PELLETFRUIT_H
#define _GAME_ENTITIES_PELLETFRUIT_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "Game/BasePelletMgr.h"

namespace Game {
namespace PelletFruit {
struct Object : public Pellet {
	Object();

	virtual void do_onInit(CreatureInitArg*); // _1CC
	virtual void do_update();                 // _1EC
	virtual u8 getKind();                     // _1F4 (weak)
	virtual void changeMaterial();            // _1F8

	// _00      = VTBL
	// _00-_458 = Pellet
	float m_rottingTimer; // _458, seconds before rotting
};

struct Mgr : public FixedSizePelletMgr<Object> {
	Mgr();

	virtual void setupResources();                // _44
	virtual void onCreateModel(SysShape::Model*); // _54
	virtual char* getMgrName();                   // _58 (weak)
	virtual u8 getMgrID();                        // _5C (weak)
	virtual ~Mgr();                               // _C8 (weak)

	// _00      = VTABLE
	// _00-_A0  = FixedSizePelletMgr
};

extern Mgr* mgr;

} // namespace PelletFruit
} // namespace Game

#endif
