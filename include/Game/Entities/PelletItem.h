#ifndef _GAME_ENTITIES_PELLETITEM_H
#define _GAME_ENTITIES_PELLETITEM_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "Game/BasePelletMgr.h"

namespace Game {
namespace PelletItem {
struct Object : public Pellet {
	Object();

	virtual void constructor();               // _2C
	virtual void do_onInit(CreatureInitArg*); // _1CC
	virtual void onBounce();                  // _1D8
	virtual u8 getKind();                     // _1F4 (weak)
	virtual void sound_otakaraEventStart();   // _20C
	virtual void sound_otakaraEventRestart(); // _210
	virtual void sound_otakaraEventStop();    // _214
	virtual void sound_otakaraEventFinish();  // _218

	// _00      = VTBL
	// _00-_458 = Pellet
};

struct Mgr : public FixedSizePelletMgr<Object> {
	Mgr();

	virtual void setupResources();                                        // _44
	virtual char* getMgrName();                                           // _58 (weak)
	virtual u8 getMgrID();                                                // _5C (weak)
	virtual Pellet* generatorBirth(Vector3f&, Vector3f&, GenPelletParm*); // _70
	virtual void generatorWrite(Stream&, GenPelletParm*);                 // _74
	virtual void generatorRead(Stream&, GenPelletParm*, u32);             // _78
	virtual u32 generatorLocalVersion();                                  // _7C (weak)
	virtual GenPelletParm* generatorNewPelletParm();                      // _84
	virtual ~Mgr();                                                       // _C8 (weak)

	// _00      = VTABLE
	// _00-_A0  = FixedSizePelletMgr
};

extern Mgr* mgr;

} // namespace PelletItem
} // namespace Game

#endif
