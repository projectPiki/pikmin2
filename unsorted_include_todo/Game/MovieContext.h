#ifndef _GAME_MOVIECONTEXT_H
#define _GAME_MOVIECONTEXT_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct MovieContext : public CNode {
	virtual ~MovieContext();      // _00
	virtual void getChildCount(); // _04
	virtual void getChild();      // _08
	virtual void getNext();       // _0C

	// _00 VTBL
};
} // namespace Game

#endif
