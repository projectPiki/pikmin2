#ifndef _GAME_SHADOWNODE_H
#define _GAME_SHADOWNODE_H

/*
    __vt__Q24Game10ShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game10ShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct ShadowNode : public CNode {
	virtual ~ShadowNode(); // _08 (inline)
};
} // namespace Game

#endif
