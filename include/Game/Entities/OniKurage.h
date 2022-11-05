#ifndef _GAME_ENTITIES_ONIKURAGE_H
#define _GAME_ENTITIES_ONIKURAGE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
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
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void onKill(CreatureKillArg* settings);         // _34
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void inWaterCallback(WaterBox* wb);             // _84 (weak)
	virtual void outWaterCallback();                        // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doUpdateCommon();                          // _1D0
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void initMouthSlots();                          // _22C
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual MouthSlots* getMouthSlots();                    // _25C (weak)
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void doStartWaitingBirthTypeDrop();             // _2E0
	virtual void doFinishWaitingBirthTypeDrop();            // _2E4
	virtual f32 getDownSmokeScale();                        // _2EC (weak)
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
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
	FSM* m_FSM;                // _2BC
	StateID m_nextState;       // _2C0
	f32 m_stateTimer;          // _2C4
	f32 _2C8;                  // _2C8
	f32 m_fallTimer;           // _2CC
	Vector3f m_targetPosition; // _2D0
	bool m_isSucking;          // _2DC
	int _2E0;                  // _2E0
	MouthSlots m_mouthSlots;   // _2E4
	u8 _2EC[0x24];             // _2EC, unknown
	                           // _310 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                       // _A0
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
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "飛行高さ", 90.0f, 0.0f, 150.0f)       // 'flight height'
		    , m_fp02(this, 'fp02', "上昇係数", 1.0f, 0.0f, 10.0f)         // 'rise factor'
		    , m_fp10(this, 'fp10', "地上ウェイト時間", 3.0f, 0.0f, 10.0f) // 'ground wait time'
		    , m_fp11(this, 'fp11', "吸い込み時間", 5.0f, 0.0f, 10.0f)     // 'suction time'
		    , m_fp12(this, 'fp12', "吸い込み確率", 0.025f, 0.0f, 1.0f)    // 'suction probability'
		    , m_fp04(this, 'fp04', "振払落下時間", 3.0f, 0.0f, 10.0f)     // 'shake off time'
		    , m_ip01(this, 'ip01', "落下最低ピキ数", 10, 1, 50)           // 'falling minimum piki number'
		    , m_ip11(this, 'ip11', "吸い込みピキ数", 10, 1, 100)          // 'sucking piki number'
		{
		}

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp10; // _854
		Parm<f32> m_fp11; // _87C
		Parm<f32> m_fp12; // _8A4
		Parm<f32> m_fp04; // _8CC
		Parm<int> m_ip01; // _8F4
		Parm<int> m_ip11; // _91C
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
	inline State(u16 stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		m_name = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	inline StateAttack()
	    : State(ONIKURAGE_Attack, "attack")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateChase : public State {
	inline StateChase()
	    : State(ONIKURAGE_Chase, "chase")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	inline StateDead()
	    : State(ONIKURAGE_Dead, "dead")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDrop : public State {
	inline StateDrop()
	    : State(ONIKURAGE_Drop, "drop")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFall : public State {
	inline StateFall()
	    : State(ONIKURAGE_Fall, "fall")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlyFlick : public State {
	inline StateFlyFlick()
	    : State(ONIKURAGE_FlyFlick, "flyflick")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGround : public State {
	inline StateGround()
	    : State(ONIKURAGE_Ground, "ground")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGroundFlick : public State {
	inline StateGroundFlick()
	    : State(ONIKURAGE_GroundFlick, "groundflick")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLand : public State {
	inline StateLand()
	    : State(ONIKURAGE_Land, "land")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMove : public State {
	inline StateMove()
	    : State(ONIKURAGE_Move, "move")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTakeOff : public State {
	inline StateTakeOff()
	    : State(ONIKURAGE_TakeOff, "takeoff")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	inline StateWait()
	    : State(ONIKURAGE_Wait, "wait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace OniKurage
} // namespace Game

#endif
