#ifndef _GAME_CAVE_RANDMAPMGR_H
#define _GAME_CAVE_RANDMAPMGR_H

#include "types.h"
#include "Game/Cave/RandMapUnit.h"
#include "JSystem/JUT/JUTTexture.h"

/*
    __vt__Q34Game4Cave10RandMapMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave10RandMapMgrFv
    .4byte getChildCount__5CNodeFv
*/

namespace Game {
namespace Cave {
struct RandEnemyUnit;
struct RandCapEnemyUnit;
struct RandPlantUnit;
struct RandGateUnit;
struct RandItemUnit;
struct RandMapScore;
struct RandMapDraw;

struct RandMapMgr : public CNode {
	RandMapMgr(bool isVersusHiba);
	virtual ~RandMapMgr();       // _00
	virtual int getChildCount(); // _04

	// _00 VTBL
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

	void create(void);
	int getNumRooms(void);
	char* getUseUnitName(int);
	void loadResource(Game::MapUnitInterface*, int, Game::Cave::FloorInfo*, bool, Game::Cave::EditMapUnit*);
};
} // namespace Cave
} // namespace Game

#endif
