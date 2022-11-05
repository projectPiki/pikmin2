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

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual bool isUnderground();                           // _D0 (weak)
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void changeMaterial() = 0;                      // _200
	virtual void initWalkSmokeEffect();                     // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();  // _234
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void startCarcassMotion();                      // _2C4
	virtual float getDownSmokeScale();                      // _2EC (weak)
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
	virtual void createEffect();                            // _2FC (weak)
	virtual void setupEffect();                             // _300 (weak)
	virtual void startRotateEffect();                       // _304 (weak)
	virtual void finishRotateEffect();                      // _308 (weak)
	virtual void startWaitEffect();                         // _30C (weak)
	virtual void finishWaitEffect();                        // _310 (weak)
	virtual void effectDrawOn();                            // _314 (weak)
	virtual void effectDrawOff();                           // _318 (weak)
	//////////////// VTABLE END

	void setRandTarget();
	void getSearchedTarget();
	void isAttackableTarget();
	void createStoneAttack();
	void updateCaution();
	void getViewAngle();
	void lifeIncrement();
	void createRockEmitEffect();

	// _00		= VTBL
	// _00-_2BC = EnemyBase
	FSM* m_kabutoFSM;                    // _2BC
	WalkSmokeEffect::Mgr m_walkSmokeMgr; // _2C0
	float _2C8;                          // _2C8
	int _2CC;                            // _2CC
	Vector3f m_targetPosition;           // _2D0
	float _2DC;                          // _2DC
	u8 _2E0;                             // _2E0, unknown
	bool m_isUnderground;                // _2E1
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
		m_general.read(stream);
		m_kabutoParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ParmParms m_kabutoParms; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                // _14

	SysShape::Animator m_animator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMove : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurn : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixAttack : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixHide : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixStay : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixTurn : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFixWait : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

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
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Kabuto;
	}
	virtual void loadTexData();         // _D0
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return m_changeTexture;
	}

	// _00		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* m_changeTexture; // _44
	Obj* m_obj;               // _48, array of Objs
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
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Rkabuto;
	}
	virtual void loadTexData();         // _D0
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return m_changeTexture;
	}

	// _00		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* m_changeTexture; // _44
	Obj* m_obj;               // _48, array of Objs
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
	efx::TKkabutoRot* m_efxRot;   // _2E4
	efx::TKkabutoWait* m_efxWait; // _2E8
};

struct Mgr : public Kabuto::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr() { }                                 // _58 (weak)
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Fkabuto;
	}
	virtual void loadTexData();         // _D0
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return m_changeTexture;
	}

	// _00		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* m_changeTexture; // _44
	Obj* m_obj;               // _48, array of Objs
};
} // namespace FixKabuto

} // namespace Game

#endif
