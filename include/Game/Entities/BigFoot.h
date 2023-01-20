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
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void onKill(CreatureKillArg* settings);         // _34
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void collisionCallback(CollEvent& event);       // _EC
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual bool needShadow();                              // _138
	virtual ~Obj() {};                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doUpdateCommon();                          // _1D0
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void getThrowupItemPosition(Vector3f*);         // _268
	virtual void getThrowupItemVelocity(Vector3f*);         // _26C
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
	virtual void inWaterCallback(WaterBox* wb) { }          // _84 (weak)
	virtual void outWaterCallback() { }                     // _88 (weak)
	virtual f32 getDamageCoeStoneState() { return 0.25f; }  // _2AC (weak)
	virtual void throwupItemInDeathProcedure() { }          // _270 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()      // _258 (weak)
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
	void createOnGroundEffect(int, WaterBox*);
	void createOffGroundEffect(int, WaterBox*);
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
	FSM* m_fsm;                                  // _2BC
	f32 m_stateTimer;                            // _2C0
	StateID m_nextState;                         // _2C4
	Vector3f m_targetPosition;                   // _2C8
	f32 m_shadowScale;                           // _2D4
	f32 m_flickWalkTimeMax;                      // _2D8
	bool _2DC;                                   // _2DC
	bool m_isSmoking;                            // _2DD
	bool m_isEnraged;                            // _2DE, next walk cycle will be fast
	IKSystemMgr* m_ikSystemMgr;                  // _2E0
	IKSystemParms* m_ikSystemParms;              // _2E4
	BigFootGroundCallBack* m_groundCallBack;     // _2E8
	BigFootShadowMgr* m_shadowMgr;               // _2EC
	Vector3f m_jointPositions[4][4];             // _2F0
	efx::TOdamaFoot* m_footFX[4];                // _3B0, stepping on ground
	efx::TDamaFootw* m_footWFX[4];               // _3C0, stepping in water
	efx::TDamaSmoke* m_smokeFX[3];               // _3D0, smoke
	efx::TOdamaHahen* m_hahenFX[4][3];           // _3DC, shards
	efx::TDamaDeadElecA* m_deadElecAFX[4][3];    // _40C, death electricity A
	efx::TDamaDeadElecB* m_deadElecBFX[4][2];    // _43C, death electricity B
	efx::TOdamaDeadHahenA* m_deadHahenAFX[4][2]; // _45C, death shards A
	efx::TOdamaDeadHahenB* m_deadHahenBFX[4];    // _47C, death shards B
	efx::TOdamaDeadHahenC1* m_deadHahenC1FX;     // _48C, death shards C1
	efx::TOdamaDeadHahenC2* m_deadHahenC2FX;     // _490, death shards C2
	efx::TOdamaFur1* m_bodyHairFX;               // _494
	efx::TOdamaFur2* m_legHairFX[4];             // _498
	Sys::MatLoopAnimator* m_matLoopAnimator;     // _4A8
	                                             // _4AC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr() {};                              // _58 (weak)
	virtual void createObj(int);                       // _A0
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
	Sys::MatTevRegAnimation* m_tevRegAnimation; // _44
	Obj* m_obj;                                 // _48
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_baseCoefficient(this, 'fp01', "ÉxÅ[ÉXåWêî", 3.0f, 0.0f, 10.0f)        // 'base factor'
		    , m_raiseSlowdownFactor(this, 'fp02', "è„Ç∞å∏ë¨åWêî", -0.2f, -5.0f, 5.0f) // 'raising deceleration factor'
		    , m_downwardAccelFactor(this, 'fp03', "â∫Ç∞â¡ë¨åWêî", 0.5f, -5.0f, 5.0f)  // 'downward acceleration factor'
		    , m_minDecelFactor(this, 'fp04', "ç≈í·å∏â¡ë¨åWêî", -2.5f, -10.0f,
		                       10.0f) // 'minimum deceleration acceleration factor'
		    , m_maxDecelFactor(this, 'fp05', "ç≈çÇå∏â¡ë¨åWêî", 10.0f, -10.0f,
		                       10.0f)                                              // 'maximum deceleration acceleration factor'
		    , m_legSwing(this, 'fp06', "ë´ÇÃêUÇËè„Ç∞", 120.0f, 0.0f, 200.0f)       // 'leg swing'
		    , m_baseCoefficients(this, 'fp11', "ÉxÅ[ÉXåWêî(s)", 3.0f, 0.0f, 10.0f) // 'base factor(s)'
		    , m_fp12(this, 'fp12', "è„Ç∞å∏ë¨åWêî(s)", -0.2f, -5.0f, 5.0f)          // 'raising deceleration factor(s)'
		    , m_fp13(this, 'fp13', "â∫Ç∞â¡ë¨åWêî(s)", 0.5f, -5.0f, 5.0f)           // 'downward acceleration factor(s)'
		    , m_fp14(this, 'fp14', "ç≈í·å∏â¡ë¨åWêî(s)", -2.0f, -10.0f,
		             10.0f) // 'minimum deceleration acceleration factor(s)'
		    , m_fp15(this, 'fp15', "ç≈çÇå∏â¡ë¨åWêî(s)", 10.0f, -10.0f,
		             10.0f)                                                             // 'maximum deceleration acceleration factor(s)'
		    , m_fp16(this, 'fp16', "ë´ÇÃêUÇËè„Ç∞(s)", 120.0f, 0.0f, 200.0f)             // 'leg swing(s)'
		    , m_movementOffset(this, 'fp17', "à⁄ìÆÉIÉtÉZÉbÉg(s)", 50.0f, 0.0f, 200.0f)  // 'movement offset(s)'
		    , m_normalTravelTime(this, 'fp20', "í èÌà⁄ìÆéûä‘", 10.0f, 0.0f, 100.0f)     // 'normal travel time'
		    , m_postShakeTravelTime(this, 'fp21', "êUï•å„à⁄ìÆéûä‘", 3.0f, 0.0f, 100.0f) // 'post-shakeoff travel time'
		{
		}

		Parm<f32> m_baseCoefficient;     // _804, fp01
		Parm<f32> m_raiseSlowdownFactor; // _82C, fp02
		Parm<f32> m_downwardAccelFactor; // _854, fp03
		Parm<f32> m_minDecelFactor;      // _87C, fp04
		Parm<f32> m_maxDecelFactor;      // _8A4, fp05
		Parm<f32> m_legSwing;            // _8CC, fp06
		Parm<f32> m_baseCoefficients;    // _8F4, fp11
		Parm<f32> m_fp12;                // _91C
		Parm<f32> m_fp13;                // _944
		Parm<f32> m_fp14;                // _96C
		Parm<f32> m_fp15;                // _994
		Parm<f32> m_fp16;                // _9BC
		Parm<f32> m_movementOffset;      // _9E4, fp17
		Parm<f32> m_normalTravelTime;    // _A0C, fp20
		Parm<f32> m_postShakeTravelTime; // _A34, fp21
	};

	Parms() { }

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		m_general.read(stream);
		m_properParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                     // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                  // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                 // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

