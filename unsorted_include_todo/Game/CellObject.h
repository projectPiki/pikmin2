#ifndef _GAME_CELLOBJECT_H
#define _GAME_CELLOBJECT_H

/*
    __vt__Q24Game10CellObject:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte checkCollision__Q24Game10CellObjectFPQ24Game10CellObject
    .4byte 0
    .4byte 0
    .4byte isPiki__Q24Game10CellObjectFv
    .4byte isNavi__Q24Game10CellObjectFv
    .4byte deferPikiCollision__Q24Game10CellObjectFv
    .4byte 0
    .4byte 0
*/

namespace Game {
struct CellObject {
	virtual void _08() = 0;                   // _08
	virtual void checkCollision(CellObject*); // _0C
	virtual void _10() = 0;                   // _10
	virtual void _14() = 0;                   // _14
	virtual void isPiki();                    // _18
	virtual void isNavi();                    // _1C
	virtual void deferPikiCollision();        // _20
	virtual void _24() = 0;                   // _24
	virtual void _28() = 0;                   // _28

	// _00 VTBL
};
} // namespace Game

#endif
