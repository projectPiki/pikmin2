#ifndef _GAME_ENTITIES_TADPOLE_H
#define _GAME_ENTITIES_TADPOLE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Wogpole (Tadpole)--
 */

namespace Game {
namespace Tadpole {
struct FSM;

enum StateID {
	TADPOLE_NULL   = -1,
	TADPOLE_Dead   = 0,
	TADPOLE_Wait   = 1,
	TADPOLE_Move   = 2,
	TADPOLE_Amaze  = 3,
	TADPOLE_Escape = 4,
	TADPOLE_Leap   = 5,
	TADPOLE_StateCount,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                // _30
	virtual void doDirectDraw(Graphics& gfx);                      // _50
	virtual void inWaterCallback(WaterBox* wb) { }                 // _84 (weak)
	virtual void outWaterCallback() { }                            // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);            // _134
	virtual ~Obj() { }                                             // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doUpdate();                                       // _1CC
	virtual void doDebugDraw(Graphics& gfx);                       // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()             // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Tadpole;
	}
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part); // _284
	virtual void startCarcassMotion();                                          // _2C4
	virtual void setFSM(FSM* fsm);                                              // _2F8
	//////////////// VTABLE END

	void setRandTarget(bool);
	Vector3f getTargetPosition(Creature*);
	void createLeapEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                // _2BC
	bool mLeapDirection;      // _2C0, unknown
	f32 mStateTimer;          // _2C4, timer?
	StateID mNextState;       // _2C8
	Vector3f mTargetPosition; // _2CC
	                          // _2D8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Tadpole;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, likely an array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mPitterPatterMoveSpeed(this, 'fp01', "ピチピチ移動速度", 20.0f, 0.0f,
		                             1000.0f) // 'pichipichi movement speed'
		{
		}

		Parm<f32> mPitterPatterMoveSpeed; // _804, fp01
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

enum AnimID {
	TADPOLEANIM_Dead  = 0,
	TADPOLEANIM_Wait  = 1, // 'wait1'
	TADPOLEANIM_Move  = 2, // 'move1'
	TADPOLEANIM_Amaze = 3, // 'waitact1'
	TADPOLEANIM_Piti  = 4, // 'piti1'
	TADPOLEANIM_Carry = 5, // 'type5'
	TADPOLEANIM_AnimCount, // 6
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                // _14

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

struct StateAmaze : public State {
	inline StateAmaze()
	    : State(TADPOLE_Amaze, "amaze")
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
	    : State(TADPOLE_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateEscape : public State {
	inline StateEscape()
	    : State(TADPOLE_Escape, "escape")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLeap : public State {
	inline StateLeap()
	    : State(TADPOLE_Leap, "leap")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMove : public State {
	inline StateMove()
	    : State(TADPOLE_Move, "move")
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
	    : State(TADPOLE_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Tadpole
} // namespace Game

#endif