struct BigFootShadowMgr {
	BigFootShadowMgr(Obj*);

	void init();
	void setJointPosPtr(int, int, Vector3f*);
	void update();

	Matrixf* m_matrix;                        // _00
	Obj* m_obj;                               // _04
	Vector3f* m_jointPosPtrs[4][4];           // _08
	JointShadowRootNode* m_rootNode;          // _48
	SphereShadowNode* m_bodySphereShadow;     // _4C
	TubeShadowTransNode* m_legTubeShadow1[4]; // _50, rhand=0, lhand=1, rfoot=2, lfoot=3
	TubeShadowSetNode* m_legTubeShadow2[4];   // _60, rhand=0, lhand=1, rfoot=2, lfoot=3
	TubeShadowSetNode* m_legTubeShadow3[4];   // _70, rhand=0, lhand=1, rfoot=2, lfoot=3
	SphereShadowNode* m_legSphereShadow1[4];  // _80, rhand=0, lhand=1, rfoot=2, lfoot=3
	SphereShadowNode* m_legSphereShadow2[4];  // _90, rhand=0, lhand=1, rfoot=2, lfoot=3
	SphereShadowNode* m_legSphereShadow3[4];  // _A0, rhand=0, lhand=1, rfoot=2, lfoot=3
};

struct BigFootGroundCallBack : public JointGroundCallBack {
	inline BigFootGroundCallBack(Obj* obj)
	    : m_obj(obj)
	{
	}

	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C

	// _00	= VTBL
	Obj* m_obj; // _04
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(u16 stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		m_name = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	inline StateDead()
	    : State(BIGFOOT_Dead, "dead")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	inline StateFlick()
	    : State(BIGFOOT_Flick, "flick")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLand : public State {
	inline StateLand()
	    : State(BIGFOOT_Land, "land")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStay : public State {
	inline StateStay()
	    : State(BIGFOOT_Stay, "stay")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	inline StateWait()
	    : State(BIGFOOT_Wait, "wait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalk : public State {
	inline StateWalk()
	    : State(BIGFOOT_Walk, "walk")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace BigFoot
} // namespace Game

#endif
