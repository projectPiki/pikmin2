#ifndef _GAME_ENTITIES_KABUTO_H
#define _GAME_ENTITIES_KABUTO_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/WalkSmokeEffect.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "efx/TKkabuto.h"

/**
 * --Header for Cannon Beetles--
 * Kabuto 		= Base Class for Cannon Beetle
 * GreenKabuto  = Armored Cannon Beetle Larva
 * RedKabuto 	= Decorated Cannon Beetle
 * FixKabuto	= Buried Cannon Beetle Larva
 */

struct ResTIMG;

namespace Game {
// Base Cannon Beetle Structs
namespace Kabuto {
struct FSM;

enum StateID {
	KABUTO_NULL      = -1,
	KABUTO_Dead      = 0,
	KABUTO_Wait      = 1,
	KABUTO_Turn      = 2,
	KABUTO_Move      = 3,
	KABUTO_Flick     = 4,
	KABUTO_Attack    = 5,
	KABUTO_FixStay   = 6,
	KABUTO_FixAppear = 7,
	KABUTO_FixHide   = 8,
	KABUTO_FixWait   = 9,
	KABUTO_FixTurn   = 10,
	KABUTO_FixAttack = 11,
	KABUTO_FixFlick  = 12,
	KABUTO_StateCount, // 13
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                // _30
	virtual void doDirectDraw(Graphics& gfx);                      // _50
	virtual bool isUnderground();                                  // _D0 (weak)
	virtual void getShadowParam(ShadowParam& settings);            // _134
	virtual ~Obj() { }                                             // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doUpdate();                                       // _1CC
	virtual void doDebugDraw(Graphics& gfx);                       // _1EC
	virtual void changeMaterial() = 0;                             // _200
	virtual void initWalkSmokeEffect();                            // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();         // _234
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()             // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Kabuto;
	}
	virtual void doStartStoneState();     // _2A4
	virtual void doFinishStoneState();    // _2A8
	virtual void startCarcassMotion();    // _2C4
	virtual f32 getDownSmokeScale();      // _2EC (weak)
	virtual void doStartMovie();          // _2F0
	virtual void doEndMovie();            // _2F4
	virtual void setFSM(FSM* fsm);        // _2F8
	virtual void createEffect() { }       // _2FC (weak)
	virtual void setupEffect() { }        // _300 (weak)
	virtual void startRotateEffect() { }  // _304 (weak)
	virtual void finishRotateEffect() { } // _308 (weak)
	virtual void startWaitEffect() { }    // _30C (weak)
	virtual void finishWaitEffect() { }   // _310 (weak)
	virtual void effectDrawOn() { }       // _314 (weak)
	virtual void effectDrawOff() { }      // _318 (weak)
	//////////////// VTABLE END

	void setRandTarget();
	Creature* getSearchedTarget();
	bool isAttackableTarget();
	void createStoneAttack();
	void updateCaution();
	f32 getViewAngle();
	void lifeIncrement();
	void createRockEmitEffect();

	// _00		= VTBL
	// _00-_2BC = EnemyBase
	FSM* mFsm;                          // _2BC
	WalkSmokeEffect::Mgr mWalkSmokeMgr; // _2C0
	f32 mStateTimer;                    // _2C8
	StateID mNextState;                 // _2CC
	Vector3f mTargetPosition;           // _2D0
	f32 mAlertTimer;                    // _2DC
	bool mIsWalking;                    // _2E0
	bool mIsUnderground;                // _2E1
	                                    // _2E4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr() { }                                 // _58 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Kabuto;
	}
	virtual SysShape::Model* createModel();         // _B0
	virtual void loadModelData();                   // _C8
	virtual void loadAnimData();                    // _CC
	virtual J3DModelData* doLoadBmd(void* resource) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(resource, 0x01240030);
	}
	virtual ResTIMG* getChangeTexture() = 0; // _E0

	// _00		= VTBL
	// _00-_44	= EnemyMgrBase
};

struct Parms : public EnemyParmsBase {
	struct ParmParms : public Parameters {
		inline ParmParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		{
		}
	};

	Parms() { }

