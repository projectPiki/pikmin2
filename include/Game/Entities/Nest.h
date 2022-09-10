#ifndef _GAME_ENTITIES_BIGFOOT_H
#define _GAME_ENTITIES_BIGFOOT_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Breadbug Nest (Nest)--
 */

namespace Game {
namespace Nest {
struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void doEntry();                                 // _40 (weak)
	virtual void doViewCalc();                              // _48 (weak)
	virtual void doSimulation(f32);                         // _4C (weak)
	virtual bool isLivingThing();                           // _D4 (weak)
	virtual f32 getSound_CurrAnimFrame();                   // _108 (weak)
	virtual f32 getSound_CurrAnimSpeed();                   // _10C (weak)
	virtual bool needShadow();                              // _138 (weak)
	virtual bool ignoreAtari(Creature*);                    // _190 (weak)
	virtual ~Obj();                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                     // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4 (weak)
	virtual void update();                                  // _1C8 (weak)
	virtual void doUpdate();                                // _1CC (weak)
	virtual void doUpdateCommon();                          // _1D0 (weak)
	virtual void doAnimationCullingOff();                   // _1DC (weak)
	virtual void doAnimationCullingOn();                    // _1E0 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	//////////////// VTABLE END

	void setHouseType(int);

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Matrixf _2BC;   // _2BC
	u8 m_houseType; // _2EC
	s16 _2EE;       // _2EE
	int _2F0;       // _2F0
	                // _2F4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	//////////////// VTABLE
	virtual void doSimpleDraw(Viewport*);               // _20
	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int);                   // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual void initObjects();                         // _BC
	virtual J3DModelData* loadModelData(JKRArchive*);   // _C4
	virtual void loadAnimData();                        // _CC (weak)
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	J3DModelData* _44; // _44
	Obj* m_obj;        // _48, array of Objs
};
} // namespace Nest
} // namespace Game

#endif
