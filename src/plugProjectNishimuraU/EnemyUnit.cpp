#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Cave9EnemyNode
    __vt__Q34Game4Cave9EnemyNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave9EnemyNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte getObjectId__Q34Game4Cave9EnemyNodeFv
        .4byte getObjectType__Q34Game4Cave9EnemyNodeFv
        .4byte getBirthCount__Q34Game4Cave9EnemyNodeFv
        .4byte getDirection__Q34Game4Cave9EnemyNodeFv
        .4byte getBirthDoorIndex__Q34Game4Cave9EnemyNodeFv
        .4byte getBirthPosition__Q34Game4Cave9EnemyNodeFRfRf
        .4byte getExtraCode__Q34Game4Cave9EnemyNodeFv
        .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv
    .global __vt__Q24Game16ObjectLayoutNode
    __vt__Q24Game16ObjectLayoutNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game16ObjectLayoutNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte getDirection__Q24Game16ObjectLayoutNodeFv
        .4byte getBirthDoorIndex__Q24Game16ObjectLayoutNodeFv
        .4byte getBirthPosition__Q24Game16ObjectLayoutNodeFRfRf
        .4byte getExtraCode__Q24Game16ObjectLayoutNodeFv
        .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A708
    lbl_8051A708:
        .4byte 0x00000000
    .global lbl_8051A70C
    lbl_8051A70C:
        .4byte 0x47000000
    .global lbl_8051A710
    lbl_8051A710:
        .4byte 0x40C90FDB
    .global lbl_8051A714
    lbl_8051A714:
        .4byte 0xC3A2F983
    .global lbl_8051A718
    lbl_8051A718:
        .4byte 0x43A2F983
        .4byte 0x00000000
    .global lbl_8051A720
    lbl_8051A720:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802440F4
 * Size:	000074
 */
Cave::EnemyNode::EnemyNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q24Game16ObjectLayoutNode@ha
	lis      r3, __vt__Q34Game4Cave9EnemyNode@ha
	addi     r0, r4, __vt__Q24Game16ObjectLayoutNode@l
	li       r4, 0
	stw      r0, 0(r31)
	addi     r3, r3, __vt__Q34Game4Cave9EnemyNode@l
	li       r0, -1
	lfs      f0, lbl_8051A708@sda21(r2)
	stw      r3, 0(r31)
	mr       r3, r31
	stw      r4, 0x18(r31)
	stw      r4, 0x1c(r31)
	stw      r0, 0x20(r31)
	stw      r4, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x34(r31)
	stfs     f0, 0x30(r31)
	stfs     f0, 0x2c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244168
 * Size:	000060
 */
ObjectLayoutNode::~ObjectLayoutNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802441AC
	lis      r5, __vt__Q24Game16ObjectLayoutNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game16ObjectLayoutNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_802441AC
	mr       r3, r30
	bl       __dl__FPv

lbl_802441AC:
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
 * Address:	802441C8
 * Size:	000094
 */
