#ifndef _GAME_ENEMYBASEFSM_STATE_H
#define _GAME_ENEMYBASEFSM_STATE_H

/*
    __vt__Q34Game12EnemyBaseFSM5State:
    .4byte 0
    .4byte 0
    .4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
    .4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
    .4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
    .4byte update__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
    .4byte entry__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
    .4byte simulation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasef
    .4byte
   bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
    .4byte animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
*/

namespace Game {
struct EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*);         // _00
	virtual void exec(EnemyBase*);                    // _04
	virtual void cleanup(EnemyBase*);                 // _08
	virtual void resume(EnemyBase*);                  // _0C
	virtual void restart(EnemyBase*);                 // _10
	virtual void transit(EnemyBase*, int, StateArg*); // _14
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _18

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace EnemyBaseFSM {
	struct State : public EnemyFSMState {
		virtual void init(EnemyBase*, StateArg*);                 // _00
		virtual void exec(EnemyBase*);                            // _04
		virtual void cleanup(EnemyBase*);                         // _08
		virtual void resume(EnemyBase*);                          // _0C
		virtual void restart(EnemyBase*);                         // _10
		virtual void transit(EnemyBase*, int, StateArg*);         // _14
		virtual void doDirectDraw(EnemyBase*, Graphics&);         // _18
		virtual void update(EnemyBase*);                          // _1C
		virtual void entry(EnemyBase*);                           // _20
		virtual void simulation(EnemyBase*, float);               // _24
		virtual void bounceProcedure(EnemyBase*, Sys::Triangle*); // _28
		virtual void animation(EnemyBase*);                       // _2C

		// _00 VTBL
	};
} // namespace EnemyBaseFSM
} // namespace Game

#endif
