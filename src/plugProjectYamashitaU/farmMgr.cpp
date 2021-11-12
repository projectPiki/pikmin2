#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_farmMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047B718
    lbl_8047B718:
        .4byte 0x945F8D6B
        .4byte 0x837D836C
        .4byte 0x815B8357
        .4byte 0x83830000
    .global lbl_8047B728
    lbl_8047B728:
        .4byte 0x945F8D6B
        .4byte 0x837C8343
        .4byte 0x83938367
        .4byte 0x00000000
    .global lbl_8047B738
    lbl_8047B738:
        .4byte 0x4661726D
        .4byte 0x4D677220
        .4byte 0x5265736F
        .4byte 0x75726365
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804AD9B8
    lbl_804AD9B8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game4Farm7FarmMgr
    __vt__Q34Game4Farm7FarmMgr:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q34Game4Farm7FarmMgrFv
        .4byte doEntry__Q34Game4Farm7FarmMgrFv
        .4byte doSetView__Q34Game4Farm7FarmMgrFi
        .4byte doViewCalc__Q34Game4Farm7FarmMgrFv
        .4byte doSimulation__Q34Game4Farm7FarmMgrFf
        .4byte doDirectDraw__Q34Game4Farm7FarmMgrFR8Graphics
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q34Game4Farm7FarmMgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte doDebugDraw__Q34Game4Farm7FarmMgrFR8Graphics
        .4byte __dt__Q34Game4Farm7FarmMgrFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805158A8
    lbl_805158A8:
        .skip 0x4
    .global lbl_805158AC
    lbl_805158AC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517EA0
    lbl_80517EA0:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80124018
 * Size:	0000C0
 */
