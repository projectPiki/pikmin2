#ifndef _GAME_CAVE_ENEMYNODE_H
#define _GAME_CAVE_ENEMYNODE_H

/*
    __vt__Q34Game4Cave9EnemyNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave9EnemyNodeFv
    .4byte getChildCount__5CNodeFv
    .4byte getObjectId__Q34Game4Cave9EnemyNodeFv
    .4byte getObjectType__Q34Game4Cave9EnemyNodeFv
    .4byte getBirthCount__Q34Game4Cave9EnemyNodeFv
    .4byte getDirection__Q34Game4Cave9EnemyNodeFv
    .4byte getBirthDoorIndex__Q34Game4Cave9EnemyNodeFv
    .4byte getBirthPosition__Q34Game4Cave9EnemyNodeFRfRf
    .4byte getExtraCode__Q34Game4Cave9EnemyNodeFv
    .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct ObjectLayoutNode {
	virtual ~ObjectLayoutNode();                   // _08 (weak)
	virtual void _0C() = 0;                        // _0C
	virtual void getObjectId();                    // _10
	virtual void getObjectType();                  // _14
	virtual void getBirthCount();                  // _18
	virtual void getDirection();                   // _1C
	virtual void getBirthDoorIndex();              // _20
	virtual void getBirthPosition(float&, float&); // _24
	virtual void getExtraCode();                   // _28
	virtual void isFixedBattery();                 // _2C (weak)
};
} // namespace Game

namespace Game {
namespace Cave {
struct EnemyNode : public CNode, public ObjectLayoutNode {
	virtual ~EnemyNode();                          // _08 (weak)
	virtual void getObjectId();                    // _10
	virtual void getObjectType();                  // _14
	virtual void getBirthCount();                  // _18
	virtual void getDirection();                   // _1C
	virtual void getBirthDoorIndex();              // _20
	virtual void getBirthPosition(float&, float&); // _24
	virtual void getExtraCode();                   // _28

	EnemyNode();
	EnemyNode(Game::Cave::EnemyUnit*, Game::Cave::BaseGen*, int);
	void makeGlobalData(Game::Cave::MapNode*);
	void setGlobalData(Vector3<float>&, float);
	void setBirthDoorIndex(int);
};
} // namespace Cave
} // namespace Game

#endif
