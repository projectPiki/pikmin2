#ifndef _GAME_MOVIELIST_H
#define _GAME_MOVIELIST_H

/*
    __vt__Q24Game9MovieList:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game9MovieListFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct MovieList : public CNode {
	virtual ~MovieList(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
