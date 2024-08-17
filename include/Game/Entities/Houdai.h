#ifndef _GAME_ENTITIES_HOUDAI_H
#define _GAME_ENTITIES_HOUDAI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "efx/TDama.h"
#include "efx/THdama.h"
#include "Collinfo.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "Game/IKSystemBase.h"

/**
 * --Header for Man-at-Legs (Houdai)--
 */

namespace Game {
namespace Houdai {
struct HoudaiGroundCallBack;
struct HoudaiShadowMgr;
struct HoudaiShotGunMgr;
struct FSM;

enum StateID {
	HOUDAI_NULL  = -1,
	HOUDAI_Dead  = 0,
	HOUDAI_Stay  = 1,
	HOUDAI_Land  = 2,
	HOUDAI_Wait  = 3,
	HOUDAI_Flick = 4,
	HOUDAI_Walk  = 5,
	HOUDAI_Shot  = 6,
	HOUDAI_Count,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                            // _30
	virtual void onKill(CreatureKillArg* settings);                            // _34
	virtual void doDirectDraw(Graphics& gfx);                                  // _50
	virtual void getShadowParam(ShadowParam& settings);                        // _134
	virtual ~Obj() {};                                                         // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);             // _1C4
	virtual void doUpdate();                                                   // _1CC
	virtual void doUpdateCommon();                                             // _1D0
	virtual void doAnimationCullingOff();                                      // _1DC
	virtual void doDebugDraw(Graphics& gfx);                                   // _1EC
	virtual void setParameters();                                              // _228
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
		return EnemyTypeID::EnemyID_Houdai;
	}
	//////////////// VTABLE END

