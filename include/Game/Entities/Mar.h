#ifndef _GAME_ENTITIES_MAR_H
#define _GAME_ENTITIES_MAR_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TFusen.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"

/**
 * --Header for Puffy Blowhog (Mar)--
 */

namespace Game {
namespace Mar {

enum StateID {
	MAR_NULL        = -1,
	MAR_Dead        = 0,
	MAR_Wait        = 1,
	MAR_Move        = 2,
	MAR_Chase       = 3,
	MAR_ChaseInside = 4,
	MAR_Attack      = 5,
	MAR_Fall        = 6,
	MAR_Land        = 7,
	MAR_Ground      = 8,
	MAR_TakeOff     = 9,
	MAR_FlyFlick    = 10,
	MAR_GroundFlick = 11,
	MAR_StateCount, // 12
};

struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                // _30
	virtual void onKill(CreatureKillArg* settings);                // _34
	virtual void doDirectDraw(Graphics& gfx);                      // _50
	virtual void inWaterCallback(WaterBox* wb) {};                 // _84 (weak)
	virtual void outWaterCallback() {};                            // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);            // _134
	virtual ~Obj() { }                                             // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doUpdate();                                       // _1CC
	virtual void doDebugDraw(Graphics& gfx);                       // _1EC
	virtual void changeMaterial();                                 // _200
	virtual Vector3f getOffsetForMapCollision();                   // _224
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()             // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Mar;
	}
	virtual void getThrowupItemPosition(Vector3f* position); // _268
	virtual void getThrowupItemVelocity(Vector3f* velocity); // _26C
	virtual void throwupItemInDeathProcedure() {};           // _270 (weak)
	virtual void doStartStoneState();                        // _2A4
	virtual void doFinishStoneState();                       // _2A8
	virtual void doStartWaitingBirthTypeDrop();              // _2E0
	virtual void doFinishWaitingBirthTypeDrop();             // _2E4
	virtual f32 getDownSmokeScale() { return 1.15f; }        // _2EC (weak)
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
	void windTarget();
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
	f32 mGeneralTimer;                   // _2C0 - used for several states
	f32 mFallTimer;                      // _2C4
	f32 mShadowOffset;                   // _2C8
	f32 mShadowRadius;                   // _2CC
	Vector3f mTargetPosition;            // _2D0
	Matrixf* mEfxMatrix;                 // _2DC
	Vector3f mAttackStartPos;            // _2E0 - position of mouth where attack starts
	Vector3f mAttackDirection;           // _2EC
	Vector3f mAttackPosition;            // _2F8
	f32 mWindScaleTimer;                 // _304 - used to make wind attack grow over time
	u8 mIsWindAttackActive;              // _308
	f32 mPitchRatio;                     // _30C
	efx::TFusenDead* mEfxDead;           // _310
	efx::TFusenAirhit* mEfxAirhit;       // _314
	efx::TFusenAir* mEfxAir;             // _318
	efx::TFusenSui* mEfxSui;             // _31C
	Sys::MatLoopAnimator* mMatAnimators; // _320, array of two animators
	                                     // _324 = PelletView
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
		return EnemyTypeID::EnemyID_Mar;
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
		    , mFallingMinPikiNumber(this, 'ip01', "落下最低ピキ数", 10, 1, 50)         // 'falling minimum piki number'
		    , mVerticalSwingSpeed(this, 'fp05', "上下の揺れ速度", 2.5f, 0.0f, 10.0f)   // 'vertical swing speed'
		    , mVerticalSwingWidth(this, 'fp06', "上下の揺れ幅", 5.0f, 0.0f, 10.0f)     // 'vertical swing width'
		{
		}

		Parm<f32> mStandardFlightHeight; // _804
		Parm<f32> mRiseFactor;           // _82C
		Parm<f32> mAirWaitTime;          // _854
		Parm<f32> mGroundWaitTime;       // _87C
		Parm<f32> mShakeOffTime;         // _8A4
		Parm<int> mFallingMinPikiNumber; // _8CC
		Parm<f32> mVerticalSwingSpeed;   // _8F4
		Parm<f32> mVerticalSwingWidth;   // _91C
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
	MARANIM_DeadFly     = 0, // 'dead'
	MARANIM_DeadGround  = 1, // 'dead2'
	MARANIM_FlickFly    = 2, // 'damage'
	MARANIM_FlickGround = 3, // 'flick'
	MARANIM_WaitGround  = 4, // 'wait2'
	MARANIM_WaitFly     = 5, // 'move1'
	MARANIM_Land        = 6, // 'move2'
	MARANIM_TakeOff     = 7, // 'type1'
	MARANIM_Fall        = 8, // 'type2'
	MARANIM_Attack      = 9,
	MARANIM_AnimCount, // 10
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
	    : State(MAR_Attack, "attack")
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
	    : State(MAR_Chase, "chase")
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
	    : State(MAR_ChaseInside, "chaseinside")
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
	    : State(MAR_Dead, "dead")
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
	    : State(MAR_Fall, "fall")
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
	    : State(MAR_FlyFlick, "flyflick")
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
	    : State(MAR_Ground, "ground")
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
	    : State(MAR_GroundFlick, "groundflick")
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
	    : State(MAR_Land, "land")
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
	    : State(MAR_Move, "move")
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
	    : State(MAR_TakeOff, "takeoff")
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
	    : State(MAR_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Mar
} // namespace Game

#endif
