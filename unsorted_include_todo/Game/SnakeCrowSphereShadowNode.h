#ifndef _GAME_SNAKECROWSPHERESHADOWNODE_H
#define _GAME_SNAKECROWSPHERESHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct SnakeCrowSphereShadowNode : public CNode {
	virtual ~SnakeCrowSphereShadowNode(); // _00
	virtual void getChildCount();         // _04

	// _00 VTBL
};
} // namespace Game

#endif
