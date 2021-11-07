#ifndef _GAME_ENEMYBASEFSM_STATE_H
#define _GAME_ENEMYBASEFSM_STATE_H

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
