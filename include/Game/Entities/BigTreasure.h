#ifndef _GAME_ENTITIES_BIGTREASURE_H
#define _GAME_ENTITIES_BIGTREASURE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "Collinfo.h"

/**
 * --Header for Titan Dweevil (BigTreasure)--
 */

namespace efx {
// TODO: make headers for these
struct TChasePos2;
struct TDamaFootw;
struct TDamaSmoke;
struct TOootaStartBody;
struct TOootaStartOta;
struct TOootaStartLeg;
struct TChasePosPosLocalYScale3;
struct TChaseMtx3;
struct TOootaDeadAwa;
struct TOootaChangeLeg;
struct TOootaChangeBody;
struct TOootaParticle;
struct TChasePos4;
struct TChasePosPosLocalZScale3;
struct TOootaElecparts;
} // namespace efx

namespace Sys {
struct MatTevRegAnimation;
struct MatLoopAnimator;
} // namespace Sys

namespace Game {
struct IKSystemMgr;
struct IKSystemParms;

namespace BigTreasure {
struct BigTreasureGroundCallBack;
struct BigTreasureShadowMgr;
struct BigTreasureAttackMgr;
struct FSM;

enum StateID {
	BIGTREASURE_NULL      = -1,
	BIGTREASURE_Dead      = 0,
	BIGTREASURE_Stay      = 1,
	BIGTREASURE_Land      = 2,
	BIGTREASURE_Wait      = 3,
	BIGTREASURE_ItemWait  = 4,
	BIGTREASURE_Flick     = 5,
	BIGTREASURE_PreAttack = 6,
	BIGTREASURE_Attack    = 7,
	BIGTREASURE_PutItem   = 8,
	BIGTREASURE_DropItem  = 9,
	BIGTREASURE_Walk      = 10,
	BIGTREASURE_ItemWalk  = 11,
	BIGTREASURE_Count,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                   // _30
	virtual void onKill(CreatureKillArg*);                   // _34
	virtual void doDirectDraw(Graphics&);                    // _50
	virtual void inWaterCallback(WaterBox*);                 // _84 (weak)
	virtual void outWaterCallback();                         // _88 (weak)
	virtual void getShadowParam(ShadowParam&);               // _134
	virtual ~Obj();                                          // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4
	virtual void doUpdate();                                 // _1CC
	virtual void doUpdateCommon();                           // _1D0
	virtual void doAnimationUpdateAnimator();                // _1D8
	virtual void doAnimationCullingOff();                    // _1DC
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual void changeMaterial();                           // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();      // _258 (weak)
	virtual void getThrowupItemPosition(Vector3f*);          // _268
	virtual void getThrowupItemVelocity(Vector3f*);          // _26C
	virtual void throwupItemInDeathProcedure();              // _270 (weak)
	virtual bool damageCallBack(Creature*, f32, CollPart*);  // _278
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual void doStartStoneState();                        // _2A4
	virtual void doFinishStoneState();                       // _2A8
	virtual f32 getDamageCoeStoneState();                    // _2AC (weak)
	virtual void doStartMovie();                             // _2F0
	virtual void doEndMovie();                               // _2F4
	virtual void setFSM(FSM*);                               // _2F8
	//////////////// VTABLE END

