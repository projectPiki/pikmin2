#ifndef _GAME_PELLETLIST_H
#define _GAME_PELLETLIST_H

#include "Game/pelletConfig.h"

namespace Game {
namespace PelletList {
enum cKind {
	NUMBER_PELLET = 0,
	CARCASS,
	FRUIT,
	OTAKARA,
	ITEM,
	SIZE,
};

struct Mgr {
	inline Mgr() { } // TODO: figure out contents

	virtual ~Mgr(); // _08

	void loadResource();
	void getDictionaryNum();
	void getConfigFromDictionaryNo(int);
	void getOffsetFromDictionaryNo(int);
	void globalInstance();

	static PelletConfigList* getConfigList(cKind);
	static int getCount(cKind);
	static PelletConfig* getConfigAndKind(char* config, cKind& kind);

	static Mgr* mInstance;

	// _00 = VTBL
	PelletConfigList* m_configList; // _04
};
} // namespace PelletList
} // namespace Game

#endif
