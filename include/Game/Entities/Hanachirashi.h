#ifndef _GAME_ENTITIES_HANACHIRASHI_H
#define _GAME_ENTITIES_HANACHIRASHI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TFusen.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"

/**
 * --Header for Withering Blowhog (Hanachirashi)--
 */

namespace Sys {
struct MatTexAnimation;
struct MatTevRegAnimation;
struct MatLoopAnimator;
} // namespace Sys

namespace Game {
namespace Hanachirashi {
struct FSM;

enum StateID {
	HANACHIRASHI_NULL        = -1,
	HANACHIRASHI_Dead        = 0,
	HANACHIRASHI_Wait        = 1,
	HANACHIRASHI_Move        = 2,
	HANACHIRASHI_Chase       = 3,
	HANACHIRASHI_ChaseInside = 4,
	HANACHIRASHI_Attack      = 5,
	HANACHIRASHI_Fall        = 6,
	HANACHIRASHI_Land        = 7,
	HANACHIRASHI_Ground      = 8,
	HANACHIRASHI_TakeOff     = 9,
	HANACHIRASHI_FlyFlick    = 10,
	HANACHIRASHI_GroundFlick = 11,
	HANACHIRASHI_Laugh       = 12,
	HANACHIRASHI_StateCount, // 13
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                // _30
	virtual void onKill(CreatureKillArg* settings);                // _34
	virtual void doDirectDraw(Graphics& gfx);                      // _50
	virtual void inWaterCallback(WaterBox* wb) { }                 // _84 (weak)
	virtual void outWaterCallback() { }                            // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);            // _134
	virtual ~Obj() { }                                             // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doUpdate();                                       // _1CC
	virtual void doDebugDraw(Graphics& gfx);                       // _1EC
	virtual void changeMaterial();                                 // _200
	virtual Vector3f getOffsetForMapCollision();                   // _224
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()             // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Hanachirashi;
	}
	virtual void getThrowupItemPosition(Vector3f* position); // _268
	virtual void getThrowupItemVelocity(Vector3f* velocity); // _26C
	virtual void throwupItemInDeathProcedure() { }           // _270 (weak)
	virtual void doStartStoneState();                        // _2A4
	virtual void doFinishStoneState();                       // _2A8
	virtual void doStartWaitingBirthTypeDrop();              // _2E0
	virtual void doFinishWaitingBirthTypeDrop();             // _2E4
	virtual f32 getDownSmokeScale() { return 0.7f; }         // _2EC (weak)
	virtual void doStartMovie();                             // _2F0
	virtual void doEndMovie();                               // _2F4
	virtual void setFSM(FSM* fsm);                           // _2F8
	//////////////// VTABLE END

