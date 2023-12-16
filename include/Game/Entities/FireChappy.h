#ifndef _GAME_ENTITIES_FIRECHAPPY_H
#define _GAME_ENTITIES_FIRECHAPPY_H

#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Entities/ChappyBase.h"
#include "efx/TYaki.h"
#include "Sys/MatBaseAnimation.h"

/**
 * --Header for Fiery Bulblax (FireChappy)--
 */

namespace Game {
namespace FireChappy {
struct Obj : public ChappyBase::Obj {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);     // _30
	virtual void onKill(CreatureKillArg* settings);     // _34
	virtual void doDirectDraw(Graphics& gfx);           // _50
	virtual void collisionCallback(CollEvent& event);   // _EC
	virtual void getShadowParam(ShadowParam& settings); // _134
	virtual ~Obj() { }                                  // _1BC (weak)
	virtual void doUpdateCommon();                      // _1D0
	virtual void doDebugDraw(Graphics& gfx);            // _1EC
	virtual void changeMaterial();                      // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()  // _258 (weak)
	{
		return EnemyTypeID::EnemyID_FireChappy;
	}
	virtual void doStartWaitingBirthTypeDrop();  // _2E0
	virtual void doFinishWaitingBirthTypeDrop(); // _2E4
	virtual void doStartMovie();                 // _2F0
	virtual void doEndMovie();                   // _2F4
	virtual void createEffect();                 // _31C
	virtual void setupEffect();                  // _320
	virtual void startSleepEffect();             // _324
	virtual void finishSleepEffect();            // _328
	virtual void createFlickEffect();            // _32C
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

	inline f32 setLowBound(f32 bound, f32 result)
	{
		if (mAnimationFireTimer <= bound) {
			return result;
		} else {
			return mAnimationFireTimer;
		}
	}

	// _00 		= VTBL
	// _00-_2E4	= ChappyBase::Obj
	bool mOnFire;                         // _2E4
	efx::TYakiBody* mEfxBody;             // _2E8
	efx::TYakiFlick* mEfxFlick;           // _2EC
	efx::TYakiDeadsmoke* mEfxDeadsmoke;   // _2F0
	efx::TYakiSteam* mEfxSteam;           // _2F4
	f32 mAnimationFireTimer;              // _2F8
	Sys::MatLoopAnimator* mLoopAnimators; // _2FC, array of 2 animators
	                                      // _300 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr() { }                                  // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual SysShape::Model* createModel();            // _B0
	virtual void loadModelData();                      // _C8
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_FireChappy;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x01240030);
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj;                                 // _44, an array of Objs
	Sys::MatTexAnimation* mTexAnimation;       // _48, unknown
	Sys::MatTevRegAnimation* mTevRegAnimation; // _4C, unknown
};

} // namespace FireChappy
} // namespace Game

#endif
