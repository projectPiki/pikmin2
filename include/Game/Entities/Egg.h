#ifndef _GAME_ENTITIES_EGG_H
#define _GAME_ENTITIES_EGG_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "efx/TSimple.h"
#include "Game/Entities/ItemHoney.h"

/**
 * --Header for Egg (Egg)--
 */

namespace Game {
namespace Egg {
enum EggDrop {
	EGGDROP_1Pellets     = 0,
	EGGDROP_5Pellets     = 1,
	EGGDROP_SingleNectar = 2,
	EGGDROP_DoubleNectar = 3,
	EGGDROP_Mitites      = 4,
	EGGDROP_Spicy        = 5,
	EGGDROP_Bitter       = 6,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE - Note: order necessary for weak function ordering
	virtual void onInit(CreatureInitArg* settings);                      // _30
	virtual void doSimulation(f32);                                      // _4C
	virtual void doDirectDraw(Graphics& gfx);                            // _50
	virtual void onStartCapture();                                       // _94
	virtual void onEndCapture();                                         // _9C
	virtual void bounceCallback(Sys::Triangle* tri);                     // _E8
	virtual void collisionCallback(CollEvent& event);                    // _EC
	virtual void getShadowParam(ShadowParam& settings);                  // _134
	virtual bool needShadow();                                           // _138
	virtual ~Obj() { }                                                   // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                  // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*) { }           // _1C4 (weak)
	virtual void doUpdate();                                             // _1CC
	virtual void doAnimationCullingOff();                                // _1DC
	virtual void doDebugDraw(Graphics& gfx);                             // _1EC
	virtual void setParameters();                                        // _228
	virtual bool isLivingThing() { return (mCaptureMatrix == nullptr); } // _D4 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                   // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Egg;
	}
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part); // _27C
	virtual f32 getDownSmokeScale() { return 0.4f; }                          // _2EC (weak)
	virtual void setFSM(FSM* fsm)                                             // _2F8 (weak)
	{
		mFsm = fsm;
		mFsm->init(this);
		mCurrentLifecycleState = nullptr;
	}
	//////////////// VTABLE END

	void genItem();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	bool mIsFalling; // _2BC, set when released from capture
	FSM* mFsm;       // _2C0
	                 // _2C4 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Egg;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &mObj[index];
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mSingleNectarChance(this, 'fp01', "蜜レート", 1.0f, 0.0f, 1.0f)       // 'nectar rate'
		    , mDoubleNectarChance(this, 'fp02', "蜜x2レート", 1.0f, 0.0f, 1.0f)     // 'nectar x2 rate'
		    , mMititesChance(this, 'fp03', "タマゴムシx10レート", 1.0f, 0.0f, 1.0f) // 'mitite x10 rate'
		    , mSpicyChance(this, 'fp04', "赤ドーピングレート", 1.0f, 0.0f, 1.0f)    // 'red doping rate'
		    , mBitterChance(this, 'fp05', "黒ドーピングレート", 1.0f, 0.0f, 1.0f)   // 'black doping rate'
		{
		}

		Parm<f32> mSingleNectarChance; // _804, fp01
		Parm<f32> mDoubleNectarChance; // _82C, fp02
		Parm<f32> mMititesChance;      // _854, fp03
		Parm<f32> mSpicyChance;        // _87C, fp04
		Parm<f32> mBitterChance;       // _8A4, fp05
	};

	Parms()
	{
		mForcedDropType  = 0;
		mDoCheckHasSpray = 1;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms; // _7F8
	u8 mForcedDropType;       // _8D0
	u8 mDoCheckHasSpray;      // _8D1
};

enum AnimID {
	EGGANIM_Damage = 0, // 'damage1', only one anim
	EGGANIM_AnimCount,  // 1
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                   // _08
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; } // _10
	virtual SysShape::Animator& getAnimator(int idx);               // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator mAnimator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	EGG_Wait = 0,
	EGG_Count,
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _00
	virtual void exec(EnemyBase* enemy);                     // _04

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Egg
} // namespace Game

#endif
