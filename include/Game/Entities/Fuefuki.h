#ifndef _GAME_ENTITIES_FUEFUKI_H
#define _GAME_ENTITIES_FUEFUKI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TFuebugOnpa.h"
#include "efx/TCursor.h"

/**
 * --Header for Antenna Beetle (Fuefuki)--
 */

namespace Game {
namespace Fuefuki {
struct FSM;

enum StateID {
	FUEFUKI_NULL     = -1,
	FUEFUKI_Dead     = 0,
	FUEFUKI_Stay     = 1,
	FUEFUKI_Land     = 2,
	FUEFUKI_Jump     = 3,
	FUEFUKI_Wait     = 4,
	FUEFUKI_Turn     = 5,
	FUEFUKI_Walk     = 6,
	FUEFUKI_Whisle   = 7, // dev spelling
	FUEFUKI_Struggle = 8,
	FUEFUKI_StateCount,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                                             // _30
	virtual void onKill(CreatureKillArg* settings);                                             // _34
	virtual void doDirectDraw(Graphics& gfx);                                                   // _50
	virtual void inWaterCallback(WaterBox* wb) { }                                              // _84 (weak)
	virtual void outWaterCallback() { }                                                         // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);                                         // _134
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_Fuefuki; } // _258 (weak)
	virtual Footmarks* getFootmarks() { return mFootmarks; }                                    // _154 (weak)
	virtual ~Obj() { }                                                                          // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                                         // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase* params);                              // _1C4
	virtual void doUpdate();                                                                    // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                                    // _1EC
	virtual Vector3f getOffsetForMapCollision();                                                // _224
	virtual void createEfxHamon();                                                              // _250
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);                   // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part);                 // _284
	virtual void doStartStoneState();                                                           // _2A4
	virtual void doFinishStoneState();                                                          // _2A8
	virtual void doStartEarthquakeFitState();                                                   // _2B8
	virtual void doFinishEarthquakeFitState();                                                  // _2BC
	virtual void startCarcassMotion();                                                          // _2C4
	virtual void doStartWaitingBirthTypeDrop();                                                 // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                                                // _2E4
	virtual void doStartMovie();                                                                // _2F0
	virtual void doEndMovie();                                                                  // _2F4
	virtual void setFSM(FSM* fsm);                                                              // _2F8
	//////////////// VTABLE END

	void resetAppearTimer();
	void resetWhisleTimer(bool);
	bool isWhisleTimeMax();
	void startWhisle();
	void updateWhisle();
	void finishWhisle();
	void setTargetPosition(bool);
	bool isJumpAway();
	bool isArriveTarget();
	void createFootmarks();
	void updateFootmarks();
	void createEffect();
	void startWhisleEffect();
	void updateWhisleEffect(f32);
	void finishWhisleEffect();
	void createDownEffect(f32);
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                  // _2BC
	bool mCanStruggle;          // _2C0, can be knocked over
	f32 mAppearTimer;           // _2C4
	f32 mStateTimer;            // _2C8, timer for current state
	f32 mWhistleTimer;          // _2CC
	f32 mWhistleRadiusModifier; // _2D0, ranges from 0.0f to 1.0f as whistle grows
	f32 mSquadTimer;            // _2D4, timer to keep beetle turning while it has a squad
	StateID mNextState;         // _2D8
	Vector3f mTargetPosition;   // _2DC
	Footmarks* mFootmarks;      // _2E8
	efx::TCursor* mEfxWhistle;  // _2EC
	efx::TFuebugOnpa* mEfxOnpa; // _2F0
	                            // _2F4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Fuefuki;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mMaxGroundTime(this, 'fp01', "出現時間(Max)", 30.0f, 0.0f, 100.0f)                   // 'appearance time (max)'
		    , mMinGroundTime(this, 'fp02', "出現時間(Min)", 20.0f, 0.0f, 100.0f)                   // 'appearance time (min)'
		    , mAirborneTime(this, 'fp03', "出現間隔", 3.0f, 0.0f, 100.0f)                          // 'appearance interval'
		    , mMinWhistleTime(this, 'fp11', "フエ間隔(1)", 0.0f, 0.0f, 5.0f)                       // 'hue interval (1)
		    , mMaxWhistleTimeNoSquad(this, 'fp12', "フエ間隔(2～:隊列ナシ)", 5.0f, 0.0f, 10.0f)    // 'hue interval (2 ~: no formation)'
		    , mMaxWhistleTimeWithSquad(this, 'fp13', "フエ間隔(2～:隊列アリ)", 10.0f, 0.0f, 20.0f) // 'hue interval (2 ~: platoon ants)'
		    , mStruggleTime(this, 'fp21', "もがき時間", 3.0f, 0.0f, 10.0f)                         // 'struggling time'
		    , mJumpTime(this, 'fp22', "逃げジャンプ時間", 0.0f, 0.0f, 5.0f)                        // 'escape jump time'
		    , mNormalLandingChance(this, 'fp31', "通常出現率", 0.5f, 0.0f, 1.0f)                   // 'normal appearance rate'
		{
		}

		Parm<f32> mMaxGroundTime;           // _804, fp01
		Parm<f32> mMinGroundTime;           // _82C, fp02
		Parm<f32> mAirborneTime;            // _854, fp03
		Parm<f32> mMinWhistleTime;          // _87C
		Parm<f32> mMaxWhistleTimeNoSquad;   // _8A4
		Parm<f32> mMaxWhistleTimeWithSquad; // _8CC
		Parm<f32> mStruggleTime;            // _8F4, fp21
		Parm<f32> mJumpTime;                // _91C, time it takes to jump
		Parm<f32> mNormalLandingChance;     // _944, chance of normal landing (rather than failed landing)
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
	FUEFUKIANIM_Dead     = 0,
	FUEFUKIANIM_Landing  = 1,
	FUEFUKIANIM_LandFail = 2,
	FUEFUKIANIM_Move     = 3,
	FUEFUKIANIM_Pivot    = 4,
	FUEFUKIANIM_Wait     = 5,
	FUEFUKIANIM_Whisle   = 6,
	FUEFUKIANIM_Struggle = 7,
	FUEFUKIANIM_Jump     = 8,
	FUEFUKIANIM_Carry    = 9,
	FUEFUKIANIM_AnimCount, // 10
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

struct StateDead : public State {
	inline StateDead()
	    : State(FUEFUKI_Dead, "dead")
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
	    : State(FUEFUKI_Jump, "jump")
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
	    : State(FUEFUKI_Land, "land")
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
	    : State(FUEFUKI_Stay, "stay")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStruggle : public State {
	inline StateStruggle()
	    : State(FUEFUKI_Struggle, "struggle")
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
	    : State(FUEFUKI_Turn, "turn")
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
	    : State(FUEFUKI_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalk : public State {
	inline StateWalk()
	    : State(FUEFUKI_Walk, "walk")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

// dev spelling
struct StateWhisle : public State {
	inline StateWhisle()
	    : State(FUEFUKI_Whisle, "whisle")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Fuefuki
} // namespace Game

#endif
