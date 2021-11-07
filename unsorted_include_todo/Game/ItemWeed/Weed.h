#ifndef _GAME_ITEMWEED_WEED_H
#define _GAME_ITEMWEED_WEED_H

namespace Game {
struct TFlock {
	virtual void _00() = 0;     // _00
	virtual void isVisible();   // _04
	virtual void _08() = 0;     // _08
	virtual void fear();        // _0C
	virtual void getRadius();   // _10
	virtual void _14() = 0;     // _14
	virtual void constructor(); // _18

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace ItemWeed {
	struct Weed : public TFlock {
		virtual void makeMatrix();   // _00
		virtual void isVisible();    // _04
		virtual void isWeed();       // _08
		virtual void fear();         // _0C
		virtual void getRadius();    // _10
		virtual void damaged(float); // _14
		virtual void constructor();  // _18

		// _00 VTBL
	};
} // namespace ItemWeed
} // namespace Game

#endif
