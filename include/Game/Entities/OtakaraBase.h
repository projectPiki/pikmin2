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
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void onKill(CreatureKillArg*);                  // _34
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual f32 getCellRadius() { return m_cellRadius; }    // _58 (weak)
	virtual void getShadowParam(ShadowParam&);              // _134
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
	virtual void startChargeEffect();                        // _308 (weak)
	virtual void finishChargeEffect();                       // _30C (weak)
	virtual void createDisChargeEffect();                    // _310 (weak)
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
	int _2C0;                // _2C0
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
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadModelData();                       // _C8
	virtual void loadAnimData();                        // _CC
	virtual ResTIMG* getChangeTexture() = 0;            // _E0

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	u8 _44[0x4]; // _44, unknown
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : Parameters {
		inline ProperParms; // probably

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp10; // _82C
		Parm<f32> m_fp11; // _854
		Parm<f32> m_fp21; // _87C
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

struct StateBombMove : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBombTurn : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBombWait : public State {
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

struct StateItemDrop : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemMove : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemTurn : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateItemWait : public State {
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

struct StateTake : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurn : public State {
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
} // namespace OtakaraBase
} // namespace Game

#endif
