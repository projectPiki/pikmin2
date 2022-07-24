#ifndef _GAME_PELLETFSM_H
#define _GAME_PELLETFSM_H

/*
    __vt__Q24Game9PelletFSM:
    .4byte 0
    .4byte 0
    .4byte init__Q24Game9PelletFSMFPQ24Game6Pellet
    .4byte "start__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
    .4byte "exec__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
    .4byte "transit__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
*/

namespace Game {
namespace StateMachine < Game
{
	struct Pellet >
	{
		virtual void init(Pellet*);                                   // _08
		virtual void StateMachine < start(Pellet*, int, StateArg*);   // _0C
		virtual void StateMachine < exec(Pellet*);                    // _10
		virtual void StateMachine < transit(Pellet*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct PelletFSM : public Pellet > {
	virtual void init(Pellet*); // _08

	// _00 VTBL
};
} // namespace Game

#endif
