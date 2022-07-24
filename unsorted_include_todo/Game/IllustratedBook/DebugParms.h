#ifndef _GAME_ILLUSTRATEDBOOK_DEBUGPARMS_H
#define _GAME_ILLUSTRATEDBOOK_DEBUGPARMS_H

/*
    __vt__Q34Game15IllustratedBook10DebugParms:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game15IllustratedBook10DebugParmsFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
namespace IllustratedBook {
struct DebugParms : public CNode {
	virtual ~DebugParms();  // _08
	virtual void _10() = 0; // _10

	// _00 VTBL
};
} // namespace IllustratedBook
} // namespace Game

#endif
