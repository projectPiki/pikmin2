#ifndef _GAME_GAMEDIFFUSELIGHTSETTING_H
#define _GAME_GAMEDIFFUSELIGHTSETTING_H

namespace Game {
struct GameLightSettingBase {
	virtual void read(Stream&); // _00

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct GameDiffuseLightSetting : public GameLightSettingBase {
	virtual void read(Stream&); // _00

	// _00 VTBL
};
} // namespace Game

#endif
