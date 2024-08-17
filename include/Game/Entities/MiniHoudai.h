#ifndef _GAME_ENTITIES_MINIHOUDAI_H
#define _GAME_ENTITIES_MINIHOUDAI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "efx/TChibi.h"

/**
 * --Header for Gatling Groinks (MiniHoudai)--
 * MiniHoudai 		= Groink Base Class
 * NormMiniHoudai	= Gatling Groink (Roaming)
 * FixMiniHoudai	= Tower Groink (Fixed)
 */

struct J3DJoint;

namespace Game {
struct WayPoint;

namespace MiniHoudai {
enum StateID {
	MINIHOUDAI_NULL     = -1,
	MINIHOUDAI_Dead     = 0,
	MINIHOUDAI_Rebirth  = 1,
	MINIHOUDAI_Lost     = 2,
	MINIHOUDAI_Attack   = 3,
	MINIHOUDAI_Flick    = 4,
	MINIHOUDAI_Turn     = 5,
	MINIHOUDAI_TurnHome = 6,
	MINIHOUDAI_TurnPath = 7,
	MINIHOUDAI_Walk     = 8,
	MINIHOUDAI_WalkHome = 9,
	MINIHOUDAI_WalkPath = 10,
	MINIHOUDAI_StateCount, // 11
};

struct FSM;
struct MiniHoudaiShotGunMgr;

struct Obj : public EnemyBase {
	Obj();

	////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                                                // _30
	virtual void onKill(CreatureKillArg* settings);                                                // _34
	virtual void doDirectDraw(Graphics& gfx);                                                      // _50
	virtual void getShadowParam(ShadowParam& settings);                                            // _134
	virtual ~Obj() { }                                                                             // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);                                 // _1C4
	virtual void doUpdate();                                                                       // _1CC
	virtual void doUpdateCommon();                                                                 // _1D0
	virtual void doUpdateCarcass();                                                                // _1D4
	virtual void doAnimationCullingOff();                                                          // _1DC
	virtual void doDebugDraw(Graphics& gfx);                                                       // _1EC
	virtual void initWalkSmokeEffect();                                                            // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();                                         // _234
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_MiniHoudai; } // _258 (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);                                             // _260
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part);                     // _278
	virtual void doStartStoneState();                                                              // _2A4
	virtual void doFinishStoneState();                                                             // _2A8
	virtual void doStartEarthquakeFitState();                                                      // _2B8
	virtual void doFinishEarthquakeFitState();                                                     // _2BC
	virtual void startCarcassMotion();                                                             // _2C4
	virtual bool doBecomeCarcass();                                                                // _2D0
	virtual void doStartWaitingBirthTypeDrop();                                                    // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                                                   // _2E4
	virtual f32 getDownSmokeScale() { return 0.9f; }                                               // _2EC (weak)
	virtual void doStartMovie();                                                                   // _2F0
	virtual void doEndMovie();                                                                     // _2F4
	virtual void setFSM(FSM* fsm);                                                                 // _2F8
	////////// VTABLE END

	void updateCaution();
	f32 getViewAngle();
	void resetWayPoint();
	void setNearestWayPoint();
	void setLinkWayPoint();
	Creature* getSearchedTarget();
	void updateTargetDistance();
	void updateHomePosition();
	bool isAttackableTarget();
	void createShotGun();
	void setupShotGun();
	void resetShotGunCallBack();
	void setShotGunCallBack();
	void doUpdateShotGun();
	void doUpdateCommonShotGun();
	void startShotGunRotation();
	void finishShotGunRotation();
	bool isShotGunRotation();
	bool isShotGunLockOn();
	bool isFinishShotGun();
	void emitShotGun();
	void setShotGunTargetPosition();
	void forceFinishShotGun();
	void createEffect();
	void setupEffect();
	void createSmokeSmallEffect(bool);
	void createSmokeLargeEffect();
	void createDownEffect(f32);
	void startChargeEffect();
	void finishChargeEffect();
	void createDeadLightEffect();
	void createDeadBombEmitEffect();
	void effectDrawOn();
	void effectDrawOff();

	void shotGunDoDebugDraw(Graphics&);
	void setShotGunTarget(Vector3f&);

	// _00 		= VTBL
	// _00-_2B8	= EnemyBase
	FSM* mFsm;                           // _2BC
	WalkSmokeEffect::Mgr mWalkSmokeMgr;  // _2C0
	f32 mHealthGaugeTimer;               // _2C8
	f32 mAttackWaitTimer;                // _2CC
	f32 mUpdateTimer;                    // _2D0
	StateID mNextState;                  // _2D4
	Vector3f mTargetPosition;            // _2D8
	Vector3f mWalkTargetPosition;        // _2E4, next point to walk to, either waypoint or home position
	WayPoint* mNearestWaypoint;          // _2F0
	WayPoint* mOldNearestWaypoint;       // _2F4
	MiniHoudaiShotGunMgr* mShotgunMgr;   // _2F8
	u8 _2FC[0x4];                        // _2FC, entirely unused?
	efx::TChibiCharge* mEfxCharge;       // _300
	efx::TChibiDeadLight* mEfxDeadLight; // _304
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void loadModelData();                      // _C8
	virtual void loadAnimData();                       // _CC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_MiniHoudai;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x01240030);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mHealthGaugeTimer(this, 'fp11', "死亡 ～ ゲージ出現", 30.0f, 1.0f,
		                        500.0f) // 'death ~ appearance of gauge' (Time from death -> health gauge)
		    , mRespawnRate(this, 'fp12', "ゲージ出現 ～ 復活", 10.0f, 1.0f,
		                   500.0f) // 'appearance of gauge ~ resurrection' (Time from health gauge -> alive)
		{
		}

		Parm<f32> mHealthGaugeTimer; // _804
		Parm<f32> mRespawnRate;      // _82C
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
	MINIHOUDAIANIM_Walk    = 0,
	MINIHOUDAIANIM_Search  = 1, // 'search1'
	MINIHOUDAIANIM_Turn    = 2, // 'turn1'
	MINIHOUDAIANIM_Attack  = 3, // 'attack1'
	MINIHOUDAIANIM_Flick   = 4, // 'flick1'
	MINIHOUDAIANIM_Dead    = 5, // 'dead1'
	MINIHOUDAIANIM_Carry   = 6, // 'type5'
	MINIHOUDAIANIM_Rebirth = 7,
	MINIHOUDAIANIM_AnimCount, // 8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                   // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);               // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator mAnimator; // _10
};

