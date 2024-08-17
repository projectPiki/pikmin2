#ifndef _GAME_ENTITIES_JIGUMO_H
#define _GAME_ENTITIES_JIGUMO_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Piki.h"
#include "efx/TJgm.h"
#include "efx/TImo.h"
#include "Condition.h"
#include "Collinfo.h"
#include "Quat.h"

/**
 * --Header for Hermit Crawmad (Jigumo)--
 */

namespace Game {
namespace Nest {
struct Obj;
} // namespace Nest

namespace Jigumo {

#define JIGUMO_MOUTH_JOINT (0)

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

enum StateID {
	JIGUMO_NULL    = -1,
	JIGUMO_Wait    = 0,
	JIGUMO_Appear  = 1,
	JIGUMO_Hide    = 2,
	JIGUMO_Dead    = 3,
	JIGUMO_Attack  = 4,
	JIGUMO_Miss    = 5,
	JIGUMO_Return  = 6,
	JIGUMO_Carry   = 7,
	JIGUMO_Flick   = 8,
	JIGUMO_Eat     = 9,
	JIGUMO_Search  = 10,
	JIGUMO_SAttack = 11,
	JIGUMO_SMiss   = 12,
	JIGUMO_StateCount,
};

struct ConditionHeightCheckPiki : public Condition<Piki> {
	inline ConditionHeightCheckPiki(EnemyBase* enemy)
	    : mCreature(enemy)
	{
		mMinHeight = enemy->getPosition().y - 25.0f;
		mMaxHeight = enemy->getPosition().y + 10.0f;
	}

	virtual bool satisfy(Piki* piki) // _08 (weak)
	{
		if (!piki->isStickTo()) {
			bool check       = false;
			Creature* jigumo = mCreature;

			if (piki->isPikmin() && piki->mSticker != jigumo && !piki->isStickToMouth()) {
				check = true;
			}

			if (check) {
				Vector3f pikiPos = piki->getPosition();
				if (pikiPos.y > mMaxHeight) {
					return false;
				}

				if (pikiPos.y < mMinHeight) {
					return false;
				}

				return true;
			}
		}
		return false;
	}

	// _00 VTBL
	EnemyBase* mCreature; // _04
	f32 mMinHeight;       // _08
	f32 mMaxHeight;       // _0C
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mCarrySpeed(this, 'fp01', "運搬速度", 100.0f, 0.0f, 300.0f)      // 'transport speed'
		    , mReturnSpeed(this, 'fp02', "戻り速度", 100.0f, 0.0f, 300.0f)     // 'return speed'
		    , mMinScale(this, 'fp03', "スケール最小", 1.0f, 0.0f, 3.0f)        // 'scale minimum'
		    , mMaxScale(this, 'fp04', "スケール最大", 1.2f, 0.0f, 3.0f)        // 'scale maximum'
		    , mPoisonDamage(this, 'fp05', "白ピクミン", 300.0f, 0.0f, 1000.0f) // 'white pikmin'
		    , mHidingTime(this, 'ip01', "隠れている時間", 30, 0, 120)          // 'hiding time'
		{
		}

		Parm<f32> mCarrySpeed;   // _804, fp01
		Parm<f32> mReturnSpeed;  // _82C, fp02
		Parm<f32> mMinScale;     // _854, fp03
		Parm<f32> mMaxScale;     // _87C, fp04
		Parm<f32> mPoisonDamage; // _8A4, fp05
		Parm<int> mHidingTime;   // _8CC, ip01
	};

