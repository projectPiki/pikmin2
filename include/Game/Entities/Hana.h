#ifndef _GAME_ENTITIES_HANA_H
#define _GAME_ENTITIES_HANA_H

#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Entities/ChappyBase.h"

/**
 * --Header for Creeping Chrysanthemum (Hana)--
 */

namespace Game {
namespace Hana {
struct Obj : public ChappyBase::Obj {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                                          // _30
	virtual void doDirectDraw(Graphics& gfx);                                                // _50
	virtual void getShadowParam(ShadowParam& settings);                                      // _134
	virtual ~Obj() { }                                                                       // _1BC (weak)
	virtual void initMouthSlots();                                                           // _22C
	virtual bool isWakeup();                                                                 // _2FC
	virtual void flickStatePikmin();                                                         // _308
	virtual void flickAttackBomb();                                                          // _30C
	virtual int eatAttackPikmin();                                                           // _310
	virtual void resetUnderGround();                                                         // _314
	virtual void setUnderGround();                                                           // _318
	virtual void createEffect() { }                                                          // _31C (weak)
	virtual void setupEffect() { }                                                           // _320 (weak)
	virtual void createSmokeEffect();                                                        // _330
	virtual void changeMaterial() { }                                                        // _200 (weak)
	virtual bool isUnderground() { return mBuried; }                                         // _D0 (weak)
	virtual void initWalkSmokeEffect() { }                                                   // _230 (weak)
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr() { return nullptr; }                // _234 (weak)
	virtual f32 getDownSmokeScale() { return 1.2f; }                                         // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_Hana; } // _258 (weak)
	virtual void setAnimationSpeed(f32) { }                                                  // _300 (weak)
	virtual void flickAttackFail() { }                                                       // _304 (weak)
	virtual void startSleepEffect() { }                                                      // _324 (weak)
	virtual void finishSleepEffect() { }                                                     // _328 (weak)
	                                                                                         //////////////// VTABLE END

	// _00 		= VTBL
	// _00-_2E4	= ChappyBase::Obj
	bool mBuried; // _2E4
	              // _2E8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr() { }                                  // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual void loadModelData();                      // _C8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Hana;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x21240030);
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, an array of Objs
};

} // namespace Hana
} // namespace Game

#endif
