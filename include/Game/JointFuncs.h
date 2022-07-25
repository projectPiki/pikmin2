#ifndef _GAME_JOINTFUNCTIONS_H
#define _GAME_JOINTFUNCTIONS_H

#include "CNode.h"

/*
    __vt__Q24Game19JointGroundCallBack:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct WaterBox;

namespace Game {
struct JointGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C
};

/*
    __vt__Q24Game15JointShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game15JointShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct JointShadowNode : public CNode {
	virtual ~JointShadowNode(); // _08 (weak)

	JointShadowNode();
	void init(int);
};

/*
    __vt__Q24Game19JointShadowRootNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game19JointShadowRootNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct JointShadowRootNode : public CNode {
	virtual ~JointShadowRootNode(); // _08 (weak)

	JointShadowRootNode();
};
} // namespace Game

#endif
