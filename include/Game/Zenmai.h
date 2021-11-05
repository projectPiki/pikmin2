#ifndef _GAME_ZENMAI_H
#define _GAME_ZENMAI_H

#include "types.h"

namespace Sys {
struct Cylinder;
}

namespace Game {
struct EnemyBirthArg;

namespace Zenmai {
	struct Mgr {
		Mgr(int, unsigned char);
		~Mgr();

		void birth(Game::EnemyBirthArg&);
		void createObj(int);
		void doAlloc();
		void doLoadBmd(void*);
		void getEnemy(int);
		void getEnemyTypeID();
	};

	struct Obj {
		Obj();
		~Obj();

		void getEnemyTypeID();
		void getLODCylinder(Sys::Cylinder&);
		void setParameters();
	};
} // namespace Zenmai
} // namespace Game

#endif
