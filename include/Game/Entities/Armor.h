#ifndef _GAME_ENTITIES_ARMOR_H
#define _GAME_ENTITIES_ARMOR_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"

namespace Game {
namespace Armor {
/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct State : public EnemyFSMState { };

struct StateAppear : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateAttack1 : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateAttack2 : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateDead : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateDive : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateEat : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateFail : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateGoHome : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateMove : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateMoveCentre : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateMoveSide : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateMoveTop : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateStay : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08
};
/////////////////////////////////////////////////////////////////

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                     // _00
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _04
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _08
	virtual SysShape::Animator& getAnimator(int);                     // _0C

	SysShape::Animator m_animator; // _10
};

struct Parms : public EnemyParmsBase {
	virtual void read(Stream&); // _08
};

struct Obj : public EnemyBase {
	Obj();

	virtual void onInit(CreatureInitArg*);     // _30
	virtual void doDirectDraw(Graphics&);      // _50
	virtual void getShadowParam(ShadowParam&); // _134

	virtual ~Obj();                                            // _1BC
	virtual void setInitialSetting(EnemyInitialParamBase*);    // _1C4
	virtual void doUpdate();                                   // _1CC
	virtual void doDebugDraw(Graphics&);                       // _1EC
	virtual void initMouthSlots();                             // _22C
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();        // _258
	virtual MouthSlots* getMouthSlots();                       // _25C
	virtual bool damageCallBack(Creature*, float, CollPart*);  // _278
	virtual bool hipdropCallBack(Creature*, float, CollPart*); // _284
	virtual void doStartStoneState();                          // _2A4
	virtual void doFinishStoneState();                         // _2A8
	virtual void startCarcassMotion();                         // _2C4
	virtual float getDownSmokeScale();                         // _2EC
	virtual void doStartMovie();                               // _2F0
	virtual void doEndMovie();                                 // _2F4
	virtual void setFSM(FSM*);                                 // _2F8

	void createDownEffect();
	void lifeIncrement();
	void attackPikmin();

	void getSlotPikiNum();
	void killSlotPiki();

	void resetBridgeSearch();
	void setBridgeSearch();
	void setNearestBridge();
	void setCullingCheck();
	void checkBreakOrMove();
	bool isBreakBridge();
	void moveBridgeSide();
	void moveBridgeCentre();
	void moveBridgeTop();
	void breakTargetBridge();

	void createEffect();
	void setupEffect();
	void createAttackEffect();
	void createAppearEffect();
	void createDisAppearEffect();
	void createBridgeEffect();
	void effectDrawOn();
	void effectDrawOff();
};

struct Mgr : public EnemyMgrBase {
	virtual ~Mgr();                                     // _58
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC

	// _00 VTBL
};
} // namespace Armor
} // namespace Game

#endif
