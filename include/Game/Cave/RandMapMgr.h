#ifndef _GAME_CAVE_RANDMAPMGR_H
#define _GAME_CAVE_RANDMAPMGR_H

#include "types.h"
#include "Game/mapParts.h"
#include "Game/Cave/RandMapUnit.h"
#include "JSystem/JUtility/JUTTexture.h"

struct Graphics;

namespace Game {
namespace Cave {
struct RandEnemyUnit;
struct RandItemUnit;
struct RandMapUnit;

struct RandMapDraw;
struct RandMapScore;
struct MapUnitGenerator;

struct EnemyNode;
struct EnemyUnit;

struct GateUnit;

struct RandEnemyUnit {
	RandEnemyUnit(MapUnitGenerator* generator, bool isVersusHiba);

	void setManageClassPtr(RandMapScore* mapScore);
	void setEnemySlot();
	void setEnemyTypeWeight();
	void setEnemyTypeC();
	void setEnemyTypeF();
	void setEnemyTypeB();
	void setEnemyTypeA();
	void setVersusHibaTypeC();
	void setVersusEnemyTypeC();
	void setSlotEnemyTypeC(int&, int);
	void setUnitRandEnemyTypeC();
	void makeSetEnemyTypeC(MapNode*, int, EnemyUnit*);
	void setVersusEnemyTypeF();
	void setSlotEnemyTypeF(int);
	void setUnitRandEnemyTypeF();
	void makeSetEnemyTypeF(MapNode*, BaseGen*, EnemyUnit*);
	void setVersusEnemyTypeB();
	void setSlotEnemyTypeB(int);
	void setUnitRandEnemyTypeB();
	void makeSetEnemyTypeB(MapNode*, BaseGen*, EnemyUnit*);
	void setVersusEasyEnemy();
	BaseGen* getVersusEasyEnemyBaseGen(MapNode*, BaseGen*);
	void setVersusEnemyTypeA();
	void setSlotEnemyTypeA(int&, int&, int);
	void setUnitRandEnemyTypeA(int&, int, int);
	void makeSetEnemyTypeA(MapNode*, BaseGen*, EnemyUnit*, int);
	bool isEnemySetGen(MapNode*, BaseGen*);

	MapUnitGenerator* mGenerator; // _00
	RandMapScore* mMapScore;      // _04
	int mTotalCount;              // _08, count of all types
	int mMaxEnemies;              // _0C
	int mTypeCount[4];            // _10, current count of type, see MapTekiTypes enum
	int mTypeMax[4];              // _20, max for type, see MapTekiTypes enum
	MapNode* mMapTile;            // _30
	BaseGen* mSpawn;              // _34
	EnemyUnit* mEnemyUnit;        // _38
	bool mIsVersusHiba;           // _3C
};

/**
 * @size{0x18}
 */
struct RandGateUnit {
	RandGateUnit(MapUnitGenerator* generator);

	void setManageClassPtr(RandMapScore* score, RandItemUnit* item);
	void setGateDoor();
	GateUnit* getGateUnit();
	MapNode* getRoomNodePtr(int& index);
	MapNode* getItemSetCapDoor(int& index);
	MapNode* getRoomMinScoreDoor(int& index);
	MapNode* getRoomLowScoreDoor(int& index);
	MapNode* getRandomScoreDoor(int& index);

	MapUnitGenerator* mGenerator; // _00
	RandMapScore* mMapScore;      // _04
	RandItemUnit* mItemUnit;      // _08
	int mGatePlacedCount;         // _0C
	int mGateMax;                 // _10
	int mGateWeightSum;           // _14
};

/**
 * @size{0xC}
 */
struct RandPlantUnit {
	RandPlantUnit(MapUnitGenerator* generator);

	void setPlantSlot();
	MapNode* getPlantSetMapNode(BaseGen** plantSpawnsList);
	EnemyUnit* getPlantUnit(BaseGen* spawn);
	bool isPlantSet(MapNode* tile, BaseGen* spawn);

	MapUnitGenerator* mGenerator; // _00
	int mCount;                   // _04, current number of plants
	int mGoalCount;               // _08, desired number of plants
};

/**
 * @size{0x18}
 */
struct RandItemUnit {
	RandItemUnit(MapUnitGenerator* generator);
	void setManageClassPtr(Game::Cave::RandMapScore* mapScore);
	void setItemSlot();

	bool isItemSetDone(MapNode* tile, BaseGen* spawner);
	bool isGroundCapEnemySetDone(MapNode* tile);
	bool isFallCapEnemySetDone(MapNode* tile);

	void setItemDropPositionList(Game::Cave::MapNode** tileList, Game::Cave::BaseGen** spawnList);
	void getItemDropPosition(Vector3f& position, f32 weight, int floorIndex);
	MapNode* getItemNormalSetMapNode(Game::Cave::BaseGen** spawnerList);
	MapNode* getItemHardSetMapNode(Game::Cave::BaseGen** spawnerList);
	ItemUnit* getItemUnit();
	int getItemSlotNum(MapNode* tile);
	bool isItemSetHard();
	void getItemDropMapNode(MapNode* targetTile, MapNode** noteList, int currentScore, int& bestScore);
	Vector3f getItemBaseGenPosition(MapNode* tile, int score);
	void getItemDropList(MapNode* targetTile, MapNode** nodeList, BaseGen** dropList, int& idx);
	Vector3f getItemBaseGenPosition(MapNode** candidateTiles, BaseGen** spawnerList, int nodeCount, int minScore, int idx);
	void getItemDropSortingList(MapNode** candidateNodes, BaseGen** spawnerList, int* scores, int count);

