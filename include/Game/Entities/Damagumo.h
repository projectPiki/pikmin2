#ifndef _GAME_ENTITIES_DAMAGUMO_H
#define _GAME_ENTITIES_DAMAGUMO_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/JointFuncs.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"

/**
 * --Header for Beady Long Legs (Damagumo)--
 */

namespace efx {
// TODO: make headers for these
struct TChasePos2;
struct TDamaFootw;
struct TDamaSmoke;
struct TDamaHahen;
struct TDamaDeadElecA;
struct TDamaDeadElecB;
struct TDamaDeadHahenA;
struct TDamaDeadHahenB;
struct TDamaDeadHahenC1;
struct TDamaDeadHahenC2;
} // namespace efx

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
	virtual void constructor();                             // _2C
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void inWaterCallback(WaterBox* wb);             // _84 (weak)
	virtual void outWaterCallback();                        // _88 (weak)
	virtual void collisionCallback(CollEvent& event);       // _EC
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual bool needShadow();                              // _138
	virtual ~Obj() {};                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doUpdateCommon();                          // _1D0
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual void getThrowupItemPosition(Vector3f*);         // _268
	virtual void getThrowupItemVelocity(Vector3f*);         // _26C
	virtual void throwupItemInDeathProcedure();             // _270 (weak)
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual f32 getDamageCoeStoneState();                   // _2AC (weak)
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
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
	void getTraceCentrePosition();
	void isCollisionCheck(CollPart*);
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
	FSM* m_FSM;                               // _2BC
	f32 m_stateTimer;                         // _2C0, how long BLL has been in wait or walk state
	f32 m_stateDuration;                      // _2C4, how long each phase lasts - 1.75-3.5s for wait, 3.25-6.5s for walk
	int m_nextState;                          // _2C8
	Vector3f m_targetPosition;                // _2CC
	f32 _2D8;                                 // _2D8
	u8 _2DC;                                  // _2DC
	u8 _2DD;                                  // _2DD
	IKSystemMgr* m_IKSystemMgr;               // _2E0
	IKSystemParms* m_IKSystemParms;           // _2E4
	DamagumoGroundCallBack* m_groundCallBack; // _2E8
	DamagumoShadowMgr* m_shadowMgr;           // _2EC
	Vector3f _2F0[16];                        // _2F0, guess based on BigFoot struct
	efx::TChasePos2* _3B0[4];                 // _3B0
	efx::TDamaFootw* _3C0[4];                 // _3C0
	efx::TDamaSmoke* _3D0[3];                 // _3D0
	efx::TDamaHahen* _3DC[3][4];              // _3DC, guess based on BigFoot struct
	efx::TDamaDeadElecA* _40C[3][4];          // _40C, guess based on BigFoot struct
	efx::TDamaDeadElecB* _43C[2][4];          // _43C, guess based on BigFoot struct
	efx::TDamaDeadHahenA* _45C[2][4];         // _45C, guess based on BigFoot struct
	efx::TDamaDeadHahenB* _47C[4];            // _47C
	efx::TDamaDeadHahenC1* _48C;              // _48C
	efx::TDamaDeadHahenC2* _490;              // _490
	Sys::MatLoopAnimator* m_matLoopAnimator;  // _494, guess based on BigFoot struct
	                                          // _498 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                    // _58 (weak)
	virtual void createObj(int);                       // _A0
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
	Sys::MatTexAnimation* m_texAnimation;       // _44
	Sys::MatTevRegAnimation* m_tevRegAnimation; // _48
	Obj* m_obj;                                 // _4C, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "ÉxÅ[ÉXåWêî", 3.0f, 0.0f, 10.0f)        // 'base factor'
		    , m_fp02(this, 'fp02', "è„Ç∞å∏ë¨åWêî", -0.2f, -5.0f, 5.0f)     // 'raising deceleration factor'
		    , m_fp03(this, 'fp03', "â∫Ç∞â¡ë¨åWêî", 0.5f, -5.0f, 5.0f)      // 'downward acceleration factor'
		    , m_fp04(this, 'fp04', "ç≈í·å∏â¡ë¨åWêî", -2.0f, -10.0f, 10.0f) // 'minimum deceleration acceleration factor'
		    , m_fp05(this, 'fp05', "ç≈çÇå∏â¡ë¨åWêî", 10.0f, -10.0f, 10.0f) // 'maximum deceleration acceleration factor'
		    , m_fp06(this, 'fp06', "ë´ÇÃêUÇËè„Ç∞", 120.0f, 0.0f, 200.0f)   // 'leg swing'
		{
		}

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp03; // _854
		Parm<f32> m_fp04; // _87C
		Parm<f32> m_fp05; // _8A4
		Parm<f32> m_fp06; // _8CC
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
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

struct DamagumoShadowMgr;

struct DamagumoGroundCallBack : public JointGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C

	// _00	= VTBL
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
	    : State(DAMAGUMO_Dead, "dead")
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
	    : State(DAMAGUMO_Flick, "flick")
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
	    : State(DAMAGUMO_Land, "land")
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
	    : State(DAMAGUMO_Stay, "stay")
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
	    : State(DAMAGUMO_Wait, "wait")
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
	    : State(DAMAGUMO_Walk, "walk")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Damagumo
} // namespace Game

#endif
