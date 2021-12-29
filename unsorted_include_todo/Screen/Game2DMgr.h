#ifndef _SCREEN_GAME2DMGR_H
#define _SCREEN_GAME2DMGR_H

/*
    __vt__Q26Screen9Game2DMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26Screen9Game2DMgrFv
    .4byte 0
*/

namespace Screen {
struct Game2DMgr {
	virtual ~Game2DMgr();   // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};
} // namespace Screen

#endif
