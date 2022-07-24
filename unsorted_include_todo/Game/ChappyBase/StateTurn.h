#ifndef _GAME_CHAPPYBASE_STATETURN_H
#define _GAME_CHAPPYBASE_STATETURN_H

/*
    __vt__Q34Game10ChappyBase9StateTurn:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
    .4byte exec__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBase
    .4byte cleanup__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBase
    .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
    .4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
*/

namespace Game {
struct EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*);         // _08
	virtual void exec(EnemyBase*);                    // _0C
	virtual void cleanup(EnemyBase*);                 // _10
	virtual void resume(EnemyBase*);                  // _14 (inline)
	virtual void restart(EnemyBase*);                 // _18 (inline)
	virtual void transit(EnemyBase*, int, StateArg*); // _1C
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _20 (inline)
};
} // namespace Game

namespace Game {
namespace ChappyBase {
struct StateTurn : public EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	StateTurn();
};
} // namespace ChappyBase
} // namespace Game

#endif
