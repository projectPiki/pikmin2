#ifndef _GAME_ENTITIES_MINIHOUDAI_H
#define _GAME_ENTITIES_MINIHOUDAI_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/WalkSmokeEffect.h"

namespace efx {
struct TChibiCharge;
struct TChibiDeadLight;
} // namespace efx

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
	virtual void onInit(CreatureInitArg*);                    // _30
	virtual void onKill(CreatureKillArg*);                    // _34
	virtual void doDirectDraw(Graphics&);                     // _50
	virtual void getShadowParam(ShadowParam&);                // _134
	virtual ~Obj();                                           // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);   // _1C4
	virtual void doUpdate();                                  // _1CC
	virtual void doUpdateCommon();                            // _1D0
	virtual void doUpdateCarcass();                           // _1D4
	virtual void doAnimationCullingOff();                     // _1DC
	virtual void doDebugDraw(Graphics&);                      // _1EC
	virtual void initWalkSmokeEffect();                       // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();    // _234
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();       // _258 (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);        // _260
	virtual bool damageCallBack(Creature*, float, CollPart*); // _278
	virtual void doStartStoneState();                         // _2A4
	virtual void doFinishStoneState();                        // _2A8
	virtual void doStartEarthquakeFitState();                 // _2B8
	virtual void doFinishEarthquakeFitState();                // _2BC
	virtual void startCarcassMotion();                        // _2C4
	virtual bool doBecomeCarcass();                           // _2D0
	virtual void doStartWaitingBirthTypeDrop();               // _2E0
	virtual void doFinishWaitingBirthTypeDrop();              // _2E4
	virtual float getDownSmokeScale();                        // _2EC (weak)
	virtual void doStartMovie();                              // _2F0
	virtual void doEndMovie();                                // _2F4
	virtual void setFSM(FSM*);                                // _2F8
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
	void createDownEffect(float);
	void startChargeEffect();
	void finishChargeEffect();
	void createDeadLightEffect();
	void createDeadBombEmitEffect();
	void effectDrawOn();
	void effectDrawOff();

	// _00 		= VTBL
	// _00-_2B8	= EnemyBase
	FSM* m_houdaiFSM;                     // _2BC
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
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual J3DModelData* loadModelData();              // _C8
	virtual void loadAnimData();                        // _CC
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                     // _08
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _10
	virtual SysShape::Animator& getAnimator(int);                     // _14

	SysShape::Animator m_animator; // _10
};

} // namespace MiniHoudai

namespace FixMiniHoudai {
struct Obj : public MiniHoudai::Obj {
	Obj();

	virtual ~Obj();                                     // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)

	// _00		= VTBL
	// _00-_308	= MiniHoudai::Obj
};

struct Mgr : public MiniHoudai::Mgr {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)

	// _00 		= VTBL
	// _00-_44	= MiniHoudai::Mgr
	Obj* m_obj; // _44, probably
};
} // namespace FixMiniHoudai

namespace NormMiniHoudai {
struct Obj : public MiniHoudai::Obj {
	Obj();

	virtual ~Obj();                                     // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)

	// _00		= VTBL
	// _00-_308	= MiniHoudai::Obj
};

struct Mgr : public MiniHoudai::Mgr {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)

	// _00 		= VTBL
	// _00-_44	= MiniHoudai::Mgr
	Obj* m_obj; // _44
};
} // namespace NormMiniHoudai
} // namespace Game

#endif
