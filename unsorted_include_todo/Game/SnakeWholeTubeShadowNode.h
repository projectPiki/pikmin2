#ifndef _GAME_SNAKEWHOLETUBESHADOWNODE_H
#define _GAME_SNAKEWHOLETUBESHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct SnakeWholeTubeShadowNode : public CNode {
	virtual ~SnakeWholeTubeShadowNode(); // _00
	virtual void getChildCount();        // _04

	// _00 VTBL
};
} // namespace Game

#endif
