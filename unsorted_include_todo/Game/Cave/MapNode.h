#ifndef _GAME_CAVE_MAPNODE_H
#define _GAME_CAVE_MAPNODE_H

/*
    __vt__Q34Game4Cave7MapNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave7MapNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
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
