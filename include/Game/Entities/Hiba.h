#ifndef _GAME_ENTITIES_HIBA_H
#define _GAME_ENTITIES_HIBA_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TEnemyBomb.h"
#include "PS.h"

/**
 * --Header for Fire Geyser (Hiba)--
 */

namespace efx {
struct THibaFire;
} // namespace efx

namespace Game {
namespace Hiba {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);      // _30
	virtual void doSimulation(f32) { }          // _4C (weak)
	virtual void doDirectDraw(Graphics&);       // _50
	virtual void inWaterCallback(WaterBox*) { } // _84 (weak)
	virtual void outWaterCallback() { }         // _88 (weak)
	virtual bool isLivingThing()                // _D4 (weak)
	{
		return m_isAlive;
	}
	virtual void getShadowParam(ShadowParam&);              // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()      // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Hiba;
	}
	virtual bool damageCallBack(Creature*, f32, CollPart*);  // _278
	virtual bool pressCallBack(Creature*, f32, CollPart*);   // _27C
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual bool bombCallBack(Creature*, Vector3f&, f32);    // _294
	virtual void lifeRecover() { }                           // _2C0 (weak)
	virtual void setFSM(FSM*);                               // _2F8
	//////////////// VTABLE END

	void interactFireAttack();
	void setupLodParms();
	void updateEfxLod();
	void createEffect();
	void startFireEffect();
	void finishFireEffect();
	void generatorKill();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                // _2BC
	bool m_isAlive;            // _2C0
	f32 m_timer;               // _2C4
	efx::THibaFire* m_efxFire; // _2C8
	                           // _2CC = PelletView
};

struct Mgr : public EnemyMgrBaseAlwaysMovieActor {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms(); // likely

		Parm<f32> m_waitTime;   // _804, fp02
		Parm<f32> m_activeTime; // _82C, fp01
		Parm<f32> m_stopTime;   // _854, fp03
		Parm<f32> m_lodNear;    // _87C, fp90
		Parm<f32> m_lodMiddle;  // _8A4, fp91
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
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
enum StateID {
	HIBA_Dead   = 0,
	HIBA_Wait   = 1,
	HIBA_Attack = 2,
	HIBA_Count,
};

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
	    : State(HIBA_Attack, "attack")
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
	    : State(HIBA_Dead, "dead")
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
	    : State(HIBA_Wait, "wait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Hiba
} // namespace Game

#endif
