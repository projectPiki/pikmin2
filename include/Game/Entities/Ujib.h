#ifndef _GAME_ENTITIES_UJIB_H
#define _GAME_ENTITIES_UJIB_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

#define GET_APPCHECK_VAL(check)      ((u8)check)
#define GET_APPCHECK_MAX(check)      (check >> 8)
#define SET_APPCHECK_MAX(check, val) (check = (val) << 8)

/**
 * --Header for Male Sheargrub (Ujib)--
 */

namespace Game {
namespace ItemBridge {
struct Item;
} // namespace ItemBridge

namespace Ujib {
struct FSM;

enum StateID {
	UJIB_NULL       = -1,
	UJIB_Dead       = 0,
	UJIB_Press      = 1,
	UJIB_Stay       = 2,
	UJIB_Appear     = 3,
	UJIB_Dive       = 4,
	UJIB_Move       = 5,
	UJIB_MoveSide   = 6,
	UJIB_MoveCentre = 7,
	UJIB_MoveTop    = 8,
	UJIB_GoHome     = 9,
	UJIB_Attack1    = 10,
	UJIB_Attack2    = 11,
	UJIB_Eat        = 12,
	UJIB_StateCount,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                                          // _30
	virtual void doDirectDraw(Graphics& gfx);                                                // _50
	virtual void getShadowParam(ShadowParam& settings);                                      // _134
	virtual ~Obj() { }                                                                       // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);                           // _1C4
	virtual void doUpdate();                                                                 // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                                 // _1EC
	virtual void initMouthSlots();                                                           // _22C
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);                // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part);              // _284
	virtual void startCarcassMotion();                                                       // _2C4
	virtual void setFSM(FSM* fsm);                                                           // _2F8
	virtual bool isUnderground() { return mIsUnderground; }                                  // _D0 (weak)
	virtual MouthSlots* getMouthSlots() { return &mMouthSlots; }                             // _25C (weak)
	virtual f32 getDownSmokeScale() { return 0.35f; }                                        // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_UjiB; } // _258 (weak)
	//////////////// VTABLE END

	void lifeIncrement();
	void setInWaterDamage();
	void resetAppearCheck();
	bool isAppearCheck();
	void resetBridgeSearch();
	void setBridgeSearch();
	void setNearestBridge();
	void setCullingCheck();
	int checkBreakOrMove();
	bool isBreakBridge();
	bool moveBridgeSide();
	bool moveBridgeCentre();
	bool moveBridgeTop();
	void breakTargetBridge();
	void createAppearEffect();
	void createDisAppearEffect();
	void createBridgeEffect();
	void createEatEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                 // _2BC
	u8 mCanSearchBridge;       // _2C0
	bool mIsUnderground;       // _2C1
	u16 mAppearCheck;          // _2C2
	StateID mNextState;        // _2C4
	MouthSlots mMouthSlots;    // _2C8
	ItemBridge::Item* mBridge; // _2D0
	f32 mBridgeGoalRandOffsX;  // _2D4
	f32 mBridgeTargetMaxWidth; // _2D8
	                           // _2DC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_UjiB;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, likely an array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mPoisonDamage(this, 'fp01', "白ピクミン", 300.0f, 0.0f, 10000.0f) // 'white pikmin'
		    , mBridgeDamage(this, 'fp02', "橋食いパワー", 50.0f, 0.0f, 100.0f)  // 'bridge eating power'
		{
		}

		Parm<f32> mPoisonDamage; // _804, fp01
		Parm<f32> mBridgeDamage; // _82C, fp02
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
	UJIBANIM_Dead      = 0,
	UJIBANIM_PressDead = 1, // 'dead_p'
	UJIBANIM_Appear    = 2,
	UJIBANIM_Dive      = 3,
	UJIBANIM_Move      = 4,
	UJIBANIM_Attack1   = 5,
	UJIBANIM_Attack2   = 6,
	UJIBANIM_Eat       = 7,
	UJIBANIM_Carry     = 8,
	UJIBANIM_AnimCount, // 7
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

struct StateAppear : public State {
	inline StateAppear()
	    : State(UJIB_Appear, "appear")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack1 : public State {
	inline StateAttack1()
	    : State(UJIB_Attack1, "attack1")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack2 : public State {
	inline StateAttack2()
	    : State(UJIB_Attack2, "attack2")
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
	    : State(UJIB_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDive : public State {
	inline StateDive()
	    : State(UJIB_Dive, "dive")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateEat : public State {
	inline StateEat()
	    : State(UJIB_Eat, "eat")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGoHome : public State {
	inline StateGoHome()
	    : State(UJIB_GoHome, "gohome")
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
	    : State(UJIB_Move, "move")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMoveCentre : public State {
	inline StateMoveCentre()
	    : State(UJIB_MoveCentre, "movecentre")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMoveSide : public State {
	inline StateMoveSide()
	    : State(UJIB_MoveSide, "moveside")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMoveTop : public State {
	inline StateMoveTop()
	    : State(UJIB_MoveTop, "movetop")
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
	    : State(UJIB_Press, "press")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStay : public State {
	inline StateStay()
	    : State(UJIB_Stay, "stay")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Ujib
} // namespace Game

#endif
