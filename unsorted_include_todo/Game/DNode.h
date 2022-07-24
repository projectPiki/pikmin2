#ifndef _GAME_DNODE_H
#define _GAME_DNODE_H

/*
    __vt__Q24Game5DNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game5DNodeFv
    .4byte getChildCount__Q24Game5DNodeFv
*/

namespace Game {
struct DNode {
	virtual ~DNode();             // _08
	virtual void getChildCount(); // _0C

	DNode();
	void add(Game::DNode*);
	void del();
};
} // namespace Game

#endif
