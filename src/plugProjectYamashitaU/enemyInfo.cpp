#include "Game/enemyInfo.h"
namespace Game {
namespace EnemyInfoFunc {
	EnemyInfo* getEnemyInfo(int enemyID, int enemyFlags)
	{
		EnemyInfo current_enemyInfo;
		int slot;
		int enemy_num;

		slot              = 0;
		current_enemyInfo = gEnemyInfo[slot];
		enemy_num         = gEnemyInfoNum;
		if (0 < gEnemyInfoNum) {
			do {
				if ((enemyID == current_enemyInfo.ID)
				    && ((enemyFlags & (unsigned int)current_enemyInfo.flags)
				        != 0)) {
					return &gEnemyInfo[slot];
				}
				slot      = slot + 1;
				enemy_num = enemy_num + -1;
			} while (enemy_num != 0);
		}
		return nullptr;
	}
} // namespace EnemyInfoFunc
} // namespace Game
