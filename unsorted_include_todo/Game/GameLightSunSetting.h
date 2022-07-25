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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct GameLightSunSetting : public CNode {
	virtual ~GameLightSunSetting(); // _08 (weak)
};
} // namespace Game

#endif
