#ifndef _GAME_GAMELIGHTSUNSETTING_H
#define _GAME_GAMELIGHTSUNSETTING_H

/*
    __vt__Q24Game19GameLightSunSetting:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game19GameLightSunSettingFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
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
