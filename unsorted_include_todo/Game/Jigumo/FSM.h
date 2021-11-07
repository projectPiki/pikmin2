#ifndef _GAME_JIGUMO_FSM_H
#define _GAME_JIGUMO_FSM_H

namespace Game {
struct EnemyStateMachine {
	virtual void _00() = 0;                                // _00
	virtual void start(EnemyBase*, int, StateArg*);        // _04
	virtual void exec(EnemyBase*);                         // _08
	virtual void transit(EnemyBase*, int, StateArg*);      // _0C
	virtual void doDirectDraw(EnemyBase*, Graphics&);      // _10
	virtual void getCurrState(EnemyBase*);                 // _14
	virtual void setCurrState(EnemyBase*, EnemyFSMState*); // _18

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace Jigumo {
	struct FSM : public EnemyStateMachine {
		virtual void init(EnemyBase*);                         // _00
		virtual void start(EnemyBase*, int, StateArg*);        // _04
		virtual void exec(EnemyBase*);                         // _08
		virtual void transit(EnemyBase*, int, StateArg*);      // _0C
		virtual void doDirectDraw(EnemyBase*, Graphics&);      // _10
		virtual void getCurrState(EnemyBase*);                 // _14
		virtual void setCurrState(EnemyBase*, EnemyFSMState*); // _18
		virtual void _1C() = 0;                                // _1C

		// _00 VTBL
	};
} // namespace Jigumo
} // namespace Game

#endif
