#ifndef _GAME_ENEMYBASEFSM_APPEARSTATE_H
#define _GAME_ENEMYBASEFSM_APPEARSTATE_H

/*
    __vt__Q34Game12EnemyBaseFSM11AppearState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBasePQ24Game8StateArg
    .4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte cleanup__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase
    .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
    .4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
    .4byte update__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase
    .4byte entry__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBase
    .4byte simulation__Q34Game12EnemyBaseFSM11AppearStateFPQ24Game9EnemyBasef
    .4byte bounceProcedure__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBasePQ23Sys8Triangle
    .4byte animation__Q34Game12EnemyBaseFSM5StateFPQ24Game9EnemyBase
*/

namespace Game {
struct EnemyFSMState {
	virtual void _08() = 0;                           // _08
	virtual void exec(EnemyBase*);                    // _0C
	virtual void _10() = 0;                           // _10
	virtual void resume(EnemyBase*);                  // _14
	virtual void restart(EnemyBase*);                 // _18
	virtual void transit(EnemyBase*, int, StateArg*); // _1C
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _20

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace EnemyBaseFSM {
struct State {
	virtual void _08() = 0;                                   // _08
	virtual void _0C() = 0;                                   // _0C
	virtual void _10() = 0;                                   // _10
	virtual void _14() = 0;                                   // _14
	virtual void _18() = 0;                                   // _18
	virtual void _1C() = 0;                                   // _1C
	virtual void _20() = 0;                                   // _20
	virtual void _24() = 0;                                   // _24
	virtual void _28() = 0;                                   // _28
	virtual void _2C() = 0;                                   // _2C
	virtual void bounceProcedure(EnemyBase*, Sys::Triangle*); // _30
	virtual void animation(EnemyBase*);                       // _34

	// _00 VTBL
};
} // namespace EnemyBaseFSM
} // namespace Game

namespace Game {
namespace EnemyBaseFSM {
struct AppearState : public EnemyFSMState, public State {
	virtual void init(EnemyBase*, StateArg*);   // _08
	virtual void cleanup(EnemyBase*);           // _10
	virtual void update(EnemyBase*);            // _24
	virtual void entry(EnemyBase*);             // _28
	virtual void simulation(EnemyBase*, float); // _2C

	// _00 VTBL
};
} // namespace EnemyBaseFSM
} // namespace Game

#endif
