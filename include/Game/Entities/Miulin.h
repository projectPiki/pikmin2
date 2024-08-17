#ifndef _GAME_ENTITIES_MIULIN_H
#define _GAME_ENTITIES_MIULIN_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "SysShape/Joint.h"

/**
 * --Header for Mamuta (Miulin)--
 */

namespace Game {
namespace Miulin {
/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	MIULIN_NULL        = -1,
	MIULIN_Wait        = 0,
	MIULIN_Walk        = 1,
	MIULIN_AttackStart = 2,
	MIULIN_Attacking   = 3,
	MIULIN_AttackEnd   = 4,
	MIULIN_Turn        = 5,
	MIULIN_Flick       = 6,
	MIULIN_Dead        = 7,
	MIULIN_StateCount,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttackEnd : public State {
	StateAttackEnd(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttacking : public State {
	StateAttacking(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	bool mIsTransitioning; // _10
};

struct StateAttackStart : public State {
	StateAttackStart(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	StateFlick(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurn : public State {
	StateTurn(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalk : public State {
	StateWalk(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mReturnTimer; // _10
	int mTurnTimer;   // _14
};
/////////////////////////////////////////////////////////////////

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                                            // _30
	virtual void doSimulation(f32);                                                            // _4C
	virtual void doDirectDraw(Graphics& gfx);                                                  // _50
	virtual void getShadowParam(ShadowParam& settings);                                        // _134
	virtual void applyImpulse(Vector3f&, Vector3f&) { }                                        // _18C (weak)
	virtual Vector3f getGoalPos() { return mGoalPosition; }                                    // _198 (weak)
	virtual ~Obj() { }                                                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                                        // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*) { }                                 // _1C4 (weak)
	virtual void doUpdate();                                                                   // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                                   // _1EC
	virtual void setParameters();                                                              // _228
	virtual void initWalkSmokeEffect();                                                        // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();                                     // _234
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_Miulin; } // _258 (weak)
	virtual void startCarcassMotion();                                                         // _2C4
	virtual void wallCallback(const MoveInfo& info);                                           // _2E8
	virtual f32 getDownSmokeScale() { return 0.85f; }                                          // _2EC (weak)
	virtual void setFSM(FSM* fsm)
	{
		mFsm = fsm;
		mFsm->init(this);
		mCurrentLifecycleState = nullptr;
	} // _2F8 (weak)
	//////////////// VTABLE END

	bool isAttackStart();
	bool isFindTarget();
	bool isOutOfTerritory();
	bool isProhibitedSearch();
	bool isStartWalk();
	void setReturnState();
	void walkFunc();
	f32 turnFunc(f32);
	bool isReachToGoal(f32 distanceTo);
	void setNextGoal();
	bool nextTargetTurnCheck();
	bool isNowCaution();
	void landEffect();
	void attackEffect(Vector3f&);

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Vector3f mGoalPosition;             // _2BC
	StateID mNextState;                 // _2C8
	SysShape::Joint* mKoshiJoint;       // _2CC
	int mNoSearchCounter;               // _2D0
	Vector3f mLastPositionCheck;        // _2D4
	int mLastPositionCheckTimer;        // _2E0
	bool mIsSearching;                  // _2E4
	f32 mAlertTimer;                    // _2E8
	WalkSmokeEffect::Mgr mWalkSmokeMgr; // _2EC
	FSM* mFsm;                          // _2F4
	                                    // _2F8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Miulin;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &mObj[index];
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mReturnTime(this, 'ip01', "リターンカウンタ", 100, 0, 1000)                // 'return counter'
		    , mContinuousPressAngle(this, 'fp03', "連続プレス角度", 20.0f, 0.0f, 180.0f) // 'continuous press angle'
		    , mDashSpeedMultiplier(this, 'fp04', "ダッシュ速度倍率", 2.0f, 0.0f, 10.0f)  // 'dash speed multiplier'
		    , mDashAnimationScale(this, 'fp05', "ダッシュアニメ倍率", 2.0f, 0.0f, 10.0f) // 'dash animation scale'
		    , mMaxTurnAngle(this, 'fp06', "旋回終了角度", 10.0f, 0.0f, 180.0f)           // 'turning end angle'
		    , mDashableAngle(this, 'fp07', "ダッシュ可能\角度", 30.0f, 0.0f, 180.0f)     // 'possible dash angle'
		    , mMinAttackRange(this, 'fp08', "攻撃範囲最小", 25.0f, 0.0f, 100.0f)         // 'minimum attack range'
		{
		}

		Parm<int> mReturnTime;           // _804
		Parm<f32> mContinuousPressAngle; // _82C
		Parm<f32> mDashSpeedMultiplier;  // _854
		Parm<f32> mDashAnimationScale;   // _87C
		Parm<f32> mMaxTurnAngle;         // _8A4
		Parm<f32> mDashableAngle;        // _8CC
		Parm<f32> mMinAttackRange;       // _8F4
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
	MIULINANIM_AttackStart = 0, // 'attack0'
	MIULINANIM_Attacking   = 1, // 'attack1'
	MIULINANIM_AttackEnd   = 2, // 'attack4'
	MIULINANIM_Dead        = 3,
	MIULINANIM_Flick       = 4,
	MIULINANIM_Move        = 5,
	MIULINANIM_Carry       = 6, // 'type5'
	MIULINANIM_Wait        = 7,
	MIULINANIM_Turn        = 8, // 'waitact'
	MIULINANIM_AnimCount,       // 9
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

} // namespace Miulin
} // namespace Game

#endif
