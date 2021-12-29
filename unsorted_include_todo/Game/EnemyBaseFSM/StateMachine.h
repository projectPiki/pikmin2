#ifndef _GAME_ENEMYBASEFSM_STATEMACHINE_H
#define _GAME_ENEMYBASEFSM_STATEMACHINE_H

/*
    __vt__Q34Game12EnemyBaseFSM12StateMachine:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
    .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
    .4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
    .4byte getCurrState__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
    .4byte
   setCurrState__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
    .4byte update__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
    .4byte entry__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
    .4byte simulation__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasef
    .4byte animation__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBase
    .4byte
   bounceProcedure__Q34Game12EnemyBaseFSM12StateMachineFPQ24Game9EnemyBasePQ23Sys8Triangle
*/

namespace Game {
struct EnemyStateMachine {
	virtual void init(EnemyBase*);                    // _00
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
