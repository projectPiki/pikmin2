#ifndef _GAME_ENTITIES_POM_H
#define _GAME_ENTITIES_POM_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for (All) Candypop Buds (Pom)--
 */

namespace Game {
namespace Pom {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);          // _30
	virtual void doDirectDraw(Graphics& gfx);                // _50
	virtual void collisionCallback(CollEvent& event);        // _EC
	virtual void getShadowParam(ShadowParam& settings);      // _134
	virtual ~Obj() { }                                       // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4
	virtual void doUpdate();                                 // _1CC
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual void changeMaterial();                           // _200
	virtual void initMouthSlots();                           // _22C
	virtual bool pressCallBack(Creature*, f32, CollPart*);   // _27C
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual void setFSM(FSM*);                               // _2F8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()       // _258 (weak)
	{
		return m_pomID;
	}
	virtual void inWaterCallback(WaterBox* wb) { }                // _84 (weak)
	virtual void outWaterCallback() { }                           // _88 (weak)
	virtual bool isLivingThing() { return false; }                // _D4 (weak)
	virtual MouthSlots* getMouthSlots() { return &m_mouthSlots; } // _25C (weak)
	virtual f32 getDownSmokeScale() { return 0.8f; }              // _2EC (weak)
	//////////////// VTABLE END

	void setPomParms();
	void shotPikmin();
	void changePomColor();
	void createSwingSmokeEffect();
	void createShotEffect();
	void createPomDeadEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                        // _2BC
	bool _2C0;                         // _2C0
	u8 _2C1;                           // _2C1, possibly bool?
	int _2C4;                          // _2C4, eaten count?
	int _2C8;                          // _2C8, remaining count?
	u32 _2CC;                          // _2CC, unknown
	MouthSlots m_mouthSlots;           // _2D0
	int m_curQueenColor;               // _2D8
	u16 m_red;                         // _2DC, red in RGB color?
	u16 m_green;                       // _2DE, green in RGB color?
	u16 m_blue;                        // _2E0, blue in RGB color?
	f32 _2E4;                          // _2E4, timer?
	f32 m_queenColorTimer;             // _2E8
	EnemyTypeID::EEnemyTypeID m_pomID; // _2EC, B=3, R=4, Y=5, P=6, W=7, Q=8, base = 82
	                                   // _2F0 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual SysShape::Model* createModel();            // _B0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Pom;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_ip01(this, 'ip01', "ãzÇ¢çûÇ›ÉsÉLêî(pom)", 5, 1, 50)  // 'sucking piki number (pom)'
		    , m_ip11(this, 'ip11', "ãzÇ¢çûÇ›ÉsÉLêî(pop)", 1, 1, 50)  // 'sucking piki number (pop)'
		    , m_ip13(this, 'ip13', "ìfÇ´èoÇµî{êî(pop)", 5, 1, 50)    // 'spitting multiple (pop)'
		    , m_fp01(this, 'fp01', "äJâ‘éûä‘", 30.0f, 0.0f, 60.0f)   // 'flowering time'
		    , m_fp02(this, 'fp02', "êFä∑Ç¶éûä‘", 1.25f, 0.0f, 60.0f) // 'color change time'
		    , m_fp03(this, 'fp03', "îíçïèoåªó¶", 0.15f, 0.0f, 1.0f)  // 'black and white appearance rate'
		{
		}

		Parm<int> m_ip01; // _804
		Parm<int> m_ip11; // _82C
		Parm<int> m_ip13; // _854
		Parm<f32> m_fp01; // _87C
		Parm<f32> m_fp02; // _8A4
		Parm<f32> m_fp03; // _8CC
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
enum StateID {
	POM_Wait  = 0,
	POM_Dead  = 1,
	POM_Open  = 2,
	POM_Close = 3,
	POM_Shot  = 4,
	POM_Swing = 5,
	POM_Count,
};

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

struct StateClose : public State {
	inline StateClose()
	    : State(POM_Close, "close")
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
	    : State(POM_Dead, "dead")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateOpen : public State {
	inline StateOpen()
	    : State(POM_Open, "open")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateShot : public State {
	inline StateShot()
	    : State(POM_Shot, "shot")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSwing : public State {
	inline StateSwing()
	    : State(POM_Swing, "swing")
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
	    : State(POM_Wait, "wait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Pom
} // namespace Game

#endif
