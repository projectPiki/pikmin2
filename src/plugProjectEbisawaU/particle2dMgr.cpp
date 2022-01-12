#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_particle2dMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80495A70
    lbl_80495A70:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x70617274
        .4byte 0x69636C65
        .4byte 0x32644D67
        .4byte 0x72000000
    .global lbl_80495A8C
    lbl_80495A8C:
        .4byte 0x54506172
        .4byte 0x7469636C
        .4byte 0x6532644D
        .4byte 0x67720000
        .4byte 0x54506172
        .4byte 0x7469636C
        .4byte 0x6532644D
        .4byte 0x67723A3A
        .4byte 0x63726561
        .4byte 0x74654865
        .4byte 0x61700000
    .global lbl_80495AB8
    lbl_80495AB8:
        .4byte 0x70617274
        .4byte 0x69636C65
        .4byte 0x32644D67
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_80495ACC
    lbl_80495ACC:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x65666665
        .4byte 0x63742068
        .4byte 0x65617020
        .4byte 0x6E6F7420
        .4byte 0x616C6C6F
        .4byte 0x63617465
        .4byte 0x6420210A
        .4byte 0x00000000
        .4byte 0x54506172
        .4byte 0x7469636C
        .4byte 0x6532644D
        .4byte 0x67723A3A
        .4byte 0x63726561
        .4byte 0x74654D67
        .4byte 0x72000000
        .4byte 0x50617274
        .4byte 0x69636C65
        .4byte 0x5265736F
        .4byte 0x75726365
        .4byte 0x20282573
        .4byte 0x29206E6F
        .4byte 0x7420666F
        .4byte 0x756E640A
        .4byte 0x00000000
        .4byte 0x4950325F
        .4byte 0x64756D6D
        .4byte 0x79000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E7368
    lbl_804E7368:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__14TParticle2dMgr
    __vt__14TParticle2dMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__14TParticle2dMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__14TParticle2dMgrFv"

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516080
    lbl_80516080:
        .skip 0x4
    .global lbl_80516084
    lbl_80516084:
        .skip 0x4
    .global particle2dMgr
    particle2dMgr:
        .skip 0x4
    .global _instance__14TParticle2dMgr
    _instance__14TParticle2dMgr:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F6C0
    lbl_8051F6C0:
        .4byte 0x00000000
    .global lbl_8051F6C4
    lbl_8051F6C4:
        .float 0.5
    .global lbl_8051F6C8
    lbl_8051F6C8:
        .4byte 0xBF000000
        .4byte 0x00000000
    .global lbl_8051F6D0
    lbl_8051F6D0:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	803B9064
 * Size:	000084
 */
TParticle2dMgr::~TParticle2dMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803B90CC
	lis      r3, __vt__14TParticle2dMgr@ha
	li       r0, 0
	addi     r4, r3, __vt__14TParticle2dMgr@l
	addi     r3, r30, 0x18
	stw      r4, 0(r30)
	addi     r5, r4, 0x10
	li       r4, 0
	stw      r5, 0x18(r30)
	stw      r0, _instance__14TParticle2dMgr@sda21(r13)
	stw      r0, particle2dMgr@sda21(r13)
	bl       __dt__11JKRDisposerFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_803B90CC
	mr       r3, r30
	bl       __dl__FPv

lbl_803B90CC:
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
 * Address:	803B90E8
 * Size:	000024
 */
void TParticle2dMgr::globalInstance()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       Instance__14TParticle2dMgrFv
	stw      r3, particle2dMgr@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B910C
 * Size:	000048
 */
void TParticle2dMgr::Instance()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, _instance__14TParticle2dMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803B9140
	li       r3, 0x44
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803B913C
	bl       __ct__14TParticle2dMgrFv
	mr       r0, r3

lbl_803B913C:
	stw      r0, _instance__14TParticle2dMgr@sda21(r13)

