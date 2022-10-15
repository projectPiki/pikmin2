#ifndef _GAME_ENTITIES_BOMB_H
#define _GAME_ENTITIES_BOMB_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Bomb-Rock (Bomb)--
 */

namespace efx {
struct TBombrockLight;
} // namespace efx

namespace Game {
namespace OtakaraBase {
struct Obj;
} // namespace OtakaraBase

namespace Bomb {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void onKill(CreatureKillArg*);                  // _34
	virtual void doEntry();                                 // _40
	virtual void doSimulation(f32);                         // _4C
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual void onStartCapture();                          // _94
	virtual void onEndCapture();                            // _9C
	virtual bool isUnderground();                           // _D0 (weak)
	virtual bool isLivingThing();                           // _D4 (weak)
	virtual void bounceCallback(Sys::Triangle*);            // _E8
	virtual void collisionCallback(CollEvent&);             // _EC
	virtual void getShadowParam(ShadowParam&);              // _134
	virtual bool needShadow();                              // _138
	virtual ~Obj();                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                     // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4 (weak)
	virtual void doUpdate();                                // _1CC
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doAnimationCullingOn();                    // _1E0
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void setParameters();                           // _228
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual bool pressCallBack(Creature*, f32, CollPart*);  // _27C
	virtual bool bombCallBack(Creature*, Vector3f&, f32);   // _294
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8 (weak)
	//////////////// VTABLE END

	void forceBomb();
	void bombEffInWater();
	void canEat();
	bool isAnimStart();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	u8 _2BC;                         // _2BC
	u8 _2BD[0xF];                    // _2BD, unknown
	OtakaraBase::Obj* m_otakara;     // _2CC
	FSM* m_FSM;                      // _2D0
	efx::TBombrockLight* m_efxLight; // _2D4
	                                 // _2D8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	//////////////// VTABLE
	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int);                   // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	                                                    //////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs, probably
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms(); // probably

		Parm<f32> _804; // _804, type unsure
		Parm<f32> _82C; // _82C, type unsure
		Parm<f32> _854; // _854, type unsure
		Parm<f32> _87C; // _87C, type unsure
	};
	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms;
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
	BOMB_Wait = 0,
	BOMB_Bomb = 1,
	BOMB_Count,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10, maybe counter? kills bomb if it reaches 200
};

struct StateBomb : public State {
	StateBomb(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Bomb
} // namespace Game

#endif
