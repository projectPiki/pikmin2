#ifndef _GAME_JOINTFUNCTIONS_H
#define _GAME_JOINTFUNCTIONS_H

#include "CNode.h"

struct WaterBox;

namespace Game {
struct JointGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C
};

struct JointShadowNode : public CNode {
	virtual ~JointShadowNode(); // _08 (weak)

	JointShadowNode();
	void init(int);
};

struct JointShadowRootNode : public CNode {
	virtual ~JointShadowRootNode() { } // _08 (weak)

	JointShadowRootNode();

	Creature* m_creature; // _18
	u8 _1C;               // _1C
};
} // namespace Game

#endif
