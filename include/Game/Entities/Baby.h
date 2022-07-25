#ifndef _GAME_ENTITIES_BABY_H
#define _GAME_ENTITIES_BABY_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"

namespace Game {
namespace Baby {
/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct State : public EnemyFSMState { };

struct StatePress : public EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateMove : public EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateDead : public EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateBorn : public EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct StateAttack : public EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08
};
/////////////////////////////////////////////////////////////////

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                     // _00
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                  // _04
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _08
	virtual SysShape::Animator& getAnimator(int idx);                 // _0C

	SysShape::Animator m_animator; // _10
};

struct Parms : public EnemyParmsBase {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};

struct Mgr : public EnemyMgrBase {
	virtual ~Mgr();                                     // _58
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC

	Mgr(int, unsigned char);

	// _00 VTBL
};
} // namespace Baby
} // namespace Game

#endif
