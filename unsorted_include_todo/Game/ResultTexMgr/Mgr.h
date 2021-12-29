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
		virtual ~Mgr();         // _00
		virtual void _04() = 0; // _04

		// _00 VTBL
	};
} // namespace ResultTexMgr
} // namespace Game

#endif
