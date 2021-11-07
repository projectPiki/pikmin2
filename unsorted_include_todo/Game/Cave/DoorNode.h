#ifndef _GAME_CAVE_DOORNODE_H
#define _GAME_CAVE_DOORNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
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
