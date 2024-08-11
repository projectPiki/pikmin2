#ifndef _GAME_ENTITIES_UMIMUSHI_H
#define _GAME_ENTITIES_UMIMUSHI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "efx/TUmi.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "SysShape/Joint.h"
#include "Collinfo.h"

/**
 * --Header for Bloysters (UmiMushi)--
 * Note: Ranging + Toady Bloysters are the same struct
 */

namespace Game {
struct Navi;

struct UmimushiSphereShadowNode : public JointShadowNode {
	inline UmimushiSphereShadowNode()
	    : JointShadowNode(2)
	{
	}

	virtual ~UmimushiSphereShadowNode() { } // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Matrixf*, Vector3f&, bool);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

struct UmimushiTubeShadowNode : public JointShadowNode {
	inline UmimushiTubeShadowNode()
	    : JointShadowNode(2)
	{
	}

	virtual ~UmimushiTubeShadowNode() { } // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Matrixf*, Vector3f&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

namespace UmiMushi {
struct UmimushiShadowMgr;
struct FSM;

enum StateID {
	UMIMUSHI_NULL   = -1,
	UMIMUSHI_Wait   = 0,
	UMIMUSHI_Walk   = 1,
	UMIMUSHI_Find   = 2,
	UMIMUSHI_Search = 3,
	UMIMUSHI_Turn   = 4,
	UMIMUSHI_Flick  = 5,
	UMIMUSHI_Attack = 6,
	UMIMUSHI_Eat    = 7,
	UMIMUSHI_Dead   = 8,
	UMIMUSHI_Lost   = 9,
	UMIMUSHI_StateCount,
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mDamageRate(this, 'fp01', "ダメージレート", 1.0f, 0.0f, 1.0f)           // 'damage rate'
		    , mTurnStartAngle(this, 'fp02', "旋回開始角度", 60.0f, 0.0f, 180.0f)      // 'turn start angle'
		    , mTurnEndAngle(this, 'fp03', "旋回終了角度", 10.0f, 0.0f, 180.0f)        // 'turn end angle'
		    , mMoveSpeed(this, 'fp04', "サーチ移動速度", 10.0f, 0.0f, 100.0f)         // 'search movement speed'
		    , mRotateSpeed(this, 'fp06', "サーチ回転速度率", 0.1f, 0.0f, 1.0f)        // 'search rotation speed rate'
		    , mRotateSpeedMax(this, 'fp07', "サーチ回転最大速度", 5.0f, 0.0f, 360.0f) // 'search rotation max speed'
		    , mPurpleDamageRate(this, 'fp09', "黒ピクミンダメージレート", 0.0f, 0.0f,
		                        1.0f)                                              // 'black pikmin damage rate'
		    , mCaveTerritory(this, 'fp10', "地下テリトリー", 200.0f, 0.0f, 500.0f) // 'underground territory'
		    , mWhiteDamage(this, 'fp11', "白ピクミン", 300.0f, 0.0f, 1000.0f)      // 'white pikmin'
		    , mBlindHealth(this, 'fp12', "めくらライフ", 1000.0f, 0.0f, 2000.0f)   // 'blind life'
		    , mBlindWaitTime(this, 'fp13', "めくら待機間隔", 200.0f, 0.0f, 500.0f) // 'blind wait interval'
		    , mBlindMoveTime(this, 'fp14', "めくら移動間隔", 200.0f, 0.0f, 500.0f) // 'blind movement interval'
		    , mWaitTimeAfterAttack(this, 'ip01', "攻撃後待機期間", 100, 0, 300)    // 'waiting period after attack'
		{
		}

		Parm<f32> mDamageRate;          // _804, fp01
		Parm<f32> mTurnStartAngle;      // _82C, fp02
		Parm<f32> mTurnEndAngle;        // _854, fp03
		Parm<f32> mMoveSpeed;           // _87C, fp04
		Parm<f32> mRotateSpeed;         // _8A4, fp06
		Parm<f32> mRotateSpeedMax;      // _8CC, fp07
		Parm<f32> mPurpleDamageRate;    // _8F4, fp09
		Parm<f32> mCaveTerritory;       // _91C, fp10
		Parm<f32> mWhiteDamage;         // _944, fp11
		Parm<f32> mBlindHealth;         // _96C, fp12
		Parm<f32> mBlindWaitTime;       // _994, fp13
		Parm<f32> mBlindMoveTime;       // _9BC, fp14
		Parm<int> mWaitTimeAfterAttack; // _9E4, ip01
	};

