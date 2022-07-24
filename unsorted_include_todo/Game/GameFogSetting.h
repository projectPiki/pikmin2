#ifndef _GAME_GAMEFOGSETTING_H
#define _GAME_GAMEFOGSETTING_H

/*
    __vt__Q24Game14GameFogSetting:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game14GameFogSettingFR6Stream
*/

namespace Game {
struct GameFogSetting {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace Game

#endif
