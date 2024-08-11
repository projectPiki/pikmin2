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
#include "efx/TCphebi.h"
#include "Collinfo.h"

/**
 * --Header for Pileated Snagret (SnakeWhole)--
 * Note: Separate header for Burrowing Snagret (SnakeCrow)
 */

namespace Game {
struct SnakeWholeSphereShadowNode : public JointShadowNode {
	inline SnakeWholeSphereShadowNode()
	    : JointShadowNode(2)
	{
	}

	virtual ~SnakeWholeSphereShadowNode() { } // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

struct SnakeWholeTubeShadowNode : public JointShadowNode {
	inline SnakeWholeTubeShadowNode()
	    : JointShadowNode(2)
	{
	}

	virtual ~SnakeWholeTubeShadowNode() { } // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

namespace SnakeWhole {
struct SnakeWholeShadowMgr;
struct FSM;

enum StateID {
	SNAKEWHOLE_NULL      = -1,
	SNAKEWHOLE_Dead      = 0,
	SNAKEWHOLE_Stay      = 1,
	SNAKEWHOLE_Appear1   = 2,
	SNAKEWHOLE_Appear2   = 3,
	SNAKEWHOLE_Disappear = 4,
	SNAKEWHOLE_Wait      = 5,
	SNAKEWHOLE_Walk      = 6,
	SNAKEWHOLE_Home      = 7,
	SNAKEWHOLE_Attack    = 8,
	SNAKEWHOLE_Eat       = 9,
	SNAKEWHOLE_Struggle  = 10,
	SNAKEWHOLE_Count,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                            // _30
	virtual void doDirectDraw(Graphics& gfx);                                  // _50
	virtual void inWaterCallback(WaterBox* wb) { }                             // _84 (weak)
	virtual void outWaterCallback() { }                                        // _88 (weak)
	virtual bool isUnderground() { return mIsUnderground; }                    // _D0 (weak)
	virtual void getShadowParam(ShadowParam& settings);                        // _134
	virtual ~Obj() { }                                                         // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);             // _1C4
	virtual void doUpdate();                                                   // _1CC
	virtual void doUpdateCommon();                                             // _1D0
	virtual void doAnimationUpdateAnimator();                                  // _1D8
	virtual void doAnimationCullingOff();                                      // _1DC
	virtual void doDebugDraw(Graphics& gfx);                                   // _1EC
	virtual Vector3f* getFitEffectPos();                                       // _208
	virtual void setParameters();                                              // _228
	virtual void initMouthSlots();                                             // _22C
	virtual void createEfxHamon();                                             // _250
	virtual void getThrowupItemPosition(Vector3f* itemPos);                    // _268
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual void doStartStoneState();                                          // _2A4
	virtual void doFinishStoneState();                                         // _2A8
	virtual void startCarcassMotion();                                         // _2C4
	virtual void doStartMovie();                                               // _2F0
	virtual void doEndMovie();                                                 // _2F4
	virtual void setFSM(FSM* fsm);                                             // _2F8
	virtual f32 getDamageCoeStoneState() { return 0.25f; }                     // _2AC (weak)
	virtual MouthSlots* getMouthSlots() { return &mMouthSlots; }               // _25C (weak)
	virtual void throwupItemInDeathProcedure() { }                             // _270 (weak)
	virtual f32 getDownSmokeScale() { return 0.9f; }                           // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                         // _258 (weak)
	{
		return EnemyTypeID::EnemyID_SnakeWhole;
	}
	//////////////// VTABLE END

