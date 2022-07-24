#ifndef _GAME_TYRETUBESHADOWNODE_H
#define _GAME_TYRETUBESHADOWNODE_H

/*
    __vt__Q24Game18TyreTubeShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game18TyreTubeShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct TyreTubeShadowNode : public CNode {
	virtual ~TyreTubeShadowNode(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
