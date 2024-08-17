#ifndef _GAME_ENTITIES_ONIKURAGE_H
#define _GAME_ENTITIES_ONIKURAGE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TKurage.h"
#include "Collinfo.h"

/**
 * --Header for Greater Spotted Jellyfloat (OniKurage)--
 */

namespace Game {
namespace OniKurage {
struct FSM;

enum StateID {
	ONIKURAGE_NULL        = -1,
	ONIKURAGE_Dead        = 0,
	ONIKURAGE_Wait        = 1,
	ONIKURAGE_Move        = 2,
	ONIKURAGE_Chase       = 3,
	ONIKURAGE_Attack      = 4,
	ONIKURAGE_Fall        = 5,
	ONIKURAGE_Drop        = 6,
	ONIKURAGE_Land        = 7,
	ONIKURAGE_Ground      = 8,
	ONIKURAGE_TakeOff     = 9,
	ONIKURAGE_FlyFlick    = 10,
	ONIKURAGE_GroundFlick = 11,
	ONIKURAGE_Count,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                            // _30
	virtual void onKill(CreatureKillArg* settings);                            // _34
	virtual void doDirectDraw(Graphics& gfx);                                  // _50
	virtual void inWaterCallback(WaterBox* wb) { }                             // _84 (weak)
	virtual void outWaterCallback() { }                                        // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);                        // _134
	virtual ~Obj() { }                                                         // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);             // _1C4
	virtual void doUpdate();                                                   // _1CC
	virtual void doUpdateCommon();                                             // _1D0
	virtual void doDebugDraw(Graphics& gfx);                                   // _1EC
	virtual void initMouthSlots();                                             // _22C
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual void doStartStoneState();                                          // _2A4
	virtual void doFinishStoneState();                                         // _2A8
	virtual void doStartWaitingBirthTypeDrop();                                // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                               // _2E4
	virtual f32 getDownSmokeScale() { return 0.85f; }                          // _2EC (weak)
	virtual void doStartMovie();                                               // _2F0
	virtual void doEndMovie();                                                 // _2F4
	virtual void setFSM(FSM* fsm);                                             // _2F8
	virtual MouthSlots* getMouthSlots() { return &mMouthSlots; }               // _25C (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                         // _258 (weak)
	{
		return EnemyTypeID::EnemyID_OniKurage;
	}
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
	bool suckNavi(f32);
	void updateCollPartOffset();
	bool isFinishNaviSuck();
	bool isNaviSucked();
	void flickStickNavi(bool);
	void escapeCheckNavi();
	void createEffect();
	void setupEffect();
	void startEyeHireBodyEffect();
	void finishEyeBodyEffect();
	void setHireEffectLife(s16);
	void finishHireEffect();
	void startSuckEffect(Vector3f&);
	void updateSuckEffect(Vector3f&);
	void finishSuckEffect();
	void createFlickNaviEffect();
	void createBodyBombEffect();
	void createDownEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                        // _2BC
	StateID mNextState;               // _2C0
	f32 mStateTimer;                  // _2C4
	f32 mMovePitchTimer;              // _2C8
	f32 mFallTimer;                   // _2CC
	Vector3f mTargetPosition;         // _2D0
	bool mIsSucking;                  // _2DC
	int mSuckedPiki;                  // _2E0
	MouthSlots mMouthSlots;           // _2E4
	Navi* mSuckedNavis[2];            // _2EC
	efx::TKurageEye* mEfxEyeL;        // _2F4
	efx::TKurageEye* mEfxEyeR;        // _2F8
	efx::TKurageHire* mEfxHire;       // _2FC
	efx::TKurageKira* mEfxKira;       // _300
	efx::TKurageSui* mEfxSui;         // _304
	efx::TKurageGepu* mEfxGepu;       // _308
	efx::TKurageDeadrun* mEfxDeadrun; // _30C
	                                  // _310 = PelletView
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
		return EnemyTypeID::EnemyID_OniKurage;
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
	ONIKURAGEANIM_DeadFly     = 0, // 'dead1'
	ONIKURAGEANIM_DeadGround  = 1, // 'dead2'
	ONIKURAGEANIM_FlickFly    = 2, // 'flick1'
	ONIKURAGEANIM_FlickGround = 3, // 'flick2'
	ONIKURAGEANIM_Wait        = 4,
	ONIKURAGEANIM_Move        = 5, // 'move1'
	ONIKURAGEANIM_Land        = 6, // 'move2'
	ONIKURAGEANIM_TakeOff     = 7, // 'type1'
	ONIKURAGEANIM_Fall        = 8, // 'type2'
	ONIKURAGEANIM_Attack      = 9,
	ONIKURAGEANIM_AnimCount, // 10
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
	    : State(ONIKURAGE_Attack, "attack")
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
	    : State(ONIKURAGE_Chase, "chase")
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
	    : State(ONIKURAGE_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDrop : public State {
	inline StateDrop()
	    : State(ONIKURAGE_Drop, "drop")
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
	    : State(ONIKURAGE_Fall, "fall")
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
	    : State(ONIKURAGE_FlyFlick, "flyflick")
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
	    : State(ONIKURAGE_Ground, "ground")
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
	    : State(ONIKURAGE_GroundFlick, "groundflick")
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
	    : State(ONIKURAGE_Land, "land")
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
	    : State(ONIKURAGE_Move, "move")
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
	    : State(ONIKURAGE_TakeOff, "takeoff")
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
	    : State(ONIKURAGE_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace OniKurage
} // namespace Game

#endif
