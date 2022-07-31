#ifndef _GAME_PELLETSTATE_H
#define _GAME_PELLETSTATE_H

/*
    __vt__Q24Game11PelletState:
    .4byte 0
    .4byte 0
    .4byte "init__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletPQ24Game8StateArg"
    .4byte "exec__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
    .4byte "cleanup__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
    .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
    .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
    .4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
    .4byte isBuried__Q24Game11PelletStateFv
    .4byte appeared__Q24Game11PelletStateFv
    .4byte isPickable__Q24Game11PelletStateFv
*/

namespace Game {
struct FSMState<Game::Pellet> {
	virtual void FSMState<Pellet>::init(Pellet*, StateArg*);         // _08 (weak)
	virtual void FSMState<Pellet>::exec(Pellet*);                    // _0C (weak)
	virtual void FSMState<Pellet>::cleanup(Pellet*);                 // _10 (weak)
	virtual void FSMState<Pellet>::resume(Pellet*);                  // _14 (weak)
	virtual void FSMState<Pellet>::restart(Pellet*);                 // _18 (weak)
	virtual void FSMState<Pellet>::transit(Pellet*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct PelletState : public FSMState<Game::Pellet> {
	virtual void isBuried();   // _20 (weak)
	virtual void appeared();   // _24 (weak)
	virtual void isPickable(); // _28 (weak)
};
} // namespace Game

#endif
