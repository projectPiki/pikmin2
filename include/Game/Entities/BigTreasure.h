#ifndef _GAME_ENTITIES_BIGTREASURE_H
#define _GAME_ENTITIES_BIGTREASURE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "efx/TOoota.h"
#include "efx/TDama.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "Collinfo.h"

/**
 * --Header for Titan Dweevil (BigTreasure)--
 */

namespace Game {
struct IKSystemMgr;
struct IKSystemParms;

namespace BigTreasure {
struct BigTreasureGroundCallBack;
struct BigTreasureShadowMgr;
struct BigTreasureAttackMgr;
struct FSM;

struct EyeColor {
	inline void set(f32 _r, f32 _g, f32 _b)
	{
		m_rgb[0] = _r;
		m_rgb[1] = _g;
		m_rgb[2] = _b;
	}

	inline EyeColor& operator=(const EyeColor& other)
	{
		m_rgb[0] = other.m_rgb[0];
		m_rgb[1] = other.m_rgb[1];
		m_rgb[2] = other.m_rgb[2];
		return *this;
	}

	inline void operator=(EyeColor& other)
	{
		m_rgb[0] = other.m_rgb[0];
		m_rgb[1] = other.m_rgb[1];
		m_rgb[2] = other.m_rgb[2];
	}

	f32 m_rgb[3]; // _00, r=0, g=1, b=2
};

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

enum AttackID {
	BIGATTACK_NULL  = -1,
	BIGATTACK_Elec  = 0,
	BIGATTACK_Fire  = 1,
	BIGATTACK_Gas   = 2,
	BIGATTACK_Water = 3,
};

enum EyeColorTargetID {
	EYECOLOR_Dark  = 0,
	EYECOLOR_Light = 1,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);          // _30
	virtual void onKill(CreatureKillArg* settings);          // _34
	virtual void doDirectDraw(Graphics& gfx);                // _50
	virtual void getShadowParam(ShadowParam& settings);      // _134
	virtual ~Obj() { }                                       // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4
	virtual void doUpdate();                                 // _1CC
	virtual void doUpdateCommon();                           // _1D0
	virtual void doAnimationUpdateAnimator();                // _1D8
	virtual void doAnimationCullingOff();                    // _1DC
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual void changeMaterial();                           // _200
	virtual void getThrowupItemPosition(Vector3f*);          // _268
	virtual void getThrowupItemVelocity(Vector3f*);          // _26C
	virtual bool damageCallBack(Creature*, f32, CollPart*);  // _278
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual void doStartStoneState();                        // _2A4
	virtual void doFinishStoneState();                       // _2A8
	virtual void doStartMovie();                             // _2F0
	virtual void doEndMovie();                               // _2F4
	virtual void setFSM(FSM*);                               // _2F8
	virtual void inWaterCallback(WaterBox* wb) { }           // _84 (weak)
	virtual void outWaterCallback() { }                      // _88 (weak)
	virtual f32 getDamageCoeStoneState() { return 0.5f; }    // _2AC (weak)
	virtual void throwupItemInDeathProcedure() { }           // _270 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()       // _258 (weak)
	{
		return EnemyTypeID::EnemyID_BigTreasure;
	}
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
	Vector3f getTraceCentrePosition();
	Vector3f* getJointPositionPtr(int, int);
	void createShadowSystem();
	void setupShadowSystem();
	void doAnimationShadowSystem();
	void setupCollision();
	void setupTreasure();
	void updateTreasure();
	void dropTreasure();
	bool dropTreasure(int);
	bool isCapturedTreasure();
	bool isCapturedTreasure(int);
	int getCapturedTreasureNum();
	bool addTreasureDamage(int, f32);
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

	void setupBigTreasureCollision();

	inline int getCurrentBodyRed() { return m_currMatBodyColor.r; }

	inline int getTargetBodyRed() { return m_targetMatBodyColor.r; }

