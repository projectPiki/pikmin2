#ifndef _GAME_CAVE_NODE_H
#define _GAME_CAVE_NODE_H

#include "Game/Cave/ObjectLayout.h"
#include "Game/Cave/Info.h"

namespace Game {
namespace Cave {
struct RandMapScore;
struct EnemyNode;
struct MapNode;

enum NodeType { Item = 1, Gate };

/**
 * @size{0xC}
 */
struct Adjust {
	Adjust();

	s32 _00; // _00
	s32 _04; // _04
	s32 _08; // _08
};

/**
 * @size{0xC}
 */
struct AdjustInfo {
	MapNode* m_node;      // _00
	int m_birthDoorIndex; // _04
	int m_doorScore;      // _08
};

/**
 * @size{0x24}
 */
struct AdjustNode : public CNode {
	AdjustNode();
	AdjustNode(Adjust*);

	virtual ~AdjustNode() { } // _08 (weak)

	Adjust* m_node; // _18
};

/**
 * @size{0x8}
 */
struct Door {
	Door();

	int m_direction; // _00
	int m_offset;    // _04
};

/**
 * @size{0x20}
 */
struct DoorNode : public CNode {
	DoorNode();
	DoorNode(Door&);

	~DoorNode() {};

	bool isDoorAdjust(DoorNode*);

	inline void reset()
	{
		m_node.m_direction = -1;
		m_node.m_offset    = -1;
	}

	Door m_node; // _18
};

/**
 * @size{0x18}
 */
struct FixObjNode : public ObjectLayoutNode {
	virtual ~FixObjNode() { }                  // _08 (weak)
	virtual int getObjectId();                 // _10 (weak)
	virtual u32 getObjectType();               // _14 (weak)
	virtual int getBirthCount();               // _18 (weak)
	virtual f32 getDirection();                // _1C (weak)
	virtual void getBirthPosition(f32&, f32&); // _24 (weak)
};

/**
 * @size{0x4}
 */
struct GateUnit {
	inline GateUnit() { m_info = nullptr; }

	GateInfo* m_info; // _00
};

/**
 * @size{0x24}
 */
struct GateNode : public ObjectLayoutNode {
	GateNode();
	GateNode(GateUnit* unit, int index, int dir); // for dir, use cardinal direction

	virtual ~GateNode() { }          // _08 (weak)
	virtual int getObjectId();       // _10
	virtual u32 getObjectType();     // _14
	virtual int getBirthCount();     // _18
	virtual f32 getDirection();      // _1C
	virtual int getBirthDoorIndex(); // _20

	GateUnit* m_unit; // _18
	f32 m_direction;  // _1C
	int m_index;      // _20
};

/**
 * @size{0x4}
 */
struct ItemUnit {
	inline ItemUnit() { m_info = nullptr; }

	ItemInfo* m_info; // _00
};

/**
 * @size{0x34}
 */
struct ItemNode : public ObjectLayoutNode {
	ItemNode();
	ItemNode(ItemUnit*, BaseGen*, int);

	virtual ~ItemNode() { }                    // _08 (weak)
	virtual int getObjectId();                 // _10
	virtual u32 getObjectType();               // _14
	virtual int getBirthCount();               // _18
	virtual f32 getDirection();                // _1C
	virtual void getBirthPosition(f32&, f32&); // _24

	void makeGlobalData(MapNode*);

	ItemUnit* m_unit;     // _18
	BaseGen* m_generator; // _1C
	u32 m_birthCount;     // _20
	f32 m_direction;      // _24
	Vector3f m_position;  // _28
};

/**
 * @size{0x24}
 */
struct MapUnits {
	MapUnits(JUTTexture*);

	void setDoorNum(int doorNum);
	void setUnitName(char* name);
	void setUnitIndex(int idx);
	void setUnitKind(int kind);
	void setUnitSize(int sizeX, int sizeY);
	void setBaseGenPtr(BaseGen* baseGen);
	void setUnitTexture(JUTTexture*);

