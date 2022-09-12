#ifndef _GAME_ENTITIES_FIRECHAPPY_H
#define _GAME_ENTITIES_FIRECHAPPY_H

#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Entities/ChappyBase.h"

/**
 * --Header for Fiery Bulblax (FireChappy)--
 */

namespace efx {
struct TYakiBody;
struct TYakiFlick;
struct TYakiDeadsmoke;
struct TYakiSteam;
} // namespace efx

namespace Game {
namespace FireChappy {
struct Obj : public ChappyBase::Obj {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);              // _30
	virtual void onKill(CreatureKillArg*);              // _34
	virtual void doDirectDraw(Graphics&);               // _50
	virtual void collisionCallback(CollEvent&);         // _EC
	virtual void getShadowParam(ShadowParam&);          // _134
	virtual ~Obj();                                     // _1BC (weak)
	virtual void doUpdateCommon();                      // _1D0
	virtual void doDebugDraw(Graphics&);                // _1EC
	virtual void changeMaterial();                      // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)
	virtual void doStartWaitingBirthTypeDrop();         // _2E0
	virtual void doFinishWaitingBirthTypeDrop();        // _2E4
	virtual void doStartMovie();                        // _2F0
	virtual void doEndMovie();                          // _2F4
	virtual void createEffect();                        // _31C
	virtual void setupEffect();                         // _320
	virtual void startSleepEffect();                    // _324
	virtual void finishSleepEffect();                   // _328
	virtual void createFlickEffect();                   // _32C
	//////////////// VTABLE END

	void startFireState();
	void finishFireState(bool);
	void updateFireState();
	void createMaterialAnimation();
	void startMaterialAnimation();
	void updateMaterialAnimation();
	void updateEfxLod();
	void startBodyEffect();
	void finishBodyEffect();
	void createDeadSmokeEffect();
	void createDeadSteamEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2E4	= ChappyBase::Obj
	u8 _2E4;                             // _2E4, unknown
	efx::TYakiBody* m_efxBody;           // _2E8
	efx::TYakiFlick* m_efxFlick;         // _2EC
	efx::TYakiDeadsmoke* m_efxDeadsmoke; // _2F0
	efx::TYakiSteam* m_efxSteam;         // _2F4
	u8 _2F8[0x8];                        // _2F8, unknown
	                                     // _300 = PelletView
};

struct Mgr : public ChappyBase::Mgr {
	Mgr(int, u8);

	//////////////// VTABLE
	virtual ~Mgr() { }                                  // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadModelData();                       // _C8
	virtual void loadTexData();                         // _D0
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, an array of Objs
};

} // namespace FireChappy
} // namespace Game

#endif
