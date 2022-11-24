#ifndef _GAME_ENTITIES_BOMB_H
#define _GAME_ENTITIES_BOMB_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TBombrock.h"
#include "Collinfo.h"

/**
 * --Header for Bomb-Rock (Bomb)--
 */

namespace Game {
namespace OtakaraBase {
struct Obj;
} // namespace OtakaraBase

namespace Bomb {
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings); // _30
	virtual void onKill(CreatureKillArg* settings); // _34
	virtual void doEntry();                         // _40
	virtual void doSimulation(f32);                 // _4C
	virtual void doDirectDraw(Graphics& gfx);       // _50
	virtual void onStartCapture();                  // _94
	virtual void onEndCapture();                    // _9C
	virtual bool isUnderground();                   // _D0 (weak)
	virtual bool isLivingThing()                    // _D4 (weak)
	{
		if (m_captureMatrix || !isStopMotion()) {
			return false;
		} else {
			return true;
		}
	}
	virtual void bounceCallback(Sys::Triangle* tri);           // _E8
	virtual void collisionCallback(CollEvent& event);          // _EC
	virtual void getShadowParam(ShadowParam& settings);        // _134
	virtual bool needShadow();                                 // _138
	virtual ~Obj() { }                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                        // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*) { } // _1C4 (weak)
	virtual void doUpdate();                                   // _1CC
	virtual void doAnimationCullingOff();                      // _1DC
	virtual void doAnimationCullingOn();                       // _1E0
	virtual void doDebugDraw(Graphics&);                       // _1EC
	virtual void setParameters();                              // _228
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()         // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Bomb;
	}
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual bool pressCallBack(Creature*, f32, CollPart*);  // _27C
	virtual bool bombCallBack(Creature*, Vector3f&, f32);   // _294
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM* fsm)                           // _2F8 (weak)
	{
		m_FSM = fsm;
		m_FSM->init(this);
		m_currentLifecycleState = nullptr;
	}
	//////////////// VTABLE END

	void forceBomb();
	void bombEffInWater();
	bool canEat();
	bool isAnimStart();
	bool isBombStart();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	u8 _2BC;                         // _2BC
	u8 _2BD;                         // _2BD
	int _2C0;                        // _2C0
	int _2C4;                        // _2C4
	u8 _2C8;                         // _2C8
	u8 _2C9;                         // _2C9
	OtakaraBase::Obj* m_otakara;     // _2CC
	FSM* m_FSM;                      // _2D0
	efx::TBombrockLight* m_efxLight; // _2D4
	                                 // _2D8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Bomb;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		m_obj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &m_obj[index];
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs, probably
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "敵へのダメージ", 250.0f, 0.0f, 2000.0f) // 'damage to enemies'
		    , m_fp02(this, 'fp02', "爆風範囲高さ+-", 50.0f, 0.0f, 50.0f)    // 'blast range height +-'
		    , m_ip01(this, 'ip01', "ダメージリミット", 2, 1, 10)            // 'damage limit'
		    , m_ip02(this, 'ip02', "誘爆リミット", 50, 0, 100)              // 'induction limit'
		{
		}

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<int> m_ip01; // _854
		Parm<int> m_ip02; // _87C
	};
	Parms() { }

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		m_general.read(stream);
		m_properParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms;
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10
	virtual SysShape::Animator& getAnimator(int idx);                // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	BOMB_Wait = 0,
	BOMB_Bomb = 1,
	BOMB_Count,
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10, maybe counter? kills bomb if it reaches 200
};

struct StateBomb : public State {
	StateBomb(int);

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
} // namespace Bomb
} // namespace Game

#endif
