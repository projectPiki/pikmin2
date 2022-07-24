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
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct TubeShadowTransNode : public CNode {
	virtual ~TubeShadowTransNode(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
