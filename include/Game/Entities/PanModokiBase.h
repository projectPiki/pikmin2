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

#define PANMODOKI_MaxHeldTreasures (15)

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

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
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);   // _27C
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
	virtual bool canTarget(int pelMinWeight, int weightLimit) = 0;              // _308
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
	Pellet* findNearestPellet();
	Pellet* getCarryTarget();
	void releaseCarryTarget();
	void checkNearHomeGraphIndex();
	bool carryTarget(f32);
	void changeCarryDir(bool);
	void setCarryDir(bool);
	void endCarry();
	void checkSucked();
	void suckFinish();
	bool isEndPathFinder();
	bool setPathFinder(bool);
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

	// unused/inlined
	void clearCarryVelocity();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Vector3f mNextWayPointPosition;                     // _2BC
	f32 mCarryDir;                                      // _2C8
	MouthSlots mMouthSlots;                             // _2CC
	SysShape::Joint* mBodyJoint;                        // _2D4
	SysShape::Joint* mKamuJoint;                        // _2D8
	f32 mCarryRotationOffset;                           // _2DC (normally Pi to make breadbug face the treasure)
	f32 mAlsoRotationOffset;                            // _2E0
	u8 _2E4;                                            // _2E4
	s16 mWpIndex1;                                      // _2E6
	s16 mWpIndex2;                                      // _2E8
	s16 mWpIndex3;                                      // _2EA
	u32 mPathID;                                        // _2EC
	bool mIsPathfinding;                                // _2F0
	u8 mCanReactToPress;                                // _2F1
	WalkSmokeEffect::Mgr mWalkSmokeMgr;                 // _2F4
	efx::TPanHide* mEfxHide;                            // _2FC
	efx::TPanSmoke* mEfxSmoke;                          // _300
	int mFindNextRouteCounter;                          // _304
	Vector3f mPrevCheckPosition;                        // _308
	int mMoveToWpTimer;                                 // _314
	int mMoveSpeedTimer;                                // _318
	u8 mIsCarryStuck;                                   // _31C
	Vector3f mPelletCarryVelocity;                      // _320
	f32 mCarrySizeDiff;                                 // _32C
	f32 mShadowSize;                                    // _330
	f32 mCarryingYPosition;                             // _334
	f32 mUnusedVal;                                     // _338
	f32 mBounceEffectSize;                              // _33C
	f32 mAppearEffectSize;                              // _340
	StateID mNextState;                                 // _344
	Matrixf mCarryMatrix;                               // _348
	Nest::Obj* mNest;                                   // _378
	f32 mCarryStrength;                                 // _37C
	FSM* mFsm;                                          // _380
	PathNode* mPathNode;                                // _384
	int mHeldTreasureNum;                               // _388, number of pellets collected in array
	Pellet* mHeldTreasures[PANMODOKI_MaxHeldTreasures]; // _38C
	                                                    // _3C8 = PelletView
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mNestScale(this, 'fp00', "巣スケール", 1.0f, 0.0f, 5.0f)                 // 'nest scale'
		    , mWalkAnimSpeed(this, 'fp16', "歩きモーションスピード", 1.0f, 0.0f, 5.0f) // 'walking motion speed'
		    , mFastTurnSpeed(this, 'fp02', "急回転速度率", 0.1f, 0.0f, 1.0f)           // 'rapid rotation speed rate'
		    , mMaxFastTurnAngle(this, 'fp05', "急回転速度最大", 1.0f, 0.0f, 180.0f)    // 'rapid rotation speed max'
		    , mCarrySpeed(this, 'fp03', "戻り速度", 10.0f, 0.0f, 100.0f)               // 'return speed'
		    , mSuckDamage(this, 'fp04', "コンテナダメージ", 10.0f, 0.0f, 1000.0f)      // 'container [onyon/ship] damage'
		    , mPressDamage(this, 'fp06', "プレスダメージ", 10.0f, 0.0f, 1000.0f)       // 'press damage'
		    , mWaitTime(this, 'fp14', "待機時間", 20.0f, 0.0f, 500.0f)                 // 'wait time'
		    , mHideTime(this, 'fp15', "潜伏時間", 50.0f, 0.0f, 300.0f)                 // 'incubation time'
		    , mMaxCarryWeight(this, 'ip01', "ターゲットスロット数境界", 5, 1, 20)      // 'target slot limit'
		{
		}

		Parm<f32> mNestScale;        // _804, fp00
		Parm<f32> mWalkAnimSpeed;    // _82C, fp16
		Parm<f32> mFastTurnSpeed;    // _854, fp02
		Parm<f32> mMaxFastTurnAngle; // _87C, fp05
		Parm<f32> mCarrySpeed;       // _8A4, fp03
		Parm<f32> mSuckDamage;       // _8CC, fp04
		Parm<f32> mPressDamage;      // _8F4, fp06
		Parm<f32> mWaitTime;         // _91C, fp14
		Parm<f32> mHideTime;         // _944, fp15
		Parm<int> mMaxCarryWeight;   // _96C, ip01
	};

	Parms()
	{
		_998          = 0;
		mCanPressType = 0;
		_99A          = 1;
		_99C          = 20.0f;
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
	u8 mCanPressType;         // _999
	u8 _99A;                  // _99A
	f32 _99C;                 // _99C
};

enum AnimID {
	PANMODOKIANIM_Dead   = 0,
	PANMODOKIANIM_Walk   = 1, // 'move1'
	PANMODOKIANIM_Back   = 2, // 'move2'
	PANMODOKIANIM_Pulled = 3, // 'type1'
	PANMODOKIANIM_Appear = 4, // 'type2'
	PANMODOKIANIM_Hide   = 5, // 'type3'
	PANMODOKIANIM_Damage = 6, // 'type4'
	PANMODOKIANIM_Carry  = 7, // 'type5'
	PANMODOKIANIM_Wait   = 8, // 'wait'
	PANMODOKIANIM_AnimCount,  // 9
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

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBack : public State {
	StateBack(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u32 _10; // _10, unknown
};

struct StateCarryEnd : public State {
	StateCarryEnd(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	Vector3f _10; // _10, position maybe?
};

struct StateDamage : public State {
	StateDamage(int);

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

struct StateHide : public State {
	StateHide(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mHideTimer; // _10, time hidden/underground
};

struct StatePulled : public State {
	StatePulled(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStick : public State {
	StateStick(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10, unknown
};

struct StateSucked : public State {
	StateSucked(int);

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
	int mWaitTimer; // _10, unknown
};

struct StateWalk : public State {
	StateWalk(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace PanModokiBase
} // namespace Game

#endif
