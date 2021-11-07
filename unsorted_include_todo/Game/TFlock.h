#ifndef _GAME_TFLOCK_H
#define _GAME_TFLOCK_H

namespace Game {
struct TFlock {
	virtual void _00() = 0;      // _00
	virtual void isVisible();    // _04
	virtual void isWeed();       // _08
	virtual void fear();         // _0C
	virtual void getRadius();    // _10
	virtual void damaged(float); // _14
	virtual void constructor();  // _18

	// _00 VTBL
};
} // namespace Game

#endif