	void setTargetPattern();
	void getTargetPosition();
	void setShotGunTargetPosition();
	void createIKSystem();
	void setupIKSystem();
	void setIKParameter();
	void setIKSystemTargetPosition(Vector3f&);
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
	void createShadowSystem();
	void setupShadowSystem();
	void doAnimationShadowSystem();
	void setShotGunEmitKeepTimerOn();
	void setShotGunEmitKeepTimerOff();
	void updateShotGunTimer();
	bool isTransitShotGunState();
	void createShotGun();
	void setupShotGun();
	void setShotGunTarget(Vector3f&);
	void resetShotGunCallBack();
	void setShotGunCallBack();
	void doUpdateShotGun();
	void doUpdateCommonShotGun();
	void startShotGunRotation();
	void finishShotGunRotation();
	bool isShotGunRotation();
	bool isShotGunLockOn();
	bool isFinishShotGun();
	void emitShotGun();
	void forceFinishShotGun();
	void setupCollision();
	void startBossChargeBGM();
	void startBossAttackLoopBGM();
	void finishBossAttackLoopBGM();
	void startStoneStateBossAttackLoopBGM();
	void finishStoneStateBossAttackLoopBGM();
	void startBossFlickBGM();
	void updateBossBGM();
	void resetBossAppearBGM();
	void setBossAppearBGM();
	void createEffect();
	void setupEffect();
	void createOnGroundEffect(int, WaterBox*);
	void createOffGroundEffect(int, WaterBox*);
	void startPinchJointEffect();
	void finishPinchJointEffect();
	void createHoudaiDeadEffect();
	void updatePinchLife();
	void createAppearEffect();
	void createAppearHahenEffect();
	void createAppearFootEffect(int);
	void startSteamEffect(bool);
	void finishSteamEffect();
	void startChimneyEffect();
	void finishChimneyEffect();
	void createShotGunOpenEffect();
	void createDeadBombEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                                  // _2BC
	f32 mStateTimer;                            // _2C0, how long MAL has been in wait or walk state
	f32 mStateDuration;                         // _2C4, how long each phase lasts - 1.5-3s for wait, 3.5-7s for walk
	f32 mShotGunBurstTimer;                     // _2C8, how long shotgun has been blasting for (this burst)
	f32 mShotGunSearchTimer;                    // _2CC, how long to keep shotgun on with no targets left in range
	StateID mNextState;                         // _2D0
	Vector3f mTargetPosition;                   // _2D4
	Vector3f mShotGunTargetPosition;            // _2E0
	bool mIsSmoking;                            // _2EC, is below critical health
	u8 mShotGunState;                           // _2ED
	bool mTargetNearest;                        // _2EE, if false, target nearest navi's nearest piki (i.e. party)
	bool mIsAttackMusicLooping;                 // _2EF
	IKSystemMgr* mIkSystemMgr;                  // _2F0
	IKSystemParms* mIkSystemParms;              // _2F4
	HoudaiGroundCallBack* mGroundCallBack;      // _2F8
	HoudaiShadowMgr* mShadowMgr;                // _2FC
	HoudaiShotGunMgr* mShotGunMgr;              // _300
	Vector3f mJointPositions[4][4];             // _304
	efx::TDamaSmoke* mSmokeFX[2];               // _3C4
	efx::THdamaHahen* mHahenFX[3];              // _3CC
	efx::TDamaDeadElecA* mDeadElecAFX[3];       // _3D8
	efx::THdamaOnHahen1* mAppearHahenFX;        // _3E4
	efx::THdamaOnHahen2* mAppearHahenFootFX[4]; // _3E8
	efx::THdamaOnSteam1* mOnSteam1FX;           // _3F8
	efx::THdamaSteamBd* mSteamBodyFX;           // _3FC
	efx::THdamaSteam* mSteamFX[3];              // _400
	efx::THdamaSteamSt* mChimneyFX[3];          // _40C
	efx::THdamaDeadbomb* mDeadBombFX;           // _418
	efx::THdamaDeadSteam* mDeadSteamFX;         // _41C
	                                            // _420 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                  // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Houdai;
	}
	virtual void loadModelData();                   // _C8
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x21240030);
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, probably
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mBaseFactor(this, 'fp01', "ベース係数", 5.0f, 0.0f, 10.0f)                 // 'base factor'
		    , mRaiseDecelFactor(this, 'fp02', "上げ減速係数", -0.4f, -5.0f, 5.0f)        // 'raising deceleration factor'
		    , mDownwardAccelFactor(this, 'fp03', "下げ加速係数", 0.5f, -5.0f, 5.0f)      // 'downward acceleration factor'
		    , mMinDecelAccelFactor(this, 'fp04', "最低減加速係数", -3.0f, -10.0f, 10.0f) // 'minimum deceleration acceleration factor'
		    , mMaxDecelAccelFactor(this, 'fp05', "最高減加速係数", 10.0f, -10.0f, 10.0f) // 'maximum deceleration acceleration factor'
		    , mLegSwing(this, 'fp06', "足の振り上げ", 90.0f, 0.0f, 200.0f)               // 'leg swing'
		    , mMaxShootingOn(this, 'fp10', "射撃On:Max", 2.0f, 0.0f, 10.0f)              // 'shooting on:max'
		    , mMinShootingOn(this, 'fp11', "射撃On:Min", 1.0f, 0.0f, 10.0f)              // 'shooting on:min'
		    , mMaxShootingOff(this, 'fp12', "射撃Off:Max", 1.0f, 0.0f, 10.0f)            // 'shooting off:max'
		    , mMinShootingOff(this, 'fp13', "射撃Off:Min", 0.5f, 0.0f, 10.0f)            // 'shooting off:min'
		    , mLastToTerritory(this, 'fp20', "Last 2 Territory", 380.0f, 0.0f, 500.0f)   // 'Last 2 Territory'
		{
		}

		Parm<f32> mBaseFactor;          // _804
		Parm<f32> mRaiseDecelFactor;    // _82C
		Parm<f32> mDownwardAccelFactor; // _854
		Parm<f32> mMinDecelAccelFactor; // _87C
		Parm<f32> mMaxDecelAccelFactor; // _8A4
		Parm<f32> mLegSwing;            // _8CC
		Parm<f32> mMaxShootingOn;       // _8F4
		Parm<f32> mMinShootingOn;       // _91C
		Parm<f32> mMaxShootingOff;      // _944
		Parm<f32> mMinShootingOff;      // _96C
		Parm<f32> mLastToTerritory;     // _994
	};

	Parms() {};

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
	HOUDAIANIM_Dead    = 0,
	HOUDAIANIM_Dormant = 1, // 'landing'
	HOUDAIANIM_Wait    = 2,
	HOUDAIANIM_Flick   = 3,
	HOUDAIANIM_Attack  = 4,
	HOUDAIANIM_AnimCount, // 5
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

struct HoudaiShadowMgr {
	HoudaiShadowMgr(Obj*);

	void init();
	void setJointPosPtr(int, int, Vector3f*);
	void update();

