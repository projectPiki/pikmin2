#ifndef _GAME_ENTITIES_BIGFOOT_H
#define _GAME_ENTITIES_BIGFOOT_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"

namespace Game {
namespace BigFoot {
/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct State : public EnemyFSMState { };

struct StateDead : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateLand : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateStay : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateWait : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateWalk : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
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
	virtual void doDirectDraw(Graphics&);       // _50
	virtual void inWaterCallback(WaterBox*);    // _84 (inline)
	virtual void outWaterCallback();            // _88 (inline)
	virtual void collisionCallback(CollEvent&); // _EC
	virtual void getShadowParam(ShadowParam&);  // _134
	virtual bool needShadow();                  // _138

	virtual ~Obj();                                           // _1BC (inline)
	virtual void setInitialSetting(EnemyInitialParamBase*);   // _1C4
	virtual void doUpdate();                                  // _1CC
	virtual void doUpdateCommon();                            // _1D0
	virtual void doAnimationCullingOff();                     // _1DC
	virtual void doDebugDraw(Graphics&);                      // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();       // _258 (inline)
	virtual void getThrowupItemPosition(Vector3<float>*);     // _268
	virtual void getThrowupItemVelocity(Vector3<float>*);     // _26C
	virtual void throwupItemInDeathProcedure();               // _270 (inline)
	virtual bool damageCallBack(Creature*, float, CollPart*); // _278
	virtual void doStartStoneState();                         // _2A4
	virtual void doFinishStoneState();                        // _2A8
	virtual float getDamageCoeStoneState();                   // _2AC (inline)
	virtual void doStartMovie();                              // _2F0
	virtual void doEndMovie();                                // _2F4
	virtual void setFSM(FSM*);                                // _2F8

	Obj();
	void resetFlickWalkTimeMax();
	void setFlickWalkTimeMax();
	void getTargetPosition();
	void createIKSystem();
	void setupIKSystem();
	void setIKParameter();
	void setIKSystemTargetPosition(Vector3<float>&);
	void updateIKSystem();
	void doAnimationIKSystem();
	void finishAnimationIKSystem();
	void startProgramedIK();
	void startIKMotion();
	void finishIKMotion();
	void forceFinishIKMotion();
	void isFinishIKMotion();
	void startBlendMotion();
	void finishBlendMotion();
	void getTraceCentrePosition();
	void isCollisionCheck(CollPart*);
	void createShadowSystem();
	void setupShadowSystem();
	void doAnimationShadowSystem();
	void createMaterialAnimation();
	void startMaterialAnimation();
	void updateMaterialAnimation();
	void setupCollision();
	void createItemAndEnemy();
	void startBossChargeBGM();
	void startBossAttackLoopBGM();
	void finishBossAttackLoopBGM();
	void startStoneStateBossAttackLoopBGM();
	void finishStoneStateBossAttackLoopBGM();
	void updateBossBGM();
	void resetBossAppearBGM();
	void setBossAppearBGM();
	void createEffect();
	void setupEffect();
	void createOnGroundEffect(int, Game::WaterBox*);
	void createOffGroundEffect(int, Game::WaterBox*);
	void startPinchJointEffect();
	void finishPinchJointEffect();
	void startDeadEffect();
	void updatePinchLife();
	void startFurEffect();
	void finishFurEffect();
	void updateDeadFurEffect();
	void effectDrawOn();
	void effectDrawOff();
	void addShadowScale();
};

struct Mgr : public EnemyMgrBase {
	virtual ~Mgr();                                     // _58
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC

	virtual SysShape::Model* createModel(); // _B0
	virtual void loadModelData();           // _C8
	virtual void loadTexData();             // _D0
	virtual void doLoadBmd(void*);          // _D4 (inline)

	Mgr(int, unsigned char);
};
} // namespace BigFoot
} // namespace Game

#endif
