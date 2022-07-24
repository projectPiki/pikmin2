#ifndef _GAME_GAMEDIFFUSELIGHTSETTING_H
#define _GAME_GAMEDIFFUSELIGHTSETTING_H

/*
    __vt__Q24Game23GameDiffuseLightSetting:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game20GameLightSettingBaseFR6Stream
*/

namespace Game {
struct GameLightSettingBase {
	virtual void read(Stream&); // _08 (inline)
};
} // namespace Game

namespace Game {
struct GameDiffuseLightSetting : public GameLightSettingBase {
};
} // namespace Game

#endif
