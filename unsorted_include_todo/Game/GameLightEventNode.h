#ifndef _GAME_GAMELIGHTEVENTNODE_H
#define _GAME_GAMELIGHTEVENTNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct GameLightEventNode : public CNode {
	virtual ~GameLightEventNode(); // _00
	virtual void getChildCount();  // _04

	// _00 VTBL
};
} // namespace Game

#endif
