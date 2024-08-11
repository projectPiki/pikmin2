#ifndef _GAME_ENTITIES_TAMAGOMUSHI_H
#define _GAME_ENTITIES_TAMAGOMUSHI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "JSystem/J3DU/J3DUMtxCache.h"
#include "Collinfo.h"

/**
 * --Header for Mitites (TamagoMushi)--
 */

namespace Game {
namespace TamagoMushi {
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mSurvivalTime(this, 'fp01', "生存時間", 300.0f, 0.0, 2000.0f)    // 'survival time'
		    , mAppearanceRange(this, 'fp02', "出現範囲", 80.0f, 0.0f, 200.0f)  // 'appearance range'
		    , mHoneyRate(this, 'fp03', "蜜レート", 1.0f, 0.0f, 1.0f)           // 'honey rate'
		    , mMinimumWalkTime(this, 'ip01', "歩き時間最小", 60, 0, 300)       // 'minimum walking time'
		    , mMaximumWalkTime(this, 'ip02', "歩き時間最大", 100, 0, 600)      // 'maximum walking time'
		    , mMinimumAppearanceTime(this, 'ip03', "出現時間最小", 10, 0, 100) // 'minimum appearance time'
		    , mMaximumAppearanceTime(this, 'ip04', "出現時間最大", 50, 0, 200) // 'maximum appearance time'
		{
		}

		Parm<f32> mSurvivalTime;          // _804
		Parm<f32> mAppearanceRange;       // _82C
		Parm<f32> mHoneyRate;             // _854
		Parm<int> mMinimumWalkTime;       // _87C
		Parm<int> mMaximumWalkTime;       // _8A4
		Parm<int> mMinimumAppearanceTime; // _8CC
		Parm<int> mMaximumAppearanceTime; // _8F4
	};

