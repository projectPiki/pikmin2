#ifndef _GAME_GAMESPOTLIGHTSETTING_H
#define _GAME_GAMESPOTLIGHTSETTING_H

/*
    __vt__Q24Game20GameSpotLightSetting:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game20GameSpotLightSettingFR6Stream
*/

namespace Game {
struct GameSpotLightSetting {
	virtual void read(Stream&); // _08 (weak)
};
} // namespace Game

#endif
