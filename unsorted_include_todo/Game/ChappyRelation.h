#ifndef _GAME_CHAPPYRELATION_H
#define _GAME_CHAPPYRELATION_H

/*
    __vt__Q24Game14ChappyRelation:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game14ChappyRelationFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct ChappyRelation : public CNode {
	virtual ~ChappyRelation(); // _08 (inline)
};
} // namespace Game

#endif
