#ifndef _GAME_ENTITIES_SNAKECROW_H
#define _GAME_ENTITIES_SNAKECROW_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Game/SnakeJointMgr.h"
#include "efx/THebi.h"
#include "SysShape/Joint.h"
#include "Collinfo.h"

/**
 * --Header for Burrowing Snagret (SnakeCrow)--
 * Note: Separate header for Pileated Snagret (SnakeWhole)
 */

namespace Game {
struct SnakeCrowSphereShadowNode : public JointShadowNode {
	inline SnakeCrowSphereShadowNode()
	    : JointShadowNode(2)
	{
	}

	virtual ~SnakeCrowSphereShadowNode() { } // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

struct SnakeCrowTubeShadowNode : public JointShadowNode {
	inline SnakeCrowTubeShadowNode()
	    : JointShadowNode(2)
	{
	}

	virtual ~SnakeCrowTubeShadowNode() { } // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

namespace SnakeCrow {
struct SnakeCrowShadowMgr;
struct FSM;
struct Parms;

enum StateID {
	SNAKECROW_NULL      = -1,
	SNAKECROW_Dead      = 0,
	SNAKECROW_Stay      = 1,
	SNAKECROW_Appear1   = 2,
	SNAKECROW_Appear2   = 3,
	SNAKECROW_Disappear = 4,
	SNAKECROW_Wait      = 5,
	SNAKECROW_Attack    = 6,
	SNAKECROW_Eat       = 7,
	SNAKECROW_Struggle  = 8,
	SNAKECROW_Count, // 9
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void constructor();                                                // _2C
	virtual void onInit(CreatureInitArg* settings);                            // _30
	virtual void onKill(CreatureKillArg* settings);                            // _34
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
	virtual void getCommonEffectPos(Vector3f& fxPos);                          // _204
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
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                         // _258 (weak)
	{
		return EnemyTypeID::EnemyID_SnakeCrow;
	}
	//////////////// VTABLE END

	void appearNearByTarget(Creature*);
	void setAttackPosition();
	Piki* getAttackPiki(int animIdx);
	Navi* getAttackNavi(int animIdx);
	CollPart* getSwallowSlot(); // might be MouthSlot* or something else
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
	void startRotateEffect();
	void finishRotateEffect();
	void startWaitEffect();
	void finishWaitEffect();
	void createDeadStartEffect();
	void createDeadFinishEffect();
	void createDownHeadEffect(f32 scale);
	void effectDrawOn();
	void effectDrawOff();

	inline Parms* getParms() { return C_PARMS; }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                      // _2BC
	bool mIsUnderground;            // _2C0
	bool mIsFirstAttackBGM;         // _2C1, controls whether first or repeated appearance fanfare plays
	bool mIsAppearBGMEnabled;       // _2C2, play appear BGM on next getup
	f32 mStateTimer;                // _2C4
	StateID mNextState;             // _2C8, unused
	MouthSlots mMouthSlots;         // _2CC
	int mAttackAnimIdx;             // _2D4, 0=near, 1=normal, 2=far, 3=right, 4=left
	Vector3f mAttackPositions[5];   // _2D8, indexed by mAttackAnimIdx
	SnakeJointMgr* mSnakeJointMgr;  // _314
	SnakeCrowShadowMgr* mShadowMgr; // _318
	efx::THebiRot* mEfxRotate;      // _31C
	efx::THebiWait* mEfxWait;       // _320
	efx::THebiDead* mEfxDead;       // _324
	                                // _328 = PelletView
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
		return EnemyTypeID::EnemyID_SnakeCrow;
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
		    , mFastAppearChance(this, 'fp01', "通常出現率", 0.8f, 0.0f, 1.0f)    // 'normal appearance rate'
		    , mWaitTime(this, 'fp11', "潜る迄の時間", 2.0f, 0.0f, 10.0f)         // 'time to dive'
		    , mUndergroundTime(this, 'fp12', "地中での時間", 1.0f, 0.0f, 10.0f)  // 'time in the ground'
		    , mPoisonDamage(this, 'fp21', "白ピクミン", 300.0f, 0.0f, 10000.0f)  // 'white pikmin'
		    , mWFGHealth(this, 'fp31', "Forest 2 Life", 7500.0f, 0.0f, 99999.0f) // (White Flower Garden Life)
		{
		}

		Parm<f32> mFastAppearChance; // _804, fp01
		Parm<f32> mWaitTime;         // _82C, fp11
		Parm<f32> mUndergroundTime;  // _854, fp12
		Parm<f32> mPoisonDamage;     // _87C, fp21
		Parm<f32> mWFGHealth;        // _8A4, fp31
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
	SNAKECROWANIM_Dead    = 0,
	SNAKECROWANIM_Appear1 = 1,
	SNAKECROWANIM_Appear2 = 2,
	SNAKECROWANIM_Dive    = 3,

	SNAKECROWANIM_AttackOffset = 4,
	SNAKECROWANIM_HitNear      = SNAKECROWANIM_AttackOffset, // 4
	SNAKECROWANIM_Hit          = 5,
	SNAKECROWANIM_HitFar       = 6,
	SNAKECROWANIM_HitRight     = 7, // 'hit_r'
	SNAKECROWANIM_HitLeft      = 8, // 'hit_l'

	SNAKECROWANIM_Wait     = 9,  // 'wait1'
	SNAKECROWANIM_Eat      = 10, // 'waitact1'
	SNAKECROWANIM_Struggle = 11, // 'waitact2'
	SNAKECROWANIM_Carry    = 12, // 'type5'
	SNAKECROWANIM_AnimCount,     // 13
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

struct SnakeCrowShadowMgr {
	SnakeCrowShadowMgr(Obj* obj);

	void init();
	void startJointShadow();
	void finishJointShadow();
	void update();

	Matrixf* mMatrices[8];                      // _00
	Obj* mOwner;                                // _20
	JointShadowRootNode* mRootNode;             // _24
	SnakeCrowTubeShadowNode* mTubeNodes[8];     // _28
	SnakeCrowSphereShadowNode* mSphereNodes[8]; // _48
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
	    : State(SNAKECROW_Appear1, "appear1")
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
	    : State(SNAKECROW_Appear2, "appear2")
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
	    : State(SNAKECROW_Attack, "attack")
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
	    : State(SNAKECROW_Dead, "dead")
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
	    : State(SNAKECROW_Disappear, "disappear")
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
	    : State(SNAKECROW_Eat, "eat")
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
	    : State(SNAKECROW_Stay, "stay")
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
	    : State(SNAKECROW_Struggle, "struggle")
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
	    : State(SNAKECROW_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace SnakeCrow
} // namespace Game

#endif
