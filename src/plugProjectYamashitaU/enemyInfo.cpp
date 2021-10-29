#include "Game/enemyInfo.h"
namespace Game {
const int gEnemyInfoNum = 100;
// clang-format off
	const struct EnemyInfo gEnemyInfo[100] = {
		//  name                    ID    pID  members flags    model       anim        animgr      texture     param        collision  stone     childID  childNum droptype
			{"Pelplant",          0x0,   -1,   1,      0x0007,  "Pelplant", "Pelplant", "Pelplant", "Pelplant", "Pelplant", "Pelplant", "Pelplant", -1,       0,    4},
			{"Kochappy",          0x1,   -1,   1,      0x0117,  "",         "",         "",         "",         "",         "",         "",         -1,       0,    1},
			{"BlueKochappy",     0x2c,   -1,   1,      0x0117,  "Kochappy", "Kochappy", "Kochappy", "",         "",         "Kochappy", "Kochappy", -1,       0,    1},
			{"YellowKochappy",   0x2d,   -1,   1,      0x0117,  "Kochappy", "Kochappy", "Kochappy", "",         "",         "Kochappy", "Kochappy", -1,       0,    1},
			{"KumaKochappy",     0x4c,   -1,   1,      0x0117,  "",         "Kochappy", "Kochappy", "",         "",         "Kochappy", "",         -1,       0,    1},
			{"Chappy",            0x2,   -1,   1,      0x0097,  "",         "",         "",         "",         "",         "",         "",         -1,       0,    2},
			{"BlueChappy",       0x2a,   -1,   1,      0x0097,  "Chappy",   "Chappy",   "Chappy",   "",         "",         "Chappy",   "Chappy",   -1,       0,    2},
			{"YellowChappy",     0x2b,   -1,   1,      0x0097,  "Chappy",   "Chappy",   "Chappy",   "",         "",         "Chappy",   "Chappy",   -1,       0,    2},
			{"Pom",              0x52,   -1,   1,      0x0001,  "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      -1,       0,    4},
			{"BluePom",           0x3, 0x52,   1,      0x0006,  "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      -1,       0,    4},
			{"RedPom",            0x4, 0x52,   1,      0x0006,  "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      -1,       0,    4},
			{"YellowPom",         0x5, 0x52,   1,      0x0006,  "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      -1,       0,    4},
			{"BlackPom",          0x6, 0x52,   1,      0x0006,  "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      -1,       0,    4},
			{"WhitePom",          0x7, 0x52,   1,      0x0006,  "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      -1,       0,    4},
			{"RandPom",           0x8, 0x52,   1,      0x0006,  "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      "Pom",      -1,       0,    4},
			{"Kogane",            0x9,   -1,   1,      0x0007,  "",         "",         "",         "",         "",         "",         "",         -1,       0,    4},
			{"Wealthy",           0xa,   -1,   1,      0x0007,  "Kogane",   "Kogane",   "Kogane",   "",         "",         "Kogane",   "Kogane",   -1,       0,    4},
			{"Fart",              0xb,   -1,   1,      0x0007,  "Kogane",   "Kogane",   "Kogane",   "",         "",         "Kogane",   "Kogane",   -1,       0,    4},
	};
// clang-format on

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
					return gEnemyInfo[slot];
				}
				slot      = slot + 1;
				enemy_num = enemy_num + -1;
			} while (enemy_num != 0);
		}
		return nullptr;
	}
} // namespace EnemyInfoFunc
} // namespace Game