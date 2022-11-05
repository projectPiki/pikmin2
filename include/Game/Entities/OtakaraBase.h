#ifndef _GAME_ENTITIES_OTAKARABASE_H
#define _GAME_ENTITIES_OTAKARABASE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"

/**
 * --Header for Dweevil Base Class (OtakaraBase)--
 * Derived classes:
 * BombOtakara		= Volatile Dweevil
 * ElecOtakara		= Anode Dweevil
 * FireOtakara		= Fiery Dweevil
 * GasOtakara		= Munge Dweevil
 * WaterOtakara		= Caustic Dweevil
 */

namespace Game {
namespace OtakaraBase {
enum StateID {
	OTA_Null      = -1,
	OTA_Dead      = 0,
	OTA_Flick     = 1,
	OTA_Wait      = 2,
	OTA_Move      = 3,
	OTA_Turn      = 4,
	OTA_Take      = 5,
	OTA_ItemWait  = 6,
	OTA_ItemMove  = 7,
	OTA_ItemTurn  = 8,
	OTA_ItemFlick = 9,
	OTA_ItemDrop  = 10,
	OTA_BombWait  = 11,
	OTA_BombMove  = 12,
	OTA_BombTurn  = 13,
	OTA_Count,
};

struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void onKill(CreatureKillArg* settings);         // _34
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual f32 getCellRadius() { return m_cellRadius; }    // _58 (weak)
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doUpdateCommon();                          // _1D0
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void changeMaterial() = 0;                      // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()      // _258 (weak)
	{
		return EnemyTypeID::EnemyID_FireOtakara;
	}
	virtual bool damageCallBack(Creature*, f32, CollPart*);  // _278
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual bool earthquakeCallBack(Creature*, f32);         // _28C
	virtual bool bombCallBack(Creature*, Vector3f&, f32);    // _294
	virtual void doStartStoneState();                        // _2A4
	virtual void doFinishStoneState();                       // _2A8
	virtual void doStartEarthquakeState(f32);                // _2B0
	virtual void doFinishEarthquakeState();                  // _2B4
	virtual void doStartEarthquakeFitState();                // _2B8
	virtual void doFinishEarthquakeFitState();               // _2BC
	virtual void startCarcassMotion();                       // _2C4
	virtual void doStartWaitingBirthTypeDrop();              // _2E0
	virtual void doFinishWaitingBirthTypeDrop();             // _2E4
	virtual f32 getDownSmokeScale() { return 0.7f; }         // _2EC (weak)
	virtual void doStartMovie();                             // _2F0
	virtual void doEndMovie();                               // _2F4
	virtual void setFSM(FSM*);                               // _2F8
	virtual void interactCreature(Creature*) { }             // _2FC (weak)
	virtual void createEffect() { }                          // _300 (weak)
	virtual void setupEffect() { }                           // _304 (weak)
	virtual void startChargeEffect() { }                     // _308 (weak)
	virtual void finishChargeEffect() { }                    // _30C (weak)
	virtual void createDisChargeEffect() { }                 // _310 (weak)
	virtual void effectDrawOn() { }                          // _314 (weak)
	virtual void effectDrawOff() { }                         // _318 (weak)
	virtual void startEscapeSE();                            // _31C
	virtual void startDisChargeSE() { }                      // _320 (weak)
	//////////////// VTABLE END

	bool isMovePositionSet(bool);
	Pellet* getNearestTreasure();
	Vector3f getTargetPosition(Creature*);
	void resetTreasure();
	bool isTakeTreasure();
	void takeTreasure();
	bool fallTreasure(bool);
	bool isDropTreasure();
	void damageTreasure(f32);
	void attackTarget();
	void createTreasureFallEffect();
	void initBombOtakara();
	bool isTransitChaseState();
	bool stimulateBomb();
	Creature* getChaseTargetCreature();

	inline void getScaledRadius(f32 scale, f32* radius) { *radius = scale * (m_cellRadius - 10.0f); }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;              // _2BC
	StateID m_nextState;     // _2C0
	f32 _2C4;                // _2C4, timer?
	f32 _2C8;                // _2C8
	f32 m_escapeSfxTimer;    // _2CC
	u8 _2D0;                 // _2D0
	Vector3f m_movePosition; // _2D4
	Creature* m_treasure;    // _2E0
	f32 m_treasureHealth;    // _2E4
	f32 _2E8;                // _2E8, timer?
	f32 _2EC;                // _2EC
	f32 m_cellRadius;        // _2F0
	                         // _2F4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)

	virtual SysShape::Model* createModel();            // _B0
	virtual void loadModelData();                      // _C8
	virtual void loadAnimData();                       // _CC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_FireOtakara;
	}
	virtual ResTIMG* getChangeTexture() = 0; // _E0

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* m_changeTexture; // _44
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "OtakaraBaseParms")
		    , m_fp01(this, 'fp01', "オタカラライフ", 100.0f, 0.0f, 10000.0f) // 'otakara life'
		    , m_fp10(this, 'fp10', "ノーマルアタック", 1.0f, 0.0f, 10.0f)    // 'normal attack'
		    , m_fp11(this, 'fp11', "オタカラアタック", 1.25f, 0.0f, 10.0f)   // 'otakara attack'
		    , m_fp21(this, 'fp21', "オタカラキャッチ", 2.5f, 0.0f, 10.0f)    // 'treasure catch'
		{
		}

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp10; // _82C
		Parm<f32> m_fp11; // _854
		Parm<f32> m_fp21; // _87C
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

struct StateBombMove : public State {
	inline StateBombMove()
	    : State(OTA_BombMove, "bombflick") // wrong name by devs?
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBombTurn : public State {
	inline StateBombTurn()
	    : State(OTA_BombTurn, "bombdrop") // wrong name by devs?
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBombWait : public State {
	inline StateBombWait()
	    : State(OTA_BombWait, "bombturn") // wrong name by devs?
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
	    : State(OTA_Dead, "dead")
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
	    : State(OTA_Flick, "flick")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemDrop : public State {
	inline StateItemDrop()
	    : State(OTA_ItemDrop, "itemdrop")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemFlick : public State {
	inline StateItemFlick()
	    : State(OTA_ItemFlick, "itemflick")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemMove : public State {
	inline StateItemMove()
	    : State(OTA_ItemMove, "itemmove")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemTurn : public State {
	inline StateItemTurn()
	    : State(OTA_ItemTurn, "itemturn")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemWait : public State {
	inline StateItemWait()
	    : State(OTA_ItemWait, "itemwait")
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
	    : State(OTA_Move, "move")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTake : public State {
	inline StateTake()
	    : State(OTA_Take, "take")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurn : public State {
	inline StateTurn()
	    : State(OTA_Turn, "turn")
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
	    : State(OTA_Wait, "wait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace OtakaraBase
} // namespace Game

#endif
