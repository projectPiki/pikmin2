#ifndef _GAME_ILLUSTRATEDBOOK_POSITIONPARMSLIST_H
#define _GAME_ILLUSTRATEDBOOK_POSITIONPARMSLIST_H

/*
    __vt__Q34Game15IllustratedBook17PositionParmsList:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game15IllustratedBook17PositionParmsListFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game15IllustratedBook17PositionParmsListFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace IllustratedBook {
	struct PositionParmsList : public CNode {
		virtual ~PositionParmsList(); // _00
		virtual void getChildCount(); // _04
		virtual void read(Stream&);   // _08

		// _00 VTBL
	};
} // namespace IllustratedBook
} // namespace Game

#endif
