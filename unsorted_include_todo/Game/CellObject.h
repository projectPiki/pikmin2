#ifndef _GAME_CELLOBJECT_H
#define _GAME_CELLOBJECT_H

namespace Game {
struct CellObject {
	virtual void _00() = 0;                   // _00
	virtual void checkCollision(CellObject*); // _04
	virtual void _08() = 0;                   // _08
	virtual void _0C() = 0;                   // _0C
	virtual void isPiki();                    // _10
	virtual void isNavi();                    // _14
	virtual void deferPikiCollision();        // _18
	virtual void _1C() = 0;                   // _1C
	virtual void _20() = 0;                   // _20

	// _00 VTBL
};
} // namespace Game

#endif
