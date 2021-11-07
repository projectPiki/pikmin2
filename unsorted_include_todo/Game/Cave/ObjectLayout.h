#ifndef _GAME_CAVE_OBJECTLAYOUT_H
#define _GAME_CAVE_OBJECTLAYOUT_H

namespace Game {
namespace Cave {
	struct ObjectLayout {
		virtual void getCount(int);     // _00
		virtual void getNode(int, int); // _04

		// _00 VTBL
	};
} // namespace Cave
} // namespace Game

#endif
