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
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct RoomLink : public CNode {
	virtual ~RoomLink();          // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
