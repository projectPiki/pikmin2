#ifndef _GAME_ENTITIES_QURIONE_H
#define _GAME_ENTITIES_QURIONE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/gameGenerator.h"
#include "efx/TQuri.h"

/**
 * --Header for Honey Wisp (Qurione)--
 */

namespace Game {
namespace Egg {
struct Obj;
} // namespace Egg

namespace Qurione {
struct FSM;

enum SpawnIndex {
	QSPAWN_Start = 0,
	QSPAWN_End   = 1,
};

struct QurioneInitialParam : public EnemyInitialParamBase {
	inline QurioneInitialParam(f32 flyDist, f32 slideDist)
	    : mFlyDist(flyDist)
	    , mSlideDist(slideDist)
	{
	}

	f32 mFlyDist;   // _00
	f32 mSlideDist; // _04
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
	virtual void birth(Vector3f&, f32);                            // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doUpdate();                                       // _1CC
	virtual void doDebugDraw(Graphics& gfx);                       // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()             // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Qurione;
	}
	bool flyCollisionCallBack(Creature* source, f32 damage, CollPart* part); // _280
	virtual void doStartWaitingBirthTypeDrop();                              // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                             // _2E4
	virtual void doStartMovie();                                             // _2F0
	virtual void doEndMovie();                                               // _2F4
	virtual void setFSM(FSM* fsm);                                           // _2F8
	//////////////// VTABLE END

	void setQurioneStartPos(f32);
	void moveFaceDir();
	void addPitchRatio();
	void resetUtilityTimer();
	bool isAppear();
	bool isFlyKill();
	void attachItem();
	void dropItem();
	void addQurioneScale();
	void subQurioneScale();
	void createEffect();
	void setupEffect();
	void createHitEffect();
	void startGlowEffect();
	void setGlowEffectScale();
	void finishGlowEffect();
	void createAppearEffect();
	void createDisppearEffect();
	void effectDrawOn();
	void effectDrawOff();

	inline f32 getFlyDist() { return mFlyDist; }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                      // _2BC
	f32 mQurioneScale;              // _2C0
	f32 mFlyDist;                   // _2C4
	f32 mPitchRatio;                // _2C8
	f32 mUtilityTimer;              // _2CC
	int mSpawnIndex;                // _2D0, see SpawnIndex enum
	Vector3f mSpawnPositions[2];    // _2D4, see SpawnIndex enum
	Egg::Obj* mEgg;                 // _2EC
	efx::TQuriGlow* mEfxGlow;       // _2F0
	efx::TQuriApp* mEfxAppear;      // _2F4
	efx::TQuriDisap* mEfxDisappear; // _2F8
	                                // _2FC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void createObj(int count);                 // _A0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Qurione;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x20240010);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mFlightHeight(this, 'fp01', "飛行高さ", 60.0f, 0.0f, 150.0f)  // 'flight height'
		    , mPitchRate(this, 'fp02', "上下の揺れ速度", 2.5f, 0.0f, 10.0f) // 'vertical swing speed'
		    , mPitchAmp(this, 'fp03', "上下の揺れ幅", 20.0f, 0.0f, 50.0f)   // 'vertical swing width'
		    , mDeathRate(this, 'fp04', "死亡速度", 100.0f, 0.0f, 1000.0f)   // 'death rate'
		    , mDeathTime(this, 'fp05', "死亡時間", 1.0f, 0.0f, 10.0f)       // 'death time'
		{
		}

		Parm<f32> mFlightHeight; // _804, fp01
		Parm<f32> mPitchRate;    // _82C, fp02
		Parm<f32> mPitchAmp;     // _854, fp03
		Parm<f32> mDeathRate;    // _87C, fp04
		Parm<f32> mDeathTime;    // _8A4, fp05
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

struct Generator : public EnemyGeneratorBase {
	Generator();

	virtual ~Generator() { }        // _08 (weak)
	virtual void doWrite(Stream&);  // _10
	virtual void doRead(Stream&);   // _14
	virtual u32 getLatestVersion(); // _18
	virtual void* getInitialParam() // _20 (weak)
	{
		return &mInitialParam;
	}

	void doReadLatestVersion(Stream&);
	void doReadOldVersion(Stream&);

	// _00 		= VTBL
	// _00-_24  = EnemyGeneratorBase
	QurioneInitialParam mInitialParam; // _24
};

enum AnimID {
	QURIONEANIM_Wait   = 0,
	QURIONEANIM_Damage = 1,
	QURIONEANIM_Run    = 2,
	QURIONEANIM_Appear = 3, // 'appear1'
	QURIONEANIM_Hide   = 4, // 'hide1'
	QURIONEANIM_AnimCount,  // 5
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
enum StateID {
	QURIONE_Stay      = 0,
	QURIONE_Appear    = 1,
	QURIONE_Disappear = 2,
	QURIONE_Move      = 3,
	QURIONE_Drop      = 4,
	QURIONE_Dead      = 5,
	QURIONE_Count,
};

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

struct StateAppear : public State {
	inline StateAppear()
	    : State(QURIONE_Appear, "appear")
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
	    : State(QURIONE_Dead, "dead")
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
	    : State(QURIONE_Disappear, "disappear")
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
	    : State(QURIONE_Drop, "drop")
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
	    : State(QURIONE_Move, "move")
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
	    : State(QURIONE_Stay, "stay")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Qurione
} // namespace Game

#endif
