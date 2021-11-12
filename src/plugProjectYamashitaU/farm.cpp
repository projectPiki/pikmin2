#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047B6C8
    lbl_8047B6C8:
        .asciz "ObstacleNode"
        .skip 3
    .global lbl_8047B6D8
    lbl_8047B6D8:
        .4byte 0x506C616E
        .4byte 0x744E6F64
        .4byte 0x65000000
        .4byte 0x4661726D
        .4byte 0x20726573
        .4byte 0x6F757263
        .4byte 0x65000000
        .4byte 0x63726561
        .4byte 0x74654D6F
        .4byte 0x64656C00
        .4byte 0x76747843
        .4byte 0x6C72416E
        .4byte 0x6D000000
    .global lbl_8047B70C
    lbl_8047B70C:
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Farm4Farm
    __vt__Q34Game4Farm4Farm:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Farm4FarmFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game4Farm8Obstacle
    __vt__Q34Game4Farm8Obstacle:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Farm8ObstacleFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game4Farm5Plant
    __vt__Q34Game4Farm5Plant:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Farm5PlantFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517E78
    lbl_80517E78:
        .4byte 0x00000000
    .global lbl_80517E7C
    lbl_80517E7C:
        .4byte 0x945F8D6B
        .4byte 0x00000000
    .global lbl_80517E84
    lbl_80517E84:
        .4byte 0x6D646C44
        .4byte 0x61746100
    .global lbl_80517E8C
    lbl_80517E8C:
        .4byte 0x00000000
    .global lbl_80517E90
    lbl_80517E90:
        .float 1.0
        .4byte 0x00000000
    .global lbl_80517E98
    lbl_80517E98:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	801234F8
 * Size:	000030
 */
