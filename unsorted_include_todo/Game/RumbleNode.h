#ifndef _GAME_RUMBLENODE_H
#define _GAME_RUMBLENODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct RumbleNode : public CNode {
	virtual ~RumbleNode();        // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
