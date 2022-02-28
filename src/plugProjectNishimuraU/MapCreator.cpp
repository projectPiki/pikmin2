#include "Game/GameSystem.h"
#include "Game/GameConfig.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/mapParts.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A7F0
    lbl_8051A7F0:
        .4byte 0x00000000
        .4byte 0x00000000
*/

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
 */
void RoomMapMgr::nishimuraPlaceRooms(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	mr       r27, r3
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	bl       getNumRooms__Q34Game4Cave10RandMapMgrFv
	mr       r0, r3
	mr       r3, r27
	mr       r31, r0
	mr       r4, r31
	bl       allocRooms__Q24Game10RoomMapMgrFi
	li       r30, 0
	b        lbl_8024C77C

lbl_8024C714:
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	mr       r4, r30
	addi     r5, r1, 0x10
	addi     r6, r1, 0xc
	addi     r7, r1, 8
	bl       getRoomData__Q34Game4Cave10RandMapMgrFiRfRfRi
	mr       r0, r3
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	mr       r29, r0
	mr       r4, r30
	bl       makeRoomLink__Q34Game4Cave10RandMapMgrFi
	mr       r0, r3
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	mr       r28, r0
	mr       r4, r30
	bl       makeObjectLayoutInfo__Q34Game4Cave10RandMapMgrFi
	lfs      f1, 0x10(r1)
	mr       r8, r3
	lfs      f2, 0xc(r1)
	mr       r3, r27
	lwz      r5, 8(r1)
	mr       r4, r29
	mr       r6, r30
	mr       r7, r28
	bl
makeRoom__Q24Game10RoomMapMgrFPcffiiPQ24Game8RoomLinkPQ24Game16ObjectLayoutInfo
	addi     r30, r30, 1

lbl_8024C77C:
	cmpw     r30, r31
	blt      lbl_8024C714
	lfs      f31, lbl_8051A7F0@sda21(r2)
	mr       r31, r27
	li       r28, 0

lbl_8024C790:
	stfs     f31, 0x14(r1)
	mr       r5, r28
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	addi     r4, r1, 0x14
	stfs     f31, 0x18(r1)
	stfs     f31, 0x1c(r1)
	bl       "getStartPosition__Q34Game4Cave10RandMapMgrFR10Vector3<f>i"
	lfs      f0, 0x14(r1)
	addi     r28, r28, 1
	cmpwi    r28, 2
	stfs     f0, 0xfc(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x100(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x104(r31)
	addi     r31, r31, 0xc
	blt      lbl_8024C790
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
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
