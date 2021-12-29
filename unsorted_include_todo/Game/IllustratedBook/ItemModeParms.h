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
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace IllustratedBook {
	struct ItemModeParms : public CNode {
		virtual ~ItemModeParms();     // _00
		virtual void getChildCount(); // _04
		virtual void read(Stream&);   // _08

		// _00 VTBL
	};
} // namespace IllustratedBook
} // namespace Game

#endif
