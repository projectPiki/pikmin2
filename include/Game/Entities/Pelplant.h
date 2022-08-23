#ifndef _GAME_ENTITIES_PELPLANT_H
#define _GAME_ENTITIES_PELPLANT_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyStateMachine.h"
#include "SysShape/Animator.h"
#include "types.h"
#include "CNode.h"
#include "id32.h"
#include "Graphics.h"
#include "stream.h"
#include "Game/gameGenerator.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/PelletNumber.h"

namespace Game {
namespace PelletNumber {
struct Object;
} // namespace PelletNumber

namespace Pelplant {

struct BlendAccelerationFunc : SysShape::BlendFunction {
	virtual float getValue(float); // _00
};

/**
 * @size{0x1C}
 * @todo everything
 */
struct FSM : public EnemyStateMachine {
	FSM()
	    : EnemyStateMachine()
	{
	}

	virtual void init(EnemyBase*); // _08
};

/**
 * @size{0x2E8}
 * @todo vtables, funcs
 */
struct Obj : public EnemyBase {
	Obj();

	// vtable 1 (Creature)
	virtual void onInit(CreatureInitArg*); // _028
	virtual void doAnimation();            // _034
	virtual void doSimulation(float);      // _044
	virtual void doDirectDraw(Graphics&);  // _048
	virtual bool isLivingThing()           // _0CC (weak)
	{
		return (_2C8 >> 1 & 1);
	}
	virtual void getShadowParam(ShadowParam&); // _12C
	virtual void onStickStart(Creature*);      // _150
	// vtable 2 (MotionListener+EnemyBase+self)
	virtual ~Obj() { }                                      // _004
	virtual void birth(Vector3f&, float);                   // _008
	virtual void setInitialSetting(EnemyInitialParamBase*); // _00C
	virtual void doUpdate();                                // _014
	virtual void doAnimationUpdateAnimator();               // _020
	virtual void doDebugDraw(Graphics&);                    // _034
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()      // _0A0
	{
		return EnemyTypeID::EnemyID_Pelplant;
	}
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);        // _0A8
	virtual bool damageCallBack(Creature*, float, CollPart*); // _0C0
	virtual bool farmCallBack(Creature*, float);              // _0D8
	virtual void setFSM(FSM* fsm)                             // _1D0 (weak)
	{
		m_fsm = fsm;
		m_fsm->init(this);
		m_currentLifecycleState = nullptr;
	}

	void attachPellet();
	void changePelletColor();
	void setPelletColor(u16, bool);
	float getHeadScale();
	void updateLODSphereRadius(int);

	static unknown headJointCallBack(J3DJoint*, int);
	static unknown neckJointCallBack(J3DJoint*, int);

	// Inlined:
	void getNeckScale(Vector3f*);

	FSM* m_fsm;                           // _2BC
	float _2C0;                           // _2C0
	Matrixf* _2C4;                        // _2C4
	u8 _2C8;                              // _2C8
	Game::PelletNumber::Object* m_pellet; // _2CC
	float _2D0;                           // _2D0
	u8 _2D4;                              // _2D4
	u8 m_pelletSize;                      // _2D5
	s8 m_farmPow;                         // _2D6
	// PelletView: 0x2D8 - 0x2E7

	static Obj* sCurrentObj;
};

/**
 * @size{0x48}
 * @todo vtable offsets
 */
struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	virtual ~Mgr() { }
	virtual EnemyBase* birth(EnemyBirthArg&);
	virtual void createObj(int count) { m_objects = new Obj[count]; }
	virtual EnemyBase* getEnemy(int index) { return &m_objects[index]; }
	virtual void doAlloc();
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_Pelplant; }
	virtual void initStoneSetting() { }

	Obj* m_objects; // _48
};

struct Parms : EnemyParmsBase {
	struct _Parms : public Parameters {
		inline _Parms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "成長(小→中）", 120.0f, 0.0f, 300.0f) // growth (small to medium)
		    , m_fp02(this, 'fp02', "成長(中→大）", 120.0f, 0.0f, 300.0f) // growth (medium to large)
		    , m_fp03(this, 'fp03', "カラー変更時間", 1.5f, 0.0f, 5.0f)    // color change time
		{
		}
		Parm<float> m_fp01;
		Parm<float> m_fp02;
		Parm<float> m_fp03;
	};

	Parms()
	    : EnemyParmsBase()
	    , m_pelplantParms() {};

	virtual void read(Stream& input) // _00
	{
		EnemyParmsBase::read(input);
		m_pelplantParms.read(input);
	}

	_Parms m_pelplantParms;
};

struct Generator : public EnemyGeneratorBase {
	Generator();
	virtual ~Generator() {};                                   // _08
	virtual void doWrite(Stream&);                             // _10
	virtual void doRead(Stream&);                              // _14
	virtual u32 getLatestVersion() { return '0001'; };         // _18
	virtual void* getInitialParam() { return &m_pelletType; }; // _20
	// getInitialParam returns address of first parameter

	// _00 VTBL

	u8 m_pelletType; // _24
	u8 m_pelletSize; // _25
	u8 m_size;       // _26

	void doReadOldVersion(Stream&);
};

struct ProperAnimator : public EnemyBlendAnimatorBase {
	ProperAnimator()
	    : EnemyBlendAnimatorBase()
	{
	}

	/**
	 * @reifiedAddress{8010A9E0}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual ~ProperAnimator() { }                 // _00
	virtual void setAnimMgr(SysShape::AnimMgr*);  // _04
	virtual SysShape::Animator& getAnimator();    // _08
	virtual SysShape::Animator& getAnimator(int); // _0C
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* m_stateMachine
	// _0C const char* m_name
};

struct StateBlendAnim : public State {
	inline StateBlendAnim(int stateID, int a, int b, int c)
	    : State(stateID)
	    , _10(a)
	    , _14(b)
	    , _18(c)
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* m_stateMachine
	// _0C const char* m_name
	int _10; // _10
	int _14; // _14
	int _18; // _18
};

struct StateDamage : public State {
	StateDamage(int, int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* m_stateMachine
	// _0C const char* m_name
	int _10; // _10
};

struct StateDead : public State {
	StateDead(int, int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* m_stateMachine
	// _0C const char* m_name
	int _10; // _10
};

struct StateGrow : public State {
	StateGrow(int, int, int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* m_stateMachine
	// _0C const char* m_name
	int _10; // _10
	u32 _14; // _14
};

struct StateWait : public State {
	StateWait(int, int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* m_stateMachine
	// _0C const char* m_name
	int _10; // _10
};

struct StateWither : public StateBlendAnim {
	StateWither(int, int, int, int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* m_stateMachine
	// _0C const char* m_name
};

static float sLODRadius[4];

} // namespace Pelplant
} // namespace Game

#endif
