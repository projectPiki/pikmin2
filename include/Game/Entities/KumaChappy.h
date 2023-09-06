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
struct ChappyRelation;

namespace KumaChappy {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                            // _30
	virtual void doDirectDraw(Graphics& gfx);                                  // _50
	virtual void getShadowParam(ShadowParam& settings);                        // _134
	virtual ~Obj() { }                                                         // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);             // _1C4
	virtual void doUpdate();                                                   // _1CC
	virtual void doUpdateCarcass();                                            // _1D4
	virtual void doDebugDraw(Graphics& gfx);                                   // _1EC
	virtual Vector3f getOffsetForMapCollision();                               // _224
	virtual void initMouthSlots();                                             // _22C
	virtual void initWalkSmokeEffect();                                        // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();                     // _234
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();                        // _258 (weak)
	virtual MouthSlots* getMouthSlots();                                       // _25C (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);                         // _260
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual void startCarcassMotion();                                         // _2C4
	virtual bool doBecomeCarcass();                                            // _2D0
	virtual f32 getDownSmokeScale();                                           // _2EC (weak)
	virtual void setFSM(FSM* fsm);                                             // _2F8
	virtual void createChappyRelation();                                       // _2FC
	virtual ChappyRelation* getChappyRelation();                               // _300 (weak)
	virtual void startEnemyRumble();                                           // _304
	////////// VTABLE END

	f32 getViewAngle();
	void resetWayPoint();
	void setNearestWayPoint();
	void setLinkWayPoint();
	void getSearchedTarget();
	void updateTargetDistance();
	void updateHomePosition();

	// _00 		= VTBL
	// _00-_2B8	= EnemyBase
	FSM* mFsm;                          // _2BC
	WalkSmokeEffect::Mgr mWalkSmokeMgr; // _2C0
	f32 mReviveTimer;                   // _2C8
	int _2CC;                           // _2CC
	f32 mTimer;                         // _2D0
	int mNextState;                     // _2D4
	MouthSlots mMouthSlots;             // _2D8
	Vector3f mTargetPos;                // _2E0
	WayPoint* mCurrWP;                  // _2EC
	WayPoint* mPrevWP;                  // _2F0
	ChappyRelation* mChappyRelation;    // _2F4
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
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mFp01(this, 'fp01', "îíÉsÉNÉ~Éì", 300.0f, 0.0f, 10000.0f)      // eat white pikmin damage
		    , mFp11(this, 'fp11', "éÄñS Å` ÉQÅ[ÉWèoåª", 30.0f, 1.0f, 500.0f) // time to revive after death
		    , mFp12(this, 'fp12', "ÉQÅ[ÉWèoåª Å` ïúäà", 10.0f, 1.0f, 500.0f) // delay before hp starts replenishing after death
		{
		}

		Parm<f32> mFp01; // _804
		Parm<f32> mFp11; // _82C
		Parm<f32> mFp12; // _854
	};

	Parms() { }

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                   // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);               // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator mAnimator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	KUMACHAPPY_Attack,
	KUMACHAPPY_Dead,
	KUMACHAPPY_Flick,
	KUMACHAPPY_Lost,
	KUMACHAPPY_Rebirth,
	KUMACHAPPY_Turn,
	KUMACHAPPY_TurnPath,
	KUMACHAPPY_Walk,
	KUMACHAPPY_WalkPath
};

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
