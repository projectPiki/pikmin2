#ifndef _GAME_TIMEMGR_H
#define _GAME_TIMEMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct TimeMgr : public CNode {
	virtual ~TimeMgr();           // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