	Parms()
	{
		mDoFullScaleCalc       = true;
		mIsWalkPauseActive     = true;
		mIsStuckPikiDragActive = true;
		mIsGradualTurnActive   = true;
		_8FC                   = 0;
		_8FD                   = 1;
		mIsPressKill           = false;
		mFaceNormalMin         = 0.75f;
		mTurnWeight            = 20.0f;
		mTurnModifier          = 0.05f;
		mTiltDrag              = 30.0f;
		mClimbingTime          = 8;
		mMaxPauseTime          = 35.0f;
		mPauseSpeedModifier    = 0.15f;
		_91C                   = 1.0f;
		_920                   = 0.15f;
		_924                   = 13.0f;
		mMouthSlotSizeModifier = 18.0f;
		mMouthMtxScale         = 1.4f;
		mLifeGaugeOffset       = 20.0f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms;    // _7F8
	bool mDoFullScaleCalc;       // _8F8, recalculate base tr matrix with full scale calculation
	bool mIsWalkPauseActive;     // _8F9, do pauses when carrying back a piki
	bool mIsStuckPikiDragActive; // _8FA, slow down carry speed when pikis are stuck on
	bool mIsGradualTurnActive;   // _8FB, whether to turn gradually after attacking or just flip direction
	u8 _8FC;                     // _8FC, unknown
	u8 _8FD;                     // _8FD, unknown
	bool mIsPressKill;           // _8FE, kills if hit from above with a piki, like a kochappy
	f32 mFaceNormalMin;          // _900
	f32 mTurnWeight;             // _904
	f32 mTurnModifier;           // _908
	f32 mTiltDrag;               // _90C, modify XZ speed if not perfectly horizontal (going up or down ledges)
	u8 mClimbingTime;            // _910
	f32 mMaxPauseTime;           // _914, max time to pause (in frames) when carrying back piki
	f32 mPauseSpeedModifier;     // _918, alters walk speed when 'pausing' while carrying piki
	f32 _91C;                    // _91C
	f32 _920;                    // _920
	f32 _924;                    // _924
	f32 mMouthSlotSizeModifier;  // _928
	f32 mMouthMtxScale;          // _92C
	f32 mLifeGaugeOffset;        // _930
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void onKill(CreatureKillArg* settings);         // _34
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void inWaterCallback(WaterBox* wb);             // _84
	virtual void outWaterCallback();                        // _88
	virtual bool isLivingThing();                           // _D4
	virtual void collisionCallback(CollEvent& event);       // _EC
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual bool needShadow();                              // _138
	virtual Vector3f getGoalPos() { return mGoalPosition; } // _198 (weak)
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void birth(Vector3f&, f32);                     // _1C0
	virtual void doUpdate();                                // _1CC
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doDebugDraw(Graphics& gfx);                // _1EC
	virtual void doSimulationGround(f32);                   // _1F4
	virtual Vector3f getOffsetForMapCollision();            // _224
	virtual void setParameters();                           // _228
	virtual void initMouthSlots();                          // _22C
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()      // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Jigumo;
	}
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);                         // _260
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);  // _27C
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor);       // _28C
	virtual void doStartStoneState();                                          // _2A4
	virtual void doFinishStoneState();                                         // _2A8
	virtual void startCarcassMotion();                                         // _2C4
	virtual void doStartMovie();                                               // _2F0
	virtual void doEndMovie();                                                 // _2F4
	virtual void setFSM(FSM* fsm)                                              // _2F8 (weak)
	{
		mFsm = fsm;
		mFsm->init(this);
		mCurrentLifecycleState = nullptr;
	}
	virtual void setInitialSetting(EnemyInitialParamBase* params) { }                        // _1C4 (weak)
	virtual f32 getCellRadius() { return mScaleModifier * C_PARMS->mGeneral.mCellRadius(); } // _58 (weak)
	virtual f32 getBodyRadius() { return mBodyRadius; }                                      // _54 (weak)
	virtual bool eatWhitePikminCallBack(Creature* source, f32 damage)                        // _298 (weak)
	{
		return EnemyBase::eatWhitePikminCallBack(source, C_PROPERPARMS.mPoisonDamage());
	}
	virtual f32 getDownSmokeScale() { return 0.65f; }            // _2EC (weak)
	virtual MouthSlots* getMouthSlots() { return &mMouthSlots; } // _25C (weak)
	virtual void createEfxHamon()                                // _250 (weak)
	{
		if (!isStopMotion()) {
			EnemyBase::createEfxHamon();
		}
	}
	//////////////// VTABLE END

	f32 getGoalDist();
	void walkFunc();
	void calcBaseTrMatrix();
	void revisionAnimPos(f32);
	f32 getWalkSpeed();
	void velocityControl();
	FakePiki* getNearestPikiOrNavi(f32, f32);
	void effectStart();
	void effectStop();
	void boundEffect();
	void eatWaterEffect();
	void killNest();
	void mouthScaleMtxCalc();

	// UNUSED
	void appearEffectStart();
	void appearEffectStop();
	bool isUnitePos();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Vector3f mHideAnimPosition;        // _2BC, moves crawmad from position to home position while eating or hiding
	Vector3f mGoalPosition;            // _2C8
	StateID mNextState;                // _2D4
	MouthSlots mMouthSlots;            // _2D8
	SysShape::Joint* mBodyJoint;       // _2E0
	Nest::Obj* mHouse;                 // _2E4
	bool mIsReversing;                 // _2E8, has piki to eat (or is hiding after getting bored, technically "reversing")
	bool mDoScaleDownMouth;            // _2E9, just before swallowing piki, reduce mouth matrix size to 1%
	f32 mNextFaceDir;                  // _2EC, flips face direction when hiding/appearing and when missing an attack
	f32 mBodyRadius;                   // _2F0, scales with crawmad size, changes with state
	f32 mClimbingAccel;                // _2F4
	Vector3f mCurrentFaceNormal;       // _2F8, used for the crawmad's crawling, when up a slope it rotates up/down
	Vector3f mWantedFaceNormal;        // _304
	Quat mCurrRotation;                // _310
	Quat mDestRotation;                // _320
	f32 mSlerpTime;                    // _330, weighting parameter used by slerp calc when adjusting base Tr matrix
	int mClimbingTimer;                // _334
	f32 mPauseTimer;                   // _338, timer for pausing when carrying back piki
	f32 mPauseTriggerTime;             // _33C, time to pause when carrying back piki (random between 0 and 35 frames)
	bool mDoPauseAnim;                 // _340, alternates pausing and moving when carrying back piki
	f32 mCarryAngleSpeed;              // _344
	u8 _348[0x4];                      // _348, unknown
	int mWalkBounceTimer;              // _34C
	Vector3f mPrevReturnCheckPosition; // _350, stores every 60 frames to help check if we're stuck
	int mReturnTimer;                  // _35C, checks every 60 frames if we're stuck
	u16 mKamuJointIdx;                 // _360
	Vector3f mEffectPosition;          // _364
	efx::TJgmAttack* mEfxAttack;       // _370
	efx::TJgmAttackW* mEfxAttackW;     // _374
	efx::TJgmBack* mEfxBack;           // _378
	efx::TJgmBackW* mEfxBackW;         // _37C
	efx::TImoSmoke* mEfxSmoke;         // _380
	bool mIsOutsideHouse;              // _384, set when attacking, reset when hiding or appearing
	bool mCanBeEarthquaked;            // _385, turned off when close enough to house when returning (w/ or w/o piki)
	FSM* mFsm;                         // _388
	                                   // _38C = PelletView
};

