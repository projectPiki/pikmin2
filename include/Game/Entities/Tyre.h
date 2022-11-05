#ifndef _GAME_ENTITIES_TYRE_H
#define _GAME_ENTITIES_TYRE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "SysShape/Joint.h"
#include "Collinfo.h"

/**
 * --Header for Waterwraith Rollers (Tyre)--
 */

namespace efx {
struct TKageTyresmoke;
struct TEnemyHamonChasePos;
} // namespace efx

namespace Game {
struct TyreTubeShadowNode : public JointShadowNode {
	virtual ~TyreTubeShadowNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Matrixf*);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

namespace Tyre {
struct TyreShadowMgr;
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                                          // _30
	virtual void doSimulation(f32);                                                          // _4C
	virtual void doDirectDraw(Graphics& gfx);                                                // _50
	virtual void inWaterCallback(WaterBox* wb);                                              // _84
	virtual void outWaterCallback();                                                         // _88
	virtual bool isUnderground();                                                            // _D0 (weak)
	virtual void collisionCallback(CollEvent& event);                                        // _EC
	virtual void getShadowParam(ShadowParam& settings);                                      // _134
	virtual bool needShadow();                                                               // _138
	virtual ~Obj() { }                                                                       // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                                      // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*);                                  // _1C4 (weak)
	virtual void doUpdate();                                                                 // _1CC
	virtual void doAnimationCullingOff();                                                    // _1DC
	virtual void doDebugDraw(Graphics&);                                                     // _1EC
	virtual void setParameters();                                                            // _228
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_Tyre; } // _258 (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);                                       // _260
	virtual bool damageCallBack(Creature*, f32, CollPart*);                                  // _278
	virtual bool hipdropCallBack(Creature*, f32, CollPart*);                                 // _284
	virtual bool earthquakeCallBack(Creature*, f32);                                         // _28C
	virtual bool bombCallBack(Creature*, Vector3f&, f32);                                    // _294 (weak)
	virtual void doStartStoneState();                                                        // _2A4
	virtual void doFinishStoneState();                                                       // _2A8
	virtual void setFSM(FSM*);                                                               // _2F8 (weak)
	//////////////// VTABLE END

	void isFreeze();
	void frontRollMtxCalc();
	void rearRollMtxCalc();
	void moveStart();
	void collisionStOn();
	void collisionStOff();
	void flick();
	void deadEffect();
	void createSmokeEffect();
	void fadeSmokeEffect();
	void landEffect(Vector3f&);
	void scaleUpShadow();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	EnemyBase* _2BC;                // _2BC, possibly wraith pointer?
	f32 _2C0;                       // _2C0
	f32 _2C4;                       // _2C4
	u8 _2C8[0x4];                   // _2C8
	f32 _2CC;                       // _2CC
	u8 _2D0;                        // _2D0, unknown
	bool m_isUnderground;           // _2D1
	u8 _2D2;                        // _2D2, unknown
	Vector3f _2D4;                  // _2D4
	u8 _2E0[0xC];                   // _2E0, unknown
	Vector3f _2EC[2];               // _2EC
	FSM* m_FSM;                     // _304
	f32 m_shadowScale;              // _308
	f32 _30C;                       // _30C
	u8 _310[0x10];                  // _310, unknown
	u8 _320;                        // _320
	u8 _321;                        // _321
	u8 _322;                        // _322
	Vector3f _324;                  // _324
	efx::TKageTyresmoke* _330;      // _330
	efx::TKageTyresmoke* _334;      // _334
	TyreShadowMgr* m_shadowMgr;     // _338
	efx::TEnemyHamonChasePos* _33C; // _33C
	u8 _340[0x4];                   // _340, unknown
	                                // _344 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                  // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void doAlloc();                            // _A8
	virtual void loadModelData();                      // _C8
	virtual J3DModelData* doLoadBmd(void*);            // _D4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Tyre;
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
	Obj* m_obj; // _44, array of Objs
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_tyreRotationSpeed(this, 'fp01', "回転スピード", 0.5f, 0.0f, 100.0f) // rotation speed
		{
		}

		Parm<f32> m_tyreRotationSpeed; // _804
	};

	Parms()
	{
		_830 = 0;
		_831 = 0;
		_832 = 1;
		_833 = 10;
		_834 = 0.0f;
		_838 = 0.75f;
		_83C = 0.05f;
		_840 = 0.025f;
		_844 = 0.5f;
		_848 = 1.2f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		m_general.read(stream);
		m_properParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
	u8 _830;                   // _830, unknown
	u8 _831;                   // _831, unknown
	u8 _832;                   // _832, unknown
	u8 _833;                   // _833, unknown
	f32 _834;                  // _834
	f32 _838;                  // _838
	f32 _83C;                  // _83C
	f32 _840;                  // _840
	f32 _844;                  // _844
	f32 _848;                  // _848
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

struct TyreShadowMgr {
	f32 _00;                         // _00
	Matrixf* _04;                    // _04, front world matrix?
	Matrixf* _08;                    // _08, back world matrix?
	Obj* _0C;                        // _0C
	JointShadowRootNode* m_rootNode; // _10
	TyreTubeShadowNode* _14;         // _14
	TyreTubeShadowNode* _18;         // _18
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	TYRE_Move   = 0,
	TYRE_Land   = 1,
	TYRE_Freeze = 2,
	TYRE_Dead   = 3,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	StateDead(int stateID);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFreeze : public State {
	StateFreeze(int stateID);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u32 _10; // _10
};

struct StateLand : public State {
	StateLand(int stateID);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMove : public State {
	StateMove(int stateID);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Tyre
} // namespace Game

#endif
