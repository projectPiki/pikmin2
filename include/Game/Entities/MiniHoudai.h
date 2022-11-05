#ifndef _GAME_ENTITIES_MINIHOUDAI_H
#define _GAME_ENTITIES_MINIHOUDAI_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/WalkSmokeEffect.h"
#include "efx/TChibi.h"

/**
 * --Header for Gatling Groinks (MiniHoudai)--
 * MiniHoudai 		= Groink Base Class
 * NormMiniHoudai	= Gatling Groink (Roaming)
 * FixMiniHoudai	= Tower Groink (Fixed)
 */

struct J3DJoint;

namespace Game {
struct WayPoint;

namespace MiniHoudai {
enum MiniHoudaiStateID {
	DEAD      = 0,
	REBIRTH   = 1,
	LOST      = 2,
	ATTACK    = 3,
	FLICK     = 4,
	TURN      = 5,
	TURN_HOME = 6,
	TURN_PATH = 7,
	WALK      = 8,
	WALK_HOME = 9,
	WALK_PATH = 10,
};

struct FSM;
struct MiniHoudaiShotGunMgr;

struct Obj : public EnemyBase {
	Obj();

	////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);         // _30
	virtual void onKill(CreatureKillArg* settings);         // _34
	virtual void doDirectDraw(Graphics& gfx);               // _50
	virtual void getShadowParam(ShadowParam& settings);     // _134
	virtual ~Obj() { }                                      // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*); // _1C4
	virtual void doUpdate();                                // _1CC
	virtual void doUpdateCommon();                          // _1D0
	virtual void doUpdateCarcass();                         // _1D4
	virtual void doAnimationCullingOff();                   // _1DC
	virtual void doDebugDraw(Graphics&);                    // _1EC
	virtual void initWalkSmokeEffect();                     // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();  // _234
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();     // _258 (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);      // _260
	virtual bool damageCallBack(Creature*, f32, CollPart*); // _278
	virtual void doStartStoneState();                       // _2A4
	virtual void doFinishStoneState();                      // _2A8
	virtual void doStartEarthquakeFitState();               // _2B8
	virtual void doFinishEarthquakeFitState();              // _2BC
	virtual void startCarcassMotion();                      // _2C4
	virtual bool doBecomeCarcass();                         // _2D0
	virtual void doStartWaitingBirthTypeDrop();             // _2E0
	virtual void doFinishWaitingBirthTypeDrop();            // _2E4
	virtual float getDownSmokeScale();                      // _2EC (weak)
	virtual void doStartMovie();                            // _2F0
	virtual void doEndMovie();                              // _2F4
	virtual void setFSM(FSM*);                              // _2F8
	////////// VTABLE END

	void updateCaution();
	void getViewAngle();
	void resetWayPoint();
	void setNearestWayPoint();
	void setLinkWayPoint();
	void getSearchedTarget();
	void updateTargetDistance();
	void updateHomePosition();
	void isAttackableTarget();
	void createShotGun();
	void setupShotGun();
	void resetShotGunCallBack();
	void setShotGunCallBack();
	void doUpdateShotGun();
	void doUpdateCommonShotGun();
	void startShotGunRotation();
	void finishShotGunRotation();
	void isShotGunRotation();
	void isShotGunLockOn();
	void isFinishShotGun();
	void emitShotGun();
	void setShotGunTargetPosition();
	void forceFinishShotGun();
	void createEffect();
	void setupEffect();
	void createSmokeSmallEffect(bool);
	void createSmokeLargeEffect();
	void createDownEffect(f32);
	void startChargeEffect();
	void finishChargeEffect();
	void createDeadLightEffect();
	void createDeadBombEmitEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2B8	= EnemyBase
	FSM* m_FSM;                           // _2BC
	WalkSmokeEffect::Mgr m_walkSmokeMgr;  // _2C0
	float _2C8;                           // _2C8, caution?
	float _2CC;                           // _2CC
	float _2D0;                           // _2D0
	MiniHoudaiStateID m_houdaiStateID;    // _2D4
	Vector3f m_targetPosition;            // _2D8
	Vector3f _2E4;                        // _2E4, shotgun target distance maybe?
	WayPoint* _2F0;                       // _2F0
	WayPoint* _2F4;                       // _2F4
	MiniHoudaiShotGunMgr* m_shotgunMgr;   // _2F8
	u8 _2FC[0x4];                         // _2FC, unknown
	efx::TChibiCharge* m_efxCharge;       // _300
	efx::TChibiDeadLight* m_efxDeadLight; // _304
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void loadModelData();                      // _C8
	virtual void loadAnimData();                       // _CC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_MiniHoudai;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x01240030);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		inline ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp11(this, 'fp11', "éÄñS Å` ÉQÅ[ÉWèoåª", 30.0f, 1.0f, 500.0f) // 'death ~ appearance of gauge'
		    , m_fp12(this, 'fp12', "ÉQÅ[ÉWèoåª Å` ïúäà", 10.0f, 1.0f, 500.0f) // 'appearance of gauge ~ resurrection'
		{
		}

