#ifndef _GAME_CAVE_RANDMAPUNIT_H
#define _GAME_CAVE_RANDMAPUNIT_H

#include "types.h"
#include "Game/Cave/ObjectLayout.h"
#include "Game/Cave/Node.h"
#include "Game/Cave/Info.h"
#include "Game/Cave/RandMapMgr.h"

namespace Game {
namespace Cave {
struct EditMapUnit {
	EditMapUnit();

	void read(char* path);
	void read(Stream* stream);
	void setEditNumber(int editNo);

	f32 mChanceOfUse;   // _00
	int mEditCount;     // _04, row numbers for double arrays below
	int* mUnitCounts;   // _08, col numbers for double arrays below, indexed by mEditCount
	char*** mUnitNames; // _0C, double array of strings
	int** mDirections;  // _10
	int** mXOffsets;    // _14
	int** mYOffsets;    // _18
	int mEditNum;       // _1C
};

struct EnemyNode;
struct GateNode;
struct ItemNode;
struct MapNode;

/**
 * @size{0x34}
 */
struct MapUnitGenerator {
	MapUnitGenerator(MapUnitInterface* interface, int interfaceCount, FloorInfo* floorInfo, bool isFinalFloor, EditMapUnit* editInfo);

	void createEditMapInfo(EditMapUnit* editInfo);
	void createMemList(MapUnitInterface* interface, int interfaceCount);
	bool isCreateList(MapUnitInterface* interface);
	void memMapListSorting();
	void createMapPartsList();
	void createEnemyList();
	void createCapEnemyList();
	bool isPomGroup(TekiInfo* tekiInfo);
	void createGateList();
	void createItemList();
	void createCaveLevel();

	inline MapNode* getPlacedNodes() { return mPlacedMapNodes; }
	inline MapNode* getVisitedNodes() { return mVisitedMapNodes; }
	inline MapNode* getMapNodeKinds() { return mMapNodeKinds; }
	inline FloorInfo* getFloorInfo() { return mFloorInfo; }

	inline MapNode* getStartNode() { return mMemMapList->getChild(); }

	inline MapNode* getMapNodeKind(int kind) { return &mMapNodeKinds[kind]; }
	inline MapNode* getMemMapList() { return mMemMapList; }

	inline EditMapUnit* getEditMapUnit() { return mEditMapUnit; }

	bool mIsFinalFloor;            // _00
	bool mHasEscapeFountain;       // _01
	bool mIsVersusMode;            // _02
	u32 mRandItemType;             // _04
	FloorInfo* mFloorInfo;         // _08
	MapNode* mMemMapList;          // _0C, head of list of all map tiles in memory
	MapNode* mMapNodeKinds;        // _10, array of 3 MapNodes, indexed by UnitKind enum, each being head of a list of given UnitKind
	EnemyNode* mMainEnemies;       // _14, main enemies + plants
	EnemyNode* mCapEnemiesGround;  // _18, cap enemies, ground
	EnemyNode* mCapEnemiesFalling; // _1C, cap enemies, falling
	GateNode* mGateNode;           // _20
	ItemNode* mItemNode;           // _24
	MapNode* mPlacedMapNodes;      // _28
	MapNode* mVisitedMapNodes;     // _2C
	EditMapUnit* mEditMapUnit;     // _30
};

/**
 * @size{0x4}
 */
struct RandMapChecker {
	RandMapChecker(MapNode* tile);

	bool isPutOnMap(MapNode* tile);
	bool isPartsOnParts(MapNode* tile);
	bool isDoorOnParts(MapNode* tile);
	bool isPartsOnDoor(MapNode* tile);
	bool isInnerBox(int outerX1, int outerY1, int outerX2, int outerY2, int innerX1, int innerY1, int innerX2, int innerY2);

	MapNode* mMapNode; // _00
};

/**
 * @size{0x2C}
 */
struct RandMapUnit {
	RandMapUnit(MapUnitGenerator* generator);

	void addMap(UnitInfo* info, int x, int y, bool updatePriority);

	void closeDoorCheck();
	void changeCapToRootLoopMapUnit();
	void changeMapPriority(UnitInfo* info);
	void changeTwoToOneMapUnit();
	void createLoopMapNodeCheck();

	void deleteMapNode(MapNode* tile);

	int getAliveMapIndex(MapNode* tile);
	MapNode* getCalcDoorIndex(int& doorIdx, int& doorOffsetX, int& doorOffsetY, int targetDoorCount);
	int getDownToLinkDoorDir(int, int, int);
	MapNode* getFirstMapUnit();
	int getLeftToLinkDoorDir(int, int, int);
	int getLinkDoorDirection(MapNode*, int, MapNode*, int);
	MapNode* getLinkDoorNodeFirst(MapNode*, int, int, int, int&);
	MapNode* getLoopEndMapUnit();
	u32 getLoopMapNode(MapNode**);
	MapNode* getLoopRandMapUnit();
	MapNode* getNormalRandMapUnit();
	int getOpenDoorNum();
	int getPartsKindNum(int kind);
	MapNode* getRandMapUnit();
	int getRightToLinkDoorDir(int, int, int);
	void getTextureSize(int& x, int& y);
	int getUpToLinkDoorDir(int, int, int);

	bool isInLinkArea(int, int, int, int, int);
	bool isLoopMapNodeCheck(MapNode* tile, int index);

	void moveCentre();

	void setEditorMapUnit();
	void setFirstMapUnit();
	void setMapUnit();
	void setUnitDoorSorting(int kind);
	void setUnitKindOrder(MapNode* tile, int* unitList);
	void setRandomDoorIndex(int* list, int count);

	int mDoorCount;                // _00
	int mRoomCount;                // _04
	f32 mRouteRatio;               // _08
	bool mMapHasDiameter36;        // _0C
	bool mNeedsLoopMapNodeCheck;   // _0D
	int mCapCandidateCount;        // _10
	f32 mCapMax;                   // _14, between 0.0 and 1.0
	MapNode** mCapCandidateNodes;  // _18
	int* mCapCandidateDoorIndices; // _1C
	MapUnitGenerator* mGenerator;  // _20
	int* mUnitKindChildCounts;     // _24
	RandMapChecker* mChecker;      // _28
};
} // namespace Cave
} // namespace Game

#endif