	virtual void read(Stream& stream) // _08 (weak)
	{
		((Parameters*)this)->read(stream);
		mGeneral.read(stream);
		mKabutoParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ParmParms mKabutoParms; // _7F8
};

enum AnimID {
	KABUTOANIM_Dead      = 0,
	KABUTOANIM_Move      = 1,
	KABUTOANIM_Flick     = 2,
	KABUTOANIM_Attack    = 3,
	KABUTOANIM_Pivot     = 4,
	KABUTOANIM_Wait      = 5,
	KABUTOANIM_FixPivot  = 6,  // 'K_pivot'
	KABUTOANIM_FixWait   = 7,  // 'K_wait'
	KABUTOANIM_FixAttack = 8,  // 'K_attack'
	KABUTOANIM_FixFlick  = 9,  // 'K_flick'
	KABUTOANIM_FixDead   = 10, // 'K_dead'
	KABUTOANIM_FixAppear = 11, // 'K_appear'
	KABUTOANIM_FixHide   = 12, // 'K_hide'
	KABUTOANIM_Carry     = 13,
	KABUTOANIM_AnimCount, // 14
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                   // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);               // _14

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
	    : State(KABUTO_Attack, "attack")
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
	    : State(KABUTO_Dead, "dead")
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
	    : State(KABUTO_Flick, "flick")
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
	    : State(KABUTO_Move, "move")
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
	    : State(KABUTO_Turn, "turn")
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
	    : State(KABUTO_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixAppear : public State {
	inline StateFixAppear()
	    : State(KABUTO_FixAppear, "fixappear")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixAttack : public State {
	inline StateFixAttack()
	    : State(KABUTO_FixAttack, "fixattack")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixFlick : public State {
	inline StateFixFlick()
	    : State(KABUTO_FixFlick, "fixflick")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixHide : public State {
	inline StateFixHide()
	    : State(KABUTO_FixHide, "fixhide")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixStay : public State {
	inline StateFixStay()
	    : State(KABUTO_FixStay, "fixstay")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixTurn : public State {
	inline StateFixTurn()
	    : State(KABUTO_FixTurn, "fixturn")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixWait : public State {
	inline StateFixWait()
	    : State(KABUTO_FixWait, "fixwait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Kabuto

/* Armored Cannon Beetle Larva */
namespace GreenKabuto {
struct Obj : public Kabuto::Obj {
	Obj();

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Kabuto;
	}

	// _00		= VTBL
	// _00-_2E4 = Kabuto::Obj
};

struct Mgr : public Kabuto::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr() { }                                 // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Kabuto;
	}
	virtual void loadTexData();         // _D0
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return mChangeTexture;
	}

	// _00		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* mChangeTexture; // _44
	Obj* mObj;               // _48, array of Objs
};
} // namespace GreenKabuto

/* Decorated Cannon Beetle */
namespace RedKabuto {
struct Obj : public Kabuto::Obj {
	Obj();

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Rkabuto;
	}

	// _00		= VTBL
	// _00-_2E4 = Kabuto::Obj
};

struct Mgr : public Kabuto::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr() { }                                 // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Rkabuto;
	}
	virtual void loadTexData();         // _D0
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return mChangeTexture;
	}

	// _00		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* mChangeTexture; // _44
	Obj* mObj;               // _48, array of Objs
};
} // namespace RedKabuto

/* Buried Cannon Beetle Larva */
namespace FixKabuto {
struct Obj : public Kabuto::Obj {
	Obj();

	virtual void onKill(CreatureKillArg* settings);    // _34
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Fkabuto;
	}
	virtual void createEffect();       // _2FC
	virtual void setupEffect();        // _300
	virtual void startRotateEffect();  // _304
	virtual void finishRotateEffect(); // _308
	virtual void startWaitEffect();    // _30C
	virtual void finishWaitEffect();   // _310
	virtual void effectDrawOn();       // _314
	virtual void effectDrawOff();      // _318

	// _00		= VTBL
	// _00-_2E4 = Kabuto::Obj
	efx::TKkabutoRot* mEfxRot;   // _2E4
	efx::TKkabutoWait* mEfxWait; // _2E8
};

struct Mgr : public Kabuto::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr() { }                                 // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Fkabuto;
	}
	virtual void loadTexData();         // _D0
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return mChangeTexture;
	}

	// _00		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* mChangeTexture; // _44
	Obj* mObj;               // _48, array of Objs
};
} // namespace FixKabuto

} // namespace Game

#endif
