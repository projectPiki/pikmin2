#ifndef _GAME_PELLETFSM_H
#define _GAME_PELLETFSM_H

namespace Game {
namespace StateMachine < Game
{
	struct Pellet >
	{
		virtual void _00() = 0;                                       // _00
		virtual void StateMachine < start(Pellet*, int, StateArg*);   // _04
		virtual void StateMachine < exec(Pellet*);                    // _08
		virtual void StateMachine < transit(Pellet*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct PelletFSM : public Pellet > {
	virtual void init(Pellet*);                                   // _00
	virtual void StateMachine < start(Pellet*, int, StateArg*);   // _04
	virtual void StateMachine < exec(Pellet*);                    // _08
	virtual void StateMachine < transit(Pellet*, int, StateArg*); // _0C

	// _00 VTBL
};
} // namespace Game

#endif
