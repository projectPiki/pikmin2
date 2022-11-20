#ifndef _GAME_ENTITIES_TANK_H
#define _GAME_ENTITIES_TANK_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "SysShape/Joint.h"
#include "efx/TTank.h"

/**
 * --Header for (Ground) Blowhogs--
 * Tank		= Base Class for Blowhogs
 * Ftank	= Fiery Blowhog
 * Wtank	= Watery Blowhog
 */

namespace Game {
// Base Blowhog Structs
namespace Tank {

enum StateID {
	TANK_Dead      = 0,
	TANK_Wait      = 1,
	TANK_Move      = 2,
	TANK_MoveTurn  = 3,
	TANK_ChaseTurn = 4,
	TANK_Attack    = 5,
	TANK_Flick     = 6,
	TANK_Count,
};

struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void onKill(CreatureKillArg* settings);         // _34
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void changeMaterial() = 0;                      // _200
	virtual void getCommonEffectPos(Vector3f&);             // _204
	virtual Vector3f getOffsetForMapCollision();            // _224
	virtual void initWalkSmokeEffect();                     // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();  // _234
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void doStartEarthquakeFitState();               // _2B8
	virtual void doFinishEarthquakeFitState();              // _2BC
	virtual void startCarcassMotion();                      // _2C4
	virtual void doStartWaitingBirthTypeDrop();             // _2E0
	virtual void doFinishWaitingBirthTypeDrop();            // _2E4
	virtual f32 getDownSmokeScale();                        // _2EC (weak)
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
	virtual void createEffect();                            // _2FC (weak)
	virtual void setupEffect();                             // _300 (weak)
	virtual void startEffect();                             // _304 (weak)
	virtual void startYodare();                             // _308 (weak)
	virtual void finishEffect() { }                         // _30C (weak)
	virtual void effectDrawOn();                            // _310 (weak)
	virtual void effectDrawOff();                           // _314 (weak)
	virtual void interactCreature(Creature*);               // _318 (weak)
	virtual void stopEffectRadius(f32);                     // _31C (weak)
	virtual void createChargeSE();                          // _320 (weak)
	virtual void createDisChargeSE();                       // _324 (weak)
	//////////////// VTABLE END

	bool isAttackable(bool);
	void emitCollideRatio(Vector3f&, Vector3f&, f32);
	void updateEmit();
	void updateCaution();
	f32 getViewAngle();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                          // _2BC
	SysShape::Joint* m_joint;            // _2C0
	WalkSmokeEffect::Mgr m_walkSmokeMgr; // _2C4
	Vector3f _2CC;                       // _2CC
	Vector3f _2D8;                       // _2D8
	f32 _2E4;                            // _2E4
	f32 _2E8;                            // _2E8
	f32 _2EC;                            // _2EC, timer?
	f32 _2F0;                            // _2F0
	f32 _2F4;                            // _2F4
	Vector3f _2F8;                       // _2F8
	u8 _304;                             // _304, unknown
	                                     // _308 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)

	virtual SysShape::Model* createModel();            // _B0
	virtual void loadModelData();                      // _C8
	virtual void loadAnimData();                       // _CC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Tank;
	}
	virtual ResTIMG* getChangeTexture() = 0; // _E0

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
};

struct Parms : public EnemyParmsBase {
	Parms()
	    : m_parameters(nullptr, "TankParms")
	{
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		m_general.read(stream);
		m_parameters.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	// this might be a sub-struct like other enemies
	// but doesn't have any Parms in it, so...
	Parameters m_parameters; // _7F8
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
	    : State(TANK_Attack, "attack")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateChaseTurn : public State {
	inline StateChaseTurn()
	    : State(TANK_ChaseTurn, "chaseturn")
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
	    : State(TANK_Dead, "dead")
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
	    : State(TANK_Flick, "flick")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMove : public State {
	inline StateMove()
	    : State(TANK_Move, "move")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMoveTurn : public State {
	inline StateMoveTurn()
	    : State(TANK_MoveTurn, "moveturn")
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
	    : State(TANK_Wait, "wait")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Tank

/* Fiery Blowhog */
namespace Ftank {
struct Obj : public Tank::Obj {
	Obj();

	//////////////// VTABLE
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Tank;
	}
	virtual void createEffect();              // _2FC
	virtual void setupEffect();               // _300
	virtual void startEffect();               // _304
	virtual void startYodare();               // _308
	virtual void finishEffect();              // _30C
	virtual void effectDrawOn();              // _310
	virtual void effectDrawOff();             // _314
	virtual void interactCreature(Creature*); // _318
	virtual void stopEffectRadius(f32);       // _31C
	virtual void createChargeSE();            // _320
	virtual void createDisChargeSE();         // _324
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_308	= Tank::Obj
	efx::TTankEffect* m_tankEffect; // _308
	                                // _30C = PelletView
};

struct Mgr : public Tank::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Tank;
	}
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return m_changeTexture;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* m_changeTexture; // _44, probably
	Obj* m_obj;               // _48, array of Objs, probably
};
} // namespace Ftank

/* Watery Blowhog */
namespace Wtank {
struct Obj : public Tank::Obj {
	Obj();

	//////////////// VTABLE
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Wtank;
	}
	virtual void createEffect();              // _2FC
	virtual void setupEffect();               // _300
	virtual void startEffect();               // _304
	virtual void startYodare();               // _308
	virtual void finishEffect();              // _30C
	virtual void effectDrawOn();              // _310
	virtual void effectDrawOff();             // _314
	virtual void interactCreature(Creature*); // _318
	virtual void stopEffectRadius(f32);       // _31C
	virtual void createChargeSE();            // _320
	virtual void createDisChargeSE();         // _324
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_308	= Tank::Obj
	efx::TWtankEffect* m_tankEffect; // _308
	                                 // _30C = PelletView
};

struct Mgr : public Tank::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Wtank;
	}
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return m_changeTexture;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* m_changeTexture; // _44, probably
	Obj* m_obj;               // _48, array of Objs, probably
};
} // namespace Wtank
} // namespace Game

#endif
