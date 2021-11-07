#ifndef _GAME_ILLUSTRATEDBOOK_DEBUGPARMS_H
#define _GAME_ILLUSTRATEDBOOK_DEBUGPARMS_H

struct CNode {
	virtual void _00() = 0;       // _00
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
