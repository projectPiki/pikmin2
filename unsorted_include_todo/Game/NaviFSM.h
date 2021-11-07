#ifndef _GAME_NAVIFSM_H
#define _GAME_NAVIFSM_H

namespace Game {
namespace StateMachine < Game
{
	struct Navi >
	{
		virtual void _00() = 0;                                   // _00
		virtual void StateMachine < start(Navi*, int, StateArg*); // _04
		virtual void StateMachine < exec(Navi*);                  // _08

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct NaviFSM : public Navi > {
	virtual void init(Navi*);                                 // _00
	virtual void StateMachine < start(Navi*, int, StateArg*); // _04
	virtual void StateMachine < exec(Navi*);                  // _08
	virtual void transit(Navi*, int, StateArg*);              // _0C

	// _00 VTBL
};
} // namespace Game

#endif
