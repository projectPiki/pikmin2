#ifndef _GAME_ENTITIES_BOMBSARAI_H
#define _GAME_ENTITIES_BOMBSARAI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Careening Dirigibug (BombSarai)--
 */

namespace efx {
struct TBsaraiSupli;
} // namespace efx

namespace Game {
namespace Bomb {
struct Obj;
} // namespace Bomb

namespace BombSarai {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                        // _30
	virtual void onKill(CreatureKillArg*);                        // _34
	virtual void doDirectDraw(Graphics&);                         // _50
	virtual void inWaterCallback(WaterBox*);                      // _84 (weak)
	virtual void outWaterCallback();                              // _88 (weak)
	virtual void getShadowParam(ShadowParam&);                    // _134
	virtual ~Obj();                                               // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);       // _1C4
	virtual void doUpdate();                                      // _1CC
	virtual void doDebugDraw(Graphics&);                          // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();           // _258 (weak)
	virtual bool bombCallBack(Creature*, Vector3<float>&, float); // _294
	virtual void doFinishStoneState();                            // _2A8
	virtual void startCarcassMotion();                            // _2C4
	virtual void doStartWaitingBirthTypeDrop();                   // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                  // _2E4
	virtual f32 getDownSmokeScale();                              // _2EC (weak)
	virtual void doStartMovie();                                  // _2F0
	virtual void doEndMovie();                                    // _2F4
	virtual void setFSM(FSM*);                                    // _2F8
	//////////////// VTABLE END

	void setHeightVelocity(bool);
	void setRandTarget();
	void addPitchRatio();
	void supplyBomb();
	void throwBomb(Vector3f&);
	void getAttackablePikmin();
	void getNextStateOnHeight();
	void createEffect();
	void setupEffect();
	void createSupliEffect();
	void createBalloonEffect(int);
	void createDownEffect(f32);
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                    // _2BC
	f32 m_pitchRatio;              // _2C0
	f32 _2C4;                      // _2C4, timer?
	f32 _2C8;                      // _2C8, timer?
	Vector3f m_targetPosition;     // _2CC
	Bomb::Obj* m_heldBomb;         // _2D8
	int _2DC;                      // _2DC
	efx::TBsaraiSupli* m_efxSupli; // _2E0
	                               // _2E4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual void loadModelData();                       // _C8
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms(); // (weak)

		Parm<f32> _804; // _804
		Parm<f32> _82C; // _82C
		Parm<f32> _854; // _854
		Parm<f32> _87C; // _87C
		Parm<f32> _8A4; // _8A4
		Parm<f32> _8CC; // _8CC
		Parm<f32> _8F4; // _8F4
		Parm<f32> _91C; // _91C
		Parm<f32> _944; // _944
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr*);                     // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int);                    // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
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

struct StateBombFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBombMove : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateBombWait : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDamage : public State {
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

struct StateFall : public State {
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

struct StateRelease : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSupply : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTakeOff1 : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTakeOff2 : public State {
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
/////////////////////////////////////////////////////////////////
} // namespace BombSarai
} // namespace Game

#endif
