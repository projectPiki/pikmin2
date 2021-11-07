#ifndef _GAME_RESULTTEXMGR_MGR_H
#define _GAME_RESULTTEXMGR_MGR_H

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
