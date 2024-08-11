#ifndef _GAME_ENTITIES_PELPLANT_H
#define _GAME_ENTITIES_PELPLANT_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyStateMachine.h"
#include "Game/gameGenerator.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/Entities/PelletNumber.h"

/**
 * --Header for Pellet Posies (Pelplant)--
 */

namespace Game {
namespace PelletNumber {
struct Object;
} // namespace PelletNumber

namespace Pelplant {
// Growth state (small being bud, middle being half-grown, full being matured and pellet inside)
enum PelplantSize {
	PELPLANTSIZE_Small  = 0,
	PELPLANTSIZE_Middle = 1,
	PELPLANTSIZE_Full   = 2,
};

enum PelplantFlags {
	PELPLANTFLAG_None    = 0,
	PELPLANTFLAG_Growing = 0x1,
	PELPLANTFLAG_Full    = 0x2,
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	PELPLANT_NULL         = -1,
	PELPLANT_WaitSmall    = 0,
	PELPLANT_WaitMiddle   = 1,
	PELPLANT_WaitFull     = 2,
	PELPLANT_GrowSmallMid = 3,
	PELPLANT_GrowMidFull  = 4,
	PELPLANT_Damage       = 5,
	PELPLANT_Dead         = 6,
	PELPLANT_WitherFull   = 7,
	PELPLANT_WitherMiddle = 8,
	PELPLANT_WitherSmall  = 9,
	PELPLANT_StateCount,
};

struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* mStateMachine
	// _0C const char* mName
};

struct StateBlendAnim : public State {
	StateBlendAnim(int stateID, int nextState, int startAnimIdx, int endAnimIdx);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* mStateMachine
	// _0C const char* mName
	int mNextState;    // _10
	int mStartAnimIdx; // _14
	int mEndAnimIdx;   // _18
};

struct StateDamage : public State {
	StateDamage(int stateID, int animIdx);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* mStateMachine
	// _0C const char* mName
	int mAnimIdx; // _10
};

struct StateDead : public State {
	StateDead(int stateID, int animIdx);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* mStateMachine
	// _0C const char* mName
	int mAnimIdx; // _10
};

struct StateGrow : public State {
	StateGrow(int stateID, int animIdx, int nextState);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* mStateMachine
	// _0C const char* mName
	int mAnimIdx;   // _10
	int mNextState; // _14
};

struct StateWait : public State {
	StateWait(int stateID, int pelletSize);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* mStateMachine
	// _0C const char* mName
	int mPelSize; // _10
};

struct StateWither : public StateBlendAnim {
	StateWither(int, int, int, int);

	virtual void init(EnemyBase* enemy, StateArg* settings); // _08
	virtual void exec(EnemyBase* enemy);                     // _0C
	virtual void cleanup(EnemyBase* enemy);                  // _10

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* mStateMachine
	// _0C const char* mName
};
/////////////////////////////////////////////////////////////////

/**
 * @size{0x1C}
 */
struct FSM : public EnemyStateMachine {
	FSM()
	    : EnemyStateMachine()
	{
	}

	virtual void init(EnemyBase* enemy); // _08

	// _00		= VTABLE
	// _04-_1C	= EnemyStateMachine
};

struct PelplantInitialParam : public EnemyInitialParamBase {
	u8 mColor;        // _00
	u8 mAmount;       // _01
	u8 mInitialState; // _02
};

/**
 * @size{0x2E8}
 */
struct Obj : public EnemyBase {
	Obj();

	inline void setPelFlag(u32 flag) { mPelFlags.typeView |= flag; }
	inline void resetPelFlag(u32 flag) { mPelFlags.typeView &= ~flag; }
	inline bool isPelFlag(u32 flag) const { return mPelFlags.typeView & flag; }

	/////////////// VTABLE
	// vtable 1 (Creature, _00, _08-_1AC)
	virtual void setInitialSetting(EnemyInitialParamBase* params); // _1C4
	virtual void doAnimation();                                    // _03C
	virtual void doSimulation(f32);                                // _04C
	virtual void doDirectDraw(Graphics& gfx);                      // _050
	virtual bool isLivingThing()                                   // _0D4 (weak)
	{
		return isPelFlag(PELPLANTFLAG_Full);
	}
	virtual void getShadowParam(ShadowParam& settings); // _134
	virtual void onStickStart(Creature*);               // _158
	// vtable 2 (MotionListener+EnemyBase+self, _00, _1BC-1D0)
	virtual ~Obj() { }                  // _1BC (weak)
	virtual void birth(Vector3f&, f32); // _1C0

