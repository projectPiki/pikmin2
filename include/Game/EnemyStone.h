#ifndef _GAME_ENEMYSTONE_H
#define _GAME_ENEMYSTONE_H

#include "CNode.h"
#include "Game/StateMachine.h"
#include "Matrixf.h"
#include "types.h"

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

	struct DrawInfo : CNode {
		virtual ~DrawInfo(); // _00

		u8 _18[0x1C];                       // _18
		FSMState<DrawInfo>* m_currentState; // _34
		float _38;                          // _38
		float _3C;                          // _3C
		void* _40;                          // _40
		Matrixf* _44;                       // _44
	};
} // namespace EnemyStone
} // namespace Game

#endif
