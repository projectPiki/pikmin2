#ifndef _GAME_ENTITIES_FROG_H
#define _GAME_ENTITIES_FROG_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"

/**
 * --Header for Yellow Wollywog (Frog)--
 * Derived Classes:
 * MaroFrog	= Wollywog
 */

namespace efx {
struct TFrogPota;
} // namespace efx

namespace Game {
namespace Frog {
struct FSM;

enum StateID {
	FROG_NULL       = -1,
	FROG_Dead       = 0,
	FROG_Wait       = 1,
	FROG_Turn       = 2,
	FROG_Jump       = 3,
	FROG_JumpWait   = 4,
	FROG_Fall       = 5,
	FROG_Attack     = 6,
	FROG_Fail       = 7,
	FROG_TurnToHome = 8,
	FROG_GoHome     = 9,
	FROG_StateCount, // 10
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                                          // _30
	virtual void onKill(CreatureKillArg* settings);                                          // _34
	virtual void doDirectDraw(Graphics& gfx);                                                // _50
	virtual void inWaterCallback(WaterBox* wb) { }                                           // _84 (weak)
	virtual void outWaterCallback() { }                                                      // _88 (weak)
	virtual void collisionCallback(CollEvent& event);                                        // _EC
	virtual void getShadowParam(ShadowParam& settings);                                      // _134
	virtual ~Obj() { }                                                                       // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);                           // _1C4
	virtual void doUpdate();                                                                 // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                                 // _1EC
	virtual void doSimulationFlying(f32);                                                    // _1F8
	virtual void getCommonEffectPos(Vector3f&);                                              // _204
	virtual Vector3f getOffsetForMapCollision();                                             // _224
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_Frog; } // _258 (weak)
	virtual void doStartStoneState();                                                        // _2A4
	virtual void doFinishStoneState();                                                       // _2A8
	virtual void doStartEarthquakeFitState();                                                // _2B8
	virtual void doFinishEarthquakeFitState();                                               // _2BC
	virtual void startCarcassMotion();                                                       // _2C4
	virtual void doStartWaitingBirthTypeDrop();                                              // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                                             // _2E4
	virtual f32 getDownSmokeScale() { return 0.62f; }                                        // _2EC (weak)
	virtual void doStartMovie();                                                             // _2F0
	virtual void doEndMovie();                                                               // _2F4
	virtual void setFSM(FSM* fsm);                                                           // _2F8
	virtual Vector3f viewGetCollTreeOffset();                                                // _2FC
	virtual void attackNaviPosition() { }                                                    // _300 (weak)
	//////////////// VTABLE END

	void updateCaution();
	f32 getViewAngle();
	void startJumpAttack();
	void resetHomePosition();
	void pressOnGround();
	void createEffect();
	void setupEffect();
	void startJumpEffect();
	void finishJumpEffect();
	void createDownEffect(f32);
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                // _2BC
	f32 mAirTimer;            // _2C0
	f32 mAlertTimer;          // _2C4
	Vector3f mTargetPosition; // _2C8
	StateID mNextState;       // _2D4
	bool mIsInAir;            // _2D8
	bool mIsFalling;          // _2D9
	efx::TFrogPota* mEfxPota; // _2DC
	                          // _2E0 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Frog;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _48, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "FrogParms")
		    , mAirTime(this, 'fp01', "空中時間", 1.5f, 0.0f, 5.0f)            // 'air time'
		    , mJumpSpeed(this, 'fp02', "ジャンプ速度", 400.0f, 0.0f, 1000.0f) // 'jump speed'
		    , mJumpFailChance(this, 'fp03', "失敗確率", 0.2f, 0.0f, 1.0f)     // 'probability of failure'
		    , mFallSpeed(this, 'fp04', "落下初速度", 300.0f, 0.0f, 500.0f)    // 'initial fall velocity'
		{
		}

		Parm<f32> mAirTime;        // _804, fp01
		Parm<f32> mJumpSpeed;      // _82C, fp02
		Parm<f32> mJumpFailChance; // _854, fp03
		Parm<f32> mFallSpeed;      // _87C, fp04
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
	FROGANIM_Dead     = 0,
	FROGANIM_Wait1    = 1, // 'wait1'
	FROGANIM_Wait2    = 2, // 'waitact2'
	FROGANIM_Move     = 3, // 'move1'
	FROGANIM_Turn     = 4, // 'waitact1'
	FROGANIM_Jump     = 5, // 'type1'
	FROGANIM_JumpWait = 6, // 'wait2'
	FROGANIM_Fall     = 7, // 'type2'
	FROGANIM_Attack   = 8,
	FROGANIM_Fail     = 9,  // 'damage'
	FROGANIM_Carry    = 10, // 'type5'
	FROGANIM_AnimCount,     // 11
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

struct StateAttack : public State {
	inline StateAttack()
	    : State(FROG_Attack, "attack")
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
	    : State(FROG_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFail : public State {
	inline StateFail()
	    : State(FROG_Fail, "fail")
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
	    : State(FROG_Fall, "fall")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGoHome : public State {
	inline StateGoHome()
	    : State(FROG_GoHome, "gohome")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateJump : public State {
	inline StateJump()
	    : State(FROG_Jump, "jump")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateJumpWait : public State {
	inline StateJumpWait()
	    : State(FROG_JumpWait, "jumpwait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurn : public State {
	inline StateTurn()
	    : State(FROG_Turn, "turn")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurnToHome : public State {
	inline StateTurnToHome()
	    : State(FROG_TurnToHome, "turntohome")
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
	    : State(FROG_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Frog
} // namespace Game

#endif