	int mItemCount;               // _00
	int mMax;                     // _04
	MapUnitGenerator* mGenerator; // _08
	RandMapScore* mMapScore;      // _0C
	MapNode** mMapTileList;       // _10
	BaseGen** mSpawnList;         // _14
};

/**
 * @size{0x18}
 */
struct RandCapEnemyUnit {
	enum SpawnType {
		SPAWN_Ground  = 0,
		SPAWN_Falling = 1,
	};

	RandCapEnemyUnit(MapUnitGenerator* generator);

	void setManageClassPtr(RandItemUnit* item);
	void setCapEnemySlot();
	void setCapCommonEnemySlot(MapNode* tile, int spawnType);
	void setCapEnemy(MapNode* tile, EnemyUnit* enemyUnit, int spawnType, int setCount);

	MapUnitGenerator* mGenerator; // _00
	RandItemUnit* mRandItemUnit;  // _04
	EnemyNode* mEnemies[2];       // _08, indexed by SpawnType
	int mEnemyCounts[2];          // _10, indexed by SpawnType
};

/**
 * @size{0x48}
 */
struct RandMapMgr : public CNode {
	RandMapMgr(bool isVersusHiba);

	virtual ~RandMapMgr() { } // _08 (weak)

	void loadResource(MapUnitInterface* interface, int interfaceCount, FloorInfo* floorInfo, bool isFinalFloor, EditMapUnit* editUnit);
	void create();
	int getNumRooms();
	char* getUseUnitName(int placedNodeIndex);
	char* getRoomData(int placedNodeIndex, f32& x, f32& y, int& direction);
	RoomLink* makeRoomLink(int placedNodeIndex);
	ObjectLayoutInfo* makeObjectLayoutInfo(int placedNodeIndex);
	void getStartPosition(Vector3f& position, int index);
	void getItemDropPosition(Vector3f& position, f32 minDist, f32 maxDist);
	void getItemDropPosition(Vector3f* positions, int positionCount, f32 lowerWeightBound, f32 upperWeightBound);
	void setUnitTexture(int placedNodeIndex, JUTTexture* unitTexture);
	void setCaptureOn();
	void captureRadarMap(Graphics& gfx);
	bool isLastFloor();
	bool isVersusHiba();
	JUTTexture* getRadarMapTexture();
	void radarMapPartsOpen(Vector3f& position);
	void getPositionOnTex(Vector3f& position, f32& x, f32& y);
	void getBaseGenData(Vector3f* positions, f32* directions);
	void drawFrameBuffer(Graphics& gfx);

	MapUnitGenerator* mGenerator;        // _18
	RandMapUnit* mRandMapUnit;           // _1C
	RandEnemyUnit* mRandEnemyUnit;       // _20
	RandCapEnemyUnit* mRandCapEnemyUnit; // _24
	RandPlantUnit* mRandPlantUnit;       // _28
	RandGateUnit* mRandGateUnit;         // _2C
	RandItemUnit* mRandItemUnit;         // _30
	RandMapScore* mRandMapScore;         // _34
	RandMapDraw* mRandMapDraw;           // _38
	bool mIsCaptureOn;                   // _3C
	JUTTexture* mRadarMapTexture;        // _40
	bool mIsVersusHiba;                  // _44
};

/**
 * @size{0x4}
 */
struct RandMapDraw {
	RandMapDraw(MapUnitGenerator* generator);

	void radarMapPartsOpen(Vector3f& pos);
	void draw(Graphics& gfx, f32 x, f32 y, f32 z);

	MapUnitGenerator* mGenerator; // _00
};

struct RandMapScore {
	RandMapScore(MapUnitGenerator*);

	void setMapUnitScore();
	void setStartSlot();
	void setGoalSlot();
	void makeObjectLayout(MapNode* node, ObjectLayout* layout);
	MapNode* getFixObjNode(int index);
	BaseGen* getFixObjGen(int index);
	void getGlobalPosition(int fixNodeIndex, Vector3f& position);
	int getVersusHighScore();
	int getVersusLowScore();
	bool isScoreSetDone();
	void clearRoomAndDoorScore();
	void setUnitAndDoorScore();
	void setStartMapNodeScore(MapNode* node);
	void setChallengePod();
	void setVersusOnyon();
	MapNode* getMaxScoreRoomMapNode(MapNode* node, BaseGen** maxScoreSpawner);
	void calcNodeScore(MapNode* node);
	void copyNodeScore();
	void subNodeScore();
	void setMapNodeScore(MapNode* node, int score);
	void setChallengeFixObjNormal();
	void setChallengeFixObjHard();
	bool isGoalSetHard();
	bool isFixObjSet(MapNode* node, BaseGen* spawner);
	MapNode* getRandRoomMapNode();

	MapUnitGenerator* mGenerator; // _00
	MapNode** mFixObjNodes;       // _04, array of 5 map nodes, see FixObjNodeTypes enum
	BaseGen** mFixObjGens;        // _08, array of 5 gens, see FixObjNodeTypes enum
	u32 mVersusHighScore;         // _0C
	u32 mVersusLowScore;          // _10
};

// instantiated in Nishimura/MapCreator.cpp
extern RandMapMgr* randMapMgr;

} // namespace Cave
} // namespace Game

#endif
