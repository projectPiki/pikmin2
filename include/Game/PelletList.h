#ifndef _GAME_PELLETLIST_H
#define _GAME_PELLETLIST_H

#include "Game/pelletConfig.h"

namespace Game {
namespace PelletList {
/**
 * @enum cKind
 * @brief Enumeration representing the different kinds of pellets.
 */
enum cKind {
	PLK_NumberPellet = 0, /**< Number pellet kind */
	PLK_Carcass      = 1, /**< Carcass kind */
	PLK_Fruit        = 2, /**< Fruit kind */
	PLK_Otakara      = 3, /**< Otakara kind */
	PLK_Item         = 4, /**< Item kind */
	PLK_Size,             /**< Size of the enumeration */
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
