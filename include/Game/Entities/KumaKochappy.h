#ifndef _GAME_ENTITIES_KUMAKOCHAPPY_H
#define _GAME_ENTITIES_KUMAKOCHAPPY_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "Collinfo.h"

/**
 * --Header for Dwarf Bulbear (KumaKochappy)--
 */

namespace Game {
struct ChappyRelation;
namespace KumaChappy {
struct Obj;
} // namespace KumaChappy

struct WayPoint;

namespace KumaKochappy {
struct FSM;

enum StateID {
	KUMAKOCHAPPY_NULL     = -1,
	KUMAKOCHAPPY_Dead     = 0,
	KUMAKOCHAPPY_Press    = 1,
	KUMAKOCHAPPY_Wait     = 2,
	KUMAKOCHAPPY_Attack   = 3,
	KUMAKOCHAPPY_Flick    = 4,
	KUMAKOCHAPPY_Walk     = 5,
	KUMAKOCHAPPY_WalkPath = 6,
	KUMAKOCHAPPY_StateCount, // 7
};

struct Obj : public EnemyBase {
	Obj();

	////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                             // _30
	virtual void onKill(CreatureKillArg* settings);                             // _34
	virtual void doDirectDraw(Graphics& gfx);                                   // _50
	virtual void getShadowParam(ShadowParam& settings);                         // _134
	virtual ~Obj() { }                                                          // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);              // _1C4
	virtual void doUpdate();                                                    // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                    // _1EC
	virtual void initMouthSlots();                                              // _22C
	virtual void initWalkSmokeEffect();                                         // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();                      // _234
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);   // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part); // _284
	virtual void startCarcassMotion();                                          // _2C4
	virtual void setFSM(FSM* fsm);                                              // _2F8
	virtual MouthSlots* getMouthSlots() { return &mMouthSlots; }                // _25C (weak)
	virtual f32 getDownSmokeScale() { return 0.4f; }                            // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                          // _258 (weak)
	{
		return EnemyTypeID::EnemyID_KumaKochappy;
	}
	////////// VTABLE END

	void resetZukanAnimationFrame();
	KumaChappy::Obj* setNearestParent();
	Vector3f* setTargetParentPosition();
	void updateHomePosition();
	Creature* getSearchedTarget();
	void createChappyRelation();
	void releaseParent();
	ChappyRelation* getParentRelation();
	int getEnemyIndex(int&);
	void addParentEnemy(KumaChappy::Obj*);

	// _00 		= VTBL
	// _00-_2B8	= EnemyBase
	FSM* mFsm;                          // _2BC
	WalkSmokeEffect::Mgr mWalkSmokeMgr; // _2C0
	f32 mUnusedValue;                   // _2C8
	StateID mNextState;                 // _2CC
	MouthSlots mMouthSlots;             // _2D0
	Vector3f mTargetParentPosition;     // _2D8
	ChappyRelation* mParentRelation;    // _2E4
	                                    // _2E8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_KumaKochappy;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mPoisonDamage(this, 'fp01', "白ピクミン", 300.0f, 0.0f, 10000.0f) // 'white pikmin'
		{
		}

		Parm<f32> mPoisonDamage; // _804, fp01
	};

	Parms() { }

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms; // _7F8
};

// these aren't defined in an enemyanimmgr.txt, but assume it uses the same as kochappy
enum AnimID {
	KUMAKOCHAPPYANIM_Attack = 0,
	KUMAKOCHAPPYANIM_Dead   = 1,
	KUMAKOCHAPPYANIM_Flick  = 2,
	KUMAKOCHAPPYANIM_Move   = 3, // 'move1'
	KUMAKOCHAPPYANIM_Press  = 4, // 'type1'
	KUMAKOCHAPPYANIM_Carry  = 5, // 'type5'
	KUMAKOCHAPPYANIM_Wait   = 6, // 'wait1'
	KUMAKOCHAPPYANIM_Turn   = 7, // 'waitact1'
	KUMAKOCHAPPYANIM_Eat    = 8, // 'waitact2'
	KUMAKOCHAPPYANIM_AnimCount,  // 9
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                   // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);               // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator mAnimator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(int stateID, char* name)
	    : EnemyFSMState(stateID)
	{
		mName = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	inline StateAttack()
	    : State(KUMAKOCHAPPY_Attack, "attack")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	inline StateDead()
	    : State(KUMAKOCHAPPY_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	inline StateFlick()
	    : State(KUMAKOCHAPPY_Flick, "flick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StatePress : public State {
	inline StatePress()
	    : State(KUMAKOCHAPPY_Press, "press")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	inline StateWait()
	    : State(KUMAKOCHAPPY_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalk : public State {
	inline StateWalk()
	    : State(KUMAKOCHAPPY_Walk, "walk")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalkPath : public State {
	inline StateWalkPath()
	    : State(KUMAKOCHAPPY_WalkPath, "walkpath")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace KumaKochappy
} // namespace Game

#endif
