#include "types.h"

/*
    Generated from dpostproc
*/

namespace Game {

/*
 * --INFO--
 * Address:	802613C0
 * Size:	00000C
 */
RumbleData::RumbleData()
{
	// Generated from stw r0, 0x0(r3)
	_00 = 0;
}

/*
 * --INFO--
 * Address:	802613CC
 * Size:	00000C
 */
RumbleDataMgr::RumbleDataMgr()
{
	// Generated from stw r0, 0x0(r3)
	_00 = 0;
}

/*
 * --INFO--
 * Address:	802613D8
 * Size:	00002C
 */
void RumbleDataMgr::getRumbleData(int)
{
	/*
	cmpwi    r4, 0
	blt      lbl_802613FC
	lwz      r0, 0(r3)
	cmpw     r4, r0
	bge      lbl_802613FC
	mulli    r0, r4, 0xc
	lwz      r3, 4(r3)
	add      r3, r3, r0
	blr

lbl_802613FC:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80261404
 * Size:	000128
 */
void RumbleDataMgr::read(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 0(r30)
	lwz      r26, 0(r30)
	cmpwi    r26, 0
	beq      lbl_80261518
	mulli    r3, r26, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game10RumbleDataFv@ha
	mr       r7, r26
	addi     r4, r4, __ct__Q24Game10RumbleDataFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	stw      r3, 4(r30)
	li       r25, 0
	li       r26, 0
	b        lbl_8026150C

lbl_80261468:
	lwz      r0, 4(r30)
	mr       r3, r31
	add      r28, r0, r26
	bl       readInt__6StreamFv
	stw      r3, 0(r28)
	lwz      r0, 0(r28)
	cmpwi    r0, 0
	ble      lbl_80261504
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r28)
	lwz      r0, 0(r28)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	li       r29, 0
	stw      r3, 8(r28)
	mr       r27, r29
	b        lbl_802614C8

lbl_802614B0:
	mr       r3, r31
	bl       readFloat__6StreamFv
	lwz      r3, 4(r28)
	addi     r29, r29, 1
	stfsx    f1, r3, r27
	addi     r27, r27, 4

lbl_802614C8:
	lwz      r0, 0(r28)
	cmpw     r29, r0
	blt      lbl_802614B0
	li       r29, 0
	mr       r27, r29
	b        lbl_802614F8

lbl_802614E0:
	mr       r3, r31
	bl       readFloat__6StreamFv
	lwz      r3, 8(r28)
	addi     r29, r29, 1
	stfsx    f1, r3, r27
	addi     r27, r27, 4

lbl_802614F8:
	lwz      r0, 0(r28)
	cmpw     r29, r0
	blt      lbl_802614E0

lbl_80261504:
	addi     r26, r26, 0xc
	addi     r25, r25, 1

lbl_8026150C:
	lwz      r0, 0(r30)
	cmpw     r25, r0
	blt      lbl_80261468

lbl_80261518:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
} // namespace Game
