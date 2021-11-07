#ifndef _GAME_UMIMUSHISHADOWNODE_H
#define _GAME_UMIMUSHISHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct UmimushiSphereShadowNode : public CNode {
	virtual ~UmimushiSphereShadowNode(); // _00
	virtual void getChildCount();        // _04

	// _00 VTBL
};

struct UmimushiTubeShadowNode : public CNode {
	virtual ~UmimushiTubeShadowNode(); // _00
	virtual void getChildCount();      // _04

	// _00 VTBL
};
} // namespace Game

#endif
