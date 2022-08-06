#ifndef _GAME_ENTITIES_BLACKMAN_H
#define _GAME_ENTITIES_BLACKMAN_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"

namespace Game {
namespace BlackMan {
/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct State : public EnemyFSMState {
};

struct StateBend : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	StateBend(int);
};

struct StateDead : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	StateDead(int);
};

struct StateEscape : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	StateEscape(int);
};

struct StateFall : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	StateFall(int);
};

struct StateFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	StateFlick(int);
};

struct StateFreeze : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	StateFreeze(int);
};

struct StateRecover : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	StateRecover(int);
};

struct StateTired : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	StateTired(int);
};

struct StateWalk : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	StateWalk(int);
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08
};
/////////////////////////////////////////////////////////////////

struct BigFootGroundCallBack : public JointGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                     // _00
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _04
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _08
	virtual SysShape::Animator& getAnimator(int);                     // _0C

	SysShape::Animator m_animator; // _10
};

struct Obj : public EnemyBase {
	virtual void onInit(CreatureInitArg*);      // _30
	virtual void onKill(CreatureKillArg*);      // _34
	virtual void doEntry();                     // _40
	virtual void doSimulation(float);           // _4C
	virtual void doDirectDraw(Graphics&);       // _50
	virtual bool isUnderground();               // _D0
	virtual void collisionCallback(CollEvent&); // _EC
	virtual void getShadowParam(ShadowParam&);  // _134

	virtual ~Obj();                                               // _1BC (weak)
	virtual void birth(Vector3<float>&, float);                   // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*);       // _1C4 (weak)
	virtual void doUpdate();                                      // _1CC
	virtual void doAnimationCullingOff();                         // _1DC
	virtual void doDebugDraw(Graphics&);                          // _1EC
	virtual void changeMaterial();                                // _200
	virtual void setParameters();                                 // _228
	virtual void initWalkSmokeEffect();                           // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();        // _234
	virtual void updateEfxHamon();                                // _24C (weak)
	virtual void createEfxHamon();                                // _250 (weak)
	virtual Game::EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);            // _260
	virtual void throwupItemInDeathProcedure();                   // _270 (weak)
	virtual bool damageCallBack(Creature*, float, CollPart*);     // _278
	virtual bool hipdropCallBack(Creature*, float, CollPart*);    // _284
	virtual bool earthquakeCallBack(Creature*, float);            // _28C
	virtual bool bombCallBack(Creature*, Vector3<float>&, float); // _294 (weak)
	virtual void doStartStoneState();                             // _2A4
	virtual void doFinishStoneState();                            // _2A8
	virtual void setFSM(FSM*);                                    // _2F8 (weak)

	Obj();
	void walkFunc();
	void isReachToGoal(float);
	void findNextRoutePoint();
	void findNextTraceRoutePoint();
	void isEndPathFinder();
	void setPathFinder(bool);
	void releasePathFinder();
	void jointMtxCalc(int);
	void bodyMtxCalc();
	void isTyreFreeze();
	void isTyreDead();
	void isFallEnd();
	void moveRestart();
	void escape();
	void setTimer(float);
	void getTimer();
	void collisionStOn();
	void collisionStOff();
	void flick();
	void recover();
	void recoverFlick();
	void tyreFlick();
	void deadEffect();
	void deadTraceEffect();
	void tyreUpEffect();
	void tyreDownEffect();
	void bendEffect();
	void createTraceEffect();
	void fadeTraceEffect();
	void createFlickEffect();
	void fadeFlickEffect();
	void isFinalFloor();
	void appearFanfare();
};

struct Mgr : public EnemyMgrBase {
	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int);                   // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadModelData();                       // _C8
	virtual void loadTexData();                         // _D0
	virtual void doLoadBmd(void*);                      // _D4

	Mgr(int, unsigned char);
};
} // namespace BlackMan
} // namespace Game

#endif
