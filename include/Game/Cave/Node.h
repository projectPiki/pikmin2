#ifndef _GAME_CAVE_NODE_H
#define _GAME_CAVE_NODE_H

#include "Game/Cave/ObjectLayout.h"
#include "Game/Cave/Info.h"

namespace Game {
namespace Cave {
struct RandMapScore;
struct EnemyNode;
struct MapNode;

enum FixObjNodeTypes {
	FIXNODE_Pod        = 0,
	FIXNODE_Hole       = 1,
	FIXNODE_Fountain   = 2,
	FIXNODE_VsRedOnyon = 3,
	FIXNODE_VsStart    = FIXNODE_VsRedOnyon, // 3

	FIXNODE_VsBlueOnyon = 4,
	FIXNODE_VsEnd       = FIXNODE_VsBlueOnyon, // 4
	FIXNODE_Count,                             // 5
};

enum MapTekiTypes {
	TEKITYPE_A = 0, // easy
	TEKITYPE_B = 1, // hard
	TEKITYPE_C = 2, // seam/door
	TEKITYPE_F = 3, // special
};

/**
 * Basic details about an adjacent door.
 *
 * This information is set when two doors become one door, i.e. when two rooms are adjacent/connected.
 * This is to keep track of the 'partner' door.
 *
 * @size{0xC}
 */
struct Adjust {
	Adjust();

	int mDoorID;    // _00, door identifier
	int mDistance;  // _04
	int mTekiFlags; // _08, whether door contains a seam teki
};

/**
 * Linked list of adjacent door information.
 *
 * @size{0x24}
 */
struct AdjustNode : public CNode {
	AdjustNode();
	AdjustNode(Adjust*);

	virtual ~AdjustNode() { } // _08 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	Adjust* mAdjust; // _18
};

/**
 * More detailed information on an adjacent door.
 *
 * This is more placement- and tile-oriented than the Adjust struct.
 *
 * @size{0xC}
 */
struct AdjustInfo {
	AdjustInfo();

	inline void resetDoor()
	{
		mMapTile        = nullptr;
		mBirthDoorIndex = -1;
	}

	MapNode* mMapTile;   // _00
	int mBirthDoorIndex; // _04
	int mDoorScore;      // _08
};

/**
 * @size{0x8}
 */
struct Door {
	Door();

	int mDirection; // _00
	int mOffset;    // _04
};

/**
 * @size{0x20}
 */
struct DoorNode : public CNode {
	DoorNode();
	DoorNode(Door& door);

	virtual ~DoorNode() { }

	bool isDoorAdjust(DoorNode* other);

	inline void reset()
	{
		mDoor.mDirection = -1;
		mDoor.mOffset    = -1;
	}

	// _00     = VTBL
	// _00-_18 = CNode
	Door mDoor; // _18
};

/**
 * @size{0x18}
 */
struct FixObjNode : public ObjectLayoutNode {
	inline FixObjNode(int objType)
	    : mObjectType(objType)
	{
	}

	virtual ~FixObjNode() { }                           // _08 (weak)
	virtual int getObjectId() { return 1; }             // _10 (weak)
	virtual u32 getObjectType() { return mObjectType; } // _14 (weak)
	virtual int getBirthCount() { return 1; }           // _18 (weak)
	virtual f32 getDirection() { return mDirection; }   // _1C (weak)
	virtual void getBirthPosition(f32& x, f32& y)       // _24 (weak)
	{
		x = mPosition.x;
		y = mPosition.z;
	}

	// _00     = VTBL
	// _00-_18 = ObjectLayoutNode
	u32 mObjectType;    // _18
	f32 mDirection;     // _1C
	Vector3f mPosition; // _20
};

/**
 * @size{0x4}
 */
struct GateUnit {
	inline GateUnit() { mInfo = nullptr; }

	GateInfo* mInfo; // _00
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

	// _00     = VTBL
	// _00-_18 = ObjectLayoutNode
	GateUnit* mUnit; // _18
	f32 mDirection;  // _1C, direction gate 'lies' (not faces) - if gate is on CD_RIGHT door, direction will be 'up'
	int mIndex;      // _20
};

/**
 * @size{0x4}
 */
struct ItemUnit {
	inline ItemUnit() { mInfo = nullptr; }

	ItemInfo* mInfo; // _00
};

/**
 * @size{0x34}
 */
struct ItemNode : public ObjectLayoutNode {
	ItemNode();
	ItemNode(ItemUnit* unit, BaseGen* spawn, int birthCount);

	virtual ~ItemNode() { }                        // _08 (weak)
	virtual int getObjectId();                     // _10
	virtual u32 getObjectType();                   // _14
	virtual int getBirthCount();                   // _18
	virtual f32 getDirection();                    // _1C
	virtual void getBirthPosition(f32& x, f32& y); // _24

	void makeGlobalData(MapNode* tile);

