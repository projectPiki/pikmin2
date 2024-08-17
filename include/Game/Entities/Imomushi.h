#ifndef _GAME_ENTITIES_IMOMUSHI_H
#define _GAME_ENTITIES_IMOMUSHI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TImo.h"
#include "Collinfo.h"

/**
 * --Header for Ravenous Whiskerpillar (Imomushi)--
 */

namespace Game {
namespace Imomushi {
struct FSM;

enum StateID {
	IMOMUSHI_NULL        = -1,
	IMOMUSHI_Dead        = 0,
	IMOMUSHI_Wait        = 1,
	IMOMUSHI_FallDive    = 2,
	IMOMUSHI_FallMove    = 3,
	IMOMUSHI_Stay        = 4,
	IMOMUSHI_Appear      = 5,
	IMOMUSHI_Dive        = 6,
	IMOMUSHI_Move        = 7,
	IMOMUSHI_GoHome      = 8,
	IMOMUSHI_Attack      = 9,
	IMOMUSHI_Climb       = 10,
	IMOMUSHI_ZukanStay   = 11,
	IMOMUSHI_ZukanAppear = 12,
	IMOMUSHI_ZukanMove   = 13,
	IMOMUSHI_Count,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                      // _30
	virtual void onKill(CreatureKillArg* settings);                      // _34
	virtual void doDirectDraw(Graphics& gfx);                            // _50
	virtual bool isUnderground() { return mIsUnderground; }              // _D0 (weak)
	virtual void getShadowParam(ShadowParam& settings);                  // _134
	virtual ~Obj() { }                                                   // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);       // _1C4
	virtual void doUpdate();                                             // _1CC
	virtual void doAnimationStick();                                     // _1E4
	virtual void doDebugDraw(Graphics& gfx);                             // _1EC
	virtual bool dropCallBack(Creature* source);                         // _288
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor); // _28C
	virtual void doStartStoneState();                                    // _2A4
	virtual void doFinishStoneState();                                   // _2A8
	virtual void doStartEarthquakeState(f32 yVelocityScale);             // _2B0
	virtual void doFinishEarthquakeState();                              // _2B4
	virtual void doStartEarthquakeFitState();                            // _2B8
	virtual void doFinishEarthquakeFitState();                           // _2BC
	virtual void startCarcassMotion();                                   // _2C4
	virtual void doStartMovie();                                         // _2F0
	virtual void doEndMovie();                                           // _2F4
	virtual void setFSM(FSM* fsm);                                       // _2F8
	virtual f32 getDownSmokeScale() { return 0.42f; }                    // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                   // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Imomushi;
	}
	//////////////// VTABLE END

	void lifeIncrement();
	void resetZukanStateTimer();
	void resetStickDiff();
	void setStickDiff(f32, f32);
	Creature* getRandFruitsPlant();
	void startClimbPlant(CollPart*);
	void moveStickTube();
	void moveStickSphere();
	void eatTsuyukusa();
	bool isAttackable();
	bool isStickToFall();
	void setZukanTargetPosition();
	bool isInZukanTargetArea();
	void createEffect();
	void setupEffect();
	void createAppearEffect();
	void createDisAppearEffect();
	void startMoveTraceEffect();
	void finishMoveTraceEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                     // _2BC
	bool mIsUnderground;           // _2C0
	bool mStickDiffEnabled;        // _2C1
	bool mIsStickDiffRunning;      // _2C2 - set to false when StickDiff first starts, true after running once
	StateID mNextState;            // _2C4
	f32 mStateTimer;               // _2C8
	Vector3f mClimbAxis;           // _2CC, axis vector of tube currently climbing
	Vector3f mClimbDirection;      // _2D8, which way the enemy faces
	Vector3f mClimbRotation;       // _2E4
	Vector3f mZukanTargetPosition; // _2F0
	f32 mClimbStartMoveRatio;      // _2FC
	f32 mClimbingXPos;             // _300
	f32 mClimbingZPos;             // _304
	efx::TImoEat* mEfxEat;         // _308
	efx::TImoSmoke* mEfxSmoke;     // _30C
	                               // _310 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Imomushi;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, likely an array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mPlantClimbingSpeed(this, 'fp01', "草登り速度", 2.0f, 0.0f, 10.0f)        // 'plant climbing speed'
		    , mSeedCirculationSpeed(this, 'fp02', "種周回速度", 0.3f, 0.0f, 10.0f)      // 'seed circulation speed'
		    , mEatingTime(this, 'fp11', "実食い時間", 10.0f, 0.0f, 100.0f)              // 'eating time'
		    , mTranslationCorrection(this, 'fp90', "Translate補正", 0.75f, 0.0f, 10.0f) // 'translation correction'
		    , mRotationCorrection(this, 'fp91', "Rotate補正", 0.05f, 0.0f, 1.0f)        // 'rotation correction'
		{
		}

		Parm<f32> mPlantClimbingSpeed;    // _804
		Parm<f32> mSeedCirculationSpeed;  // _82C
		Parm<f32> mEatingTime;            // _854
		Parm<f32> mTranslationCorrection; // _87C
		Parm<f32> mRotationCorrection;    // _8A4
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
	IMOMUSHIANIM_Dead     = 0,
	IMOMUSHIANIM_Appear   = 1, // 'set'
	IMOMUSHIANIM_Dive     = 2,
	IMOMUSHIANIM_Move     = 3, // 'move1'
	IMOMUSHIANIM_Climb    = 4, // 'move2'
	IMOMUSHIANIM_FallMove = 5, // 'fall1'
	IMOMUSHIANIM_FallDive = 6, // 'fall2'
	IMOMUSHIANIM_Eat      = 7,
	IMOMUSHIANIM_Carry    = 8,
	IMOMUSHIANIM_AnimCount, // 9
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                // _14

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
	inline State(u16 stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		mName = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear : public State {
	inline StateAppear()
	    : State(IMOMUSHI_Appear, "appear")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	inline StateAttack()
	    : State(IMOMUSHI_Attack, "attack")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateClimb : public State {
	inline StateClimb()
	    : State(IMOMUSHI_Climb, "climb")
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
	    : State(IMOMUSHI_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDive : public State {
	inline StateDive()
	    : State(IMOMUSHI_Dive, "dive")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFallDive : public State {
	inline StateFallDive()
	    : State(IMOMUSHI_FallDive, "falldive")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFallMove : public State {
	inline StateFallMove()
	    : State(IMOMUSHI_FallMove, "fallmove")
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
	    : State(IMOMUSHI_GoHome, "gohome")
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
	    : State(IMOMUSHI_Move, "move")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStay : public State {
	inline StateStay()
	    : State(IMOMUSHI_Stay, "stay")
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
	    : State(IMOMUSHI_Wait, "wait")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateZukanAppear : public State {
	inline StateZukanAppear()
	    : State(IMOMUSHI_ZukanAppear, "zukanappear")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateZukanMove : public State {
	inline StateZukanMove()
	    : State(IMOMUSHI_ZukanMove, "zukanmove")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateZukanStay : public State {
	inline StateZukanStay()
	    : State(IMOMUSHI_ZukanStay, "zukanstay")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Imomushi
} // namespace Game

#endif
