#ifndef _GAME_GAMESPECLIGHTSETTING_H
#define _GAME_GAMESPECLIGHTSETTING_H

namespace Game {
struct GameLightSettingBase {
	virtual void read(Stream&); // _00

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct GameSpecLightSetting : public GameLightSettingBase {
	virtual void read(Stream&); // _00

	// _00 VTBL
};
} // namespace Game

#endif