	Parms()
	{
		mCanRotate              = 1;
		mIsAIAlwaysActiveOnWait = 1;
		mDoUseFindState         = 1;
		mCanEatNavis            = 1;
		mUnused1                = 1;
		mDoUseParamEyeCalc      = 0;
		mUnused2                = 1;
		mUnused3                = -1;
		mWalkAngleSpeed         = 10.0f;
		mRotateAngleDelta       = 0.05f;
		mUnused4                = 1.0f;
		mEyeYOffset             = 10.0f;
		mBlindTurnRateReduction = 0.3f;
		mDefaultEyeScale        = 1.0f;
		mTailScale              = 1.4f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms;    // _7F8
	u8 mCanRotate;               // _A10
	u8 mIsAIAlwaysActiveOnWait;  // _A11
	u8 mDoUseFindState;          // _A12
	u8 mCanEatNavis;             // _A13
	u8 mUnused1;                 // _A14
	u8 mDoUseParamEyeCalc;       // _A15
	u8 mUnused2;                 // _A16
	s16 mUnused3;                // _A18
	f32 mWalkAngleSpeed;         // _A1C
	f32 mRotateAngleDelta;       // _A20
	f32 mUnused4;                // _A24
	f32 mEyeYOffset;             // _A28
	f32 mBlindTurnRateReduction; // _A2C
	f32 mDefaultEyeScale;        // _A30
	f32 mTailScale;              // _A34
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);            // _30
	virtual void doSimulation(f32);                            // _4C
	virtual void doDirectDraw(Graphics& gfx);                  // _50
	virtual f32 getBodyRadius();                               // _54
	virtual void collisionCallback(CollEvent& event);          // _EC
	virtual void getShadowParam(ShadowParam& settings);        // _134
	virtual void applyImpulse(Vector3f&, Vector3f&) { }        // _18C (weak)
	virtual ~Obj() { }                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                        // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*) { } // _1C4 (weak)
	virtual void doUpdate();                                   // _1CC
	virtual void doAnimationCullingOff();                      // _1DC
	virtual void doAnimationCullingOn();                       // _1E0
	virtual void doDebugDraw(Graphics& gfx);                   // _1EC
	virtual void changeMaterial();                             // _200
	virtual void setParameters();                              // _228
	virtual void initMouthSlots();                             // _22C
	virtual bool eatWhitePikminCallBack(Creature* creature, f32 f)
	{
		return EnemyBase::eatWhitePikminCallBack(creature, C_PROPERPARMS.mWhiteDamage);
	}                                                                            // _298 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return mBloysterType; } // _258 (weak)
	virtual MouthSlots* getMouthSlots() { return &mMouthSlots; }                 // _25C (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);                           // _260
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part);   // _278
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);    // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part);  // _284
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor);         // _28C
	virtual void doStartStoneState();                                            // _2A4
	virtual void doFinishStoneState();                                           // _2A8
	virtual f32 getDamageCoeStoneState() { return C_PROPERPARMS.mDamageRate; }   // _2AC (weak)
	virtual void startCarcassMotion();                                           // _2C4
	virtual void doStartMovie();                                                 // _2F0
	virtual void doEndMovie();                                                   // _2F4
	virtual void setFSM(FSM* fsm);                                               // _2F8 (weak)
	//////////////// VTABLE END

