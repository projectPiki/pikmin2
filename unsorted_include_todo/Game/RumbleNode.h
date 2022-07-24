#ifndef _GAME_RUMBLENODE_H
#define _GAME_RUMBLENODE_H

/*
    __vt__Q24Game10RumbleNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game10RumbleNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct RumbleNode : public CNode {
	virtual ~RumbleNode(); // _08 (inline)
};
} // namespace Game

#endif
