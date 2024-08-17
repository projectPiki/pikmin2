#ifndef _GAME_ENTITIES_QUEEN_H
#define _GAME_ENTITIES_QUEEN_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "efx/TQueen.h"
#include "SysShape/Joint.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "Collinfo.h"

/**
 * --Header for Empress Bulblax (Queen)--
 */

namespace Game {
namespace Queen {
struct QueenShadowMgr;
struct FSM;

enum StateID {
	QUEEN_NULL    = -1,
	QUEEN_Dead    = 0,
	QUEEN_Sleep   = 1,
	QUEEN_Wait    = 2,
	QUEEN_Damage  = 3,
	QUEEN_Flick   = 4,
	QUEEN_Rolling = 5,
	QUEEN_Born    = 6,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                            // _30
	virtual void onKill(CreatureKillArg* settings);                            // _34
	virtual void doDirectDraw(Graphics& gfx);                                  // _50
	virtual void inWaterCallback(WaterBox* wb) { }                             // _84
	virtual void outWaterCallback() { }                                        // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);                        // _134
	virtual bool ignoreAtari(Creature* toIgnore);                              // _190
	virtual ~Obj() { }                                                         // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);             // _1C4
	virtual void doUpdate();                                                   // _1CC
	virtual void doUpdateCommon();                                             // _1D0
	virtual void doAnimationCullingOff();                                      // _1DC
	virtual void doDebugDraw(Graphics& gfx);                                   // _1EC
	virtual void setParameters();                                              // _228
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor);       // _28C
	virtual void doStartStoneState();                                          // _2A4
	virtual void doFinishStoneState();                                         // _2A8
	virtual f32 getDamageCoeStoneState() { return 0.25f; }                     // _2AC (weak)
	virtual void startCarcassMotion();                                         // _2C4
	virtual void doStartMovie();                                               // _2F0
	virtual void doEndMovie();                                                 // _2F4
	virtual void setFSM(FSM* fsm);                                             // _2F8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                         // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Queen;
	}
	//////////////// VTABLE END

	void rollingAttack();
	void flickPikmin(f32);
	bool isRollingAttackLeft();
	void createCrashFallRock();
	void createBabyChappy();
	void updateCreateBaby();
	bool isCreateBaby();
	bool isHitCounterUp();
	void resetJointShadow();
	void releaseJointShadow();
	void startBossChargeBGM();
	void startBossAttackLoopBGM();
	void finishBossAttackLoopBGM();
	void startStoneStateBossAttackLoopBGM();
	void finishStoneStateBossAttackLoopBGM();
	void updateBossBGM();
	void resetMidBossAppearBGM();
	void setMidBossAppearBGM();
	void createEffect();
	void setupEffect();
	void createBornEffect();
	void startRollingEffect();
	void finishRollingEffect(bool);
	void forceFinishRollingEffect();
	void startDamageEffect();
	void finishDamageEffect();
	void createFlickEffect();
	void createDeadEffect();
	void createWakeUpEffect();
	void startSleepEffect();
	void finishSleepEffect();
	void effectDrawOn();
	void effectDrawOff();

