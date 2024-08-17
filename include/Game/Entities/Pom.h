#ifndef _GAME_ENTITIES_POM_H
#define _GAME_ENTITIES_POM_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "JSystem/JUtility/JUTNameTab.h"
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
	virtual void onInit(CreatureInitArg* settings);                             // _30
	virtual void doDirectDraw(Graphics& gfx);                                   // _50
	virtual void collisionCallback(CollEvent& event);                           // _EC
	virtual void getShadowParam(ShadowParam& settings);                         // _134
	virtual ~Obj() { }                                                          // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params);              // _1C4
	virtual void doUpdate();                                                    // _1CC
	virtual void doDebugDraw(Graphics& gfx);                                    // _1EC
	virtual void changeMaterial();                                              // _200
	virtual void initMouthSlots();                                              // _22C
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);   // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part); // _284
	virtual void setFSM(FSM* fsm);                                              // _2F8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()                          // _258 (weak)
	{
		return mPomID;
	}
	virtual void inWaterCallback(WaterBox* wb) { }               // _84 (weak)
	virtual void outWaterCallback() { }                          // _88 (weak)
	virtual bool isLivingThing() { return false; }               // _D4 (weak)
	virtual MouthSlots* getMouthSlots() { return &mMouthSlots; } // _25C (weak)
	virtual f32 getDownSmokeScale() { return 0.8f; }             // _2EC (weak)
	//////////////// VTABLE END

	void setPomParms();
	void shotPikmin();
	void changePomColor();
	void createSwingSmokeEffect();
	void createShotEffect();
	void createPomDeadEffect();

	// inline
	void setPomColor(int);

	inline int getPikiKind() const { return mPikiKind; }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                        // _2BC
	bool mCanTouchToClose;            // _2C0, will swing closed on navi/piki/teki touch
	bool mCanSwallowPiki;             // _2C1, will eat piki when thrown in
	int mUsedSlotCount;               // _2C4, conversion slots used up
	int mTotalSlotCount;              // _2C8, max conversion slots
	int mShotMultiplier;              // _2CC, multiplier for # seeds to shoot out
	MouthSlots mMouthSlots;           // _2D0
	int mPikiKind;                    // _2D8, color piki to shoot out
	J3DGXColorS10 mRgbColor;          // _2DC, red _2DC, green _2DE, blue _2E0, alpha _2E2
	f32 mSwingTimer;                  // _2E4, how long pom has been open since touch/swallow
	f32 mQueenColorTimer;             // _2E8, how long queen pom has been on current color
	EnemyTypeID::EEnemyTypeID mPomID; // _2EC, B=3, R=4, Y=5, P=6, W=7, Q=8, base=82
	                                  // _2F0 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual SysShape::Model* createModel();            // _B0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Pom;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mNormalMaxSlots(this, 'ip01', "吸い込みピキ数(pom)", 5, 1, 50)           // 'sucking piki number (pom)'
		    , mQueenMaxSlots(this, 'ip11', "吸い込みピキ数(pop)", 1, 1, 50)            // 'sucking piki number (pop)'
		    , mQueenShotMultiplier(this, 'ip13', "吐き出し倍数(pop)", 5, 1, 50)        // 'spitting multiple (pop)'
		    , mRemainOpenTime(this, 'fp01', "開花時間", 30.0f, 0.0f, 60.0f)            // 'flowering time'
		    , mColorChangeTime(this, 'fp02', "色換え時間", 1.25f, 0.0f, 60.0f)         // 'color change time'
		    , mBlackWhiteAppearanceRate(this, 'fp03', "白黒出現率", 0.15f, 0.0f, 1.0f) // 'black and white appearance rate'
		{
		}

		Parm<int> mNormalMaxSlots;           // _804, ip01
		Parm<int> mQueenMaxSlots;            // _82C, ip11
		Parm<int> mQueenShotMultiplier;      // _854, ip13
		Parm<f32> mRemainOpenTime;           // _87C, fp01
		Parm<f32> mColorChangeTime;          // _8A4, fp02
		Parm<f32> mBlackWhiteAppearanceRate; // _8CC
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

enum AnimID {
	POMANIM_Wait  = 0,
	POMANIM_Dead  = 1,
	POMANIM_Open  = 2, // 'type1'
	POMANIM_Close = 3, // 'type2'
	POMANIM_Shot  = 4, // 'type3'
	POMANIM_Swing = 5, // 'type4'
	POMANIM_AnimCount, // 6
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
	POM_Wait  = 0,
	POM_Dead  = 1,
	POM_Open  = 2,
	POM_Close = 3,
	POM_Shot  = 4,
	POM_Swing = 5,
	POM_Count,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(u16 stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		mName = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateClose : public State {
	inline StateClose()
	    : State(POM_Close, "close")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	inline StateDead()
	    : State(POM_Dead, "dead")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateOpen : public State {
	inline StateOpen()
	    : State(POM_Open, "open")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateShot : public State {
	inline StateShot()
	    : State(POM_Shot, "shot")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSwing : public State {
	inline StateSwing()
	    : State(POM_Swing, "swing")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	inline StateWait()
	    : State(POM_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Pom
} // namespace Game

#endif
