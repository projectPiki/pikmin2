#ifndef _GAME_ENTITIES_GASHIBA_H
#define _GAME_ENTITIES_GASHIBA_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"

/**
 * --Header for Gas Pipe (GasHiba)--
 */

namespace efx {
struct TGasuHiba;
} // namespace efx

namespace Game {
namespace ItemBridge {
struct Item;
} // namespace ItemBridge

struct ItemGate;

namespace GasHiba {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings); // _30
	virtual void doSimulation(f32) { }              // _4C (weak)
	virtual void doDirectDraw(Graphics& gfx);       // _50
	virtual void inWaterCallback(WaterBox*) { }     // _84 (weak)
	virtual void outWaterCallback() { }             // _88 (weak)
	virtual bool isLivingThing()                    // _D4 (weak)
	{
		return m_isAlive;
	}
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()      // _258 (weak)
	{
		return EnemyTypeID::EnemyID_GasHiba;
	}
	virtual bool damageCallBack(Creature*, f32, CollPart*);  // _278
	virtual bool pressCallBack(Creature*, f32, CollPart*);   // _27C
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual bool bombCallBack(Creature*, Vector3f&, f32);    // _294
	virtual void lifeRecover() { }                           // _2C0 (weak)
	virtual void setFSM(FSM*);                               // _2F8
	//////////////// VTABLE END

	void interactGasAttack();
	void resetBridgeGateCheck();
	void setInitLivingThing();
	void updateLivingThing();
	void setupLodParms();
	void updateEfxLod();
	void createEffect();
	void startGasEffect();
	void finishGasEffect();
	void generatorKill();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                 // _2BC
	bool m_isBridgeGate;        // _2C0
	bool m_isAlive;             // _2C1
	f32 m_timer;                // _2C4
	ItemBridge::Item* m_bridge; // _2C8
	ItemGate* m_gate;           // _2CC
	efx::TGasuHiba* m_efxGas;   // _2D0
	                            // _2D4 = PelletView
};

struct Mgr : public EnemyMgrBaseAlwaysMovieActor {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_GasHiba;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_waitTime(this, 'fp02', "ÉEÉFÉCÉgéûä‘", 2.5f, 0.0f, 100.0f)   // 'wait time'
		    , m_activeTime(this, 'fp01', "ÉKÉXìfÇ´éûä‘", 2.5f, 0.0f, 100.0f) // 'gas discharge time'
		    , m_fp03(this, 'fp03', "çUåÇäJénéûä‘", 1.0f, 0.0f, 100.0f)       // 'attack start time'
		    , m_stopTime(this, 'fp04', "í‚é~éûä‘", 10.0f, 0.0f, 100.0f)      // 'stop time'
		    , m_lodNear(this, 'fp90', "LOD NEAR", 0.085f, 0.0f, 1.0f)
		    , m_lodMiddle(this, 'fp91', "LOD MIDDLE", 0.05f, 0.0f, 1.0f)
		{
		}

		Parm<f32> m_waitTime;   // _804, fp02
		Parm<f32> m_activeTime; // _82C, fp01
		Parm<f32> m_fp03;       // _854, fp03
		Parm<f32> m_stopTime;   // _87C, fp04
		Parm<f32> m_lodNear;    // _8A4, fp90
		Parm<f32> m_lodMiddle;  // _8CC, fp91
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
enum StateID { // same as Hiba::StateID
	GASHIBA_Dead   = 0,
	GASHIBA_Wait   = 1,
	GASHIBA_Attack = 2,
	GASHIBA_Count,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct WaitStateArg : public StateArg {
	f32 m_waitTimer; // _00
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
	    : State(GASHIBA_Attack, "attack")
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
	    : State(GASHIBA_Dead, "dead")
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
	    : State(GASHIBA_Wait, "wait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace GasHiba
} // namespace Game

#endif
