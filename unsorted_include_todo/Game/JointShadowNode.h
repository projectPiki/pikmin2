#ifndef _GAME_JOINTSHADOWNODE_H
#define _GAME_JOINTSHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct JointShadowNode : public CNode {
	virtual ~JointShadowNode();   // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
