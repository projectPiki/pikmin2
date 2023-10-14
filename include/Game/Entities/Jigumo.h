#ifndef _GAME_ENTITIES_JIGUMO_H
#define _GAME_ENTITIES_JIGUMO_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Piki.h"
#include "efx/TJgm.h"
#include "efx/TImo.h"
#include "Condition.h"
#include "Collinfo.h"
#include "Quat.h"

/**
 * --Header for Hermit Crawmad (Jigumo)--
 */

namespace Game {
namespace Jigumo {

struct FSM;

enum StateID {
	JIGUMO_NULL    = -1,
	JIGUMO_Wait    = 0,
	JIGUMO_Appear  = 1,
	JIGUMO_Hide    = 2,
	JIGUMO_Dead    = 3,
	JIGUMO_Attack  = 4,
	JIGUMO_Miss    = 5,
	JIGUMO_Return  = 6,
	JIGUMO_Carry   = 7,
	JIGUMO_Flick   = 8,
	JIGUMO_Eat     = 9,
	JIGUMO_Search  = 10,
	JIGUMO_SAttack = 11,
	JIGUMO_SMiss   = 12,
	JIGUMO_StateCount,
};

struct ConditionHeightCheckPiki : public Condition<Piki> {
	inline ConditionHeightCheckPiki(EnemyBase* enemy)
	    : mCreature(enemy)
	{
		mMinHeight = enemy->getPosition().y - 25.0f;
		mMaxHeight = enemy->getPosition().y + 10.0f;
	}

	virtual bool satisfy(Piki* piki) // _08 (weak)
	{
		if (!piki->isStickTo()) {
			bool check       = false;
			Creature* jigumo = mCreature;

			if (piki->isPikmin() && piki->mSticker != jigumo && !piki->isStickToMouth()) {
				check = true;
			}

			if (check) {
				Vector3f pikiPos = piki->getPosition();
				if (pikiPos.y > mMaxHeight) {
					return false;
				}

				if (pikiPos.y < mMinHeight) {
					return false;
				}

				return true;
			}
		}
		return false;
	}

	// _00 VTBL
	EnemyBase* mCreature; // _04
	f32 mMinHeight;       // _08
	f32 mMaxHeight;       // _0C
};

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                            // _30
	virtual void onKill(CreatureKillArg* settings);                            // _34
	virtual void doDirectDraw(Graphics& gfx);                                  // _50
	virtual f32 getBodyRadius();                                               // _54 (weak)
	virtual f32 getCellRadius();                                               // _58 (weak)
	virtual void inWaterCallback(WaterBox* wb);                                // _84
	virtual void outWaterCallback();                                           // _88
	virtual bool isLivingThing();                                              // _D4
	virtual void collisionCallback(CollEvent& event);                          // _EC
	virtual void getShadowParam(ShadowParam& settings);                        // _134
	virtual bool needShadow();                                                 // _138
	virtual Vector3f getGoalPos() { return mGoalPosition; }                    // _198 (weak)
	virtual ~Obj() { }                                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                                        // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase* params);             // _1C4 (weak)
	virtual void doUpdate();                                                   // _1CC
	virtual void doAnimationCullingOff();                                      // _1DC
	virtual void doDebugDraw(Graphics& gfx);                                   // _1EC
	virtual void doSimulationGround(f32);                                      // _1F4
	virtual Vector3f getOffsetForMapCollision();                               // _224
	virtual void setParameters();                                              // _228
	virtual void initMouthSlots();                                             // _22C
	virtual void createEfxHamon();                                             // _250 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();                        // _258 (weak)
	virtual MouthSlots* getMouthSlots();                                       // _25C (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);                         // _260
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part); // _278
	virtual bool pressCallBack(Creature*, f32, CollPart*);                     // _27C
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor);       // _28C
	virtual bool eatWhitePikminCallBack(Creature* source, f32 damage);         // _298 (weak)
	virtual void doStartStoneState();                                          // _2A4
	virtual void doFinishStoneState();                                         // _2A8
	virtual void startCarcassMotion();                                         // _2C4
	virtual f32 getDownSmokeScale();                                           // _2EC (weak)
	virtual void doStartMovie();                                               // _2F0
	virtual void doEndMovie();                                                 // _2F4
	virtual void setFSM(FSM* fsm);                                             // _2F8 (weak)
	//////////////// VTABLE END

	f32 getGoalDist();
	void walkFunc();
	void calcBaseTrMatrix();
	void revisionAnimPos(f32);
	void getWalkSpeed();
	void velocityControl();
	FakePiki* getNearestPikiOrNavi(f32, f32);
	void effectStart();
	void effectStop();
	void boundEffect();
	void eatWaterEffect();
	void killNest();
	void mouthScaleMtxCalc();

	// UNUSED
	void appearEffectStart();
	void appearEffectStop();
	bool isUnitePos();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	Vector3f _2BC;                 // _2BC
	Vector3f mGoalPosition;        // _2C8
	StateID mNextState;            // _2D4
	MouthSlots mMouthSlots;        // _2D8
	u8 _2E0[0x8];                  // _2E0
	u8 _2E8;                       // _2E8, unknown
	u8 _2E9;                       // _2E9, unknown
	f32 _2EC;                      // _2EC
	u8 _2F0[0x20];                 // _2F0, unknown
	Quat _310;                     // _310
	Quat _320;                     // _320
	u8 _330[0x14];                 // _330, unknown
	f32 _344;                      // _344
	u8 _348[0x18];                 // _348, unknown
	u16 _360;                      // _360
	Vector3f _364;                 // _364
	efx::TJgmAttack* mEfxAttack;   // _370
	efx::TJgmAttackW* mEfxAttackW; // _374
	efx::TJgmBack* mEfxBack;       // _378
	efx::TJgmBackW* mEfxBackW;     // _37C
	efx::TImoSmoke* mEfxSmoke;     // _380
	u8 _384;                       // _384, unknown
	u8 _385;                       // _385, unknown
	FSM* mFsm;                     // _388
	                               // _38C = PelletView
};

