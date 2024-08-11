#ifndef _GAME_ENTITIES_BIGFOOT_H
#define _GAME_ENTITIES_BIGFOOT_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "efx/TOdama.h"
#include "efx/TDama.h"
#include "Collinfo.h"

/**
 * --Header for Raging Long Legs (BigFoot)--
 */

namespace Game {
struct IKSystemMgr;
struct IKSystemParms;

namespace BigFoot {
struct BigFootGroundCallBack;
struct BigFootShadowMgr;
struct FSM;

enum StateID {
	BIGFOOT_NULL  = -1,
	BIGFOOT_Dead  = 0,
	BIGFOOT_Stay  = 1,
	BIGFOOT_Land  = 2,
	BIGFOOT_Wait  = 3,
	BIGFOOT_Flick = 4,
	BIGFOOT_Walk  = 5,
	BIGFOOT_Count,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                            // _30
	virtual void onKill(CreatureKillArg* settings);                            // _34
	virtual void doDirectDraw(Graphics& gfx);                                  // _50
	virtual void collisionCallback(CollEvent& event);                          // _EC
	virtual void getShadowParam(ShadowParam& settings);                        // _134
	virtual bool needShadow();                                                 // _138
	virtual ~Obj() {};                                                         // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);             // _1C4
	virtual void doUpdate();                                                   // _1CC
	virtual void doUpdateCommon();                                             // _1D0
	virtual void doAnimationCullingOff();                                      // _1DC
	virtual void doDebugDraw(Graphics& gfx);                                   // _1EC
	virtual void getThrowupItemPosition(Vector3f* position);                   // _268
	virtual void getThrowupItemVelocity(Vector3f* velocity);                   // _26C
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual void doStartStoneState();                                          // _2A4
	virtual void doFinishStoneState();                                         // _2A8
	virtual void doStartMovie();                                               // _2F0
	virtual void doEndMovie();                                                 // _2F4
	virtual void setFSM(FSM* fsm);                                             // _2F8
	virtual void inWaterCallback(WaterBox* wb) { }                             // _84 (weak)
	virtual void outWaterCallback() { }                                        // _88 (weak)
	virtual f32 getDamageCoeStoneState() { return 0.25f; }                     // _2AC (weak)
	virtual void throwupItemInDeathProcedure() { }                             // _270 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                         // _258 (weak)
	{
		return EnemyTypeID::EnemyID_BigFoot;
	}
	//////////////// VTABLE END

