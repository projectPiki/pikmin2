#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80484070
    lbl_80484070:
        .4byte 0x52616E64
        .4byte 0x4D61704D
        .4byte 0x67720000
    .global lbl_8048407C
    lbl_8048407C:
        .4byte 0x52616461
        .4byte 0x72204D61
        .4byte 0x70205465
        .4byte 0x78747572
        .4byte 0x65000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game8RoomLink
    __vt__Q24Game8RoomLink:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game8RoomLinkFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game4Cave10RandMapMgr
    __vt__Q34Game4Cave10RandMapMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave10RandMapMgrFv
        .4byte getChildCount__5CNodeFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global randMapMgr__Q24Game4Cave
    randMapMgr__Q24Game4Cave:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A728
    lbl_8051A728:
        .4byte 0x42480000
    .global lbl_8051A72C
    lbl_8051A72C:
        .4byte 0x47000000
    .global lbl_8051A730
    lbl_8051A730:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051A738
    lbl_8051A738:
        .float 0.5
    .global lbl_8051A73C
    lbl_8051A73C:
        .4byte 0x00000000
    .global lbl_8051A740
    lbl_8051A740:
        .4byte 0x40000000
    .global lbl_8051A744
    lbl_8051A744:
        .4byte 0x41000000
    .global lbl_8051A748
    lbl_8051A748:
        .4byte 0x3D40C0C1
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80244528
 * Size:	000088
 */
