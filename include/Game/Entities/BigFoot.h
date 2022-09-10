#ifndef _GAME_ENTITIES_BIGFOOT_H
#define _GAME_ENTITIES_BIGFOOT_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Raging Long Legs (BigFoot)--
 */

namespace efx {
struct TChasePos2;
struct TDamaFootw;
struct TDamaSmoke;
struct TOdamaHahen;
struct TDamaDeadElecA;
struct TDamaDeadElecB;
struct TOdamaDeadHahenA;
struct TOdamaDeadHahenB;
struct TOdamaDeadHahenC1;
struct TOdamaDeadHahenC2;
struct TOdamaFur1;
struct TOdamaFur2;
} // namespace efx

namespace Sys {
struct MatTevRegAnimation;
struct MatLoopAnimator;
} // namespace Sys

namespace Game {
struct IKSystemMgr;
struct IKSystemParms;

namespace BigFoot {
struct BigFootGroundCallBack;
struct BigFootShadowMgr;
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void onKill(CreatureKillArg*);                  // _34
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual void inWaterCallback(WaterBox*);                // _84 (weak)
	virtual void outWaterCallback();                        // _88 (weak)
	virtual void collisionCallback(CollEvent&);             // _EC
	virtual void getShadowParam(ShadowParam&);              // _134
	virtual bool needShadow();                              // _138
	virtual ~Obj();                                         // _1BC (weak)
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
	void isFinishIKMotion();
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
	FSM* m_FSM;                              // _2BC
	f32 _2C0;                                // _2C0
	int _2C4;                                // _2C4
	Vector3f m_targetPosition;               // _2C8
	f32 _2D4;                                // _2D4
	f32 m_flickWalkTimeMax;                  // _2D8
	u8 _2DC;                                 // _2DC
	u8 _2DD;                                 // _2DD
	u8 _2DE;                                 // _2DE
	IKSystemMgr* m_IKSystemMgr;              // _2E0
	IKSystemParms* m_IKSystemParms;          // _2E4
	BigFootGroundCallBack* m_groundCallBack; // _2E8
	BigFootShadowMgr* m_shadowMgr;           // _2EC
	Vector3f _2F0[16];                       // _2F0
	efx::TChasePos2* _3B0[4];                // _3B0
	efx::TDamaFootw* _3C0[4];                // _3C0
	efx::TDamaSmoke* _3D0[3];                // _3D0
	efx::TOdamaHahen* _3DC[3][4];            // _3DC
	efx::TDamaDeadElecA* _40C[3][4];         // _40C
	efx::TDamaDeadElecB* _43C[2][4];         // _43C
	efx::TOdamaDeadHahenA* _45C[2][4];       // _45C
	efx::TOdamaDeadHahenB* _47C[4];          // _47C
	efx::TOdamaDeadHahenC1* _48C;            // _48C
	efx::TOdamaDeadHahenC2* _490;            // _490
	efx::TOdamaFur1* _494;                   // _494
	efx::TOdamaFur2* _498[4];                // _498
	Sys::MatLoopAnimator* m_matLoopAnimator; // _4A8
	                                         // _4AC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	//////////////// VTABLE
	virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadModelData();                       // _C8
	virtual void loadTexData();                         // _D0
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Sys::MatTevRegAnimation* _44; // _44
	Obj* m_obj;                   // _48
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms(); // (weak)

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp03; // _854
		Parm<f32> m_fp04; // _87C
		Parm<f32> m_fp05; // _8A4
		Parm<f32> m_fp06; // _8CC
		Parm<f32> m_fp11; // _8F4
		Parm<f32> m_fp12; // _91C
		Parm<f32> m_fp13; // _944
		Parm<f32> m_fp14; // _96C
		Parm<f32> m_fp15; // _994
		Parm<f32> m_fp16; // _9BC
		Parm<f32> m_fp17; // _9E4
		Parm<f32> m_fp20; // _A0C
		Parm<f32> m_fp21; // _A34
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                     // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int);                     // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

struct BigFootShadowMgr;

struct BigFootGroundCallBack : public JointGroundCallBack {
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
	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLand : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStay : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalk : public State {
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
