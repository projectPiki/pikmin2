#ifndef _GAME_ENTITIES_KUMACHAPPY_H
#define _GAME_ENTITIES_KUMACHAPPY_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "Collinfo.h"

/**
 * --Header for Spotty Bulbear (KumaChappy)--
 * Derived Classes:
 * LeafChappy = (Mother) Bulbmin
 */

namespace Game {
struct WayPoint;

namespace KumaChappy {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);           // _30
	virtual void doDirectDraw(Graphics& gfx);                 // _50
	virtual void getShadowParam(ShadowParam& settings);       // _134
	virtual ~Obj() { }                                        // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);   // _1C4
	virtual void doUpdate();                                  // _1CC
	virtual void doUpdateCarcass();                           // _1D4
	virtual void doDebugDraw(Graphics&);                      // _1EC
	virtual Vector3f getOffsetForMapCollision();              // _224
	virtual void initMouthSlots();                            // _22C
	virtual void initWalkSmokeEffect();                       // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();    // _234
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();       // _258 (weak)
	virtual MouthSlots* getMouthSlots();                      // _25C (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);        // _260
	virtual bool damageCallBack(Creature*, float, CollPart*); // _278
	virtual void startCarcassMotion();                        // _2C4
	virtual bool doBecomeCarcass();                           // _2D0
	virtual f32 getDownSmokeScale();                          // _2EC (weak)
	virtual void setFSM(FSM*);                                // _2F8
	virtual void createChappyRelation();                      // _2FC
	virtual u32 getChappyRelation();                          // _300 (weak)
	virtual void startEnemyRumble();                          // _304
	////////// VTABLE END

	void getViewAngle();
	void resetWayPoint();
	void setNearestWayPoint();
	void setLinkWayPoint();
	void getSearchedTarget();
	void updateTargetDistance();
	void updateHomePosition();

	// _00 		= VTBL
	// _00-_2B8	= EnemyBase
	FSM* m_FSM;                          // _2BC
	WalkSmokeEffect::Mgr m_walkSmokeMgr; // _2C0
	float _2C8;                          // _2C8
	u8 _2CC[0x8];                        // _2CC, unknown
	int _2D4;                            // _2D4
	MouthSlots m_mouthSlots;             // _2D8
	Vector3f _2E0;                       // _2E0
	WayPoint* _2EC;                      // _2EC
	WayPoint* _2F0;                      // _2F0
	u8 _2F4[0x4];                        // _2F4, unknown
	                                     // _2F8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_KumaChappy;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "îíÉsÉNÉ~Éì", 300.0f, 0.0f, 10000.0f)      // 'white pikmin'
		    , m_fp11(this, 'fp11', "éÄñS Å` ÉQÅ[ÉWèoåª", 30.0f, 1.0f, 500.0f) // 'death ~ appearance of gauge'
		    , m_fp12(this, 'fp12', "ÉQÅ[ÉWèoåª Å` ïúäà", 10.0f, 1.0f, 500.0f) // 'appearance of gauge ~ resurrection'
		{
		}

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp11; // _82C
		Parm<f32> m_fp12; // _854
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

struct StateAttack : public State {
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

struct StateFlick : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLost : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateRebirth : public State {
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

struct StateTurnPath : public State {
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

struct StateWalkPath : public State {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace KumaChappy
} // namespace Game

#endif
