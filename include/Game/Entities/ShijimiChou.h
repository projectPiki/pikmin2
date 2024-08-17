#ifndef _GAME_ENTITIES_SHIJIMICHOU_H
#define _GAME_ENTITIES_SHIJIMICHOU_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/updateMgr.h"
#include "JSystem/J3DU/J3DUMtxCache.h"
#include "Collinfo.h"

/**
 * --Header for Unmarked Spectralids (ShijimiChou)--
 */

namespace PSM {
struct Cluster;
} // namespace PSM

namespace efx {
struct TChouDown;
} // namespace efx

namespace Game {
namespace ShijimiChou {

enum SpectralidType { // spectralid color
	SHIJIMITYPE_Yellow = 0,
	SHIJIMITYPE_Red    = 1,
	SHIJIMITYPE_Purple = 2,
};

enum SpectralidSpawnSource {
	SHIJIMISOURCE_Null          = 0,
	SHIJIMISOURCE_BeadyLongLegs = 1,
	SHIJIMISOURCE_Plants        = 2,
	SHIJIMISOURCE_Enemy         = 3,
};

enum StateID {
	SHIJIMICHOU_Wait  = 0,
	SHIJIMICHOU_Fly   = 1,
	SHIJIMICHOU_Fall  = 2,
	SHIJIMICHOU_Dead  = 3,
	SHIJIMICHOU_Leave = 4,
	SHIJIMICHOU_Rest  = 5,
	SHIJIMICHOU_StateCount,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                            // _30
	virtual void onKill(CreatureKillArg* settings);                            // _34
	virtual void doAnimation();                                                // _3C
	virtual void doEntry();                                                    // _40
	virtual void doSimulation(f32);                                            // _4C
	virtual void doDirectDraw(Graphics& gfx);                                  // _50
	virtual void collisionCallback(CollEvent& event);                          // _EC
	virtual void getShadowParam(ShadowParam& settings);                        // _134
	virtual ~Obj() { }                                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                        // _1C0
	virtual void doUpdate();                                                   // _1CC
	virtual void doAnimationCullingOff();                                      // _1DC
	virtual void doAnimationCullingOn();                                       // _1E0
	virtual void doDebugDraw(Graphics& gfx);                                   // _1EC
	virtual void changeMaterial();                                             // _200
	virtual void setParameters();                                              // _228
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual void doStartStoneState();                                          // _2A4
	virtual void startCarcassMotion();                                         // _2C4
	virtual void wallCallback(const MoveInfo& info);                           // _2E8
	virtual void doStartMovie();                                               // _2F0
	virtual void doEndMovie();                                                 // _2F4
	virtual void setFSM(FSM* fsm)                                              // _2F8 (weak)
	{
		mFsm = fsm;
		mFsm->init(this);
		mCurrentLifecycleState = nullptr;
	}
	virtual void setInitialSetting(EnemyInitialParamBase* params) { } // _1C4 (weak)
	virtual bool ignoreAtari(Creature* toIgnore)                      // _190 (weak)
	{
		if (getStateID() == SHIJIMICHOU_Rest) {
			return false;
		}

		// these brackets are in the wrong spot morimura.
		if ((toIgnore && toIgnore->isTeki()) || toIgnore->isNavi()) {
			return true;
		}

		return false;
	}
	virtual bool pressCallBack(Creature*, f32, CollPart*) { return false; }                         // _27C (weak)
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part) { return false; }    // _284 (weak)
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor) { return false; }           // _28C (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_ShijimiChou; } // _258 (weak)
	//////////////// VTABLE END

	void genItem();
	bool checkFlyStart();
	void fly();
	void restFly();
	void restCheck();
	bool checkRestOn();
	bool checkRestOff();
	void resetRestPos();
	void leave();
	void leaveInit();
	void setNextGoal();
	void setTraceGoal();
	bool isFallEnd();
	void deadEffect();
	void fallBehavior();
	void updateCluster();
	int getFlyType();
	void leaderInit();
	void createAppearEffect();
	void fadeAppearEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	SpectralidType mSpecType;           // _2BC
	SpectralidSpawnSource mSpawnSource; // _2C0
	int mFlyTime;                       // _2C4
	EnemyBase* mSpawningEnemy;          // _2C8
	Vector3f mFallStartPosition;        // _2CC
	FSM* mFsm;                          // _2D8
	UpdateContext mUpdateContext;       // _2DC
	Obj* mGroupLeader;                  // _2E8
	J3DMaterial* mMaterial;             // _2EC
	f32 mPitchRate;                     // _2F0
	f32 mPitchAmp;                      // _2F4
	f32 mYawRate;                       // _2F8
	f32 mTargetFaceDir;                 // _2FC
	f32 mMapMinY;                       // _300, height of surface that spec is flying above
	Vector3f mGoalPosition;             // _304
	Sys::Sphere mRestEnemyCollSphere;   // _310
	bool mIsStuckToPiki;                // _320
	bool mIsFallVertical;               // _321
	f32 mFallDir;                       // _324
	int mGroupCount;                    // _328
	int mFlyType;                       // _32C
	f32 mZukanGoalHeight;               // _330, goal height post-bitter in piklopedia
	efx::TChouDown* mEfxDown;           // _334
	PSM::Cluster* mSoundCluster;        // _338
	                                    // _33C = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAnimation();               // _08
	virtual EnemyBase* birth(EnemyBirthArg&); // _70
	virtual void doAlloc();                   // _A8
	virtual SysShape::Model* createModel();   // _B0
	virtual void loadModelData();             // _C8
	virtual EnemyBase* getEnemy(int index)    // _A4 (weak)
	{
		return &mObj[index];
	}
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_ShijimiChou;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	//////////////// VTABLE END

