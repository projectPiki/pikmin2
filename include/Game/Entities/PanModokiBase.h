#ifndef _GAME_ENTITIES_PANMODOKIBASE_H
#define _GAME_ENTITIES_PANMODOKIBASE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "efx/TPan.h"
#include "SysShape/Joint.h"
#include "Collinfo.h"

/**
 * --Header for Breadbug Base Class--
 * Derived classes:
 * OoPanModoki	= Giant Breadbug
 * PanModoki	= Breadbug
 */

namespace Game {
namespace Nest {
struct Obj;
} // namespace Nest

struct Pellet;

namespace PanModokiBase {
enum StateID {
	PANMODOKI_NULL     = -1,
	PANMODOKI_Dead     = 0,
	PANMODOKI_Walk     = 1,
	PANMODOKI_Back     = 2,
	PANMODOKI_Pulled   = 3,
	PANMODOKI_Appear   = 4,
	PANMODOKI_Hide     = 5,
	PANMODOKI_Damage   = 6,
	PANMODOKI_Wait     = 7,
	PANMODOKI_Stick    = 8,
	PANMODOKI_Sucked   = 9,
	PANMODOKI_CarryEnd = 10,
	PANMODOKI_StateCount,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct Obj : public EnemyBase {
	Obj();

	virtual void onInit(CreatureInitArg* settings);                             // _30
	virtual void onKill(CreatureKillArg* settings);                             // _34
	virtual void doAnimation();                                                 // _3C
	virtual void doSimulation(f32);                                             // _4C
	virtual void doDirectDraw(Graphics& gfx);                                   // _50
	virtual void inWaterCallback(WaterBox* wb);                                 // _84
	virtual void outWaterCallback();                                            // _88
	virtual void bounceCallback(Sys::Triangle* tri);                            // _E8
	virtual void collisionCallback(CollEvent& event);                           // _EC
	virtual void getShadowParam(ShadowParam& settings);                         // _134
	virtual bool needShadow();                                                  // _138
	virtual ~Obj() { }                                                          // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                         // _1C0
	virtual void doUpdate();                                                    // _1CC
	virtual void doAnimationStick();                                            // _1E4
	virtual void doDebugDraw(Graphics& gfx);                                    // _1EC
	virtual void setParameters();                                               // _228
	virtual void initMouthSlots();                                              // _22C
	virtual void initWalkSmokeEffect();                                         // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();                      // _234
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() = 0;                     // _258
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part);  // _278
	virtual bool pressCallBack(Creature*, f32, CollPart*);                      // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part); // _284
	virtual void doStartStoneState();                                           // _2A4
	virtual void doFinishStoneState();                                          // _2A8
	virtual void startCarcassMotion();                                          // _2C4
	virtual void doStartMovie();                                                // _2F0
	virtual void doEndMovie();                                                  // _2F4
	virtual void appearRumble() { }                                             // _2F8 (weak)
	virtual void hideRumble() { }                                               // _2FC (weak)
	virtual void damageRumble();                                                // _300
	virtual void walkFunc();                                                    // _304
	virtual bool canTarget(int, int) = 0;                                       // _308
	virtual void setInitialSetting(EnemyInitialParamBase*) { }                  // _1C4 (weak)
	virtual void applyImpulse(Vector3f&, Vector3f&) { }                         // _18C (weak)
	virtual bool isLivingThing()                                                // _D4 (weak)
	{
		return isEvent(0, EB_Bittered);
	}
	virtual bool isUnderground() // _D0 (weak)
	{
		return !isEvent(0, EB_Bittered);
	}
	virtual bool ignoreAtari(Creature* toIgnore) // _190 (weak)
	{
		return (u8)(toIgnore == mTargetCreature);
	}
	virtual MouthSlots* getMouthSlots() // _25C (weak)
	{
		return &mMouthSlots;
	}
	virtual void setFSM(FSM* fsm) // _30C (weak)
	{
		mFsm = fsm;
		mFsm->init(this);
		mCurrentLifecycleState = nullptr;
	}

