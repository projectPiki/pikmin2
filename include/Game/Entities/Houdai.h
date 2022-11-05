#ifndef _GAME_ENTITIES_HOUDAI_H
#define _GAME_ENTITIES_HOUDAI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"

/**
 * --Header for Man-at-Legs (Houdai)--
 */

namespace efx {
struct TDamaSmoke;
struct THdamaHahen;
struct TDamaDeadElecA;
struct THdamaOnHahen1;
struct THdamaOnHahen2;
struct THdamaOnSteam1;
struct THdamaSteamBd;
struct THdamaSteam;
struct THdamaSteamSt;
struct TChaseMtx4;
struct TChaseMtx2;
struct THdamaShell;
struct THdamaSight;
} // namespace efx

namespace Game {
struct IKSystemMgr;
struct IKSystemParms;

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
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void onKill(CreatureKillArg* settings);         // _34
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void inWaterCallback(WaterBox* wb);             // _84 (weak)
	virtual void outWaterCallback();                        // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() {};                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doUpdateCommon();                          // _1D0
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void setParameters();                           // _228
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
	void getTraceCentrePosition();
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
	FSM* m_FSM;                             // _2BC
	f32 m_stateTimer;                       // _2C0, how long MAL has been in wait or walk state
	f32 m_stateDuration;                    // _2C4, how long each phase lasts - 1.5-3s for wait, 3.5-7s for walk
	f32 _2C8;                               // _2C8, shotgun timer?
	f32 _2CC;                               // _2CC, timer?
	StateID m_nextState;                    // _2D0
	Vector3f m_targetPosition;              // _2D4
	Vector3f m_shotGunTargetPosition;       // _2E0
	u8 _2EC;                                // _2EC
	u8 _2ED;                                // _2ED
	u8 _2EE;                                // _2EE
	u8 _2EF;                                // _2EF
	IKSystemMgr* m_IKSystemMgr;             // _2F0
	IKSystemParms* m_IKSystemParms;         // _2F4
	HoudaiGroundCallBack* m_groundCallBack; // _2F8
	HoudaiShadowMgr* m_shadowMgr;           // _2FC
	HoudaiShotGunMgr* m_shotGunMgr;         // _300
	Vector3f _304[16];                      // _304
	efx::TDamaSmoke* _3C4[2];               // _3C4
	efx::THdamaHahen* _3CC[3];              // _3CC
	efx::TDamaDeadElecA* _3D8[3];           // _3D8
	efx::THdamaOnHahen1* _3E4;              // _3E4
	efx::THdamaOnHahen2* _3E8[4];           // _3E8
	efx::THdamaOnSteam1* _3F8;              // _3F8
	efx::THdamaSteamBd* _3FC;               // _3FC
	efx::THdamaSteam* _400[3];              // _400
	efx::THdamaSteamSt* _40C[3];            // _40C
	efx::TChaseMtx4* _418;                  // _418, Deadbomb?
	efx::TChaseMtx2* _41C;                  // _41C, DeadSteam?
	                                        // _420 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                  // _58 (weak)
	virtual void createObj(int);                       // _A0
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
	Obj* m_obj; // _44, probably
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "ÉxÅ[ÉXåWêî", 5.0f, 0.0f, 10.0f)          // 'base factor'
		    , m_fp02(this, 'fp02', "è„Ç∞å∏ë¨åWêî", -0.4f, -5.0f, 5.0f)       // 'raising deceleration factor'
		    , m_fp03(this, 'fp03', "â∫Ç∞â¡ë¨åWêî", 0.5f, -5.0f, 5.0f)        // 'downward acceleration factor'
		    , m_fp04(this, 'fp04', "ç≈í·å∏â¡ë¨åWêî", -3.0f, -10.0f, 10.0f)   // 'minimum deceleration acceleration factor'
		    , m_fp05(this, 'fp05', "ç≈çÇå∏â¡ë¨åWêî", 10.0f, -10.0f, 10.0f)   // 'maximum deceleration acceleration factor'
		    , m_fp06(this, 'fp06', "ë´ÇÃêUÇËè„Ç∞", 90.0f, 0.0f, 200.0f)      // 'leg swing'
		    , m_fp10(this, 'fp10', "éÀåÇOn:Max", 2.0f, 0.0f, 10.0f)          // 'shooting on:max'
		    , m_fp11(this, 'fp11', "éÀåÇOn:Min", 1.0f, 0.0f, 10.0f)          // 'shooting on:min'
		    , m_fp12(this, 'fp12', "éÀåÇOff:Max", 1.0f, 0.0f, 10.0f)         // 'shooting off:max'
		    , m_fp13(this, 'fp13', "éÀåÇOff:Min", 0.5f, 0.0f, 10.0f)         // 'shooting off:min'
		    , m_fp20(this, 'fp20', "Last 2 Territory", 380.0f, 0.0f, 500.0f) // 'Last 2 Territory'
		{
		}

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp03; // _854
		Parm<f32> m_fp04; // _87C
		Parm<f32> m_fp05; // _8A4
		Parm<f32> m_fp06; // _8CC
		Parm<f32> m_fp10; // _8F4
		Parm<f32> m_fp11; // _91C
		Parm<f32> m_fp12; // _944
		Parm<f32> m_fp13; // _96C
		Parm<f32> m_fp20; // _994
	};

	Parms() {};

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

struct HoudaiShadowMgr;

struct HoudaiGroundCallBack : public JointGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C

	// _00	= VTBL
	Obj* m_obj; // _04
};

struct HoudaiShotGunNode : public CNode {
	virtual ~HoudaiShotGunNode(); // _08 (weak)

	void update();

	// _00		= VTBL
	// _00-_18 	= CNode
	Obj* m_owner;                 // _18
	efx::THdamaShell* m_efxShell; // _1C
	Vector3f _20;                 // _20
	Vector3f _2C;                 // _2C
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
	void searchShotGunRotation();
	void returnShotGunRotation();
	void rotateLevel(J3DJoint*);
	void rotateVertical(J3DJoint*);
	void finishLockOnEffect();
	void setShotGunLockOnPosition();
	void effectDrawOn();
	void effectDrawOff();
	void startStoneStateEffectOff();
	void startStoneStateEffectOn();

	Obj* m_owner;                 // _00
	bool m_isShotGunRotation;     // _04
	bool m_isShotGunLockedOn;     // _05
	bool m_isShotGunFinished;     // _06
	f32 _08;                      // _08
	f32 _0C;                      // _0C
	Matrixf* _10;                 // _10
	Matrixf* _14;                 // _14
	Vector3f m_targetPosition;    // _18
	u8 _24[0xC];                  // _24, unknown
	efx::THdamaSight* m_efxSight; // _30
	HoudaiShotGunNode* _34;       // _34
	HoudaiShotGunNode* _38;       // _38
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
	    : State(HOUDAI_Dead, "dead")
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
	    : State(HOUDAI_Flick, "flick")
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
	    : State(HOUDAI_Land, "land")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateShot : public State {
	inline StateShot()
	    : State(HOUDAI_Shot, "shot")
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
	    : State(HOUDAI_Stay, "stay")
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
	    : State(HOUDAI_Wait, "wait")
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
	    : State(HOUDAI_Walk, "walk")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Houdai
} // namespace Game

#endif
