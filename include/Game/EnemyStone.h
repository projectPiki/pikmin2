#ifndef _GAME_ENEMYSTONE_H
#define _GAME_ENEMYSTONE_H

#include "types.h"
#include "Matrixf.h"

namespace Game {
namespace EnemyStone {
	struct ObjInfo {
		ObjInfo();

		char* m_name;          // _00
		s32 _04;               // _04
		Matrixf m_modelMatrix; // _08
	};

	struct Info {
		void setup(Stream& stream);

		u8 m_infoCnt;       // _00
		ObjInfo* m_infoArr; // _04
	};
} // namespace EnemyStone
} // namespace Game

#endif
