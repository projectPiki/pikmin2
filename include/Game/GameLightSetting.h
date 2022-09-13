#ifndef _GAME_GAMELIGHTSETTING_H
#define _GAME_GAMELIGHTSETTING_H

#include "types.h"
#include "Parameters.h"
#include "stream.h"

namespace Game {
struct GameLightSettingBase {
	struct Settings : public Parameters {
		inline Settings(); // probably

		Parm<int> m_red;   // _0C, u800
		Parm<int> m_green; // _34, u801
		Parm<int> m_blue;  // _5C, u802
		Parm<int> m_alpha; // _84, u803
	};

	Settings m_settings; // _00
	// _B0 = VTBL

	virtual void read(Stream&); // _08 (weak)
};

struct GameDiffuseLightSetting : public GameLightSettingBase {

	// _B0      = VTBL
	// _00-_B4  = GameLightSettingBase
};

struct GameFogSetting : public GameLightSettingBase {
	GameFogSetting();

	virtual void read(Stream&); // _08 (weak)

	// _B0      = VTBL
	// _00-_B4  = GameLightSettingBase
};

struct GameLightAmbientSetting : public GameLightSettingBase {

	// _B0      = VTBL
	// _00-_B4  = GameLightSettingBase
};

struct GameShadowSetting : public GameLightSettingBase {
	virtual void read(Stream&); // _08 (weak)

	// _B0      = VTBL
	// _00-_B4  = GameLightSettingBase
};

struct GameSpecLightSetting : public GameLightSettingBase {

	// _B0      = VTBL
	// _00-_B4  = GameLightSettingBase
};

struct GameSpotLightSetting : public GameLightSettingBase {
	virtual void read(Stream&); // _08 (weak)

	// _B0      = VTBL
	// _00-_B4  = GameLightSettingBase
};
} // namespace Game

#endif
