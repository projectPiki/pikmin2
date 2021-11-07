#ifndef _GAME_MOVIELIST_H
#define _GAME_MOVIELIST_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct MovieList : public CNode {
	virtual ~MovieList();         // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
