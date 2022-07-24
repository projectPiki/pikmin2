#ifndef _GAME_GAMESHADOWSETTING_H
#define _GAME_GAMESHADOWSETTING_H

/*
    __vt__Q24Game17GameShadowSetting:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game17GameShadowSettingFR6Stream
*/

namespace Game {
struct GameShadowSetting {
	virtual void read(Stream&); // _08 (inline)
};
} // namespace Game

#endif