Cave::RandMapMgr::RandMapMgr(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q34Game4Cave10RandMapMgr@ha
	lis      r3, lbl_80484070@ha
	addi     r0, r4, __vt__Q34Game4Cave10RandMapMgr@l
	li       r4, 0
	stw      r0, 0(r30)
	addi     r0, r3, lbl_80484070@l
	mr       r3, r30
	stw      r4, 0x18(r30)
	stw      r4, 0x1c(r30)
	stw      r4, 0x20(r30)
	stw      r4, 0x24(r30)
	stw      r4, 0x28(r30)
	stw      r4, 0x2c(r30)
	stw      r4, 0x30(r30)
	stw      r4, 0x34(r30)
	stw      r4, 0x38(r30)
	stb      r4, 0x3c(r30)
	stw      r4, 0x40(r30)
	stb      r31, 0x44(r30)
	stw      r0, 0x14(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802445B0
 * Size:	0001A4
 */
void Cave::RandMapMgr::loadResource(Game::MapUnitInterface*, int, Game::Cave::FloorInfo*, bool, Game::Cave::EditMapUnit*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r31, r3
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  li        r3, 0x34
	  bl        -0x220738
	  mr.       r0, r3
	  beq-      .loc_0x54
	  mr        r4, r26
	  mr        r5, r27
	  mr        r6, r28
	  mr        r7, r29
	  mr        r8, r30
	  bl        0x74B0
	  mr        r0, r3

	.loc_0x54:
	  stw       r0, 0x18(r31)
	  li        r3, 0x2C
	  bl        -0x220768
	  mr.       r0, r3
	  beq-      .loc_0x74
	  lwz       r4, 0x18(r31)
	  bl        0x1964
	  mr        r0, r3

	.loc_0x74:
	  stw       r0, 0x1C(r31)
	  li        r3, 0x40
	  bl        -0x220788
	  mr.       r0, r3
	  beq-      .loc_0x98
	  lwz       r4, 0x18(r31)
	  lbz       r5, 0x44(r31)
	  bl        0x42D4
	  mr        r0, r3

	.loc_0x98:
	  stw       r0, 0x20(r31)
	  li        r3, 0x18
	  bl        -0x2207AC
	  mr.       r0, r3
	  beq-      .loc_0xB8
	  lwz       r4, 0x18(r31)
	  bl        0xBC808
	  mr        r0, r3

	.loc_0xB8:
	  stw       r0, 0x24(r31)
	  li        r3, 0xC
	  bl        -0x2207CC
	  mr.       r0, r3
	  beq-      .loc_0xD8
	  lwz       r4, 0x18(r31)
	  bl        0x5A88C
	  mr        r0, r3

	.loc_0xD8:
	  stw       r0, 0x28(r31)
	  li        r3, 0x18
	  bl        -0x2207EC
	  mr.       r0, r3
	  beq-      .loc_0xF8
	  lwz       r4, 0x18(r31)
	  bl        0xB7D0
	  mr        r0, r3

	.loc_0xF8:
	  stw       r0, 0x2C(r31)
	  li        r3, 0x18
	  bl        -0x22080C
	  mr.       r0, r3
	  beq-      .loc_0x118
	  lwz       r4, 0x18(r31)
	  bl        0x9CCC
	  mr        r0, r3

	.loc_0x118:
	  stw       r0, 0x30(r31)
	  li        r3, 0x14
	  bl        -0x22082C
	  mr.       r0, r3
	  beq-      .loc_0x138
	  lwz       r4, 0x18(r31)
	  bl        0x8198
	  mr        r0, r3

	.loc_0x138:
	  stw       r0, 0x34(r31)
	  li        r3, 0x4
	  bl        -0x22084C
	  mr.       r0, r3
	  beq-      .loc_0x158
	  lwz       r4, 0x18(r31)
	  bl        0xD18
	  mr        r0, r3

	.loc_0x158:
	  stw       r0, 0x38(r31)
	  lwz       r3, 0x20(r31)
	  lwz       r4, 0x34(r31)
	  bl        0x42A8
	  lwz       r3, 0x24(r31)
	  lwz       r4, 0x30(r31)
	  bl        0xBC774
	  lwz       r3, 0x2C(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r5, 0x30(r31)
	  bl        0xB7B4
	  lwz       r3, 0x30(r31)
	  lwz       r4, 0x34(r31)
	  bl        0x9CB4
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80244754
 * Size:	000104
 */
void Cave::RandMapMgr::create(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x1c(r3)
	bl       setMapUnit__Q34Game4Cave11RandMapUnitFv
	lwz      r3, 0x34(r31)
	bl       setStartSlot__Q34Game4Cave12RandMapScoreFv
	lwz      r3, 0x34(r31)
	bl       setMapUnitScore__Q34Game4Cave12RandMapScoreFv
	lwz      r3, 0x34(r31)
	bl       setGoalSlot__Q34Game4Cave12RandMapScoreFv
	lwz      r3, 0x20(r31)
	bl       setEnemySlot__Q34Game4Cave13RandEnemyUnitFv
	lwz      r3, 0x34(r31)
	bl       setMapUnitScore__Q34Game4Cave12RandMapScoreFv
	lwz      r3, 0x28(r31)
	bl       setPlantSlot__Q34Game4Cave13RandPlantUnitFv
	lwz      r3, 0x30(r31)
	bl       setItemSlot__Q34Game4Cave12RandItemUnitFv
	lwz      r3, 0x24(r31)
	bl       setCapEnemySlot__Q34Game4Cave16RandCapEnemyUnitFv
	lwz      r3, 0x34(r31)
	bl       setMapUnitScore__Q34Game4Cave12RandMapScoreFv
	lwz      r3, 0x2c(r31)
	bl       setGateDoor__Q34Game4Cave12RandGateUnitFv
	lwz      r3, 0x1c(r31)
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	bl       getTextureSize__Q34Game4Cave11RandMapUnitFRiRi
	lwz      r5, 0xc(r1)
	lis      r3, lbl_8048407C@ha
	lwz      r0, 8(r1)
	addi     r4, r3, lbl_8048407C@l
	slwi     r5, r5, 3
	lwz      r3, sys@sda21(r13)
	slwi     r0, r0, 3
	stw      r5, 0xc(r1)
	li       r5, 0
	stw      r0, 8(r1)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x40
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80244820
	lwz      r4, 0xc(r1)
	li       r6, 0
	lwz      r5, 8(r1)
	bl       __ct__10JUTTextureFii9_GXTexFmt
	mr       r0, r3

lbl_80244820:
	stw      r0, 0x40(r31)
	lis      r3, lbl_8048407C@ha
	addi     r4, r3, lbl_8048407C@l
	li       r0, 2
	lwz      r3, 0x40(r31)
	lwz      r3, 0x20(r3)
	stb      r0, 1(r3)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244858
 * Size:	000034
 */
void Cave::RandMapMgr::getNumRooms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024488C
 * Size:	00003C
 */
void Cave::RandMapMgr::getUseUnitName(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	lwz      r3, 0x28(r3)
	bl       getChildAt__5CNodeFi
	cmplwi   r3, 0
	beq      lbl_802448B4
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	b        lbl_802448B8

lbl_802448B4:
	li       r3, 0

lbl_802448B8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802448C8
 * Size:	000084
 */
void Cave::RandMapMgr::getRoomData(int, float&, float&, int&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r7
	stw      r29, 0x14(r1)
	mr       r29, r6
	stw      r28, 0x10(r1)
	mr       r28, r5
	lwz      r3, 0x18(r3)
	lwz      r3, 0x28(r3)
	bl       getChildAt__5CNodeFi
	or.      r31, r3, r3
	beq      lbl_80244928
	mr       r4, r28
	mr       r5, r29
	bl       getNodeCentreOffset__Q34Game4Cave7MapNodeFRfRf
	mr       r3, r31
	bl       getDirection__Q34Game4Cave7MapNodeFv
	stw      r3, 0(r30)
	mr       r3, r31
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	b        lbl_8024492C

lbl_80244928:
	li       r3, 0

lbl_8024492C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024494C
 * Size:	0000E4
 */
void Cave::RandMapMgr::makeRoomLink(int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	lwz      r3, 0x28(r3)
	bl       getChildAt__5CNodeFi
	or.      r26, r3, r3
	beq      lbl_80244A18
	li       r3, 0x20
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80244994
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game8RoomLink@ha
	addi     r0, r3, __vt__Q24Game8RoomLink@l
	stw      r0, 0(r29)

lbl_80244994:
	mr       r3, r26
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r30, r3
	li       r25, 0
	li       r27, 0
	b        lbl_80244A08

lbl_802449AC:
	li       r3, 0x20
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_802449CC
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game8RoomLink@ha
	addi     r0, r3, __vt__Q24Game8RoomLink@l
	stw      r0, 0(r28)

lbl_802449CC:
	sth      r25, 0x18(r28)
	addi     r0, r27, 4
	lwz      r3, 0x28(r26)
	lwzx     r0, r3, r0
	sth      r0, 0x1a(r28)
	lwz      r4, 0x28(r26)
	lwz      r3, 0x1c(r31)
	lwzx     r4, r4, r27
	bl       getAliveMapIndex__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNode
	sth      r3, 0x1c(r28)
	mr       r3, r29
	mr       r4, r28
	bl       add__5CNodeFP5CNode
	addi     r27, r27, 0xc
	addi     r25, r25, 1

lbl_80244A08:
	cmpw     r25, r30
	blt      lbl_802449AC
	mr       r3, r29
	b        lbl_80244A1C

lbl_80244A18:
	li       r3, 0

lbl_80244A1C:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244A30
 * Size:	000084
 */
void Cave::RandMapMgr::makeObjectLayoutInfo(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x18(r3)
	lwz      r3, 0x28(r3)
	bl       getChildAt__5CNodeFi
	or.      r30, r3, r3
	beq      lbl_80244A94
	li       r3, 8
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80244A7C
	mr       r4, r30
	bl       __ct__Q34Game4Cave12ObjectLayoutFPQ34Game4Cave7MapNode
	mr       r31, r3

lbl_80244A7C:
	lwz      r3, 0x34(r29)
	mr       r4, r30
	mr       r5, r31
	bl
makeObjectLayout__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave12ObjectLayout
	mr       r3, r31
	b        lbl_80244A98

lbl_80244A94:
	li       r3, 0

lbl_80244A98:
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

/*
 * --INFO--
 * Address:	80244AB4
 * Size:	000088
 */
void getStartPosition__Q34Game4Cave10RandMapMgrFR10Vector3f i(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r4, 0x18(r3)
	lbz      r0, 2(r4)
	cmplwi   r0, 0
	beq      lbl_80244B08
	cmpwi    r5, 0
	bne      lbl_80244AF4
	lwz      r3, 0x34(r3)
	mr       r5, r31
	li       r4, 3
	bl       "getGlobalPosition__Q34Game4Cave12RandMapScoreFiR10Vector3<f>"
	b        lbl_80244B18

lbl_80244AF4:
	lwz      r3, 0x34(r3)
	mr       r5, r31
	li       r4, 4
	bl       "getGlobalPosition__Q34Game4Cave12RandMapScoreFiR10Vector3<f>"
	b        lbl_80244B18

lbl_80244B08:
	lwz      r3, 0x34(r3)
	mr       r5, r31
	li       r4, 0
	bl       "getGlobalPosition__Q34Game4Cave12RandMapScoreFiR10Vector3<f>"

lbl_80244B18:
	lfs      f1, 4(r31)
	lfs      f0, lbl_8051A728@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 4(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244B3C
 * Size:	0000A0
 */
void getItemDropPosition__Q34Game4Cave10RandMapMgrFR10Vector3f ff(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	fmr      f30, f1
	mr       r30, r3
	fmr      f31, f2
	mr       r31, r4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	fsubs    f1, f31, f30
	lfd      f3, lbl_8051A730@sda21(r2)
	mr       r4, r31
	stw      r0, 8(r1)
	li       r5, -1
	lfs      f0, lbl_8051A72C@sda21(r2)
	lfd      f2, 8(r1)
	lwz      r3, 0x30(r30)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	fadds    f1, f30, f0
	bl       "getItemDropPosition__Q34Game4Cave12RandItemUnitFR10Vector3<f>fi"
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x44(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244BDC
 * Size:	000188
 */
void getItemDropPosition__Q34Game4Cave10RandMapMgrFP10Vector3f iff(void)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stmw     r26, 0x98(r1)
	fadds    f1, f1, f2
	lfs      f3, lbl_8051A738@sda21(r2)
	lfs      f0, lbl_8051A73C@sda21(r2)
	mr       r30, r3
	mr       r26, r4
	mr       r31, r5
	fmuls    f30, f3, f1
	fsubs    f31, f2, f30
	fcmpo    cr0, f31, f0
	ble      lbl_80244C28
	b        lbl_80244C2C

lbl_80244C28:
	fneg     f31, f31

lbl_80244C2C:
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0x8c(r1)
	srwi     r3, r31, 0x1f
	clrlwi   r0, r31, 0x1f
	lfd      f3, lbl_8051A730@sda21(r2)
	stw      r4, 0x88(r1)
	xor      r0, r0, r3
	subf     r3, r3, r0
	lfs      f1, lbl_8051A72C@sda21(r2)
	lfd      f2, 0x88(r1)
	addi     r27, r3, -1
	lfs      f0, lbl_8051A740@sda21(r2)
	addi     r4, r1, 0x48
	fsubs    f2, f2, f3
	lwz      r3, 0x30(r30)
	addi     r5, r1, 8
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r29, 0x94(r1)
	bl
setItemDropPositionList__Q34Game4Cave12RandItemUnitFPPQ34Game4Cave7MapNodePPQ34Game4Cave7BaseGen
	mr       r28, r26
	li       r26, 0
	b        lbl_80244D38

lbl_80244C98:
	fmr      f1, f30
	cmpw     r26, r27
	beq      lbl_80244D20
	srwi     r3, r26, 0x1f
	clrlwi   r0, r26, 0x1f
	xor      r0, r0, r3
	subf     r0, r3, r0
	cmpw     r0, r29
	bne      lbl_80244CF0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfd      f2, lbl_8051A730@sda21(r2)
	stw      r0, 0x90(r1)
	lfs      f0, lbl_8051A72C@sda21(r2)
	lfd      f1, 0x90(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	fadds    f1, f30, f0
	b        lbl_80244D20

lbl_80244CF0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfd      f2, lbl_8051A730@sda21(r2)
	stw      r0, 0x90(r1)
	lfs      f0, lbl_8051A72C@sda21(r2)
	lfd      f1, 0x90(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	fsubs    f1, f30, f0

lbl_80244D20:
	lwz      r3, 0x30(r30)
	mr       r4, r28
	mr       r5, r26
	bl       "getItemDropPosition__Q34Game4Cave12RandItemUnitFR10Vector3<f>fi"
	addi     r28, r28, 0xc
	addi     r26, r26, 1

lbl_80244D38:
	cmpw     r26, r31
	blt      lbl_80244C98
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	lmw      r26, 0x98(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80244D64
 * Size:	000048
 */
void Cave::RandMapMgr::setUnitTexture(int, JUTTexture*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	lwz      r3, 0x18(r3)
	lwz      r3, 0x28(r3)
	bl       getChildAt__5CNodeFi
	cmplwi   r3, 0
	beq      lbl_80244D98
	lwz      r3, 0x18(r3)
	mr       r4, r31
	bl       setUnitTexture__Q34Game4Cave8UnitInfoFP10JUTTexture

lbl_80244D98:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244DAC
 * Size:	00000C
 */
void Cave::RandMapMgr::setCaptureOn(void)
{
	// Generated from stb r0, 0x3C(r3)
	_3C = 1;
}

/*
 * --INFO--
 * Address:	80244DB8
 * Size:	0000DC
 */
void Cave::RandMapMgr::captureRadarMap(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lbz      r0, 0x3c(r3)
	cmplwi   r0, 0
	beq      lbl_80244E7C
	bl       drawFrameBuffer__Q34Game4Cave10RandMapMgrFR8Graphics
	mr       r3, r31
	bl       setTextureGX__8GraphicsFv
	li       r0, 0xff
	addi     r4, r1, 0xc
	stb      r0, 8(r1)
	li       r3, 4
	stb      r0, 9(r1)
	stb      r0, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetChanMatColor
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	lfs      f1, lbl_8051A73C@sda21(r2)
	mr       r4, r31
	lwz      r3, 0x38(r30)
	fmr      f2, f1
	lfs      f3, lbl_8051A744@sda21(r2)
	bl       draw__Q34Game4Cave11RandMapDrawFR8Graphicsfff
	lwz      r3, 0x40(r30)
	li       r4, 0
	li       r5, 0
	li       r6, 0x20
	li       r7, 0
	li       r8, 0
	bl       capture__10JUTTextureFii9_GXTexFmtbUc
	mr       r3, r30
	mr       r4, r31
	bl       drawFrameBuffer__Q34Game4Cave10RandMapMgrFR8Graphics
	li       r0, 0
	stb      r0, 0x3c(r30)

lbl_80244E7C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244E94
 * Size:	00001C
 */
bool Cave::RandMapMgr::isLastFloor(void)
{
	/*
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_80244EA8
	lbz      r3, 0(r3)
	blr

lbl_80244EA8:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244EB0
 * Size:	000008
 */
bool Cave::RandMapMgr::isVersusHiba(void)
{
	/*
	lbz      r3, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244EB8
 * Size:	000008
 */
void Cave::RandMapMgr::getRadarMapTexture(void)
{
	/*
	lwz      r3, 0x40(r3)
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80244EC0
 * Size:	000024
 */
void radarMapPartsOpen__Q34Game4Cave10RandMapMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x38(r3)
	bl       "radarMapPartsOpen__Q34Game4Cave11RandMapDrawFR10Vector3<f>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244EE4
 * Size:	000020
 */
void getPositionOnTex__Q34Game4Cave10RandMapMgrFR10Vector3f RfRf(void)
{
	/*
	lfs      f1, lbl_8051A748@sda21(r2)
	lfs      f0, 0(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0(r5)
	lfs      f0, 8(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244F04
 * Size:	000254
 */
void getBaseGenData__Q34Game4Cave10RandMapMgrFP10Vector3f Pf(void)
{
	/*
	stwu     r1, -0x18a0(r1)
	mflr     r0
	stw      r0, 0x18a4(r1)
	li       r0, 0x1898
	stfd     f31, 0x1890(r1)
	psq_stx  f31, r1, r0, 0, qr0
	li       r0, 0x1888
	stfd     f30, 0x1880(r1)
	psq_stx  f30, r1, r0, 0, qr0
	stmw     r15, 0x183c(r1)
	lwz      r6, 0x18(r3)
	addi     r18, r1, 0x1028
	lfs      f31, lbl_8051A73C@sda21(r2)
	mr       r29, r4
	lwz      r3, 0x28(r6)
	mr       r30, r5
	lwz      r0, 0x2c(r6)
	mr       r19, r18
	stw      r3, 8(r1)
	addi     r22, r1, 8
	addi     r21, r1, 0x828
	addi     r20, r1, 0x28
	stw      r0, 0xc(r1)
	li       r17, 0
	li       r16, 0

lbl_80244F68:
	lwz      r3, 0(r22)
	mr       r25, r21
	mr       r24, r20
	mr       r23, r19
	lwz      r15, 0x10(r3)
	b        lbl_80245068

lbl_80244F80:
	lwz      r3, 0x18(r15)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_80245064
	lwz      r31, 0x10(r3)
	mr       r28, r25
	mr       r27, r24
	mr       r26, r23
	b        lbl_8024505C

lbl_80244FA4:
	lwz      r0, 0x18(r31)
	cmpwi    r0, 0
	beq      lbl_80244FB8
	cmpwi    r0, 1
	bne      lbl_80245058

lbl_80244FB8:
	mr       r4, r15
	mr       r5, r31
	addi     r3, r1, 0x1c
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f1, 4(r29) lfs      f0, 0x20(r1) lfs      f3, 0(r29) fsubs    f4, f1, f0 lfs f2,
0x1c(r1) lfs      f1, 8(r29) lfs      f0, 0x24(r1) fsubs    f3, f3, f2 fmuls f4,
f4, f4 fsubs    f2, f1, f0 lfs      f0, lbl_8051A73C@sda21(r2) stw      r15,
0(r28) fmadds   f1, f3, f3, f4 fmuls    f2, f2, f2 stw      r31, 0(r27) fadds
f1, f2, f1 fcmpo    cr0, f1, f0 ble      lbl_80245020 ble      lbl_80245024
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80245024

lbl_80245020:
	fmr      f1, f0

lbl_80245024:
	stfs     f1, 0(r26)
	addi     r21, r21, 4
	addi     r20, r20, 4
	addi     r19, r19, 4
	lfs      f0, 0(r26)
	addi     r17, r17, 1
	addi     r28, r28, 4
	addi     r27, r27, 4
	fadds    f31, f31, f0
	addi     r25, r25, 4
	addi     r26, r26, 4
	addi     r24, r24, 4
	addi     r23, r23, 4

lbl_80245058:
	lwz      r31, 4(r31)

lbl_8024505C:
	cmplwi   r31, 0
	bne      lbl_80244FA4

lbl_80245064:
	lwz      r15, 4(r15)

lbl_80245068:
	cmplwi   r15, 0
	bne      lbl_80244F80
	addi     r16, r16, 1
	addi     r22, r22, 4
	cmpwi    r16, 2
	blt      lbl_80244F68
	cmpwi    r17, 0
	beq      lbl_8024512C
	lfs      f30, lbl_8051A73C@sda21(r2)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x182c(r1)
	li       r3, 0
	lfd      f2, lbl_8051A730@sda21(r2)
	stw      r0, 0x1828(r1)
	lfs      f0, lbl_8051A72C@sda21(r2)
	lfd      f1, 0x1828(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f1, f1, f0
	mtctr    r17
	cmpwi    r17, 0
	ble      lbl_8024512C

lbl_802450C8:
	lfs      f0, 0(r18)
	fadds    f30, f30, f0
	fcmpo    cr0, f30, f1
	ble      lbl_80245120
	slwi     r15, r3, 2
	addi     r17, r1, 0x828
	addi     r16, r1, 0x28
	lwzx     r4, r17, r15
	lwzx     r5, r16, r15
	addi     r3, r1, 0x10
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f0, 0x10(r1) lwzx     r3, r17, r15 stfs     f0, 0(r29) lwzx     r4, r16, r15 lfs
f0, 0x14(r1) stfs     f0, 4(r29) lfs      f0, 0x18(r1) stfs     f0, 8(r29) bl
getBaseGenGlobalDirection__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen stfs f1,
0(r30) b        lbl_8024512C

lbl_80245120:
	addi     r18, r18, 4
	addi     r3, r3, 1
	bdnz     lbl_802450C8

lbl_8024512C:
	li       r0, 0x1898
	psq_lx   f31, r1, r0, 0, qr0
	lfd      f31, 0x1890(r1)
	li       r0, 0x1888
	psq_lx   f30, r1, r0, 0, qr0
	lfd      f30, 0x1880(r1)
	lmw      r15, 0x183c(r1)
	lwz      r0, 0x18a4(r1)
	mtlr     r0
	addi     r1, r1, 0x18a0
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80245158
 * Size:	000200
 */
void Cave::RandMapMgr::drawFrameBuffer(Graphics&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	addi     r3, r4, 0xbc
	lwz      r12, 0xbc(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	bl       GXSetColorUpdate
	li       r3, 1
	bl       GXSetAlphaUpdate
	li       r3, 1
	li       r4, 0
	bl       GXSetDstAlpha
	li       r3, 2
	bl       GXSetCullMode
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetZMode
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0
	bl       GXSetBlendMode
	li       r3, 1
	bl       GXSetNumChans
	li       r5, 0
	li       r0, 0xff
	stb      r5, 8(r1)
	addi     r4, r1, 0xc
	li       r3, 4
	stb      r5, 9(r1)
	stb      r5, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetChanMatColor
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 0
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	bl       GXClearVtxDesc
	bl       GXInvalidateVtxCache
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f3, lbl_8051A73C@sda21(r2)
	lis      r0, 0x4330
	lis      r6, 0xCC008000@ha
	stw      r0, 0x10(r1)
	lfd      f2, lbl_8051A730@sda21(r2)
	li       r3, 0
	stfs     f3, 0xCC008000@l(r6)
	li       r4, 0
	stfs     f3, -0x8000(r6)
	stfs     f3, -0x8000(r6)
	lwz      r5, 0x40(r31)
	stw      r0, 0x18(r1)
	lwz      r5, 0x20(r5)
	stw      r0, 0x20(r1)
	lhz      r5, 2(r5)
	stw      r0, 0x28(r1)
	xoris    r0, r5, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	stfs     f0, -0x8000(r6)
	stfs     f3, -0x8000(r6)
	stfs     f3, -0x8000(r6)
	lwz      r5, 0x40(r31)
	lwz      r5, 0x20(r5)
	lhz      r0, 2(r5)
	lhz      r5, 4(r5)
	xoris    r0, r0, 0x8000
	stw      r0, 0x1c(r1)
	xoris    r0, r5, 0x8000
	stw      r0, 0x24(r1)
	lfd      f1, 0x18(r1)
	lfd      f0, 0x20(r1)
	fsubs    f1, f1, f2
	fsubs    f0, f0, f2
	stfs     f1, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stfs     f3, -0x8000(r6)
	lwz      r5, 0x40(r31)
	lwz      r5, 0x20(r5)
	lhz      r0, 4(r5)
	xoris    r0, r0, 0x8000
	stfs     f3, -0x8000(r6)
	stw      r0, 0x2c(r1)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f2
	stfs     f0, -0x8000(r6)
	stfs     f3, -0x8000(r6)
	bl       GXSetDstAlpha
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80245358
 * Size:	000060
 */
RoomLink::~RoomLink(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8024539C
	lis      r5, __vt__Q24Game8RoomLink@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game8RoomLink@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8024539C
	mr       r3, r30
	bl       __dl__FPv

lbl_8024539C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802453B8
 * Size:	000060
 */
Cave::RandMapMgr::~RandMapMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802453FC
	lis      r5, __vt__Q34Game4Cave10RandMapMgr@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game4Cave10RandMapMgr@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_802453FC
	mr       r3, r30
	bl       __dl__FPv

lbl_802453FC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