	void resetAttackLimitTimer();
	bool isAttackLimitTime();
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
	void checkJointScaleOn();
	void getTraceCentrePosition();
	void getJointPositionPtr(int, int);
	void createShadowSystem();
	void setupShadowSystem();
	void doAnimationShadowSystem();
	void setupCollision();
	void setupTreasure();
	void updateTreasure();
	void dropTreasure();
	void dropTreasure(int);
	bool isCapturedTreasure();
	bool isCapturedTreasure(int);
	void getCapturedTreasureNum();
	void addTreasureDamage(int, f32);
	void flickStickCollPartPikmin(CollPart*);
	void releaseItemLoozy();
	void createAttack();
	void setupAttack();
	void updateAttack();
	void startAttack();
	void finishAttack();
	void setTreasureAttack();
	int getPreAttackAnimIndex();
	int getAttackAnimIndex();
	int getPutItemAnimIndex();
	int getFireAttackAnimIndex();
	f32 getPreAttackTimeMax();
	f32 getAttackTimeMax();
	bool isNormalAttack(int);
	void resetMaterialColor();
	void resetTargetMatBodyColor(bool);
	void resetCurrentMatBodyColor();
	void resetTargetEyeMatColor();
	void resetCurrentMatEyeColor();
	void setMatEyeAnimSpeed();
	void setAttackMaterialColor(bool);
	void updateMaterialColor();
	void startBlendAnimation(int, bool);
	void endBlendAnimation();
	int getCurrAnimationIndex();
	void startBossChargeBGM();
	void startBossAttackBGM();
	void finishBossAttackBGM();
	void startBossFlickBGM();
	void startBossItemDropBGM();
	void updateBossBGM();
	void resetBossAppearBGM();
	void setBossAppearBGM();
	void createEffect();
	void setupEffect();
	void createOnGroundEffect(int, WaterBox*);
	void createOffGroundEffect(int, WaterBox*);
	void startTreasurePinchSmoke(int);
	void finishTreasurePinchSmoke(int);
	void createDropTreasureEffect(int);
	void createAppearBodyEffect();
	void createAppearLegEffect(int);
	void createDeadBombLegEffect(int);
	void createDeadBombBodyEffect();
	void startDeadBubbleLegEffect(int);
	void finishDeadBubbleLegEffect(int);
	void startDeadBubbleBodyEffect();
	void finishDeadBubbleBodyEffect();
	void startDeadBubbleMouthEffect();
	void finishDeadBubbleMouthEffect();
	void createChangeMaterialEffect();
	void createDeadBombFootEffect();
	void startShineParticleEffect();
	void finishShineParticleEffect();
	void effectDrawOn();
	void effectDrawOff();
	void subShadowScale();
	bool startBigTreasureBootUpDemo();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                                  // _2BC
	f32 m_stateTimer;                            // _2C0
	f32 _2C4;                                    // _2C4, attack timer?
	StateID m_nextState;                         // _2C8
	Vector3f _2CC;                               // _2CC, target position?
	f32 _2D8;                                    // _2D8, timer of some sort?
	u8 _2DC[0x8];                                // _2DC, unknown
	IKSystemMgr* m_IKSystemMgr;                  // _2E4
	IKSystemParms* m_IKSystemParms;              // _2E8
	BigTreasureGroundCallBack* m_groundCallBack; // _2EC
	BigTreasureShadowMgr* m_shadowMgr;           // _2F0
	BigTreasureAttackMgr* m_attackMgr;           // _2F4
	Vector3f _2F8;                               // _2F8, kosi joint pos?
	Vector3f _304[16];                           // _304, joint positions?
	Creature* m_treasures[4];                    // _3C4, elec / fire / gas / water
	Creature* m_louie;                           // _3D4, King of Bugs
	f32 m_treasureHealth[4];                     // _3D8, elec / fire / gas / water
	f32 _3E8;                                    // _3E8
	u8 _3EC[0xC];                                // _3EC, unknown
	CollPart* _3F8;                              // _3F8
	u8 _3FC[0xC];                                // _3FC
	int m_attackIndex;                           // _408, enum TitanDweevilAttack?
	u8 _40C[0x8];                                // _40C, unknown
	J3DGXColorS10 _414;                          // _414
	int _41C;                                    // _41C
	u8 _420[0x60];                               // _420, unknown
	efx::TChasePos2* _480[4];                    // _480
	efx::TDamaFootw* _490[4];                    // _490
	efx::TDamaSmoke* _4A0[4];                    // _4A0
	efx::TOootaStartBody* _4B0;                  // _4B0
	efx::TOootaStartOta* _4B4[4];                // _4B4
	efx::TOootaStartLeg* _4C4[3][4];             // _4C4
	efx::TChasePosPosLocalYScale3* _4F4[4][4];   // _4F4
	efx::TChaseMtx3* _534;                       // _534
	efx::TOootaDeadAwa* _538;                    // _538
	efx::TOootaChangeLeg* _53C[4][4];            // _53C
	efx::TOootaChangeBody* _57C;                 // _57C
	efx::TOootaParticle* _580;                   // _580
	                                             // _584 = PelletView
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

