#ifndef _GAME_UMIMUSHISPHERESHADOWNODE_H
#define _GAME_UMIMUSHISPHERESHADOWNODE_H

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
} // namespace Game

#endif
