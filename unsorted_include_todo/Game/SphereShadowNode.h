#ifndef _GAME_SPHERESHADOWNODE_H
#define _GAME_SPHERESHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct SphereShadowNode : public CNode {
	virtual ~SphereShadowNode();  // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
