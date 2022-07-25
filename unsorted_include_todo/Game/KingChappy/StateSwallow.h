#ifndef _GAME_KINGCHAPPY_STATESWALLOW_H
#define _GAME_KINGCHAPPY_STATESWALLOW_H

/*
    __vt__Q34Game10KingChappy12StateSwallow:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game10KingChappy12StateSwallowFPQ24Game9EnemyBasePQ24Game8StateArg
    .4byte exec__Q34Game10KingChappy12StateSwallowFPQ24Game9EnemyBase
    .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
    .4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
*/

namespace Game {
struct EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*);         // _08
	virtual void exec(EnemyBase*);                    // _0C
	virtual void cleanup(EnemyBase*);                 // _10 (weak)
	virtual void resume(EnemyBase*);                  // _14 (weak)
	virtual void restart(EnemyBase*);                 // _18 (weak)
	virtual void transit(EnemyBase*, int, StateArg*); // _1C
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _20 (weak)
};
} // namespace Game

namespace Game {
namespace KingChappy {
struct StateSwallow : public EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	StateSwallow(int);
};
} // namespace KingChappy
} // namespace Game

#endif
