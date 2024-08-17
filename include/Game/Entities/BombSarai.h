#ifndef _GAME_ENTITIES_BOMBSARAI_H
#define _GAME_ENTITIES_BOMBSARAI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TBsarai.h"
#include "Collinfo.h"

/**
 * --Header for Careening Dirigibug (BombSarai)--
 */

namespace Game {
namespace Bomb {
struct Obj;
} // namespace Bomb

namespace BombSarai {
struct FSM;

enum StateID {
	BOMBSARAI_NULL      = -1,
	BOMBSARAI_Dead      = 0,
	BOMBSARAI_Damage    = 1,
	BOMBSARAI_Wait      = 2,
	BOMBSARAI_BombWait  = 3,
	BOMBSARAI_Move      = 4,
	BOMBSARAI_BombMove  = 5,
	BOMBSARAI_Supply    = 6,
	BOMBSARAI_Release   = 7,
	BOMBSARAI_Fall      = 8,
	BOMBSARAI_TakeOff1  = 9,
	BOMBSARAI_TakeOff2  = 10,
	BOMBSARAI_Flick     = 11,
	BOMBSARAI_BombFlick = 12,
	BOMBSARAI_StateCount, // 13
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                               // _30
	virtual void onKill(CreatureKillArg* settings);                               // _34
	virtual void doDirectDraw(Graphics& gfx);                                     // _50
	virtual void inWaterCallback(WaterBox* wb) { }                                // _84 (weak)
	virtual void outWaterCallback() { }                                           // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);                           // _134
	virtual ~Obj() { }                                                            // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);                // _1C4
	virtual void doUpdate();                                                      // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                      // _1EC
	virtual bool bombCallBack(Creature* source, Vector3f& direction, f32 damage); // _294
	virtual void doFinishStoneState();                                            // _2A8
	virtual void startCarcassMotion();                                            // _2C4
	virtual void doStartWaitingBirthTypeDrop();                                   // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                                  // _2E4
	virtual void doStartMovie();                                                  // _2F0
	virtual void doEndMovie();                                                    // _2F4
	virtual void setFSM(FSM* fsm);                                                // _2F8
	virtual f32 getDownSmokeScale() { return 0.9f; }                              // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                            // _258 (weak)
	{
		return EnemyTypeID::EnemyID_BombSarai;
	}
	//////////////// VTABLE END

	f32 setHeightVelocity(bool);
	void setRandTarget();
	void addPitchRatio();
	void supplyBomb();
	void throwBomb(Vector3f&);
	Creature* getAttackablePikmin();
	StateID getNextStateOnHeight();
	void createEffect();
	void setupEffect();
	void createSupliEffect();
	void createBalloonEffect(int);
	void createDownEffect(f32);
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                    // _2BC
	f32 mPitchRatio;              // _2C0
	f32 mStateTimer;              // _2C4, recycled for each state
	f32 mBombCarryTimer;          // _2C8
	Vector3f mTargetPosition;     // _2CC
	Bomb::Obj* mHeldBomb;         // _2D8
	StateID mNextState;           // _2DC
	efx::TBsaraiSupli* mEfxSupli; // _2E0
	                              // _2E4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual void doAlloc();                            // _A8
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void loadModelData();                      // _C8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_BombSarai;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x20240030);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mFlightHeight(this, 'fp01', "飛行高さ", 90.0f, 0.0f, 150.0f)      // 'flight height'
		    , mTransitHeight(this, 'fp03', "状態遷移高さ", 50.0f, 0.0f, 300.0f) // 'state transition height'
		    , mPitchRate(this, 'fp10', "上下の揺れ速度", 2.5f, 0.0f, 10.0f)     // 'vertical swing speed'
		    , mPitchAmp(this, 'fp11', "上下の揺れ幅", 20.0f, 0.0f, 50.0f)       // 'width of vertical swing'
		    , mFreeRiseFactor(this, 'fp21', "上昇係数(0)", 1.5f, 0.0f, 5.0f)    // 'climbing factor (0)'
		    , mLadenRiseFactor(this, 'fp22', "上昇係数(5)", 1.0f, 0.0f, 5.0f)   // 'climbing factor (5)'
		    , mFreeFlickChance(this, 'fp31', "振払確率(1)", 0.1f, 0.0f, 1.0f)   // 'payoff probability (1)'
		    , mLadenFlickChance(this, 'fp32', "振払確率(5)", 0.7f, 0.0f, 1.0f)  // 'payoff probability (5)'
		    , mStruggleTime(this, 'fp40', "もがき時間", 3.0f, 0.0f, 10.0f)      // 'struggling time'
		{
		}

