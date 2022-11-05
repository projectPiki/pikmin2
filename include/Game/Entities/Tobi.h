#ifndef _GAME_ENTITIES_TOBI_H
#define _GAME_ENTITIES_TOBI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Collinfo.h"

/**
 * --Header for Shearwigs (Tobi)--
 */

namespace Game {
namespace ItemBridge {
struct Item;
} // namespace ItemBridge

namespace Tobi {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);               // _30
	virtual void doDirectDraw(Graphics& gfx);                     // _50
	virtual bool isUnderground();                                 // _D0 (weak)
	virtual void getShadowParam(ShadowParam& settings);           // _134
	virtual ~Obj() { }                                            // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);       // _1C4
	virtual void doUpdate();                                      // _1CC
	virtual void doDebugDraw(Graphics&);                          // _1EC
	virtual void initMouthSlots();                                // _22C
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();           // _258 (weak)
	virtual MouthSlots* getMouthSlots();                          // _25C (weak)
	virtual bool pressCallBack(Creature*, f32, CollPart*);        // _27C
	virtual bool flyCollisionCallBack(Creature*, f32, CollPart*); // _280
	virtual bool hipdropCallBack(Creature*, f32, CollPart*);      // _284
	virtual void doStartStoneState();                             // _2A4
	virtual void doFinishStoneState();                            // _2A8
	virtual void doStartEarthquakeFitState();                     // _2B8
	virtual void doFinishEarthquakeFitState();                    // _2BC
	virtual void lifeRecover();                                   // _2C0
	virtual void startCarcassMotion();                            // _2C4
	virtual f32 getDownSmokeScale();                              // _2EC (weak)
	virtual void setFSM(FSM*);                                    // _2F8
	//////////////// VTABLE END

	void lifeIncrement();
	void randomFlyingTarget();
	void isFlyingLife();
	void setInWaterDamage();
	void resetAppearCheck();
	void isAppearCheck();
	void resetBridgeSearch();
	void setBridgeSearch();
	void setNearestBridge();
	void setCullingCheck();
	void checkBreakOrMove();
	void isBreakBridge();
	void moveBridgeSide();
	void moveBridgeCentre();
	void moveBridgeTop();
	void breakTargetBridge();
	void createAppearEffect();
	void createDisAppearEffect();
	void createBridgeEffect();
	void createEatEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                 // _2BC
	u8 _2C0;                    // _2C0, guess based on Ujia/b
	bool m_isUnderground;       // _2C1, guess based on Ujia/b
	u16 _2C2;                   // _2C2, guess based on Ujia/b
	int _2C4;                   // _2C4
	MouthSlots m_mouthSlots;    // _2C8
	Vector3f _2D0;              // _2D0
	ItemBridge::Item* m_bridge; // _2DC, guess based on Ujia/b
	f32 _2E0;                   // _2E0, guess based on Ujia/b
	f32 _2E4;                   // _2E4, guess based on Ujia/b
	                            // _2E8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Tobi;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, likely an array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "離陸ライフ", 0.5f, 0.0f, 1.0f)               // 'takeoff life'
		    , m_fp02(this, 'fp02', "着陸ライフ", 0.7f, 0.0f, 1.0f)               // 'landing life'
		    , m_fp03(this, 'fp03', "飛行オフセット", 60.0f, 0.0f, 300.0f)        // 'flight offset'
		    , m_poisonDamage(this, 'fp11', "白ピクミン", 300.0f, 0.0f, 10000.0f) // 'white pikmin'
		    , m_bridgeDamage(this, 'fp12', "橋食いパワー", 75.0f, 0.0f, 100.0f)  // 'bridge eating power'
		{
		}

		Parm<f32> m_fp01;         // _804
		Parm<f32> m_fp02;         // _82C
		Parm<f32> m_fp03;         // _854
		Parm<f32> m_poisonDamage; // _87C, fp11
		Parm<f32> m_bridgeDamage; // _8A4, fp12
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
	virtual ~ProperAnimator() { }                                     // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                  // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                 // _14

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

struct StateAttack1 : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack2 : public State {
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

struct StateDive : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateEat : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFly : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateGoHome : public State {
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

struct StateMoveCentre : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMoveSide : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMoveTop : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StatePress : public State {
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
} // namespace Tobi
} // namespace Game

#endif
