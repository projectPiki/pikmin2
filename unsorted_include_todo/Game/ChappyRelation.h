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
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct ChappyRelation : public CNode {
	virtual ~ChappyRelation();    // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
