#ifndef _GAME_VSGAME_STAGEDATA_H
#define _GAME_VSGAME_STAGEDATA_H

/*
    __vt__Q34Game6VsGame9StageData:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game6VsGame9StageDataFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace VsGame {
	struct StageData : public CNode {
		virtual Vs ~StageData();      // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace VsGame
} // namespace Game

#endif
