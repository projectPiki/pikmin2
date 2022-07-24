#ifndef _GAME_CAMERAMGR_H
#define _GAME_CAMERAMGR_H

/*
    __vt__Q24Game9CameraMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game9CameraMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct CameraMgr : public CNode {
	virtual ~CameraMgr();   // _08
	virtual void _10() = 0; // _10

	// _00 VTBL
};
} // namespace Game

#endif
