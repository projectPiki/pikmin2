#ifndef _GAME_RESULTTEXMGR_MGR_H
#define _GAME_RESULTTEXMGR_MGR_H

/*
    __vt__Q34Game12ResultTexMgr3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game12ResultTexMgr3MgrFv
    .4byte 0
*/

namespace Game {
namespace ResultTexMgr {
struct Mgr {
	virtual ~Mgr();         // _08
	virtual void _0C() = 0; // _0C

	Mgr();
	void create(Game::ResultTexMgr::Arg&);
	void getOtakaraItemTexture(int);
	void getOtakaraTexture(int);
	void getItemTexture(int);
	void getCarcassTexture();
};
} // namespace ResultTexMgr
} // namespace Game

#endif
