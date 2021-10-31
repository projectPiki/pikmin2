#include "Game/enemyInfo.h"
#include "Dolphin/string.h"
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

	char* getEnemyResName(int enemyID, int enemyFlags) {
		switch (enemyID) {
			case FireOtakara:
			case WaterOtakara:
			case GasOtakara:
			case ElecOtakara:
				return "Otakara";
				break;
			default:
				if ((enemyID == INVALID) || (enemyID == INVALID2)) {
					enemyID = PanHouse;
				}
				EnemyInfo* result = getInfo(enemyID, enemyFlags);
				return (result->anim_name == "") ? result->name : result->anim_name;
		}
	}

	char getEnemyMember(int enemyID, int enemyFlags) {
		EnemyInfo* result = getInfo(enemyID, enemyFlags);
		return (result) ? result->members : '\0';
	}

	int getEnemyID(char * name, int enemyFlags) {
		EnemyInfo* result = nullptr;
		for (int slot = 0; slot < gEnemyInfoNum; ++slot) {
			if ((stricmp(gEnemyInfo[slot].name, name) == 0)
				&& ((enemyFlags & (uint)gEnemyInfo[slot].flags) != 0)) {
				result = &gEnemyInfo[slot];
				break;
			}
		}
		return result->ID;
	}
} // namespace EnemyInfoFunc
} // namespace Game
