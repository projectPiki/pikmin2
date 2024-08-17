#ifndef _GAME_ENTITIES_DANGOMUSHI_H
#define _GAME_ENTITIES_DANGOMUSHI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/WalkSmokeEffect.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "efx/TDango.h"

/**
 * --Header for Segmented Crawbster (DangoMushi)--
 */

namespace Game {
namespace DangoMushi {
struct FSM;

enum StateID {
	DANGOMUSHI_NULL    = -1,
	DANGOMUSHI_Dead    = 0,
	DANGOMUSHI_Stay    = 1,
	DANGOMUSHI_Appear  = 2,
	DANGOMUSHI_Wait    = 3,
	DANGOMUSHI_Move    = 4,
	DANGOMUSHI_Attack  = 5,
	DANGOMUSHI_Turn    = 6,
	DANGOMUSHI_Recover = 7,
	DANGOMUSHI_Flick   = 8,
	DANGOMUSHI_StateCount, // 9
};

enum FallEnemyTypes {
	DANGOFALL_Rock = 0,
	DANGOFALL_Egg  = 1,
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mRollingMoveSpeed(this, 'fp01', "ローリング移動速度", 200.0f, 0.0f, 500.0f)    // 'rolling movement speed'
		    , mRollingTurnAccel(this, 'fp02', "ローリング回転速度率", 0.1f, 0.0f, 1.0f)      // 'rolling rotation speed rate'
		    , mRollingTurnSpeed(this, 'fp03', "ローリング回転最大速度", 10.0f, 0.0f, 360.0f) // 'rolling rotation maximum speed'
		    , mFlipTime(this, 'fp10', "ひっくり返り時間", 7.5f, 0.0f, 30.0f)                 // 'flip time'
		{
		}

		Parm<f32> mRollingMoveSpeed; // _804
		Parm<f32> mRollingTurnAccel; // _82C
		Parm<f32> mRollingTurnSpeed; // _854
		Parm<f32> mFlipTime;         // _87C
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

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                                                // _30
	virtual void onKill(CreatureKillArg* settings);                                                // _34
	virtual void doDirectDraw(Graphics& gfx);                                                      // _50
	virtual void collisionCallback(CollEvent& event);                                              // _EC
	virtual void getShadowParam(ShadowParam& settings);                                            // _134
	virtual bool needShadow();                                                                     // _138
	virtual ~Obj() { }                                                                             // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);                                 // _1C4
	virtual void doUpdate();                                                                       // _1CC
	virtual void doUpdateCommon();                                                                 // _1D0
	virtual void doAnimationUpdateAnimator();                                                      // _1D8
	virtual void doDebugDraw(Graphics& gfx);                                                       // _1EC
	virtual void changeMaterial();                                                                 // _200
	virtual void getCommonEffectPos(Vector3f&);                                                    // _204
	virtual void initWalkSmokeEffect();                                                            // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();                                         // _234
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part);                     // _278
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor);                           // _28C
	virtual void doStartStoneState();                                                              // _2A4
	virtual void doFinishStoneState();                                                             // _2A8
	virtual void startCarcassMotion();                                                             // _2C4
	virtual void wallCallback(const MoveInfo& info);                                               // _2E8
	virtual f32 getDownSmokeScale() { return 1.3f; }                                               // _2EC (weak)
	virtual void doStartMovie();                                                                   // _2F0
	virtual void doEndMovie();                                                                     // _2F4
	virtual void setFSM(FSM* fsm);                                                                 // _2F8
	virtual f32 getDamageCoeStoneState() { return 0.2f; }                                          // _2AC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_DangoMushi; } // _258 (weak)
	//////////////// VTABLE END

