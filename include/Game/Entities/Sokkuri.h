#ifndef _GAME_ENTITIES_SOKKURI_H
#define _GAME_ENTITIES_SOKKURI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Skitter Leaf (Sokkuri)--
 */

namespace Game {
namespace Sokkuri {
struct FSM;

enum StateID {
	SOKKURI_NULL       = -1,
	SOKKURI_Dead       = 0,
	SOKKURI_Press      = 1,
	SOKKURI_Stay       = 2,
	SOKKURI_Appear     = 3,
	SOKKURI_Disappear  = 4,
	SOKKURI_Wait       = 5,
	SOKKURI_MoveGround = 6,
	SOKKURI_MoveWater  = 7,
	SOKKURI_Flick      = 8,
	SOKKURI_Count,
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mMaxTravelTime(this, 'fp01', "移動時間最大", 1.0f, 0.0f, 10.0f)                   // 'maximum travel time'
		    , mMinTravelTime(this, 'fp02', "移動時間最小", 0.0f, 0.0f, 10.0f)                   // 'minimum travel time'
		    , mMaxMoveAngle(this, 'fp03', "移動角度最大", 90.0f, 0.0f, 180.0f)                  // 'maximum moving angle'
		    , mMinMoveAngle(this, 'fp04', "移動角度最小", 45.0f, 0.0f, 180.0f)                  // 'minimum moving angle'
		    , mWaitingProbability(this, 'fp11', "待機確率", 0.25f, 0.0f, 1.0f)                  // 'waiting probability'
		    , mMaxWaitingTime(this, 'fp12', "待機時間最大", 2.0f, 0.0f, 10.0f)                  // 'maximum waiting time'
		    , mMinWaitingTime(this, 'fp13', "待機時間最小", 1.0f, 0.0f, 10.0f)                  // 'minimum waiting time'
		    , mUnderwaterMoveSpeed(this, 'fp21', "水中移動速度", 25.0f, 0.0f, 1000.0f)          // 'underwater movement speed'
		    , mUnderwaterRotationRate(this, 'fp22', "水中回転速度率", 0.05f, 0.0f, 1.0f)        // 'underwater rotation rate'
		    , mUnderwaterRotationMaxSpeed(this, 'fp23', "水中回転最大速度", 1.0f, 0.0f, 360.0f) // 'underwater rotation maximum speed'
		{
		}

		Parm<f32> mMaxTravelTime;              // _804
		Parm<f32> mMinTravelTime;              // _82C
		Parm<f32> mMaxMoveAngle;               // _854
		Parm<f32> mMinMoveAngle;               // _87C
		Parm<f32> mWaitingProbability;         // _8A4
		Parm<f32> mMaxWaitingTime;             // _8CC
		Parm<f32> mMinWaitingTime;             // _8F4
		Parm<f32> mUnderwaterMoveSpeed;        // _91C
		Parm<f32> mUnderwaterRotationRate;     // _944
		Parm<f32> mUnderwaterRotationMaxSpeed; // _96C
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
	virtual void doDirectDraw(Graphics& gfx);                                   // _50
	virtual bool isUnderground() { return mIsHiding; }                          // _D0 (weak)
	virtual void getShadowParam(ShadowParam& settings);                         // _134
	virtual ~Obj() { }                                                          // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);              // _1C4
	virtual void doUpdate();                                                    // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                    // _1EC
	virtual Vector3f getOffsetForMapCollision();                                // _224
	virtual void createEfxHamon();                                              // _250
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);   // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part); // _284
	virtual void doStartStoneState();                                           // _2A4
	virtual void doFinishStoneState();                                          // _2A8
	virtual void startCarcassMotion();                                          // _2C4
	virtual void wallCallback(const MoveInfo& info);                            // _2E8
	virtual void setFSM(FSM* fsm);                                              // _2F8
	virtual f32 getDownSmokeScale() { return 0.55f; }                           // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                          // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Sokkuri;
	}
	//////////////// VTABLE END

	bool isAppear();
	bool isDisappear();
	void setNextMoveInfo();
	void updateMoveState();
	void resetMoveVelocity();
	void setNextWaitInfo();
	void createDownEffect(f32, f32);
	void createBubbleEffect();

	Creature* getSearchedTarget();

	inline f32 getMinAngle() { return C_PROPERPARMS.mMinMoveAngle.mValue; }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                // _2BC
	bool mIsHiding;           // _2C0, unknown
	f32 mTimer;               // _2C4
	StateID mNextState;       // _2C8
	f32 mMoveVelocity;        // _2CC
	Vector3f mTargetPosition; // _2D0
	                          // _2DC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual void loadModelData();                      // _C8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Sokkuri;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x20240030);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, likely an array of Objs
};

enum AnimID {
	SOKKURIANIM_RunGround = 0, // 'run1'
	SOKKURIANIM_Appear    = 1, // 'appear1'
	SOKKURIANIM_Wait      = 2, // 'wait1'
	SOKKURIANIM_Hide      = 3, // 'hide1'
	SOKKURIANIM_Dead      = 4, // 'dead1'
	SOKKURIANIM_PressDead = 5, // 'pdead1'
	SOKKURIANIM_RunWater  = 6, // 'wrun1'
	SOKKURIANIM_Flick     = 7, // 'flick1'
	SOKKURIANIM_Carry     = 8, // 'type5'
	SOKKURIANIM_AnimCount,     // 9
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
	    : State(SOKKURI_Appear, "appear")
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
	    : State(SOKKURI_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDisappear : public State {
	inline StateDisappear()
	    : State(SOKKURI_Disappear, "disappear")
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
	    : State(SOKKURI_Flick, "flick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMoveGround : public State {
	inline StateMoveGround()
	    : State(SOKKURI_MoveGround, "moveground")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMoveWater : public State {
	inline StateMoveWater()
	    : State(SOKKURI_MoveWater, "movewater")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StatePress : public State {
	inline StatePress()
	    : State(SOKKURI_Press, "press")
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
	    : State(SOKKURI_Stay, "stay")
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
	    : State(SOKKURI_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Sokkuri
} // namespace Game

#endif