	// _00     = VTBL
	// _00-_18 = ObjectLayoutNode
	ItemUnit* mUnit;    // _18
	BaseGen* mSpawn;    // _1C
	u32 mBirthCount;    // _20
	f32 mDirection;     // _24
	Vector3f mPosition; // _28
};

/**
 * @size{0x24}
 */
struct MapUnits {
	MapUnits(JUTTexture* mapTexture);

	void setDoorNum(int doorNum);
	void setUnitName(char* name);
	void setUnitIndex(int idx);
	void setUnitKind(int kind);
	void setUnitSize(int sizeX, int sizeY);
	void setBaseGenPtr(BaseGen* spawner);
	void setUnitTexture(JUTTexture* texture);

	// unused/inlined:
	char* getUnitName();
	int getUnitIndex();
	int getUnitKind();
	int getUnitSizeX();
	int getUnitSizeY();
	BaseGen* getBaseGen();
	JUTTexture* getUnitTexture();

	DoorNode* mDoorNode;     // _00
	AdjustNode* mDoorCounts; // _04
	JUTTexture* mTexture;    // _08
	BaseGen* mBaseGen;       // _0C
	char* mName;             // _10
	int mIndex;              // _14
	int mKind;               // _18
	int mSizeX;              // _1C
	int mSizeY;              // _20
};

/**
 * @size{0x40}
 */
struct MapNode : public CNode {
	MapNode(UnitInfo* info = nullptr);

	virtual ~MapNode() { } // _08 (weak)

	void setOffset(int x, int y);
	int getDoorDirect(int doorIndex);
	void getDoorOffset(int doorIndex, int& x, int& y);
	bool isDoorSet(DoorNode* testDoor, int x, int y, int index);
	void setDoorClose(int doorIndex, MapNode* partner, int partnerIndex);
	void detachDoorClose();
	bool isDoorClose(int doorIndex);
	void resetDoorScore();
	void setDoorScore(int doorIndex, int score);
	bool isDoorScoreSetDone(int doorIndex);
	DoorNode* getDoorNode(int doorIndex);
	AdjustNode* getAdjustNode(int doorIndex);
	bool isGateSetDoor(int doorIndex);
	int getGateScore(int doorIndex);
	void setEnemyScore();
	void setNodeScore(int score);
	void copyNodeScoreToVersusScore();
	void subNodeScoreToVersusScore();
	void draw(f32 x, f32 y, f32 scale);
	int getNodeOffsetX();
	int getNodeOffsetY();
	int getEnemyScore();
	int getNodeScore();
	int getVersusScore();
	char* getUnitName();
	void getNodeCentreOffset(f32& x, f32& y);
	int getDirection();
	Vector3f getBaseGenGlobalPosition(BaseGen* spawner);
	Vector3f getDoorGlobalPosition(int doorIndex);
	f32 getBaseGenGlobalDirection(BaseGen* spawner);
	f32 getDoorGlobalDirection(int doorIndex);
	int getNumDoors();

	inline MapNode* getChild() { return static_cast<MapNode*>(mChild); }

	inline MapNode* getNext() { return static_cast<MapNode*>(mNext); }

	// _00     = VTBL
	// _00-_18 = CNode
	UnitInfo* mUnitInfo;     // _18
	EnemyNode* mEnemyNode;   // _1C
	GateNode* mGateNode;     // _20
	ItemNode* mItemNode;     // _24
	AdjustInfo* mAdjustInfo; // _28, array of AdjustInfos
	int mXGridOffset;        // _2C
	int mYGridOffset;        // _30
	int mEnemyScore;         // _34
	int mNodeScore;          // _38
	int mVsScore;            // _3C
};

/**
 * @size{0x30}
 */
struct EnemyUnit {
	inline EnemyUnit() { mTekiInfo = nullptr; }

	TekiInfo* mTekiInfo; // _00
};

/**
 * @size{0x38}
 */
struct EnemyNode : public ObjectLayoutNode {
	EnemyNode();
	EnemyNode(EnemyUnit* unit, BaseGen* spawner, int amount);

	virtual ~EnemyNode() { }                       // _08 (weak)
	virtual int getObjectId();                     // _10
	virtual u32 getObjectType();                   // _14
	virtual int getBirthCount();                   // _18
	virtual f32 getDirection();                    // _1C
	virtual int getBirthDoorIndex();               // _20
	virtual void getBirthPosition(f32& x, f32& y); // _24
	virtual u32 getExtraCode();                    // _28

	void makeGlobalData(Game::Cave::MapNode*);
	void setGlobalData(Vector3f&, f32);
	void setBirthDoorIndex(int);

	inline TekiInfo* getTekiInfo() { return mEnemyUnit->mTekiInfo; }

	// _00     = VTBL
	// _00-_18 = ObjectLayoutNode
	EnemyUnit* mEnemyUnit; // _18
	BaseGen* mSpawn;       // _1C
	int mBirthDoorIndex;   // _20
	int mBirthCount;       // _24
	f32 mDirection;        // _28
	Vector3f mBirthPos;    // _2C
};
} // namespace Cave
} // namespace Game

#endif
