#ifndef _GAME_ILLUSTRATEDBOOK_ITEMPARMS_H
#define _GAME_ILLUSTRATEDBOOK_ITEMPARMS_H

/*
    __vt__Q34Game15IllustratedBook9ItemParms:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game15IllustratedBook9ItemParmsFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game15IllustratedBook9ItemParmsFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace IllustratedBook {
	struct ItemParms : public CNode {
		virtual ~ItemParms();         // _00
		virtual void getChildCount(); // _04
		virtual void read(Stream&);   // _08

		// _00 VTBL
	};
} // namespace IllustratedBook
} // namespace Game

#endif
