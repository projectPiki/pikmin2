#ifndef _GAME_ENTITIES_KURAGE_H
#define _GAME_ENTITIES_KURAGE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TNewkurage.h"

/**
 * --Header for Lesser Spotted Jellyfloat (Kurage)--
 */

namespace Game {
namespace Kurage {
struct FSM;

enum StateID {
	KURAGE_NULL        = -1,
	KURAGE_Dead        = 0,
	KURAGE_Wait        = 1,
	KURAGE_Move        = 2,
	KURAGE_Chase       = 3,
	KURAGE_Attack      = 4,
	KURAGE_Fall        = 5,
	KURAGE_Land        = 6,
	KURAGE_Ground      = 7,
	KURAGE_TakeOff     = 8,
	KURAGE_FlyFlick    = 9,
	KURAGE_GroundFlick = 10,
	KURAGE_Count,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                // _30
	virtual void onKill(CreatureKillArg* settings);                // _34
	virtual void doDirectDraw(Graphics& gfx);                      // _50
	virtual void inWaterCallback(WaterBox* wb) { }                 // _84 (weak)
	virtual void outWaterCallback() { }                            // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);            // _134
	virtual ~Obj() { }                                             // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doUpdate();                                       // _1CC
	virtual void doDebugDraw(Graphics& gfx);                       // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()             // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Kurage;
	}
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual void doStartStoneState();                                          // _2A4
	virtual void doFinishStoneState();                                         // _2A8
	virtual void doStartWaitingBirthTypeDrop();                                // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                               // _2E4
	virtual f32 getDownSmokeScale() { return 0.65f; }                          // _2EC (weak)
	virtual void doStartMovie();                                               // _2F0
	virtual void doEndMovie();                                                 // _2F4
	virtual void setFSM(FSM* fsm);                                             // _2F8
	//////////////// VTABLE END

	f32 setHeightVelocity(f32, f32);
	void setRandTarget();
	f32 getMovePitchOffset();
	f32 getAttackPitchOffset();
	f32 getFlickPitchOffset();
	f32 getTakeOffPitchOffset();
	f32 getFallPitchOffset(f32);
	void updateFallTimer();
	StateID getFlyingNextState();
	Creature* getSearchedTarget(f32);
	bool isSuck(f32, Creature*);
	bool suckPikmin(f32);
	void createEffect();
	void setupEffect();
	void startEyeHireBodyEffect();
	void finishEyeBodyEffect();
	void setHireEffectLife(s16);
	void finishHireEffect();
	void startSuckEffect(Vector3f&);
	void updateSuckEffect(Vector3f&);
	void finishSuckEffect();
	void createBodyBombEffect();
	void createDownEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                           // _2BC
	StateID mNextState;                  // _2C0
	f32 mStateTimer;                     // _2C4
	f32 mMovePitchTimer;                 // _2C8
	f32 mFallTimer;                      // _2CC
	Vector3f mTargetPosition;            // _2D0
	bool mIsSucking;                     // _2DC
	int mSuckedPiki;                     // _2E0
	efx::TNewkurageEye* mEfxEyeL;        // _2E4
	efx::TNewkurageEye* mEfxEyeR;        // _2E8
	efx::TNewkurageHire* mEfxHire;       // _2EC
	efx::TNewkurageKira* mEfxKira;       // _2F0
	efx::TNewkurageSui* mEfxSui;         // _2F4
	efx::TNewkurageDeadrun* mEfxDeadrun; // _2F8
	                                     // _2FC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual void loadModelData();                      // _C8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Kurage;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x20240030);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mFlightHeight(this, 'fp01', "飛行高さ", 90.0f, 0.0f, 150.0f)     // 'flight height'
		    , mRiseFactor(this, 'fp02', "上昇係数", 1.0f, 0.0f, 10.0f)         // 'rise factor'
		    , mGroundTime(this, 'fp10', "地上ウェイト時間", 3.0f, 0.0f, 10.0f) // 'ground wait time'
		    , mSuckTime(this, 'fp11', "吸い込み時間", 5.0f, 0.0f, 10.0f)       // 'suction time'
		    , mSuckChance(this, 'fp12', "吸い込み確率", 0.025f, 0.0f, 1.0f)    // 'suction probability'
		    , mShakeTime(this, 'fp04', "振払落下時間", 3.0f, 0.0f, 10.0f)      // 'shake off time'
		    , mMinFallPiki(this, 'ip01', "落下最低ピキ数", 10, 1, 50)          // 'falling minimum piki number'
		    , mMaxSuckPiki(this, 'ip11', "吸い込みピキ数", 10, 1, 100)         // 'sucking piki number'
		{
		}

		Parm<f32> mFlightHeight; // _804, fp01
		Parm<f32> mRiseFactor;   // _82C, fp02
		Parm<f32> mGroundTime;   // _854, fp10
		Parm<f32> mSuckTime;     // _87C, fp11
		Parm<f32> mSuckChance;   // _8A4, fp12
		Parm<f32> mShakeTime;    // _8CC, fp04
		Parm<int> mMinFallPiki;  // _8F4, ip01
		Parm<int> mMaxSuckPiki;  // _91C, ip11
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
	KURAGEANIM_DeadFly     = 0, // 'dead1'
	KURAGEANIM_DeadGround  = 1, // 'dead2'
	KURAGEANIM_FlickFly    = 2, // 'flick1'
	KURAGEANIM_FlickGround = 3, // 'flick2'
	KURAGEANIM_Wait        = 4,
	KURAGEANIM_Move        = 5, // 'move1'
	KURAGEANIM_Land        = 6, // 'move2'
	KURAGEANIM_TakeOff     = 7, // 'type1'
	KURAGEANIM_Fall        = 8, // 'type2'
	KURAGEANIM_Attack      = 9,
	KURAGEANIM_AnimCount, // 10
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

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(u16 stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		mName = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	inline StateAttack()
	    : State(KURAGE_Attack, "attack")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateChase : public State {
	inline StateChase()
	    : State(KURAGE_Chase, "chase")
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
	    : State(KURAGE_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFall : public State {
	inline StateFall()
	    : State(KURAGE_Fall, "fall")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlyFlick : public State {
	inline StateFlyFlick()
	    : State(KURAGE_FlyFlick, "flyflick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGround : public State {
	inline StateGround()
	    : State(KURAGE_Ground, "ground")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGroundFlick : public State {
	inline StateGroundFlick()
	    : State(KURAGE_GroundFlick, "groundflick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLand : public State {
	inline StateLand()
	    : State(KURAGE_Land, "land")
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
	    : State(KURAGE_Move, "move")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTakeOff : public State {
	inline StateTakeOff()
	    : State(KURAGE_TakeOff, "takeoff")
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
	    : State(KURAGE_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Kurage
} // namespace Game

#endif
