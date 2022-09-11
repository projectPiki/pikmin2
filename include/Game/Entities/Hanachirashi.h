#ifndef _GAME_ENTITIES_HANACHIRASHI_H
#define _GAME_ENTITIES_HANACHIRASHI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"

/**
 * --Header for Withering Blowhog (Hanachirashi)--
 */

namespace Sys {
struct MatTexAnimation;
struct MatTevRegAnimation;
struct MatLoopAnimator;
} // namespace Sys

namespace Game {
namespace Hanachirashi {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void onKill(CreatureKillArg*);                  // _34
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual void inWaterCallback(WaterBox*);                // _84 (weak)
	virtual void outWaterCallback();                        // _88 (weak)
	virtual void getShadowParam(ShadowParam&);              // _134
	virtual ~Obj();                                         // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void changeMaterial();                          // _200
	virtual Vector3f getOffsetForMapCollision();            // _224
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual void getThrowupItemPosition(Vector3f*);         // _268
	virtual void getThrowupItemVelocity(Vector3f*);         // _26C
	virtual void throwupItemInDeathProcedure();             // _270 (weak)
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void doStartWaitingBirthTypeDrop();             // _2E0
	virtual void doFinishWaitingBirthTypeDrop();            // _2E4
	virtual f32 getDownSmokeScale();                        // _2EC (weak)
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
	//////////////// VTABLE END

	void getHeadJointPos();
	void setHeightVelocity();
	void setRandTarget();
	void resetShadowOffset();
	void setShadowOffsetMax();
	void addShadowOffset();
	void subShadowOffset();
	void resetShadowRadius();
	void subShadowRadius();
	void updateFallTimer();
	void getFlyingNextState();
	void addPitchRatio();
	void getSearchedPikmin();
	void isTargetLost();
	void isAttackable();
	void updateEmit();
	void getAttackPosition();
	void windTarget();
	void createEffect();
	void setupEffect();
	void startDeadEffect();
	void createSuckEffect();
	void startWindEffect();
	void finishWindEffect();
	void createDownEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	u32 _2BC;                   // _2BC, unknown
	int _2C0;                   // _2C0
	u8 _2C4[0x24];              // _2C4, unknown
	Vector3f _2E8;              // _2E8
	Vector3f _2F4;              // _2F4
	Vector3f _300;              // _300, attack position?
	f32 _30C;                   // _30C
	u8 _310;                    // _310, unknown
	u8 _311[0x3];               // _311, likely just padding
	u8 _314[0x14];              // _314, unknown
	Sys::MatLoopAnimator* _328; // _328, array of two animators?
	                            // _330 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadTexData();                         // _D0

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Sys::MatTexAnimation* _44;    // _44
	Sys::MatTevRegAnimation* _48; // _48
	Obj* m_obj;                   // _4C, array of Objs, probably
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms(); // (weak)

		Parm<f32> _804; // _804, type/code unsure
		Parm<f32> _82C; // _82C, type/code unsure
		Parm<f32> _854; // _854, type/code unsure
		Parm<f32> _87C; // _87C, type/code unsure
		Parm<f32> _8A4; // _8A4, type/code unsure
		Parm<int> _8CC; // _8CC, type/code unsure
		Parm<f32> _8F4; // _8F4, type/code unsure
		Parm<f32> _91C; // _91C, type/code unsure
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

struct StateAttack : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateChase : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateChaseInside : public State {
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

struct StateFlyFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGround : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGroundFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLand : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLaugh : public State {
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

struct StateTakeOff : public State {
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
} // namespace Hanachirashi
} // namespace Game

#endif
