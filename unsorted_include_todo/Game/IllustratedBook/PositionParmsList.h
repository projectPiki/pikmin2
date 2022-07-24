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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace IllustratedBook {
struct PositionParmsList : public CNode {
	virtual ~PositionParmsList(); // _08 (inline)
	virtual void read(Stream&);   // _10
};
} // namespace IllustratedBook
} // namespace Game

#endif
