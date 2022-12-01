#ifndef _GAME_CAVE_RANDMAPMGR_H
#define _GAME_CAVE_RANDMAPMGR_H

#include "types.h"
#include "Game/mapParts.h"
#include "Game/Cave/RandMapUnit.h"
#include "JSystem/JUT/JUTTexture.h"

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

/**
 * @size{0x18}
 */
struct RandGateUnit {
	RandGateUnit(MapUnitGenerator* generator);

	void setManageClassPtr(RandMapScore*, RandItemUnit*);
	void setGateDoor();
	GateUnit* getGateUnit();
	MapNode* getRoomNodePtr(int&);
	MapNode* getItemSetCapDoor(int&);
	MapNode* getRoomMinScoreDoor(int&);
	MapNode* getRoomLowScoreDoor(int&);
	MapNode* getRandomScoreDoor(int&);

	MapUnitGenerator* m_generator; // _00
	RandMapScore* m_mapScore;      // _04
	RandItemUnit* m_itemUnit;      // _08
	int m_gatePlacedCount;         // _0C
	int m_gateMax;                 // _10
	int m_gateWeightSum;           // _14
};

/**
 * @size{0xC}
 */
struct RandPlantUnit {
	RandPlantUnit(MapUnitGenerator* generator);

	void setPlantSlot();
	MapNode* getPlantSetMapNode(BaseGen**);
	EnemyUnit* getPlantUnit(BaseGen*);
	bool isPlantSet(MapNode*, BaseGen*);

	MapUnitGenerator* m_generator; // _00
	int m_currentPlantCount;       // _04
	int m_desiredPlantCount;       // _08
};

/**
 * @size{0x18}
 */
struct RandItemUnit {
	RandItemUnit(MapUnitGenerator* generator);
	void setManageClassPtr(Game::Cave::RandMapScore* a1);
	void setItemSlot();

	bool isItemSetDone(MapNode*, BaseGen*);
	bool isGroundCapEnemySetDone(MapNode*);
	bool isFallCapEnemySetDone(MapNode*);

	void setItemDropPositionList(Game::Cave::MapNode**, Game::Cave::BaseGen**);
	void getItemDropPosition(Vector3f&, float, int);
	MapNode* getItemNormalSetMapNode(Game::Cave::BaseGen**);
	MapNode* getItemHardSetMapNode(Game::Cave::BaseGen**);
	ItemUnit* getItemUnit();
	int getItemSlotNum(MapNode*);
	bool isItemSetHard();
	void getItemDropMapNode(MapNode*, MapNode**, int, int&);
	Vector3f getItemBaseGenPosition(MapNode*, int);
	void getItemDropList(MapNode*, MapNode**, BaseGen**, int&);
	Vector3f getItemBaseGenPosition(MapNode**, BaseGen**, int, int, int);
	void getItemDropSortingList(MapNode**, BaseGen**, int*, int);

	int m_items;                          // _00
	int m_max;                            // _04
	MapUnitGenerator* m_mapUnitGenerator; // _08
	RandMapScore* m_randMapScore;         // _0C
	MapNode** m_mapNode;                  // _10
	BaseGen** m_baseGen;                  // _14
};

/**
 * @size{0x18}
 */
struct RandCapEnemyUnit {
	RandCapEnemyUnit(MapUnitGenerator*);

	void setManageClassPtr(RandItemUnit*);
	void setCapEnemySlot();
	void setCapCommonEnemySlot(MapNode*, int);
	void setCapEnemy(MapNode*, EnemyUnit*, int, int);

	MapUnitGenerator* m_mapUnitGenerator; // _00
	RandItemUnit* m_randItemUnit;         // _04
	EnemyNode* m_enemyNode[2];            // _08
	int m_perSpawn[2];                    // _10
};

/**
 * @size{0x48}
 */
struct RandMapMgr : public CNode {
	RandMapMgr(bool isVersusHiba);

	virtual ~RandMapMgr() { } // _08 (weak)

	void loadResource(MapUnitInterface*, int, FloorInfo*, bool, EditMapUnit*);
	void create();
	int getNumRooms();
	char* getUseUnitName(int);
	char* getRoomData(int, f32&, f32&, int&);
	RoomLink* makeRoomLink(int);
	ObjectLayoutInfo* makeObjectLayoutInfo(int);
	void getStartPosition(Vector3f&, int);
	void getItemDropPosition(Vector3f&, f32, f32);
	void getItemDropPosition(Vector3f*, int, f32, f32);
	void setUnitTexture(int, JUTTexture*);
	void setCaptureOn();
	void captureRadarMap(Graphics&);
	bool isLastFloor();
	bool isVersusHiba();
	JUTTexture* getRadarMapTexture();
	void radarMapPartsOpen(Vector3f&);
	void getPositionOnTex(Vector3f&, f32&, f32&);
	void getBaseGenData(Vector3f*, f32*);
	void drawFrameBuffer(Graphics&);

	MapUnitGenerator* m_mapUnitGenerator; // _18
	RandMapUnit* m_randMapUnit;           // _1C
	RandEnemyUnit* m_randEnemyUnit;       // _20
	RandCapEnemyUnit* m_randCapEnemyUnit; // _24
	RandPlantUnit* m_randPlantUnit;       // _28
	RandGateUnit* m_randGateUnit;         // _2C
	RandItemUnit* m_randItemUnit;         // _30
	RandMapScore* m_randMapScore;         // _34
	RandMapDraw* m_randMapDraw;           // _38
	bool m_isCaptureOn;                   // _3C
	JUTTexture* m_radarMapTexture;        // _40
	bool m_isVersusHiba;                  // _44
};

/**
 * @size{0x4}
 */
struct RandMapDraw {
	RandMapDraw(MapUnitGenerator* generator);

	void radarMapPartsOpen(Vector3f& vec);
	void draw(struct Graphics& gfx, f32 x, f32 y, f32 z);

	MapUnitGenerator* m_generator; // _00
};

struct RandMapScore {
	RandMapScore(MapUnitGenerator*);

	void setMapUnitScore();
	void setStartSlot();
	void setGoalSlot();
	void makeObjectLayout(MapNode*, ObjectLayout*);
	MapNode* getFixObjNode(int);
	void getFixObjGen(int);
	void getGlobalPosition(int, Vector3f&);
	int getVersusHighScore();
	int getVersusLowScore();
	bool isScoreSetDone();
	void clearRoomAndDoorScore();
	void setUnitAndDoorScore();
	void setStartMapNodeScore(MapNode*);
	void setChallengePod();
	void setVersusOnyon();
	void getMaxScoreRoomMapNode(MapNode*, BaseGen**);
	void calcNodeScore(MapNode*);
	void copyNodeScore();
	void subNodeScore();
	void setMapNodeScore(MapNode*, int);
	void setChallengeFixObjNormal();
	void setChallengeFixObjHard();
	bool isGoalSetHard();
	bool isFixObjSet(MapNode*, BaseGen*);

	MapUnitGenerator* m_generator; // _00
	MapNode** m_fixObjNodes;       // _04, array of 5 map nodes
	BaseGen** m_fixObjGens;        // _08, array of 5 gens
	u32 m_versusHighScore;         // _0C
	u32 m_versusLowScore;          // _10
};

// instantiated in Nishimura/MapCreator.cpp
extern RandMapMgr* randMapMgr;

} // namespace Cave
} // namespace Game

#endif
