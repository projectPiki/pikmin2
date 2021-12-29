#ifndef _GAME_PELLETLIST_MGR_H
#define _GAME_PELLETLIST_MGR_H

/*
    __vt__Q34Game10PelletList3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game10PelletList3MgrFv
    .4byte 0
*/

namespace Game {
namespace PelletList {
	struct Mgr {
		virtual ~Mgr();         // _00
		virtual void _04() = 0; // _04

		// _00 VTBL
	};
} // namespace PelletList
} // namespace Game

#endif
