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
struct StateMachine<Game::Pellet> {
	virtual void init(Pellet*);                                          // _08
	virtual void StateMachine<Pellet>::start(Pellet*, int, StateArg*);   // _0C (weak)
	virtual void StateMachine<Pellet>::exec(Pellet*);                    // _10 (weak)
	virtual void StateMachine<Pellet>::transit(Pellet*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace Game {
struct PelletFSM : public StateMachine<Game::Pellet> {
	virtual void init(Pellet*); // _08
};
} // namespace Game

#endif
