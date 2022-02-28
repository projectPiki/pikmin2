#include "Game/GameSystem.h"
#include "Game/GameConfig.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/mapParts.h"
#include "types.h"

namespace Game {
namespace Cave {
extern RandMapMgr* randMapMgr;
} // namespace Cave

/*
 * --INFO--
 * Address:	8024C5E4
 * Size:	0000F0
 * Matches!
 */
void RoomMapMgr::nishimuraCreateRandomMap(MapUnitInterface* muiArray, int p2, Cave::FloorInfo* floorInfo, bool p4, Cave::EditMapUnit* unit)
{
	// p2 and p4 could stand to have more descriptive parameter names
	bool isVersusHiba = false;
	if (gameSystem != nullptr && gameSystem->m_mode == GSM_VERSUS_MODE && gGameConfig.m_parms.m_vsHiba.m_data != 0) {
		isVersusHiba = true;
	} // maybe a ternary or inline?
	Cave::randMapMgr = new Cave::RandMapMgr(isVersusHiba);
	Cave::randMapMgr->loadResource(muiArray, p2, floorInfo, p4, unit);
	Cave::randMapMgr->create();
	int numRooms = Cave::randMapMgr->getNumRooms();
	for (int roomIndex = 0; roomIndex < numRooms; roomIndex++) {
		char* name = Cave::randMapMgr->getUseUnitName(roomIndex);
		useUnit(name);
	}
}

/*
 * --INFO--
 * Address:	8024C6D4
 * Size:	00011C
 * Matches!
 */
void RoomMapMgr::nishimuraPlaceRooms(void)
{
	float centreX; // declaration order matters
	float centreY; // declaration order matters
	int direction; // declaration order matters

	int numRooms = Cave::randMapMgr->getNumRooms();
	allocRooms(numRooms);

	for (int index = 0; index < numRooms; index++) {
		char* unitName         = Cave::randMapMgr->getRoomData(index, centreX, centreY, direction); // sets centreX, centreY, and direction
		RoomLink* pRoomLink    = Cave::randMapMgr->makeRoomLink(index);
		ObjectLayoutInfo* pOLI = Cave::randMapMgr->makeObjectLayoutInfo(index);
		makeRoom(unitName, centreX, centreY, direction, index, pRoomLink, pOLI);
	}

	for (int i = 0; i < 2; i++) {
		Vector3f startPos(0.0f, 0.0f, 0.0f);
		Cave::randMapMgr->getStartPosition(startPos, i);

		m_startPositions[i].x = startPos.x;
		m_startPositions[i].y = startPos.y;
		m_startPositions[i].z = startPos.z;
	}
}

/*
 * --INFO--
 * Address:	8024C7F0
 * Size:	000088
 * Matches!
 */
void RoomMapMgr::nishimuraSetTexture(void)
{
	int numRooms = Cave::randMapMgr->getNumRooms();
	for (int unitIndex = 0; unitIndex < numRooms; unitIndex++) {
		char* unitName      = Cave::randMapMgr->getUseUnitName(unitIndex);
		JUTTexture* texture = getTexture(unitName);
		Cave::randMapMgr->setUnitTexture(unitIndex, texture);
	}
}
} // namespace Game
