#ifndef _GAME_HIOROOTNODE_H
#define _GAME_HIOROOTNODE_H

/*
    __vt__Q24Game11HIORootNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game11HIORootNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct HIORootNode : public CNode {
	virtual ~HIORootNode();       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
