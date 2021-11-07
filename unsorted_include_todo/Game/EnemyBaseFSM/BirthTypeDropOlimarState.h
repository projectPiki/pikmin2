#ifndef _GAME_ENEMYBASEFSM_BIRTHTYPEDROPOLIMARSTATE_H
#define _GAME_ENEMYBASEFSM_BIRTHTYPEDROPOLIMARSTATE_H

namespace Game {
namespace EnemyBaseFSM {
	struct BirthTypeDropState {
		virtual void init(EnemyBase*, StateArg*);   // _00
		virtual void _04() = 0;                     // _04
		virtual void cleanup(EnemyBase*);           // _08
		virtual void _0C() = 0;                     // _0C
		virtual void _10() = 0;                     // _10
		virtual void _14() = 0;                     // _14
		virtual void _18() = 0;                     // _18
		virtual void update(EnemyBase*);            // _1C
		virtual void entry(EnemyBase*);             // _20
		virtual void simulation(EnemyBase*, float); // _24
		virtual void _28() = 0;                     // _28
		virtual void animation(EnemyBase*);         // _2C

		// _00 VTBL
	};
} // namespace EnemyBaseFSM
} // namespace Game

namespace Game {
struct EnemyFSMState {
	virtual void _00() = 0;                           // _00
	virtual void exec(EnemyBase*);                    // _04
	virtual void _08() = 0;                           // _08
	virtual void resume(EnemyBase*);                  // _0C
	virtual void restart(EnemyBase*);                 // _10
	virtual void transit(EnemyBase*, int, StateArg*); // _14
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _18

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace EnemyBaseFSM {
	struct State {
		virtual void _00() = 0;                                   // _00
		virtual void _04() = 0;                                   // _04
		virtual void _08() = 0;                                   // _08
		virtual void _0C() = 0;                                   // _0C
		virtual void _10() = 0;                                   // _10
		virtual void _14() = 0;                                   // _14
		virtual void _18() = 0;                                   // _18
		virtual void _1C() = 0;                                   // _1C
		virtual void _20() = 0;                                   // _20
		virtual void _24() = 0;                                   // _24
		virtual void bounceProcedure(EnemyBase*, Sys::Triangle*); // _28

		// _00 VTBL
	};
} // namespace EnemyBaseFSM
} // namespace Game

namespace Game {
namespace EnemyBaseFSM {
	struct BirthTypeDropOlimarState : public BirthTypeDropState,
	                                  public EnemyFSMState,
	                                  public State {
		virtual void init(EnemyBase*, StateArg*);                  // _00
		virtual void exec(EnemyBase*);                             // _04
		virtual void cleanup(EnemyBase*);                          // _08
		virtual void resume(EnemyBase*);                           // _0C
		virtual void restart(EnemyBase*);                          // _10
		virtual void transit(EnemyBase*, int, StateArg*);          // _14
		virtual void doDirectDraw(EnemyBase*, Graphics&);          // _18
		virtual void update(EnemyBase*);                           // _1C
		virtual void entry(EnemyBase*);                            // _20
		virtual void simulation(EnemyBase*, float);                // _24
		virtual void bounceProcedure(EnemyBase*, Sys::Triangle*);  // _28
		virtual void animation(EnemyBase*);                        // _2C
		virtual void isFinishableWaitingBirthTypeDrop(EnemyBase*); // _30

		// _00 VTBL
	};
} // namespace EnemyBaseFSM
} // namespace Game

#endif
