#ifndef _GAME_SINGLEGAME_FSM_H
#define _GAME_SINGLEGAME_FSM_H

namespace Game {
namespace StateMachine < Game
{
	struct SingleGameSection >
	{
		virtual void _00() = 0; // _00
		virtual void StateMachine
		    < start(SingleGameSection*, int, StateArg*);      // _04
		virtual void StateMachine < exec(SingleGameSection*); // _08

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
namespace SingleGame {
	struct FSM : public SingleGameSection > {
		virtual void Singleinit(SingleGameSection*); // _00
		virtual void StateMachine
		    < start(SingleGameSection*, int, StateArg*);                // _04
		virtual void StateMachine < exec(SingleGameSection*);           // _08
		virtual void Singletransit(SingleGameSection*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace SingleGame
} // namespace Game

#endif
