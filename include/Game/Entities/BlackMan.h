#ifndef _GAME_ENTITIES_BLACKMAN_H
#define _GAME_ENTITIES_BLACKMAN_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "SysShape/Animator.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "efx/TKage.h"

/**
 * --Header for Waterwraith (BlackMan)--
 * Note: Rollers are a separate enemy/struct (Tyre).
 */

#include "Game/Entities/Tyre.h"

namespace Game {
struct PathNode;

namespace BlackMan {
struct Parms;

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

bool lHandCallBack(J3DJoint*, int);
bool rHandCallBack(J3DJoint*, int);
bool lFootCallBack(J3DJoint*, int);
bool rFootCallBack(J3DJoint*, int);
bool bodyCallBack(J3DJoint*, int);

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                             // _30
	virtual void onKill(CreatureKillArg* settings);                             // _34
	virtual void doEntry();                                                     // _40
	virtual void doSimulation(f32);                                             // _4C
	virtual void doDirectDraw(Graphics& gfx);                                   // _50
	virtual bool isUnderground();                                               // _D0
	virtual void collisionCallback(CollEvent& event);                           // _EC
	virtual void getShadowParam(ShadowParam& settings);                         // _134
	virtual ~Obj() { }                                                          // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                         // _1C0
	virtual void doUpdate();                                                    // _1CC
	virtual void doAnimationCullingOff();                                       // _1DC
	virtual void doDebugDraw(Graphics& gfx);                                    // _1EC
	virtual void changeMaterial();                                              // _200
	virtual void setParameters();                                               // _228
	virtual void initWalkSmokeEffect();                                         // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();                      // _234
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);                          // _260
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part);  // _278
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part); // _284
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor);        // _28C
	virtual void doStartStoneState();                                           // _2A4
	virtual void doFinishStoneState();                                          // _2A8
	virtual void setFSM(FSM* fsm)
	{
		mFSM = fsm;
		mFSM->init(this);
		mCurrentLifecycleState = nullptr;
	};                                                                // _2F8 (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params) { } // _1C4 (weak)
	virtual void throwupItemInDeathProcedure() { }                    // _270 (weak)
	virtual void createEfxHamon()                                     // _250 (weak)
	{
		if (!mTyre) {
			EnemyBase::createEfxHamon();
		}
	}
	virtual void updateEfxHamon() // _24C (weak)
	{
		if (mTyre) {
			fadeEfxHamon();
		} else {
			EnemyBase::updateEfxHamon();
		}
	}
	virtual bool bombCallBack(Creature* source, Vector3f& direction, f32 damage) { return false; } // _294 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                                             // _258 (weak)
	{
		return EnemyTypeID::EnemyID_BlackMan;
	}
	//////////////// VTABLE END

	void walkFunc();
	bool isReachToGoal(f32);
	void findNextRoutePoint();
	void findNextTraceRoutePoint();
	bool isEndPathFinder();
	bool setPathFinder(bool);
	void releasePathFinder();
	void jointMtxCalc(int);
	void bodyMtxCalc();
	bool isTyreFreeze();
	bool isTyreDead();
	bool isFallEnd();
	void moveRestart();
	void escape();
	void setTimer(f32);
	f32 getTimer();
	void collisionStOn();
	void collisionStOff();
	void flick();
	void recover();
	void recoverFlick();
	void tyreFlick();
	void deadEffect();
	void deadTraceEffect();
	void tyreUpEffect();
	void tyreDownEffect();
	void bendEffect();
	void createTraceEffect();
	void fadeTraceEffect();
	void createFlickEffect();
	void fadeFlickEffect();
	bool isFinalFloor();
	void appearFanfare();

	inline Parms* getParms() { return C_PARMS; }

	inline void xfbUpdate(J3DModel* j3dModel, J3DModelData* modelData)
	{
		J3DTexture* wraithMain = modelData->getTexture();
		JUTTexture* xfbTex     = gameSystem->getXfbTexture();
		ResTIMG* img           = wraithMain->mRes;

		*img = *xfbTex->mTexInfo;

		wraithMain->setImageOffset((int)img, 0);
		wraithMain->setPaletteOffset((int)img, 0);
	}

	inline bool isOnTyres()
	{ // unsure of name
		if (!mTyre || mEscapePhase == 2) {
			return false;
		}
		return true;
	}

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Matrixf* mLeftHandMtx;                  // _2BC
	Matrixf* mRightHandMtx;                 // _2C0
	Matrixf* mLeftFootMtx;                  // _2C4
	Matrixf* mRightFootMtx;                 // _2C8
	int mFreezeTimer;                       // _2CC
	Vector3f mTargetPosition;               // _2D0
	int mPostFlickState;                    // _2DC
	int mEscapePhase;                       // _2E0
	u32 _2E4;                               // _2E4
	int mRouteFindTimer;                    // _2E8
	int mStepTimer;                         // _2EC
	int mStepPhase;                         // _2F0
	int mEscapeTimer;                       // _2F4
	Vector3f mNextRoutePos;                 // _2F8
	Vector3f mChestJointPosition;           // _304
	Vector3f mHandPositions[2];             // _310
	Vector3f mLandPosition;                 // _328
	int mRouteFindCooldownTimer;            // _334
	bool mIsSameWaypoint;                   // _338
	f32 mWraithFallTimer;                   // _33C
	s16 mCurrentWaypointIndex;              // _340
	s16 mPreviousWaypointIndex;             // _342
	s16 mNextWaypointIndex;                 // _344
	u32 mPathFindingHandle;                 // _348
	u8 mFoundPath;                          // _34C
	WalkSmokeEffect::Mgr mWalkSmokeMgr;     // _350
	Sys::MatLoopAnimator* mMatLoopAnimator; // _358
	PathNode* mPath;                        // _35C
	FSM* mFSM;                              // _360
	Tyre::Obj* mTyre;                       // _364
	u16 mWaistJointIndex;                   // _368
	u16 mChestJointIndex;                   // _36A
	u16 mLeftHandJointIndex;                // _36C
	u16 mRightHandJointIndex;               // _36E
	u16 mLeftFootJointIndex;                // _370
	u16 mRightFootJointIndex;               // _372
	f32 mEscapeMoveSpeed;                   // _374
	f32 mFadeTimer;                         // _378
	J3DMaterial* _37C;                      // _37C
	Color4 mActiveColor;                    // _380
	Color4 mTargetColor;                    // _384
	Color4 mUnusedColor;                    // _388
	Color4 mFadeColor;                      // _38C
	efx::TKageMove* mEfxMove;               // _390
	efx::TKageRun* mEfxRun;                 // _394
	efx::TKageTyreup* mEfxTyreup;           // _398
	efx::TKageDead1* mEfxDead;              // _39C
	efx::TKageFlick* mEfxFrontFlick;        // _3A0
	efx::TKageFlick* mEfxBackFlick;         // _3A4
	u8 mHasStartedChaseBgm;                 // _3A8
	u8 mIsFallStart;                        // _3A9
	u8 mNeedAppearBgm;                      // _3AA
	u8 mIsMoviePlaying;                     // _3AB
	                                        // _3AC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void doAlloc();                            // _A8
	virtual SysShape::Model* createModel();            // _B0
	virtual void loadModelData();                      // _C8
	virtual void loadTexData();                        // _D0
	virtual J3DModelData* doLoadBmd(void*);            // _D4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_BlackMan;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &mObj[index];
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Sys::MatTexAnimation* mTexAnimation; // _44
	Obj* mObj;                           // _48
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    // Pod?
		    , mPodMoveSpeed(this, 'fp01', "ポッド移動速度", 10.0f, 0.0f, 100.0f)
		    // Running away (escape)
		    , mEscapeSpeed(this, 'fp02', "逃げ速度", 10.0f, 0.0f, 1000.0f)
		    , mEscapeRotationSpeed(this, 'fp03', "逃げ回転速度率", 0.1f, 0.0f, 1.0f)
		    , mMaxEscapeRotationStep(this, 'fp04', "逃げ回転最大速度", 10.0f, 0.0f, 360.0f)
		    // Normal movement
		    , mTravelSpeed(this, 'fp05', "2段階速度", 200.0f, 10.0f, 500.0f)
		    , mRotationSpeed(this, 'fp06', "2段階回転速度率", 0.1f, 0.0f, 1.0f)
		    , mMaxRotationStep(this, 'fp07', "2段階回転最大速度", 10.0f, 0.0f, 360.0f)
		    // Walking speed
		    , mWalkingSpeed(this, 'fp11', "歩き速度", 10.0f, 0.0f, 100.0f)
		    , mTimerToTwoStep(this, 'ip01', "2段階へのタイマー", 300, 0, 3000)
		    , mDosinStopTimerLength(this, 'ip03', "ドシン停止タイマー", 200, 0, 600)
		    , mFreezeTimerLength(this, 'ip04', "逃げ停止タイマー", 200, 0, 600)
		    , mContinuousEscapeTimerLength(this, 'ip05', "連続逃げタイマー", 200, 0, 600)
		    , mStandStillTimerLength(this, 'ip06', "つかれ停止タイマー", 200, 0, 600)
		{
		}

		Parm<f32> mPodMoveSpeed;                // _804
		Parm<f32> mEscapeSpeed;                 // _82C
		Parm<f32> mEscapeRotationSpeed;         // _854
		Parm<f32> mMaxEscapeRotationStep;       // _87C
		Parm<f32> mTravelSpeed;                 // _8A4
		Parm<f32> mRotationSpeed;               // _8CC
		Parm<f32> mMaxRotationStep;             // _8F4
		Parm<f32> mWalkingSpeed;                // _91C
		Parm<int> mTimerToTwoStep;              // _944
		Parm<int> mDosinStopTimerLength;        // _96C
		Parm<int> mFreezeTimerLength;           // _994
		Parm<int> mContinuousEscapeTimerLength; // _9BC
		Parm<int> mStandStillTimerLength;       // _9E4
	};

	Parms()
	{
		mStartPhase          = 1;
		mArmFollowType       = 0;
		mDoStunOnEarthquake  = true;
		mUseGlobalMtxCalc    = true;
		mWaypointCalcType    = 0;
		_A16                 = 1;
		mUseDrawBuffer8      = 1;
		mUseTyreForJointCalc = 1;
		mForcedStepPhase     = -1;
		mWaypointGoalRadius  = 50.0f;
		_A20                 = 20.0f;
		mBaseScale           = 1.0f;
		mBodyMoveRate        = 5.0f;
		mBodyRotationSpeed   = 1.0f;
		mWristScale          = 0.9f;
		mArmScale            = 0.6f;
		mShoulderScale       = 0.2f;
		mFadeRate            = 0.08f;
		mArmRotationA        = 20.0f;
		mArmRotationB        = -10.0f;
		mFallMinDistance     = 10.0f;
		mFallStartDelay      = 1.25f;
		mInitialSpawnHeight  = 1100.0f;
		mFallRadius          = 300.0f;
		mFallDelay2          = 1.0f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms; // _7F8
	u8 mStartPhase;           // _A10
	u8 mArmFollowType;        // _A11
	u8 mDoStunOnEarthquake;   // _A12
	u8 _A13;                  // _A13
	u8 mUseGlobalMtxCalc;     // _A14
	u8 mWaypointCalcType;     // _A15
	u8 _A16;                  // _A16
	bool mUseDrawBuffer8;     // _A17
	u8 mUseTyreForJointCalc;  // _A18
	s16 mForcedStepPhase;     // _A1A
	f32 mWaypointGoalRadius;  // _A1C
	f32 _A20;                 // _A20
	f32 mBaseScale;           // _A24
	f32 mBodyMoveRate;        // _A28
	f32 mBodyRotationSpeed;   // _A2C
	f32 mWristScale;          // _A30
	f32 mArmScale;            // _A34
	f32 mShoulderScale;       // _A38
	f32 mFadeRate;            // _A3C
	f32 mArmRotationA;        // _A40
	f32 mArmRotationB;        // _A44
	f32 mFallMinDistance;     // _A48
	f32 mFallStartDelay;      // _A4C
	f32 mInitialSpawnHeight;  // _A50
	f32 mFallRadius;          // _A54
	f32 mFallDelay2;          // _A58
};

