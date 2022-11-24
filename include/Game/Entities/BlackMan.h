#ifndef _GAME_ENTITIES_BLACKMAN_H
#define _GAME_ENTITIES_BLACKMAN_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "SysShape/Animator.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "efx/TKage.h"

/**
 * --Header for Waterwraith (BlackMan)--
 * Note: Rollers are a separate enemy/struct (Tyre).
 */

namespace Game {
struct PathNode;

namespace Tyre {
struct Obj;
} // namespace Tyre

namespace BlackMan {
struct Parms;
struct FSM;

void lHandCallBack(J3DJoint*, int);
void rHandCallBack(J3DJoint*, int);
void lFootCallBack(J3DJoint*, int);
void rFootCallBack(J3DJoint*, int);
void bodyCallBack(J3DJoint*, int);

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);          // _30
	virtual void onKill(CreatureKillArg* settings);          // _34
	virtual void doEntry();                                  // _40
	virtual void doSimulation(f32);                          // _4C
	virtual void doDirectDraw(Graphics& gfx);                // _50
	virtual bool isUnderground();                            // _D0
	virtual void collisionCallback(CollEvent& event);        // _EC
	virtual void getShadowParam(ShadowParam& settings);      // _134
	virtual ~Obj() { }                                       // _1BC (weak)
	virtual void birth(Vector3f&, f32);                      // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4 (weak)
	virtual void doUpdate();                                 // _1CC
	virtual void doAnimationCullingOff();                    // _1DC
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual void changeMaterial();                           // _200
	virtual void setParameters();                            // _228
	virtual void initWalkSmokeEffect();                      // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();   // _234
	virtual void updateEfxHamon();                           // _24C (weak)
	virtual void createEfxHamon();                           // _250 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();      // _258 (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);       // _260
	virtual void throwupItemInDeathProcedure();              // _270 (weak)
	virtual bool damageCallBack(Creature*, f32, CollPart*);  // _278
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual bool earthquakeCallBack(Creature*, f32);         // _28C
	virtual bool bombCallBack(Creature*, Vector3f&, f32);    // _294 (weak)
	virtual void doStartStoneState();                        // _2A4
	virtual void doFinishStoneState();                       // _2A8
	virtual void setFSM(FSM*);                               // _2F8 (weak)
	//////////////// VTABLE END

	void walkFunc();
	bool isReachToGoal(f32);
	void findNextRoutePoint();
	void findNextTraceRoutePoint();
	bool isEndPathFinder();
	void setPathFinder(bool);
	void releasePathFinder();
	void jointMtxCalc(int);
	void bodyMtxCalc();
	bool isTyreFreeze();
	bool isTyreDead();
	bool isFallEnd();
	void moveRestart();
	void escape();
	void setTimer(f32);
	void getTimer();
	void collisionStOn();
	void collisionStOff();
	void flick();
	void recover();
	void recoverFlick();
	void tyreFlick();
	void deadEffect();
	void deadTraceEffect();
	void tyreUpEffect();
	void tyreDownEffect();
	void bendEffect();
	void createTraceEffect();
	void fadeTraceEffect();
	void createFlickEffect();
	void fadeFlickEffect();
	bool isFinalFloor();
	void appearFanfare();

