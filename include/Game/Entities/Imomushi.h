#ifndef _GAME_ENTITIES_IMOMUSHI_H
#define _GAME_ENTITIES_IMOMUSHI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Ravenous Whiskerpillar (Imomushi)--
 */

namespace Game {
namespace Imomushi {
struct FSM;

enum StateID {
	IMOMUSHI_NULL        = -1,
	IMOMUSHI_Dead        = 0,
	IMOMUSHI_Wait        = 1,
	IMOMUSHI_FallDive    = 2,
	IMOMUSHI_FallMove    = 3,
	IMOMUSHI_Stay        = 4,
	IMOMUSHI_Appear      = 5,
	IMOMUSHI_Dive        = 6,
	IMOMUSHI_Move        = 7,
	IMOMUSHI_GoHome      = 8,
	IMOMUSHI_Attack      = 9,
	IMOMUSHI_Climb       = 10,
	IMOMUSHI_ZukanStay   = 11,
	IMOMUSHI_ZukanAppear = 12,
	IMOMUSHI_ZukanMove   = 13,
	IMOMUSHI_Count,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void onKill(CreatureKillArg* settings);         // _34
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual bool isUnderground();                           // _D0 (weak)
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doAnimationStick();                        // _1E4
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual bool dropCallBack(Creature*);                   // _288
	virtual bool earthquakeCallBack(Creature*, f32);        // _28C
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void doStartEarthquakeState(f32);               // _2B0
	virtual void doFinishEarthquakeState();                 // _2B4
	virtual void doStartEarthquakeFitState();               // _2B8
	virtual void doFinishEarthquakeFitState();              // _2BC
	virtual void startCarcassMotion();                      // _2C4
	virtual f32 getDownSmokeScale();                        // _2EC (weak)
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
	//////////////// VTABLE END

	void lifeIncrement();
	void resetZukanStateTimer();
	void resetStickDiff();
	void setStickDiff(f32, f32);
	Creature* getRandFruitsPlant();
	void startClimbPlant(CollPart*);
	void moveStickTube();
	void moveStickSphere();
	void eatTsuyukusa();
	bool isAttackable();
	bool isStickToFall();
	void setZukanTargetPosition();
	bool isInZukanTargetArea();
	void createEffect();
	void setupEffect();
	void createAppearEffect();
	void createDisAppearEffect();
	void startMoveTraceEffect();
	void finishMoveTraceEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                     // _2BC
	bool _2C0;                      // _2C0, unknown
	StateID m_nextState;            // _2C4
	f32 _2C8;                       // _2C8
	u8 _2CC[0xC];                   // _2CC, unknown
	Vector3f _2D8;                  // _2D8
	Vector3f _2E4;                  // _2E4
	Vector3f m_zukanTargetPosition; // _2F0
	f32 _2FC;                       // _2FC
	u8 _300[0x10];                  // _300, unknown
	                                // _310 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Imomushi;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, likely an array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "ëêìoÇËë¨ìx", 2.0f, 0.0f, 10.0f)     // 'plant climbing speed'
		    , m_fp02(this, 'fp02', "éÌé¸âÒë¨ìx", 0.3f, 0.0f, 10.0f)     // 'seed circulation speed'
		    , m_fp11(this, 'fp11', "é¿êHÇ¢éûä‘", 10.0f, 0.0f, 100.0f)   // 'eating time'
		    , m_fp90(this, 'fp90', "Translateï‚ê≥", 0.75f, 0.0f, 10.0f) // 'translation correction'
		    , m_fp91(this, 'fp91', "Rotateï‚ê≥", 0.05f, 0.0f, 1.0f)     // 'rotation correction'
		{
		}

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp11; // _854
		Parm<f32> m_fp90; // _87C
		Parm<f32> m_fp91; // _8A4
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
	virtual ~ProperAnimator() { }                                     // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                  // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                 // _14

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
	inline State(u16 stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		m_name = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear : public State {
	inline StateAppear()
	    : State(IMOMUSHI_Appear, "appear")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	inline StateAttack()
	    : State(IMOMUSHI_Attack, "attack")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateClimb : public State {
	inline StateClimb()
	    : State(IMOMUSHI_Climb, "climb")
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
	    : State(IMOMUSHI_Dead, "dead")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDive : public State {
	inline StateDive()
	    : State(IMOMUSHI_Dive, "dive")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFallDive : public State {
	inline StateFallDive()
	    : State(IMOMUSHI_FallDive, "falldive")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFallMove : public State {
	inline StateFallMove()
	    : State(IMOMUSHI_FallMove, "fallmove")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGoHome : public State {
	inline StateGoHome()
	    : State(IMOMUSHI_GoHome, "gohome")
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
	    : State(IMOMUSHI_Move, "move")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStay : public State {
	inline StateStay()
	    : State(IMOMUSHI_Stay, "stay")
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
	    : State(IMOMUSHI_Wait, "wait")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateZukanAppear : public State {
	inline StateZukanAppear()
	    : State(IMOMUSHI_ZukanAppear, "zukanappear")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateZukanMove : public State {
	inline StateZukanMove()
	    : State(IMOMUSHI_ZukanMove, "zukanmove")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateZukanStay : public State {
	inline StateZukanStay()
	    : State(IMOMUSHI_ZukanStay, "zukanstay")
	{
	}
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Imomushi
} // namespace Game

#endif