enum AnimID {
	WRAITHANIM_Bend    = 0,
	WRAITHANIM_Bend2   = 1,
	WRAITHANIM_Dead    = 2,
	WRAITHANIM_Flick   = 3,
	WRAITHANIM_Flick2  = 4,
	WRAITHANIM_GetOff  = 5,
	WRAITHANIM_Move    = 6,
	WRAITHANIM_Recover = 7,
	WRAITHANIM_Run     = 8,
	WRAITHANIM_Wait    = 9,
	WRAITHANIM_Wait2   = 10,
	WRAITHANIM_Walk    = 11,
	WRAITHANIM_Through = 12,
	WRAITHANIM_Land    = 13,
	WRAITHANIM_AnimCount, // 14
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                   // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);               // _14

	SysShape::Animator mAnimator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	WRAITH_Walk    = 0,
	WRAITH_Dead    = 1,
	WRAITH_Freeze  = 2,
	WRAITH_Bend    = 3,
	WRAITH_Escape  = 4,
	WRAITH_Fall    = 5,
	WRAITH_Flick   = 6,
	WRAITH_Recover = 7,
	WRAITH_Tired   = 8,
	WRAITH_Count   = 9,
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBend : public State {
	StateBend(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 _10[0x4]; // _10, unknown
};

struct StateEscape : public State {
	StateEscape(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFall : public State {
	StateFall(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	StateFlick(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFreeze : public State {
	StateFreeze(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateRecover : public State {
	StateRecover(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTired : public State {
	StateTired(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10
};

struct StateWalk : public State {
	StateWalk(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace BlackMan
} // namespace Game

#endif