	inline int getCurrentBodyGreen() { return m_currMatBodyColor.g; }

	inline int getTargetBodyGreen() { return m_targetMatBodyColor.g; }

	inline int getCurrentBodyBlue() { return m_currMatBodyColor.b; }

	inline int getTargetBodyBlue() { return m_targetMatBodyColor.b; }

	inline int getCurrentBodyAlpha() { return m_currMatBodyColor.a; }

	inline int getTargetBodyAlpha() { return m_targetMatBodyColor.a; }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_fsm;                                  // _2BC
	f32 m_stateTimer;                            // _2C0
	f32 m_attackLimitTimer;                      // _2C4
	StateID m_nextState;                         // _2C8
	Vector3f m_targetPosition;                   // _2CC
	f32 m_shadowScale;                           // _2D8
	bool m_isFastMatAnim;                        // _2DC
	bool m_isWeaponAttacked[0x4];                // _2DD, used to determine if the weapon should shake
	IKSystemMgr* m_ikSystemMgr;                  // _2E4
	IKSystemParms* m_ikSystemParms;              // _2E8
	BigTreasureGroundCallBack* m_groundCallBack; // _2EC
	BigTreasureShadowMgr* m_shadowMgr;           // _2F0
	BigTreasureAttackMgr* m_attackMgr;           // _2F4
	Vector3f m_kosiJointPos;                     // _2F8
	Vector3f m_jointPositions[4][4];             // _304
	Pellet* m_treasures[4];                      // _3C4, elec / fire / gas / water
	Pellet* m_louie;                             // _3D4, King of Bugs
	f32 m_treasureHealth[4];                     // _3D8, elec / fire / gas / water
	f32 m_treasureShakeAngle[4];                 // _3E8, used to make treasures shake while being attacked
	CollPart* m_treasureCollParts[4];            // _3F8, elec / fire / gas / water
	int m_attackIndex;                           // _408, see AttackID enum
	J3DGXColorS10 m_targetMatBodyColor;          // _40C
	J3DGXColorS10 m_currMatBodyColor;            // _414
	int m_targetEyeColorIdx;                     // _41C, 0 = going to dark, 1 = going to light (indexes _438, _45C)
	f32 m_clusterEyeAnimSpeeds[3];               // _420, r=0, g=1, b=2
	f32 m_sideEyeAnimSpeeds[3];                  // _42C, r=0, g=1, b=2
	EyeColor m_targetClusterEyeColor[2];         // _438, 0 = dark, 1 = light, bounces between
	EyeColor m_currClusterEyeColor;              // _450
	EyeColor m_targetSideEyeColor[2];            // _45C, 0 = dark, 1 = light, bounces between
	EyeColor m_currSideEyeColor;                 // _474
	efx::TOootaFoot* m_footFX[4];                // _480
	efx::TDamaFootw* m_footWFX[4];               // _490
	efx::TDamaSmoke* m_treasureSmokeFX[4];       // _4A0
	efx::TOootaStartBody* m_startBodyFX;         // _4B0
	efx::TOootaStartOta* m_startTreasureFX[4];   // _4B4
	efx::TOootaStartLeg* m_startLegFX[4][3];     // _4C4
	efx::TOootaDeadLeg* m_deadLegFX[4][4];       // _4F4, leg bubble effect on death
	efx::TOootaDeadBody* m_deadBodyFX;           // _534, body bubble effect on death
	efx::TOootaDeadAwa* m_deadAwaFX;             // _538, mouth bubble effect on death
	efx::TOootaChangeLeg* m_changeLegFX[4][4];   // _53C
	efx::TOootaChangeBody* m_changeBodyFX;       // _57C
	efx::TOootaParticle* m_shineParticleFX;      // _580
	                                             // _584 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual SysShape::Model* createModel();            // _B0
	virtual void loadModelData();                      // _C8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_BigTreasure;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x01240030);
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _48
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "ÉxÅ[ÉXåWêî", 3.0f, 0.0f, 10.0f)                  // 'base factor'
		    , m_fp02(this, 'fp02', "è„Ç∞å∏ë¨åWêî", -0.2f, -5.0f, 5.0f)               // 'raising deceleration factor'
		    , m_fp03(this, 'fp03', "â∫Ç∞â¡ë¨åWêî", 0.5f, -5.0f, 5.0f)                // 'downward acceleration factor'
		    , m_fp04(this, 'fp04', "ç≈í·å∏â¡ë¨åWêî", -2.0f, -10.0f, 10.0f)           // 'min reduced acceleration factor'
		    , m_fp05(this, 'fp05', "ç≈çÇå∏â¡ë¨åWêî", 10.0f, -10.0f, 10.0f)           // 'max deceleration acceleration factor'
		    , m_fp06(this, 'fp06', "ë´ÇÃêUÇËè„Ç∞", 120.0f, 0.0f, 200.0f)             // 'leg swing'
		    , m_fp10(this, 'fp10', "ó\\îıéûä‘(ìdãC)", 2.5f, 0.0f, 10.0f)             // 'wait time (electricity)'
		    , m_fp11(this, 'fp11', "ó\\îıéûä‘(âŒ:1)", 2.8f, 0.0f, 10.0f)             // 'wait time (fire:1)'
		    , m_fp31(this, 'fp31', "ó\\îıéûä‘(âŒ:2)", 2.5f, 0.0f, 10.0f)             // 'wait time (fire:2)'
		    , m_fp12(this, 'fp12', "ó\\îıéûä‘(ÉKÉX)", 2.5f, 0.0f, 10.0f)             // 'wait time (gas)'
		    , m_fp13(this, 'fp13', "ó\\îıéûä‘(êÖ)", 2.5f, 0.0f, 10.0f)               // 'wait time (water)'
		    , m_elecAttackTimeMax(this, 'fp20', "çUåÇéûä‘(ìdãC)", 5.0f, 0.0f, 10.0f) // 'attack time (electricity)'
		    , m_fireAttackTimeMax(this, 'fp21', "çUåÇéûä‘(âŒ)", 5.0f, 0.0f, 10.0f)   // 'attack time (fire)'
		    , m_gasAttackTimeMax(this, 'fp22', "çUåÇéûä‘(ÉKÉX)", 5.0f, 0.0f, 10.0f)  // 'attack time (gas)'
		    , m_waterAttackTimeMax(this, 'fp23', "çUåÇéûä‘(êÖ)", 5.0f, 0.0f, 10.0f)  // 'attack time (water)'
		    , m_fe00(this, 'fe00', "íµï‘åWêî(1-1)", 0.75f, 0.0f, 1.0f)               // 'bounce coefficient (1-1)'
		    , m_fe01(this, 'fe01', "ñÄéCåWêî(1-1)", 0.65f, 0.0f, 1.0f)               // 'friction coefficient (1-1)'
		    , m_fe02(this, 'fe02', "XZèâë¨Base(1-1)", 100.0f, 0.0f, 500.0f)          // 'XZ muzzle velocity Base (1-1)'
		    , m_fe03(this, 'fe03', "XZèâë¨Rand(1-1)", 220.0f, 0.0f, 500.0f)          // 'XZ muzzle velocity Rand (1-1)'
		    , m_fe04(this, 'fe04', "Yèâë¨Base(1-1)", 170.0f, 0.0f, 500.0f)           // 'Y muzzle velocity Base (1-1)'
		    , m_fe05(this, 'fe05', "Yèâë¨Rand(1-1)", 200.0f, 0.0f, 500.0f)           // 'Y muzzle velocity Rand (1-1)'
		    , m_fe06(this, 'fe06', "ï˙ìdäJén(1-1)", 2.7f, 0.0f, 5.0f)                // 'discharge start (1-1)'
		    , m_fe08(this, 'fe08', "òAçΩä‘äu(1-1)", 0.02f, 0.0f, 1.0f)               // 'chain interval (1-1)'
		    , m_fe07(this, 'fe07', "ï˙ìdêî(1-1)", 10, 0, 16)                         // 'number of discharges (1-1)'
		    , m_fe10(this, 'fe10', "íµï‘åWêî(1-2)", 0.7f, 0.0f, 1.0f)                // 'bounce coefficient (1-2)'
		    , m_fe11(this, 'fe11', "ñÄéCåWêî(1-2)", 0.65f, 0.0f, 1.0f)               // 'friction coefficient (1-2)'
		    , m_fe12(this, 'fe12', "XZèâë¨Base(1-2)", 80.0f, 0.0f, 500.0f)           // 'XZ muzzle velocity Base (1-2)'
		    , m_fe13(this, 'fe13', "XZèâë¨Rand(1-2)", 250.0f, 0.0f, 500.0f)          // 'XZ muzzle velocity Rand (1-2)'
		    , m_fe14(this, 'fe14', "Yèâë¨Base(1-2)", 350.0f, 0.0f, 500.0f)           // 'Y muzzle velocity Base (1-2)'
		    , m_fe15(this, 'fe15', "Yèâë¨Rand(1-2)", 100.0f, 0.0f, 500.0f)           // 'Y muzzle velocity Rand (1-2)'
		    , m_fe16(this, 'fe16', "ï˙ìdäJén(1-2)", 4.5f, 0.0f, 5.0f)                // 'discharge start (1-2)'
		    , m_fe18(this, 'fe18', "òAçΩä‘äu(1-2)", 0.02f, 0.0f, 1.0f)               // 'chain interval (1-2)'
		    , m_fe17(this, 'fe17', "ï˙ìdêî(1-2)", 12, 0, 16)                         // 'number of discharges (1-2)'
		    , m_fe20(this, 'fe20', "íµï‘åWêî(2-1)", 0.97f, 0.0f, 1.0f)               // 'bounce coefficient (2-1)'
		    , m_fe21(this, 'fe21', "ñÄéCåWêî(2-1)", 0.75f, 0.0f, 1.0f)               // 'friction coefficient (2-1)'
		    , m_fe22(this, 'fe22', "XZèâë¨Base(2-1)", 60.0f, 0.0f, 500.0f)           // 'XZ muzzle velocity Base (2-1)'
		    , m_fe23(this, 'fe23', "XZèâë¨Rand(2-1)", 70.0f, 0.0f, 500.0f)           // 'XZ muzzle velocity Rand (2-1)'
		    , m_fe24(this, 'fe24', "Yèâë¨Base(2-1)", 350.0f, 0.0f, 500.0f)           // 'Y muzzle velocity Base (2-1)'
		    , m_fe25(this, 'fe25', "Yèâë¨Rand(2-1)", 100.0f, 0.0f, 500.0f)           // 'Y muzzle velocity Rand (2-1)'
		    , m_fe26(this, 'fe26', "ï˙ìdäJén(2-1)", 0.5f, 0.0f, 5.0f)                // 'discharge start (2-1)'
		    , m_fe28(this, 'fe28', "òAçΩä‘äu(2-1)", 0.25f, 0.0f, 1.0f)               // 'chain interval (2-1)'
		    , m_fe27(this, 'fe27', "ï˙ìdêî(2-1)", 8, 0, 16)                          // 'number of discharges (2-1)'
		    , m_fe30(this, 'fe30', "íµï‘åWêî(2-2)", 0.2f, 0.0f, 1.0f)                // 'bounce coefficient (2-2)'
		    , m_fe31(this, 'fe31', "ñÄéCåWêî(2-2)", 0.985f, 0.0f, 1.0f)              // 'friction coefficient (2-2)'
		    , m_fe32(this, 'fe32', "XZèâë¨Base(2-2)", 100.0f, 0.0f, 500.0f)          // 'XZ muzzle velocity Base (2-2)'
		    , m_fe33(this, 'fe33', "XZèâë¨Rand(2-2)", 90.0f, 0.0f, 500.0f)           // 'XZ muzzle velocity Rand (2-2)'
		    , m_fe34(this, 'fe34', "Yèâë¨Base(2-2)", 70.0f, 0.0f, 500.0f)            // 'Y muzzle velocity Base (2-2)'
		    , m_fe35(this, 'fe35', "Yèâë¨Rand(2-2)", 20.0f, 0.0f, 500.0f)            // 'Y muzzle velocity Rand (2-2)'
		    , m_fe36(this, 'fe36', "ï˙ìdäJén(2-2)", 0.2f, 0.0f, 5.0f)                // 'discharge start (2-2)'
		    , m_fe38(this, 'fe38', "òAçΩä‘äu(2-2)", 0.15f, 0.0f, 1.0f)               // 'chain interval (2-2)'
		    , m_fe37(this, 'fe37', "ï˙ìdêî(2-2)", 14, 0, 16)                         // 'number of discharges (2-2)'
		    , m_fe99(this, 'fe99', "ÉpÉ^Å[ÉìÉ`ÉFÉbÉN", 0, 0, 4)                      // 'pattern check'
		    , m_ff00(this, 'ff00', "âŒâäÉXÉPÅ[Éã(1)", 1.0f, 0.5f, 5.0f)              // 'flame scale (1)'
		    , m_ff10(this, 'ff10', "âŒâäÉXÉPÅ[Éã(2)", 1.25f, 0.5f, 5.0f)             // 'flame scale (2)'
		    , m_fg99x01(this, 'fg99', "ÉpÉ^Å[ÉìÉ`ÉFÉbÉN", 0, 0, 2)                   // 'pattern check'
		    , m_fg00(this, 'fg00', "âÒì]ÉXÉsÅ[Éh(1)", 0.015f, 0.01f, 0.03f)          // 'rotation speed (1)'
		    , m_fg10(this, 'fg10', "âÒì]ÉXÉsÅ[Éh(2)", 0.02f, 0.01f, 0.03f)           // 'rotation speed (2)'
		    , m_fg30(this, 'fg30', "îΩì]éûä‘(2-1)", 30.0f, 0.0f, 30.0f)              // 'reversal time (2-1)'
		    , m_fg40(this, 'fg40', "îΩì]éûä‘(2-2)", 2.0f, 0.0f, 30.0f)               // 'reversal time (2-2)'
		    , m_fg99x02(this, 'fg99', "ÉpÉ^Å[ÉìÉ`ÉFÉbÉN", 0, 0, 3)                   // 'pattern check'
		    , m_fw00(this, 'fw00', "ï˙êÖä‘äu(1)", 0.5f, 0.1f, 1.0f)                  // 'water discharge interval (1)'
		    , m_fw01(this, 'fw01', "ÉâÉìÉ_ÉÄäpìx(1)", 0.5f, 0.0f, 1.0f)              // 'random angle (1)'
		    , m_fw02(this, 'fw02', "ÉâÉìÉ_ÉÄãóó£(1)", 100.0f, 0.0f, 500.0f)          // 'random distance (1)'
		    , m_fw10(this, 'fw10', "ï˙êÖä‘äu(2)", 0.25f, 0.1f, 1.0f)                 // 'water discharge interval (2)
		    , m_fw11(this, 'fw11', "ÉâÉìÉ_ÉÄäpìx(2)", 0.4f, 0.0f, 1.0f)              // 'random angle (2)'
		    , m_fw12(this, 'fw12', "ÉâÉìÉ_ÉÄãóó£(2)", 50.0f, 0.0f, 500.0f)           // 'random distance (2)'
		    , m_fw99(this, 'fw99', "ÉpÉ^Å[ÉìÉ`ÉFÉbÉN", 0, 0, 2)                      // 'pattern check'
		{
		}

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

struct ProperAnimator : public EnemyBlendAnimatorBase {
	virtual ~ProperAnimator() { } // _08 (weak)

