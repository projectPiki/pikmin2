#ifndef _GAME_SNAKEWHOLESPHERESHADOWNODE_H
#define _GAME_SNAKEWHOLESPHERESHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct SnakeWholeSphereShadowNode : public CNode {
	virtual ~SnakeWholeSphereShadowNode(); // _00
	virtual void getChildCount();          // _04

	// _00 VTBL
};
} // namespace Game

#endif
