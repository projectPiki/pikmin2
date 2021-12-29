#ifndef _GAME_PELLETBURYSTATE_H
#define _GAME_PELLETBURYSTATE_H

/*
    __vt__Q24Game15PelletBuryState:
    .4byte 0
    .4byte 0
    .4byte init__Q24Game15PelletBuryStateFPQ24Game6PelletPQ24Game8StateArg
    .4byte exec__Q24Game15PelletBuryStateFPQ24Game6Pellet
    .4byte cleanup__Q24Game15PelletBuryStateFPQ24Game6Pellet
    .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
    .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
    .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
    .4byte isBuried__Q24Game15PelletBuryStateFv
    .4byte appeared__Q24Game11PelletStateFv
    .4byte isPickable__Q24Game11PelletStateFv
*/

namespace Game {
namespace FSMState < Game
{
	struct Pellet >
	{
		virtual void _00() = 0;                                   // _00
		virtual void _04() = 0;                                   // _04
		virtual void _08() = 0;                                   // _08
		virtual void FSMState < resume(Pellet*);                  // _0C
		virtual void FSMState < restart(Pellet*);                 // _10
		virtual void FSMState < transit(Pellet*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct PelletState {
	virtual void _00() = 0;    // _00
	virtual void _04() = 0;    // _04
	virtual void _08() = 0;    // _08
	virtual void _0C() = 0;    // _0C
	virtual void _10() = 0;    // _10
	virtual void _14() = 0;    // _14
	virtual void _18() = 0;    // _18
	virtual void appeared();   // _1C
	virtual void isPickable(); // _20

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct PelletBuryState : public Pellet >, public PelletState {
	virtual void init(Pellet*, StateArg*);                    // _00
	virtual void exec(Pellet*);                               // _04
	virtual void cleanup(Pellet*);                            // _08
	virtual void FSMState < resume(Pellet*);                  // _0C
	virtual void FSMState < restart(Pellet*);                 // _10
	virtual void FSMState < transit(Pellet*, int, StateArg*); // _14
	virtual void isBuried();                                  // _18
	virtual void appeared();                                  // _1C
	virtual void isPickable();                                // _20

	// _00 VTBL
};
} // namespace Game

#endif
