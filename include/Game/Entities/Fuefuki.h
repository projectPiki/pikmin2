#ifndef _GAME_ENTITIES_FUEFUKI_H
#define _GAME_ENTITIES_FUEFUKI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TFuebugOnpa.h"
#include "efx/TCursor.h"

/**
 * --Header for Antenna Beetle (Fuefuki)--
 */

namespace Game {
namespace Fuefuki {
struct FSM;

enum StateID {
	FUEFUKI_NULL     = -1,
	FUEFUKI_Dead     = 0,
	FUEFUKI_Stay     = 1,
	FUEFUKI_Land     = 2,
	FUEFUKI_Jump     = 3,
	FUEFUKI_Wait     = 4,
	FUEFUKI_Turn     = 5,
	FUEFUKI_Walk     = 6,
	FUEFUKI_Whisle   = 7, // dev spelling
	FUEFUKI_Struggle = 8,
	FUEFUKI_StateCount,
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);          // _30
	virtual void onKill(CreatureKillArg* settings);          // _34
	virtual void doDirectDraw(Graphics& gfx);                // _50
	virtual void inWaterCallback(WaterBox* wb);              // _84 (weak)
	virtual void outWaterCallback();                         // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);      // _134
	virtual Footmarks* getFootmarks();                       // _154 (weak)
	virtual ~Obj() { }                                       // _1BC (weak)
	virtual void birth(Vector3f&, f32);                      // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4
	virtual void doUpdate();                                 // _1CC
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual Vector3f getOffsetForMapCollision();             // _224
	virtual void createEfxHamon();                           // _250
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();      // _258 (weak)
	virtual bool pressCallBack(Creature*, f32, CollPart*);   // _27C
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual void doStartStoneState();                        // _2A4
	virtual void doFinishStoneState();                       // _2A8
	virtual void doStartEarthquakeFitState();                // _2B8
	virtual void doFinishEarthquakeFitState();               // _2BC
	virtual void startCarcassMotion();                       // _2C4
	virtual void doStartWaitingBirthTypeDrop();              // _2E0
	virtual void doFinishWaitingBirthTypeDrop();             // _2E4
	virtual void doStartMovie();                             // _2F0
	virtual void doEndMovie();                               // _2F4
	virtual void setFSM(FSM*);                               // _2F8
	//////////////// VTABLE END

	void resetAppearTimer();
	void resetWhisleTimer(bool);
	bool isWhisleTimeMax();
	void startWhisle();
	void updateWhisle();
	void finishWhisle();
	void setTargetPosition(bool);
	bool isJumpAway();
	bool isArriveTarget();
	void createFootmarks();
	void updateFootmarks();
	void createEffect();
	void startWhisleEffect();
	void updateWhisleEffect(f32);
	void finishWhisleEffect();
	void createDownEffect(f32);
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                  // _2BC
	u8 _2C0;                     // _2C0
	f32 m_appearTimer;           // _2C4
	f32 m_airborneTimer;         // _2C8
	f32 m_whistleTimer;          // _2CC
	f32 _2D0;                    // _2D0, timer?
	f32 _2D4;                    // _2D4, timer?
	StateID m_stateID;           // _2D8
	Vector3f m_targetPosition;   // _2DC
	Footmarks* m_footmarks;      // _2E8
	efx::TCursor* m_efxWhistle;  // _2EC
	efx::TFuebugOnpa* m_efxOnpa; // _2F0
	                             // _2F4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Fuefuki;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_maxGroundTime(this, 'fp01', "出現時間(Max)", 30.0f, 0.0f, 100.0f) // 'appearance time (max)'
		    , m_minGroundTime(this, 'fp02', "出現時間(Min)", 20.0f, 0.0f, 100.0f) // 'appearance time (min)'
		    , m_airborneTime(this, 'fp03', "出現間隔", 3.0f, 0.0f, 100.0f)        // 'appearance interval'
		    , m_fp11(this, 'fp11', "フエ間隔(1)", 0.0f, 0.0f, 5.0f)               // 'hue interval (1)
		    , m_fp12(this, 'fp12', "フエ間隔(2～:隊列ナシ)", 5.0f, 0.0f, 10.0f)   // 'hue interval (2 ~: no formation)'
		    , m_fp13(this, 'fp13', "フエ間隔(2～:隊列アリ)", 10.0f, 0.0f, 20.0f)  // 'hue interval (2 ~: platoon ants)'
		    , m_struggleTime(this, 'fp21', "もがき時間", 3.0f, 0.0f, 10.0f)       // 'struggling time'
		    , m_fp22(this, 'fp22', "逃げジャンプ時間", 0.0f, 0.0f, 5.0f)          // 'escape jump time'
		    , m_fp31(this, 'fp31', "通常出現率", 0.5f, 0.0f, 1.0f)                // 'normal appearance rate'
		{
		}

		Parm<f32> m_maxGroundTime; // _804, fp01
		Parm<f32> m_minGroundTime; // _82C, fp02
		Parm<f32> m_airborneTime;  // _854, fp03
		Parm<f32> m_fp11;          // _87C, hue interval 1?
		Parm<f32> m_fp12;          // _8A4, hue interval 2_1?
		Parm<f32> m_fp13;          // _8CC, hue interval 2_2?
		Parm<f32> m_struggleTime;  // _8F4, fp21
		Parm<f32> m_fp22;          // _91C, time it takes to jump?
		Parm<f32> m_fp31;          // _944
	};

	Parms() { }

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		m_general.read(stream);
		m_properParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                // _14

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

struct StateDead : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateJump : public State {
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

struct StateStay : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStruggle : public State {
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

struct StateWalk : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

// dev spelling
struct StateWhisle : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Fuefuki
} // namespace Game

#endif
