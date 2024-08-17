#ifndef _GAME_ENTITIES_ARMOR_H
#define _GAME_ENTITIES_ARMOR_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Cloaking Burrownit (Armor)--
 */

namespace efx {
struct TYoroiAttack;
} // namespace efx

namespace Game {
namespace ItemBridge {
struct Item;
}

namespace Armor {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                             // _30
	virtual void doDirectDraw(Graphics& gfx);                                   // _50
	virtual void getShadowParam(ShadowParam& settings);                         // _134
	virtual ~Obj() { }                                                          // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);                     // _1C4
	virtual void doUpdate();                                                    // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                    // _1EC
	virtual void initMouthSlots();                                              // _22C
	virtual MouthSlots* getMouthSlots() { return &mMouthSlots; }                // _25C (weak)
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part);  // _278
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part); // _284
	virtual void doStartStoneState();                                           // _2A4
	virtual void doFinishStoneState();                                          // _2A8
	virtual void startCarcassMotion();                                          // _2C4
	virtual void doStartMovie();                                                // _2F0
	virtual void doEndMovie();                                                  // _2F4
	virtual void setFSM(FSM* fsm);                                              // _2F8
	virtual f32 getDownSmokeScale() { return 0.9f; }                            // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                          // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Armor;
	}
	//////////////// VTABLE END

	void lifeIncrement();
	void attackPikmin();
	int getSlotPikiNum();
	void killSlotPiki();
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
	void createEffect();
	void setupEffect();
	void createAttackEffect();
	void createAppearEffect();
	void createDisAppearEffect();
	void createBridgeEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                          // _2BC
	bool mNeedsBridgeSearch;            // _2C0
	int mNextState;                     // _2C4
	f32 mAttackLoopTime;                // _2C8
	MouthSlots mMouthSlots;             // _2CC
	efx::TYoroiAttack* mEfxYoroiAttack; // _2D4
	ItemBridge::Item* mBridge;          // _2D8
	f32 mBridgePositionOffset;          // _2DC
	f32 mBridgeWidth;                   // _2E0
	                                    // _2E4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Armor;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, likely an array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mPoisonDamage(this, 'fp01', "白ピクミン", 300.0f, 0.0f, 10000.0f)   // 'white pikmin'
		    , mAttackLoopTimer(this, 'fp11', "攻撃ループ時間", 0.0f, 0.0f, 10.0f) // 'attack loop time'
		    , mBridgeDamage(this, 'fp12', "橋食いパワー", 100.0f, 0.0f, 100.0f)   // 'bridge eating power'
		{
		}

		Parm<f32> mPoisonDamage;    // _804, fp01
		Parm<f32> mAttackLoopTimer; // _82C
		Parm<f32> mBridgeDamage;    // _854, fp12
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
	ARMORANIM_Dead       = 0,
	ARMORANIM_Appear     = 1,
	ARMORANIM_Dive       = 2,
	ARMORANIM_Move       = 3,
	ARMORANIM_Attack1    = 4,
	ARMORANIM_Attack2    = 5,
	ARMORANIM_Eat        = 6,
	ARMORANIM_Flick      = 7,
	ARMORANIM_AttackFail = 8,
	ARMORANIM_Carry      = 9,
	ARMORANIM_AnimCount, // 10
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
enum StateID {
	ARMOR_NULL       = -1,
	ARMOR_Dead       = 0,
	ARMOR_Stay       = 1,
	ARMOR_Appear     = 2,
	ARMOR_Dive       = 3,
	ARMOR_Move       = 4,
	ARMOR_MoveSide   = 5,
	ARMOR_MoveCentre = 6,
	ARMOR_MoveTop    = 7,
	ARMOR_GoHome     = 8,
	ARMOR_Attack1    = 9,
	ARMOR_Attack2    = 10,
	ARMOR_Eat        = 11,
	ARMOR_Flick      = 12,
	ARMOR_Fail       = 13,
	ARMOR_StateCount,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(u16 stateID, char* name)
	    : EnemyFSMState(stateID)
	{
		mName = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear : public State {
	inline StateAppear()
	    : State(ARMOR_Appear, "appear")
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
	    : State(ARMOR_Attack1, "attack1")
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
	    : State(ARMOR_Attack2, "attack2")
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
	    : State(ARMOR_Dead, "dead")
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
	    : State(ARMOR_Dive, "dive")
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
	    : State(ARMOR_Eat, "eat")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFail : public State {
	inline StateFail()
	    : State(ARMOR_Fail, "fail")
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
	    : State(ARMOR_Flick, "flick")
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
	    : State(ARMOR_GoHome, "gohome")
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
	    : State(ARMOR_Move, "move")
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
	    : State(ARMOR_MoveCentre, "movecentre")
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
	    : State(ARMOR_MoveSide, "moveside")
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
	    : State(ARMOR_MoveTop, "movetop")
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
	    : State(ARMOR_Stay, "stay")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Armor
} // namespace Game

#endif