		Parm<f32> m_fp01;               // _804
		Parm<f32> m_fp02;               // _82C
		Parm<f32> m_fp03;               // _854
		Parm<f32> m_fp04;               // _87C
		Parm<f32> m_fp05;               // _8A4
		Parm<f32> m_fp06;               // _8CC
		Parm<f32> m_fp10;               // _8F4
		Parm<f32> m_fp11;               // _91C
		Parm<f32> m_fp31;               // _944
		Parm<f32> m_fp12;               // _96C
		Parm<f32> m_fp13;               // _994
		Parm<f32> m_elecAttackTimeMax;  // _9BC, fp20
		Parm<f32> m_fireAttackTimeMax;  // _9E4, fp21
		Parm<f32> m_gasAttackTimeMax;   // _A0C, fp22
		Parm<f32> m_waterAttackTimeMax; // _A34, fp23
		Parm<f32> m_fe00;               // _A5C
		Parm<f32> m_fe01;               // _A84
		Parm<f32> m_fe02;               // _AAC
		Parm<f32> m_fe03;               // _AD4
		Parm<f32> m_fe04;               // _AFC
		Parm<f32> m_fe05;               // _B24
		Parm<f32> m_fe06;               // _B4C
		Parm<f32> m_fe08;               // _B74
		Parm<int> m_fe07;               // _B9C
		Parm<f32> m_fe10;               // _BC4
		Parm<f32> m_fe11;               // _BEC
		Parm<f32> m_fe12;               // _C14
		Parm<f32> m_fe13;               // _C3C
		Parm<f32> m_fe14;               // _C64
		Parm<f32> m_fe15;               // _C8C
		Parm<f32> m_fe16;               // _CB4
		Parm<f32> m_fe18;               // _CDC
		Parm<int> m_fe17;               // _D04
		Parm<f32> m_fe20;               // _D2C
		Parm<f32> m_fe21;               // _D54
		Parm<f32> m_fe22;               // _D7C
		Parm<f32> m_fe23;               // _DA4
		Parm<f32> m_fe24;               // _DCC
		Parm<f32> m_fe25;               // _DF4
		Parm<f32> m_fe26;               // _E1C
		Parm<f32> m_fe28;               // _E44
		Parm<int> m_fe27;               // _E6C
		Parm<f32> m_fe30;               // _E94
		Parm<f32> m_fe31;               // _EBC
		Parm<f32> m_fe32;               // _EE4
		Parm<f32> m_fe33;               // _F0C
		Parm<f32> m_fe34;               // _F34
		Parm<f32> m_fe35;               // _F5C
		Parm<f32> m_fe36;               // _F84
		Parm<f32> m_fe38;               // _FAC
		Parm<int> m_fe37;               // _FD4
		Parm<int> m_fe99;               // _FFC
		Parm<f32> m_ff00;               // _1024
		Parm<f32> m_ff10;               // _104C
		Parm<int> m_fg99x01;            // _1074
		Parm<f32> m_fg00;               // _109C
		Parm<f32> m_fg10;               // _10C4
		Parm<f32> m_fg30;               // _10EC
		Parm<f32> m_fg40;               // _1114
		Parm<int> m_fg99x02;            // _113C
		Parm<f32> m_fw00;               // _1164
		Parm<f32> m_fw01;               // _118C
		Parm<f32> m_fw02;               // _11B4
		Parm<f32> m_fw10;               // _11DC
		Parm<f32> m_fw11;               // _1204
		Parm<f32> m_fw12;               // _122C
		Parm<int> m_fw99;               // _1254
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator(); // _08 (weak)

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
};

struct BigTreasureShadowMgr;

struct BigTreasureGroundCallBack : public JointGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C

	// _00	= VTBL
	Obj* m_obj; // _04
};

/////////////////////////////////////////////////////////////////
// ATTACK DEFINITIONS
struct AttackShadowNode : public JointShadowNode {
	virtual ~AttackShadowNode(); // _08 (weak)

	void makeShadowSRT();

	// _00      = VTBL
	// _00-_24  = JointShadowNode
	u32 _24; // _24, unknown
	f32 _28; // _28
};

struct BigTreasureAttackData {
	/** Not sure where this struct should live, but it's used
	 * in some structs (BigTreasureAttackMgr and each Attack).
	 *
	 * Proceed with caution if using.
	 * (Hopefully this saves some poor soul some copying from Ghidra at least.)
	 *      -- HP
	 */

	f32 _00; // _00
	f32 _04; // _04
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10
	f32 _14; // _14
	f32 _18; // _18
	f32 _1C; // _1C
	int _20; // _20
	int _24; // _24
	f32 _28; // _28
	u8 _2C;  // _2C
	int _30; // _30
	f32 _34; // _34
	f32 _38; // _38
	f32 _3C; // _3C
	f32 _40; // _40
	f32 _44; // _44
};

struct BigTreasureElecAttack : public CNode {
	virtual ~BigTreasureElecAttack(); // _08 (weak)

