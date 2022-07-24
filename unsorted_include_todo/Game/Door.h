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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct Door : public CNode {
	virtual ~Door(); // _08 (inline)

	void getLink(int);
	void read(Stream&);
};
} // namespace Game

#endif