	// _00 		= VTBL
	// _00-_60	= EnemyBlendAnimatorBase
};

struct BigTreasureShadowMgr {
	BigTreasureShadowMgr(Obj*);

	void init();
	void setJointPosPtr(int, int, Vector3f*);
	void setKosiJointPosPtr(Vector3f*);
	void update();
	void updateTreasureShadow(JointShadowParm&);
	void updateHandShadow(JointShadowParm&);
	void updateAntennaShadow(JointShadowParm&);

	Matrixf* m_bodyMatrix;            // _00
	Matrixf* m_elecMatrix;            // _04
	Matrixf* m_fireMatrix;            // _08
	Matrixf* m_gasMatrix;             // _0C
	Matrixf* m_waterMatrix;           // _10
	Matrixf* m_leftArmMatrix[3];      // _14
	Matrixf* m_rightArmMatrix[3];     // _20
	Matrixf* m_leftAntennaMatrix[2];  // _2C
	Matrixf* m_rightAntennaMatrix[2]; // _34
	Obj* m_obj;                       // _3C
	Vector3f* m_kosiPosition;         // _40
	Vector3f* m_jointPositions[4][4]; // _44
	JointShadowRootNode* m_rootNode;  // _84
	SphereShadowNode* _88;            // _88
	SphereShadowNode* _8C;            // _8C
	TubeShadowSetNode* _90[4];        // _90
	TubeShadowSetNode* _A0[4];        // _A0
	TubeShadowSetNode* _B0[4];        // _B0
	TubeShadowSetNode* _C0[4];        // _C0
	SphereShadowNode* _D0[4];         // _D0
	SphereShadowNode* _E0[4];         // _E0
	SphereShadowNode* _F0[4];         // _F0
	SphereShadowNode* _100[4];        // _100
	TubeShadowPosNode* _110[2][4];    // _110
	SphereShadowNode* _130[2][2];     // _130
	TubeShadowPosNode* _140[2][5];    // _140
	SphereShadowNode* _168[2];        // _168
};

struct BigTreasureGroundCallBack : public JointGroundCallBack {
	inline BigTreasureGroundCallBack(Obj* obj)
	    : m_obj(obj)
	{
	}

	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C

