#ifndef _GAME_CAVE_ITEMINFO_H
#define _GAME_CAVE_ITEMINFO_H

/*
    __vt__Q34Game4Cave8ItemInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave8ItemInfoFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game4Cave8ItemInfoFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace Cave {
struct ItemInfo : public CNode {
	virtual ~ItemInfo();        // _08 (inline)
	virtual void read(Stream&); // _10
};
} // namespace Cave
} // namespace Game

#endif
