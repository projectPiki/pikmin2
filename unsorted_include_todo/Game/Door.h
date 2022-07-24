#ifndef _GAME_DOOR_H
#define _GAME_DOOR_H

/*
    __vt__Q24Game4Door:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game4DoorFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct Door : public CNode {
	virtual ~Door(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
