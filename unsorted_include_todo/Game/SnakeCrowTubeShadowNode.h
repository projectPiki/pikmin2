#ifndef _GAME_SNAKECROWTUBESHADOWNODE_H
#define _GAME_SNAKECROWTUBESHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct SnakeCrowTubeShadowNode : public CNode {
	virtual ~SnakeCrowTubeShadowNode(); // _00
	virtual void getChildCount();       // _04

	// _00 VTBL
};
} // namespace Game

#endif