	// _00	= VTBL
	Obj* m_obj; // _04
};

/////////////////////////////////////////////////////////////////
// ATTACK DEFINITIONS
struct AttackShadowNode : public JointShadowNode {
	AttackShadowNode(int);

	virtual ~AttackShadowNode() { } // _08 (weak)

	void makeShadowSRT();

	// _00      = VTBL
	// _00-_24  = JointShadowNode
	Vector3f* _24; // _24
	f32 _28;       // _28
};

struct BigTreasureAttackData {
	inline BigTreasureAttackData()
	{
		_00 = 0.75f;
		_04 = 0.65f;
		_08 = 100.0f;
		_0C = 220.0f;
		_10 = 170.0f;
		_14 = 200.0f;
		_18 = 2.7f;
		_1C = 0.1f;
		_20 = 15;
		_24 = 0;
		_28 = 1.0f;
		_2C = 1;
		_30 = 3;
		_34 = 0.02f;
		_38 = 30.0f;
		_3C = 0.5f;
		_40 = 0.25f;
		_44 = 50.0f;
	}

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

struct BigTreasureAttackParameter : public BigTreasureAttackData {
	// just a wrapper as far as I can tell, might've been differentiated based on type?
};

struct BigTreasureElecAttack : public CNode {
	BigTreasureElecAttack(Obj*, BigTreasureAttackParameter*);

