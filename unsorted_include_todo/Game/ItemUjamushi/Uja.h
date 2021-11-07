#ifndef _GAME_ITEMUJAMUSHI_UJA_H
#define _GAME_ITEMUJAMUSHI_UJA_H

namespace Game {
struct TFlock {
	virtual void _00() = 0;     // _00
	virtual void _04() = 0;     // _04
	virtual void isWeed();      // _08
	virtual void fear();        // _0C
	virtual void getRadius();   // _10
	virtual void _14() = 0;     // _14
	virtual void constructor(); // _18

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace ItemUjamushi {
	struct Uja : public TFlock {
		virtual void makeMatrix();   // _00
		virtual void isVisible();    // _04
		virtual void isWeed();       // _08
		virtual void fear();         // _0C
		virtual void getRadius();    // _10
		virtual void damaged(float); // _14
		virtual void constructor();  // _18

		// _00 VTBL
	};
} // namespace ItemUjamushi
} // namespace Game

#endif
