#ifndef _GAME_ENTITIES_NEST_H
#define _GAME_ENTITIES_NEST_H

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
enum HouseType {
	NEST_Jigumo   = 0,
	NEST_Breadbug = 1,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);            // _30
	virtual void setInitialSetting(EnemyInitialParamBase*) { } // _1C4 (weak)
	virtual void update() { }                                  // _1C8 (weak)
	virtual void doUpdate() { }                                // _1CC (weak)
	virtual void doSimulation(f32) { }                         // _4C (weak)
	virtual void doAnimationCullingOn() { }                    // _1E0 (weak)
	virtual void doAnimationCullingOff() { }                   // _1DC (weak)
	virtual void doUpdateCommon() { }                          // _1D0 (weak)
	virtual void doEntry() { }                                 // _40 (weak)
	virtual void doViewCalc() { }                              // _48 (weak)
	virtual bool isLivingThing() { return false; }             // _D4 (weak)
	virtual bool ignoreAtari(Creature*) { return false; }      // _190 (weak)
	virtual bool needShadow() { return false; }                // _138 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()         // _258 (weak)
	{
		return EnemyTypeID::EnemyID_PanHouse;
	}
	virtual f32 getSound_CurrAnimFrame() { return 0.0f; } // _108 (weak)
	virtual f32 getSound_CurrAnimSpeed() { return 1.0f; } // _10C (weak)
	virtual ~Obj() { }                                    // _1BC (weak)
	virtual void birth(Vector3f&, f32);                   // _1C0
	//////////////// VTABLE END

	void setHouseType(int type);

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Matrixf mHouseTrMatrix; // _2BC, specific TR matrix for nest (height lower than base tr matrix)
	u8 mHouseType;          // _2EC
	s16 mAlpha;             // _2EE, alpha value for nest color, will decrement to -255 as nest dies
	int mDeathTimer;        // _2F0, if non-zero, will begin death sequence for nest (takes 80 frames)
	                        // _2F4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	virtual void doSimpleDraw(Viewport*); // _20
	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void doAlloc();                            // _A8
	virtual void initObjects();                        // _BC
	virtual J3DModelData* loadModelData(JKRArchive*);  // _C4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_PanHouse;
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &mObj[index];
	}
	virtual void loadAnimData() { }   // _CC (weak)
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	J3DModelData* mJigumoHouseData; // _44
	Obj* mObj;                      // _48, array of Objs
};
} // namespace Nest
} // namespace Game

#endif
