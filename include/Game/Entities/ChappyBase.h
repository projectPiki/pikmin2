#ifndef _GAME_ENTITIES_CHAPPYBASE_H
#define _GAME_ENTITIES_CHAPPYBASE_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"

namespace Game {
namespace ChappyBase {
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08
};

struct Mgr : public EnemyMgrBase {
	virtual ~Mgr() { }                                  // _58 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadModelData();                       // _C8
	virtual void loadAnimData();                        // _CC

	Mgr(int, unsigned char);
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};
	virtual void setAnimMgr(SysShape::AnimMgr*);
	virtual SysShape::Animator& getAnimator() { return m_animator; };
	virtual SysShape::Animator& getAnimator(int);

	SysShape::Animator m_animator; // _10
};

struct Obj : public EnemyBase {
};
} // namespace ChappyBase
} // namespace Game

#endif