	int getBabyChappyCount();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                              // _2BC
	bool mCanCreateLarva;                   // _2C0
	bool mIsRoomForLarva;                   // _2C1, have not hit max capacity yet
	bool mIsRolling;                        // _2C2
	bool mDoEasyRoll;                       // _2C3, first roll will avoid active captain (only HoB)
	bool mIsAppearBGM;                      // _2C4, has BGM started
	bool mIsAttackLoopBGM;                  // _2C5, is the attack loop BGM playing
	f32 mWaitTimer;                         // _2C8
	f32 mBirthTimer;                        // _2CC
	f32 mPrevHitNum;                        // _2D0, related to how many times a pikmin attacked it
	StateID mNextState;                     // _2D4
	QueenShadowMgr* mShadowMgr;             // _2D8
	Sys::MatLoopAnimator* mMatLoopAnimator; // _2DC
	efx::TQueenLay* mEfxLay;                // _2E0
	efx::TQueenRollCR* mEfxRollCR;          // _2E4
	efx::TQueenRollCL* mEfxRollCL;          // _2E8
	efx::TQueenRoll* mEfxRoll;              // _2EC
	efx::TQueenCrashR* mEfxCrashR;          // _2F0
	efx::TQueenCrashL* mEfxCrashL;          // _2F4
	efx::TQueenCrashRock* mEfxCrashRock;    // _2F8
	efx::TQueenDamage* mEfxDamage;          // _2FC
	efx::TQueenFlick* mEfxFlick;            // _300
	efx::TQueenDead* mEfxDead;              // _304
	efx::TQueenWakeup* mEfxWakeup;          // _308
	efx::TQueenHanacho* mEfxHanacho;        // _30C
	                                        // _310 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual SysShape::Model* createModel();            // _B0
	virtual void loadModelData();                      // _C8
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Queen;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x01240030);
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Sys::MatTexAnimation* mTexAnimation; // _44
	Obj* mObj;                           // _48, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "QueenParms")
		    , mRollingTime(this, 'fp01', "ローリング時間", 10.0f, 0.0f, 100.0f)   // 'rolling time'
		    , mBirthInterval(this, 'fp02', "出産間隔 ( sec )", 0.0f, 0.0f, 10.0f) // 'birth interval ( sec )'
		    , mHoBHealth(this, 'fp11', "Forest 1 Life", 2500.0f, 0.0f, 10000.0f)  // (Hole of Beasts Life)
		    , mMaxBirths(this, 'ip01', "出産数 ( Max )", 50, 0, 50)               // 'number of births ( Max )'
		    , mMinBirths(this, 'ip02', "出産数 ( Min )", 25, 0, 50)               // 'number of births ( Min )'
		{
		}

		Parm<f32> mRollingTime;   // _804, fp01
		Parm<f32> mBirthInterval; // _82C, fp02
		Parm<f32> mHoBHealth;     // _854, fp11
		Parm<int> mMaxBirths;     // _87C, ip01
		Parm<int> mMinBirths;     // _8A4, ip02
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
	QUEENANIM_Dead     = 0,
	QUEENANIM_Sleep    = 1,
	QUEENANIM_Wait     = 2, // 'wait1'
	QUEENANIM_Damage   = 3,
	QUEENANIM_Flick    = 4,
	QUEENANIM_RollingL = 5,
	QUEENANIM_RollingR = 6,
	QUEENANIM_Born     = 7,
	QUEENANIM_Carry    = 8,
	QUEENANIM_AnimCount, // 9
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

struct QueenShadowNode : public JointShadowNode {
	inline QueenShadowNode()
	    : JointShadowNode(2)
	{
	}

	virtual ~QueenShadowNode() { } // _08 (weak)

	void makeShadowSRT();

	// _00		= VTBL
	// _00-_24	= JointShadowNode
	SysShape::Joint* _24; // _24
	Matrixf _28;          // _28
};

struct QueenShadowMgr {
	QueenShadowMgr(Obj* obj);

	void init();
	void update();

	Obj* mObj;                      // _00
	JointShadowRootNode* mRootNode; // _04
	QueenShadowNode** mShadowNodes; // _08, array of 6 shadow nodes
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct RollingStateArg : public StateArg {
	u32 _00; // _00, unknown size/type
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

struct StateBorn : public State {
	inline StateBorn()
	    : State(QUEEN_Born, "born")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDamage : public State {
	inline StateDamage()
	    : State(QUEEN_Damage, "damage")
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
	    : State(QUEEN_Dead, "dead")
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
	    : State(QUEEN_Flick, "flick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateRolling : public State {
	inline StateRolling()
	    : State(QUEEN_Rolling, "rolling")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSleep : public State {
	inline StateSleep()
	    : State(QUEEN_Sleep, "sleep")
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
	    : State(QUEEN_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Queen
} // namespace Game

#endif
