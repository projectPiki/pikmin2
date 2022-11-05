#ifndef _GAME_ENTITIES_SNAKECROW_H
#define _GAME_ENTITIES_SNAKECROW_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/JointFuncs.h"
#include "Game/EnemyBase.h"
#include "Game/SnakeJointMgr.h"
#include "efx/THebi.h"
#include "SysShape/Joint.h"
#include "Collinfo.h"

/**
 * --Header for Burrowing Snagret (SnakeCrow)--
 * Note: Separate header for Pileated Snagret (SnakeWhole)
 */

namespace Game {
struct SnakeCrowSphereShadowNode : public JointShadowNode {
	virtual ~SnakeCrowSphereShadowNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

struct SnakeCrowTubeShadowNode : public JointShadowNode {
	virtual ~SnakeCrowTubeShadowNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00		= VTBL
	// _00-_24	= JointShadowNode
};

namespace SnakeCrow {
struct SnakeCrowShadowMgr;
struct FSM;
struct Parms;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void constructor();                             // _2C
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void onKill(CreatureKillArg* settings);         // _34
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void inWaterCallback(WaterBox* wb);             // _84 (weak)
	virtual void outWaterCallback();                        // _88 (weak)
	virtual bool isUnderground();                           // _D0 (weak)
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doUpdateCommon();                          // _1D0
	virtual void doAnimationUpdateAnimator();               // _1D8
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void getCommonEffectPos(Vector3f&);             // _204
	virtual void setParameters();                           // _228
	virtual void initMouthSlots();                          // _22C
	virtual void createEfxHamon();                          // _250
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual MouthSlots* getMouthSlots();                    // _25C (weak)
	virtual void getThrowupItemPosition(Vector3f*);         // _268
	virtual void throwupItemInDeathProcedure();             // _270 (weak)
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual f32 getDamageCoeStoneState();                   // _2AC (weak)
	virtual void startCarcassMotion();                      // _2C4
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
	//////////////// VTABLE END

	void appearNearByTarget(Creature*);
	void setAttackPosition();
	Piki* getAttackPiki(int);
	Navi* getAttackNavi(int);
	CollPart* getSwallowSlot(); // might be MouthSlot* or something else
	bool isSwallowPikmin();
	int getStickHeadPikmin();
	void createJointCallBack();
	void setupJointCallBack();
	void doAnimationJointCallBack();
	void finishAnimationJointCallBack();
	void startJointCallBack();
	void returnJointCallBack();
	void finishJointCallBack();
	void setupCollision();
	void lifeIncrement();
	void createShadowSystem();
	void setupShadowSystem();
	void doAnimationShadowSystem();
	void startJointShadow();
	void finishJointShadow();
	void deleteJointShadow();
	void startBossAttackBGM();
	void startBossFlickBGM();
	void updateBossBGM();
	void resetBossAppearBGM();
	void setBossAppearBGM();
	void createEffect();
	void setupEffect();
	void createAppearEffect(int);
	void startRotateEffect();
	void finishRotateEffect();
	void startWaitEffect();
	void finishWaitEffect();
	void createDeadStartEffect();
	void createDeadFinishEffect();
	void createDownHeadEffect(f32);
	void effectDrawOn();
	void effectDrawOff();

	inline Parms* getParms() { return C_PARMS; }

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                 // _2BC
	bool m_isUnderground;       // _2C0
	u8 _2C1;                    // _2C1
	u8 _2C2;                    // _2C2
	f32 m_stateTimer;           // _2C4
	u8 _2C8[0x4];               // _2C8, unknown
	MouthSlots m_mouthSlots;    // _2CC
	int _2D4;                   // _2D4, animation index maybe?
	Vector3f _2D8[5];           // _2D8
	u8 _314[0x8];               // _314, unknown
	efx::THebiRot* m_efxRotate; // _31C
	efx::THebiWait* m_efxWait;  // _320
	efx::THebiDead* m_efxDead;  // _324
	                            // _328 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual void loadModelData();                      // _C8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_SnakeCrow;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x21240030);
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
		    , m_fp01(this, 'fp01', "通常出現率", 0.8f, 0.0f, 1.0f)               // 'normal appearance rate'
		    , m_fp11(this, 'fp11', "潜る迄の時間", 2.0f, 0.0f, 10.0f)            // 'time to dive'
		    , m_fp12(this, 'fp12', "地中での時間", 1.0f, 0.0f, 10.0f)            // 'time in the ground'
		    , m_poisonDamage(this, 'fp21', "白ピクミン", 300.0f, 0.0f, 10000.0f) // 'white pikmin'
		    , m_fp31(this, 'fp31', "Forest 2 Life", 7500.0f, 0.0f, 99999.0f)     // (White Flower Garden Life)
		{
		}

		Parm<f32> m_fp01;         // _804
		Parm<f32> m_fp11;         // _82C
		Parm<f32> m_fp12;         // _854
		Parm<f32> m_poisonDamage; // _87C, fp21
		Parm<f32> m_fp31;         // _8A4
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
	virtual ~ProperAnimator() { }                                     // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                  // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                 // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

struct SnakeCrowShadowMgr {
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	SNAKECROW_Dead      = 0,
	SNAKECROW_Stay      = 1,
	SNAKECROW_Appear1   = 2,
	SNAKECROW_Appear2   = 3,
	SNAKECROW_Disappear = 4,
	SNAKECROW_Wait      = 5,
	SNAKECROW_Attack    = 6,
	SNAKECROW_Eat       = 7,
	SNAKECROW_Struggle  = 8,
	SNAKECROW_Count,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(int stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		m_name = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear1 : public State {
	inline StateAppear1()
	    : State(SNAKECROW_Appear1, "appear1")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear2 : public State {
	inline StateAppear2()
	    : State(SNAKECROW_Appear2, "appear2")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAttack : public State {
	inline StateAttack()
	    : State(SNAKECROW_Attack, "attack")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	inline StateDead()
	    : State(SNAKECROW_Dead, "dead")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDisappear : public State {
	inline StateDisappear()
	    : State(SNAKECROW_Disappear, "disappear")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateEat : public State {
	inline StateEat()
	    : State(SNAKECROW_Eat, "eat")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStay : public State {
	inline StateStay()
	    : State(SNAKECROW_Stay, "stay")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateStruggle : public State {
	inline StateStruggle()
	    : State(SNAKECROW_Struggle, "struggle")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	inline StateWait()
	    : State(SNAKECROW_Wait, "wait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace SnakeCrow
} // namespace Game

#endif
