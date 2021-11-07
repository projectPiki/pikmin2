#ifndef _GAME_ENEMYBASEFSM_STATEMACHINE_H
#define _GAME_ENEMYBASEFSM_STATEMACHINE_H

namespace Game {
struct EnemyStateMachine {
	virtual void _00() = 0;                           // _00
	virtual void start(EnemyBase*, int, StateArg*);   // _04
	virtual void exec(EnemyBase*);                    // _08
	virtual void transit(EnemyBase*, int, StateArg*); // _0C
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _10

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace EnemyBaseFSM {
	struct StateMachine : public EnemyStateMachine {
		virtual void init(EnemyBase*);                            // _00
		virtual void start(EnemyBase*, int, StateArg*);           // _04
		virtual void exec(EnemyBase*);                            // _08
		virtual void transit(EnemyBase*, int, StateArg*);         // _0C
		virtual void doDirectDraw(EnemyBase*, Graphics&);         // _10
		virtual void getCurrState(EnemyBase*);                    // _14
		virtual void setCurrState(EnemyBase*, EnemyFSMState*);    // _18
		virtual void update(EnemyBase*);                          // _1C
		virtual void entry(EnemyBase*);                           // _20
		virtual void simulation(EnemyBase*, float);               // _24
		virtual void animation(EnemyBase*);                       // _28
		virtual void bounceProcedure(EnemyBase*, Sys::Triangle*); // _2C

		// _00 VTBL
	};
} // namespace EnemyBaseFSM
} // namespace Game

#endif