	virtual ~BigTreasureElecAttack() { } // _08 (weak)

	bool update();

	void init();
	void start(Vector3f&, Vector3f&, bool);
	void startInteract(BigTreasureElecAttack*);
	void finish();

	// _00      = VTBL
	// _00-_18  = CNode
	Obj* m_owner;                         // _18
	BigTreasureAttackData* m_attackData;  // _1C
	u8 _20;                               // _20
	Sys::Triangle* _24;                   // _24
	Vector3f _28;                         // _28
	Vector3f _34;                         // _34
	u32 _40;                              // _40, unknown
	efx::TOootaElec* m_efxElec;           // _44
	efx::TOootaElecparts* m_efxElecParts; // _48
	efx::TOootaPhouden* m_efxPhouden;     // _4C
};

struct BigTreasureFireAttack : public CNode {
	BigTreasureFireAttack(Obj*, BigTreasureAttackParameter*);

	virtual ~BigTreasureFireAttack() { } // _08 (weak)

	bool update();

	void init();
	void start(Vector3f&, Vector3f&);
	void finish();

	// _00      = VTBL
	// _00-_18  = CNode
	Obj* m_owner;                        // _18
	BigTreasureAttackData* m_attackData; // _1C
	f32 _20;                             // _20
	Vector3f _24;                        // _24
	Vector3f _30;                        // _30
};

struct BigTreasureGasAttack : public CNode {
	BigTreasureGasAttack(Obj*, BigTreasureAttackParameter*);

