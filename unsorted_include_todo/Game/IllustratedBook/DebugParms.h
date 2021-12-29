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
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace IllustratedBook {
	struct DebugParms : public CNode {
		virtual ~DebugParms();        // _00
		virtual void getChildCount(); // _04
		virtual void _08() = 0;       // _08

		// _00 VTBL
	};
} // namespace IllustratedBook
} // namespace Game

#endif
