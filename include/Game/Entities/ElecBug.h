#ifndef _GAME_ENTITIES_ELECBUG_H
#define _GAME_ENTITIES_ELECBUG_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TDnkms.h"

/**
 * --Header for Anode Beetle (ElecBug)--
 */

namespace Game {
namespace ElecBug {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                                             // _30
	virtual void onKill(CreatureKillArg* settings);                                             // _34
	virtual void doDirectDraw(Graphics& gfx);                                                   // _50
	virtual void collisionCallback(CollEvent& event);                                           // _EC
	virtual void getShadowParam(ShadowParam& settings);                                         // _134
	virtual ~Obj() { }                                                                          // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);                              // _1C4
	virtual void doUpdate();                                                                    // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                                    // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_ElecBug; } // _258 (weak)
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);                   // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part);                 // _284
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor);                        // _28C
	virtual void doStartStoneState();                                                           // _2A4
	virtual void doFinishStoneState();                                                          // _2A8
	virtual void startCarcassMotion();                                                          // _2C4
	virtual void doStartWaitingBirthTypeDrop();                                                 // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                                                // _2E4
	virtual f32 getDownSmokeScale() { return 0.55f; }                                           // _2EC (weak)
	virtual void doStartMovie();                                                                // _2F0
	virtual void doEndMovie();                                                                  // _2F4
	virtual void setFSM(FSM* fsm);                                                              // _2F8
	//////////////// VTABLE END

	void setTargetPosition();
	void resetPartnerPtr();
	bool isBecomeChargeState();
	void startChargeState(Obj*);
	bool startChildChargeState(Obj*);
	void createEffect();
	void setupEffect();
	void startChargeEffect();
	void startDischargeEffect(Obj*);
	void finishPartnerAndEffect();
	void effectDrawOn();
	void effectDrawOff();
	void checkInteract(Obj*);

	Obj* getPartner() const { return mPartner; }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                     // _2BC
	f32 mInactiveTimer;            // _2C0, set randomly between 0-10s, at 15s starts sparking
	f32 mStateTimer;               // _2C4
	Vector3f mTargetPosition;      // _2C8
	bool mHasStartedSearch;        // _2D4, toggle to make sure search for partner only happens once per charge state
	Obj* mPartner;                 // _2D8
	efx::TDnkmsEffect* mEffectObj; // _2DC
	                               // _2E0 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_ElecBug;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mFlipTime(this, 'fp01', "ひっくり返り時間", 5.0f, 0.0f, 10.0f) // 'flip time'
		    , mWaitTime(this, 'fp02', "ウェイト時間", 1.5f, 0.0f, 10.0f)     // 'wait time'
		    , mDischargeTime(this, 'fp11', "放電時間", 3.0f, 0.0f, 10.0f)    // 'discharge time'
		{
		}

		Parm<f32> mFlipTime;      // _804, fp01
		Parm<f32> mWaitTime;      // _82C, fp02
		Parm<f32> mDischargeTime; // _854, fp11
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
	ELECBUGANIM_Dead      = 0,
	ELECBUGANIM_Move      = 1,
	ELECBUGANIM_Wait      = 2,
	ELECBUGANIM_Charge    = 3,
	ELECBUGANIM_Discharge = 4,
	ELECBUGANIM_Turn      = 5,
	ELECBUGANIM_Recover   = 6,
	ELECBUGANIM_Carry     = 7,
	ELECBUGANIM_AnimCount, // 8
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

enum StateID {
	ELECBUG_Dead           = 0,
	ELECBUG_Wait           = 1,
	ELECBUG_Turn           = 2,
	ELECBUG_Move           = 3,
	ELECBUG_Charge         = 4,
	ELECBUG_Discharge      = 5,
	ELECBUG_ChildCharge    = 6,
	ELECBUG_ChildDischarge = 7,
	ELECBUG_Reverse        = 8,
	ELECBUG_Return         = 9,
	ELECBUG_Count,
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(int stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		mName = name;
	}
	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateCharge : public State {
	inline StateCharge()
	    : State(ELECBUG_Charge, "charge")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateChildCharge : public State {
	inline StateChildCharge()
	    : State(ELECBUG_ChildCharge, "childcharge")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateChildDischarge : public State {
	inline StateChildDischarge()
	    : State(ELECBUG_ChildDischarge, "childdischarge")
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
	    : State(ELECBUG_Dead, "dead")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDischarge : public State {
	inline StateDischarge()
	    : State(ELECBUG_Discharge, "discharge")
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
	    : State(ELECBUG_Move, "move")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateReturn : public State {
	inline StateReturn()
	    : State(ELECBUG_Return, "return")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateReverse : public State {
	inline StateReverse()
	    : State(ELECBUG_Reverse, "reverse")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurn : public State {
	inline StateTurn()
	    : State(ELECBUG_Turn, "turn")
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
	    : State(ELECBUG_Wait, "wait")
	{
	}
	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace ElecBug
} // namespace Game

#endif
