#ifndef _GAME_ROOMLINK_H
#define _GAME_ROOMLINK_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct RoomLink : public CNode {
	virtual ~RoomLink();          // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
