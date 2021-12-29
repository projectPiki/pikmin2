#ifndef _GAME_MOVIECONFIG_H
#define _GAME_MOVIECONFIG_H

/*
    __vt__Q24Game11MovieConfig:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game11MovieConfigFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct MovieConfig : public CNode {
	virtual ~MovieConfig();       // _00
	virtual void getChildCount(); // _04
	virtual void _08() = 0;       // _08

	// _00 VTBL
};
} // namespace Game

#endif
