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

	s32 mDoorID;    // _00
	s32 mDistance;  // _04
	s32 mTekiFlags; // _08
};

/**
 * @size{0xC}
 */
struct AdjustInfo {
	AdjustInfo();

	inline void resetDoor()
	{
		mNode           = nullptr;
		mBirthDoorIndex = -1;
	}

	MapNode* mNode;      // _00
	int mBirthDoorIndex; // _04
	int mDoorScore;      // _08
};

/**
 * @size{0x24}
 */
struct AdjustNode : public CNode {
	AdjustNode();
	AdjustNode(Adjust*);

	virtual ~AdjustNode() { } // _08 (weak)

	Adjust* mNode; // _18
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
	DoorNode(Door&);

	~DoorNode() {};

	bool isDoorAdjust(DoorNode*);

	inline void reset()
	{
		mNode.mDirection = -1;
		mNode.mOffset    = -1;
	}

	Door mNode; // _18
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

	GateUnit* mUnit; // _18
	f32 mDirection;  // _1C
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
	ItemNode(ItemUnit*, BaseGen*, int);

	virtual ~ItemNode() { }                    // _08 (weak)
	virtual int getObjectId();                 // _10
	virtual u32 getObjectType();               // _14
	virtual int getBirthCount();               // _18
	virtual f32 getDirection();                // _1C
	virtual void getBirthPosition(f32&, f32&); // _24

	void makeGlobalData(MapNode*);

	ItemUnit* mUnit;     // _18
	BaseGen* mGenerator; // _1C
	u32 mBirthCount;     // _20
	f32 mDirection;      // _24
	Vector3f mPosition;  // _28
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

	void setOffset(int, int);
	CardinalDirection getDoorDirect(int);
	void getDoorOffset(int, int&, int&);
	bool isDoorSet(DoorNode*, int, int, int);
	void setDoorClose(int, MapNode*, int);
	void detachDoorClose();
	bool isDoorClose(int);
	void resetDoorScore();
	void setDoorScore(int, int);
	bool isDoorScoreSetDone(int);
	DoorNode* getDoorNode(int);
	AdjustNode* getAdjustNode(int);
	bool isGateSetDoor(int);
	int getGateScore(int);
	void setEnemyScore();
	void setNodeScore(int);
	void copyNodeScoreToVersusScore();
	void subNodeScoreToVersusScore();
	void draw(f32, f32, f32);
	int getNodeOffsetX();
	int getNodeOffsetY();
	int getEnemyScore();
	int getNodeScore();
	int getVersusScore();
	char* getUnitName();
	void getNodeCentreOffset(f32&, f32&);
	int getDirection();
	Vector3f getBaseGenGlobalPosition(BaseGen*);
	Vector3f getDoorGlobalPosition(int);
	f32 getBaseGenGlobalDirection(BaseGen*);
	f32 getDoorGlobalDirection(int);
	int getNumDoors();

	inline MapNode* getChild() { return static_cast<MapNode*>(mChild); }

	inline MapNode* getNext() { return static_cast<MapNode*>(mNext); }

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

	inline TekiInfo* getTekiInfo() { return mEnemyUnit->mTekiInfo; }

	EnemyUnit* mEnemyUnit; // _18
	BaseGen* mBaseGen;     // _1C
	int mBirthDoorIndex;   // _20
	int mBirthCount;       // _24
	f32 mDirection;        // _28
	Vector3f mBirthPos;    // _2C
};
} // namespace Cave
} // namespace Game

#endif
