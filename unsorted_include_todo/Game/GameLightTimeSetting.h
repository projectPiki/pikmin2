#ifndef _GAME_GAMELIGHTTIMESETTING_H
#define _GAME_GAMELIGHTTIMESETTING_H

/*
    __vt__Q24Game20GameLightTimeSetting:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game20GameLightTimeSettingFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
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
