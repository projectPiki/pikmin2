#ifndef _GAME_ENTITIES_DAMAGUMO_H
#define _GAME_ENTITIES_DAMAGUMO_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/JointFuncs.h"
#include "efx/TDama.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"

/**
 * --Header for Beady Long Legs (Damagumo)--
 */

namespace Sys {
struct MatLoopAnimator;
} // namespace Sys

namespace Game {
struct IKSystemMgr;
struct IKSystemParms;

namespace Damagumo {
struct DamagumoGroundCallBack;
struct DamagumoShadowMgr;
struct FSM;

enum StateID {
	DAMAGUMO_NULL  = -1,
	DAMAGUMO_Dead  = 0,
	DAMAGUMO_Stay  = 1,
	DAMAGUMO_Land  = 2,
	DAMAGUMO_Wait  = 3,
	DAMAGUMO_Flick = 4,
	DAMAGUMO_Walk  = 5,
	DAMAGUMO_Count,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void constructor();                     // _2C
	virtual void onInit(CreatureInitArg* settings); // _30
	virtual void doDirectDraw(Graphics& gfx);       // _50

	virtual void collisionCallback(CollEvent& event);                          // _EC
	virtual void getShadowParam(ShadowParam& settings);                        // _134
	virtual bool needShadow();                                                 // _138
	virtual ~Obj() { }                                                         // _1BC (weak)
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
		return EnemyTypeID::EnemyID_Damagumo;
	}
	//////////////// VTABLE END

	void getTargetPosition();
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
	bool isCollisionCheck(CollPart*);
	void createShadowSystem();
	void setupShadowSystem();
	void doAnimationShadowSystem();
	void createMaterialAnimation();
	void startMaterialAnimation();
	void updateMaterialAnimation();
	void setupCollision();
	void createItemAndEnemy();
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
	void startDeadEffect();
	void updatePinchLife();
	void effectDrawOn();
	void effectDrawOff();
	void addShadowScale();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                                 // _2BC
	f32 mStateTimer;                           // _2C0, how long BLL has been in wait or walk state
	f32 mStateDuration;                        // _2C4, how long each phase lasts - 1.75-3.5s for wait, 3.25-6.5s for walk
	int mNextState;                            // _2C8
	Vector3f mTargetPosition;                  // _2CC
	f32 mShadowScale;                          // _2D8
	u8 mDoPlayDeadMatAnim;                     // _2DC
	bool mIsSmoking;                           // _2DD
	IKSystemMgr* mIkSystemMgr;                 // _2E0
	IKSystemParms* mIkSystemParms;             // _2E4
	DamagumoGroundCallBack* mGroundCallBack;   // _2E8
	DamagumoShadowMgr* mShadowMgr;             // _2EC
	Vector3f mJointPositions[4][4];            // _2F0, guess based on BigFoot struct
	efx::TDamaFoot* mFootFX[4];                // _3B0
	efx::TDamaFootw* mFootWFX[4];              // _3C0
	efx::TDamaSmoke* mSmokeFX[3];              // _3D0
	efx::TDamaHahen* mHahenFX[4][3];           // _3DC, guess based on BigFoot struct
	efx::TDamaDeadElecA* mDeadElecAFX[4][3];   // _40C, guess based on BigFoot struct
	efx::TDamaDeadElecB* mDeadElecBFX[4][2];   // _43C, guess based on BigFoot struct
	efx::TDamaDeadHahenA* mDeadHahenAFX[4][2]; // _45C, guess based on BigFoot struct
	efx::TDamaDeadHahenB* mDeadHahenBFX[4];    // _47C
	efx::TDamaDeadHahenC1* mDeadHahenC1FX;     // _48C
	efx::TDamaDeadHahenC2* mDeadHahenC2FX;     // _490
	Sys::MatLoopAnimator* mMatLoopAnimator;    // _494, array of 2 MatLoopAnimators: 0 = tex, 1 = tev reg
	                                           // _498 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                    // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Damagumo;
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
	Sys::MatTexAnimation* mTexAnimation;       // _44
	Sys::MatTevRegAnimation* mTevRegAnimation; // _48
	Obj* mObj;                                 // _4C, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mBaseFactor(this, 'fp01', "ベース係数", 3.0f, 0.0f, 10.0f)                 // 'base factor'
		    , mRaiseDecelFactor(this, 'fp02', "上げ減速係数", -0.2f, -5.0f, 5.0f)        // 'raising deceleration factor'
		    , mDownwardAccelFactor(this, 'fp03', "下げ加速係数", 0.5f, -5.0f, 5.0f)      // 'downward acceleration factor'
		    , mMinDecelAccelFactor(this, 'fp04', "最低減加速係数", -2.0f, -10.0f, 10.0f) // 'minimum deceleration acceleration factor'
		    , mMaxDecelAccelFactor(this, 'fp05', "最高減加速係数", 10.0f, -10.0f, 10.0f) // 'maximum deceleration acceleration factor'
		    , mLegSwing(this, 'fp06', "足の振り上げ", 120.0f, 0.0f, 200.0f)              // 'leg swing'
		{
		}

		Parm<f32> mBaseFactor;          // _804
		Parm<f32> mRaiseDecelFactor;    // _82C
		Parm<f32> mDownwardAccelFactor; // _854
		Parm<f32> mMinDecelAccelFactor; // _87C
		Parm<f32> mMaxDecelAccelFactor; // _8A4
		Parm<f32> mLegSwing;            // _8CC
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
	DAMAGUMOANIM_Dead    = 0,
	DAMAGUMOANIM_Landing = 1,
	DAMAGUMOANIM_Wait    = 2,
	DAMAGUMOANIM_Flick   = 3,
	DAMAGUMOANIM_AnimCount, // 4
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

struct DamagumoShadowMgr {
	DamagumoShadowMgr(Obj*);

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

struct DamagumoGroundCallBack : public JointGroundCallBack {
	inline DamagumoGroundCallBack(Obj* obj)
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
	    : State(DAMAGUMO_Dead, "dead")
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
	    : State(DAMAGUMO_Flick, "flick")
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
	    : State(DAMAGUMO_Land, "land")
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
	    : State(DAMAGUMO_Stay, "stay")
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
	    : State(DAMAGUMO_Wait, "wait")
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
	    : State(DAMAGUMO_Walk, "walk")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Damagumo
} // namespace Game

#endif
