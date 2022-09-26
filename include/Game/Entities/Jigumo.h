#ifndef _GAME_ENTITIES_JIGUMO_H
#define _GAME_ENTITIES_JIGUMO_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Piki.h"
#include "Condition.h"
#include "Collinfo.h"
#include "Quat.h"

/**
 * --Header for Hermit Crawmad (Jigumo)--
 */

namespace efx {
struct TJgmAttack;
struct TJgmAttackW;
struct TJgmBack;
struct TJgmBackW;
struct TImoSmoke;
} // namespace efx

namespace Game {
namespace Jigumo {
struct FSM;

struct ConditionHeightCheckPiki : public Condition<Piki> {
	virtual bool satisfy(Piki*); // _08 (weak)

	// _00 = VTBL
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void onKill(CreatureKillArg*);                  // _34
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual f32 getBodyRadius();                            // _54 (weak)
	virtual f32 getCellRadius();                            // _58 (weak)
	virtual void inWaterCallback(WaterBox*);                // _84
	virtual void outWaterCallback();                        // _88
	virtual bool isLivingThing();                           // _D4
	virtual void collisionCallback(CollEvent&);             // _EC
	virtual void getShadowParam(ShadowParam&);              // _134
	virtual bool needShadow();                              // _138
	virtual Vector3f getGoalPos();                          // _198 (weak)
	virtual ~Obj();                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                     // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4 (weak)
	virtual void doUpdate();                                // _1CC
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void doSimulationGround(f32);                   // _1F4
	virtual Vector3f getOffsetForMapCollision();            // _224
	virtual void setParameters();                           // _228
	virtual void initMouthSlots();                          // _22C
	virtual void createEfxHamon();                          // _250 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual MouthSlots* getMouthSlots();                    // _25C (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);      // _260
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual bool pressCallBack(Creature*, f32, CollPart*);  // _27C
	virtual bool earthquakeCallBack(Creature*, f32);        // _28C
	virtual bool eatWhitePikminCallBack(Creature*, f32);    // _298 (weak)
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void startCarcassMotion();                      // _2C4
	virtual f32 getDownSmokeScale();                        // _2EC (weak)
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8 (weak)
	//////////////// VTABLE END

	void getGoalDist();
	void walkFunc();
	void calcBaseTrMatrix();
	void revisionAnimPos(f32);
	void getWalkSpeed();
	void velocityControl();
	void getNearestPikiOrNavi(f32, f32);
	void effectStart();
	void effectStop();
	void boundEffect();
	void eatWaterEffect();
	void killNest();
	void mouthScaleMtxCalc();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Vector3f _2BC;                  // _2BC
	Vector3f m_goalPosition;        // _2C8
	int _2D4;                       // _2D4
	MouthSlots m_mouthSlots;        // _2D8
	u8 _2E0[0x8];                   // _2E0
	u8 _2E8;                        // _2E8, unknown
	u8 _2E9;                        // _2E9, unknown
	u8 _2EA[0x2];                   // _2EA, probably padding
	u8 _2EC[0x24];                  // _2EC, unknown
	Quat _310;                      // _310
	Quat _320;                      // _320
	u8 _330[0x30];                  // _330, unknown
	u16 _360;                       // _360
	Vector3f _364;                  // _364
	efx::TJgmAttack* m_efxAttack;   // _370
	efx::TJgmAttackW* m_efxAttackW; // _374
	efx::TJgmBack* m_efxBack;       // _378
	efx::TJgmBackW* m_efxBackW;     // _37C
	efx::TImoSmoke* m_efxSmoke;     // _380
	u8 _384;                        // _384, unknown
	u8 _385;                        // _385, unknown
	FSM* m_FSM;                     // _388
	                                // _38C = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int);                   // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual void loadModelData();                       // _C8
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj;	// _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms(); // likely

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp03; // _854
		Parm<f32> m_fp04; // _87C
		Parm<f32> m_fp05; // _8A4
		Parm<int> m_ip01; // _8CC
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
	u8 _8F8;                   // _8F8, unknown
	u8 _8F9;                   // _8F9, unknown
	u8 _8FA;                   // _8FA, unknown
	u8 _8FB;                   // _8FB, unknown
	u8 _8FC;                   // _8FC, unknown
	u8 _8FD;                   // _8FD, unknown
	u8 _8FE;                   // _8FE, unknown
	f32 _900;                  // _900
	f32 _904;                  // _904
	f32 _908;                  // _908
	f32 _90C;                  // _90C
	u8 _910;                   // _910
	f32 _914;                  // _914
	f32 _918;                  // _918
	f32 _91C;                  // _91C
	f32 _920;                  // _920
	f32 _924;                  // _924
	f32 _928;                  // _928
	f32 _92C;                  // _92C
	f32 _930;                  // _930
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                     // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int);                     // _14

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
	StateAppear(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	StateAttack(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateCarry : public State {
	StateCarry(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateEat : public State {
	StateEat(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	StateFlick(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateHide : public State {
	StateHide(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMiss : public State {
	StateMiss(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateReturn : public State {
	StateReturn(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSAttack : public State {
	StateSAttack(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSearch : public State {
	StateSearch(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSMiss : public State {
	StateSMiss(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Jigumo
} // namespace Game

#endif
