#ifndef _GAME_TFLOCK_H
#define _GAME_TFLOCK_H

/*
    __vt__Q24Game6TFlock:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte isVisible__Q24Game6TFlockFv
    .4byte isWeed__Q24Game6TFlockFv
    .4byte fear__Q24Game6TFlockFv
    .4byte getRadius__Q24Game6TFlockFv
    .4byte damaged__Q24Game6TFlockFf
    .4byte constructor__Q24Game6TFlockFv
*/

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
