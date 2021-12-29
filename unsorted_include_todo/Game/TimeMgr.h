#ifndef _GAME_TIMEMGR_H
#define _GAME_TIMEMGR_H

/*
    __vt__Q24Game7TimeMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game7TimeMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
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
