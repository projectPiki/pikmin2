#ifndef _GAME_PIKIFSM_H
#define _GAME_PIKIFSM_H

namespace Game {
namespace StateMachine < Game
{
	struct Piki >
	{
		virtual void _00() = 0;                                   // _00
		virtual void StateMachine < start(Piki*, int, StateArg*); // _04
		virtual void StateMachine < exec(Piki*);                  // _08

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct PikiFSM : public Piki > {
	virtual void init(Piki*);                                 // _00
	virtual void StateMachine < start(Piki*, int, StateArg*); // _04
	virtual void StateMachine < exec(Piki*);                  // _08
	virtual void transit(Piki*, int, StateArg*);              // _0C

	// _00 VTBL
};
} // namespace Game

#endif