	void resetFlickWalkTimeMax();
	void setFlickWalkTimeMax();
	void getTargetPosition();
	void createIKSystem();
	void setupIKSystem();
	void setIKParameter();
	void setIKSystemTargetPosition(Vector3f& targetPosition);
	void updateIKSystem();
	void doAnimationIKSystem();
	void finishAnimationIKSystem();
	void startProgramedIK();
	void startIKMotion();
	void finishIKMotion();
	void forceFinishIKMotion();
	bool isFinishIKMotion();
	void startBlendMotion();
	void finishBlendMotion();
	Vector3f getTraceCentrePosition();
	bool isCollisionCheck(CollPart* part);
	void createShadowSystem();
	void setupShadowSystem();
	void doAnimationShadowSystem();
	void createMaterialAnimation();
	void startMaterialAnimation();
	void updateMaterialAnimation();
	void setupCollision();
	void createItemAndEnemy();
	void startBossChargeBGM();
	void startBossAttackLoopBGM();
	void finishBossAttackLoopBGM();
	void startStoneStateBossAttackLoopBGM();
	void finishStoneStateBossAttackLoopBGM();
	void updateBossBGM();
	void resetBossAppearBGM();
	void setBossAppearBGM();
	void createEffect();
	void setupEffect();
	void createOnGroundEffect(int footIdx, WaterBox* wb);
	void createOffGroundEffect(int footIdx, WaterBox* wb);
	void startPinchJointEffect();
	void finishPinchJointEffect();
	void startDeadEffect();
	void updatePinchLife();
	void startFurEffect();
	void finishFurEffect();
	void updateDeadFurEffect();
	void effectDrawOn();
	void effectDrawOff();
	void addShadowScale();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                                  // _2BC
	f32 mStateTimer;                            // _2C0
	StateID mNextState;                         // _2C4
	Vector3f mTargetPosition;                   // _2C8
	f32 mShadowScale;                           // _2D4
	f32 mFlickWalkTimeMax;                      // _2D8
	bool mUpdateMaterialAnim;                   // _2DC
	bool mIsSmoking;                            // _2DD
	bool mIsEnraged;                            // _2DE, next walk cycle will be fast
	IKSystemMgr* mIkSystemMgr;                  // _2E0
	IKSystemParms* mIkSystemParms;              // _2E4
	BigFootGroundCallBack* mGroundCallBack;     // _2E8
	BigFootShadowMgr* mShadowMgr;               // _2EC
	Vector3f mJointPositions[4][4];             // _2F0
	efx::TOdamaFoot* mFootFX[4];                // _3B0, stepping on ground
	efx::TDamaFootw* mFootWFX[4];               // _3C0, stepping in water
	efx::TDamaSmoke* mSmokeFX[3];               // _3D0, smoke
	efx::TOdamaHahen* mHahenFX[4][3];           // _3DC, shards
	efx::TDamaDeadElecA* mDeadElecAFX[4][3];    // _40C, death electricity A
	efx::TDamaDeadElecB* mDeadElecBFX[4][2];    // _43C, death electricity B
	efx::TOdamaDeadHahenA* mDeadHahenAFX[4][2]; // _45C, death shards A
	efx::TOdamaDeadHahenB* mDeadHahenBFX[4];    // _47C, death shards B
	efx::TOdamaDeadHahenC1* mDeadHahenC1FX;     // _48C, death shards C1
	efx::TOdamaDeadHahenC2* mDeadHahenC2FX;     // _490, death shards C2
	efx::TOdamaFur1* mBodyHairFX;               // _494
	efx::TOdamaFur2* mLegHairFX[4];             // _498
	Sys::MatLoopAnimator* mMatLoopAnimator;     // _4A8
	                                            // _4AC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr() {};                              // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_BigFoot;
	}
	virtual SysShape::Model* createModel();         // _B0
	virtual void loadModelData();                   // _C8
	virtual void loadTexData();                     // _D0
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x21240030);
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Sys::MatTevRegAnimation* mTevRegAnimation; // _44
	Obj* mObj;                                 // _48
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mBaseCoefficient(this, 'fp01', "ベース係数", 3.0f, 0.0f, 10.0f)        // 'base factor'
		    , mRaiseSlowdownFactor(this, 'fp02', "上げ減速係数", -0.2f, -5.0f, 5.0f) // 'raising deceleration factor'
		    , mDownwardAccelFactor(this, 'fp03', "下げ加速係数", 0.5f, -5.0f, 5.0f)  // 'downward acceleration factor'
		    , mMinDecelFactor(this, 'fp04', "最低減加速係数", -2.5f, -10.0f,
		                      10.0f) // 'minimum deceleration acceleration factor'
		    , mMaxDecelFactor(this, 'fp05', "最高減加速係数", 10.0f, -10.0f,
		                      10.0f)                                                           // 'maximum deceleration acceleration factor'
		    , mLegSwing(this, 'fp06', "足の振り上げ", 120.0f, 0.0f, 200.0f)                    // 'leg swing'
		    , mEnragedBaseCoefficient(this, 'fp11', "ベース係数(s)", 3.0f, 0.0f, 10.0f)        // 'base factor(s)'
		    , mEnragedRaiseSlowdownFactor(this, 'fp12', "上げ減速係数(s)", -0.2f, -5.0f, 5.0f) // 'raising deceleration factor(s)'
		    , mEnragedDownwardAccelFactor(this, 'fp13', "下げ加速係数(s)", 0.5f, -5.0f, 5.0f)  // 'downward acceleration factor(s)'
		    , mEnragedMinDecelFactor(this, 'fp14', "最低減加速係数(s)", -2.0f, -10.0f,
		                             10.0f) // 'minimum deceleration acceleration factor(s)'
		    , mEnragedMaxDecelFactor(this, 'fp15', "最高減加速係数(s)", 10.0f, -10.0f,
		                             10.0f)                                            // 'maximum deceleration acceleration factor(s)'
		    , mEnragedLegSwing(this, 'fp16', "足の振り上げ(s)", 120.0f, 0.0f, 200.0f)  // 'leg swing(s)'
		    , mMovementOffset(this, 'fp17', "移動オフセット(s)", 50.0f, 0.0f, 200.0f)  // 'movement offset(s)'
		    , mNormalTravelTime(this, 'fp20', "通常移動時間", 10.0f, 0.0f, 100.0f)     // 'normal travel time'
		    , mPostShakeTravelTime(this, 'fp21', "振払後移動時間", 3.0f, 0.0f, 100.0f) // 'post-shakeoff travel time'
		{
		}

