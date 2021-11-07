#ifndef _GAME_PELLETSCALEAPPEARSTATE_H
#define _GAME_PELLETSCALEAPPEARSTATE_H

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
	virtual void isBuried();   // _18
	virtual void _1C() = 0;    // _1C
	virtual void isPickable(); // _20

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct PelletScaleAppearState : public Pellet >, public PelletState {
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