	void fetch(J3DModel*, f32);
	void createGroup(Obj*, int);
	void createGroupByBigFoot(EnemyBirthArg&, int);
	void createGroupByPlants(EnemyBirthArg&, int);
	void createGroupByEnemy(EnemyBirthArg&, EnemyBase*, int, bool);

	inline J3DModel* getModel()
	{
		Obj* chou = static_cast<Obj*>(getEnemy(0));
		return chou->mModel->mJ3dModel;
	}

	inline J3DAnmTransform* getTransform()
	{
		SysShape::AnimInfo* animInfo = static_cast<SysShape::AnimInfo*>(mAnimMgr->mAnimInfo.mChild)->getInfoByID(2);
		return animInfo->mAnm;
	}

	inline J3DUMtxAnmCacheTable* getCacheTable(J3DModel* model, J3DAnmTransform* transform)
	{
		return new J3DUMtxAnmCacheTable(model, transform);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	UpdateMgr* mUpdateMgr;                               // _44
	Obj* mGroupLeader;                                   // _48
	J3DUMtxCacheRef<J3DUMtxAnmCacheTable>* mMtxCacheRef; // _4C
	Obj* mObj;                                           // _50, array of objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mMaxFlyTime(this, 'fp01', "飛行期間", 300.0f, 0.0f, 1000.0f)                    // 'flight duration'
		    , mMaxFlyTimePlant(this, 'fp08', "プランツからの飛行期間", 100.0f, 0.0f, 1000.0f) // 'flight duration from plants'
		    , mNectarRate(this, 'fp02', "蜜レート", 1.0f, 0.0f, 1.0f)                         // 'honey rate'
		    , mFlightHeight(this, 'fp03', "飛行高さ", 100.0f, 0.0f, 200.0f)                   // 'flight height'
		    , mPitchRate(this, 'fp04', "飛行レート", 0.05f, 0.0f, 1.0f)                       // 'flight rate'
		    , mPitchAmpRate(this, 'fp05', "飛行高低", 1.0f, 0.0f, 10.0f)                      // 'flight altitude'
		    , mRedSpawnChance(this, 'fp06', "赤蝶率", 0.1f, 0.0f, 1.0f)                       // 'red butterfly rate
		    , mPurpleSpawnChance(this, 'fp07', "黒蝶率", 0.1f, 0.0f, 1.0f)                    // 'black butterfly rate'
		{
		}

		Parm<f32> mMaxFlyTime;        // _804, fp01
		Parm<f32> mMaxFlyTimePlant;   // _82C, fp08
		Parm<f32> mNectarRate;        // _854, fp02, drop rate for nectar or sprays
		Parm<f32> mFlightHeight;      // _87C, fp03
		Parm<f32> mPitchRate;         // _8A4, fp04
		Parm<f32> mPitchAmpRate;      // _8CC, fp05
		Parm<f32> mRedSpawnChance;    // _8F4, fp06
		Parm<f32> mPurpleSpawnChance; // _91C, fp07
	};

	Parms()
	{
		mFlyType              = 0;
		mDoUpdateAnimation    = false;
		mDoManualFlight       = false;
		mGroupCount           = SHIJIMICHOU_GROUP_COUNT;
		mCanFall              = true;
		mUseParmFlyType       = false;
		mTraceGoalWeight      = 4.0f;
		mLeaveInitSpeedFactor = 0.8f;
		mRotateFaceDirFactor  = 20.0f;
		mYawRate              = 0.4f;
		mMaxScale             = 1.0f;
		mMinScale             = 1.0f;
		mFallRotateRate       = 0.3f;
		mMaxFallSpeed         = 70.0f;
		mHorizFallScatter     = 5.0f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms;  // _7F8
	u8 mFlyType;               // _948
	bool mDoUpdateAnimation;   // _949
	bool mDoManualFlight;      // _94A, use custom flight code (true) or EnemyFunc::walkToTarget (false)
	u8 mGroupCount;            // _94B
	bool mCanFall;             // _94C, do fall behavior
	bool mUseParmFlyType;      // _94D, ignore obj fly type and use parm type instead
	f32 mTraceGoalWeight;      // _950
	f32 mLeaveInitSpeedFactor; // _954
	f32 mRotateFaceDirFactor;  // _958
	f32 mYawRate;              // _95C
	f32 mMaxScale;             // _960
	f32 mMinScale;             // _964
	f32 mFallRotateRate;       // _968
	f32 mMaxFallSpeed;         // _96C
	f32 mHorizFallScatter;     // _970
};

enum AnimID {
	SHIJIMIANIM_Carry = 0,
	SHIJIMIANIM_Dead  = 1,
	SHIJIMIANIM_Move  = 2,
	SHIJIMIANIM_AnimCount, // 3
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

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFall : public State {
	StateFall(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mFallTimer; // _10
};

struct StateFly : public State {
	StateFly(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mFlyTimer; // _10
};

struct StateLeave : public State {
	StateLeave(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateRest : public State {
	StateRest(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mRestTimer;       // _10
	int mRestWaitCounter; // _14
	int mRestMaxTime;     // _18
	bool mNeedFinishRest; // _1C
	bool mIsInRest;       // _1D
	bool mIsLanded;       // _1E
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mWaitTimer; // _10
};
/////////////////////////////////////////////////////////////////
} // namespace ShijimiChou
} // namespace Game

#endif