		Parm<f32> mBaseCoefficient;            // _804, fp01
		Parm<f32> mRaiseSlowdownFactor;        // _82C, fp02
		Parm<f32> mDownwardAccelFactor;        // _854, fp03
		Parm<f32> mMinDecelFactor;             // _87C, fp04
		Parm<f32> mMaxDecelFactor;             // _8A4, fp05
		Parm<f32> mLegSwing;                   // _8CC, fp06
		Parm<f32> mEnragedBaseCoefficient;     // _8F4, fp11
		Parm<f32> mEnragedRaiseSlowdownFactor; // _91C
		Parm<f32> mEnragedDownwardAccelFactor; // _944
		Parm<f32> mEnragedMinDecelFactor;      // _96C
		Parm<f32> mEnragedMaxDecelFactor;      // _994
		Parm<f32> mEnragedLegSwing;            // _9BC
		Parm<f32> mMovementOffset;             // _9E4, fp17
		Parm<f32> mNormalTravelTime;           // _A0C, fp20
		Parm<f32> mPostShakeTravelTime;        // _A34, fp21
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
	BIGFOOTANIM_Dead    = 0,
	BIGFOOTANIM_Landing = 1,
	BIGFOOTANIM_Wait    = 2,
	BIGFOOTANIM_Flick   = 3,
	BIGFOOTANIM_AnimCount, // 4
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator mAnimator; // _10
};

struct BigFootShadowMgr {
	BigFootShadowMgr(Obj*);

	void init();
	void setJointPosPtr(int, int, Vector3f*);
	void update();

	Matrixf* mMatrix;                        // _00
	Obj* mObj;                               // _04
	Vector3f* mJointPosPtrs[4][4];           // _08
	JointShadowRootNode* mRootNode;          // _48
	SphereShadowNode* mBodySphereShadow;     // _4C
	TubeShadowTransNode* mLegTubeShadow1[4]; // _50, rhand=0, lhand=1, rfoot=2, lfoot=3
	TubeShadowSetNode* mLegTubeShadow2[4];   // _60, rhand=0, lhand=1, rfoot=2, lfoot=3
	TubeShadowSetNode* mLegTubeShadow3[4];   // _70, rhand=0, lhand=1, rfoot=2, lfoot=3
	SphereShadowNode* mLegSphereShadow1[4];  // _80, rhand=0, lhand=1, rfoot=2, lfoot=3
	SphereShadowNode* mLegSphereShadow2[4];  // _90, rhand=0, lhand=1, rfoot=2, lfoot=3
	SphereShadowNode* mLegSphereShadow3[4];  // _A0, rhand=0, lhand=1, rfoot=2, lfoot=3
};

struct BigFootGroundCallBack : public JointGroundCallBack {
	inline BigFootGroundCallBack(Obj* obj)
	    : mObj(obj)
	{
	}

	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C

	// _00	= VTBL
	Obj* mObj; // _04
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

struct StateDead : public State {
	inline StateDead()
	    : State(BIGFOOT_Dead, "dead")
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
	    : State(BIGFOOT_Flick, "flick")
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
	    : State(BIGFOOT_Land, "land")
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
	    : State(BIGFOOT_Stay, "stay")
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
	    : State(BIGFOOT_Wait, "wait")
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
	    : State(BIGFOOT_Walk, "walk")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace BigFoot
} // namespace Game

#endif
