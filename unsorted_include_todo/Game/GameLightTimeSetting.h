#ifndef _GAME_GAMELIGHTTIMESETTING_H
#define _GAME_GAMELIGHTTIMESETTING_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct GameLightTimeSetting : public CNode {
	virtual ~GameLightTimeSetting(); // _00
	virtual void getChildCount();    // _04

	// _00 VTBL
};
} // namespace Game

#endif