Farm::FarmMgr::FarmMgr(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__16GenericObjectMgr@ha
	li       r8, 0
	stw      r0, 0x14(r1)
	addi     r0, r5, __vt__16GenericObjectMgr@l
	lis      r5, lbl_8047B718@ha
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __vt__5CNode@ha
	addi     r7, r5, lbl_8047B718@l
	stw      r0, 0(r31)
	addi     r9, r3, __vt__5CNode@l
	lis      r3, __vt__Q34Game4Farm7FarmMgr@ha
	stw      r9, 4(r31)
	addi     r6, r3, __vt__Q34Game4Farm7FarmMgr@l
	lis      r3, lbl_8047B728@ha
	stw      r8, 0x14(r31)
	addi     r0, r3, lbl_8047B728@l
	addi     r5, r6, 0x38
	addi     r3, r31, 4
	stw      r8, 0x10(r31)
	stw      r8, 0xc(r31)
	stw      r8, 8(r31)
	stw      r7, 0x18(r31)
	stw      r6, 0(r31)
	stw      r5, 4(r31)
	stw      r4, 0x1c(r31)
	addi     r4, r31, 0x20
	stw      r9, 0x20(r31)
	stw      r8, 0x30(r31)
	stw      r8, 0x2c(r31)
	stw      r8, 0x28(r31)
	stw      r8, 0x24(r31)
	stw      r0, 0x34(r31)
	stw      r8, 0x38(r31)
	stb      r8, 0x3c(r31)
	stb      r8, 0x3d(r31)
	bl       add__5CNodeFP5CNode
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x3c(r31)
	stb      r0, 0x3d(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801240D8
 * Size:	00002C
 */
void Farm::FarmMgr::setupSound()
{
	/*
	lwz      r3, 0x30(r3)
	b        lbl_801240F8

lbl_801240E0:
	lwz      r4, 0x40(r3)
	b        lbl_801240EC

lbl_801240E8:
	lwz      r4, 4(r4)

lbl_801240EC:
	cmplwi   r4, 0
	bne      lbl_801240E8
	lwz      r3, 4(r3)

lbl_801240F8:
	cmplwi   r3, 0
	bne      lbl_801240E0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80124104
 * Size:	000124
 */
void Farm::FarmMgr::doAnimation()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stmw     r26, 8(r1)
	mr       r26, r3
	li       r30, 0
	lwz      r0, 0x30(r3)
	cmplwi   r0, 0
	beq      lbl_801241FC
	lfs      f31, lbl_80517EA0@sda21(r2)
	mr       r29, r0
	b        lbl_801241F4

lbl_8012413C:
	lwz      r28, 0x40(r29)
	b        lbl_801241D8

lbl_80124144:
	lwz      r3, 0x1c(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80124164
	addi     r31, r31, -48

lbl_80124164:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	lwz      r4, 0x20(r28)
	mr       r27, r3
	lfs      f0, 0x14(r4)
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_801241BC
	cmplwi   r27, 0
	beq      lbl_801241BC
	bl       PSMGetNoukouDist__Fv
	mr       r3, r31
	mr       r4, r27
	bl       isNear__Q23PSM8CreatureFPQ24Game8Creaturef
	clrlwi.  r0, r3, 0x18
	beq      lbl_801241BC
	lwz      r3, 0x38(r26)
	cmplwi   r3, 0
	beq      lbl_801241D0
	mr       r4, r30
	bl       directOn__Q23PSM15DirectorUpdatorFUc
	b        lbl_801241D0

lbl_801241BC:
	lwz      r3, 0x38(r26)
	cmplwi   r3, 0
	beq      lbl_801241D0
	mr       r4, r30
	bl       directOff__Q23PSM15DirectorUpdatorFUc

lbl_801241D0:
	lwz      r28, 4(r28)
	addi     r30, r30, 1

lbl_801241D8:
	cmplwi   r28, 0
	bne      lbl_80124144
	mr       r3, r29
	bl       update__Q34Game4Farm4FarmFv
	mr       r3, r29
	bl       doAnimation__Q34Game4Farm4FarmFv
	lwz      r29, 4(r29)

lbl_801241F4:
	cmplwi   r29, 0
	bne      lbl_8012413C

lbl_801241FC:
	lwz      r3, 0x38(r26)
	cmplwi   r3, 0
	beq      lbl_8012420C
	bl       frameEndWork__Q23PSM15DirectorUpdatorFv

lbl_8012420C:
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	lmw      r26, 8(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80124228
 * Size:	000008
 */
u32 Creature::getJAIObject() { return 0x0; }

/*
 * --INFO--
 * Address:	80124230
 * Size:	000068
 */
void Farm::FarmMgr::doEntry()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 9
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setDrawBuffer__Q24Game10GameSystemFi
	lwz      r0, 0x30(r31)
	cmplwi   r0, 0
	beq      lbl_80124278
	mr       r31, r0
	b        lbl_80124270

lbl_80124264:
	mr       r3, r31
	bl       doEntry__Q34Game4Farm4FarmFv
	lwz      r31, 4(r31)

lbl_80124270:
	cmplwi   r31, 0
	bne      lbl_80124264

lbl_80124278:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	bl       setDrawBuffer__Q24Game10GameSystemFi
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80124298
 * Size:	00005C
 */
void Farm::FarmMgr::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r0, 0x30(r3)
	cmplwi   r0, 0
	beq      lbl_801242DC
	mr       r30, r0
	mr       r31, r4
	b        lbl_801242D4

lbl_801242C4:
	mr       r3, r30
	mr       r4, r31
	bl       doSetView__Q34Game4Farm4FarmFUl
	lwz      r30, 4(r30)

lbl_801242D4:
	cmplwi   r30, 0
	bne      lbl_801242C4

lbl_801242DC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801242F4
 * Size:	00004C
 */
void Farm::FarmMgr::doViewCalc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r0, 0x30(r3)
	cmplwi   r0, 0
	beq      lbl_8012432C
	mr       r31, r0
	b        lbl_80124324

lbl_80124318:
	mr       r3, r31
	bl       doViewCalc__Q34Game4Farm4FarmFv
	lwz      r31, 4(r31)

lbl_80124324:
	cmplwi   r31, 0
	bne      lbl_80124318

lbl_8012432C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80124340
 * Size:	000004
 */
void Farm::FarmMgr::doSimulation(float) { }

/*
 * --INFO--
 * Address:	80124344
 * Size:	000004
 */
void Farm::FarmMgr::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80124348
 * Size:	000050
 */
void Farm::FarmMgr::doDebugDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, 0x30(r3)
	b        lbl_80124378

lbl_80124368:
	mr       r3, r31
	mr       r4, r30
	bl       doDebugDraw__Q34Game4Farm4FarmFR8Graphics
	lwz      r31, 4(r31)

lbl_80124378:
	cmplwi   r31, 0
	bne      lbl_80124368
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80124398
 * Size:	000068
 */
void Farm::FarmMgr::addFarmBmd(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_8047B738@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, lbl_8047B738@l
	li       r5, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r30
	mr       r4, r31
	bl       createNewFarm__Q34Game4Farm7FarmMgrFPv
	lis      r4, lbl_8047B738@ha
	lwz      r3, sys@sda21(r13)
	addi     r4, r4, lbl_8047B738@l
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80124400
 * Size:	000074
 */
void Farm::FarmMgr::createNewFarm(void*)
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
	li       r3, 0x60
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80124438
	bl       __ct__Q34Game4Farm4FarmFv
	mr       r31, r3

lbl_80124438:
	lwz      r4, 0x1c(r29)
	mr       r3, r31
	mr       r5, r30
	bl       loadResource__Q34Game4Farm4FarmFUlPv
	mr       r4, r31
	addi     r3, r29, 0x20
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
 * Address:	80124474
 * Size:	000120
 */
void Farm::FarmMgr::addObstacle(Game::Creature*, float, float)
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
	lwz      r12, 0(r4)
	mr       r30, r3
	fmr      f30, f1
	mr       r31, r4
	lwz      r12, 8(r12)
	fmr      f31, f2
	addi     r3, r1, 8
	mtctr    r12
	bctrl
	lwz      r5, 0x30(r30)
	lis      r3, __float_max@ha
	addi     r4, r3, __float_max@l
	lfs      f5, 8(r1)
	cmplwi   r5, 0
	lfs      f6, 0xc(r1)
	lfs      f7, 0x10(r1)
	li       r3, 0
	lfs      f3, 0(r4)
	beq      lbl_8012454C
	lfs      f0, lbl_80517EA0@sda21(r2)
	b        lbl_80124544

lbl_801244EC:
	lfs      f1, 0x1c(r5)
	lfs      f2, 0x18(r5)
	fsubs    f4, f1, f6
	lfs      f1, 0x20(r5)
	fsubs    f2, f2, f5
	fsubs    f1, f1, f7
	fmuls    f4, f4, f4
	fmuls    f8, f1, f1
	fmadds   f1, f2, f2, f4
	fadds    f1, f8, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8012452C
	ble      lbl_80124530
	frsqrte  f2, f1
	fmuls    f1, f2, f1
	b        lbl_80124530

lbl_8012452C:
	fmr      f1, f0

lbl_80124530:
	fcmpo    cr0, f1, f3
	bge      lbl_80124540
	mr       r3, r5
	fmr      f3, f1

lbl_80124540:
	lwz      r5, 4(r5)

lbl_80124544:
	cmplwi   r5, 0
	bne      lbl_801244EC

lbl_8012454C:
	cmplwi   r3, 0
	beq      lbl_80124568
	fmr      f1, f30
	mr       r4, r31
	fmr      f2, f31
	bl       addObstacle__Q34Game4Farm4FarmFPQ24Game8Creatureff
	b        lbl_8012456C

lbl_80124568:
	li       r3, 0

lbl_8012456C:
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
 * Address:	80124594
 * Size:	0000F0
 */
void Farm::FarmMgr::addPlant(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x30(r30)
	lis      r3, __float_max@ha
	addi     r4, r3, __float_max@l
	lfs      f5, 8(r1)
	cmplwi   r5, 0
	lfs      f6, 0xc(r1)
	lfs      f7, 0x10(r1)
	li       r3, 0
	lfs      f3, 0(r4)
	beq      lbl_80124654
	lfs      f0, lbl_80517EA0@sda21(r2)
	b        lbl_8012464C

lbl_801245F4:
	lfs      f1, 0x1c(r5)
	lfs      f2, 0x18(r5)
	fsubs    f4, f1, f6
	lfs      f1, 0x20(r5)
	fsubs    f2, f2, f5
	fsubs    f1, f1, f7
	fmuls    f4, f4, f4
	fmuls    f8, f1, f1
	fmadds   f1, f2, f2, f4
	fadds    f1, f8, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80124634
	ble      lbl_80124638
	frsqrte  f2, f1
	fmuls    f1, f2, f1
	b        lbl_80124638

lbl_80124634:
	fmr      f1, f0

lbl_80124638:
	fcmpo    cr0, f1, f3
	bge      lbl_80124648
	mr       r3, r5
	fmr      f3, f1

lbl_80124648:
	lwz      r5, 4(r5)

lbl_8012464C:
	cmplwi   r5, 0
	bne      lbl_801245F4

lbl_80124654:
	cmplwi   r3, 0
	beq      lbl_80124668
	mr       r4, r31
	bl       addPlant__Q34Game4Farm4FarmFPQ24Game8Creature
	b        lbl_8012466C

lbl_80124668:
	li       r3, 0

lbl_8012466C:
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
 * Address:	80124684
 * Size:	00004C
 */
void Farm::FarmMgr::initAllFarmObjectNodes()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r0, 0x30(r3)
	cmplwi   r0, 0
	beq      lbl_801246BC
	mr       r31, r0
	b        lbl_801246B4

lbl_801246A8:
	mr       r3, r31
	bl       initAllObjectNodes__Q34Game4Farm4FarmFv
	lwz      r31, 4(r31)

lbl_801246B4:
	cmplwi   r31, 0
	bne      lbl_801246A8

lbl_801246BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801246D0
 * Size:	000078
 */
Farm::FarmMgr::~FarmMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8012472C
	lis      r4, __vt__Q34Game4Farm7FarmMgr@ha
	addi     r3, r30, 0x20
	addi     r5, r4, __vt__Q34Game4Farm7FarmMgr@l
	li       r4, -1
	stw      r5, 0(r30)
	addi     r0, r5, 0x38
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv
	addi     r3, r30, 4
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8012472C
	mr       r3, r30
	bl       __dl__FPv

lbl_8012472C:
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

/*
 * --INFO--
 * Address:	80124748
 * Size:	000028
 */
void __sinit_farmMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804AD9B8@ha
	stw      r0, lbl_805158A8@sda21(r13)
	stfsu    f0, lbl_804AD9B8@l(r3)
	stfs     f0, lbl_805158AC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80124770
 * Size:	000008
 */
Farm::FarmMgr::@4 @~FarmMgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game4Farm7FarmMgrFv
	*/
}
} // namespace Game
