#ifndef _GAME_ENTITIES_KOCHAPPYBASE_H
#define _GAME_ENTITIES_KOCHAPPYBASE_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/PelletView.h"
#include "Game/shadowMgr.h"
#include "Game/WalkSmokeEffect.h"
#include "SysShape/Joint.h"
#include "CollInfo.h"

/**
 * --Header for Dwarf Bulborb Base Class--
 * Derived classes:
 * BlueKochappy   = Dwarf Orange Bulborb
 * Catfish        = Water Dumple
 * Kochappy       = Dwarf Red Bulborb
 * YellowKochappy = Dwarf Snowy Bulborb
 */

namespace Game {
namespace KochappyBase {
struct Parms;

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE - Note: this order is needed for correct weak function ordering
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void bounceCallback(Sys::Triangle* tri);        // _E8
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void birth(Vector3f&, f32);                     // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1C8
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void changeMaterial() = 0;                      // _200
	virtual Vector3f getOffsetForMapCollision();            // _224
	virtual void initMouthSlots();                          // _22C
	virtual void initWalkSmokeEffect();                     // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();  // _234
	virtual bool pressCallBack(Creature*, f32, CollPart*);  // _27C
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void startCarcassMotion();                      // _2C4
	virtual void setFSM(FSM* fsm)                           // _2F8 (weak)
	{
		m_FSM = fsm;
		m_FSM->init(this);
		m_currentLifecycleState = nullptr;
	}
	virtual void setAnimationSpeed(f32 speed) // _2FC (weak)
	{
		EnemyBase::setAnimSpeed(speed);
	}
	virtual MouthSlots* getMouthSlots() // _25C (weak)
	{
		return &m_mouthSlots;
	}
	virtual void resetEnemyNonStone() { }            // _300 (weak)
	virtual void setEnemyNonStone() { }              // _304 (weak)
	virtual f32 getDownSmokeScale() { return 0.4f; } // _2EC (weak)
	//////////////// VTABLE END

	inline Parms* getParms() { return C_PARMS; }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                          // _2BC
	MouthSlots m_mouthSlots;             // _2C0
	SysShape::Joint* m_shadowJoint;      // _2C8
	f32 _2CC;                            // _2CC
	WalkSmokeEffect::Mgr m_walkSmokeMgr; // _2D0
	                                     // _2D4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr() { }                                                                        // _58 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_Kochappy; } // _AC (weak)
	virtual SysShape::Model* createModel();                                                      // _B0
	virtual void loadModelData();                                                                // _C8
	virtual void loadAnimData();                                                                 // _CC
	virtual ResTIMG* getChangeTexture() = 0;                                                     // _E0

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "ぼんやり時間", 2.0f, 0.0f, 100.0f)            // 'absentminded time'
		    , m_poisonDamage(this, 'fp02', "白ピクミン毒", 300.0f, 0.0f, 1000.0f) // 'white pikmin poison'
		    , m_fp03(this, 'fp03', "回転終了角度", 90.0f, 0.0f, 180.0f)           // 'rotation end angle'
		{
		}

		Parm<f32> m_fp01;         // _804
		Parm<f32> m_poisonDamage; // _82C
		Parm<f32> m_fp03;         // _854
	};

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		m_general.read(stream);
		m_properParms.read(stream);
	}

	Parms() { }

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
	KOCHAPPY_Wait       = 0,
	KOCHAPPY_Dead       = 1,
	KOCHAPPY_Turn       = 2,
	KOCHAPPY_Walk       = 3,
	KOCHAPPY_Attack     = 4,
	KOCHAPPY_Flick      = 5,
	KOCHAPPY_TurnToHome = 6,
	KOCHAPPY_GoHome     = 7,
	KOCHAPPY_Press      = 8,
	KOCHAPPY_Demo       = 9,
	KOCHAPPY_Count,
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	StateAttack(int);

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
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDemo : public State {
	StateDemo(int);

	virtual void init(EnemyBase*, StateArg*); // _08

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct FlickArg : public StateArg {
	int _00; // _00, sets _10 in StateFlick
};

struct StateFlick : public State {
	StateFlick(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10
};

struct StateGoHome : public State {
	StateGoHome(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10
};

struct StatePress : public State {
	StatePress(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurn : public State {
	StateTurn(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10
};

struct StateTurnToHome : public State {
	StateTurnToHome(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct WaitArg : public StateArg {
	u32 _00; // _00
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalk : public State {
	StateWalk(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10
};
/////////////////////////////////////////////////////////////////

} // namespace KochappyBase

} // namespace Game

#endif
