#ifndef _GAME_BASEFLOCKMGR_H
#define _GAME_BASEFLOCKMGR_H

/*
    __vt__Q24Game12BaseFlockMgr:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte do_update__Q24Game12BaseFlockMgrFv
    .4byte 0
    .4byte doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai
    .4byte isWeed__Q24Game12BaseFlockMgrFi
    .4byte fear__Q24Game12BaseFlockMgrFi
    .4byte 0
*/

namespace Game {
struct BaseFlockMgr {
	virtual void _08() = 0;                                    // _08
	virtual void _0C() = 0;                                    // _0C
	virtual void _10() = 0;                                    // _10
	virtual void _14() = 0;                                    // _14
	virtual void _18() = 0;                                    // _18
	virtual void do_update();                                  // _1C
	virtual void _20() = 0;                                    // _20
	virtual void doSimpleDraw(Viewport*, J3DModelData**, int); // _24
	virtual void isWeed(int);                                  // _28
	virtual void fear(int);                                    // _2C
	virtual void _30() = 0;                                    // _30

	// _00 VTBL
};
} // namespace Game

#endif
