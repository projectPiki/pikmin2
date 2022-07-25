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
    .4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
    .4byte animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
*/

namespace Game {
struct EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*);         // _08 (weak)
	virtual void exec(EnemyBase*);                    // _0C (weak)
	virtual void cleanup(EnemyBase*);                 // _10 (weak)
	virtual void resume(EnemyBase*);                  // _14 (weak)
	virtual void restart(EnemyBase*);                 // _18 (weak)
	virtual void transit(EnemyBase*, int, StateArg*); // _1C
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _20 (weak)
};
} // namespace Game

namespace Game {
namespace EnemyBaseFSM {
struct State : public EnemyFSMState {
	virtual void update(EnemyBase*);                          // _24 (weak)
	virtual void entry(EnemyBase*);                           // _28 (weak)
	virtual void simulation(EnemyBase*, float);               // _2C (weak)
	virtual void bounceProcedure(EnemyBase*, Sys::Triangle*); // _30 (weak)
	virtual void animation(EnemyBase*);                       // _34
};
} // namespace EnemyBaseFSM
} // namespace Game

#endif