		Parm<f32> m_fp11; // _804
		Parm<f32> m_fp12; // _82C
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
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

struct MiniHoudaiShotGunNode : public CNode {
	virtual ~MiniHoudaiShotGunNode(); // _08 (weak)

	void update();

	// _00		= VTBL
	// _00-_18 	= CNode
	u8 _18;                       // _18
	Obj* m_owner;                 // _1C
	efx::TChibiShell* m_efxShell; // _20
	Vector3f _24;                 // _24
	Vector3f _30;                 // _30
};

struct MiniHoudaiShotGunMgr {
	MiniHoudaiShotGunMgr(Obj*);

	void setupShotGun();
	void resetCallBack();
	void setCallBack();
	void startRotation();
	void finishRotation();
	bool isShotGunRotation();
	bool isShotGunLockOn();
	bool isFinishShotGun();
	void setShotGunTarget(Vector3f&);
	void emitShotGun();
	void doUpdate();
	void doUpdateCommon();
	void forceFinishShotGun();
	Vector3f getShotGunPosition();
	void searchShotGunRotation();
	void returnShotGunRotation();
	void rotateVertical(J3DJoint*);
	void effectDrawOn();
	void effectDrawOff();

	Obj* m_owner;               // _00
	u8 _04[0xC];                // _04, unknown
	Matrixf* _10;               // _10
	Vector3f m_targetPosition;  // _14
	u8 _20[0xC];                // _20, unknown
	MiniHoudaiShotGunNode* _2C; // _2C
	MiniHoudaiShotGunNode* _30; // _30
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
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

struct StateTurnHome : public State {
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

struct StateWalkHome : public State {
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
} // namespace MiniHoudai

/* Tower Groink */
namespace FixMiniHoudai {
struct Obj : public MiniHoudai::Obj {
	Obj();

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_FminiHoudai;
	}

	// _00		= VTBL
	// _00-_308	= MiniHoudai::Obj
};

struct Mgr : public MiniHoudai::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_FminiHoudai;
	}

	// _00 		= VTBL
	// _00-_44	= MiniHoudai::Mgr
	Obj* m_obj; // _44, probably
};
} // namespace FixMiniHoudai

/* Roaming Groink */
namespace NormMiniHoudai {
struct Obj : public MiniHoudai::Obj {
	Obj();

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_MiniHoudai;
	}

	// _00		= VTBL
	// _00-_308	= MiniHoudai::Obj
};

struct Mgr : public MiniHoudai::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_MiniHoudai;
	}

	// _00 		= VTBL
	// _00-_44	= MiniHoudai::Mgr
	Obj* m_obj; // _44
};
} // namespace NormMiniHoudai
} // namespace Game

#endif
