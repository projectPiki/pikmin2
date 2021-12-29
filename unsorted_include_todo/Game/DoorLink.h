#ifndef _GAME_DOORLINK_H
#define _GAME_DOORLINK_H

/*
    __vt__Q24Game8DoorLink:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game8DoorLinkFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct DoorLink : public CNode {
	virtual ~DoorLink();          // _00
	virtual void getChildCount(); // _04
	virtual void _08() = 0;       // _08

	// _00 VTBL
};
} // namespace Game

#endif
