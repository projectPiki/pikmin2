#ifndef _GAME_GAMELIGHTSETTINGBASE_H
#define _GAME_GAMELIGHTSETTINGBASE_H

/*
    __vt__Q24Game20GameLightSettingBase:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game20GameLightSettingBaseFR6Stream
*/

namespace Game {
struct GameLightSettingBase {
	virtual void read(Stream&); // _08 (weak)
};
} // namespace Game

#endif
