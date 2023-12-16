#ifndef _GAME_ENTITIES_CATFISH_H
#define _GAME_ENTITIES_CATFISH_H

#include "Game/enemyInfo.h"
#include "Game/EnemyMgrBase.h"
#include "Game/Entities/KochappyBase.h"

/**
 * --Header for Water Dumple (Catfish)--
 */

namespace Game {
namespace Catfish {
struct Obj : public KochappyBase::Obj {
	Obj();

	//////////////// VTABLE
	// weak function generation in Catfish.cpp requires this ordering
	virtual void changeMaterial() { }                   // _200 (weak)
	virtual void onInit(CreatureInitArg* settings);     // _30
	virtual void inWaterCallback(WaterBox*) { }         // _84 (weak)
	virtual void outWaterCallback() { }                 // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings); // _134
	virtual ~Obj() { }                                  // _1BC (weak)
	virtual void initMouthSlots();                      // _22C
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()  // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Catfish;
	}
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);   // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part); // _284
	virtual void resetEnemyNonStone();                                          // _300
	virtual void setEnemyNonStone() { enableEvent(0, EB_NoInterrupt); }         // _304 (weak)
	//////////////// VTABLE END

	void createDownEffect();

	// _00 		= VTBL
	// _00-_2D8	= KochappyBase
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr() { }                                 // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Catfish;
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};
} // namespace Catfish
} // namespace Game

#endif
