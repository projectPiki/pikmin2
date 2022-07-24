#ifndef _GAME_ILLUSTRATEDBOOK_POSITIONPARMS_H
#define _GAME_ILLUSTRATEDBOOK_POSITIONPARMS_H

/*
    __vt__Q34Game15IllustratedBook13PositionParms:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game15IllustratedBook13PositionParmsFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game15IllustratedBook13PositionParmsFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace IllustratedBook {
struct PositionParms : public CNode {
	virtual ~PositionParms();   // _08 (inline)
	virtual void read(Stream&); // _10

	PositionParms();
};
} // namespace IllustratedBook
} // namespace Game

#endif