struct MiniHoudaiShotGunNode : public CNode {
	MiniHoudaiShotGunNode(Obj*);

	virtual ~MiniHoudaiShotGunNode() { } // _08 (weak)

	bool update();
	void create();
	void setPosition(Vector3f&);
	void setVelocity(Vector3f&);
	void startShotGun(bool);
	void effectDrawOn();
	void effectDrawOff();
	void doDebugDraw(Graphics&);

	// _00		= VTBL
	// _00-_18 	= CNode
	u8 _18;                      // _18
	Obj* mOwner;                 // _1C
	efx::TChibiShell* mEfxShell; // _20
	Vector3f mPosition;          // _24
	Vector3f mVelocity;          // _30
};

struct MiniHoudaiShotGunMgr {
	MiniHoudaiShotGunMgr(Obj*);

	void setupShotGun();
	void resetCallBack();
	void setCallBack();
	void startRotation();
	void finishRotation();
	bool isShotGunRotation();
	bool isShotGunLockOn();
	bool isFinishShotGun();
	void setShotGunTarget(Vector3f&);
	void emitShotGun();
	void doUpdate();
	void doUpdateCommon();
	void forceFinishShotGun();
	Vector3f getShotGunPosition();
	bool searchShotGunRotation();
	bool returnShotGunRotation();
	void rotateVertical(J3DJoint*);
	void effectDrawOn();
	void effectDrawOff();
	void doDebugDraw(Graphics&);

	Obj* mOwner;                           // _00
	bool mIsShotGunRotation;               // _04
	bool mIsShotGunLockedOn;               // _05
	bool mIsShotGunFinished;               // _06
	f32 mShellSpeed;                       // _08
	f32 mAngle;                            // _0C
	Matrixf* mHeadMtx;                     // _10
	Vector3f mTargetPosition;              // _14
	u8 _20[0xC];                           // _20, unknown
	MiniHoudaiShotGunNode* mActiveNodes;   // _2C
	MiniHoudaiShotGunNode* mInactiveNodes; // _30
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
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

struct StateAttack : public State {
	inline StateAttack()
	    : State(MINIHOUDAI_Attack, "attack")
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
	    : State(MINIHOUDAI_Dead, "dead")
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
	    : State(MINIHOUDAI_Flick, "flick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLost : public State {
	inline StateLost()
	    : State(MINIHOUDAI_Lost, "lost")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateRebirth : public State {
	inline StateRebirth()
	    : State(MINIHOUDAI_Rebirth, "rebirth")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurn : public State {
	inline StateTurn()
	    : State(MINIHOUDAI_Turn, "turn")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurnHome : public State {
	inline StateTurnHome()
	    : State(MINIHOUDAI_TurnHome, "turnhome")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurnPath : public State {
	inline StateTurnPath()
	    : State(MINIHOUDAI_TurnPath, "turnpath")
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
	    : State(MINIHOUDAI_Walk, "walk")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalkHome : public State {
	inline StateWalkHome()
	    : State(MINIHOUDAI_WalkHome, "walkhome")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalkPath : public State {
	inline StateWalkPath()
	    : State(MINIHOUDAI_WalkPath, "walkpath")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace MiniHoudai

/* Tower Groink */
namespace FixMiniHoudai {
struct Obj : public MiniHoudai::Obj {
	Obj();

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_FminiHoudai;
	}

	// _00		= VTBL
	// _00-_308	= MiniHoudai::Obj
};

struct Mgr : public MiniHoudai::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_FminiHoudai;
	}

	// _00 		= VTBL
	// _00-_44	= MiniHoudai::Mgr
	Obj* mObj; // _44, probably
};
} // namespace FixMiniHoudai

/* Roaming Groink */
namespace NormMiniHoudai {
struct Obj : public MiniHoudai::Obj {
	Obj();

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_MiniHoudai;
	}

	// _00		= VTBL
	// _00-_308	= MiniHoudai::Obj
};

struct Mgr : public MiniHoudai::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_MiniHoudai;
	}

	// _00 		= VTBL
	// _00-_44	= MiniHoudai::Mgr
	Obj* mObj; // _44
};
} // namespace NormMiniHoudai
} // namespace Game

#endif
