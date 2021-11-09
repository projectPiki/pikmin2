#ifndef _GAME_ITEMGATE_H
#define _GAME_ITEMGATE_H

#include "Game/itemMgr.h"

namespace Game {
struct ItemGateMgr : public BaseItemMgr {
	virtual char* getCaveName(int); // _6C
	virtual int   getCaveID(char*); // _70
};

extern ItemGateMgr* itemGateMgr;
} // namespace Game

#endif
