#ifndef _GAME_ENTITIES_PELLETOTAKARA_H
#define _GAME_ENTITIES_PELLETOTAKARA_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "Game/BasePelletMgr.h"

// the maximum treasure pellets that can be active at once
#define PELLET_OTAKARA_MAXCOUNT    (32)
#define PELLET_OTAKARA_MAXCOLLPART (256)

struct J3DMaterial;

namespace Game {
namespace PelletOtakara {
struct Object : public Pellet {
	Object() { }

	virtual void constructor();                           // _2C
	virtual void getShadowParam(ShadowParam& settings);   // _134
	virtual void do_onInit(CreatureInitArg*);             // _1CC
	virtual void onCreateShape();                         // _1D0
	virtual void theEntry();                              // _1D4
	virtual void changeMaterial();                        // _1F8
	virtual void sound_otakaraEventStart();               // _20C
	virtual void sound_otakaraEventRestart();             // _210
	virtual void sound_otakaraEventStop();                // _214
	virtual void sound_otakaraEventFinish();              // _218
	virtual u8 getKind() { return PelletType::Treasure; } // _1F4 (weak)
	virtual s32 getBedamaColor() { return mBedamaColor; } // _1E8 (weak)

	// _00      = VTBL
	// _00-_458 = Pellet
	J3DMaterial* mFbMaterial; // _458
	s16 mFbTextureID;         // _45C
	s8 mBedamaColor;          // _45E
};

struct Mgr : public FixedSizePelletMgr<Object> {
	Mgr();

	virtual void setupResources();                                        // _44
	virtual char* getMgrName() { return "otakara"; }                      // _58 (weak)
	virtual u8 getMgrID() { return PelletType::Treasure; }                // _5C (weak)
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

} // namespace PelletOtakara
} // namespace Game

#endif
