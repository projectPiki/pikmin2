#ifndef _GAME_LIMITGEN_H
#define _GAME_LIMITGEN_H

/*
    __vt__Q24Game8LimitGen:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game8LimitGenFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct LimitGen : public CNode {
	virtual ~LimitGen(); // _08 (inline)
};
} // namespace Game

#endif
