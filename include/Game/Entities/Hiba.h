#ifndef _GAME_ENTITIES_HIBA_H
#define _GAME_ENTITIES_HIBA_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TEnemyBomb.h"
#include "efx/THibaFire.h"
#include "PS.h"

/**
 * --Header for Fire Geyser (Hiba)--
 */

namespace Game {
namespace Hiba {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings); // _30
	virtual void doSimulation(f32) { }              // _4C (weak)
	virtual void doDirectDraw(Graphics& gfx);       // _50
	virtual void inWaterCallback(WaterBox*) { }     // _84 (weak)
	virtual void outWaterCallback() { }             // _88 (weak)
	virtual bool isLivingThing()                    // _D4 (weak)
	{
		return mIsAlive;
	}
	virtual void getShadowParam(ShadowParam& settings);            // _134
	virtual ~Obj() { }                                             // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doUpdate();                                       // _1CC
	virtual void doDebugDraw(Graphics& gfx);                       // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()             // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Hiba;
	}
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part);    // _278
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);     // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part);   // _284
	virtual bool bombCallBack(Creature* source, Vector3f& direction, f32 damage); // _294
	virtual void lifeRecover() { }                                                // _2C0 (weak)
	virtual void setFSM(FSM* fsm);                                                // _2F8
	//////////////// VTABLE END

	void interactFireAttack();
	void setupLodParms();
	void updateEfxLod();
	void createEffect();
	void startFireEffect();
	void finishFireEffect();
	void generatorKill();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                // _2BC
	bool mIsAlive;            // _2C0
	f32 mTimer;               // _2C4
	efx::THibaFire* mEfxFire; // _2C8
	                          // _2CC = PelletView
};

struct Mgr : public EnemyMgrBaseAlwaysMovieActor {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Hiba;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mWaitTime(this, 'fp02', "ウェイト時間", 2.5f, 0.0f, 100.0f) // 'wait time'
		    , mActiveTime(this, 'fp01', "火吐き時間", 2.5f, 0.0f, 100.0f) // 'fire spitting time'
		    , mStopTime(this, 'fp03', "停止時間", 10.0f, 0.0f, 100.0f)    // 'stop time'
		    , mLodNear(this, 'fp90', "LOD NEAR", 0.085f, 0.0f, 1.0f)
		    , mLodMiddle(this, 'fp91', "LOD MIDDLE", 0.05f, 0.0f, 1.0f)
		{
		}

		Parm<f32> mWaitTime;   // _804, fp02
		Parm<f32> mActiveTime; // _82C, fp01
		Parm<f32> mStopTime;   // _854, fp03
		Parm<f32> mLodNear;    // _87C, fp90
		Parm<f32> mLodMiddle;  // _8A4, fp91
	};

	Parms() { }

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms; // _7F8
};

enum AnimID {
	HIBAANIM_Wait   = 0,
	HIBAANIM_Attack = 1,
	HIBAANIM_AnimCount, // 2
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                   // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);               // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator mAnimator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID { // same as GasHiba::StateID
	HIBA_Dead   = 0,
	HIBA_Wait   = 1,
	HIBA_Attack = 2,
	HIBA_Count,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct WaitStateArg : public StateArg {
	f32 mWaitTimer; // _00
};

struct State : public EnemyFSMState {
	inline State(int stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		mName = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	inline StateAttack()
	    : State(HIBA_Attack, "attack")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	inline StateDead()
	    : State(HIBA_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	inline StateWait()
	    : State(HIBA_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Hiba
} // namespace Game

#endif
