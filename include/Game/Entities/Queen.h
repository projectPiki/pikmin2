#ifndef _GAME_ENTITIES_QUEEN_H
#define _GAME_ENTITIES_QUEEN_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "SysShape/Joint.h"
#include "Collinfo.h"

/**
 * --Header for Empress Bulblax (Queen)--
 */

namespace efx {
// TODO: make header(s) for these
struct TQueenLay;
struct TQueenRollCR;
struct TQueenRollCL;
struct TQueenRoll;
struct TQueenCrashR;
struct TQueenCrashL;
struct TQueenCrashRock;
struct TQueenDamage;
struct TQueenFlick;
struct TQueenDead;
struct TQueenWakeup;
struct TQueenHanacho;
} // namespace efx

namespace Sys {
struct MatLoopAnimator;
} // namespace Sys

namespace Game {
namespace Queen {
struct QueenShadowMgr;
struct FSM;

enum StateID {
	QUEEN_NULL    = -1,
	QUEEN_Dead    = 0,
	QUEEN_Sleep   = 1,
	QUEEN_Wait    = 2,
	QUEEN_Damage  = 3,
	QUEEN_Flick   = 4,
	QUEEN_Rolling = 5,
	QUEEN_Born    = 6,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void onKill(CreatureKillArg*);                  // _34
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual void inWaterCallback(WaterBox*);                // _84
	virtual void outWaterCallback();                        // _88 (weak)
	virtual void getShadowParam(ShadowParam&);              // _134
	virtual bool ignoreAtari(Creature*);                    // _190
	virtual ~Obj();                                         // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doUpdateCommon();                          // _1D0
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void setParameters();                           // _228
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual bool earthquakeCallBack(Creature*, f32);        // _28C
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual f32 getDamageCoeStoneState();                   // _2AC (weak)
	virtual void startCarcassMotion();                      // _2C4
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
	//////////////// VTABLE END

	void rollingAttack();
	void flickPikmin(f32);
	bool isRollingAttackLeft();
	void createCrashFallRock();
	void createBabyChappy();
	void updateCreateBaby();
	bool isCreateBaby();
	bool isHitCounterUp();
	void resetJointShadow();
	void releaseJointShadow();
	void startBossChargeBGM();
	void startBossAttackLoopBGM();
	void finishBossAttackLoopBGM();
	void startStoneStateBossAttackLoopBGM();
	void finishStoneStateBossAttackLoopBGM();
	void updateBossBGM();
	void resetMidBossAppearBGM();
	void setMidBossAppearBGM();
	void createEffect();
	void setupEffect();
	void createBornEffect();
	void startRollingEffect();
	void finishRollingEffect(bool);
	void forceFinishRollingEffect();
	void startDamageEffect();
	void finishDamageEffect();
	void createFlickEffect();
	void createDeadEffect();
	void createWakeUpEffect();
	void startSleepEffect();
	void finishSleepEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	u8 _2BC[0x4];                            // _2BC, probably FSM*?
	bool m_canCreateLarva;                   // _2C0
	u8 _2C1;                                 // _2C1
	u8 _2C2;                                 // _2C2
	u8 _2C3;                                 // _2C3
	u8 _2C4;                                 // _2C4
	u8 _2C5;                                 // _2C5
	f32 m_waitTimer;                         // _2C8
	f32 _2CC;                                // _2CC, timer?
	f32 _2D0;                                // _2D0
	StateID m_nextState;                     // _2D4
	QueenShadowMgr* m_shadowMgr;             // _2D8
	Sys::MatLoopAnimator* m_matLoopAnimator; // _2DC
	efx::TQueenLay* _2E0;                    // _2E0
	efx::TQueenRollCR* _2E4;                 // _2E4
	efx::TQueenRollCL* _2E8;                 // _2E8
	efx::TQueenRoll* _2EC;                   // _2EC
	efx::TQueenCrashR* _2F0;                 // _2F0
	efx::TQueenCrashL* _2F4;                 // _2F4
	efx::TQueenCrashRock* _2F8;              // _2F8
	efx::TQueenDamage* _2FC;                 // _2FC
	efx::TQueenFlick* _300;                  // _300
	efx::TQueenDead* _304;                   // _304
	efx::TQueenWakeup* _308;                 // _308
	efx::TQueenHanacho* _30C;                // _30C
	                                         // _310 = PelletView
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
	u8 _44[0x4]; // _44, unknown
	Obj* m_obj;  // _48, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms(); // likely

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp11; // _854
		Parm<int> m_ip01; // _87C
		Parm<int> m_ip02; // _8A4
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                     // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int);                     // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

struct QueenShadowNode : public JointShadowNode {
	virtual ~QueenShadowNode(); // _08 (weak)

	void makeShadowSRT();

	// _00		= VTBL
	// _00-_24	= JointShadowNode
	SysShape::Joint* _24; // _24
	Matrixf _28;          // _28
};

struct QueenShadowMgr {
	Obj* m_obj;                      // _00
	JointShadowRootNode* m_rootNode; // _04
	QueenShadowNode* m_shadowNodes;  // _08, could point to array of pointers instead
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct RollingStateArg : public StateArg {
	u32 _00; // _00, unknown size/type
};

struct State : public EnemyFSMState {
	inline State(int stateID, char* name)
	    : EnemyFSMState(stateID)
	{
		m_name = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBorn : public State {
	inline StateBorn()
	    : State(QUEEN_Born, "born")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDamage : public State {
	inline StateDamage()
	    : State(QUEEN_Damage, "damage")
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
	    : State(QUEEN_Dead, "dead")
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
	    : State(QUEEN_Flick, "flick")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateRolling : public State {
	inline StateRolling()
	    : State(QUEEN_Rolling, "rolling")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSleep : public State {
	inline StateSleep()
	    : State(QUEEN_Sleep, "sleep")
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
	    : State(QUEEN_Wait, "wait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Queen
} // namespace Game

#endif
