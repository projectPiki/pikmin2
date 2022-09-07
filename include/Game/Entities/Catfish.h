#ifndef _GAME_ENTITIES_CATFISH_H
#define _GAME_ENTITIES_CATFISH_H

#include "Game/enemyInfo.h"
#include "Game/EnemyMgrBase.h"
#include "Game/Entities/KochappyBase.h"

namespace Game {
namespace Catfish {
struct Obj : public KochappyBase::Obj {
	Obj();

	// weak function generation in Catfish.cpp requires this ordering
	virtual void changeMaterial() { }                                                           // _1F8
	virtual void onInit(CreatureInitArg*);                                                      // _28
	virtual void inWaterCallback(WaterBox*) { }                                                 // _7C
	virtual void outWaterCallback() { }                                                         // _80
	virtual void getShadowParam(ShadowParam&);                                                  // _12C
	virtual ~Obj();                                                                             // _1B4
	virtual void initMouthSlots();                                                              // _224
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_Catfish; } // _250
	virtual bool pressCallBack(Creature*, float, CollPart*);                                    // _274
	virtual bool hipdropCallBack(Creature*, float, CollPart*);                                  // _27C
	virtual void resetEnemyNonStone();                                                          // _2F8
	virtual void setEnemyNonStone() { setEvent(0, EB_22); }                                     // _2FC

	void createDownEffect();

	// _00 VTBL
};

struct Mgr : public EnemyMgrBase {
	virtual ~Mgr();                                     // _50
	virtual void createObj(int);                        // _98
	virtual EnemyBase* getEnemy(int);                   // _9C
	virtual void doAlloc();                             // _A0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _A4

	// _00 VTBL
};
} // namespace Catfish
} // namespace Game

#endif
