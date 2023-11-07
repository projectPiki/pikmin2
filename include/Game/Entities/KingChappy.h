#ifndef _GAME_ENTITIES_KINGCHAPPY_H
#define _GAME_ENTITIES_KINGCHAPPY_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "efx/TKch.h"
#include "efx/TEnemyHamon.h"
#include "SysShape/Joint.h"
#include "Collinfo.h"

/**
 * --Header for Emperor Bulblax (KingChappy)--
 */

namespace Game {
namespace KingChappy {
enum StateID {
	KINGCHAPPY_NULL     = -1,
	KINGCHAPPY_Walk     = 0,
	KINGCHAPPY_Attack   = 1,
	KINGCHAPPY_Dead     = 2,
	KINGCHAPPY_Flick    = 3,
	KINGCHAPPY_WarCry   = 4,
	KINGCHAPPY_Damage   = 5,
	KINGCHAPPY_Turn     = 6,
	KINGCHAPPY_Eat      = 7,
	KINGCHAPPY_Hide     = 8,
	KINGCHAPPY_HideWait = 9,
	KINGCHAPPY_Appear   = 10,
	KINGCHAPPY_Caution  = 11,
	KINGCHAPPY_Swallow  = 12,
	KINGCHAPPY_Count,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mFp01(this, 'fp01', "要旋回角度(deg)", 20.0f, 0.0f, 180.0f)       // 'required turning angle (deg)'
		    , mFp02(this, 'fp02', "出現までの距離", 150.0f, 0.0f, 300.0f)       // 'distance to spawn'
		    , mFp03(this, 'fp03', "雄たけび有効角度(deg)", 45.0f, 0.0f, 180.0f) // 'roar effective angle (deg)'
		    , mFp04(this, 'fp04', "雄たけび有効範囲", 100.0f, 0.0f, 300.0f)     // 'roar effective range'
		    , mFp05(this, 'fp05', "爆弾ダメージ", 200.0f, 0.0f, 600.0f)         // 'bomb damage'
		    , mFp06(this, 'fp06', "見えない範囲", 70.0f, 0.0f, 200.0f)          // 'invisible range'
		    , mFp07(this, 'fp07', "旋回終了角度", 10.0f, 0.0f, 180.0f)          // 'turning end angle'
		    , mFp08(this, 'fp08', "踏み潰し範囲", 45.0f, 0.0f, 200.0f)          // 'trampling range'
		    , mFp09(this, 'fp09', "出現振り払い範囲", 100.0f, 0.0f, 200.0f)     // 'appearance shake-off range'
		    , mFp10(this, 'fp10', "出現振り払い力", 200.0f, 0.0f, 400.0f)       // 'appearance shake-off power'
		    , mFp11(this, 'fp11', "歩きアニメスピード", 1.0f, 0.0f, 3.0f)       // 'walking anime speed'
		    , mFp12(this, 'fp12', "死雄たけび率", 0.0f, 0.0f, 1.0f)             // 'death rate'
		    , mFp13(this, 'fp13', "フリック雄たけび率", 0.5f, 0.0f, 1.0f)       // 'flick shout rate'
		    , mFp14(this, 'fp14', "白ピクミン", 300.0f, 0.0f, 1000.0f)          // 'white pikmin'
		    , mFp15(this, 'fp15', "bigスケール", 1.0f, 1.0f, 2.0f)              // 'big scale'
		    , mFp16(this, 'fp16', "bigライフ", 100.0f, 0.0f, 9999.0f)           // 'big life'
		    , mFp17(this, 'fp17', "big速度", 80.0f, 0.0f, 1000.0f)              // 'big speed'
		    , mFp18(this, 'fp18', "big回転速度率", 0.1f, 0.0f, 1.0f)            // 'big rotation speed rate'
		    , mFp19(this, 'fp19', "big回転最大速度", 10.0f, 0.0f, 360.0f)       // 'big rotation maximum speed'
		    , mFp20(this, 'fp20', "big攻撃可能\角度", 15.0f, 0.0f, 180.0f)      // 'big attack angle'
		    , mFp21(this, 'fp21', "big攻撃ヒット範囲", 70.0f, 0.0f, 1000.0f)    // 'big attack hit range'
		    , mIp01(this, 'ip01', "潜伏までの期間", 500, 0, 2000)               // 'period of incubation'
		    , mIp02(this, 'ip02', "出現までの期間", 200, 0, 1000)               // 'time to appearance'
		    , mIp03(this, 'ip03', "爆弾ダメージ時間", 10, 0, 200)               // 'bomb damage time'
		{
		}

