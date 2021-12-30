#ifndef _GAME_PELLETLIST_H
#define _GAME_PELLETLIST_H

#include "Game/pelletConfig.h"

namespace Game {
struct PelletList {
	enum cKind {
		NUMBER_PELLET = 0,
		CARCASS,
		FRUIT,
		OTAKARA,
		ITEM,
		SIZE,

		// Force the compiler to use an int to represent the enum
		DONT_USE_1 = -1,
		DONT_USE_2 = 0xFFFFFFFF,
	};

	struct Mgr {
		static PelletConfigList* getConfigList(cKind);
		static int getCount(cKind);

		static PelletConfig* getConfigAndKind(char* config, cKind& kind);

		inline Mgr() { } // TODO: figure out contents
		virtual ~Mgr();

		PelletConfigList* m_configList; // _04

		static Mgr* mInstance;
	};
};
} // namespace Game

#endif
