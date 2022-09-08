#ifndef _GAME_ENTITIES_KOCHAPPYBASE_H
#define _GAME_ENTITIES_KOCHAPPYBASE_H

#include "CollInfo.h"

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/cellPyramid.h"
#include "Game/Creature.h"
#include "Game/PelletView.h"
#include "Game/EnemyBase.h"
#include "Game/shadowMgr.h"
#include "Game/WalkSmokeEffect.h"

#include "SysShape/Joint.h"

namespace Game {
namespace KochappyBase {
struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};
	virtual void setAnimMgr(SysShape::AnimMgr*);
	virtual SysShape::Animator& getAnimator() { return m_animator; };
	virtual SysShape::Animator& getAnimator(int);

	SysShape::Animator m_animator; // _10
};

struct FSM {
};

struct Parms : public EnemyParmsBase {
	Parms();

	virtual void read(Stream& input);

	u8 _7F8[0x88]; // _7F8
};

struct Obj : public EnemyBase {

	Obj();

	virtual void onInit(CreatureInitArg*);                   // _30
	virtual void doDirectDraw(Graphics&);                    // _50
	virtual void bounceCallback(Sys::Triangle*);             // _E8
	virtual void getShadowParam(ShadowParam&);               // _134
	virtual ~Obj() { }                                       // _1BC (weak)
	virtual void birth(Vector3f&, float);                    // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4
	virtual void doUpdate();                                 // _1C8
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual Vector3f getOffsetForMapCollision();             // _224
	virtual void initMouthSlots();                           // _22C
	virtual void initWalkSmokeEffect();                      // _230
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();   // _234
	virtual MouthSlots* getMouthSlots();                     // _25C
	virtual bool pressCallBack(Creature*, float, CollPart*); // _27C
	virtual void doStartStoneState();                        // _2A4
	virtual void doFinishStoneState();                       // _2A8
	virtual void startCarcassMotion();                       // _2C4
	virtual float getDownSmokeScale();                       // _2EC
	virtual void setFSM(FSM*);                               // _2F8
	virtual void setAnimationSpeed(float);                   // _2FC
	virtual void resetEnemyNonStone();                       // _300
	virtual void setEnemyNonStone();                         // _304

	// _00 VTBL
	FSM* _2BC;                                 // _2BC
	MouthSlots m_mouthSlots;                   // _2C0
	SysShape::Joint* m_shadowJoint;            // _2C8
	float _2CC;                                // _2CC
	WalkSmokeEffect::Mgr m_walkSmokeEffectMgr; // _2D0
};
} // namespace KochappyBase

} // namespace Game

#endif
