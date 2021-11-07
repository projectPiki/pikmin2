#ifndef _GAME_ENEMYSTONE_STATEMACHINE_H
#define _GAME_ENEMYSTONE_STATEMACHINE_H

namespace Game {
namespace StateMachine < Game
{
	namespace EnemyStone {
		struct DrawInfo >
		{
			virtual void _00() = 0;                                       // _00
			virtual void StateMachine < start(DrawInfo*, int, StateArg*); // _04
			virtual void StateMachine < exec(DrawInfo*);                  // _08
			virtual void StateMachine
			    < transit(DrawInfo*, int, StateArg*); // _0C

			// _00 VTBL
		};
	} // namespace EnemyStone
} // namespace Game
} // namespace Game

namespace Game {
namespace EnemyStone {
	struct StateMachine : public DrawInfo > {
		virtual void init(DrawInfo*);                                   // _00
		virtual void StateMachine < start(DrawInfo*, int, StateArg*);   // _04
		virtual void StateMachine < exec(DrawInfo*);                    // _08
		virtual void StateMachine < transit(DrawInfo*, int, StateArg*); // _0C
		virtual void makeMatrix(DrawInfo*, Matrixf*);                   // _10
		virtual void _14() = 0;                                         // _14

		// _00 VTBL
	};
} // namespace EnemyStone
} // namespace Game

#endif
