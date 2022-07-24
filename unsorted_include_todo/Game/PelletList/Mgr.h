#ifndef _GAME_PELLETLIST_MGR_H
#define _GAME_PELLETLIST_MGR_H

/*
    __vt__Q34Game10PelletList3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game10PelletList3MgrFv
*/

namespace Game {
namespace PelletList {
struct Mgr {
	virtual ~Mgr(); // _08

	void getConfigList(Game::PelletList::cKind);
	void getCount(Game::PelletList::cKind);
	void getConfigAndKind(char*, Game::PelletList::cKind&);
	void loadResource();
	void getDictionaryNum();
	void getConfigFromDictionaryNo(int);
	void getOffsetFromDictionaryNo(int);
	void globalInstance();
};
} // namespace PelletList
} // namespace Game

#endif
