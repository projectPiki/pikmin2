#ifndef _GAME_VSGAME_STAGELIST_H
#define _GAME_VSGAME_STAGELIST_H

/*
    __vt__Q34Game6VsGame9StageList:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game6VsGame9StageListFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace VsGame {
	struct StageList : public CNode {
		virtual Vs ~StageList();      // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace VsGame
} // namespace Game

#endif