lbl_803B9140:
	lwz      r0, 0x14(r1)
	lwz      r3, _instance__14TParticle2dMgr@sda21(r13)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9154
 * Size:	000050
 */
void TParticle2dMgr::deleteInstance()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, _instance__14TParticle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803B918C
	beq      lbl_803B9184
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_803B9184:
	li       r0, 0
	stw      r0, _instance__14TParticle2dMgr@sda21(r13)

lbl_803B918C:
	li       r0, 0
	stw      r0, particle2dMgr@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B91A4
 * Size:	000088
 */
TParticle2dMgr::TParticle2dMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__5CNode@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__5CNode@l
	li       r4, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_80495A8C@ha
	stw      r0, 0(r31)
	addi     r0, r3, lbl_80495A8C@l
	addi     r3, r31, 0x18
	stw      r4, 0x10(r31)
	stw      r4, 0xc(r31)
	stw      r4, 8(r31)
	stw      r4, 4(r31)
	stw      r0, 0x14(r31)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__14TParticle2dMgr@ha
	li       r0, 0
	addi     r4, r3, __vt__14TParticle2dMgr@l
	mr       r3, r31
	stw      r4, 0(r31)
	addi     r4, r4, 0x10
	stw      r4, 0x18(r31)
	stw      r0, 0x38(r31)
	stw      r0, 0x30(r31)
	stw      r0, 0x34(r31)
	stw      r0, 0x3c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B922C
 * Size:	000094
 */