Cave::EnemyNode::EnemyNode(Game::Cave::EnemyUnit*, Game::Cave::BaseGen*, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q24Game16ObjectLayoutNode@ha
	lis      r3, __vt__Q34Game4Cave9EnemyNode@ha
	addi     r4, r4, __vt__Q24Game16ObjectLayoutNode@l
	li       r0, -1
	stw      r4, 0(r28)
	addi     r4, r3, __vt__Q34Game4Cave9EnemyNode@l
	lfs      f0, lbl_8051A708@sda21(r2)
	mr       r3, r28
	stw      r4, 0(r28)
	stw      r29, 0x18(r28)
	stw      r30, 0x1c(r28)
	stw      r0, 0x20(r28)
	stw      r31, 0x24(r28)
	stfs     f0, 0x28(r28)
	stfs     f0, 0x34(r28)
	stfs     f0, 0x30(r28)
	stfs     f0, 0x2c(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024425C
 * Size:	0001A8
 */
void Cave::EnemyNode::makeGlobalData(Game::Cave::MapNode*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r31, r3
	mr       r30, r4
	lwz      r5, 0x1c(r3)
	addi     r3, r1, 8
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f0, 8(r1) mr       r3, r30 stfs     f0, 0x2c(r31) lfs      f0, 0xc(r1) stfs f0,
0x30(r31) lfs      f0, 0x10(r1) stfs     f0, 0x34(r31) lwz      r4, 0x1c(r31) bl
getBaseGenGlobalDirection__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen stfs f1,
0x28(r31) lwz      r3, 0x1c(r31) cmplwi   r3, 0 beq      lbl_802443E4 lwz r0,
0x18(r3) cmpwi    r0, 0 bne      lbl_802443E4 lfs      f31, 0x2c(r3) bl rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f2, lbl_8051A720@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f0, lbl_8051A70C@sda21(r2)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051A720@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f2, lbl_8051A710@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051A70C@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051A708@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	stfs     f1, 0x28(r31)
	lfs      f1, 0x28(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8024436C
	lfs      f0, lbl_8051A714@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80244390

lbl_8024436C:
	lfs      f0, lbl_8051A718@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80244390:
	lfs      f1, 0x2c(r31)
	lfs      f0, lbl_8051A708@sda21(r2)
	fmadds   f1, f31, f2, f1
	stfs     f1, 0x2c(r31)
	lfs      f2, 0x28(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_802443B0
	fneg     f2, f2

lbl_802443B0:
	lfs      f1, lbl_8051A718@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x34(r31)
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x34(r31)

lbl_802443E4:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80244404
 * Size:	000020
 */
void setGlobalData__Q34Game4Cave9EnemyNodeFR10Vector3f f(void)
{
	/*
	lfs      f0, 0(r4)
	stfs     f0, 0x2c(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x30(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x34(r3)
	stfs     f1, 0x28(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80244424
 * Size:	000008
 */
void Cave::EnemyNode::setBirthDoorIndex(int a1)
{
	// Generated from stw r4, 0x20(r3)
	_20 = a1;
}

/*
 * --INFO--
 * Address:	8024442C
 * Size:	000020
 */
void Cave::EnemyNode::getObjectId(void)
{
	/*
	lwz      r3, 0x18(r3)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80244444
	lwz      r3, 0x18(r3)
	blr

lbl_80244444:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024444C
 * Size:	000020
 */
void Cave::EnemyNode::getExtraCode(void)
{
	/*
	lwz      r3, 0x18(r3)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80244464
	lha      r3, 0x26(r3)
	blr

lbl_80244464:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024446C
 * Size:	000020
 */
void Cave::EnemyNode::getObjectType(void)
{
	/*
	lwz      r3, 0x18(r3)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80244484
	lbz      r3, 0x24(r3)
	blr

lbl_80244484:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024448C
 * Size:	000008
 */
void Cave::EnemyNode::getBirthCount(void)
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244494
 * Size:	000014
 */
void Cave::EnemyNode::getBirthPosition(float&, float&)
{
	/*
	lfs      f0, 0x2c(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x34(r3)
	stfs     f0, 0(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802444A8
 * Size:	000008
 */
void Cave::EnemyNode::getDirection(void)
{
	/*
	lfs      f1, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802444B0
 * Size:	000008
 */
void Cave::EnemyNode::getBirthDoorIndex(void)
{
	/*
	lwz      r3, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802444B8
 * Size:	000070
 */
Cave::EnemyNode::~EnemyNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8024450C
	lis      r4, __vt__Q34Game4Cave9EnemyNode@ha
	addi     r0, r4, __vt__Q34Game4Cave9EnemyNode@l
	stw      r0, 0(r30)
	beq      lbl_802444FC
	lis      r5, __vt__Q24Game16ObjectLayoutNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game16ObjectLayoutNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802444FC:
	extsh.   r0, r31
	ble      lbl_8024450C
	mr       r3, r30
	bl       __dl__FPv

lbl_8024450C:
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