	Matrixf* mMatrix;                        // _00
	Obj* mObj;                               // _04
	Vector3f* mJointPosPtrs[4][4];           // _08
	JointShadowRootNode* mRootNode;          // _48
	TubeShadowSetNode* mLegTubeShadow1[4];   // _4C, rhand=0, lhand=1, rfoot=2, lfoot=3
	TubeShadowSetNode* mLegTubeShadow2[4];   // _5C, rhand=0, lhand=1, rfoot=2, lfoot=3
	TubeShadowSetNode* mLegTubeShadow3[4];   // _6C, rhand=0, lhand=1, rfoot=2, lfoot=3
	TubeShadowSetNode* mLegTubeShadow4[4];   // _7C, rhand=0, lhand=1, rfoot=2, lfoot=3
	SphereShadowNode* mBodySphereShadow;     // _8C
	SphereShadowNode* mLegSphereShadow1[4];  // _90, rhand=0, lhand=1, rfoot=2, lfoot=3
	SphereShadowNode* mLegSphereShadow2[4];  // _A0, rhand=0, lhand=1, rfoot=2, lfoot=3
	SphereShadowNode* mLegSphereShadow3[4];  // _B0, rhand=0, lhand=1, rfoot=2, lfoot=3
	SphereShadowNode* mMetalLegSphereShadow; // _C0
};

struct HoudaiGroundCallBack : public JointGroundCallBack {
	inline HoudaiGroundCallBack(Obj* obj)
	    : mObj(obj)
	{
	}

	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C

	// _00	= VTBL
	Obj* mObj; // _04
};

struct HoudaiShotGunNode : public CNode {
	HoudaiShotGunNode(Obj* houdai);

	virtual ~HoudaiShotGunNode() { } // _08 (weak)

	bool update();

	void create();
	void setPosition(Vector3f& pos);
	void setVelocity(Vector3f& vel);
	void startShotGun();

	HoudaiShotGunNode* getChild() const { return static_cast<HoudaiShotGunNode*>(mChild); }

	// _00		= VTBL
	// _00-_18 	= CNode
	Obj* mOwner;                 // _18
	efx::THdamaShell* mEfxShell; // _1C
	Vector3f mPosition;          // _20
	Vector3f mVelocity;          // _2C
};

struct HoudaiShotGunMgr {
	HoudaiShotGunMgr(Obj*);

	void setupShotGun();
	void resetCallBack();
	void setCallBack();
	void startRotation();
	void finishRotation();
	bool isShotGunRotation();
	bool isShotGunLockOn();
	bool isFinishShotGun();
	void setShotGunTarget(Vector3f&);
	void emitShotGun();
	void doUpdate();
	void doUpdateCommon();
	void forceFinishShotGun();
	bool searchShotGunRotation();
	bool returnShotGunRotation();
	void rotateLevel(J3DJoint*);
	void rotateVertical(J3DJoint*);
	void finishLockOnEffect();
	void setShotGunLockOnPosition();
	void effectDrawOn();
	void effectDrawOff();
	void startStoneStateEffectOff();
	void startStoneStateEffectOn();
	void finishStoneStateEffectOn();

	Obj* mOwner;                       // _00
	bool mIsShotGunRotation;           // _04
	bool mIsShotGunLockedOn;           // _05
	bool mIsShotGunFinished;           // _06
	f32 mYaw;                          // _08, (-) used for rotateLevel
	f32 mPitch;                        // _0C, (+) used for rotateVertical
	Matrixf* mHeadMtx;                 // _10, world matrix for head joint
	Matrixf* mGunMtx;                  // _14, world matrix for gun joint
	Vector3f mTargetPosition;          // _18
	Vector3f mLockOnPosition;          // _24
	efx::THdamaSight* mEfxSight;       // _30
	HoudaiShotGunNode* mActiveNodes;   // _34
	HoudaiShotGunNode* mInactiveNodes; // _38
};

// static bool levelRotationCallBack(J3DJoint*, int);
// static bool verticalRotationCallBack(J3DJoint*, int);

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
	    : State(HOUDAI_Dead, "dead")
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
	    : State(HOUDAI_Flick, "flick")
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
	    : State(HOUDAI_Land, "land")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateShot : public State {
	inline StateShot()
	    : State(HOUDAI_Shot, "shot")
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
	    : State(HOUDAI_Stay, "stay")
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
	    : State(HOUDAI_Wait, "wait")
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
	    : State(HOUDAI_Walk, "walk")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Houdai
} // namespace Game

#endif
