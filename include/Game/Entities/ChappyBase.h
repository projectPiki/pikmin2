#ifndef _GAME_ENTITIES_CHAPPYBASE_H
#define _GAME_ENTITIES_CHAPPYBASE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
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

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual void collisionCallback(CollEvent&);             // _EC
	virtual void getShadowParam(ShadowParam&);              // _134
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
	virtual bool isWakeup();                                // _2FC
	virtual void setAnimationSpeed(f32 speed)               // _300 (weak)
	{
		EnemyBase::setAnimSpeed(speed);
	}
	virtual void flickAttackFail();                         // _304
	virtual void flickStatePikmin();                        // _308
	virtual void flickAttackBomb();                         // _30C
	virtual void eatAttackPikmin();                         // _310
	virtual void resetUnderGround() { }                     // _314 (weak)
	virtual void setUnderGround() { }                       // _318 (weak)
	virtual void createEffect();                            // _31C
	virtual void setupEffect();                             // _320
	virtual void startSleepEffect();                        // _324
	virtual void finishSleepEffect();                       // _328
	virtual void createFlickEffect() { }                    // _32C (weak)
	virtual void createSmokeEffect() { }                    // _330 (weak)
	virtual f32 getDownSmokeScale() { return 0.9f; }        // _2EC (weak)
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                                // _2BC
	MouthSlots m_mouthSlots;                   // _2C0
	SysShape::Joint* m_shadowJoint;            // _2C8
	f32 _2CC;                                  // _2CC
	WalkSmokeEffect::Mgr m_walkSmokeEffectMgr; // _2D0
	efx::THanachoN* m_efxHanacho;              // _2D8
	f32 _2DC;                                  // _2DC
	f32 _2E0;                                  // _2E0
	                                           // _2E4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	virtual ~Mgr() { }                                  // _58 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadModelData();                       // _C8
	virtual void loadAnimData();                        // _CC

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
};

struct Parms : public EnemyParmsBase {
	Parms();

	virtual void read(Stream& stream); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	u8 _7F8[0x8C]; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr*);                     // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int);                    // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
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
