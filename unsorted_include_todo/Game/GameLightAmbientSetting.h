#ifndef _GAME_GAMELIGHTAMBIENTSETTING_H
#define _GAME_GAMELIGHTAMBIENTSETTING_H

namespace Game {
struct GameLightSettingBase {
	virtual void read(Stream&); // _00

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct GameLightAmbientSetting : public GameLightSettingBase {
	virtual void read(Stream&); // _00

	// _00 VTBL
};
} // namespace Game

#endif