	Parms()
	{
		mDisableWanderRotation        = 0;
		mEnableSpeedAdjustment        = 0;
		mIsNotAttackable              = 0;
		mDoUseModelFetch              = 0;
		mMoveOffsetLevel              = 40.0f;
		mRotationStep                 = 0.3f;
		mWalkSpeedAdjustmentTimeLimit = 10.0f;
		mWalkSpeedReductionFactor     = 0.2f;
		mBaseYVelocityOnBounce        = 50.0f;
		mBaseXZVelocityOnBounce       = 80.0f;
		mNextGoalPosMaxRadius         = 80.0f;
		_940                          = 0.0f;
		mPikiPanicMaxTime             = 30.0f;
		mPanicInduceRadius            = 150.0f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms;          // _7F8
	u8 mDisableWanderRotation;         // _920
	u8 mEnableSpeedAdjustment;         // _921
	u8 mIsNotAttackable;               // _922
	u8 mDoUseModelFetch;               // _923
	f32 mMoveOffsetLevel;              // _924
	f32 mRotationStep;                 // _928
	f32 mWalkSpeedAdjustmentTimeLimit; // _92C
	f32 mWalkSpeedReductionFactor;     // _930
	f32 mBaseYVelocityOnBounce;        // _934
	f32 mBaseXZVelocityOnBounce;       // _938
	f32 mNextGoalPosMaxRadius;         // _93C
	f32 _940;                          // _940
	f32 mPikiPanicMaxTime;             // _944
	f32 mPanicInduceRadius;            // _948
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                               // _30
	virtual void doDirectDraw(Graphics& gfx);                                     // _50
	virtual void bounceCallback(Sys::Triangle* tri);                              // _E8
	virtual void collisionCallback(CollEvent& event);                             // _EC
	virtual void getShadowParam(ShadowParam& settings);                           // _134
	virtual bool needShadow();                                                    // _138
	virtual ~Obj() { }                                                            // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                           // _1C0
	virtual void doUpdate();                                                      // _1CC
	virtual void doAnimationCullingOff();                                         // _1DC
	virtual void doDebugDraw(Graphics& gfx);                                      // _1EC
	virtual void setParameters();                                                 // _228
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part);    // _278
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);     // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part);   // _284
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor);          // _28C
	virtual bool bombCallBack(Creature* source, Vector3f& direction, f32 damage); // _294
	virtual void startCarcassMotion();                                            // _2C4
	virtual void setFSM(FSM* fsm)                                                 // _2F8 (weak)
	{
		mFsm = fsm;
		mFsm->init(this);
		mCurrentLifecycleState = nullptr;
	}
	virtual void setInitialSetting(EnemyInitialParamBase* params) { }                               // _1C4 (weak)
	virtual bool isLivingThing() { return !C_PARMS->mIsNotAttackable; }                             // _D4 (weak)
	virtual f32 getDownSmokeScale() { return 0.35f; }                                               // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_TamagoMushi; } // _258 (weak)
	//////////////// VTABLE END

	void genItem();
	void walkFunc();
	void setGoalRandom();
	void setGoalDirect(Vector3f&);
	bool turnFunc();
	bool isReachToGoal(f32);
	void resetWalkParm();
	void setLeader(Obj*);
	void setTypeBall();
	void appearPanic();
	bool isFound();
	void createFellow();
	void ballMove();
	void createHideEffect();
	void createAppearEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	int mActiveCounter;                // _2BC
	int mActiveMaxTime;                // _2C0
	f32 mRandomTurnFactor;             // _2C4
	f32 mRandomSpeedFactor;            // _2C8
	f32 mRandomMoveOffsFactor;         // _2CC
	f32 mMoveRotationTimer;            // _2D0
	f32 mWalkSpeedAdjustmentTimer;     // _2D4
	f32 mWalkSpeedAdjustmentTimeLimit; // _2D8
	bool mWalkSpeedAdjustmentEnabled;  // _2DC
	Vector3f mGoalPosition;            // _2E0
	f32 mPreviousFaceDir;              // _2EC
	bool mIsInBall;                    // _2F0
	Obj* mLeader;                      // _2F4
	SysShape::Joint* mKoshiJoint;      // _2F8
	f32 mMoveRotationOffset;           // _2FC
	bool mIsBallFallWait;              // _300
	int mBitterHitNum;                 // _304
	FSM* mFsm;                         // _308
	                                   // _30C = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&); // _70
	virtual void doAlloc();                   // _A8
	virtual EnemyBase* getEnemy(int index)    // _A4 (weak)
	{
		return &mObj[index];
	}
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_TamagoMushi;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	//////////////// VTABLE END

	void fetch(J3DModel*, f32);
	Obj* createGroup(EnemyBirthArg&, int, Vector3f&);
	Obj* createGroupByBigFoot(EnemyBirthArg&, int, Vector3f&, f32);
	void createGroup(Obj*, int, bool);
	void createGroupByBigFoot(Obj*, int, bool, f32);

	inline int getFreeNum();

	inline J3DModel* getModel()
	{
		Obj* tamagomushi = static_cast<Obj*>(getEnemy(0));
		return tamagomushi->mModel->mJ3dModel;
	}

	inline J3DAnmTransform* getTransform()
	{
		SysShape::AnimInfo* animInfo = static_cast<SysShape::AnimInfo*>(mAnimMgr->mAnimInfo.mChild)->getInfoByID(2);
		return animInfo->mAnm;
	}

	inline J3DUMtxAnmCacheTable* getCacheTable(J3DModel* model, J3DAnmTransform* transform)
	{
		return new J3DUMtxAnmCacheTable(model, transform);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	J3DUMtxCacheRef<J3DUMtxAnmCacheTable>* mMtxCacheRef; // _44
	Obj* mObj;                                           // _48, likely an array of Objs
};

enum AnimID {
	TAMAGOANIM_Dead   = 0,
	TAMAGOANIM_Dive   = 1,
	TAMAGOANIM_Move   = 2,
	TAMAGOANIM_Appear = 3, // 'set'
	TAMAGOANIM_Wait   = 4,
	TAMAGOANIM_Carry  = 5,
	TAMAGOANIM_AnimCount, // 6
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
enum StateID {
	TAMAGOMUSHI_Walk   = 0,
	TAMAGOMUSHI_Turn   = 1,
	TAMAGOMUSHI_Appear = 2,
	TAMAGOMUSHI_Hide   = 3,
	TAMAGOMUSHI_Dead   = 4,
	TAMAGOMUSHI_Wait   = 5,
	TAMAGOMUSHI_Count,
};

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
	bool mHasMadeFellow;       // _10
	int mAppearWaitTimer;      // _14
	int mAppearWaitMaxTime;    // _18
	f32 mAppearFrame;          // _1C
	bool mNeedPlayAppearSound; // _20
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
};

struct StateTurn : public State {
	StateTurn(int);

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
};

struct StateWalk : public State {
	StateWalk(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mWalkTimer;   // _10
	int mWalkMaxTime; // _14
};

/////////////////////////////////////////////////////////////////
} // namespace TamagoMushi
} // namespace Game

#endif
