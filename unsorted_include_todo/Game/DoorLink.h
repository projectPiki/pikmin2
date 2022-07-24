#ifndef _GAME_DOORLINK_H
#define _GAME_DOORLINK_H

/*
    __vt__Q24Game8DoorLink:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game8DoorLinkFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct DoorLink : public CNode {
	virtual ~DoorLink(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
