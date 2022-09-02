#ifndef _GAME_ENTITIES_PELLETNUMBER_H
#define _GAME_ENTITIES_PELLETNUMBER_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "Game/BasePelletMgr.h"
#include "efx/TPelkira.h"

namespace Game {
namespace PelletNumber {
struct Object : public Pellet {
	Object();

	virtual void constructor();               // _02C
	virtual void do_onInit(CreatureInitArg*); // _1CC
	virtual u8 getKind();                     // _1F4 (weak)
	virtual void changeMaterial();            // _1F8
	virtual void createKiraEffect(Vector3f&); // _1FC

	// _00      = VTBL
	// _00-_458 = Pellet
	efx::TPelkira_ver01* m_pelkira; // _458
};

struct Mgr : public FixedSizePelletMgr<Object> {
	Mgr();

	virtual void setupResources();                                     // _44
	virtual char* getMgrName();                                        // _58 (weak)
	virtual u8 getMgrID();                                             // _5C (weak)
	virtual void generatorBirth(Vector3f&, Vector3f&, GenPelletParm*); // _70
	virtual void generatorWrite(Stream&, GenPelletParm*);              // _74
	virtual void generatorRead(Stream&, GenPelletParm*, u32);          // _78
	virtual void generatorLocalVersion();                              // _7C (weak)
	virtual void generatorNewPelletParm();                             // _84
	virtual ~Mgr();                                                    // _C8 (weak)

	// _00      = VTABLE
	// _00-_A0  = FixedSizePelletMgr
	u8 _A0[0x4]; // _A0, unknown
};
} // namespace PelletNumber
} // namespace Game

#endif
