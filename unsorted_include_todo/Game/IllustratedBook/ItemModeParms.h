#ifndef _GAME_ILLUSTRATEDBOOK_ITEMMODEPARMS_H
#define _GAME_ILLUSTRATEDBOOK_ITEMMODEPARMS_H

/*
    __vt__Q34Game15IllustratedBook13ItemModeParms:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game15IllustratedBook13ItemModeParmsFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game15IllustratedBook13ItemModeParmsFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace IllustratedBook {
struct ItemModeParms : public CNode {
	virtual ~ItemModeParms();   // _08 (inline)
	virtual void read(Stream&); // _10
};
} // namespace IllustratedBook
} // namespace Game

#endif
