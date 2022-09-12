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
	virtual void onInit(CreatureInitArg*);                 // _30
	virtual void doDirectDraw(Graphics&);                  // _50
	virtual bool isUnderground();                          // _D0 (weak)
	virtual void getShadowParam(ShadowParam&);             // _134
	virtual ~Obj();                                        // _1BC (weak)
	virtual void changeMaterial();                         // _200 (weak)
	virtual void initMouthSlots();                         // _22C
	virtual void initWalkSmokeEffect();                    // _230 (weak)
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr(); // _234 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();    // _258 (weak)
	virtual f32 getDownSmokeScale();                       // _2EC (weak)
	virtual bool isWakeup();                               // _2FC
	virtual void setAnimationSpeed(float);                 // _300 (weak)
	virtual void flickAttackFail();                        // _304 (weak)
	virtual void flickStatePikmin();                       // _308
	virtual void flickAttackBomb();                        // _30C
	virtual void eatAttackPikmin();                        // _310
	virtual void resetUnderGround();                       // _314
	virtual void setUnderGround();                         // _318
	virtual void createEffect();                           // _31C (weak)
	virtual void setupEffect();                            // _320 (weak)
	virtual void startSleepEffect();                       // _324 (weak)
	virtual void finishSleepEffect();                      // _328 (weak)
	virtual void createSmokeEffect();                      // _330
	                                                       //////////////// VTABLE END

	// _00 		= VTBL
	// _00-_2E4	= ChappyBase::Obj
	u8 _2E4; // _2E4
	         // _2E8 = PelletView
};

struct Mgr : public ChappyBase::Mgr {
	Mgr(int, u8);

	//////////////// VTABLE
	virtual ~Mgr() { }                                  // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual void loadModelData();                       // _C8
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, an array of Objs
};

} // namespace Hana
} // namespace Game

#endif
