#ifndef _GAME_ENTITIES_QURIONE_H
#define _GAME_ENTITIES_QURIONE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/gameGenerator.h"

/**
 * --Header for Honey Wisp (Qurione)--
 */

namespace efx {
struct TQuriGlow;
struct TQuriApp;
struct TQuriDisap;
} // namespace efx

namespace Game {
namespace Egg {
struct Obj;
} // namespace Egg

namespace Qurione {
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
	virtual void birth(Vector3f&, f32);                           // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*);       // _1C4
	virtual void doUpdate();                                      // _1CC
	virtual void doDebugDraw(Graphics&);                          // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();           // _258 (weak)
	virtual bool flyCollisionCallBack(Creature*, f32, CollPart*); // _280
	virtual void doStartWaitingBirthTypeDrop();                   // _2E0
	virtual void doFinishWaitingBirthTypeDrop();                  // _2E4
	virtual void doStartMovie();                                  // _2F0
	virtual void doEndMovie();                                    // _2F4
	virtual void setFSM(FSM*);                                    // _2F8
	//////////////// VTABLE END

	void setQurioneStartPos(f32);
	void moveFaceDir();
	void addPitchRatio();
	void resetUtilityTimer();
	void isAppear();
	void isFlyKill();
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

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                      // _2BC
	f32 m_qurioneScale;              // _2C0
	f32 _2C4;                        // _2C4
	f32 _2C8;                        // _2C8
	f32 m_utilityTimer;              // _2CC
	int _2D0;                        // _2D0
	Vector3f _2D4[2];                // _2D4
	Egg::Obj* m_egg;                 // _2EC
	efx::TQuriGlow* m_efxGlow;       // _2F0
	efx::TQuriApp* m_efxAppear;      // _2F4
	efx::TQuriDisap* m_efxDisappear; // _2F8
	                                 // _2FC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms(); // likely

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp03; // _854
		Parm<f32> m_fp04; // _87C
		Parm<f32> m_fp05; // _8A4
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
};

struct Generator : public EnemyGeneratorBase {
	Generator();

	virtual ~Generator();            // _08 (weak)
	virtual void doWrite(Stream&);   // _10
	virtual void doRead(Stream&);    // _14
	virtual u32 getLatestVersion();  // _18
	virtual void* getInitialParam(); // _20 (weak)

	void doReadLatestVersion(Stream&);
	void doReadOldVersion(Stream&);

	// _00 		= VTBL
	// _00-_1C  = EnemyGeneratorBase
	f32 m_fly;   // _20
	f32 m_slide; // _24
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

struct StateAppear : public State {
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

struct StateDisappear : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDrop : public State {
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

struct StateStay : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Qurione
} // namespace Game

#endif
