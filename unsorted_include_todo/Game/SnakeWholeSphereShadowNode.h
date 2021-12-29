#ifndef _GAME_SNAKEWHOLESPHERESHADOWNODE_H
#define _GAME_SNAKEWHOLESPHERESHADOWNODE_H

/*
    __vt__Q24Game26SnakeWholeSphereShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game26SnakeWholeSphereShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct SnakeWholeSphereShadowNode : public CNode {
	virtual ~SnakeWholeSphereShadowNode(); // _00
	virtual void getChildCount();          // _04

	// _00 VTBL
};
} // namespace Game

#endif
