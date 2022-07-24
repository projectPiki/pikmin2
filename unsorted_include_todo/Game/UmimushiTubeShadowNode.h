#ifndef _GAME_UMIMUSHITUBESHADOWNODE_H
#define _GAME_UMIMUSHITUBESHADOWNODE_H

/*
    __vt__Q24Game22UmimushiTubeShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game22UmimushiTubeShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct UmimushiTubeShadowNode : public CNode {
	virtual ~UmimushiTubeShadowNode(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
