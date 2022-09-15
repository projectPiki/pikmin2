#ifndef _GAME_NEST_H
#define _GAME_NEST_H

#include "Dolphin/gx.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/enemyInfo.h"
#include "Matrixf.h"

namespace Game {
namespace Nest {
/**
 * @size{0x304}
 */
struct Obj : public EnemyBase {
	Obj();

	// vtable 1 & 2
	virtual void onInit(CreatureInitArg*);                                                       // _28
	virtual void setInitialSetting(EnemyInitialParamBase*) { }                                   // _1BC
	virtual void update() { }                                                                    // _1C0
	virtual void doUpdate() { }                                                                  // _1C4
	virtual void doSimulation(float) { }                                                         // _44
	virtual void doAnimationCullingOn() { }                                                      // _1D8
	virtual void doAnimationCullingOff() { }                                                     // _1D4
	virtual void doUpdateCommon() { }                                                            // _1C8
	virtual void doEntry() { }                                                                   // _38
	virtual void doViewCalc() { }                                                                // _40
	virtual bool isLivingThing() { return false; }                                               // _CC
	virtual bool ignoreAtari(Game::Creature*) { return false; }                                  // _188
	virtual bool needShadow() { return false; }                                                  // _130
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_PanHouse; } // _250
	virtual float getSound_CurrAnimFrame() { return 0.0f; }                                      // _100
	virtual float getSound_CurrAnimSpeed() { return 1.0f; }                                      // _104
	virtual ~Obj();                                                                              // _1B4
	virtual void birth(Vector3f&, float);                                                        // _1B8

	// vtable 3 (no changes)

	void setHouseType(int);

	Matrixf _2BC;   // _2BC
	u8 m_houseType; // _2EC
	short _2EE;     // _2EE
	int _2F0;       // _2F0

	// PelletView _2F4
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	// vtable 1
	virtual void doSimpleDraw(Viewport*); // _18
	// vtable 2
	// TODO: Fix offsets
	virtual ~Mgr();                                     // _50
	virtual Obj* birth(EnemyBirthArg&);                 // _68
	virtual void createObj(int);                        // _98
	virtual Obj* getEnemy(int);                         // _9C
	virtual void doAlloc();                             // _A0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _A4
	virtual void initObjects();                         // _B4
	virtual void loadModelData(JKRArchive*);            // _BC
	virtual void loadAnimData();                        // _C4

	J3DModelData* m_modelData2; // _44
	Obj* m_objects;             // _48
};

extern GXColorS10 mMatColor;
} // namespace Nest
} // namespace Game

#endif