extern Obj* curJ;

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);       // _70
	virtual void doAlloc();                         // _A8
	virtual void loadModelData();                   // _C8
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x00240030);
	}
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Jigumo;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &mObj[index];
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

enum AnimID {
	JIGUMOANIM_NULL     = -1,
	JIGUMOANIM_Appear   = 0,  // 'appear1'
	JIGUMOANIM_Attack   = 1,  // 'attack1'
	JIGUMOANIM_BackRun  = 2,  // 'backrun1', while carrying piki
	JIGUMOANIM_BackWait = 3,  // 'backwait1', while carrying piki
	JIGUMOANIM_Dead     = 4,  // 'dead1'
	JIGUMOANIM_Eat      = 5,  // 'dive1'
	JIGUMOANIM_Flick    = 6,  // 'flick1'
	JIGUMOANIM_Hide     = 7,  // 'hide1', no piki
	JIGUMOANIM_RDive    = 8,  // 'rdive1', after eating
	JIGUMOANIM_RFlick   = 9,  // 'rflick1', while carrying piki
	JIGUMOANIM_RunAway  = 10, // 'runaway1', no piki
	JIGUMOANIM_SAttack  = 11, // 'sattack1'
	JIGUMOANIM_SMiss    = 12, // 'smiss1'
	JIGUMOANIM_Turn     = 13, // 'turn1'
	JIGUMOANIM_Carry    = 14, // 'type5', carcass (not carrying piki)
	JIGUMOANIM_Wait     = 15, // 'wait1'
	JIGUMOANIM_Miss     = 16, // 'to_runaway1'
	JIGUMOANIM_AnimCount,     // 17
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
struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear : public State {
	StateAppear(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mAppearTimer; // _10, unknown
};

struct StateAttack : public State {
	StateAttack(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 mIsAttackActive; // _10
	u8 mDoTurnToTarget; // _11
};

struct StateCarry : public State {
	StateCarry(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateEat : public State {
	StateEat(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	StateFlick(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateHide : public State {
	StateHide(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMiss : public State {
	StateMiss(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 mUnused; // _10
};

struct StateReturn : public State {
	StateReturn(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSAttack : public State {
	StateSAttack(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 mDidCatchTarget; // _10
	u8 mIsAttackActive; // _11
};

struct StateSearch : public State {
	StateSearch(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mAnimIdx; // _10
};

struct StateSMiss : public State {
	StateSMiss(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Jigumo
} // namespace Game

#endif
