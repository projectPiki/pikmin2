#ifndef _GAME_ENTITIES_TANK_H
#define _GAME_ENTITIES_TANK_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "SysShape/Joint.h"

/**
 * --Header for (Ground) Blowhogs--
 * Tank		= Base Class for Blowhogs
 * Ftank	= Fiery Blowhog
 * Wtank	= Watery Blowhog
 */

namespace efx {
struct TTankEffect;
} // namespace efx

namespace Game {
// Base Blowhog Structs
namespace Tank {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void onKill(CreatureKillArg*);                  // _34
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual void getShadowParam(ShadowParam&);              // _134
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
	virtual void finishEffect();                            // _30C (weak)
	virtual void effectDrawOn();                            // _310 (weak)
	virtual void effectDrawOff();                           // _314 (weak)
	virtual void interactCreature(Creature*);               // _318 (weak)
	virtual void stopEffectRadius(f32);                     // _31C (weak)
	virtual void createChargeSE();                          // _320 (weak)
	virtual void createDisChargeSE();                       // _324 (weak)
	//////////////// VTABLE END

	void isAttackable(bool);
	void emitCollideRatio(Vector3f&, Vector3f&, f32);
	void updateEmit();
	void updateCaution();
	void getViewAngle();

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
	u8 _2F8[0xC];                        // _2F8, unknown
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
	virtual void setAnimMgr(SysShape::AnimMgr*);                     // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int);                    // _14

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

struct StateChaseTurn : public State {
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

struct StateMoveTurn : public State {
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
} // namespace Tank

/* Fiery Blowhog */
namespace Ftank {
struct Obj : public Tank::Obj {
	Obj();

	//////////////// VTABLE
	virtual ~Obj() { }                                  // _1BC (weak)
	virtual void changeMaterial();                      // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)
	virtual void createEffect();                        // _2FC
	virtual void setupEffect();                         // _300
	virtual void startEffect();                         // _304
	virtual void startYodare();                         // _308
	virtual void finishEffect();                        // _30C
	virtual void effectDrawOn();                        // _310
	virtual void effectDrawOff();                       // _314
	virtual void interactCreature(Creature*);           // _318
	virtual void stopEffectRadius(f32);                 // _31C
	virtual void createChargeSE();                      // _320
	virtual void createDisChargeSE();                   // _324
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
	virtual EnemyBase* getEnemy(int);                  // _A4
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
	virtual ~Obj() { }                                  // _1BC (weak)
	virtual void changeMaterial();                      // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)
	virtual void createEffect();                        // _2FC
	virtual void setupEffect();                         // _300
	virtual void startEffect();                         // _304
	virtual void startYodare();                         // _308
	virtual void finishEffect();                        // _30C
	virtual void effectDrawOn();                        // _310
	virtual void effectDrawOff();                       // _314
	virtual void interactCreature(Creature*);           // _318
	virtual void stopEffectRadius(f32);                 // _31C
	virtual void createChargeSE();                      // _320
	virtual void createDisChargeSE();                   // _324
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
	virtual EnemyBase* getEnemy(int);                  // _A4
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