	void updateCaptureMatrix();
	void findNextRoutePoint(bool);
	bool isCarryToGoal();
	bool isReachToGoal(f32);
	bool canBack();
	void findNearestPellet();
	Pellet* getCarryTarget();
	void releaseCarryTarget();
	void checkNearHomeGraphIndex();
	void carryTarget(f32);
	void changeCarryDir(bool);
	void setCarryDir(bool);
	void endCarry();
	void checkSucked();
	void suckFinish();
	bool isEndPathFinder();
	void setPathFinder(bool);
	void releasePathFinder();
	void killNest();
	bool isTargetable(Pellet*);
	void calcSlotGlobalPos(Vector3f&);
	void boundEffect();
	void createAppearEffect();
	void createHideEffect();
	void fadeHideEffect();
	void createPulledSmokeEffect();
	void fadePulledSmokeEffect();
	void throwUpEatItem();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Vector3f mNextWayPointPosition;     // _2BC
	f32 mCarryDir;                      // _2C8
	MouthSlots mMouthSlots;             // _2CC
	SysShape::Joint* mBodyJoint;        // _2D4
	SysShape::Joint* mKamuJoint;        // _2D8
	f32 _2DC;                           // _2DC
	f32 _2E0;                           // _2E0
	u8 _2E4;                            // _2E4
	s16 _2E6;                           // _2E6
	s16 _2E8;                           // _2E8
	s16 _2EA;                           // _2EA
	u32 _2EC;                           // _2EC
	u8 _2F0;                            // _2F0
	u8 _2F1;                            // _2F1
	WalkSmokeEffect::Mgr mWalkSmokeMgr; // _2F4
	efx::TPanHide* mEfxHide;            // _2FC
	efx::TPanSmoke* mEfxSmoke;          // _300
	int _304;                           // _304
	Vector3f _308;                      // _308, some position?
	u8 _314[0x4];                       // _314, unknown
	int _318;                           // _318
	u8 _31C;                            // _31C
	Vector3f _320;                      // _320
	f32 _32C;                           // _32C
	f32 _330;                           // _330
	f32 _334;                           // _334
	f32 _338;                           // _338
	f32 _33C;                           // _33C
	f32 _340;                           // _340
	StateID mNextState;                 // _344
	Matrixf _348;                       // _348, capture matrix?
	Nest::Obj* mNest;                   // _378
	f32 _37C;                           // _37C
	FSM* mFsm;                          // _380
	u32 _384;                           // _384, unknown
	int _388;                           // _388
	Pellet* _38C[1];                    // _38C, size unknown, probably some (all?) of below
	u8 _390[0x38];                      // _390, unknown/may be part of array above
	                                    // _3C8 = PelletView
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mFp00(this, 'fp00', "巣スケール", 1.0f, 0.0f, 5.0f)             // 'nest scale'
		    , mFp16(this, 'fp16', "歩きモーションスピード", 1.0f, 0.0f, 5.0f) // 'walking motion speed'
		    , mFp02(this, 'fp02', "急回転速度率", 0.1f, 0.0f, 1.0f)           // 'rapid rotation speed rate'
		    , mFp05(this, 'fp05', "急回転速度最大", 1.0f, 0.0f, 180.0f)       // 'rapid rotation speed max'
		    , mFp03(this, 'fp03', "戻り速度", 10.0f, 0.0f, 100.0f)            // 'return speed'
		    , mFp04(this, 'fp04', "コンテナダメージ", 10.0f, 0.0f, 1000.0f)   // 'container [onyon/ship] damage'
		    , mFp06(this, 'fp06', "プレスダメージ", 10.0f, 0.0f, 1000.0f)     // 'press damage'
		    , mFp14(this, 'fp14', "待機時間", 20.0f, 0.0f, 500.0f)            // 'wait time'
		    , mFp15(this, 'fp15', "潜伏時間", 50.0f, 0.0f, 300.0f)            // 'incubation time'
		    , mIp01(this, 'ip01', "ターゲットスロット数境界", 5, 1, 20)       // 'target slot limit'
		{
		}

		Parm<f32> mFp00; // _804
		Parm<f32> mFp16; // _82C
		Parm<f32> mFp02; // _854
		Parm<f32> mFp05; // _87C
		Parm<f32> mFp03; // _8A4
		Parm<f32> mFp04; // _8CC
		Parm<f32> mFp06; // _8F4
		Parm<f32> mFp14; // _91C
		Parm<f32> mFp15; // _944
		Parm<int> mIp01; // _96C
	};

	Parms()
	{
		_998 = 0;
		_999 = 0;
		_99A = 1;
		_99C = 20.0f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms; // _7F8
	u8 _998;                  // _998
	u8 _999;                  // _999
	u8 _99A;                  // _99A
	f32 _99C;                 // _99C
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
struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear : public State {
	StateAppear(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBack : public State {
	StateBack(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u32 _10; // _10, unknown
};

struct StateCarryEnd : public State {
	StateCarryEnd(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	Vector3f _10; // _10, position maybe?
};

struct StateDamage : public State {
	StateDamage(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateHide : public State {
	StateHide(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mHideTimer; // _10, time hidden/underground
};

struct StatePulled : public State {
	StatePulled(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStick : public State {
	StateStick(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10, unknown
};

struct StateSucked : public State {
	StateSucked(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mWaitTimer; // _10, unknown
};

struct StateWalk : public State {
	StateWalk(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace PanModokiBase
} // namespace Game

#endif