	bool isOutTerritory();
	bool isInHomeRange();
	void setJumpMove(Vector3f&);
	void updateFace();
	void updateConstraint();
	void appearNearByTarget(Creature* target);
	void setAttackPosition();
	Piki* getAttackPiki(int animIdx);
	Navi* getAttackNavi(int animIdx);
	Creature* getSearchedTarget();
	CollPart* getSwallowSlot();
	bool isSwallowPikmin();
	int getStickHeadPikmin();
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
	void createAppearEffect(int appearIdx);
	void createDeadStartEffect();
	void createDeadFinishEffect();
	void createWalkSmokeEffect(f32);
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                       // _2BC
	bool mIsUnderground;             // _2C0
	bool mIsJumping;                 // _2C1
	bool mIsFirstAttackBGM;          // _2C2, controls whether first or repeated appearance fanfare plays
	bool mIsAppearBGMEnabled;        // _2C3, play appear BGM on next getup
	f32 mStateTimer;                 // _2C4
	f32 mFaceDirOffset;              // _2C8, adjusts face dir while jumping
	StateID mNextState;              // _2CC
	MouthSlots mMouthSlots;          // _2D0
	Vector3f mFitEffectPos;          // _2D8
	int mAttackAnimIdx;              // _2E4, 0=near, 1=normal, 2=far, 3=right, 4=left
	Vector3f mAttackPositions[5];    // _2E8, indexed by mAttackAnimIdx
	SnakeJointMgr* mSnakeJointMgr;   // _324
	SnakeWholeShadowMgr* mShadowMgr; // _328
	efx::TCphebiDead* mEfxDead;      // _32C
	                                 // _330 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual void loadModelData();                      // _C8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_SnakeWhole;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x21240030);
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mFastAppearChance(this, 'fp01', "通常出現率", 0.8f, 0.0f, 1.0f)   // 'normal appearance rate'
		    , mWaitTime(this, 'fp11', "潜る迄の時間", 2.0f, 0.0f, 10.0f)        // 'time to dive'
		    , mUndergroundTime(this, 'fp12', "地中での時間", 1.0f, 0.0f, 10.0f) // 'time in the ground'
		    , mPoisonDamage(this, 'fp21', "白ピクミン", 300.0f, 0.0f, 10000.0f) // 'white pikmin'
		{
		}

		Parm<f32> mFastAppearChance; // _804, fp01
		Parm<f32> mWaitTime;         // _82C, fp11
		Parm<f32> mUndergroundTime;  // _854, fp12
		Parm<f32> mPoisonDamage;     // _87C, fp21
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
	SNAKEWHOLEANIM_Dead    = 0,
	SNAKEWHOLEANIM_Appear1 = 1,
	SNAKEWHOLEANIM_Appear2 = 2,
	SNAKEWHOLEANIM_Dive    = 3,

	SNAKEWHOLEANIM_AttackOffset = 4,
	SNAKEWHOLEANIM_HitNear      = SNAKEWHOLEANIM_AttackOffset, // 4
	SNAKEWHOLEANIM_Hit          = 5,
	SNAKEWHOLEANIM_HitFar       = 6,
	SNAKEWHOLEANIM_HitRight     = 7, // 'hit_r'
	SNAKEWHOLEANIM_HitLeft      = 8, // 'hit_l'

	SNAKEWHOLEANIM_Wait     = 9,  // 'wait1'
	SNAKEWHOLEANIM_Eat      = 10, // 'waitact1'
	SNAKEWHOLEANIM_Struggle = 11, // 'waitact2'
	SNAKEWHOLEANIM_Jump     = 12, // 'run1'
	SNAKEWHOLEANIM_Carry    = 13, // 'type5'
	SNAKEWHOLEANIM_AnimCount,     // 14
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

struct SnakeWholeShadowMgr {
	SnakeWholeShadowMgr(Obj* obj);

	void init();
	void startJointShadow();
	void finishJointShadow();
	void update();

	Matrixf* mMatrices[9];                       // _00
	Obj* mOwner;                                 // _24
	JointShadowRootNode* mRootNode;              // _28
	SnakeWholeTubeShadowNode* mTubeNodes[9];     // _2C
	SnakeWholeSphereShadowNode* mSphereNodes[9]; // _50
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

struct StateAppear1 : public State {
	inline StateAppear1()
	    : State(SNAKEWHOLE_Appear1, "appear1")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear2 : public State {
	inline StateAppear2()
	    : State(SNAKEWHOLE_Appear2, "appear2")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	inline StateAttack()
	    : State(SNAKEWHOLE_Attack, "attack")
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
	    : State(SNAKEWHOLE_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDisappear : public State {
	inline StateDisappear()
	    : State(SNAKEWHOLE_Disappear, "disappear")
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
	    : State(SNAKEWHOLE_Eat, "eat")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateHome : public State {
	inline StateHome()
	    : State(SNAKEWHOLE_Home, "home")
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
	    : State(SNAKEWHOLE_Stay, "stay")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStruggle : public State {
	inline StateStruggle()
	    : State(SNAKEWHOLE_Struggle, "struggle")
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
	    : State(SNAKEWHOLE_Wait, "wait")
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
	    : State(SNAKEWHOLE_Walk, "walk")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace SnakeWhole
} // namespace Game

#endif
