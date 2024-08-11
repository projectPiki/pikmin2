#ifndef _GAME_ENTITIES_KOGANE_H
#define _GAME_ENTITIES_KOGANE_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"
#include "JSystem/JUtility/JUTNameTab.h"

/**
 * --Header for Beetle Base Class (Kogane)--
 * Derived Classes:
 * Fart			= Doodlebug
 * Koganemushi 	= Iridescent Flint Beetle
 * Wealthy	  	= Iridescent Glint Beetle
 */

namespace Game {
namespace Kogane {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                // _30
	virtual void onKill(CreatureKillArg* settings);                // _34
	virtual void doDirectDraw(Graphics& gfx);                      // _50
	virtual void inWaterCallback(WaterBox* wb) { }                 // _84 (weak)
	virtual void outWaterCallback() { }                            // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);            // _134
	virtual ~Obj() { }                                             // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doUpdate();                                       // _1CC
	virtual void doUpdateCommon();                                 // _1D0
	virtual void doDebugDraw(Graphics& gfx);                       // _1EC
	virtual void changeMaterial() = 0;                             // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()             // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Kogane;
	}
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);   // _27C
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part); // _284
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor);        // _28C
	virtual void doStartStoneState();                                           // _2A4
	virtual void doFinishStoneState();                                          // _2A8
	virtual void wallCallback(const MoveInfo& info);                            // _2E8
	virtual void doStartMovie();                                                // _2F0
	virtual void doEndMovie();                                                  // _2F4
	virtual void setFSM(FSM* fsm);                                              // _2F8
	virtual void createItem() { }                                               // _2FC (weak)
	virtual void resetFartTimer();                                              // _300 (weak)
	virtual void startBodyEffect() { }                                          // _304 (weak)
	virtual void finishBodyEffect() { }                                         // _308 (weak)
	virtual void createFartEffect() { }                                         // _30C (weak)
	virtual void effectDrawOn() { }                                             // _310 (weak)
	virtual void effectDrawOff() { }                                            // _314 (weak)
	virtual void createPressSENormal() { }                                      // _318 (weak)
	virtual void createPressSESpecial() { }                                     // _31C (weak)
	//////////////// VTABLE END

	bool transitDamageState(f32);
	bool transitDisappear();
	Vector3f getBodyJointPos();
	bool koganeScaleUp();
	bool koganeScaleDown();
	void setTargetPosition(Vector3f*);
	void resetAppearTimer();
	bool isAppear();
	void resetMoveTimer(f32, f32);
	bool createTreasureItem();
	void createPellet(int initArg, int amount);
	void createDoping(u8 initArg, int amount);

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* mFsm;                // _2BC
	int mHitCount;            // _2C0
	f32 mAppearTimer;         // _2C4
	f32 mMoveTimer;           // _2C8
	f32 mScaleTimer;          // _2CC
	Vector3f mTargetPosition; // _2D0
	                          // _2DC = body effect
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual SysShape::Model* createModel();            // _B0
	virtual void loadModelData();                      // _C8
	virtual void loadAnimData();                       // _CC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Kogane;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x00240030);
	}
	virtual ResTIMG* getChangeTexture() = 0; // _E0

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* mChangeTexture; // _44
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mMinAppearTime(this, 'fp01', "出現時間(Min)", 15.0f, 0.0f, 100.0f) // 'appearance time (Min)'
		    , mMaxAppearTime(this, 'fp02', "出現時間(Max)", 30.0f, 0.0f, 100.0f) // 'appearance time (Max)'
		    , mMinTravelTime(this, 'fp10', "移動時間(Min)", 0.5f, 0.0f, 10.0f)   // 'travel time (Min)'
		    , mMaxTravelTime(this, 'fp11', "移動時間(Max)", 2.0f, 0.0f, 10.0f)   // 'travel time (Max)'
		    , mMinStopTime(this, 'fp20', "停止時間(Min)", 0.5f, 0.0f, 10.0f)     // 'stop time (Min)'
		    , mMaxStopTime(this, 'fp21', "停止時間(Max)", 2.0f, 0.0f, 10.0f)     // 'stop time (Max)'
		    , mTurnAngle(this, 'fp30', "向き変え角度", 45.0f, 0.0f, 90.0f)       // 'turning angle'
		    , mScale(this, 'fp40', "スケール", 0.8f, 0.0f, 5.0f)                 // 'scale'
		{
		}

		Parm<f32> mMinAppearTime; // _804, fp01
		Parm<f32> mMaxAppearTime; // _82C, fp02
		Parm<f32> mMinTravelTime; // _854, fp10
		Parm<f32> mMaxTravelTime; // _87C, fp11
		Parm<f32> mMinStopTime;   // _8A4, fp20
		Parm<f32> mMaxStopTime;   // _8CC, fp21
		Parm<f32> mTurnAngle;     // _8F4, fp30
		Parm<f32> mScale;         // _91C, fp40
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
	KOGANEANIM_Move   = 0,
	KOGANEANIM_Wait   = 1,
	KOGANEANIM_Damage = 2,
	KOGANEANIM_AnimCount, // 3
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
	KOGANE_Appear    = 0,
	KOGANE_Disappear = 1,
	KOGANE_Move      = 2,
	KOGANE_Wait      = 3,
	KOGANE_Press     = 4,
	KOGANE_Count,
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

struct StateAppear : public State {
	inline StateAppear()
	    : State(KOGANE_Appear, "appear")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDisappear : public State {
	inline StateDisappear()
	    : State(KOGANE_Disappear, "disappear")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMove : public State {
	inline StateMove()
	    : State(KOGANE_Move, "move")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StatePress : public State {
	inline StatePress()
	    : State(KOGANE_Press, "press")
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
	    : State(KOGANE_Wait, "wait")
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Kogane
} // namespace Game

#endif
