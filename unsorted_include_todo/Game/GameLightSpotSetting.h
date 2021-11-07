#ifndef _GAME_GAMELIGHTSPOTSETTING_H
#define _GAME_GAMELIGHTSPOTSETTING_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct GameLightSpotSetting : public CNode {
	virtual ~GameLightSpotSetting(); // _00
	virtual void getChildCount();    // _04

	// _00 VTBL
};
} // namespace Game

#endif
