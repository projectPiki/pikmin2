#ifndef _GAME_BOMB_STATEBOMB_H
#define _GAME_BOMB_STATEBOMB_H

/*
    __vt__Q34Game4Bomb9StateBomb:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game4Bomb9StateBombFPQ24Game9EnemyBasePQ24Game8StateArg
    .4byte exec__Q34Game4Bomb9StateBombFPQ24Game9EnemyBase
    .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
    .4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
*/

namespace Game {
struct EnemyFSMState {
	virtual void Stateinit(EnemyBase*, StateArg*);    // _08
	virtual void Stateexec(EnemyBase*);               // _0C
	virtual void cleanup(EnemyBase*);                 // _10 (inline)
	virtual void resume(EnemyBase*);                  // _14 (inline)
	virtual void restart(EnemyBase*);                 // _18 (inline)
	virtual void transit(EnemyBase*, int, StateArg*); // _1C
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _20 (inline)
};
} // namespace Game

namespace Game {
namespace Bomb {
struct StateBomb : public EnemyFSMState {
	virtual void Stateinit(EnemyBase*, StateArg*); // _08
	virtual void Stateexec(EnemyBase*);            // _0C

	StateBomb(int);
};
} // namespace Bomb
} // namespace Game

#endif
