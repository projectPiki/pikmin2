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
	virtual void onInit(CreatureInitArg*);                   // _30
	virtual void doSimulation(f32);                          // _4C (weak)
	virtual void doDirectDraw(Graphics&);                    // _50
	virtual void inWaterCallback(WaterBox*);                 // _84 (weak)
	virtual void outWaterCallback();                         // _88 (weak)
	virtual bool isLivingThing();                            // _D4 (weak)
	virtual void getShadowParam(ShadowParam&);               // _134
	virtual ~Obj();                                          // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4
	virtual void doUpdate();                                 // _1CC
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()       // _258 (weak)
	{
		return EnemyTypeID::EnemyID_GasHiba;
	}
	virtual bool damageCallBack(Creature*, f32, CollPart*);  // _278
	virtual bool pressCallBack(Creature*, f32, CollPart*);   // _27C
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual bool bombCallBack(Creature*, Vector3f&, f32);    // _294
	virtual void lifeRecover();                              // _2C0 (weak)
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
	u8 _2C0;                    // _2C0, unknown
	bool m_isAlive;             // _2C1
	f32 _2C4;                   // _2C4
	ItemBridge::Item* m_bridge; // _2C8
	ItemGate* m_gate;           // _2CC
	efx::TGasuHiba* m_efxGas;   // _2D0
	                            // _2D4 = PelletView
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

		Parm<f32> m_fp02;    // _804
		Parm<f32> m_fp01;    // _82C
		Parm<f32> m_fp03;    // _854
		Parm<f32> m_fp04;    // _87C
		Parm<f32> m_lodNear; // _8A4, fp90
		Parm<f32> m_lodFar;  // _8CC, fp91
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

struct StateDead : public State {
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
} // namespace GasHiba
} // namespace Game

#endif
