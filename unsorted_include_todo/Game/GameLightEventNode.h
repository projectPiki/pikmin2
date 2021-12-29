#ifndef _GAME_GAMELIGHTEVENTNODE_H
#define _GAME_GAMELIGHTEVENTNODE_H

/*
    __vt__Q24Game18GameLightEventNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game18GameLightEventNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct GameLightEventNode : public CNode {
	virtual ~GameLightEventNode(); // _00
	virtual void getChildCount();  // _04

	// _00 VTBL
};
} // namespace Game

#endif
