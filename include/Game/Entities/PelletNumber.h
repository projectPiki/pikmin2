#ifndef _GAME_ENTITIES_PELLETNUMBER_H
#define _GAME_ENTITIES_PELLETNUMBER_H

#include "types.h"
#include "Game/pelletMgr.h"
#include "Game/BasePelletMgr.h"
#include "efx/TPelkira.h"

namespace Game {
namespace PelletNumber {

// Sizes of the pellet
#define PELLET_NUMBER_ONE    (1)
#define PELLET_NUMBER_FIVE   (5)
#define PELLET_NUMBER_TEN    (10)
#define PELLET_NUMBER_TWENTY (20)

// the maximum number pellets that can be active at once
#define PELLET_NUMBER_MAXCOUNT    (48)
#define PELLET_NUMBER_MAXMODEL    (64)
#define PELLET_NUMBER_MAXCOLLPART (128)

struct Object : public Pellet {
	Object() { }

	virtual void constructor();                         // _02C
	virtual void do_onInit(CreatureInitArg* arg);       // _1CC
	virtual u8 getKind() { return PelletType::Number; } // _1F4 (weak)
	virtual void changeMaterial();                      // _1F8
	virtual void createKiraEffect(Vector3f& pos);       // _1FC

	// _00      = VTBL
	// _00-_458 = Pellet
	efx::TPelkira_ver01* mPelkira; // _458
};

struct Mgr : public FixedSizePelletMgr<Object> {
	Mgr();

	virtual void setupResources();                                                       // _44
	virtual void onCreateModel(SysShape::Model* model);                                  // _48
	virtual char* getMgrName() { return "number"; }                                      // _58 (weak)
	virtual u8 getMgrID() { return PelletType::Number; }                                 // _5C (weak)
	virtual Pellet* generatorBirth(Vector3f& pos, Vector3f& angle, GenPelletParm* parm); // _70
	virtual void generatorWrite(Stream& stream, GenPelletParm* parm);                    // _74
	virtual void generatorRead(Stream& stream, GenPelletParm* parm, u32 flag);           // _78
	virtual u32 generatorLocalVersion() { return '0000'; }                               // _7C (weak)
	virtual GenPelletParm* generatorNewPelletParm();                                     // _84
	// virtual ~Mgr() { }                                                                   // _C8 (weak)

	// _00      = VTABLE
	// _00-_A0  = FixedSizePelletMgr
};

extern Mgr* mgr;

} // namespace PelletNumber
} // namespace Game

#endif
