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

		Vector3f* pStartPos = &m_startPositions[i];
		pStartPos->x        = startPos.x;
		pStartPos->y        = startPos.y;
		pStartPos->z        = startPos.z;
	}
}

/*
 * --INFO--
 * Address:	8024C7F0
 * Size:	000088
 */
void RoomMapMgr::nishimuraSetTexture(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	bl       getNumRooms__Q34Game4Cave10RandMapMgrFv
	mr       r31, r3
	li       r30, 0
	b        lbl_8024C854

lbl_8024C820:
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	mr       r4, r30
	bl       getUseUnitName__Q34Game4Cave10RandMapMgrFi
	mr       r0, r3
	mr       r3, r29
	mr       r4, r0
	bl       getTexture__Q24Game10RoomMapMgrFPc
	mr       r0, r3
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	mr       r5, r0
	mr       r4, r30
	bl       setUnitTexture__Q34Game4Cave10RandMapMgrFiP10JUTTexture
	addi     r30, r30, 1

lbl_8024C854:
	cmpw     r30, r31
	blt      lbl_8024C820
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // namespace Game
