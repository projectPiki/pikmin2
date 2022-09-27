#ifndef _GAME_ENTITIES_ELECHIBA_H
#define _GAME_ENTITIES_ELECHIBA_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/gameGenerator.h"

/**
 * --Header for Electric Wire (ElecHiba)--
 */

namespace efx {
struct TDenkiHibaMgr;
} // namespace efx

namespace Game {
struct Piki;

namespace ElecHiba {
struct FSM;

// TODO: work out what goes in this
struct InitialParam;

struct TeamList : public CNode {
	virtual ~TeamList(); // _08 (weak)

	// _00		= VTBL
	// _00-_18  = CNode
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void doSimulation(f32);                         // _4C (weak)
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual void inWaterCallback(WaterBox*);                // _84 (weak)
	virtual void outWaterCallback();                        // _88 (weak)
	virtual bool isLivingThing();                           // _D4 (weak)
	virtual void getShadowParam(ShadowParam&);              // _134
	virtual ~Obj();                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                     // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual bool injure();                                  // _23C
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()      // _258 (weak)
	{
		return EnemyTypeID::EnemyID_ElecHiba;
	}
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);       // _260
	virtual bool damageCallBack(Creature*, f32, CollPart*);  // _278
	virtual bool pressCallBack(Creature*, f32, CollPart*);   // _27C
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual bool bombCallBack(Creature*, Vector3f&, f32);    // _294
	virtual void lifeRecover();                              // _2C0 (weak)
	virtual void setFSM(FSM*);                               // _2F8
	//////////////// VTABLE END

	Obj* getChildObjPtr();
	void setElecHibaPosition(InitialParam*, f32);
	void interactDenkiAttack(Vector3f&);
	void addDamageMyself(f32);
	void damageIncrement(f32);
	void setupLodParms();
	void updateEfxLod();
	void createEffect(bool);
	void startChargeEffect(Creature*);
	void finishChargeEffect();
	void startDisChargeEffect();
	void finishDisChargeEffect();
	void generatorKill();
	void setVersusHibaOnOff();
	void setVersusHibaType();
	void resetAttrHitCount();
	void addAttrAttackCount(Piki*);
	bool isWaitFinish();
	bool isAttackFinish();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                            // _2BC
	u8 _2C0;                               // _2C0
	f32 m_waitTimer;                       // _2C4
	TeamList m_teamList;                   // _2C8
	u8 _2E0[0x10];                         // _2E0, unknown
	efx::TDenkiHibaMgr* m_efxDenkiHibaMgr; // _2F0
	u8 _2F4;                               // _2F4, might be a bool?
	u8 _2F5[0x9];                          // _2F5, unknown
	                                       // _304 = PelletView
};

struct Mgr : public EnemyMgrBaseAlwaysMovieActor {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
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

		Parm<f32> _804; // _804, type unknown
		Parm<f32> _82C; // _82C, type unknown
		Parm<f32> _854; // _854, type unknown
		Parm<f32> _87C; // _87C, type unknown
		Parm<f32> _8A4; // _8A4, type unknown
		Parm<f32> _8CC; // _8CC, type unknown
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
};

struct Generator : public EnemyGeneratorBase {
	Generator();

	virtual ~Generator();            // _08 (weak)
	virtual void doWrite(Stream&);   // _10
	virtual void doRead(Stream&);    // _14
	virtual u32 getLatestVersion();  // _18
	virtual void* getInitialParam(); // _20 (weak)

	void doReadLatestVersion(Stream&);
	void doReadOldVersion(Stream&);

	// _00 		= VTBL
	// _00-_1C  = EnemyGeneratorBase
	f32 m_distance; // _20
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
	ELECHIBA_Dead   = 0,
	ELECHIBA_Wait   = 1,
	ELECHIBA_Sign   = 2,
	ELECHIBA_Attack = 3,
	ELECHIBA_Count,
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
	inline State(u16 stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		m_name = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	inline StateAttack()
	    : State(ELECHIBA_Attack, "attack")
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
	    : State(ELECHIBA_Dead, "dead")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSign : public State {
	inline StateSign()
	    : State(ELECHIBA_Sign, "sign")
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
	    : State(ELECHIBA_Wait, "wait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace ElecHiba
} // namespace Game

#endif