void Farm::Obstacle::setPower(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	lwz      r5, 0x20(r3)
	stfs     f1, 0x14(r5)
	lwz      r3, 0x18(r3)
	bl       updateObjectRelation__Q34Game4Farm4FarmFb
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123528
 * Size:	0000BC
 */
Farm::Farm::Farm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__5CNode@ha
	lis      r6, __vt__Q34Game4Farm4Farm@ha
	stw      r0, 0x14(r1)
	addi     r9, r4, __vt__5CNode@l
	lis      r5, lbl_8047B6C8@ha
	lis      r4, lbl_8047B6D8@ha
	stw      r31, 0xc(r1)
	li       r8, 0
	addi     r7, r2, lbl_80517E7C@sda21
	addi     r6, r6, __vt__Q34Game4Farm4Farm@l
	stw      r9, 0(r3)
	addi     r5, r5, lbl_8047B6C8@l
	addi     r0, r4, lbl_8047B6D8@l
	mr       r31, r3
	stw      r8, 0x10(r3)
	addi     r4, r31, 0x30
	stw      r8, 0xc(r3)
	stw      r8, 8(r3)
	stw      r8, 4(r3)
	stw      r7, 0x14(r3)
	stw      r6, 0(r3)
	stw      r8, 0x24(r3)
	stw      r8, 0x28(r3)
	stw      r9, 0x30(r3)
	stw      r8, 0x40(r3)
	stw      r8, 0x3c(r3)
	stw      r8, 0x38(r3)
	stw      r8, 0x34(r3)
	stw      r5, 0x44(r3)
	stw      r9, 0x48(r3)
	stw      r8, 0x58(r3)
	stw      r8, 0x54(r3)
	stw      r8, 0x50(r3)
	stw      r8, 0x4c(r3)
	stw      r0, 0x5c(r3)
	bl       add__5CNodeFP5CNode
	mr       r3, r31
	addi     r4, r31, 0x48
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801235E4
 * Size:	000200
 */
void Farm::Farm::loadResource(unsigned long, void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, lbl_8047B6C8@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	addi     r30, r6, lbl_8047B6C8@l
	stw      r29, 0x14(r1)
	mr       r29, r5
	li       r5, 0
	stw      r28, 0x10(r1)
	mr       r28, r4
	addi     r4, r30, 0x1c
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80517E84@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r29
	lis      r4, 0x2000
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x24(r31)
	addi     r4, r2, lbl_80517E84@sda21
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lfs      f0, lbl_80517E8C@sda21(r2)
	li       r5, 0
	stfs     f0, 0x18(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x20(r31)
	lwz      r3, 0x24(r31)
	lwz      r4, 0xa0(r3)
	b        lbl_801236AC

lbl_80123670:
	mulli    r0, r0, 0xc
	lfs      f1, 0x18(r31)
	addi     r5, r5, 1
	add      r3, r4, r0
	lfs      f0, 0(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r31)
	lfs      f1, 0x1c(r31)
	lfs      f0, 4(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x1c(r31)
	lfs      f1, 0x20(r31)
	lfs      f0, 8(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x20(r31)

lbl_801236AC:
	lwz      r3, 0x24(r31)
	clrlwi   r0, r5, 0x10
	lwz      r3, 0x88(r3)
	cmplw    r0, r3
	blt      lbl_80123670
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_80517E98@sda21(r2)
	addi     r4, r30, 0x2c
	stw      r0, 8(r1)
	li       r5, 0
	lfs      f3, lbl_80517E90@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, 0x18(r31)
	fsubs    f1, f1, f2
	fdivs    f1, f3, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x18(r31)
	lfs      f0, 0x1c(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x20(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x20(r31)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80123738
	lwz      r4, 0x24(r31)
	mr       r6, r28
	li       r5, 0
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_80123738:
	stw      r0, 0x28(r31)
	addi     r4, r30, 0x2c
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x38
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80123774
	lwz      r4, 0x24(r31)
	bl       __ct__Q24Game16FieldVtxColorMgrFP12J3DModelData
	mr       r0, r3

lbl_80123774:
	stw      r0, 0x2c(r31)
	lwz      r3, 0x2c(r31)
	bl       initVtxColor__Q24Game16FieldVtxColorMgrFv
	lwz      r4, 0x2c(r31)
	cmplwi   r4, 0
	beq      lbl_80123790
	addi     r4, r4, 0xc

lbl_80123790:
	mr       r3, r31
	bl       add__5CNodeFP5CNode
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x38
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, 0x28(r31)
	li       r5, 0
	lwz      r4, 0x2c(r31)
	lwz      r3, 8(r3)
	bl       setVtxColorCalc__8J3DModelFP15J3DVtxColorCalc19J3DDeformAttachFlag
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x1c
	bl       heapStatusEnd__6SystemFPc
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
 * Address:	801237E4
 * Size:	000004
 */
void Farm::Farm::update() { }

/*
 * --INFO--
 * Address:	801237E8
 * Size:	000034
 */
void Farm::Farm::doAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x28(r3)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
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
 * Address:	8012381C
 * Size:	000034
 */
void Farm::Farm::doEntry()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x28(r3)
	lwz      r3, 8(r3)
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
 * Address:	80123850
 * Size:	000024
 */
void Farm::Farm::doSetView(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x28(r3)
	bl       setCurrentViewNo__Q28SysShape5ModelFUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123874
 * Size:	000024
 */
void Farm::Farm::doViewCalc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x28(r3)
	bl       viewCalc__Q28SysShape5ModelFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123898
 * Size:	000070
 */
void Farm::Farm::addObstacle(Game::Creature*, float, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       createNewObstacle__Q34Game4Farm4FarmFPQ24Game8Creatureff
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r31, r0
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r31)
	lwz      r3, 0x2c(r30)
	bl       initVtxColor__Q24Game16FieldVtxColorMgrFv
	mr       r3, r30
	li       r4, 1
	bl       updateObjectRelation__Q34Game4Farm4FarmFb
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123908
 * Size:	00000C
 */
void Creature::getCreatureName()
{
	/*
	lis      r3, lbl_8047B70C@ha
	addi     r3, r3, lbl_8047B70C@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123914
 * Size:	000114
 */
void Farm::Farm::createNewObstacle(Game::Creature*, float, float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	fmr      f30, f1
	mr       r28, r3
	fmr      f31, f2
	mr       r29, r4
	li       r3, 0x24
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801239E8
	lis      r3, __vt__5CNode@ha
	lwz      r30, 0x2c(r28)
	addi     r0, r3, __vt__5CNode@l
	li       r6, 0
	stw      r0, 0(r31)
	lis      r3, __vt__Q34Game4Farm8Obstacle@ha
	addi     r0, r3, __vt__Q34Game4Farm8Obstacle@l
	addi     r5, r2, lbl_80517E78@sda21
	stw      r6, 0x10(r31)
	mr       r4, r29
	addi     r3, r1, 0x14
	stw      r6, 0xc(r31)
	stw      r6, 8(r31)
	stw      r6, 4(r31)
	stw      r5, 0x14(r31)
	stw      r0, 0(r31)
	stw      r28, 0x18(r31)
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	fmr      f1, f30
	lfs      f3, 0x18(r1)
	fmr      f2, f31
	lfs      f0, 0x1c(r1)
	mr       r3, r30
	stfs     f4, 8(r1)
	addi     r4, r1, 8
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	stw      r29, 0x1c(r31)
	bl       "createNewControl__Q24Game16FieldVtxColorMgrFR10Vector3<f>ff"
	stw      r3, 0x20(r31)

lbl_801239E8:
	mr       r4, r31
	addi     r3, r28, 0x30
	bl       add__5CNodeFP5CNode
	mr       r3, r31
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r0, 0x54(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123A28
 * Size:	000044
 */
void Farm::Farm::addPlant(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       createNewPlant__Q34Game4Farm4FarmFPQ24Game8Creature
	mr       r0, r3
	mr       r3, r31
	mr       r31, r0
	li       r4, 1
	bl       updateObjectRelation__Q34Game4Farm4FarmFb
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123A6C
 * Size:	0000B0
 */
void Farm::Farm::createNewPlant(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x20
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80123AD8
	lis      r4, __vt__5CNode@ha
	lis      r3, __vt__Q34Game4Farm5Plant@ha
	addi     r0, r4, __vt__5CNode@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r4, r2, lbl_80517E78@sda21
	addi     r0, r3, __vt__Q34Game4Farm5Plant@l
	stw      r5, 0x10(r31)
	stw      r5, 0xc(r31)
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stw      r4, 0x14(r31)
	stw      r0, 0(r31)
	stw      r30, 0x18(r31)
	stw      r5, 0x1c(r31)

lbl_80123AD8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r31)
	mr       r4, r31
	addi     r3, r29, 0x48
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123B1C
 * Size:	0001DC
 */
void Farm::Farm::updateObjectRelation(bool)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	mr       r31, r3
	lfs      f31, lbl_80517E8C@sda21(r2)
	lwz      r29, 0x58(r3)
	clrlwi   r30, r4, 0x18
	b        lbl_80123CBC

lbl_80123B60:
	lwz      r4, 0x18(r29)
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f30, 0x2c(r1)
	li       r28, 0
	lfs      f29, 0x30(r1)
	lfs      f28, 0x34(r1)
	lwz      r27, 0x40(r31)
	b        lbl_80123C1C

lbl_80123B90:
	lwz      r4, 0x1c(r27)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x24(r1)
	lfs      f1, 0x20(r1)
	fsubs    f2, f0, f29
	lfs      f0, 0x28(r1)
	fsubs    f1, f1, f30
	fsubs    f0, f0, f28
	fmuls    f2, f2, f2
	fmuls    f3, f0, f0
	fmadds   f0, f1, f1, f2
	fadds    f1, f3, f0
	fcmpo    cr0, f1, f31
	ble      lbl_80123BE8
	ble      lbl_80123BEC
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80123BEC

lbl_80123BE8:
	fmr      f1, f31

lbl_80123BEC:
	lwz      r3, 0x20(r27)
	lfs      f2, 0x10(r3)
	fcmpo    cr0, f1, f2
	bge      lbl_80123C18
	lfs      f0, 0x14(r3)
	fmuls    f0, f2, f0
	fcmpo    cr0, f1, f0
	bge      lbl_80123C14
	addi     r28, r28, -1
	b        lbl_80123C18

lbl_80123C14:
	addi     r28, r28, 1

lbl_80123C18:
	lwz      r27, 4(r27)

lbl_80123C1C:
	cmplwi   r27, 0
	bne      lbl_80123B90
	cmplwi   r30, 0
	stw      r28, 0x1c(r29)
	beq      lbl_80123CB8
	lwz      r6, 0x1c(r29)
	cmpwi    r6, 0
	ble      lbl_80123C78
	lwz      r3, 0x18(r29)
	lis      r4, __vt__Q24Game11Interaction@ha
	addi     r0, r4, __vt__Q24Game11Interaction@l
	lis      r4, __vt__Q24Game17InteractFarmHaero@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q24Game17InteractFarmHaero@l
	stw      r3, 0xc(r1)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stw      r6, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_80123CB8

lbl_80123C78:
	bge      lbl_80123CB8
	lwz      r3, 0x18(r29)
	lis      r4, __vt__Q24Game11Interaction@ha
	addi     r0, r4, __vt__Q24Game11Interaction@l
	lis      r4, __vt__Q24Game18InteractFarmKarero@ha
	stw      r0, 0x14(r1)
	addi     r5, r4, __vt__Q24Game18InteractFarmKarero@l
	neg      r0, r6
	stw      r3, 0x18(r1)
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80123CB8:
	lwz      r29, 4(r29)

lbl_80123CBC:
	cmplwi   r29, 0
	bne      lbl_80123B60
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123CF8
 * Size:	000108
 */
void Farm::Farm::doDebugDraw(Graphics&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r3, 0x25c(r4)
	li       r4, 0
	bl       getMatrix__8ViewportFb
	mr       r4, r3
	mr       r3, r30
	bl       initPrimDraw__8GraphicsFP7Matrixf
	lwz      r31, 0x40(r29)
	b        lbl_80123DC8

lbl_80123D38:
	lwz      r4, 0x1c(r31)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	li       r0, 0xff
	lfs      f1, 0x18(r1)
	mr       r3, r30
	lfs      f0, 0x1c(r1)
	addi     r4, r1, 8
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	stb      r0, 0x84(r30)
	stb      r0, 0x85(r30)
	stb      r0, 0x86(r30)
	stb      r0, 0x87(r30)
	lwz      r5, 0x20(r31)
	lfs      f1, 0x10(r5)
	bl       "drawSphere__8GraphicsFR10Vector3<f>f"
	li       r5, 0xff
	li       r0, 0x37
	stb      r5, 0x84(r30)
	mr       r3, r30
	addi     r4, r1, 8
	stb      r0, 0x85(r30)
	stb      r0, 0x86(r30)
	stb      r5, 0x87(r30)
	lwz      r5, 0x20(r31)
	lfs      f1, 0x14(r5)
	lfs      f0, 0x10(r5)
	fmuls    f1, f0, f1
	bl       "drawSphere__8GraphicsFR10Vector3<f>f"
	lwz      r31, 4(r31)

lbl_80123DC8:
	cmplwi   r31, 0
	bne      lbl_80123D38
	lwz      r3, 0x40(r29)
	b        lbl_80123DDC

lbl_80123DD8:
	lwz      r3, 4(r3)

lbl_80123DDC:
	cmplwi   r3, 0
	bne      lbl_80123DD8
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123E00
 * Size:	0000DC
 */
void Farm::Farm::initAllObjectNodes()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0x40(r3)
	b        lbl_80123E54

lbl_80123E24:
	lwz      r30, 4(r31)
	mr       r3, r31
	bl       del__5CNodeFv
	cmplwi   r31, 0
	beq      lbl_80123E50
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80123E50:
	mr       r31, r30

lbl_80123E54:
	cmplwi   r31, 0
	bne      lbl_80123E24
	lwz      r30, 0x58(r29)
	b        lbl_80123E94

lbl_80123E64:
	lwz      r31, 4(r30)
	mr       r3, r30
	bl       del__5CNodeFv
	cmplwi   r30, 0
	beq      lbl_80123E90
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80123E90:
	mr       r30, r31

lbl_80123E94:
	cmplwi   r30, 0
	bne      lbl_80123E64
	li       r0, 0
	stw      r0, 0x40(r29)
	stw      r0, 0x3c(r29)
	stw      r0, 0x38(r29)
	stw      r0, 0x34(r29)
	stw      r0, 0x58(r29)
	stw      r0, 0x54(r29)
	stw      r0, 0x50(r29)
	stw      r0, 0x4c(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123EDC
 * Size:	000060
 */
Farm::Plant::~Plant()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80123F20
	lis      r5, __vt__Q34Game4Farm5Plant@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game4Farm5Plant@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80123F20
	mr       r3, r30
	bl       __dl__FPv

lbl_80123F20:
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
 * Address:	80123F3C
 * Size:	000060
 */
Farm::Obstacle::~Obstacle()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80123F80
	lis      r5, __vt__Q34Game4Farm8Obstacle@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game4Farm8Obstacle@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80123F80
	mr       r3, r30
	bl       __dl__FPv

lbl_80123F80:
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
 * Address:	80123F9C
 * Size:	00007C
 */
Farm::Farm::~Farm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80123FFC
	lis      r4, __vt__Q34Game4Farm4Farm@ha
	addi     r3, r30, 0x48
	addi     r0, r4, __vt__Q34Game4Farm4Farm@l
	li       r4, -1
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	addi     r3, r30, 0x30
	li       r4, -1
	bl       __dt__5CNodeFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80123FFC
	mr       r3, r30
	bl       __dl__FPv

lbl_80123FFC:
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
