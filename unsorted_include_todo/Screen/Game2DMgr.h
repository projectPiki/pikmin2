#ifndef _SCREEN_GAME2DMGR_H
#define _SCREEN_GAME2DMGR_H

namespace Screen {
struct Game2DMgr {
	virtual ~Game2DMgr();   // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};
} // namespace Screen

#endif