		Parm<f32> mFlightHeight;     // _804, fp01
		Parm<f32> mTransitHeight;    // _82C, fp03
		Parm<f32> mPitchRate;        // _854, fp10
		Parm<f32> mPitchAmp;         // _87C, fp11
		Parm<f32> mFreeRiseFactor;   // _8A4, fp21
		Parm<f32> mLadenRiseFactor;  // _8CC, fp22
		Parm<f32> mFreeFlickChance;  // _8F4, fp31
		Parm<f32> mLadenFlickChance; // _91C, fp32
		Parm<f32> mStruggleTime;     // _944, fp40
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
	BOMBSARAIANIM_Dead      = 0, // 'dead1'
	BOMBSARAIANIM_Fall      = 1, // 'fall1'
	BOMBSARAIANIM_Flick     = 2, // 'flick1'
	BOMBSARAIANIM_BombFlick = 3, // 'bflick1'
	BOMBSARAIANIM_Struggle  = 4, // 'mogaki1'
	BOMBSARAIANIM_Release   = 5, // 'release1'
	BOMBSARAIANIM_Run       = 6, // 'run1'
	BOMBSARAIANIM_BombRun   = 7, // 'run2'
	BOMBSARAIANIM_Supply    = 8, // 'supli1'
	BOMBSARAIANIM_TakeOff1  = 9,
	BOMBSARAIANIM_TakeOff2  = 10,
	BOMBSARAIANIM_Carry     = 11, // 'type5'
	BOMBSARAIANIM_Wait      = 12, // 'wait1'
	BOMBSARAIANIM_BombWait  = 13, // 'wait2'
	BOMBSARAIANIM_AnimCount,      // 14
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
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(int stateID, char* name)
	    : EnemyFSMState(stateID)
	{
		mName = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBombFlick : public State {
	inline StateBombFlick()
	    : State(BOMBSARAI_BombFlick, "bombflick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBombMove : public State {
	inline StateBombMove()
	    : State(BOMBSARAI_BombMove, "bombmove")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBombWait : public State {
	inline StateBombWait()
	    : State(BOMBSARAI_BombWait, "bombwait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDamage : public State {
	inline StateDamage()
	    : State(BOMBSARAI_Damage, "damage")
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
	    : State(BOMBSARAI_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFall : public State {
	inline StateFall()
	    : State(BOMBSARAI_Fall, "fall")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	inline StateFlick()
	    : State(BOMBSARAI_Flick, "flick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMove : public State {
	inline StateMove()
	    : State(BOMBSARAI_Move, "move")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateRelease : public State {
	inline StateRelease()
	    : State(BOMBSARAI_Release, "release")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSupply : public State {
	inline StateSupply()
	    : State(BOMBSARAI_Supply, "supply")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTakeOff1 : public State {
	inline StateTakeOff1()
	    : State(BOMBSARAI_TakeOff1, "takeoff1")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTakeOff2 : public State {
	inline StateTakeOff2()
	    : State(BOMBSARAI_TakeOff2, "takeoff2")
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
	    : State(BOMBSARAI_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace BombSarai
} // namespace Game

#endif
