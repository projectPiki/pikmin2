#ifndef _GAME_EDITORROUTEMGR_WPNODE_H
#define _GAME_EDITORROUTEMGR_WPNODE_H

/*
    __vt__Q34Game14EditorRouteMgr6WPNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game14EditorRouteMgr6WPNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace EditorRouteMgr {
struct WPNode : public CNode {
	virtual ~WPNode(); // _08 (weak)
};
} // namespace EditorRouteMgr
} // namespace Game

#endif
