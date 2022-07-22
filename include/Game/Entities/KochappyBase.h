#ifndef _GAME_ENTITIES_KOCHAPPYBASE_H
#define _GAME_ENTITIES_KOCHAPPYBASE_H

#include "CollInfo.h"

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/CellObject.h"
#include "Game/Creature.h"
#include "Game/EnemyBase.h"
#include "Game/shadowMgr.h"

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

struct FSM { };

struct Parms : public EnemyParmsBase {
	Parms();

	virtual void read(Stream& input);
	
	 // _B40
};

struct Obj : public Creature, virtual EnemyBase {
		virtual void onInit(CreatureInitArg*);                           // _28
		virtual void doDirectDraw(Graphics&);                            // _48
		virtual void bounceCallback(Sys::Triangle*);                     // _E0
		virtual void getShadowParam(ShadowParam&);                       // _12C

		virtual ~Obj();                                                  // _1B4
		virtual void birth(Vector3<float>&, float);                      // _1B8
		virtual void setInitialSetting(EnemyInitialParamBase*);          // _1BC
		virtual void doUpdate();                                         // _1C4
		virtual void doDebugDraw(Graphics&);                             // _1E4
		virtual void getOffsetForMapCollision();                         // _21C
		virtual void initMouthSlots();                                   // _224
		virtual void initWalkSmokeEffect();                              // _228
		virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr();          // _22C
		virtual MouthSlots* getMouthSlots();                            // _254
		virtual bool pressCallBack(Creature*, float, CollPart*);         // _274
		virtual void doStartStoneState();                                // _29C
		virtual void doFinishStoneState();                               // _2A0
		virtual void startCarcassMotion();                               // _2BC
		virtual float getDownSmokeScale();                                // _2E4
		virtual void setFSM(FSM*);                                       // _2F0
		virtual void setAnimationSpeed(float);                           // _2F4
		virtual void resetEnemyNonStone();                               // _2F8
		virtual void setEnemyNonStone();                                 // _2FC

		// _00 VTBL
		FSM* _2BC; 						// _2BC
	  	MouthSlots m_mouthSlots; 		// _2C0
		SysShape::Joint* m_shadowJoint; // _2C8
		float _2CC;						// _2CC
		Mgr m_walkSmokeEffectMgr; 		// _2D0
		PelletView m_pelletView; 		// _2D8
  };
} // namespace KochappyBase

} // namespace Game

#endif
