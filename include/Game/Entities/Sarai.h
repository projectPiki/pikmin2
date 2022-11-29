#ifndef _GAME_ENTITIES_SARAI_H
#define _GAME_ENTITIES_SARAI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Swooping Snitchbug (Sarai)--
 * Derived Classes:
 * Demon = Bumbling Snitchbug
 */

namespace Game {
namespace Sarai {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void inWaterCallback(WaterBox* wb) { }          // _84 (weak)
	virtual void outWaterCallback() { }                     // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void initMouthSlots();                          // _22C
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()      // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Sarai;
	}
	virtual MouthSlots* getMouthSlots() { return &m_mouthSlots; } // _25C (weak)
	virtual void doStartStoneState();                             // _2A4
	virtual void doFinishStoneState();                            // _2A8
	virtual void startCarcassMotion();                            // _2C4
	virtual f32 getDownSmokeScale() { return 0.65f; }             // _2EC (weak)
	virtual void setFSM(FSM*);                                    // _2F8
	virtual int getStickPikminNum();                              // _2FC
	virtual Piki* getAttackableTarget();                          // _300
	virtual void catchTarget();                                   // _304
	virtual void resetAttackableTimer(f32);                       // _308 (weak)
	//////////////// VTABLE END

	f32 setHeightVelocity();
	void setRandTarget();
	void fallMeckGround();
	int getCatchTargetNum();
	int getNextStateOnHeight();
	void flickStickTarget();
	void createDownEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;              // _2BC
	f32 _2C0;                // _2C0
	MouthSlots m_mouthSlots; // _2C4
	Vector3f m_targetPos;    // _2CC
	                         // _2D8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Sarai;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "通常飛行高さ", 100.0f, 0.0f, 300.0f)    // 'normal flight height'
		    , m_fp02(this, 'fp02', "掴み飛行高さ", 80.0f, 0.0f, 300.0f)     // 'grab flight height'
		    , m_fp03(this, 'fp03', "状態遷移高さ", 50.0f, 0.0f, 300.0f)     // 'state transition height'
		    , m_fp04(this, 'fp04', "通常移動速度", 100.0f, 0.0f, 300.0f)    // 'normal movement speed'
		    , m_fp05(this, 'fp05', "掴み移動速度", 75.0f, 0.0f, 300.0f)     // 'grab movement speed'
		    , m_fp06(this, 'fp06', "ウェイト時間", 3.0f, 0.0f, 10.0f)       // 'wait time'
		    , m_fp11(this, 'fp11', "上昇係数(0)", 1.5f, 0.0f, 5.0f)         // 'climbing factor (0)'
		    , m_fp12(this, 'fp12', "上昇係数(5)", 1.0f, 0.0f, 5.0f)         // 'climbing factor (5)'
		    , m_fp21(this, 'fp21', "振払確率(1)", 0.1f, 0.0f, 1.0f)         // 'payoff probability (1)'
		    , m_fp22(this, 'fp22', "振払確率(5)", 0.7f, 0.0f, 1.0f)         // 'payoff probability (5)'
		    , m_fp23(this, 'fp23', "もがき時間", 3.0f, 0.0f, 10.0f)         // 'struggling time'
		    , m_fp31(this, 'fp31', "ハント下降係数", 0.3f, 0.0f, 1.0f)      // 'hunt descent factor'
		    , m_fp32(this, 'fp32', "ハント後減衰率", 0.95f, 0.0f, 1.0f)     // 'post-hunt decay rate'
		    , m_fp41(this, 'fp41', "Fall Meck 速度", 200.0f, 0.0f, 1000.0f) // 'Fall Meck speed'
		{
		}

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp03; // _854
		Parm<f32> m_fp04; // _87C
		Parm<f32> m_fp05; // _8A4
		Parm<f32> m_fp06; // _8CC
		Parm<f32> m_fp11; // _8F4
		Parm<f32> m_fp12; // _91C
		Parm<f32> m_fp21; // _944
		Parm<f32> m_fp22; // _96C
		Parm<f32> m_fp23; // _994
		Parm<f32> m_fp31; // _9BC
		Parm<f32> m_fp32; // _9E4
		Parm<f32> m_fp41; // _A0C
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

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	SARAI_NULL     = -1,
	SARAI_Dead     = 0,
	SARAI_Fall     = 1,
	SARAI_Damage   = 2,
	SARAI_TakeOff  = 3,
	SARAI_Flick    = 4,
	SARAI_Wait     = 5,
	SARAI_Move     = 6,
	SARAI_Attack   = 7,
	SARAI_Fail     = 8,
	SARAI_CatchFly = 9,
	SARAI_FallMeck = 10,
	SARAI_StateCount,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateCatchFly : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDamage : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

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

struct StateFail : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFall : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFallMeck : public State {
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

struct StateMove : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTakeOff : public State {
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
/////////////////////////////////////////////////////////////////
} // namespace Sarai
} // namespace Game

#endif
