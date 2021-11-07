#ifndef _GAME_PELLETSTATE_H
#define _GAME_PELLETSTATE_H

namespace Game {
namespace FSMState < Game
{
	struct Pellet >
	{
		virtual void FSMState < init(Pellet*, StateArg*);         // _00
		virtual void FSMState < exec(Pellet*);                    // _04
		virtual void FSMState < cleanup(Pellet*);                 // _08
		virtual void FSMState < resume(Pellet*);                  // _0C
		virtual void FSMState < restart(Pellet*);                 // _10
		virtual void FSMState < transit(Pellet*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct PelletState : public Pellet > {
	virtual void FSMState < init(Pellet*, StateArg*);         // _00
	virtual void FSMState < exec(Pellet*);                    // _04
	virtual void FSMState < cleanup(Pellet*);                 // _08
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
