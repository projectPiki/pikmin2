#ifndef _GAME_ENTITIES_PELLETOTAKARA_H
#define _GAME_ENTITIES_PELLETOTAKARA_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "Game/BasePelletMgr.h"

struct J3DMaterial;

namespace Game {
namespace PelletOtakara {
struct Object : public Pellet {
	Object();

	virtual void constructor();                         // _2C
	virtual void getShadowParam(ShadowParam& settings); // _134
	virtual void do_onInit(CreatureInitArg*);           // _1CC
	virtual void onCreateShape();                       // _1D0
	virtual void theEntry();                            // _1D4
	virtual s32 getBedamaColor();                       // _1E8 (weak)
	virtual u8 getKind();                               // _1F4 (weak)
	virtual void changeMaterial();                      // _1F8
	virtual void sound_otakaraEventStart();             // _20C
	virtual void sound_otakaraEventRestart();           // _210
	virtual void sound_otakaraEventStop();              // _214
	virtual void sound_otakaraEventFinish();            // _218

	// _00      = VTBL
	// _00-_458 = Pellet
	J3DMaterial* m_material; // _458
	short _45C;              // _45C
	u8 m_bedamaColor;        // _45E
	u8 _45F;                 // _45F, unknown/padding
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

} // namespace PelletOtakara
} // namespace Game

#endif
