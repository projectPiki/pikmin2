#ifndef _GAME_MOVIECONTEXT_H
#define _GAME_MOVIECONTEXT_H

/*
    __vt__Q24Game12MovieContext:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game12MovieContextFv
    .4byte getChildCount__5CNodeFv
    .4byte getChild__Q24Game12MovieContextFv
    .4byte getNext__Q24Game12MovieContextFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct MovieContext : public CNode {
	virtual ~MovieContext(); // _08 (inline)
	virtual void getChild(); // _10 (inline)
	virtual void getNext();  // _14 (inline)

	MovieContext();
};
} // namespace Game

#endif
