#ifndef _GAME_SNAKECROWTUBESHADOWNODE_H
#define _GAME_SNAKECROWTUBESHADOWNODE_H

/*
    __vt__Q24Game23SnakeCrowTubeShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game23SnakeCrowTubeShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct SnakeCrowTubeShadowNode : public CNode {
	virtual ~SnakeCrowTubeShadowNode(); // _00
	virtual void getChildCount();       // _04

	// _00 VTBL
};
} // namespace Game

#endif
