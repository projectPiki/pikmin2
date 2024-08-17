#ifndef _GAME_ENTITIES_SARAI_H
#define _GAME_ENTITIES_SARAI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Swooping Snitchbug (Sarai)--
 * Derived Classes:
 * Demon = Bumbling Snitchbug
 */

namespace Game {
namespace Sarai {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                // _30
	virtual void doDirectDraw(Graphics& gfx);                      // _50
	virtual void inWaterCallback(WaterBox* wb) { }                 // _84 (weak)
	virtual void outWaterCallback() { }                            // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);            // _134
	virtual ~Obj() { }                                             // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doUpdate();                                       // _1CC
	virtual void doDebugDraw(Graphics& gfx);                       // _1EC
	virtual void initMouthSlots();                                 // _22C
	virtual void doStartStoneState();                              // _2A4
	virtual void doFinishStoneState();                             // _2A8
	virtual void startCarcassMotion();                             // _2C4
	virtual f32 getDownSmokeScale() { return 0.65f; }              // _2EC (weak)
	virtual void setFSM(FSM* fsm);                                 // _2F8
	virtual int getStickPikminNum();                               // _2FC
	virtual FakePiki* getAttackableTarget();                       // _300
	virtual int catchTarget();                                     // _304
	virtual void resetAttackableTimer(f32) { }                     // _308 (weak)
	virtual MouthSlots* getMouthSlots() { return &mMouthSlots; }   // _25C (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()             // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Sarai;
	}
	//////////////// VTABLE END

	f32 setHeightVelocity();
	void setRandTarget();
	void fallMeckGround();
	int getCatchTargetNum();
	int getNextStateOnHeight();
	void flickStickTarget();
	void createDownEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;              // _2BC
	f32 mGeneralTimer;      // _2C0
	MouthSlots mMouthSlots; // _2C4
	Vector3f mTargetPos;    // _2CC
	                        // _2D8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Sarai;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mNormalFlightHeight(this, 'fp01', "通常飛行高さ", 100.0f, 0.0f, 300.0f)   // 'normal flight height'
		    , mGrabFlightHeight(this, 'fp02', "掴み飛行高さ", 80.0f, 0.0f, 300.0f)      // 'grab flight height'
		    , mStateTransitionHeight(this, 'fp03', "状態遷移高さ", 50.0f, 0.0f, 300.0f) // 'state transition height'
		    , mNormalMovementSpeed(this, 'fp04', "通常移動速度", 100.0f, 0.0f, 300.0f)  // 'normal movement speed'
		    , mGrabMovementSpeed(this, 'fp05', "掴み移動速度", 75.0f, 0.0f, 300.0f)     // 'grab movement speed'
		    , mWaitTime(this, 'fp06', "ウェイト時間", 3.0f, 0.0f, 10.0f)                // 'wait time'
		    , mClimbingFactor0(this, 'fp11', "上昇係数(0)", 1.5f, 0.0f, 5.0f)           // 'climbing factor (0)'
		    , mClimbingFactor5(this, 'fp12', "上昇係数(5)", 1.0f, 0.0f, 5.0f)           // 'climbing factor (5)'
		    , mPayoffProbability1(this, 'fp21', "振払確率(1)", 0.1f, 0.0f, 1.0f)        // 'payoff probability (1)'
		    , mPayoffProbability5(this, 'fp22', "振払確率(5)", 0.7f, 0.0f, 1.0f)        // 'payoff probability (5)'
		    , mStrugglingTime(this, 'fp23', "もがき時間", 3.0f, 0.0f, 10.0f)            // 'struggling time'
		    , mHuntDescentFactor(this, 'fp31', "ハント下降係数", 0.3f, 0.0f, 1.0f)      // 'hunt descent factor'
		    , mPostHuntDecayRate(this, 'fp32', "ハント後減衰率", 0.95f, 0.0f, 1.0f)     // 'post-hunt decay rate'
		    , mFallMeckSpeed(this, 'fp41', "Fall Meck 速度", 200.0f, 0.0f, 1000.0f)     // 'Fall Meck speed'
		{
		}

		Parm<f32> mNormalFlightHeight;    // _804
		Parm<f32> mGrabFlightHeight;      // _82C
		Parm<f32> mStateTransitionHeight; // _854
		Parm<f32> mNormalMovementSpeed;   // _87C
		Parm<f32> mGrabMovementSpeed;     // _8A4
		Parm<f32> mWaitTime;              // _8CC
		Parm<f32> mClimbingFactor0;       // _8F4
		Parm<f32> mClimbingFactor5;       // _91C
		Parm<f32> mPayoffProbability1;    // _944
		Parm<f32> mPayoffProbability5;    // _96C
		Parm<f32> mStrugglingTime;        // _994
		Parm<f32> mHuntDescentFactor;     // _9BC
		Parm<f32> mPostHuntDecayRate;     // _9E4
		Parm<f32> mFallMeckSpeed;         // _A0C
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
	SARAIANIM_Wait     = 0, // 'wait1'
	SARAIANIM_Move     = 1, // 'move1'
	SARAIANIM_Attack   = 2, // 'attack1'
	SARAIANIM_CatchFly = 3, // 'waitact2'
	SARAIANIM_FallMeck = 4, // 'waitact1'
	SARAIANIM_Flick    = 5,
	SARAIANIM_Fall     = 6, // 'type1'
	SARAIANIM_Damage   = 7, // 'type2'
	SARAIANIM_TakeOff  = 8, // 'type3'
	SARAIANIM_Fail     = 9, // 'type4'
	SARAIANIM_Dead     = 10,
	SARAIANIM_Carry    = 11, // 'type5'
	SARAIANIM_AnimCount,     // 12
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
enum StateID {
	SARAI_NULL     = -1,
	SARAI_Dead     = 0,
	SARAI_Fall     = 1,
	SARAI_Damage   = 2,
	SARAI_TakeOff  = 3,
	SARAI_Flick    = 4,
	SARAI_Wait     = 5,
	SARAI_Move     = 6,
	SARAI_Attack   = 7,
	SARAI_Fail     = 8,
	SARAI_CatchFly = 9,
	SARAI_FallMeck = 10,
	SARAI_StateCount,
};

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
	    : State(SARAI_Attack, "attack")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateCatchFly : public State {
	inline StateCatchFly()
	    : State(SARAI_CatchFly, "catchfly")
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
	    : State(SARAI_Damage, "damage")
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
	    : State(SARAI_Dead, "dead")
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
	    : State(SARAI_Fail, "fail")
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
	    : State(SARAI_Fall, "fall")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFallMeck : public State {
	inline StateFallMeck()
	    : State(SARAI_FallMeck, "fallmeck")
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
	    : State(SARAI_Flick, "flick")
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
	    : State(SARAI_Move, "move")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTakeOff : public State {
	inline StateTakeOff()
	    : State(SARAI_TakeOff, "takeoff")
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
	    : State(SARAI_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Sarai
} // namespace Game

#endif
