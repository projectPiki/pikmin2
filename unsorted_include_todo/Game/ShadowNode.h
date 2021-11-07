#ifndef _GAME_SHADOWNODE_H
#define _GAME_SHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct ShadowNode : public CNode {
	virtual ~ShadowNode();        // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
