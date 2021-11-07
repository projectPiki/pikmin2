#ifndef _GAME_GAMELIGHTSUNSETTING_H
#define _GAME_GAMELIGHTSUNSETTING_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct GameLightSunSetting : public CNode {
	virtual ~GameLightSunSetting(); // _00
	virtual void getChildCount();   // _04

	// _00 VTBL
};
} // namespace Game

#endif
