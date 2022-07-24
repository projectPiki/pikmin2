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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct GameLightEventNode : public CNode {
	virtual ~GameLightEventNode(); // _08 (inline)

	void update(Game::GameLightMgr*);
	void updateCommon(Game::GameLightMgr*, bool);
	void calcColor(Color4*);
	GameLightEventNode();
};
} // namespace Game

#endif
