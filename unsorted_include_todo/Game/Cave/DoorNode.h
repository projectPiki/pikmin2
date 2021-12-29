#ifndef _GAME_CAVE_DOORNODE_H
#define _GAME_CAVE_DOORNODE_H

/*
    __vt__Q34Game4Cave8DoorNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave8DoorNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace Cave {
	struct DoorNode : public CNode {
		virtual ~DoorNode();          // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace Cave
} // namespace Game

#endif
