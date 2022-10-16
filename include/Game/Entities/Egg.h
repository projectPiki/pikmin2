#ifndef _GAME_ENTITIES_EGG_H
#define _GAME_ENTITIES_EGG_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TSimple.h"
#include "Game/ItemHoney.h"

/**
 * --Header for Egg (Egg)--
 */

namespace Game {
namespace Egg {
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE - Note: order necessary for weak function ordering
	virtual void onInit(CreatureInitArg*); // _30
	virtual void doSimulation(f32);        // _4C
	virtual void doDirectDraw(Graphics&);  // _50
	virtual void onStartCapture();         // _94
	virtual void onEndCapture();           // _9C

	virtual void bounceCallback(Sys::Triangle*);                          // _E8
	virtual void collisionCallback(CollEvent&);                           // _EC
	virtual void getShadowParam(ShadowParam&);                            // _134
	virtual bool needShadow();                                            // _138
	virtual ~Obj();                                                       // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                   // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*) { }            // _1C4 (weak)
	virtual void doUpdate();                                              // _1CC
	virtual void doAnimationCullingOff();                                 // _1DC
	virtual void doDebugDraw(Graphics&);                                  // _1EC
	virtual void setParameters();                                         // _228
	virtual bool isLivingThing() { return (m_captureMatrix == nullptr); } // _D4 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                    // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Egg;
	}
	virtual bool pressCallBack(Creature*, f32, CollPart*); // _27C
	virtual f32 getDownSmokeScale() { return 0.4f; }       // _2EC (weak)
	virtual void setFSM(FSM* fsm)                          // _2F8 (weak)
	{
		m_FSM = fsm;
		m_FSM->init(this);
		m_currentLifecycleState = nullptr;
	}
	//////////////// VTABLE END

	void genItem();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	u8 _2BC;    // _2BC
	FSM* m_FSM; // _2C0
	            // _2C4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int);                   // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms(); // probably

		Parm<f32> m_fp01;          // _804
		Parm<f32> m_fp02;          // _82C
		Parm<f32> m_mititesChance; // _854, fp03
		Parm<f32> m_fp04;          // _87C
		Parm<f32> m_fp05;          // _8A4
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
	u8 _8D0;                   // _8D0
	u8 _8D1;                   // _8D1
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08
	virtual void setAnimMgr(SysShape::AnimMgr*);                     // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10
	virtual SysShape::Animator& getAnimator(int);                    // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	EGG_Wait = 0,
	EGG_Count,
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase*, StateArg*); // _00
	virtual void exec(EnemyBase*);            // _04

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Egg
} // namespace Game

#endif
