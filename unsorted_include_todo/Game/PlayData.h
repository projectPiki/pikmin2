#ifndef _GAME_PLAYDATA_H
#define _GAME_PLAYDATA_H

/*
    __vt__Q24Game8PlayData:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game8PlayDataFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct PlayData : public CNode {
	virtual ~PlayData(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
