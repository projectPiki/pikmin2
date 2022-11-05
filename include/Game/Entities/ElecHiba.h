#ifndef _GAME_ENTITIES_ELECHIBA_H
#define _GAME_ENTITIES_ELECHIBA_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/gameGenerator.h"
#include "efx/TDenki.h"

/**
 * --Header for Electric Wire (ElecHiba)--
 */

namespace Game {
struct Piki;

namespace ElecHiba {
struct FSM;
struct Obj;

typedef enum EVersusHibaType { VHT_Neutral = 0, VHT_Red = 1, VHT_Blue = 2 } EVersusHibaType;

struct InitialParam : public EnemyInitialParamBase {
	f32 _00; // _00
};

struct TeamList : public CNode {
	inline TeamList()
	    : m_childObjPtr(nullptr)
	{
	}

	virtual ~TeamList() { } // _08 (weak)

	// _00		= VTBL
	// _00-_18  = CNode
	Obj* m_childObjPtr; // _18, child object pointer
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void doSimulation(f32) { }                      // _4C (weak)
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void inWaterCallback(WaterBox*) { }             // _84 (weak)
	virtual void outWaterCallback() { }                     // _88 (weak)
	virtual bool isLivingThing() { return _2C0; }           // _D4 (weak)
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
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
	virtual void lifeRecover() { }                           // _2C0 (weak)
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
	bool _2C0;                             // _2C0
	f32 m_waitTimer;                       // _2C4
	TeamList m_teamList;                   // _2C8
	Vector3f _2E4;                         // _2E4
	efx::TDenkiHibaMgr* m_efxDenkiHibaMgr; // _2F0
	bool _2F4;                             // _2F4, might be a bool?
	EVersusHibaType m_versusHibaType;      // _2F8
	int m_redAttrAttackCount;              // _2FC
	int m_blueAttrAttackCount;             // _300
	                                       // _304 = PelletView
};

struct Mgr : public EnemyMgrBaseAlwaysMovieActor {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_ElecHiba;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_waitTime(this, 'fp02', "ウェイト時間", 2.5f, 0.0f, 100.0f) // 'wait time'
		    , m_warningTime(this, 'fp03', "予\兆時間", 2.5f, 0.0f, 100.0f) // 'warning time'
		    , m_activeTime(this, 'fp01', "放電時間", 2.5f, 0.0f, 100.0f)   // 'discharge time'
		    , m_stopTime(this, 'fp04', "停止時間", 10.0f, 0.0f, 100.0f)    // 'stop time'
		    , m_lodNear(this, 'fp90', "LOD NEAR", 0.085f, 0.0f, 1.0f)
		    , m_lodMiddle(this, 'fp91', "LOD MIDDLE", 0.05f, 0.0f, 1.0f)
		{
		}

		Parm<f32> m_waitTime;    // _804, fp02
		Parm<f32> m_warningTime; // _82C, fp03
		Parm<f32> m_activeTime;  // _854, fp01
		Parm<f32> m_stopTime;    // _87C, fp04
		Parm<f32> m_lodNear;     // _8A4, fp90
		Parm<f32> m_lodMiddle;   // _8CC, fp91
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

struct Generator : public EnemyGeneratorBase {
	Generator();

	virtual ~Generator() { }        // _08 (weak)
	virtual void doWrite(Stream&);  // _10
	virtual void doRead(Stream&);   // _14
	virtual u32 getLatestVersion(); // _18
	virtual void* getInitialParam() // _20 (weak)
	{
		return &m_distance;
	}

	void doReadLatestVersion(Stream&);
	void doReadOldVersion(Stream&);

	// _00 		= VTBL
	// _00-_24  = EnemyGeneratorBase
	f32 m_distance; // _24
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
