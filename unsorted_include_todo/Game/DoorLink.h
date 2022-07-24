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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct DoorLink : public CNode {
	virtual ~DoorLink(); // _08 (inline)
};
} // namespace Game

#endif
