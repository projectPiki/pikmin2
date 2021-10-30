#include "Game/enemyInfo.h"
#include "types.h"
namespace Game {
namespace EnemyInfoFunc {
	EnemyInfo* getEnemyInfo(int enemyID, int enemyFlags)
	{
		EnemyInfo* result = nullptr;
		int slot = 0;
		int enemy_num = gEnemyInfoNum;

		while (enemy_num > 0) {
			if ((enemyID == gEnemyInfo[slot].ID)
				&& ((enemyFlags & (uint)gEnemyInfo[slot].flags)
					!= 0)) {
				result = gEnemyInfo + slot;
				break;
			}
			--enemy_num;
			++slot;
		}
		return result;
	}
} // namespace EnemyInfoFunc
} // namespace Game
