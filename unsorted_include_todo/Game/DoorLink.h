#ifndef _GAME_DOORLINK_H
#define _GAME_DOORLINK_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct DoorLink : public CNode {
	virtual ~DoorLink();          // _00
	virtual void getChildCount(); // _04
	virtual void _08() = 0;       // _08

	// _00 VTBL
};
} // namespace Game

#endif
