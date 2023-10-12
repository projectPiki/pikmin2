#ifndef _GAME_MEMORYCARD_PLAYERFILEINFO_H
#define _GAME_MEMORYCARD_PLAYERFILEINFO_H

#include "Game/MemoryCard/Player.h"

extern char gStrMemoryCardMgrCpp[25];
extern char gStrMemoryCardMgrP2Assert[9];

namespace Game {
namespace MemoryCard {
struct PlayerFileInfo {
	PlayerFileInfo();

	Player* getPlayer(int idx);

	bool isBrokenFile(int idx);
	bool isNewFile(int idx);

	Player mPlayers[3]; // _00
};
} // namespace MemoryCard
} // namespace Game

#endif
