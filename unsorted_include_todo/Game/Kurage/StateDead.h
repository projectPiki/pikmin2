#ifndef _GAME_KURAGE_STATEDEAD_H
#define _GAME_KURAGE_STATEDEAD_H

/*
    __vt__Q34Game6Kurage9StateDead:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
    .4byte exec__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBase
    .4byte cleanup__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBase
    .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
    .4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
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
namespace Kurage {
	struct StateDead : public EnemyFSMState {
		virtual void init(EnemyBase*, StateArg*);         // _00
		virtual void exec(EnemyBase*);                    // _04
		virtual void cleanup(EnemyBase*);                 // _08
		virtual void resume(EnemyBase*);                  // _0C
		virtual void restart(EnemyBase*);                 // _10
		virtual void transit(EnemyBase*, int, StateArg*); // _14
		virtual void doDirectDraw(EnemyBase*, Graphics&); // _18

		// _00 VTBL
	};
} // namespace Kurage
} // namespace Game

#endif