	bool addShadowScale();
	void setRandTarget();
	bool isReachedTarget();
	Creature* getSearchedTarget();
	void rollingMove();
	void createCrashEnemy();
	int getFallEggNum();
	Vector3f getFallPosition(int);
	void setupCollision();
	void setBodyCollision(bool);
	void flickHandCollision(Creature*);
	bool isNoDamageCollision();
	void resetMapCollisionSize(bool);
	void updateMapCollisionSize();
	bool flickHandCollision();
	void startBlendAnimation(int, bool);
	void endBlendAnimation();
	void startBossFlickBGM();
	void startBossAttackLoopBGM();
	void finishBossAttackLoopBGM();
	void updateBossBGM();
	void resetBossAppearBGM();
	void setBossAppearBGM();
	void createEffect();
	void setupEffect();
	void createDeadSmokeEffect();
	void createDeadBombEffect();
	void createBodyTurnEffect();
	void createWallBreakEffect();
	void createFlickAttackEffect();
	void createBodyDamageEffect();
	void createBodyWallCrashEffect(Vector3f);
	void startRollingMoveEffect();
	void finishRollingMoveEffect();
	void createEnemyBounceEffect();
	void createMoveHandEffect();
	void createAppearSmokeEffect();
	void effectDrawOn();
	void effectDrawOff();

	inline f32 getMoveSpeed() { return C_PROPERPARMS.mRollingMoveSpeed(); }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                              // _2BC
	bool mIsRolling;                        // _2C0
	bool mIsArmSwinging;                    // _2C1
	bool mIsBall;                           // _2C2, set by StateAttack::init, used for map collision
	bool mIsMoveHandEffectActive;           // _2C3
	f32 mStateTimer;                        // _2C4, timer recycled by each state
	f32 mShadowScale;                       // _2C8
	StateID mNextState;                     // _2CC
	Vector3f mTargetPosition;               // _2D0
	Vector3f mRollingVelocity;              // _2DC
	WalkSmokeEffect::Mgr mWalkSmokeMgr;     // _2E8
	Sys::MatLoopAnimator* mMatLoopAnimator; // _2F0
	efx::TDangoWallBreak* mEfxWallBreak;    // _2F4
	efx::TDangoAttack2* mEfxAttack2;        // _2F8, arm flick effect
	efx::TDangoRun* mEfxRun;                // _2FC
	                                        // _308 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual SysShape::Model* createModel();            // _B0
	virtual void loadModelData();                      // _C8
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_DangoMushi;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x01240030);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Sys::MatTevRegAnimation* mTevRegAnimation; // _44
	Obj* mObj;                                 // _48, array of Objs
};

enum AnimID {
	DANGOANIM_NULL    = -1,
	DANGOANIM_Fly     = 0,
	DANGOANIM_Wait    = 1,
	DANGOANIM_Move    = 2,
	DANGOANIM_Attack  = 3,
	DANGOANIM_Attack2 = 4, // flick anim
	DANGOANIM_Turn    = 5,
	DANGOANIM_Recover = 6,
	DANGOANIM_Dead    = 7,
	DANGOANIM_Carry   = 8,
	DANGOANIM_AnimCount, // 9
};

struct ProperAnimator : public EnemyBlendAnimatorBase {
	virtual ~ProperAnimator() { } // _08 (weak)

	// _00 		= VTBL
	// _00-_60	= EnemyBlendAnimatorBase
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct DangoStateArg : public StateArg {
	inline DangoStateArg()
	    : mAnimType("blend")
	{
	}

	char* mAnimType; // _00
};

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

struct StateAppear : public State {
	inline StateAppear()
	    : State(DANGOMUSHI_Appear, "appear")
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
	    : State(DANGOMUSHI_Attack, "attack")
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
	    : State(DANGOMUSHI_Dead, "dead")
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
	    : State(DANGOMUSHI_Flick, "flick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMove : public State {
	inline StateMove()
	    : State(DANGOMUSHI_Move, "move")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateRecover : public State {
	inline StateRecover()
	    : State(DANGOMUSHI_Recover, "recover")
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
	    : State(DANGOMUSHI_Stay, "stay")
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
	    : State(DANGOMUSHI_Turn, "turn")
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
	    : State(DANGOMUSHI_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace DangoMushi
} // namespace Game

#endif