	void update();

	// _00      = VTBL
	// _00-_18  = CNode
	Obj* m_owner;                        // _18
	BigTreasureAttackData* m_attackData; // _1C
	u8 _20;                              // _20
	Sys::Triangle* _24;                  // _24
	Vector3f _28;                        // _28
	Vector3f _34;                        // _34
	u32 _40;                             // _40, unknown
	efx::TChasePosPosLocalZScale3* _44;  // _44
	efx::TOootaElecparts* _48;           // _48
	efx::TChasePos2* _4C;                // _4C
};

struct BigTreasureFireAttack : public CNode {
	virtual ~BigTreasureFireAttack(); // _08 (weak)

	void update();

	// _00      = VTBL
	// _00-_18  = CNode
	Obj* m_owner;                        // _18
	BigTreasureAttackData* m_attackData; // _1C
	f32 _20;                             // _20
	Vector3f _24;                        // _24
	Vector3f _30;                        // _30
};

struct BigTreasureGasAttack : public CNode {
	virtual ~BigTreasureGasAttack(); // _08 (weak)

	void update();

	// _00      = VTBL
	// _00-_18  = CNode
	Obj* m_owner;                        // _18
	BigTreasureAttackData* m_attackData; // _1C
	f32 _20;                             // _20
	Vector3f _24;                        // _24
	Vector3f _30;                        // _30, gas emit position?
};

struct BigTreasureWaterAttack : public CNode {
	virtual ~BigTreasureWaterAttack(); // _08 (weak)

	void update();

	// _00      = VTBL
	// _00-_18  = CNode
	Obj* m_owner;                        // _18
	BigTreasureAttackData* m_attackData; // _1C
	Vector3f _20;                        // _24
	Vector3f _2C;                        // _30
	efx::TChasePos4* _38;                // _38, OootaWbomb?
};

struct BigTreasureAttackMgr {
	BigTreasureAttackMgr(Obj*);

	void init();
	void update();

	void startFireAttack();
	void startNewFireList();
	void updateFireAttack();
	void updateFireEmitPosition();
	void updateFireSePosition(BigTreasureFireAttack*, int);

	void startGasAttack();
	void startNewGasList();
	void updateGasAttack();
	void updateGasEmitPosition();
	void updateGasSePosition(BigTreasureGasAttack*, int);

	void startWaterAttack();
	void startNewWaterList();
	void updateWaterAttack();
	void updateWaterEmitPosition();
	void getWaterTargetCreature();

	void setElecAttackParameter();
	void startElecAttack();
	void updateElecAttack();
	void finishAttack();

	void addAttackShadow(BigTreasureWaterAttack*);
	void addAttackShadow(BigTreasureElecAttack*);
	void delAttackShadow(BigTreasureWaterAttack*);
	void delAttackShadow(BigTreasureElecAttack*);
	void updateAttackShadow();

	// unused/inlined:
	void setFireAttackParameter();
	void finishFireAttack();
	void setGasAttackParameter();
	void finishGasAttack();
	void setWaterAttackParameter();
	void finishWaterAttack();
	void startNewElecList();
	void finishElecAttack();

	u8 _00[0x120]; // _00, TODO: fill this out.
};
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(int stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		m_name = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	inline StateAttack()
	    : State(BIGTREASURE_Attack, "attack")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	inline StateDead()
	    : State(BIGTREASURE_Dead, "dead")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDropItem : public State {
	inline StateDropItem()
	    : State(BIGTREASURE_DropItem, "dropitem")
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
	    : State(BIGTREASURE_Flick, "flick")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemWait : public State {
	inline StateItemWait()
	    : State(BIGTREASURE_ItemWait, "itemwait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemWalk : public State {
	inline StateItemWalk()
	    : State(BIGTREASURE_ItemWalk, "itemwalk")
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
	    : State(BIGTREASURE_Land, "land")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StatePreAttack : public State {
	inline StatePreAttack()
	    : State(BIGTREASURE_PreAttack, "preattack")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StatePutItem : public State {
	inline StatePutItem()
	    : State(BIGTREASURE_PutItem, "putitem")
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
	    : State(BIGTREASURE_Stay, "stay")
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
	    : State(BIGTREASURE_Wait, "wait")
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
	    : State(BIGTREASURE_Walk, "walk")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace BigTreasure
} // namespace Game

#endif
