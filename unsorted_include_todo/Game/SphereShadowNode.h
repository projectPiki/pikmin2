#ifndef _GAME_SPHERESHADOWNODE_H
#define _GAME_SPHERESHADOWNODE_H

/*
    __vt__Q24Game16SphereShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game16SphereShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct SphereShadowNode : public CNode {
	virtual ~SphereShadowNode();  // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
