#ifndef _GAME_ENTITIES_EGG_H
#define _GAME_ENTITIES_EGG_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyBase.h"
#include "efx/TSimple.h"

namespace efx {
struct TEggdown : public TSimple1 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

namespace Game {
namespace Egg {
	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();                    // _00
		virtual void setAnimMgr(SysShape::AnimMgr*);  // _04
		virtual SysShape::Animator& getAnimator();    // _08
		virtual SysShape::Animator& getAnimator(int); // _0C

		SysShape::Animator m_animator; // _10
	};

	struct EggState {
		enum State {
			Wait = 0,
		};
	};

	struct State : public EnemyFSMState {
		inline State(int stateID)
		    : EnemyFSMState(stateID)
		{
		}
	};

	struct StateWait : public State {
		StateWait(int);
		virtual void init(EnemyBase*, StateArg*); // _00
		virtual void exec(EnemyBase*);            // _04

		// _00 VTBL
	};

	struct FSM : public EnemyStateMachine {
		virtual void init(EnemyBase*); // _00
	};
} // namespace Egg
} // namespace Game

#endif