		Parm<f32> mFp01; // _804
		Parm<f32> mFp02; // _82C
		Parm<f32> mFp03; // _854
		Parm<f32> mFp04; // _87C
		Parm<f32> mFp05; // _8A4
		Parm<f32> mFp06; // _8CC
		Parm<f32> mFp07; // _8F4
		Parm<f32> mFp08; // _91C
		Parm<f32> mFp09; // _944
		Parm<f32> mFp10; // _96C
		Parm<f32> mFp11; // _994
		Parm<f32> mFp12; // _9BC
		Parm<f32> mFp13; // _9E4
		Parm<f32> mFp14; // _A0C
		Parm<f32> mFp15; // _A34
		Parm<f32> mFp16; // _A5C
		Parm<f32> mFp17; // _A84
		Parm<f32> mFp18; // _AAC
		Parm<f32> mFp19; // _AD4
		Parm<f32> mFp20; // _AFC
		Parm<f32> mFp21; // _B24
		Parm<int> mIp01; // _B4C
		Parm<int> mIp02; // _B74
		Parm<int> mIp03; // _B9C
	};

	Parms()
	{
		_BC8 = 0;
		_BC9 = 0;
		_BCA = 1;
		_BCB = 1;
		_BCC = 0;
		_BD0 = 3.0f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms; // _7F8
	u8 _BC8;                  // _BC8
	u8 _BC9;                  // _BC9
	u8 _BCA;                  // _BCA
	u8 _BCB;                  // _BCB
	u8 _BCC;                  // _BCC
	f32 _BD0;                 // _BD0
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                            // _30
	virtual void onKill(CreatureKillArg* settings);                            // _34
	virtual void doSimulation(f32);                                            // _4C
	virtual void doDirectDraw(Graphics& gfx);                                  // _50
	virtual void inWaterCallback(WaterBox* wb);                                // _84
	virtual void collisionCallback(CollEvent& event);                          // _EC
	virtual void getShadowParam(ShadowParam& settings);                        // _134
	virtual ~Obj() { }                                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                        // _1C0
	virtual void doUpdate();                                                   // _1CC
	virtual void doAnimationUpdateAnimator();                                  // _1D8
	virtual void doAnimationCullingOff();                                      // _1DC
	virtual void doDebugDraw(Graphics& gfx);                                   // _1EC
	virtual void setParameters();                                              // _228
	virtual void initMouthSlots();                                             // _22C
	virtual void initWalkSmokeEffect();                                        // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();                     // _234
	virtual MouthSlots* getMouthSlots();                                       // _25C (weak)
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual bool bombCallBack(Creature*, Vector3f&, f32);                      // _294
	virtual void doStartStoneState();                                          // _2A4
	virtual void doFinishStoneState();                                         // _2A8
	virtual void startCarcassMotion();                                         // _2C4
	virtual void wallCallback(const MoveInfo& info);                           // _2E8
	virtual void doStartMovie();                                               // _2F0
	virtual void doEndMovie();                                                 // _2F4
	virtual void setFSM(FSM* fsm);                                             // _2F8 (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*) { }                 // _1C4 (weak)
	virtual void applyImpulse(Vector3f&, Vector3f&) { }                        // _18C (weak)
	virtual void createEfxHamon()                                              // _250 (weak)
	{
		if (getStateID() != KINGCHAPPY_HideWait) {
			EnemyBase::createEfxHamon();
		}
	}
	virtual void updateEfxHamon() // _24C (weak)
	{
		if (getStateID() == KINGCHAPPY_HideWait) {
			fadeEfxHamon();
		} else {
			EnemyBase::updateEfxHamon();
		}
	}
	virtual bool isUnderground() // _D0 (weak)
	{
		return isConstrained();
	}
	virtual f32 getCellRadius() // _58 (weak)
	{
		return mScaleModifier * C_PARMS->mGeneral.mCellRadius.mValue;
	}
	virtual f32 getBodyRadius() // _54 (weak)
	{
		return mScaleModifier * C_PARMS->mGeneral.mPikminDamageRadius.mValue;
	}
	virtual bool pressCallBack(Creature* creature, f32 damage, CollPart* collpart) // _27C (weak)
	{
		damageCallBack(creature, damage, collpart);
		return false;
	}
	virtual bool eatWhitePikminCallBack(Creature* creature, f32 damage) // _298 (weak)
	{
		EnemyBase::eatWhitePikminCallBack(creature, C_PROPERPARMS.mFp14.mValue);
	}
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_KingChappy;
	}
	virtual f32 getDownSmokeScale() { return 1.3f; } // _2EC (weak)
	//////////////// VTABLE END

