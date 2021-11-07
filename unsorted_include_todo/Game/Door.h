#ifndef _GAME_DOOR_H
#define _GAME_DOOR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct Door : public CNode {
	virtual ~Door();              // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
