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
	virtual void onInit(CreatureInitArg*);                   // _30
	virtual void doDirectDraw(Graphics&);                    // _50
	virtual void inWaterCallback(WaterBox*);                 // _84 (weak)
	virtual void outWaterCallback();                         // _88 (weak)
	virtual bool isLivingThing();                            // _D4 (weak)
	virtual void collisionCallback(CollEvent&);              // _EC
	virtual void getShadowParam(ShadowParam&);               // _134
	virtual ~Obj();                                          // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4
	virtual void doUpdate();                                 // _1CC
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual void changeMaterial();                           // _200
	virtual void initMouthSlots();                           // _22C
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();      // _258 (weak)
	virtual MouthSlots* getMouthSlots();                     // _25C (weak)
	virtual bool pressCallBack(Creature*, f32, CollPart*);   // _27C
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual f32 getDownSmokeScale();                         // _2EC (weak)
	virtual void setFSM(FSM*);                               // _2F8
	//////////////// VTABLE END

	void setPomParms();
	void shotPikmin();
	void changePomColor();
	void createSwingSmokeEffect();
	void createShotEffect();
	void createPomDeadEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;              // _2BC
	u8 _2C0;                 // _2C0
	u8 _2C1;                 // _2C1
	u8 _2C2[0x2];            // _2C2, padding probably
	u8 _2C4[0xC];            // _2C4, unknown
	MouthSlots m_mouthSlots; // _2D0
	u8 _2D8[0xC];            // _2D8
	f32 _2E4;                // _2E4, timer?
	u8 _2E8[0x4];            // _2E8, unknown
	EnemyTypeID m_pomID;     // _2EC, B=3, R=4, Y=5, P=6, W=7, Q=8, base = 82
	                         // _2F0 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms(); // likely

		Parm<int> m_ip01; // _804
		Parm<int> m_ip11; // _82C
		Parm<int> m_ip13; // _854
		Parm<f32> m_fp01; // _87C
		Parm<f32> m_fp02; // _8A4
		Parm<f32> m_fp03; // _8CC
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

struct StateClose : public State {
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

struct StateOpen : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateShot : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSwing : public State {
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
} // namespace Pom
} // namespace Game

#endif
