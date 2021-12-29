#ifndef _GAME_TUBESHADOWTRANSNODE_H
#define _GAME_TUBESHADOWTRANSNODE_H

/*
    __vt__Q24Game19TubeShadowTransNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game19TubeShadowTransNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct TubeShadowTransNode : public CNode {
	virtual ~TubeShadowTransNode(); // _00
	virtual void getChildCount();   // _04

	// _00 VTBL
};
} // namespace Game

#endif
