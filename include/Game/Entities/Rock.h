#ifndef _GAME_ENTITIES_ROCK_H
#define _GAME_ENTITIES_ROCK_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/gameGenerator.h"
#include "efx/TRock.h"

/**
 * --Header for Boulders (Rock)--
 * For both falling and rolling boulders.
 */

namespace Game {
namespace Rock {
struct FSM;

struct RockInitialParams : public EnemyInitialParamBase {
	inline RockInitialParams(f32 speed, f32 offset, f32 rate)
	    : mFallSpeed(speed)
	    , mFallOffset(offset)
	    , mScaleUpRate(rate)
	{
	}

	f32 mFallSpeed;   // _00
	f32 mFallOffset;  // _04
	f32 mScaleUpRate; // _08
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mSearchRumbleSpeed(this, 'fp01', "サーチゴロゴロ速度", 150.0f, 0.0f, 1000.0f) // 'search rumble speed'		
			{
				
			}

		Parm<f32> mSearchRumbleSpeed; // _804
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

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                             // _30
	virtual void onKill(CreatureKillArg* settings);                             // _34
	virtual void doDirectDraw(Graphics& gfx);                                   // _50
	virtual void inWaterCallback(WaterBox* wb);                                 // _84
	virtual void outWaterCallback();                                            // _88
	virtual bool isLivingThing() { return false; }                              // _D4 (weak)
	virtual void collisionCallback(CollEvent& event);                           // _EC
	virtual void getShadowParam(ShadowParam& settings);                         // _134
	virtual bool needShadow();                                                  // _138
	virtual bool ignoreAtari(Creature* toIgnore);                               // _190
	virtual ~Obj() { }                                                          // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                         // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase* params);              // _1C4
	virtual void doUpdate();                                                    // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                    // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return mRockType; }    // _258 (weak)
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part); // _284
	virtual void wallCallback(const MoveInfo& info);                            // _2E8
	virtual void doStartMovie();                                                // _2F0
	virtual void doEndMovie();                                                  // _2F4
	virtual void setFSM(FSM* fsm);                                              // _2F8
	//////////////// VTABLE END

	bool fallRockScaleUp();
	bool moveRockScaleUp();
	void initMoveVelocity();
	void updateMoveVelocity();
	void createEffect();
	void setupEffect();
	void startFallEffect();
	void finishFallEffect();
	void startRollingGroundEffect();
	void finishRollingGroundEffect();
	void startRollingWaterEffect();
	void finishRollingWaterEffect();
	void updateWaterEffectPosition();
	void createRockDeadEffect();
	void effectDrawOn();
	void effectDrawOff();

	inline f32 getMoveSpeed() { return C_PROPERPARMS.mSearchRumbleSpeed(); }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                           // _2BC
	EnemyBase* mSourceEnemy;             // _2C0
	bool mIsHoming;                      // _2C4
	f32 mTimer;                          // _2C8
	f32 mFallSpeed;                      // _2CC
	f32 mFallOffset;                     // _2D0, amount to offset Y by when appearing
	f32 mScaleUpRate;                    // _2D4, amount to scale up every frame for falling rocks
	efx::TRockRun* mEfxRun;              // _2D8
	efx::TRockGrRun* mEfxGroundRun;      // _2DC
	efx::TRockWRun* mEfxWaterRun;        // _2E0
	EnemyTypeID::EEnemyTypeID mRockType; // _2E4, 19/EnemyID_Rock or 74/EnemyID_Stone
	                                     // _2E8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Rock;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Generator : public EnemyGeneratorBase {
	Generator();

	virtual ~Generator() { }        // _08 (weak)
	virtual void doWrite(Stream&);  // _10
	virtual void doRead(Stream&);   // _14
	virtual u32 getLatestVersion(); // _18
	virtual void* getInitialParam() // _20 (weak)
	{
		return &mSpeed;
	}

	void doReadLatestVersion(Stream&);
	void doReadOldVersion(Stream&);

	// _00 		= VTBL
	// _00-_24  = EnemyGeneratorBase
	f32 mSpeed;  // _24
	f32 mOffset; // _28
	f32 mScale;  // _2C
};

enum AnimID {
	ROCKANIM_Dead = 0,
	ROCKANIM_Run  = 1,
	ROCKANIM_AnimCount, // 2
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
	ROCK_Wait     = 0,
	ROCK_Appear   = 1,
	ROCK_DropWait = 2,
	ROCK_Fall     = 3,
	ROCK_Move     = 4,
	ROCK_Dead     = 5,
	ROCK_Count,
};

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
	    : State(ROCK_Appear, "appear")
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
	    : State(ROCK_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDropWait : public State {
	inline StateDropWait()
	    : State(ROCK_DropWait, "dropwait")
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
	    : State(ROCK_Fall, "fall")
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
	    : State(ROCK_Move, "move")
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
	    : State(ROCK_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Rock
} // namespace Game

#endif