extern Obj* curJ;

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);       // _70
	virtual void doAlloc();                         // _A8
	virtual void loadModelData();                   // _C8
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x00240030);
	}
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Jigumo;
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
		    , mFp01(this, 'fp01', "運搬速度", 100.0f, 0.0f, 300.0f)    // 'transport speed'
		    , mFp02(this, 'fp02', "戻り速度", 100.0f, 0.0f, 300.0f)    // 'return speed'
		    , mFp03(this, 'fp03', "スケール最小", 1.0f, 0.0f, 3.0f)    // 'scale minimum'
		    , mFp04(this, 'fp04', "スケール最大", 1.2f, 0.0f, 3.0f)    // 'scale maximum'
		    , mFp05(this, 'fp05', "白ピクミン", 300.0f, 0.0f, 1000.0f) // 'white pikmin'
		    , mIp01(this, 'ip01', "隠れている時間", 30, 0, 120)        // 'hiding time'
		{
		}

		Parm<f32> mFp01; // _804
		Parm<f32> mFp02; // _82C
		Parm<f32> mFp03; // _854
		Parm<f32> mFp04; // _87C
		Parm<f32> mFp05; // _8A4
		Parm<int> mIp01; // _8CC
	};

	Parms()
	{
		_8F8 = 1;
		_8F9 = 1;
		_8FA = 1;
		_8FB = 1;
		_8FC = 0;
		_8FD = 1;
		_8FE = 0;
		_900 = 0.75f;
		_904 = 20.0f;
		_908 = 0.05f;
		_90C = 30.0f;
		_910 = 8;
		_914 = 35.0f;
		_918 = 0.15f;
		_91C = 1.0f;
		_920 = 0.15f;
		_924 = 13.0f;
		_928 = 18.0f;
		_92C = 1.4f;
		_930 = 20.0f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mGeneral.read(stream);
		mProperParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms mProperParms; // _7F8
	u8 _8F8;                  // _8F8, unknown
	u8 _8F9;                  // _8F9, unknown
	u8 _8FA;                  // _8FA, unknown
	u8 _8FB;                  // _8FB, unknown
	u8 _8FC;                  // _8FC, unknown
	u8 _8FD;                  // _8FD, unknown
	u8 _8FE;                  // _8FE, unknown
	f32 _900;                 // _900
	f32 _904;                 // _904
	f32 _908;                 // _908
	f32 _90C;                 // _90C
	u8 _910;                  // _910
	f32 _914;                 // _914
	f32 _918;                 // _918
	f32 _91C;                 // _91C
	f32 _920;                 // _920
	f32 _924;                 // _924
	f32 _928;                 // _928
	f32 _92C;                 // _92C
	f32 _930;                 // _930
};

enum AnimID {
	JIGUMOANIM_Appear   = 0,  // 'appear1'
	JIGUMOANIM_Attack   = 1,  // 'attack1'
	JIGUMOANIM_BackRun  = 2,  // 'backrun1', while carrying piki
	JIGUMOANIM_BackWait = 3,  // 'backwait1', while carrying piki
	JIGUMOANIM_Dead     = 4,  // 'dead1'
	JIGUMOANIM_Eat      = 5,  // 'dive1'
	JIGUMOANIM_Flick    = 6,  // 'flick1'
	JIGUMOANIM_Hide     = 7,  // 'hide1', no piki
	JIGUMOANIM_RDive    = 8,  // 'rdive1', after eating
	JIGUMOANIM_RFlick   = 9,  // 'rflick1', while carrying piki
	JIGUMOANIM_RunAway  = 10, // 'runaway1', no piki
	JIGUMOANIM_SAttack  = 11, // 'sattack1'
	JIGUMOANIM_SMiss    = 12, // 'smiss1'
	JIGUMOANIM_Turn     = 13, // 'turn1'
	JIGUMOANIM_Carry    = 14, // 'type5', carcass (not carrying piki)
	JIGUMOANIM_Wait     = 15, // 'wait1'
	JIGUMOANIM_Miss     = 16, // 'to_runaway1'
	JIGUMOANIM_AnimCount,     // 17
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return mAnimator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator mAnimator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
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

struct StateAppear : public State {
	StateAppear(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	int mAppearTimer; // _10, unknown
};

struct StateAttack : public State {
	StateAttack(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 _10; // _10
	u8 _11; // _11
};

struct StateCarry : public State {
	StateCarry(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateEat : public State {
	StateEat(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFlick : public State {
	StateFlick(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateHide : public State {
	StateHide(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMiss : public State {
	StateMiss(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 _10; // _10
};

struct StateReturn : public State {
	StateReturn(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateSAttack : public State {
	StateSAttack(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u8 _10; // _10
	u8 _11; // _11
};

struct StateSearch : public State {
	StateSearch(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
	u32 _10; // _10, unknown
};

struct StateSMiss : public State {
	StateSMiss(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Jigumo
} // namespace Game

#endif