	bool isReachToGoal(f32);
	void walkFunc();
	void setNextGoal();
	void changeColor();
	void resetColor();
	f32 turnFunc();
	void resetWalkParm();
	bool isChangeNavi();
	bool isFindTarget();
	bool isAttackStart();
	bool isNeedTurn();
	bool isOutOfTerritory(f32);
	bool canMove();
	bool outMove();
	void setFindAnim();
	void fadeAllEffect();
	void fadeColorEffect();
	void createColorEffect();
	void attackEffect();
	void meltEffect();
	void flickEffect();
	void eatEffect();
	void bubbleEffect();
	void delShadow();
	void eyeScaleMtxCalc();
	void weakScaleMtxCalc();
	void returnHome(); // unused

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Vector3f mGoalPosition;                  // _2BC
	StateID mNextState;                      // _2C8
	MouthSlots mMouthSlots;                  // _2CC
	SysShape::Joint* mHeadJoint;             // _2D4
	Navi* mTargetNavi;                       // _2D8
	bool mNeedNaviTargetSound;               // _2DC
	u8 mDoSkipEyeCalc;                       // _2DD
	int mCantSearchTargetTimer;              // _2E0
	Vector3f mLastCheckedPosition;           // _2E4
	int mMoveCheckIntervalTimer;             // _2F0
	int mReachGoalStopTimer;                 // _2F0
	f32 mPrevFaceDir;                        // _2F8
	f32 mWalkRotateAngle;                    // _2FC
	int mChaseSoundTimer;                    // _300
	Vector3f mTargetPosition;                // _304
	J3DMaterial* mTailMaterial;              // _310
	J3DGXColorS10 mActiveTailColor;          // _314
	J3DGXColorS10 mPrevTailColor;            // _31C
	J3DGXColorS10 mOlimarColor1;             // _324
	J3DGXColorS10 mOlimarColor2;             // _32C
	J3DGXColorS10 mLouieColor1;              // _334
	J3DGXColorS10 mLouieColor2;              // _33C
	J3DGXColorS10 mNormalColor1;             // _344
	J3DGXColorS10 mNormalColor2;             // _34C
	Sys::MatLoopAnimator* mMatAnim;          // _354
	UmimushiShadowMgr* mShadowMgr;           // _358
	f32 mEyeScale;                           // _35C
	u16 mEyeJointIdx;                        // _360
	u16 mWeakJointIdx;                       // _362
	efx::TUmiHamon* mEfxHamon;               // _364
	efx::TUmiWeakRed* mEfxWeakRed;           // _368
	efx::TUmiWeakBlue* mEfxWeakBlue;         // _36C
	efx::TUmiEyeRed* mEfxEyeRed[2];          // _370
	efx::TUmiEyeBlue* mEfxEyeBlue[2];        // _378
	efx::TUmiEat* mEfxEat;                   // _380
	efx::TUmiDeadawa* mEfxBubble;            // _384
	Matrixf* mEatJointMtx;                   // _388
	Vector3f mHamonPosition;                 // _38C
	FSM* mFsm;                               // _398
	EnemyTypeID::EEnemyTypeID mBloysterType; // _39C
	u16* mJointIndices;                      // _3A0
	                                         // _3A4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);       // _70
	virtual void createObj(int count);              // _A0
	virtual void doAlloc();                         // _A8
	virtual SysShape::Model* createModel();         // _B0
	virtual void loadModelData();                   // _C8
	virtual void loadTexData();                     // _D0
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x01240030);
	}
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_UmiMushiBase;
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &mObj[index];
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Sys::MatTexAnimation* mTexAnimation; // _44
	Obj* mObj;                           // _48, array of Objs
};

enum AnimID {
	UMIANIM_Attack  = 0,  // 'attack1'
	UMIANIM_Dead    = 1,  // 'dead1'
	UMIANIM_Eat     = 2,  // 'eat1'
	UMIANIM_Flick   = 3,  // 'flick1'
	UMIANIM_Run     = 4,  // 'run1'
	UMIANIM_Search  = 5,  // 'search1'
	UMIANIM_SRun    = 6,  // 'srun1'
	UMIANIM_STurn   = 7,  // 'sturn1'
	UMIANIM_Carry   = 8,  // 'type5'
	UMIANIM_OutView = 9,  // 'outview1'
	UMIANIM_FSearch = 10, // 'fsearch1'
	UMIANIM_AnimCount,    // 11
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

struct UmimushiShadowMgr {
	UmimushiShadowMgr(Obj* obj);

	void init();
	void update();

	Matrixf* mWeakMatrix1;                   // _00
	Matrixf* mWeakMatrix2;                   // _04
	Obj* mObj;                               // _08
	JointShadowRootNode* mRootNode;          // _0C
	UmimushiTubeShadowNode* mTubeShadow;     // _10
	UmimushiSphereShadowNode* mSphereShadow; // _14
};

extern Obj* curU;

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	StateAttack(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	bool mIsTongueActive; // _10, is 'tongue'/tendrils out and able to eat piki
	bool mTongueHasPiki;  // _11, has 'tongue'/tendrils captured any piki
};

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateEat : public State {
	StateEat(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFind : public State {
	StateFind(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	StateFlick(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLost : public State {
	StateLost(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSearch : public State {
	StateSearch(int);

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
	int mWaitTimer; // _10
};

struct StateWalk : public State {
	StateWalk(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mBlindMoveTimer; // _10
	int mBlindWaitTimer; // _14
};
/////////////////////////////////////////////////////////////////
} // namespace UmiMushi
} // namespace Game

#endif
