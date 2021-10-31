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

	/**
	 * Common loop used by at least getEnemyName.
	 */
	inline EnemyInfo* getInfo(int enemyID, int enemyFlags) {
		EnemyInfo* result = nullptr;
		for (int enemy_num = gEnemyInfoNum, slot = 0; enemy_num > 0; --enemy_num) {
			if ((enemyID == gEnemyInfo[slot].ID)
				&& ((enemyFlags & (uint)gEnemyInfo[slot].flags) != 0)) {
				result = &gEnemyInfo[slot];
				break;
			}
			++slot;
		}
		return result;
	}

	char* getEnemyName(int enemyID, int enemyFlags)
	{
		EnemyInfo* result = getInfo(enemyID, enemyFlags);
		return (result) ? result->name : nullptr;
	}


	// TODO: Not Matching.
	char* getEnemyResName(int enemyID, int enemyFlags) {
		if (enemyID < 0x3f) {
			if (0x3b < enemyID) {
				return "Otakara";
			}
		}
		if ((enemyID == 0x27) || (enemyID == 0x40)) {
			enemyID = PanHouse;
		}
		EnemyInfo* result = getInfo(enemyID, enemyFlags);
		return (result->anim_name == "") ? result->name : result->anim_name;
	}
} // namespace EnemyInfoFunc
} // namespace Game