	// unused/inlined:
	char* getUnitName();
	int getUnitIndex();
	int getUnitKind();
	int getUnitSizeX();
	int getUnitSizeY();
	BaseGen* getBaseGen();
	JUTTexture* getUnitTexture();

	DoorNode* m_doorNode;     // _00
	AdjustNode* m_doorCounts; // _04
	JUTTexture* m_texture;    // _08
	BaseGen* m_baseGen;       // _0C
	char* m_name;             // _10
	int m_index;              // _14
	int m_kind;               // _18
	int m_sizeX;              // _1C
	int m_sizeY;              // _20
};

/**
 * @size{0x40}
 */
struct MapNode : public CNode {
	MapNode(UnitInfo* info = nullptr);

	virtual ~MapNode(); // _08 (weak)

	void setOffset(int, int);
	CardinalDirection getDoorDirect(int);
	int getDoorOffset(int, int&, int&);
	void isDoorSet(Game::Cave::DoorNode*, int, int, int);
	void setDoorClose(int, Game::Cave::MapNode*, int);
	void detachDoorClose();
	bool isDoorClose(int);
	void resetDoorScore();
	void setDoorScore(int, int);
	void isDoorScoreSetDone(int);
	DoorNode* getDoorNode(int);
	void getAdjustNode(int);
	bool isGateSetDoor(int);
	void getGateScore(int);
	void setEnemyScore();
	void setNodeScore(int);
	void copyNodeScoreToVersusScore();
	void subNodeScoreToVersusScore();
	void draw(f32, f32, f32);
	int getNodeOffsetX();
	int getNodeOffsetY();
	void getEnemyScore();
	void getNodeScore();
	void getVersusScore();
	char* getUnitName();
	void getNodeCentreOffset(f32&, f32&);
	void getDirection();
	Vector3f getBaseGenGlobalPosition(BaseGen*);
	void getDoorGlobalPosition(int);
	f32 getBaseGenGlobalDirection(BaseGen*);
	void getDoorGlobalDirection(int);
	int getNumDoors();

	inline MapNode* getChild() { return static_cast<MapNode*>(m_child); }

	inline MapNode* getNext() { return static_cast<MapNode*>(m_next); }

	UnitInfo* m_unitInfo; // _18

	// types are EnemyNode, GateNode, ItemNode;
	ObjectLayoutNode* m_enemyNode; // _1C
	ObjectLayoutNode* m_gateNode;  // _20
	ObjectLayoutNode* m_itemNode;  // _24

	AdjustInfo* m_adjustInfo; // _28, array of AdjustInfos
	int m_xGridOffset;        // _2C
	int m_yGridOffset;        // _30
	int m_enemyScore;         // _34
	int m_nodeScore;          // _38
	int m_vsScore;            // _3C
};

/**
 * @size{0x30}
 */
struct EnemyUnit {
	inline EnemyUnit() { m_tekiInfo = nullptr; }

	TekiInfo* m_tekiInfo; // _00
};

/**
 * @size{0x38}
 */
struct EnemyNode : public ObjectLayoutNode {
	EnemyNode();
	EnemyNode(EnemyUnit*, BaseGen*, int);

	virtual ~EnemyNode() { }                   // _08 (weak)
	virtual int getObjectId();                 // _10
	virtual u32 getObjectType();               // _14
	virtual int getBirthCount();               // _18
	virtual f32 getDirection();                // _1C
	virtual int getBirthDoorIndex();           // _20
	virtual void getBirthPosition(f32&, f32&); // _24
	virtual u32 getExtraCode();                // _28

	void makeGlobalData(Game::Cave::MapNode*);
	void setGlobalData(Vector3f&, f32);
	void setBirthDoorIndex(int);

	inline TekiInfo* getTekiInfo() { return m_enemyUnit->m_tekiInfo; }

	EnemyUnit* m_enemyUnit; // _18
	BaseGen* m_baseGen;     // _1C
	int m_birthDoorIndex;   // _20
	int m_birthCount;       // _24
	f32 m_direction;        // _28
	Vector3f m_birthPos;    // _2C
};
} // namespace Cave
} // namespace Game

#endif