	virtual ~BigTreasureGasAttack() { } // _08 (weak)

	bool update();

	void init();
	void start(Vector3f&, f32);

	// _00      = VTBL
	// _00-_18  = CNode
	Obj* m_owner;                        // _18
	BigTreasureAttackData* m_attackData; // _1C
	f32 _20;                             // _20
	Vector3f _24;                        // _24
	Vector3f _30;                        // _30, gas emit position?
};

struct BigTreasureWaterAttack : public CNode {
	BigTreasureWaterAttack(Obj*, BigTreasureAttackParameter*);

	virtual ~BigTreasureWaterAttack() { } // _08 (weak)

	bool update();

	void init();
	void start(Vector3f&, Vector3f&);
	void finish();

	// _00      = VTBL
	// _00-_18  = CNode
	Obj* m_owner;                        // _18
	BigTreasureAttackData* m_attackData; // _1C
	Vector3f _20;                        // _24
	Vector3f _2C;                        // _30
	efx::TOootaWbomb* m_efxWaterBomb;    // _38
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

	u8 _00[4];                                // _00
	Obj* m_obj;                               // _04
	f32 _08;                                  // _08
	f32 _0C;                                  // _0C
	CNode* _10;                               // _10
	CNode* m_fireAttackNodes;                 // _14
	efx::TOootaFire* m_efxFire;               // _18
	Vector3f _1C;                             // _1C
	Vector3f _28[3];                          // _28
	CNode* _4C;                               // _4C
	CNode* m_gasAttackNodes;                  // _50
	f32 _54[4];                               // _54
	Vector3f m_gasEmitPosition;               // _64
	Vector3f _70[4];                          // _70
	efx::TOootaGas* m_efxGas[4];              // _A0
	CNode* _B0;                               // _B0
	CNode* m_waterAttackNodes;                // _B4
	efx::TOootaWbomb* m_efxWaterBomb;         // _B8
	Vector3f m_waterEmitPosition;             // _BC
	CNode* _C8;                               // _C8
	CNode* m_elecAttackNodes;                 // _CC
	efx::TOootaElecLeg* m_efxElecLeg[4][3];   // _D0
	efx::TOootaElecAttack1* m_efxElecAttack1; // _100
	efx::TOootaElecAttack2* m_efxElecAttack2; // _104
	u8 _108[0xC];                             // _108, unknown
	JointShadowRootNode* m_shadowRootNode;    // _114
	AttackShadowNode** m_attackShadowNodes;   // _118, array of 16 ptrs
	BigTreasureAttackData* m_attackData;      // _11C
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
