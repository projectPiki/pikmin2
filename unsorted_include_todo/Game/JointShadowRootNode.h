#ifndef _GAME_JOINTSHADOWROOTNODE_H
#define _GAME_JOINTSHADOWROOTNODE_H

/*
    __vt__Q24Game19JointShadowRootNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game19JointShadowRootNodeFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct JointShadowRootNode : public CNode {
	virtual ~JointShadowRootNode(); // _08
	virtual void _10() = 0;         // _10

	// _00 VTBL
};
} // namespace Game

#endif
