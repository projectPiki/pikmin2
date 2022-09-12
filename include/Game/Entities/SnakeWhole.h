#ifndef _GAME_ENTITIES_SNAKEWHOLE_H
#define _GAME_ENTITIES_SNAKEWHOLE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Game/SnakeJointMgr.h"
#include "SysShape/Joint.h"
#include "Collinfo.h"

/**
 * --Header for Pileated Snagret (SnakeWhole)--
 * Note: Separate header for Burrowing Snagret (SnakeCrow)
 */

namespace efx {
struct TChaseMtx4;
} // namespace efx

namespace Game {
struct SnakeWholeSphereShadowNode : public JointShadowNode {
	virtual ~SnakeWholeSphereShadowNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

struct SnakeWholeTubeShadowNode : public JointShadowNode {
	virtual ~SnakeWholeTubeShadowNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

namespace SnakeWhole {
struct SnakeWholeShadowMgr;
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual void inWaterCallback(WaterBox*);                // _84 (weak)
	virtual void outWaterCallback();                        // _88 (weak)
	virtual bool isUnderground();                           // _D0 (weak)
	virtual void getShadowParam(ShadowParam&);              // _134
	virtual ~Obj();                                         // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doUpdateCommon();                          // _1D0
	virtual void doAnimationUpdateAnimator();               // _1D8
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual Vector3f* getFitEffectPos();                    // _208
	virtual void setParameters();                           // _228
	virtual void initMouthSlots();                          // _22C
	virtual void createEfxHamon();                          // _250
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual MouthSlots* getMouthSlots();                    // _25C (weak)
	virtual void getThrowupItemPosition(Vector3f*);         // _268
	virtual void throwupItemInDeathProcedure();             // _270 (weak)
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual f32 getDamageCoeStoneState();                   // _2AC (weak)
	virtual void startCarcassMotion();                      // _2C4
	virtual f32 getDownSmokeScale();                        // _2EC (weak)
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
	//////////////// VTABLE END

	void isOutTerritory();
	void isInHomeRange();
	void setJumpMove(Vector3f&);
	void updateFace();
	void updateConstraint();
	void appearNearByTarget(Creature*);
	void setAttackPosition();
	void getAttackPiki(int);
	void getAttackNavi(int);
	void getSearchedTarget();
	void getSwallowSlot();
	void isSwallowPikmin();
	void getStickHeadPikmin();
	void createJointCallBack();
	void setupJointCallBack();
	void doAnimationJointCallBack();
	void finishAnimationJointCallBack();
	void startJointCallBack();
	void returnJointCallBack();
	void finishJointCallBack();
	void setupCollision();
	void lifeIncrement();
	void createShadowSystem();
	void setupShadowSystem();
	void doAnimationShadowSystem();
	void startJointShadow();
	void finishJointShadow();
	void deleteJointShadow();
	void startBossAttackBGM();
	void startBossFlickBGM();
	void updateBossBGM();
	void resetBossAppearBGM();
	void setBossAppearBGM();
	void createEffect();
	void setupEffect();
	void createAppearEffect(int);
	void createDeadStartEffect();
	void createDeadFinishEffect();
	void createWalkSmokeEffect(f32);
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                       // _2BC
	bool m_isUnderground;             // _2C0
	u8 _2C1;                          // _2C1
	u8 _2C2;                          // _2C2
	u8 _2C3;                          // _2C3
	f32 _2C4;                         // _2C4
	f32 _2C8;                         // _2C8
	int _2CC;                         // _2CC
	MouthSlots m_mouthSlots;          // _2D0
	Vector3f _2D8;                    // _2D8
	int _2E4;                         // _2E4
	Vector3f _2E8[5];                 // _2E8
	SnakeJointMgr* m_jointMgr;        // _324
	SnakeWholeShadowMgr* m_shadowMgr; // _328
	efx::TChaseMtx4* _32C;            // _32C
	                                  // _330 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	//////////////// VTABLE
	virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual void loadModelData();                       // _C8
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms(); // likely

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp11; // _82C
		Parm<f32> m_fp12; // _854
		Parm<f32> m_fp21; // _87C
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                     // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int);                     // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

struct SnakeWholeShadowMgr {
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear1 : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear2 : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDisappear : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateEat : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateHome : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStay : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStruggle : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalk : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace SnakeWhole
} // namespace Game

#endif
