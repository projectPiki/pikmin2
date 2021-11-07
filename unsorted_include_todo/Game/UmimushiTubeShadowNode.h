#ifndef _GAME_UMIMUSHITUBESHADOWNODE_H
#define _GAME_UMIMUSHITUBESHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct UmimushiTubeShadowNode : public CNode {
	virtual ~UmimushiTubeShadowNode(); // _00
	virtual void getChildCount();      // _04

	// _00 VTBL
};
} // namespace Game

#endif