	virtual void doUpdate();                           // _1CC
	virtual void doAnimationUpdateAnimator();          // _1D8
	virtual void doDebugDraw(Graphics& gfx);           // _1EC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Pelplant;
	}
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);                         // _260
	virtual void onInit(CreatureInitArg* settings);                            // _030
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual bool farmCallBack(Creature* source, f32 power);                    // _290
	virtual void setFSM(FSM* fsm)                                              // _2F8 (weak)
	{
		mFsm = fsm;
		mFsm->init(this);
		mCurrentLifecycleState = nullptr;
	}
	/////////////// VTABLE END

	void attachPellet();
	void changePelletColor();
	void setPelletColor(u16, bool);
	f32 getHeadScale();
	void updateLODSphereRadius(int);
	void getNeckScale(Vector3f*);

	static bool headJointCallBack(J3DJoint*, int);
	static bool neckJointCallBack(J3DJoint*, int);

	static Obj* sCurrentObj;

	// Creature: 		_000 - _178
	// MotionListener: 	_178 - _17C
	// PelletView*: 	_17C - _180
	// EnemyBase: 		_180 - _2B8
	FSM* mFsm;                           // _2BC
	f32 mGrowTimer;                      // _2C0
	Matrixf* mRootJointMtx;              // _2C4
	BitFlag<u8> mPelFlags;               // _2C8
	Game::PelletNumber::Object* mPellet; // _2CC
	f32 mColorChangeTimer;               // _2D0
	u8 mColor;                           // _2D4
	u8 mSize;                            // _2D5
	s8 mFarmPow;                         // _2D6, farm power
	                                     // PelletView: _2D8
};

/**
 * @size{0x48}
 */
struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	/////////////// VTABLE
	// vtable 1 (GenericObjectMgr, _00, _08-_38)
	// vtable 2 (GenericContainer + IEnemyMgrBase + self, _00, _40-_E0)
	// GenericContainer thunks _40-_58
	// virtual ~Mgr() { }                        // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Pelplant;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObjects = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &mObjects[index];
	}
	virtual void initStoneSetting() { } // _C0 (weak)
	/////////////// VTABLE END

	// _00		= VTABLE
	// _04-_44	= EnemyMgrBase
	Obj* mObjects; // _44
};

/**
 * @size{0x880}
 */
struct Parms : EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mSmallToMedGrowth(this, 'fp01', "成長(小→中）", 120.0f, 0.0f, 300.0f) // growth (small to medium)
		    , mMedToLargeGrowth(this, 'fp02', "成長(中→大）", 120.0f, 0.0f, 300.0f) // growth (medium to large)
		    , mColorChangeTime(this, 'fp03', "カラー変更時間", 1.5f, 0.0f, 5.0f)     // color change time
		{
		}
		Parm<f32> mSmallToMedGrowth; // _804, fp01
		Parm<f32> mMedToLargeGrowth; // _82C, fp02
		Parm<f32> mColorChangeTime;  // _854, fp03
	};

	Parms()
	    : EnemyParmsBase()
	    , mPelplantParms()
	{
	}

	virtual void read(Stream& input) // _08 (weak)
	{
		EnemyParmsBase::read(input);
		mPelplantParms.read(input);
	}

	ProperParms mPelplantParms; // _7F8
};

/**
 * @size{0x27}
 */
struct Generator : public EnemyGeneratorBase {
	Generator();

	virtual ~Generator() {};                                    // _08
	virtual void doWrite(Stream&);                              // _10
	virtual void doRead(Stream&);                               // _14
	virtual u32 getLatestVersion() { return '0001'; };          // _18
	virtual void* getInitialParam() { return &mInitialParam; }; // _20

	void doReadOldVersion(Stream&);

	// _00 		= VTABLE
	// _04-_24 	= EnemyGeneratorBase
	PelplantInitialParam mInitialParam; // _24
};

enum AnimID {
	PELPLANTANIM_Damage       = 0, // 'damage3'
	PELPLANTANIM_Dead         = 1, // 'dead3'
	PELPLANTANIM_GrowSmallMed = 2, // 'grow1'
	PELPLANTANIM_GrowMedFull  = 3, // 'grow2'
	PELPLANTANIM_WaitSmall    = 4, // 'wait1'
	PELPLANTANIM_WaitMedium   = 5, // 'wait2'
	PELPLANTANIM_WaitFull     = 6, // 'wait3'
	PELPLANTANIM_BigGrow      = 7, // 'bgrow1', 10+20 pellets
	PELPLANTANIM_BigDamage    = 8, // 'bdamage1', 10+20 pellets
	PELPLANTANIM_BigDead      = 9, // 'bdead1', 10+20 pellets
	PELPLANTANIM_AnimCount,        // 10
};

/**
 * @size{0x4}
 */
struct BlendAccelerationFunc : public SysShape::BlendFunction {
	virtual f32 getValue(f32); // _08

	// _00		= VTABLE
};

/**
 * @size{0x60}
 */
struct ProperAnimator : public EnemyBlendAnimatorBase {
	ProperAnimator()
	    : EnemyBlendAnimatorBase()
	{
	}

	// vtable (EnemyBlendAnimatorBase, _00, _08-_28)
	// virtual ~ProperAnimator() { } // _08 (weak)

	// _00		= VTABLE
	// _00-_60	= EnemyBlendAnimatorBase
};
} // namespace Pelplant
} // namespace Game

#endif
