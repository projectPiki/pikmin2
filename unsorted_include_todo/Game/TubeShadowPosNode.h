#ifndef _GAME_TUBESHADOWPOSNODE_H
#define _GAME_TUBESHADOWPOSNODE_H

/*
    __vt__Q24Game17TubeShadowPosNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game17TubeShadowPosNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct TubeShadowPosNode : public CNode {
	virtual ~TubeShadowPosNode(); // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
