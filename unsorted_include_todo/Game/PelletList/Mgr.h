#ifndef _GAME_PELLETLIST_MGR_H
#define _GAME_PELLETLIST_MGR_H

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
