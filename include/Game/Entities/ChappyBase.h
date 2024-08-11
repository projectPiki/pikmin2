#ifndef _GAME_ENTITIES_CHAPPYBASE_H
#define _GAME_ENTITIES_CHAPPYBASE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "Collinfo.h"

/**
 * --Header for Bulborb Base Class--
 * Derived classes:
 * BlueChappy   = Orange Bulborb
 * Chappy       = Red Bulborb
 * FireChappy   = Fiery Bulblax
 * Hana         = Creeping Chrysanthemum
 * YellowChappy = Hairy Bulborb
 */

namespace efx {
// TODO: make this header
struct THanachoN;
} // namespace efx

namespace Game {
namespace ChappyBase {
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE - Note: this order is needed for correct weak function ordering
	virtual void onInit(CreatureInitArg* settings);                // _30
	virtual void doDirectDraw(Graphics& gfx);                      // _50
	virtual void collisionCallback(CollEvent& event);              // _EC
	virtual void getShadowParam(ShadowParam& settings);            // _134
	virtual ~Obj() { }                                             // _1BC (weak)
	virtual void birth(Vector3f&, f32);                            // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doUpdate();                                       // _1CC
	virtual void doDebugDraw(Graphics& gfx);                       // _1EC
	virtual void changeMaterial() = 0;                             // _200
	virtual Vector3f getOffsetForMapCollision();                   // _224
	virtual void initMouthSlots();                                 // _22C
	virtual void initWalkSmokeEffect();                            // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();         // _234
	virtual void setCollEvent(CollEvent&);                         // _240
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() = 0;        // _258
	virtual MouthSlots* getMouthSlots()                            // _25C (weak)
	{
		return &mMouthSlots;
	}
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual void doStartStoneState();                                          // _2A4
	virtual void doFinishStoneState();                                         // _2A8
	virtual void startCarcassMotion();                                         // _2C4
	virtual void setFSM(FSM* fsm)                                              // _2F8 (weak)
	{
		mFsm = fsm;
		mFsm->init(this);
		mCurrentLifecycleState = nullptr;
	}
	virtual bool isWakeup();                  // _2FC
	virtual void setAnimationSpeed(f32 speed) // _300 (weak)
	{
		EnemyBase::setAnimSpeed(speed);
	}
	virtual void flickAttackFail();                  // _304
	virtual void flickStatePikmin();                 // _308
	virtual void flickAttackBomb();                  // _30C
	virtual int eatAttackPikmin();                   // _310
	virtual void resetUnderGround() { }              // _314 (weak)
	virtual void setUnderGround() { }                // _318 (weak)
	virtual void createEffect();                     // _31C
	virtual void setupEffect();                      // _320
	virtual void startSleepEffect();                 // _324
	virtual void finishSleepEffect();                // _328
	virtual void createFlickEffect() { }             // _32C (weak)
	virtual void createSmokeEffect() { }             // _330 (weak)
	virtual f32 getDownSmokeScale() { return 0.9f; } // _2EC (weak)
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                          // _2BC
	MouthSlots mMouthSlots;             // _2C0
	SysShape::Joint* mShadowJoint;      // _2C8
	f32 mAlertTimer;                    // _2CC
	WalkSmokeEffect::Mgr mWalkSmokeMgr; // _2D0
	efx::TChaseMtx* mEfxHanacho;        // _2D8, either efx::THanachoN or efx::THanachoY
	f32 mViewAngle;                     // _2DC
	f32 mSearchAngle;                   // _2E0
	                                    // _2E4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr() { }                                 // _58 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Chappy;
	}
	virtual SysShape::Model* createModel();   // _B0
	virtual void loadModelData();             // _C8
	virtual void loadAnimData();              // _CC
	virtual ResTIMG* getChangeTexture0() = 0; // _E0
	virtual ResTIMG* getChangeTexture1() = 0; // _E4

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "ChappyParms")
		    , mFootRange(this, 'fp01', "足元範囲", 50.0f, 0.0f, 100.0f)             // 'foot range'
		    , mPoisonDamage(this, 'fp02', "白ピクミン毒", 300.0f, 0.0f, 1000.0f)    // 'white pikmin poison'
		    , mBulborbWakeRadius(this, 'fp03', "目覚め距離", 400.0f, 0.0f, 1000.0f) // 'awake distance'
		{
		}

		Parm<f32> mFootRange;         // _808, fp01
		Parm<f32> mPoisonDamage;      // _830, fp02
		Parm<f32> mBulborbWakeRadius; // _858, fp03
	};

	Parms() { _7F8.clear(); }

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	BitFlag<u16> _7F8;        // _7F8
	ProperParms mProperParms; // _7FC
};

enum AnimID {
	CHAPPYANIM_Attack   = 0,
	CHAPPYANIM_Dead     = 1,
	CHAPPYANIM_Flick    = 2,
	CHAPPYANIM_Move1    = 3,
	CHAPPYANIM_Sleep    = 4, // 'type1'
	CHAPPYANIM_Carry    = 5, // 'type5'
	CHAPPYANIM_Wait2    = 6,
	CHAPPYANIM_WaitAct1 = 7,
	CHAPPYANIM_WaitAct2 = 8,
	CHAPPYANIM_AnimCount, // 9
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
	CHAPPY_Turn       = 0,
	CHAPPY_Dead       = 1,
	CHAPPY_Flick      = 2,
	CHAPPY_Walk       = 3,
	CHAPPY_Attack     = 4,
	CHAPPY_TurnToHome = 5,
	CHAPPY_GoHome     = 6,
	CHAPPY_Sleep      = 7,
	CHAPPY_Count,
};

struct State : public EnemyFSMState {
	inline State(int id)
	    : EnemyFSMState(id)
	{
	}
	inline State(int id, const char* name)
	    : EnemyFSMState(id, name)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateCautionBase : public State {
	StateCautionBase(int);

	void cautionProc(EnemyBase*);

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurnBase : public StateCautionBase {
	StateTurnBase(int);

	bool turnToTarget(EnemyBase*, Vector3f&);

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public StateCautionBase {
	StateAttack(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10
	virtual void doDirectDraw(EnemyBase*, Graphics&);        // _20

	void transitState(EnemyBase*);

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public StateCautionBase {
	StateDead(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public StateCautionBase {
	StateFlick(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGoHome : public StateCautionBase {
	StateGoHome(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mNextState; // _10
};

struct SleepArg : public StateArg {
	bool mDoSkipSleepStart; // _00
};

struct StateSleep : public State {
	StateSleep(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	void setNextState(EnemyBase*, int);

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mNextState; // _10, next state?
};

struct StateTurn : public StateTurnBase {
	StateTurn(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mNextState; // _10
};

struct StateTurnToHome : public StateTurnBase {
	StateTurnToHome(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mNextState; // _10
};

struct StateWalk : public StateCautionBase {
	StateWalk(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mNextState; // _10
};
/////////////////////////////////////////////////////////////////

} // namespace ChappyBase
} // namespace Game

#endif
