#ifndef _GAME_GAMELIGHTSPOTSETTING_H
#define _GAME_GAMELIGHTSPOTSETTING_H

/*
    __vt__Q24Game20GameLightSpotSetting:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game20GameLightSpotSettingFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct GameLightSpotSetting : public CNode {
	virtual ~GameLightSpotSetting(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
