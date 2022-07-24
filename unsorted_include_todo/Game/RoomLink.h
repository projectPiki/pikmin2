#ifndef _GAME_ROOMLINK_H
#define _GAME_ROOMLINK_H

/*
    __vt__Q24Game8RoomLink:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game8RoomLinkFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct RoomLink : public CNode {
	virtual ~RoomLink(); // _08 (inline)
};
} // namespace Game

#endif
