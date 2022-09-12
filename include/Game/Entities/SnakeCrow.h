#ifndef _GAME_ENTITIES_SNAKECROW_H
#define _GAME_ENTITIES_SNAKECROW_H

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
 * --Header for Burrowing Snagret (SnakeCrow)--
 * Note: Separate header for Pileated Snagret (SnakeWhole)
 */

namespace efx {
struct THebiRot;
struct THebiWait;
struct THebiDead;
} // namespace efx

namespace Game {
struct SnakeCrowSphereShadowNode : public JointShadowNode {
	virtual ~SnakeCrowSphereShadowNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

struct SnakeCrowTubeShadowNode : public JointShadowNode {
	virtual ~SnakeCrowTubeShadowNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

namespace SnakeCrow {
struct SnakeCrowShadowMgr;
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void constructor();                             // _2C
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void onKill(CreatureKillArg*);                  // _34
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
	virtual void getCommonEffectPos(Vector3f&);             // _204
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
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
	//////////////// VTABLE END

	void appearNearByTarget(Creature*);
	void setAttackPosition();
	void getAttackPiki(int);
	void getAttackNavi(int);
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
	void startRotateEffect();
	void finishRotateEffect();
	void startWaitEffect();
	void finishWaitEffect();
	void createDeadStartEffect();
	void createDeadFinishEffect();
	void createDownHeadEffect(f32);
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                 // _2BC
	u8 _2C0;                    // _2C0, unknown
	u8 _2C1;                    // _2C1
	u8 _2C2;                    // _2C2
	f32 _2C4;                   // _2C4, timer?
	u8 _2C8[0x4];               // _2C8, unknown
	MouthSlots m_mouthSlots;    // _2CC
	u8 _2D4[0x4];               // _2D4, unknown
	Vector3f _2D8[5];           // _2D8
	u8 _314[0x8];               // _314, unknown
	efx::THebiRot* m_efxRotate; // _31C
	efx::THebiWait* m_efxWait;  // _320
	efx::THebiDead* m_efxDead;  // _324
	                            // _328 = PelletView
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

		Parm<f32> _804; // _804, type unsure
		Parm<f32> _82C; // _82C, type unsure
		Parm<f32> _854; // _854, type unsure
		Parm<f32> _87C; // _87C, type unsure
		Parm<f32> _8A4; // _8A4, type unsure
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

struct SnakeCrowShadowMgr {
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
/////////////////////////////////////////////////////////////////
} // namespace SnakeCrow
} // namespace Game

#endif