void TParticle2dMgr::createHeap(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_80495A70@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_80495A70@l
	li       r5, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	addi     r4, r31, 0x2c
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r0, 0x38(r29)
	cmplwi   r0, 0
	beq      lbl_803B9284
	addi     r3, r31, 0x48
	addi     r5, r31, 0x5c
	li       r4, 0x49
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B9284:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	mr       r3, r30
	li       r5, 1
	bl       create__12JKRSolidHeapFUlP7JKRHeapb
	stw      r3, 0x38(r29)
	addi     r4, r31, 0x2c
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x24(r1)
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
 * Address:	803B92C0
 * Size:	000154
 */
void TParticle2dMgr::createMgr(char*, unsigned long, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r31, r3
	  lis       r3, 0x8049
	  mr        r25, r4
	  mr        r26, r5
	  mr        r27, r6
	  addi      r30, r3, 0x5A70
	  lwz       r0, 0x38(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x48
	  addi      r3, r30, 0x48
	  addi      r5, r30, 0x68
	  li        r4, 0x53
	  crclr     6, 0x6
	  bl        -0x38ECC4

	.loc_0x48:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x88
	  li        r5, 0
	  bl        0x6A048
	  lwz       r29, -0x77D4(r13)
	  lwz       r3, 0x38(r31)
	  bl        -0x395D7C
	  li        r0, 0
	  mr        r3, r25
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x1
	  li        r9, 0
	  li        r10, 0
	  bl        -0x39A1C4
	  mr.       r28, r3
	  bne-      .loc_0xB0
	  mr        r6, r25
	  addi      r3, r30, 0x48
	  addi      r5, r30, 0xA4
	  li        r4, 0x5E
	  crclr     6, 0x6
	  bl        -0x38ED2C

	.loc_0xB0:
	  mr        r3, r29
	  bl        -0x395DD0
	  lwz       r4, 0x38(r31)
	  li        r3, 0x14
	  li        r5, 0
	  bl        -0x395444
	  mr.       r0, r3
	  beq-      .loc_0xE0
	  lwz       r5, 0x38(r31)
	  mr        r4, r28
	  bl        -0x320EC8
	  mr        r0, r3

	.loc_0xE0:
	  stw       r0, 0x34(r31)
	  li        r3, 0x30
	  li        r5, 0
	  lwz       r4, 0x38(r31)
	  bl        -0x395470
	  mr.       r0, r3
	  beq-      .loc_0x118
	  lwz       r6, 0x38(r31)
	  mr        r4, r26
	  mr        r5, r27
	  li        r7, 0x8
	  li        r8, 0x2
	  bl        -0x328E98
	  mr        r0, r3

	.loc_0x118:
	  stw       r0, 0x30(r31)
	  li        r5, 0
	  lwz       r3, 0x30(r31)
	  lwz       r4, 0x34(r31)
	  bl        -0x32867C
	  lwz       r3, 0x38(r31)
	  bl        -0x3944A8
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x88
	  bl        0x69F68
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TParticle2dMgr::exitMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TParticle2dMgr::destroyHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B9414
 * Size:	0000AC
 */
void TParticle2dMgr::setSceneEmitterAndResourceManager(JPAEmitterManager*, JPAResourceManager*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x3C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x5AB8
	  li        r4, 0x84
	  addi      r5, r5, 0x5ACC
	  crclr     6, 0x6
	  bl        -0x38EE1C

	.loc_0x4C:
	  lwz       r0, 0x30(r29)
	  li        r4, 0
	  stw       r0, 0x3C(r29)
	  stw       r30, 0x30(r29)
	  lwz       r3, 0x30(r29)
	  bl        -0x3286F8
	  lwz       r3, 0x30(r29)
	  li        r5, 0
	  lwz       r4, 0x34(r29)
	  bl        -0x328718
	  lwz       r3, 0x30(r29)
	  li        r4, 0x1
	  bl        -0x328714
	  lwz       r3, 0x30(r29)
	  mr        r4, r31
	  li        r5, 0x1
	  bl        -0x328734
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B94C0
 * Size:	000078
 */
void TParticle2dMgr::clearSceneEmitterAndResourceManager()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x30(r3)
	bl       clearResourceManager__17JPAEmitterManagerFUc
	lwz      r3, 0x30(r31)
	li       r4, 0
	bl       clearResourceManager__17JPAEmitterManagerFUc
	lwz      r0, 0x3c(r31)
	cmplwi   r0, 0
	bne      lbl_803B9514
	lis      r3, lbl_80495AB8@ha
	lis      r5, lbl_80495ACC@ha
	addi     r3, r3, lbl_80495AB8@l
	li       r4, 0x95
	addi     r5, r5, lbl_80495ACC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B9514:
	lwz      r3, 0x3c(r31)
	li       r0, 0
	stw      r3, 0x30(r31)
	stw      r0, 0x3c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9538
 * Size:	000050
 */
void TParticle2dMgr::setSceneResourceManager(JPAResourceManager*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 1
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x30(r3)
	bl       clearResourceManager__17JPAEmitterManagerFUc
	lwz      r3, 0x30(r30)
	mr       r4, r31
	li       r5, 1
	bl       entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc
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
 * Address:	803B9588
 * Size:	000028
 */
void TParticle2dMgr::clearSceneResourceManager()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	lwz      r3, 0x30(r3)
	bl       clearResourceManager__17JPAEmitterManagerFUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B95B0
 * Size:	000024
 */
void TParticle2dMgr::update()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x30(r3)
	bl       calc__17JPAEmitterManagerFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B95D4
 * Size:	000148
 */
void TParticle2dMgr::draw(unsigned char, unsigned short)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stmw     r27, 0x10c(r1)
	clrlwi   r0, r5, 0x10
	mr       r27, r3
	cmplwi   r0, 1
	mr       r28, r4
	bne      lbl_803B9680
	addi     r3, r1, 8
	bl       PSMTXIdentity
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 4(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	addi     r3, r1, 8
	addi     r4, r1, 0x98
	bl       PSMTXCopy
	lis      r0, 0x4330
	lfs      f5, lbl_8051F6C4@sda21(r2)
	stw      r30, 0xfc(r1)
	addi     r3, r1, 0xc8
	lfs      f1, lbl_8051F6C0@sda21(r2)
	fmr      f6, f5
	stw      r0, 0xf8(r1)
	fmr      f7, f5
	lfd      f4, lbl_8051F6D0@sda21(r2)
	fmr      f3, f1
	lfd      f0, 0xf8(r1)
	stw      r31, 0x104(r1)
	fmr      f8, f5
	fsubs    f2, f0, f4
	stw      r0, 0x100(r1)
	lfd      f0, 0x100(r1)
	fsubs    f4, f0, f4
	bl       C_MTXLightOrtho
	lwz      r3, 0x30(r27)
	addi     r4, r1, 0x98
	clrlwi   r5, r28, 0x18
	bl       draw__17JPAEmitterManagerFPC11JPADrawInfoUc
	b        lbl_803B9700

lbl_803B9680:
	lwz      r3, sys@sda21(r13)
	lwz      r31, 0x24(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r29, 4(r3)
	addi     r3, r31, 0x210
	lfs      f31, 0x24c(r31)
	addi     r4, r1, 0x38
	bl       PSMTXCopy
	lis      r0, 0x4330
	lfs      f3, lbl_8051F6C4@sda21(r2)
	stw      r29, 0x104(r1)
	fmr      f1, f31
	lfd      f7, lbl_8051F6D0@sda21(r2)
	fmr      f5, f3
	stw      r0, 0x100(r1)
	fmr      f6, f3
	lfs      f4, lbl_8051F6C8@sda21(r2)
	lfd      f0, 0x100(r1)
	addi     r3, r1, 0x68
	stw      r30, 0xfc(r1)
	fsubs    f2, f0, f7
	stw      r0, 0xf8(r1)
	lfd      f0, 0xf8(r1)
	fsubs    f0, f0, f7
	fdivs    f2, f2, f0
	bl       C_MTXLightPerspective
	lwz      r3, 0x30(r27)
	addi     r4, r1, 0x38
	clrlwi   r5, r28, 0x18
	bl       draw__17JPAEmitterManagerFPC11JPADrawInfoUc

lbl_803B9700:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	lmw      r27, 0x10c(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TParticle2dMgr::setXfb(const ResTIMG*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B971C
 * Size:	00004C
 */
void TParticle2dMgr::create(unsigned short, Vector2<float>&, unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, 0x1360(r2)
	  li        r8, 0
	  stw       r0, 0x24(r1)
	  li        r9, 0
	  lfs       f2, 0x4(r5)
	  lfs       f1, 0x0(r5)
	  mr        r5, r4
	  addi      r4, r1, 0x8
	  stfs      f1, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0x30(r3)
	  bl        -0x328E98
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B9768
 * Size:	00002C
 */
void TParticle2dMgr::kill(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	beq      lbl_803B9784
	lwz      r3, 0x30(r3)
	bl       forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter

lbl_803B9784:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9794
 * Size:	000020
 */
void TParticle2dMgr::fade(JPABaseEmitter*)
{
	/*
	cmplwi   r4, 0
	beqlr
	lwz      r3, 0xf4(r4)
	li       r0, 1
	ori      r3, r3, 1
	stw      r3, 0xf4(r4)
	stw      r0, 0x24(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B97B4
 * Size:	000024
 */
void TParticle2dMgr::killAll()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x30(r3)
	bl       forceDeleteAllEmitter__17JPAEmitterManagerFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B97D8
 * Size:	000028
 */
void TParticle2dMgr::killGroup(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	clrlwi   r4, r4, 0x18
	stw      r0, 0x14(r1)
	lwz      r3, 0x30(r3)
	bl       forceDeleteGroupEmitter__17JPAEmitterManagerFUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TParticle2dMgr::showInfo(long, long, long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B9800
 * Size:	000028
 */
void __sinit_particle2dMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804E7368@ha
	stw      r0, lbl_80516080@sda21(r13)
	stfsu    f0, lbl_804E7368@l(r3)
	stfs     f0, lbl_80516084@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9828
 * Size:	000008
 */
void TParticle2dMgr::@24 @__dt()
{
	/*
	addi     r3, r3, -24
	b        __dt__14TParticle2dMgrFv
	*/
}
