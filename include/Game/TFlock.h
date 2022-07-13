#ifndef _GAME_TFLOCK_H
#define _GAME_TFLOCK_H

namespace Game {
struct TFlock {
	virtual void makeMatrix() = 0; // _00
	virtual bool isVisible();      // _04
	virtual bool isWeed();         // _08
	virtual bool fear();           // _0C
	virtual float getRadius();     // _10
	virtual bool damaged(float);   // _14
	virtual void constructor();    // _18

	// _00 VTBL
};
} // namespace Game

#endif
