#ifndef _GAME_JOINTFUNCTIONS_H
#define _GAME_JOINTFUNCTIONS_H

#include "types.h"
#include "CNode.h"
#include "Matrixf.h"

struct WaterBox;

namespace Game {
struct JointGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C
};

struct JointShadowNode : public CNode {
	JointShadowNode();

	virtual ~JointShadowNode(); // _08 (weak)

	void init(int);

	// _00 		= VTBL
	// _00-_18	= CNode
	u32 _18;      // _18, unknown
	Matrixf* _1C; // _1C
	Matrixf* _20; // _20
};

struct JointShadowRootNode : public CNode {
	virtual ~JointShadowRootNode() { } // _08 (weak)

	JointShadowRootNode();

	struct Creature* m_creature; // _18
	u8 _1C;                      // _1C
};
} // namespace Game

#endif
