#ifndef _GAME_AICONSTANTS_H
#define _GAME_AICONSTANTS_H

/*
    __vt__Q24Game11AIConstants:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game11AIConstantsFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
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
