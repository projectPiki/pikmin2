#ifndef _GAME_DNODE_H
#define _GAME_DNODE_H

namespace Game {
struct DNode {
	virtual ~DNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
