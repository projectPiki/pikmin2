#ifndef _GAME_JOINTSHADOWNODE_H
#define _GAME_JOINTSHADOWNODE_H

/*
    __vt__Q24Game15JointShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game15JointShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct JointShadowNode : public CNode {
	virtual ~JointShadowNode(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
