#ifndef _GAME_JOINTSHADOWROOTNODE_H
#define _GAME_JOINTSHADOWROOTNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct JointShadowRootNode : public CNode {
	virtual ~JointShadowRootNode(); // _00
	virtual void getChildCount();   // _04
	virtual void _08() = 0;         // _08

	// _00 VTBL
};
} // namespace Game

#endif
