#ifndef _GAME_ENTITIES_CHAPPYBASE_H
#define _GAME_ENTITIES_CHAPPYBASE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "Collinfo.h"

/**
 * --Header for Bulborb Base Class--
 * Derived classes:
 * BlueChappy   = Orange Bulborb
 * Chappy       = Red Bulborb
 * FireChappy   = Fiery Bulblax
 * Hana         = Creeping Chrysanthemum
 * YellowChappy = Hairy Bulborb
 */

namespace efx {
// TODO: make this header
struct THanachoN;
} // namespace efx

namespace Game {
namespace ChappyBase {
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
	virtual void collisionCallback(CollEvent& event);       // _EC
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void birth(Vector3f&, f32);                     // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void changeMaterial() = 0;                      // _200
	virtual Vector3f getOffsetForMapCollision();            // _224
	virtual void initMouthSlots();                          // _22C
	virtual void initWalkSmokeEffect();                     // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();  // _234
	virtual void setCollEvent(CollEvent&);                  // _240
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() = 0; // _258
	virtual MouthSlots* getMouthSlots()                     // _25C (weak)
	{
		return &m_mouthSlots;
	}
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void startCarcassMotion();                      // _2C4
	virtual void setFSM(FSM* fsm)                           // _2F8 (weak)
	{
		m_FSM = fsm;
		m_FSM->init(this);
		m_currentLifecycleState = nullptr;
	}
	virtual bool isWakeup();                  // _2FC
	virtual void setAnimationSpeed(f32 speed) // _300 (weak)
	{
		EnemyBase::setAnimSpeed(speed);
	}
	virtual void flickAttackFail();                  // _304
	virtual void flickStatePikmin();                 // _308
	virtual void flickAttackBomb();                  // _30C
	virtual void eatAttackPikmin();                  // _310
	virtual void resetUnderGround() { }              // _314 (weak)
	virtual void setUnderGround() { }                // _318 (weak)
	virtual void createEffect();                     // _31C
	virtual void setupEffect();                      // _320
	virtual void startSleepEffect();                 // _324
	virtual void finishSleepEffect();                // _328
	virtual void createFlickEffect() { }             // _32C (weak)
	virtual void createSmokeEffect() { }             // _330 (weak)
	virtual f32 getDownSmokeScale() { return 0.9f; } // _2EC (weak)
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                          // _2BC
	MouthSlots m_mouthSlots;             // _2C0
	SysShape::Joint* m_shadowJoint;      // _2C8
	f32 _2CC;                            // _2CC
	WalkSmokeEffect::Mgr m_walkSmokeMgr; // _2D0
	efx::TChaseMtx* m_efxHanacho;        // _2D8, either efx::THanachoN or efx::THanachoY
	f32 _2DC;                            // _2DC
	f32 _2E0;                            // _2E0
	                                     // _2E4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr() { }                                 // _58 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Chappy;
	}
	virtual SysShape::Model* createModel();   // _B0
	virtual void loadModelData();             // _C8
	virtual void loadAnimData();              // _CC
	virtual ResTIMG* getChangeTexture0() = 0; // _E0
	virtual ResTIMG* getChangeTexture1() = 0; // _E4

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "ChappyParms")
		    , m_fp01(this, 'fp01', "足元範囲", 50.0f, 0.0f, 100.0f)                  // 'foot range'
		    , m_poisonDamage(this, 'fp02', "白ピクミン毒", 300.0f, 0.0f, 1000.0f)    // 'white pikmin poison'
		    , m_bulborbWakeRadius(this, 'fp03', "目覚め距離", 400.0f, 0.0f, 1000.0f) // 'awake distance'
		{
		}

		Parm<f32> m_fp01;              // _808, fp01
		Parm<f32> m_poisonDamage;      // _830, fp02
		Parm<f32> m_bulborbWakeRadius; // _858, fp03
	};

	Parms() { _7F8.clear(); }

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		m_general.read(stream);
		m_properParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	BitFlag<u16> _7F8;         // _7F8
	ProperParms m_properParms; // _7FC
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
	CHAPPY_Turn       = 0,
	CHAPPY_Dead       = 1,
	CHAPPY_Flick      = 2,
	CHAPPY_Walk       = 3,
	CHAPPY_Attack     = 4,
	CHAPPY_TurnToHome = 5,
	CHAPPY_GoHome     = 6,
	CHAPPY_Sleep      = 7,
	CHAPPY_Count,
};

struct State : public EnemyFSMState {
	inline State(int); // probably

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	StateAttack(int);

	virtual void init(EnemyBase*, StateArg*);         // _08
	virtual void exec(EnemyBase*);                    // _0C
	virtual void cleanup(EnemyBase*);                 // _10
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _20

	void transitState(EnemyBase*);

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateCautionBase : public State {
	inline StateCautionBase(int); // probably

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

struct StateFlick : public State {
	StateFlick(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGoHome : public State {
	StateGoHome(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 _10[0x4]; // _10, unknown
};

struct SleepArg : public StateArg {
	bool _00; // _00
};

struct StateSleep : public State {
	StateSleep(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	void setNextState(EnemyBase*, int);

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10, next state?
};

struct StateTurnBase : public State {
	inline StateTurnBase(int); // probably

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
	int _10; // _10
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

} // namespace ChappyBase
} // namespace Game

#endif
