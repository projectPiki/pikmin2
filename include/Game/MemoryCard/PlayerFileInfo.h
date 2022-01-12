#ifndef _GAME_MEMORYCARD_PLAYERFILEINFO_H
#define _GAME_MEMORYCARD_PLAYERFILEINFO_H

#include "Game/MemoryCard/Player.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"

extern char gStrMemoryCardMgrCpp[25];
extern char gStrMemoryCardMgrP2Assert[9];

namespace Game {
namespace MemoryCard {
struct PlayerFileInfo {
	PlayerFileInfo();

	inline void checkValidity(int idx)
	{
		bool valid = idx >= 0 && idx < 3;
		if (!valid) {
			JUTException::panic_f(gStrMemoryCardMgrCpp, 396, gStrMemoryCardMgrP2Assert);
		}
	}

	Player* getPlayer(int idx);

	u8 isBrokenFile(int idx);
	bool isNewFile(int idx);

	Player m_players[3]; // _00
};
} // namespace MemoryCard
} // namespace Game

#endif
