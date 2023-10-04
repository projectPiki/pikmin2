#ifndef _GAME_PELLETLIST_H
#define _GAME_PELLETLIST_H

#include "Game/pelletConfig.h"

namespace Game {
namespace PelletList {
enum cKind {
	NUMBER_PELLET = 0,
	CARCASS       = 1,
	FRUIT         = 2,
	OTAKARA       = 3,
	ITEM          = 4,
	SIZE, // 5
};

struct Mgr {
	Mgr();

	virtual ~Mgr(); // _08

	void loadResource();

	static int getOffsetFromDictionaryNo(int);
	static PelletConfigList* getConfigList(cKind);
	static int getCount(cKind);
	static PelletConfig* getConfigAndKind(char* config, cKind& kind);
	static PelletConfig* getConfigFromDictionaryNo(int);
	static int getDictionaryNum();
	static void globalInstance();

	inline PelletConfigList* getConfig(int idx) { return &mConfigList[idx]; }

	static Mgr* mInstance;

	// _00 = VTBL
	PelletConfigList* mConfigList; // _04
};

} // namespace PelletList
} // namespace Game

#endif