	int eatBomb();
	int getPikminInMouth(bool);
	void getTonguePosVel(Vector3f&, Vector3f&);
	void setNextGoal();
	void searchTarget();
	bool isOutOfTerritory(f32);
	bool forceTransit(int);
	void requestTransit(int);
	void walkFunc();
	f32 turnFunc(f32);
	bool isReachToGoal(f32);
	void checkAttack(bool);
	void checkFlick(bool);
	void checkDead(bool);
	void checkTurn(bool);
	void startMotionSelf(int, SysShape::MotionListener*);
	void endBlendAnimation();
	void leftFootMtxCalc();
	void rightFootMtxCalc();
	void footMtxCalc(f32 (*)[4], Vector3f*, f32*);
	void resetFootPos();
	void fadeAllEffect();
	void createEffect(int);
	void fadeEffect(int);
	void createBounceEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Vector3f mGoalPosition;              // _2BC, initialised as mHomePosition
	MouthSlots mMouthSlots;              // _2C8
	SysShape::Joint* mMouthJoint1;       // _2D0, 'kuti'
	SysShape::Joint* mBodyJoint;         // _2D4, 'kosijnt'
	SysShape::Joint* mTongueJoint1;      // _2D8, 'bero6'
	SysShape::Joint* mTongueJoint2;      // _2DC, 'bero5'
	SysShape::Joint* mMouthJoint2;       // _2E0, 'kuti'
	u8 _2E4;                             // _2E4
	StateID mNextState;                  // _2E8
	u8 _2EC;                             // _2EC
	int _2F0;                            // _2F0
	Vector3f _2F4;                       // _2F4, initialised as mHomePosition (but y = 0.0f)
	Vector3f _300;                       // _300
	int _30C;                            // _30C
	u16 mLFootJointIndex;                // _310, index for 'asiL'
	Vector3f mLFootPosition;             // _314
	f32 _320;                            // _320
	u16 mRFootJointIndex;                // _324, index for 'asiR'
	Vector3f mRFootPosition;             // _328
	f32 _334;                            // _334
	u8 _338;                             // _338
	u8 _339[0x3];                        // _339, padding probably
	u16* mJointIndices;                  // _33C, indices for world matrices/joints?
	WaterBox* _340;                      // _340, nearest water?? maybe??
	WalkSmokeEffect::Mgr mWalkSmokeMgr;  // _344
	FSM* mFsm;                           // _34C
	efx::TKchYodare* mEfxYodare;         // _350
	efx::TKchDiveSand* mEfxDiveSand;     // _354
	efx::TKchDiveWat* mEfxDiveWater;     // _358
	efx::TKchCryAB* mEfxCryAB;           // _35C
	efx::TKchCryInd* mEfxCryInd;         // _360
	efx::TKchSmokeHana* mEfxSmoke;       // _364
	efx::TKchAttackYodare* mEfxAttack;   // _368
	efx::TKchDeadYodare* mEfxDeadYodare; // _36C
	efx::TKchDeadHana* mEfxDeadHana;     // _370
	efx::TEnemyHamonChasePos* _374;      // _374
	efx::TEnemyHamonChasePos* _378;      // _378
	Vector3f _37C;                       // _37C
	Vector3f _388;                       // _388
	u8 _394;                             // _394
	                                     // _398 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&); // _70
	virtual void doAlloc();                   // _A8
	virtual SysShape::Model* createModel();   // _B0
	virtual EnemyBase* getEnemy(int index)    // _A4 (weak)
	{
		return &mObj[index];
	}
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_KingChappy;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	//////////////// VTABLE END

	void requestState(Obj*, int);

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44
};

enum AnimID {
	KINGANIM_Attack   = 0,
	KINGANIM_WarCry   = 1, // 'cry'
	KINGANIM_Damage   = 2,
	KINGANIM_Dead     = 3,
	KINGANIM_Dive     = 4,
	KINGANIM_Flick    = 5,
	KINGANIM_Move     = 6,  // 'move1'
	KINGANIM_Swallow  = 7,  // 'type1'
	KINGANIM_Eat      = 8,  // 'type2'
	KINGANIM_Appear   = 9,  // 'type3'
	KINGANIM_HideWait = 10, // 'wait2'
	KINGANIM_Turn     = 11, // 'waitact1'
	KINGANIM_Caution  = 12, // 'waitact2'
	KINGANIM_Carry    = 13,
	KINGANIM_AnimCount, // 14
};

struct ProperAnimator : public EnemyBlendAnimatorBase {
	virtual ~ProperAnimator() { } // _08 (weak)

	// _00      = VTBL
	// _00-_60  = EnemyBlendAnimatorBase
	SysShape::Animator mSpecificAnimator; // _60
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct State : public EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear : public State {
	StateAppear(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 _10; // _10
};

struct StateAttack : public State {
	StateAttack(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10
	int _14; // _14
	int _18; // _18
	u8 _1C;  // _1C
};

struct StateCaution : public State {
	StateCaution(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDamage : public State {
	StateDamage(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10, unknown
};

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateEatArg : public StateArg {
	u8 _00; // _00, corresponds to _10 in StateEat
};

struct StateEat : public State {
	StateEat(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 _10; // _10, unknown
};

struct StateFlick : public State {
	StateFlick(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateHide : public State {
	StateHide(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateHideWait : public State {
	StateHideWait(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10, unknown
	u8 _14;  // _14
};

struct StateSwallow : public State {
	StateSwallow(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateTurn : public State {
	StateTurn(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWalk : public State {
	StateWalk(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int _10; // _10, unknown
	u32 _14; // _14, unknown
};

struct StateWarCry : public State {
	StateWarCry(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////

extern Obj* curK;
} // namespace KingChappy
} // namespace Game

#endif
