#ifndef _GAME_ENTITIES_KOGANE_H
#define _GAME_ENTITIES_KOGANE_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"

/**
 * --Header for Beetle Base Class (Kogane)--
 * Derived Classes:
 * Fart			= Doodlebug
 * Koganemushi 	= Iridescent Flint Beetle
 * Wealthy	  	= Iridescent Glint Beetle
 */

namespace Game {
namespace Kogane {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                   // _30
	virtual void onKill(CreatureKillArg*);                   // _34
	virtual void doDirectDraw(Graphics&);                    // _50
	virtual void inWaterCallback(WaterBox*);                 // _84 (weak)
	virtual void outWaterCallback();                         // _88 (weak)
	virtual void getShadowParam(ShadowParam&);               // _134
	virtual ~Obj();                                          // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4
	virtual void doUpdate();                                 // _1CC
	virtual void doUpdateCommon();                           // _1D0
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual void changeMaterial() = 0;                       // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();      // _258 (weak)
	virtual bool pressCallBack(Creature*, f32, CollPart*);   // _27C
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual bool earthquakeCallBack(Creature*, f32);         // _28C
	virtual void doStartStoneState();                        // _2A4
	virtual void doFinishStoneState();                       // _2A8
	virtual void wallCallback(const MoveInfo&);              // _2E8
	virtual void doStartMovie();                             // _2F0
	virtual void doEndMovie();                               // _2F4
	virtual void setFSM(FSM*);                               // _2F8
	virtual void createItem();                               // _2FC (weak)
	virtual void resetFartTimer();                           // _300 (weak)
	virtual void startBodyEffect();                          // _304 (weak)
	virtual void finishBodyEffect();                         // _308 (weak)
	virtual void createFartEffect();                         // _30C (weak)
	virtual void effectDrawOn();                             // _310 (weak)
	virtual void effectDrawOff();                            // _314 (weak)
	virtual void createPressSENormal();                      // _318 (weak)
	virtual void createPressSESpecial();                     // _31C (weak)
	//////////////// VTABLE END

	void transitDamageState(f32);
	void transitDisappear();
	void getBodyJointPos();
	void koganeScaleUp();
	void koganeScaleDown();
	void setTargetPosition(Vector3f*);
	void resetAppearTimer();
	void isAppear();
	void resetMoveTimer(f32, f32);
	bool createTreasureItem();
	void createPellet(int initArg, int amount);
	void createDoping(u8 initArg, int amount);

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                // _2BC
	int _2C0;                  // _2C0
	f32 m_appearTimer;         // _2C4
	f32 m_moveTimer;           // _2C8
	f32 m_scaleTimer;          // _2CC
	Vector3f m_targetPosition; // _2D0
	                           // _2DC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadModelData();                       // _C8
	virtual void loadAnimData();                        // _CC
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : Parameters {
		inline ProperParms(); // probably

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp10; // _854
		Parm<f32> m_fp11; // _87C
		Parm<f32> m_fp20; // _8A4
		Parm<f32> m_fp21; // _8CC
		Parm<f32> m_fp30; // _8F4
		Parm<f32> m_fp40; // _91C
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
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
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDisappear : public State {
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

struct StatePress : public State {
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
} // namespace Kogane
} // namespace Game

#endif
