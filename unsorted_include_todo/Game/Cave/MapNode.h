#ifndef _GAME_CAVE_MAPNODE_H
#define _GAME_CAVE_MAPNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace Cave {
	struct MapNode : public CNode {
		virtual ~MapNode();           // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace Cave
} // namespace Game

#endif