	inline Parms* getParms() { return C_PARMS; }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	u8 _2BC[0x10];                           // _2BC, unknown
	int _2CC;                                // _2CC, timer?
	Vector3f _2D0;                           // _2D0
	int _2DC;                                // _2DC
	int _2E0;                                // _2E0
	u32 _2E4;                                // _2E4, unknown
	u32 _2E8;                                // _2E8, unknown
	u32 _2EC;                                // _2EC, unknown
	u32 _2F0;                                // _2F0, unknown
	u32 _2F4;                                // _2F4, unknown
	Vector3f _2F8;                           // _2F8
	u8 _304[0xC];                            // _304, unknown
	Vector3f _310[2];                        // _310
	Vector3f _328;                           // _328
	u32 _334;                                // _334
	bool _338;                               // _338
	f32 _33C;                                // _33C, timer?
	s16 _340;                                // _340, next or current waypoint idx?
	s16 _342;                                // _342, next or current waypoint idx?
	u8 _344[0x4];                            // _344, unknown
	u32 _348;                                // _348
	u8 _34C;                                 // _34C, unknown
	WalkSmokeEffect::Mgr m_walkSmokeMgr;     // _350
	Sys::MatLoopAnimator* m_matLoopAnimator; // _358
	PathNode* _35C;                          // _35C
	FSM* _360;                               // _360
	Tyre::Obj* m_tyre;                       // _364
	u16 _368;                                // _368, unknown
	u16 m_chestJointIndex;                   // _36A
	u16 m_leftHandJointIndex;                // _36C
	u16 m_rightHandJointIndex;               // _36E
	u16 m_leftFootJointIndex;                // _370
	u16 m_rightFootJointIndex;               // _372
	f32 _374;                                // _374
	f32 _378;                                // _378
	u8 _37C[0x14];                           // _37C
	efx::TKageMove* m_efxMove;               // _390
	efx::TKageRun* m_efxRun;                 // _394
	efx::TKageTyreup* m_efxTyreup;           // _398
	efx::TKageDead1* m_efxDead;              // _39C
	efx::TKageFlick* _3A0;                   // _3A0
	efx::TKageFlick* _3A4;                   // _3A4
	u8 _3A8;                                 // _3A8, unknown
	u8 _3A9;                                 // _3A9
	u8 _3AA;                                 // _3AA
	u8 _3AB;                                 // _3AB
	                                         // _3AC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void doAlloc();                            // _A8
	virtual SysShape::Model* createModel();            // _B0
	virtual void loadModelData();                      // _C8
	virtual void loadTexData();                        // _D0
	virtual J3DModelData* doLoadBmd(void*);            // _D4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_BlackMan;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		m_obj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &m_obj[index];
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Sys::MatTexAnimation* m_texAnimation; // _44
	Obj* m_obj;                           // _48
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "ポッド移動速度", 10.0f, 0.0f, 100.0f)
		    , m_fp02(this, 'fp02', "逃げ速度", 10.0f, 0.0f, 1000.0f)
		    , m_fp03(this, 'fp03', "逃げ回転速度率", 0.1f, 0.0f, 1.0f)
		    , m_fp04(this, 'fp04', "逃げ回転最大速度", 10.0f, 0.0f, 360.0f)
		    , m_fp05(this, 'fp05', "2段階速度", 200.0f, 10.0f, 500.0f)
		    , m_fp06(this, 'fp06', "2段階回転速度率", 0.1f, 0.0f, 1.0f)
		    , m_fp07(this, 'fp07', "2段階回転最大速度", 10.0f, 0.0f, 360.0f)
		    , m_fp11(this, 'fp11', "歩き速度", 10.0f, 0.0f, 100.0f)
		    , m_ip01(this, 'ip01', "2段階へのタイマー", 300, 0, 3000)
		    , m_ip03(this, 'ip03', "ドシン停止タイマー", 200, 0, 600)
		    , m_ip04(this, 'ip04', "逃げ停止タイマー", 200, 0, 600)
		    , m_ip05(this, 'ip05', "連続逃げタイマー", 200, 0, 600)
		    , m_ip06(this, 'ip06', "つかれ停止タイマー", 200, 0, 600)
		{
		}

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp03; // _854
		Parm<f32> m_fp04; // _87C
		Parm<f32> m_fp05; // _8A4
		Parm<f32> m_fp06; // _8CC
		Parm<f32> m_fp07; // _8F4
		Parm<f32> m_fp11; // _91C
		Parm<int> m_ip01; // _944
		Parm<int> m_ip03; // _96C
		Parm<int> m_ip04; // _994
		Parm<int> m_ip05; // _9BC
		Parm<int> m_ip06; // _9E4
	};

	Parms()
	{
		_A10 = 1;
		_A11 = 0;
		_A12 = 1;
		_A14 = 1;
		_A15 = 0;
		_A16 = 1;
		_A17 = 1;
		_A18 = 1;
		_A1A = -1;
		_A1C = 50.0f;
		_A20 = 20.0f;
		_A24 = 1.0f;
		_A28 = 5.0f;
		_A2C = 1.0f;
		_A30 = 0.9f;
		_A34 = 0.6f;
		_A38 = 0.2f;
		_A3C = 0.08f;
		_A40 = 20.0f;
		_A44 = -10.0f;
		_A48 = 10.0f;
		_A4C = 1.25f;
		_A50 = 1100.0f;
		_A54 = 300.0f;
		_A58 = 1.0f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		m_general.read(stream);
		m_properParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
	u8 _A10;                   // _A10, unknown
	u8 _A11;                   // _A11, unknown
	u8 _A12;                   // _A12, unknown
	u8 _A13;                   // _A13, unknown
	u8 _A14;                   // _A14, unknown
	u8 _A15;                   // _A15, unknown
	u8 _A16;                   // _A16, unknown
	u8 _A17;                   // _A17, unknown
	u8 _A18;                   // _A18, unknown
	s16 _A1A;                  // _A1A, unknown
	f32 _A1C;                  // _A1C
	f32 _A20;                  // _A20
	f32 _A24;                  // _A24
	f32 _A28;                  // _A28
	f32 _A2C;                  // _A2C
	f32 _A30;                  // _A30
	f32 _A34;                  // _A34
	f32 _A38;                  // _A38
	f32 _A3C;                  // _A3C
	f32 _A40;                  // _A40
	f32 _A44;                  // _A44
	f32 _A48;                  // _A48
	f32 _A4C;                  // _A4C
	f32 _A50;                  // _A50
	f32 _A54;                  // _A54
	f32 _A58;                  // _A58
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                // _14

	SysShape::Animator m_animator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	WRAITH_Walk    = 0,
	WRAITH_Dead    = 1,
	WRAITH_Freeze  = 2,
	WRAITH_Bend    = 3,
	WRAITH_Escape  = 4,
	WRAITH_Fall    = 5,
	WRAITH_Flick   = 6,
	WRAITH_Recover = 7,
	WRAITH_Tired   = 8,
	WRAITH_Count   = 9,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

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

struct StateBend : public State {
	StateBend(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 _10[0x4]; // _10, unknown
};

struct StateEscape : public State {
	StateEscape(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFall : public State {
	StateFall(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	StateFlick(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFreeze : public State {
	StateFreeze(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateRecover : public State {
	StateRecover(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTired : public State {
	StateTired(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10
};

struct StateWalk : public State {
	StateWalk(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace BlackMan
} // namespace Game

#endif
