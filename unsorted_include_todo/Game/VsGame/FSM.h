#ifndef _GAME_VSGAME_FSM_H
#define _GAME_VSGAME_FSM_H

namespace Game {
namespace StateMachine < Game
{
	struct VsGameSection >
	{
		virtual void _00() = 0; // _00
		virtual void StateMachine
		    < start(VsGameSection*, int, StateArg*);      // _04
		virtual void StateMachine < exec(VsGameSection*); // _08

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
namespace VsGame {
	struct FSM : public VsGameSection > {
		virtual void Vsinit(VsGameSection*); // _00
		virtual void StateMachine
		    < start(VsGameSection*, int, StateArg*);            // _04
		virtual void StateMachine < exec(VsGameSection*);       // _08
		virtual void Vstransit(VsGameSection*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace VsGame
} // namespace Game

#endif
