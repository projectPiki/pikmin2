#ifndef _GAME_POM_STATEOPEN_H
#define _GAME_POM_STATEOPEN_H

/*
    __vt__Q34Game3Pom9StateOpen:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game3Pom9StateOpenFPQ24Game9EnemyBasePQ24Game8StateArg
    .4byte exec__Q34Game3Pom9StateOpenFPQ24Game9EnemyBase
    .4byte cleanup__Q34Game3Pom9StateOpenFPQ24Game9EnemyBase
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
namespace Pom {
	struct StateOpen : public EnemyFSMState {
		virtual void init(EnemyBase*, StateArg*);         // _00
		virtual void exec(EnemyBase*);                    // _04
		virtual void cleanup(EnemyBase*);                 // _08
		virtual void resume(EnemyBase*);                  // _0C
		virtual void restart(EnemyBase*);                 // _10
		virtual void transit(EnemyBase*, int, StateArg*); // _14
		virtual void doDirectDraw(EnemyBase*, Graphics&); // _18

		// _00 VTBL
	};
} // namespace Pom
} // namespace Game

#endif
