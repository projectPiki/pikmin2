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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace VsGame {
struct StageList : public CNode {
	virtual Vs ~StageList(); // _08 (weak)

	StageList();
	void read(Stream&);
	void getStageData(int);
};
} // namespace VsGame
} // namespace Game

#endif
