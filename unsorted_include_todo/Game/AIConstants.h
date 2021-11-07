#ifndef _GAME_AICONSTANTS_H
#define _GAME_AICONSTANTS_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct AIConstants : public CNode {
	virtual ~AIConstants();       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
