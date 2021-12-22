#include "Game/enemyInfo.h"
#include "Dolphin/string.h"
#include "types.h"

namespace Game {
namespace EnemyInfoFunc {
	/**
	 * Common loop used by at least getEnemyName.
	 */
	inline EnemyInfo* getInfo(s32 enemyID, s32 enemyFlags)
	{
		EnemyInfo* result = nullptr;
		for (s32 enemy_num = gEnemyInfoNum, slot = 0; enemy_num > 0;
		     --enemy_num) {
			if ((enemyID == gEnemyInfo[slot].m_id)
			    && ((enemyFlags & (u32)gEnemyInfo[slot].m_flags) != 0)) {
				result = &gEnemyInfo[slot];
				break;
			}
			++slot;
		}
		return result;
	}

	EnemyInfo* getEnemyInfo(s32 enemyID, s32 enemyFlags)
	{
		EnemyInfo* result = nullptr;
		s32 slot          = 0;
		s32 enemy_num     = gEnemyInfoNum;

		while (enemy_num > 0) {
			if ((enemyID == gEnemyInfo[slot].m_id)
			    && ((enemyFlags & (u32)gEnemyInfo[slot].m_flags) != 0)) {
				result = gEnemyInfo + slot;
				break;
			}
			--enemy_num;
			++slot;
		}
		return result;
	}

	char* getEnemyName(s32 enemyID, s32 enemyFlags)
	{
		EnemyInfo* result = getInfo(enemyID, enemyFlags);
		return result ? result->m_name : nullptr;
	}

	char* getEnemyResName(s32 enemyID, s32 enemyFlags)
	{
		switch (enemyID) {
		case EnemyTypeID::EnemyID_FireOtakara:
		case EnemyTypeID::EnemyID_WaterOtakara:
		case EnemyTypeID::EnemyID_GasOtakara:
		case EnemyTypeID::EnemyID_ElecOtakara:
			return "Otakara";
			break;
		}

		if (enemyID == EnemyTypeID::EnemyID_INVALID
		    || enemyID == EnemyTypeID::EnemyID_INVALID2) {
			enemyID = EnemyTypeID::EnemyID_PanHouse;
		}

		EnemyInfo* result = getInfo(enemyID, enemyFlags);
		return result->m_animName == "" ? result->m_name : result->m_animName;
	}

	char getEnemyMember(s32 enemyID, s32 enemyFlags)
	{
		EnemyInfo* result = getInfo(enemyID, enemyFlags);
		return result ? result->m_members : '\0';
	}

	s32 getEnemyID(char* name, s32 enemyFlags)
	{
		EnemyInfo* result = nullptr;
		for (s32 slot = 0; slot < gEnemyInfoNum; ++slot) {
			if ((stricmp(gEnemyInfo[slot].m_name, name) == 0)
			    && ((enemyFlags & (u32)gEnemyInfo[slot].m_flags) != 0)) {
				result = &gEnemyInfo[slot];
				break;
			}
		}
		return result->m_id;
	}
} // namespace EnemyInfoFunc
} // namespace Game
