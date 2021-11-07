#ifndef _GAME_TYRETUBESHADOWNODE_H
#define _GAME_TYRETUBESHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct TyreTubeShadowNode : public CNode {
	virtual ~TyreTubeShadowNode(); // _00
	virtual void getChildCount();  // _04

	// _00 VTBL
};
} // namespace Game

#endif
