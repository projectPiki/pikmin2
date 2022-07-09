#ifndef _GAME_CAVE_NODE_H
#define _GAME_CAVE_NODE_H

#include "Game/Cave/ObjectLayout.h"
#include "Game/Cave/Info.h"

#include "Game/Cave/RandMapMgr.h"

namespace Game {
namespace Cave {
enum NodeType { Item = 1, Gate };
struct RandMapScore;
struct EnemyUnit {
	TekiInfo* m_tekiInfo;     // _00
	RandMapScore* m_mapScore; // _04
	int _08;                  // _08
	int m_tekiMax;            // _0C
	// counts and max amounts for enemy types (A = easy, B = hard, C = seam hazards, F = special)
	int m_typeCount[4]; // _10 (_10 A, _14 B, _18 C, _1C F)
	int m_typeMax[4];   // _20 (_20 A, _24 B, _28 C, _2C F)
};

struct Adjust {
	s32 _00; // _00
	s32 _04; // _04
	s32 _08; // _08

	Adjust();
};

struct AdjustNode : public CNode {
	Adjust* m_node; // _18

	AdjustNode();
	AdjustNode(Adjust*);
};

struct Door {
	s32 _00;
	s32 _04;

	Door();
};

struct DoorNode : public CNode {
	Door m_node; // _18

	DoorNode();
	~DoorNode() {};

	inline void reset()
	{
		m_node._00 = -1;
		m_node._04 = -1;
	}

	DoorNode(Door&);
	bool isDoorAdjust(DoorNode*);
};

struct GateUnit {
	GateInfo* m_info; // _00
};

struct GateNode : public ObjectLayoutNode {
	GateNode();
	GateNode(GateUnit* unit, int index, int dir); // for dir, use cardinal direction
	~GateNode() {};

	virtual int getObjectId();
	virtual u32 getObjectType();
	virtual int getBirthCount();
	virtual float getDirection();
	virtual int getBirthDoorIndex();

	GateUnit* m_unit; // _18
	f32 m_direction;  // _1C
	s32 m_index;      // _20
};

struct ItemUnit {
	ItemInfo* m_info; // _00
};

struct ItemNode : public ObjectLayoutNode {
	ItemNode();
	ItemNode(ItemUnit*, BaseGen*, int);
	~ItemNode() {};

	void makeGlobalData(MapNode*);

	virtual int getObjectId();
	virtual u32 getObjectType();
	virtual int getBirthCount();
	virtual float getDirection();
	virtual void getBirthPosition(float&, float&);

	ItemUnit* m_unit;     // _18
	BaseGen* m_generator; // _1C
	u32 m_birthCount;     // _20
	f32 m_direction;      // _24
	Vector3f m_position;  // _28
};

struct MapNode : public CNode {
	UnitInfo* m_unitInfo; // _18

	// Types are EnemyNode, GateNode and ItemNode respectively
	ObjectLayoutNode* m_enemyNode; // _1C
	ObjectLayoutNode* m_gateNode;  // _20
	ObjectLayoutNode* m_itemNode;  // _24

	MapNode** m_nodeList; // _28
	s32 m_xGridOffset;    // _2C
	s32 m_yGridOffset;    // _30
	s32 m_enemyScore;     // _34
	s32 m_nodeScore;      // _38
	s32 m_vsScore;        // _3C

	int getNodeOffsetX();
	int getNodeOffsetY();
	int getNumDoors();
	int getDoorOffset(int, int&, int&);
	CardinalDirection getDoorDirect(int);
	bool isDoorClose(int);
	DoorNode* getDoorNode(int);
	void draw(float, float, float);

	Vector3f getBaseGenGlobalPosition(BaseGen*);
	f32 getBaseGenGlobalDirection(BaseGen*);
};

struct EnemyNode : public ObjectLayoutNode {
	EnemyNode();
	EnemyNode(EnemyUnit*, BaseGen*, int);
	~EnemyNode() {};

	void makeGlobalData(MapNode*);

	virtual int getObjectId();
	virtual u32 getObjectType();
	virtual int getBirthCount();
	virtual float getDirection();
	virtual void getBirthPosition(float&, float&);

	EnemyUnit* m_enemyUnit; // _18
	BaseGen* m_baseGen;     // _1C
	int m_birthDoorIndex;   // _20
	int m_birthCount;       // _24
	float m_direction;      // _28
	Vector3f m_birthPos;    // _2C
	                        // _34
};
} // namespace Cave
} // namespace Game

#endif