	Vector3f getHeadJointPos();
	f32 setHeightVelocity();
	void setRandTarget();
	void resetShadowOffset();
	void setShadowOffsetMax();
	void addShadowOffset();
	void subShadowOffset();
	void resetShadowRadius();
	void subShadowRadius();
	void updateFallTimer();
	StateID getFlyingNextState();
	void addPitchRatio();
	Piki* getSearchedPikmin();
	bool isTargetLost();
	Creature* isAttackable();
	void updateEmit();
	Vector3f getAttackPosition();
	bool windTarget();
	void createEffect();
	void setupEffect();
	void startDeadEffect();
	void createSuckEffect();
	void startWindEffect();
	void finishWindEffect();
	void createDownEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                           // _2BC
	int mNextState;                      // _2C0
	f32 mAirWaitTime;                    // _2C4
	u32 _2C8;                            // _2C8, unknown
	f32 mFallTimer;                      // _2CC
	f32 mShadowOffset;                   // _2D0
	f32 mShadowRadius;                   // _2D4
	Vector3f mTargetPosition;            // _2D8
	Matrixf* mEfxMatrix;                 // _2E4
	Vector3f mEfxPosition;               // _2E8
	Vector3f mFaceDirection;             // _2F4
	Vector3f mAttackPosition;            // _300
	f32 mCurrentAttackRadius;            // _30C
	bool mIsWindAttackActive;            // _310
	f32 mPitchRatio;                     // _314
	efx::TFusenDead* mEfxDead;           // _318
	efx::TFusenhAirhit* mEfxAirhit;      // _31C
	efx::TFusenhAir* mEfxAir;            // _320
	efx::TFusenSui* mEfxSui;             // _324
	Sys::MatLoopAnimator* mMatAnimators; // _328, array of two animators
	                                     // _330 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual SysShape::Model* createModel();            // _B0
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Hanachirashi;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Sys::MatTexAnimation* mTexAnimation;       // _44
	Sys::MatTevRegAnimation* mTevRegAnimation; // _48
	Obj* mObj;                                 // _4C, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mStandardFlightHeight(this, 'fp01', "基準飛行高さ", 90.0f, 0.0f, 150.0f) // 'standard flight height'
		    , mRiseFactor(this, 'fp02', "上昇係数", 1.0f, 0.0f, 10.0f)                 // 'rise factor'
		    , mAirWaitTime(this, 'fp03', "空中ウェイト時間", 3.0f, 0.0f, 10.0f)        // 'air wait time'
		    , mGroundWaitTime(this, 'fp10', "地上ウェイト時間", 3.0f, 0.0f, 10.0f)     // 'ground wait time'
		    , mShakeOffTime(this, 'fp04', "振払落下時間", 3.0f, 0.0f, 10.0f)           // 'shake off time'
		    , mFallingMinimumPikiNum(this, 'ip01', "落下最低ピキ数", 10, 1, 50)        // 'falling minimum number piki'
		    , mVerticalSwingSpeed(this, 'fp05', "上下の揺れ速度", 2.5f, 0.0f, 10.0f)   // 'vertical swing speed'
		    , mVerticalSwingWidth(this, 'fp06', "上下の揺れ幅", 5.0f, 0.0f, 10.0f)     // 'vertical swing width'
		{
		}

		Parm<f32> mStandardFlightHeight;  // _804
		Parm<f32> mRiseFactor;            // _82C
		Parm<f32> mAirWaitTime;           // _854
		Parm<f32> mGroundWaitTime;        // _87C
		Parm<f32> mShakeOffTime;          // _8A4
		Parm<int> mFallingMinimumPikiNum; // _8CC
		Parm<f32> mVerticalSwingSpeed;    // _8F4
		Parm<f32> mVerticalSwingWidth;    // _91C
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
	HANACHIANIM_DeadFly     = 0, // 'dead'
	HANACHIANIM_DeadGround  = 1, // 'dead2'
	HANACHIANIM_FlickFly    = 2, // 'damage'
	HANACHIANIM_FlickGround = 3, // 'flick'
	HANACHIANIM_WaitGround  = 4, // 'wait2'
	HANACHIANIM_WaitFly     = 5, // 'move1'
	HANACHIANIM_Land        = 6, // 'move2'
	HANACHIANIM_TakeOff     = 7, // 'type1'
	HANACHIANIM_Fall        = 8, // 'type2'
	HANACHIANIM_Attack      = 9,
	HANACHIANIM_Laugh       = 10,
	HANACHIANIM_AnimCount, // 11
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
	    : State(HANACHIRASHI_Attack, "attack")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateChase : public State {
	inline StateChase()
	    : State(HANACHIRASHI_Chase, "chase")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateChaseInside : public State {
	inline StateChaseInside()
	    : State(HANACHIRASHI_ChaseInside, "chaseinside")
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
	    : State(HANACHIRASHI_Dead, "dead")
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
	    : State(HANACHIRASHI_Fall, "fall")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlyFlick : public State {
	inline StateFlyFlick()
	    : State(HANACHIRASHI_FlyFlick, "flyflick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGround : public State {
	inline StateGround()
	    : State(HANACHIRASHI_Ground, "ground")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGroundFlick : public State {
	inline StateGroundFlick()
	    : State(HANACHIRASHI_GroundFlick, "groundflick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLand : public State {
	inline StateLand()
	    : State(HANACHIRASHI_Land, "land")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLaugh : public State {
	inline StateLaugh()
	    : State(HANACHIRASHI_Laugh, "laugh")
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
	    : State(HANACHIRASHI_Move, "move")
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
	    : State(HANACHIRASHI_TakeOff, "takeoff")
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
	    : State(HANACHIRASHI_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Hanachirashi
} // namespace Game

#endif
