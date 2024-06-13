#ifndef _GAME_ENTITIES_PELLETITEM_H
#define _GAME_ENTITIES_PELLETITEM_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "Game/BasePelletMgr.h"

// the maximum item pellets that can be active at once
#define PELLET_ITEM_MAXCOUNT    (11)
#define PELLET_ITEM_MAXCOLLPART (128)

namespace Game {
namespace PelletItem {
struct Object : public Pellet {
	Object() { }

	virtual void constructor();                          // _2C
	virtual void do_onInit(CreatureInitArg*);            // _1CC
	virtual void onBounce();                             // _1D8
	virtual u8 getKind() { return PelletType::Upgrade; } // _1F4 (weak)
	virtual void sound_otakaraEventStart();              // _20C
	virtual void sound_otakaraEventRestart();            // _210
	virtual void sound_otakaraEventStop();               // _214
	virtual void sound_otakaraEventFinish();             // _218

	// _00      = VTBL
	// _00-_458 = Pellet
};

struct Mgr : public FixedSizePelletMgr<Object> {
	Mgr();

	virtual void setupResources();                                        // _44
	virtual char* getMgrName() { return "item"; }                         // _58 (weak)
	virtual u8 getMgrID() { return PelletType::Upgrade; }                 // _5C (weak)
	virtual Pellet* generatorBirth(Vector3f&, Vector3f&, GenPelletParm*); // _70
	virtual void generatorWrite(Stream&, GenPelletParm*);                 // _74
	virtual void generatorRead(Stream&, GenPelletParm*, u32);             // _78
	virtual u32 generatorLocalVersion() { return '0000'; }                // _7C (weak)
	virtual GenPelletParm* generatorNewPelletParm();                      // _84
	// virtual ~Mgr() { }                                                    // _C8 (weak)

	// _00      = VTABLE
	// _00-_A0  = FixedSizePelletMgr
};

extern Mgr* mgr;

} // namespace PelletItem
} // namespace Game

#endif
