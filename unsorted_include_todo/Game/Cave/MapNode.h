#ifndef _GAME_CAVE_MAPNODE_H
#define _GAME_CAVE_MAPNODE_H

/*
    __vt__Q34Game4Cave7MapNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave7MapNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace Cave {
struct MapNode : public CNode {
	virtual ~MapNode(); // _08 (inline)

	MapNode();
	void setOffset(int, int);
	void getDoorDirect(int);
	void getDoorOffset(int, int&, int&);
	void isDoorSet(Game::Cave::DoorNode*, int, int, int);
	void setDoorClose(int, Game::Cave::MapNode*, int);
	void detachDoorClose();
	void isDoorClose(int);
	void resetDoorScore();
	void setDoorScore(int, int);
	void isDoorScoreSetDone(int);
	void getDoorNode(int);
	void getAdjustNode(int);
	void isGateSetDoor(int);
	void getGateScore(int);
	void setEnemyScore();
	void setNodeScore(int);
	void copyNodeScoreToVersusScore();
	void subNodeScoreToVersusScore();
	void draw(float, float, float);
	void getNodeOffsetX();
	void getNodeOffsetY();
	void getEnemyScore();
	void getNodeScore();
	void getVersusScore();
	void getUnitName();
	void getNodeCentreOffset(float&, float&);
	void getDirection();
	void getBaseGenGlobalPosition(Game::Cave::BaseGen*);
	void getDoorGlobalPosition(int);
	void getBaseGenGlobalDirection(Game::Cave::BaseGen*);
	void getDoorGlobalDirection(int);
	void getNumDoors();
	void __defctor();
};
} // namespace Cave
} // namespace Game

#endif
