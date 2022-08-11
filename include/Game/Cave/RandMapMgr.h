#ifndef _GAME_CAVE_RANDMAPMGR_H
#define _GAME_CAVE_RANDMAPMGR_H

#include "JSystem/JUT/JUTTexture.h"

#include "Game/mapParts.h"
#include "Game/Cave/RandMapUnit.h"

namespace Game {
namespace Cave {
struct RandEnemyUnit;
struct RandGateUnit;
struct RandItemUnit;
struct RandMapUnit;

struct RandMapDraw;
struct RandMapScore;
struct MapUnitGenerator;

struct EnemyNode;
struct EnemyUnit;

// size: 0xC
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

// size: 0x18
struct RandItemUnit {
	bool isGroundCapEnemySetDone(MapNode*);
	bool isFallCapEnemySetDone(MapNode*);

	ItemInfo* m_itemInfo;                 // _00
	int m_max;                            // _04
	MapUnitGenerator* m_mapUnitGenerator; // _08
	RandMapScore* m_randMapScore;         // _0C
	MapNode** m_mapNode;                  // _10
	BaseGen** m_baseGen;                  // _14
};

// size: 0x18
struct RandCapEnemyUnit {
	RandCapEnemyUnit(MapUnitGenerator&);

	void setManageClassPtr(RandItemUnit&);
	void setCapEnemySlot();
	void setCapCommonEnemySlot(MapNode, int);
	void setCapEnemy(MapNode*, EnemyUnit*, int, int);

	MapUnitGenerator* m_mapUnitGenerator; // _00
	RandItemUnit* m_randItemUnit;         // _04
	EnemyNode* m_enemyNode[2];            // _08
	int m_perSpawn[2];                    // _10
};

// size: 0x48
struct RandMapMgr : public CNode {
	RandMapMgr(bool isVersusHiba);

	virtual ~RandMapMgr() { } // _08 (weak)

	void loadResource(Game::MapUnitInterface*, int, Game::Cave::FloorInfo*, bool, Game::Cave::EditMapUnit*);
	void create();
	int getNumRooms();
	char* getUseUnitName(int);
	char* getRoomData(int, float&, float&, int&);
	RoomLink* makeRoomLink(int);
	ObjectLayoutInfo* makeObjectLayoutInfo(int);
	void getStartPosition(Vector3f&, int);
	void getItemDropPosition(Vector3f&, float, float);
	void getItemDropPosition(Vector3f*, int, float, float);
	void setUnitTexture(int, JUTTexture*);
	void setCaptureOn();
	void captureRadarMap(Graphics&);
	void isLastFloor();
	void isVersusHiba();
	void getRadarMapTexture();
	void radarMapPartsOpen(Vector3f&);
	void getPositionOnTex(Vector3f&, float&, float&);
	void getBaseGenData(Vector3f*, float*);
	void drawFrameBuffer(Graphics&);

	MapUnitGenerator* m_mapUnitGenerator; // _18

	RandMapUnit* m_randMapUnit;           // _1C
	RandEnemyUnit* m_randEnemyUnit;       // _20
	RandCapEnemyUnit* m_randCapEnemyUnit; // _24
	RandPlantUnit* m_randPlantUnit;       // _28
	RandGateUnit* m_randGateUnit;         // _2C
	RandItemUnit* m_randItemUnit;         // _30

	RandMapScore* m_randMapScore;  // _34
	RandMapDraw* m_randMapDraw;    // _38
	bool m_isCaptureOn;            // _3C
	JUTTexture* m_radarMapTexture; // _40
	bool m_isVersusHiba;           // _44
};

// size: 0x4
struct RandMapDraw {
	RandMapDraw(MapUnitGenerator* generator);

	void radarMapPartsOpen(Vector3f& vec);
	void draw(struct Graphics& gfx, float x, float y, float z);

	MapUnitGenerator* m_generator; // _00
};

extern RandMapMgr* randMapMgr;
} // namespace Cave
} // namespace Game

#endif
