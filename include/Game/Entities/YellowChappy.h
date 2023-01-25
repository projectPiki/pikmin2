#ifndef _GAME_ENTITIES_YELLOWCHAPPY_H
#define _GAME_ENTITIES_YELLOWCHAPPY_H

#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Entities/ChappyBase.h"
#include "efx/TKechappy.h"
#include "EffectAnimator.h"

/**
 * --Header for Hairy Bulborb (YellowChappy)--
 */

namespace Game {
namespace YellowChappy {
struct Obj : public ChappyBase::Obj {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);    // _30
	virtual void onKill(CreatureKillArg* settings);    // _34
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void doUpdateCommon();                     // _1D0
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_YellowChappy;
	}
	virtual void doStartWaitingBirthTypeDrop();  // _2E0
	virtual void doFinishWaitingBirthTypeDrop(); // _2E4
	virtual void doStartMovie();                 // _2F0
	virtual void doEndMovie();                   // _2F4
	virtual void createEffect();                 // _31C
	virtual void setupEffect();                  // _320
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_2E4	= ChappyBase::Obj
	efx::TKechappyTest* mEfxTest;        // _2E4
	u8 mGlobalAlpha;                     // _2E8
	bool mHasHair;                       // _2E9
	EffectAnimator::Mgr* mEffectAnimMgr; // _2EC
	                                     // _2F0 = PelletView
};

struct Mgr : public ChappyBase::Mgr {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr() { }                                  // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void loadAnimData();                       // _CC
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_YellowChappy;
	}
	virtual ResTIMG* getChangeTexture0() // _E0 (weak)
	{
		return mChangeTexture0;
	}
	virtual ResTIMG* getChangeTexture1() // _E4 (weak)
	{
		return mChangeTexture1;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &mObj[index];
	}

	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* mChangeTexture0;           // _44
	ResTIMG* mChangeTexture1;           // _48
	Obj* mObj;                          // _4C, an array of Objs
	EffectAnimator::Mgr mEffectAnimMgr; // _50, pointer to this at _2EC in Obj
};

} // namespace YellowChappy
} // namespace Game

#endif
