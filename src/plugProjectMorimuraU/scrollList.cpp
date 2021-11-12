#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80495210
    lbl_80495210:
        .4byte 0x7363726F
        .4byte 0x6C6C4C69
        .4byte 0x73742E63
        .4byte 0x70700000
    .global lbl_80495220
    lbl_80495220:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28Morimura11TScrollList
    __vt__Q28Morimura11TScrollList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura11TScrollListFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Morimura11TScrollListFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q26Screen7ObjBaseFP10JKRArchive
        .4byte doUpdateFadein__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdate__Q26Screen7ObjBaseFv
        .4byte doUpdateFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q26Screen7ObjBaseFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte 0
        .4byte isListShow__Q28Morimura11TScrollListFi
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte getUpdateIndex__Q28Morimura11TScrollListFRib
        .4byte setShortenIndex__Q28Morimura11TScrollListFiib
        .4byte doUpdateIn__Q28Morimura11TScrollListFv
        .4byte doUpdateOut__Q28Morimura11TScrollListFv
        .4byte changeTextTevBlock__Q28Morimura11TScrollListFi
        .4byte updateIndex__Q28Morimura11TScrollListFb
        .4byte setPaneCharacter__Q28Morimura11TScrollListFi
    .global __vt__Q28Morimura11TListScreen
    __vt__Q28Morimura11TListScreen:
        .4byte 0
        .4byte 0
        .4byte create__Q28Morimura11TListScreenFPCcUl
        .4byte update__Q28Morimura11TScreenBaseFv
        .4byte draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global mWideWindow__Q28Morimura11TScrollList
    mWideWindow__Q28Morimura11TScrollList:
        .byte 0x01
        .byte 0x00
        .byte 0x00
        .byte 0x00

    .section .sbss # 0x80514D80 - 0x80516360
    .global mRightOffset__Q28Morimura11TScrollList
    mRightOffset__Q28Morimura11TScrollList:
        .skip 0x4
    .global mForceResetParm__Q28Morimura11TScrollList
    mForceResetParm__Q28Morimura11TScrollList:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F2F8
    lbl_8051F2F8:
        .4byte 0x00000000
    .global lbl_8051F2FC
    lbl_8051F2FC:
        .4byte 0x41000000
    .global lbl_8051F300
    lbl_8051F300:
        .4byte 0x3F666666
    .global lbl_8051F304
    lbl_8051F304:
        .4byte 0x3F8CCCCD
    .global lbl_8051F308
    lbl_8051F308:
        .4byte 0x3FC00000
    .global lbl_8051F30C
    lbl_8051F30C:
        .4byte 0x40000000
    .global lbl_8051F310
    lbl_8051F310:
        .float 1.0
    .global lbl_8051F314
    lbl_8051F314:
        .4byte 0xBF800000
    .global lbl_8051F318
    lbl_8051F318:
        .float 0.7
    .global lbl_8051F31C
    lbl_8051F31C:
        .4byte 0xC1A00000
    .global lbl_8051F320
    lbl_8051F320:
        .4byte 0x41A00000
    .global lbl_8051F324
    lbl_8051F324:
        .4byte 0x3C23D70A
    .global lbl_8051F328
    lbl_8051F328:
        .4byte 0x41580000
    .global lbl_8051F32C
    lbl_8051F32C:
        .4byte 0x40400000
    .global lbl_8051F330
    lbl_8051F330:
        .4byte 0x3F2AAAAB
    .global lbl_8051F334
    lbl_8051F334:
        .4byte 0xC1F40000
    .global lbl_8051F338
    lbl_8051F338:
        .4byte 0xC1E00000
    .global lbl_8051F33C
    lbl_8051F33C:
        .4byte 0x3E4CCCCD
    .global lbl_8051F340
    lbl_8051F340:
        .4byte 0x41F00000
    .global lbl_8051F344
    lbl_8051F344:
        .4byte 0x3F19999A
    .global lbl_8051F348
    lbl_8051F348:
        .4byte 0x3FF40000
        .4byte 0x00000000
    .global lbl_8051F350
    lbl_8051F350:
        .float 0.5
    .global lbl_8051F354
    lbl_8051F354:
        .4byte 0xBF000000
*/

/*
 * --INFO--
 * Address:	803A2154
 * Size:	00004C
 */
Morimura::TIndexGroup::TIndexGroup(void)
{
	/*
	lfs      f5, lbl_8051F2F8@sda21(r2)
	li       r0, 0
	lfs      f4, lbl_8051F2FC@sda21(r2)
	stfs     f5, 0x14(r3)
	lfs      f3, lbl_8051F300@sda21(r2)
	stfs     f5, 0x18(r3)
	lfs      f2, lbl_8051F304@sda21(r2)
	stfs     f5, 0x1c(r3)
	lfs      f1, lbl_8051F308@sda21(r2)
	stw      r0, 0x20(r3)
	lfs      f0, lbl_8051F30C@sda21(r2)
	stb      r0, 0x24(r3)
	stfs     f5, 0x28(r3)
	stfs     f4, 0(r3)
	stfs     f3, 4(r3)
	stfs     f2, 8(r3)
	stfs     f1, 0xc(r3)
	stfs     f0, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A21A0
 * Size:	00006C
 */
void Morimura::TIndexGroup::upIndex(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r0, 0x20(r3)
	cmpwi    r0, 0
	bne      lbl_803A21F0
	lfs      f1, 0x28(r3)
	lfs      f0, lbl_8051F2F8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803A21DC
	lfs      f0, 0x10(r3)
	stfs     f0, 0x1c(r3)

lbl_803A21DC:
	lfs      f0, lbl_8051F310@sda21(r2)
	li       r0, 2
	li       r31, 1
	stfs     f0, 0x28(r3)
	stw      r0, 0x20(r3)

lbl_803A21F0:
	bl       rollSpUp__Q28Morimura11TIndexGroupFv
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
 * Address:	803A220C
 * Size:	00006C
 */
void Morimura::TIndexGroup::downIndex(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r0, 0x20(r3)
	cmpwi    r0, 0
	bne      lbl_803A225C
	lfs      f1, 0x28(r3)
	lfs      f0, lbl_8051F2F8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803A2248
	lfs      f0, 0x10(r3)
	stfs     f0, 0x1c(r3)

lbl_803A2248:
	lfs      f0, lbl_8051F314@sda21(r2)
	li       r0, 1
	li       r31, 1
	stfs     f0, 0x28(r3)
	stw      r0, 0x20(r3)

lbl_803A225C:
	bl       rollSpUp__Q28Morimura11TIndexGroupFv
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
 * Address:	........
 * Size:	000064
 */
void Morimura::TIndexGroup::speedUpdate(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void Morimura::TIndexGroup::offsetUpdate(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803A2278
 * Size:	000030
 */
void Morimura::TIndexGroup::rollSpUp(void)
{
	/*
	lfs      f1, 0x1c(r3)
	li       r0, 1
	lfs      f0, 8(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x1c(r3)
	stb      r0, 0x24(r3)
	lfs      f0, 0x1c(r3)
	lfs      f1, 0(r3)
	fcmpo    cr0, f0, f1
	blelr
	stfs     f1, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A22A8
 * Size:	00009C
 */
void Morimura::TIndexPane::update(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_803A2320
	lfs      f1, lbl_8051F2F8@sda21(r2)
	lfs      f0, 0x18(r29)
	lfs      f31, lbl_8051F310@sda21(r2)
	fcmpu    cr0, f1, f0
	beq      lbl_803A22F0
	lfs      f31, lbl_8051F30C@sda21(r2)

lbl_803A22F0:
	li       r30, 0
	li       r31, 0
	b        lbl_803A2314

lbl_803A22FC:
	lwz      r3, 0x20(r29)
	fmr      f1, f31
	lwzx     r3, r3, r31
	bl       update__Q28Morimura9TIconInfoFf
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_803A2314:
	lwz      r0, 0x10(r29)
	cmpw     r30, r0
	blt      lbl_803A22FC

lbl_803A2320:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A2344
 * Size:	000094
 */
void Morimura::TIndexPane::createIconInfo(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	stw      r29, 0x10(r3)
	slwi     r3, r4, 2
	stw      r5, 0x14(r28)
	bl       __nwa__FUl
	stw      r3, 0x20(r28)
	li       r30, 0
	li       r31, 0
	b        lbl_803A23B0

lbl_803A2388:
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803A23A0
	bl       __ct__Q28Morimura9TIconInfoFv
	mr       r0, r3

lbl_803A23A0:
	lwz      r3, 0x20(r28)
	addi     r30, r30, 1
	stwx     r0, r3, r31
	addi     r31, r31, 4

lbl_803A23B0:
	cmpw     r30, r29
	blt      lbl_803A2388
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
 * Address:	803A23D8
 * Size:	0001E4
 */
void Morimura::TIndexPane::setIndex(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r29, r4
	mr       r28, r3
	stw      r29, 0(r3)
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_803A25A8
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	beq      lbl_803A25A8
	li       r30, 0
	li       r31, 0
	b        lbl_803A24EC

lbl_803A2418:
	lwz      r0, 0xc(r28)
	mr       r4, r30
	cmpwi    r0, 0
	beq      lbl_803A242C
	li       r4, 0

lbl_803A242C:
	cmpwi    r0, 1
	beq      lbl_803A2444
	lwz      r0, 0x14(r28)
	add      r3, r29, r30
	cmpw     r3, r0
	ble      lbl_803A2478

lbl_803A2444:
	lwz      r3, 0x20(r28)
	li       r4, -1
	li       r5, 0
	lwzx     r3, r3, r31
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	cmpwi    r30, 1
	bne      lbl_803A24E4
	lwz      r3, 0x20(r28)
	lwz      r4, 0(r28)
	lwzx     r3, r3, r31
	addi     r0, r4, 1
	stw      r0, 0x18(r3)
	b        lbl_803A24E4

lbl_803A2478:
	lwz      r3, 0x24(r28)
	add      r27, r29, r4
	mr       r4, r27
	li       r26, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A24D0
	lwz      r3, 0x24(r28)
	mr       r4, r27
	bl       getTexInfo__Q28Morimura10TZukanBaseFi
	or.      r26, r3, r3
	bne      lbl_803A24D0
	lis      r3, lbl_80495210@ha
	lis      r5, lbl_80495220@ha
	addi     r3, r3, lbl_80495210@l
	li       r4, 0xc1
	addi     r5, r5, lbl_80495220@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A24D0:
	lwz      r3, 0x20(r28)
	mr       r4, r27
	mr       r5, r26
	lwzx     r3, r3, r31
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG

lbl_803A24E4:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_803A24EC:
	lwz      r0, 0x10(r28)
	cmpw     r30, r0
	blt      lbl_803A2418
	lwz      r0, 0xc(r28)
	cmpwi    r0, 2
	beq      lbl_803A2564
	bge      lbl_803A2518
	cmpwi    r0, 0
	beq      lbl_803A2524
	bge      lbl_803A2598
	b        lbl_803A25A0

lbl_803A2518:
	cmpwi    r0, 4
	bge      lbl_803A25A0
	b        lbl_803A2530

lbl_803A2524:
	lfs      f0, lbl_8051F2F8@sda21(r2)
	stfs     f0, 0x18(r28)
	b        lbl_803A25A0

lbl_803A2530:
	lwz      r3, 0x20(r28)
	li       r4, -1
	li       r5, 0
	lwz      r3, 0(r3)
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	lwz      r3, 0x20(r28)
	li       r4, -1
	li       r5, 0
	lwz      r3, 8(r3)
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	lfs      f0, lbl_8051F31C@sda21(r2)
	stfs     f0, 0x18(r28)
	b        lbl_803A25A0

lbl_803A2564:
	lwz      r3, 0x20(r28)
	li       r4, -1
	li       r5, 0
	lwz      r3, 0(r3)
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	lwz      r3, 0x20(r28)
	li       r4, -1
	li       r5, 0
	lwz      r3, 8(r3)
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	lfs      f0, lbl_8051F320@sda21(r2)
	stfs     f0, 0x18(r28)
	b        lbl_803A25A0

lbl_803A2598:
	lfs      f0, lbl_8051F324@sda21(r2)
	stfs     f0, 0x18(r28)

lbl_803A25A0:
	mr       r3, r28
	bl       doIconOffsetY__Q28Morimura10TIndexPaneFv

lbl_803A25A8:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A25BC
 * Size:	000058
 */
void Morimura::TIndexPane::getIndex(void)
{
	/*
	lwz      r4, 0x20(r3)
	cmplwi   r4, 0
	beq      lbl_803A260C
	lwz      r0, 0xc(r3)
	cmpwi    r0, 0
	bne      lbl_803A25F4
	lwz      r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
	slwi     r0, r0, 2
	lwzx     r3, r4, r0
	lwz      r3, 0x18(r3)
	addic.   r3, r3, -1
	bgelr
	li       r3, -1
	blr

lbl_803A25F4:
	lwz      r3, 4(r4)
	lwz      r3, 0x18(r3)
	addic.   r3, r3, -1
	bgelr
	li       r3, -1
	blr

lbl_803A260C:
	lwz      r3, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A2614
 * Size:	000008
 */
void Morimura::TIndexPane::getListIndex(void)
{
	/*
	lwz      r3, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A261C
 * Size:	0000F4
 */
void Morimura::TIndexPane::doIconOffsetY(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0x20(r3)
	cmplwi   r4, 0
	beq      lbl_803A26F8
	lwz      r3, 0(r4)
	lwz      r4, 4(r4)
	lwz      r3, 0x10(r3)
	lfs      f2, 0x18(r30)
	lfs      f1, 0xd8(r3)
	lwz      r31, 0x10(r4)
	fadds    f1, f2, f1
	mr       r3, r31
	stfs     f1, 0xd8(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051F310@sda21(r2)
	mr       r3, r31
	stfs     f0, 0xcc(r31)
	stfs     f0, 0xd0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051F2F8@sda21(r2)
	lfs      f0, 0x18(r30)
	fcmpu    cr0, f1, f0
	beq      lbl_803A26C4
	lfs      f0, lbl_8051F30C@sda21(r2)
	mr       r3, r31
	stfs     f0, 0xcc(r31)
	stfs     f0, 0xd0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_803A26C4:
	lwz      r3, 0x20(r30)
	lwz      r3, 4(r3)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_803A26F8
	lfs      f2, 0x18(r30)
	lfs      f1, lbl_8051F328@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_803A26F8:
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
 * Address:	803A2710
 * Size:	000068
 */
Morimura::TIconInfo::TIconInfo(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	li       r3, 0x1c
	stw      r0, 4(r31)
	stw      r0, 8(r31)
	stw      r0, 0xc(r31)
	stw      r0, 0x10(r31)
	stw      r0, 0x14(r31)
	stw      r0, 0x18(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803A275C
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_803A275C:
	stw      r0, 0x14(r31)
	mr       r3, r31
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A2778
 * Size:	0000D0
 */
void Morimura::TIconInfo::init(Morimura::TScaleUpCounter*, J2DPane*, J2DPane*)
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
	mr       r29, r3
	stw      r4, 8(r3)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	bne      lbl_803A27C8
	lis      r3, lbl_80495210@ha
	lis      r5, lbl_80495220@ha
	addi     r3, r3, lbl_80495210@l
	li       r4, 0x146
	addi     r5, r5, lbl_80495220@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A27C8:
	lwz      r3, 8(r29)
	li       r0, 1
	stb      r0, 0xa9(r3)
	stw      r30, 0xc(r29)
	lwz      r0, 0xc(r29)
	cmplwi   r0, 0
	bne      lbl_803A2800
	lis      r3, lbl_80495210@ha
	lis      r5, lbl_80495220@ha
	addi     r3, r3, lbl_80495210@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80495220@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A2800:
	stw      r31, 0x10(r29)
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	bne      lbl_803A282C
	lis      r3, lbl_80495210@ha
	lis      r5, lbl_80495220@ha
	addi     r3, r3, lbl_80495210@l
	li       r4, 0x14d
	addi     r5, r5, lbl_80495220@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A282C:
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
 * Address:	803A2848
 * Size:	000198
 */
void Morimura::TIconInfo::update(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	fmr      f31, f1
	lwz      r3, 0x14(r3)
	cmplwi   r3, 0
	beq      lbl_803A29C4
	bl       calc__Q32og6Screen8ScaleMgrFv
	lbz      r0, mWideWindow__Q28Morimura11TScrollList@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803A29A4
	lfs      f0, lbl_8051F30C@sda21(r2)
	fcmpu    cr0, f0, f31
	bne      lbl_803A2920
	lfs      f2, lbl_8051F32C@sda21(r2)
	fmuls    f0, f31, f1
	lwz      r3, 0x10(r31)
	fmuls    f1, f2, f1
	stfs     f1, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r31)
	lfs      f1, lbl_8051F330@sda21(r2)
	lfs      f0, lbl_8051F310@sda21(r2)
	stfs     f1, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	lfs      f31, 0xd8(r3)
	lwz      r3, 8(r31)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	lfs      f0, lbl_8051F334@sda21(r2)
	stfs     f0, 0xd4(r3)
	stfs     f31, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	lfs      f1, lbl_8051F330@sda21(r2)
	lfs      f2, lbl_8051F310@sda21(r2)
	bl       setScale__Q28Morimura15TScaleUpCounterFff
	b        lbl_803A29C4

lbl_803A2920:
	fmuls    f0, f31, f1
	lwz      r3, 0x10(r31)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r31)
	lfs      f0, lbl_8051F310@sda21(r2)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	lfs      f31, 0xd8(r3)
	lwz      r3, 8(r31)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	lfs      f0, lbl_8051F338@sda21(r2)
	stfs     f0, 0xd4(r3)
	stfs     f31, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051F310@sda21(r2)
	lwz      r3, 8(r31)
	fmr      f2, f1
	bl       setScale__Q28Morimura15TScaleUpCounterFff
	b        lbl_803A29C4

lbl_803A29A4:
	fmuls    f0, f31, f1
	lwz      r3, 0x10(r31)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_803A29C4:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A29E0
 * Size:	0001B4
 */
void Morimura::TIconInfo::setInfo(int, ResTIMG const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_803A2B3C
	addi     r0, r4, 1
	stw      r0, 0x18(r30)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_803A2AAC
	lis      r3, mCategoryArray__Q28Morimura10TItemZukan@ha
	li       r0, 5
	addi     r3, r3, mCategoryArray__Q28Morimura10TItemZukan@l
	li       r5, 0
	mtctr    r0

lbl_803A2A2C:
	lwz      r0, 0(r3)
	cmpw     r4, r0
	bge      lbl_803A2A40
	stw      r5, 0(r30)
	b        lbl_803A2AAC

lbl_803A2A40:
	lwzu     r0, 4(r3)
	addi     r5, r5, 1
	cmpw     r4, r0
	bge      lbl_803A2A58
	stw      r5, 0(r30)
	b        lbl_803A2AAC

lbl_803A2A58:
	lwzu     r0, 4(r3)
	addi     r5, r5, 1
	cmpw     r4, r0
	bge      lbl_803A2A70
	stw      r5, 0(r30)
	b        lbl_803A2AAC

lbl_803A2A70:
	lwzu     r0, 4(r3)
	addi     r5, r5, 1
	cmpw     r4, r0
	bge      lbl_803A2A88
	stw      r5, 0(r30)
	b        lbl_803A2AAC

lbl_803A2A88:
	lwzu     r0, 4(r3)
	addi     r5, r5, 1
	cmpw     r4, r0
	bge      lbl_803A2AA0
	stw      r5, 0(r30)
	b        lbl_803A2AAC

lbl_803A2AA0:
	addi     r3, r3, 4
	addi     r5, r5, 1
	bdnz     lbl_803A2A2C

lbl_803A2AAC:
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_803A2AC0
	li       r0, 1
	stb      r0, 0xb0(r3)

lbl_803A2AC0:
	cmplwi   r31, 0
	beq      lbl_803A2B10
	lwz      r3, 8(r30)
	cmplwi   r3, 0
	beq      lbl_803A2AE4
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_803A2AE4:
	lwz      r3, 0xc(r30)
	mr       r4, r31
	li       r5, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r30)
	li       r0, 1
	stb      r0, 0xb0(r3)
	b        lbl_803A2B7C

lbl_803A2B10:
	lwz      r3, 8(r30)
	cmplwi   r3, 0
	beq      lbl_803A2B2C
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_803A2B2C:
	lwz      r3, 0xc(r30)
	li       r0, 0
	stb      r0, 0xb0(r3)
	b        lbl_803A2B7C

lbl_803A2B3C:
	li       r0, 0
	stw      r0, 0x18(r30)
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_803A2B54
	stb      r0, 0xb0(r3)

lbl_803A2B54:
	lwz      r3, 8(r30)
	cmplwi   r3, 0
	beq      lbl_803A2B70
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_803A2B70:
	lwz      r3, 0xc(r30)
	li       r0, 0
	stb      r0, 0xb0(r3)

lbl_803A2B7C:
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
 * Address:	803A2B94
 * Size:	000040
 */
void Morimura::TIconInfo::startScaleUp(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x14(r3)
	cmplwi   r3, 0
	beq      lbl_803A2BC4
	lfs      f0, lbl_8051F33C@sda21(r2)
	lfs      f2, lbl_8051F340@sda21(r2)
	fmuls    f1, f0, f1
	lfs      f3, lbl_8051F344@sda21(r2)
	lfs      f4, lbl_8051F2F8@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff

lbl_803A2BC4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A2BD4
 * Size:	0000E4
 */
void Morimura::TListScreen::create(char const*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803A2C10
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_803A2C10:
	stw      r0, 8(r29)
	mr       r4, r30
	mr       r5, r31
	lwz      r3, 8(r29)
	lwz      r6, 0xc(r29)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lwz      r3, 8(r29)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_803A2C84
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r3, __vt__Q28Morimura16TCallbackScissor@ha
	stw      r0, 0(r31)
	li       r5, 0
	addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r0, r3, __vt__Q28Morimura16TCallbackScissor@l
	stw      r5, 0x18(r31)
	lfs      f0, lbl_8051F2F8@sda21(r2)
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)

lbl_803A2C84:
	lwz      r0, 0x10(r29)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r29)
	lwz      r3, 8(r29)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
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
 * Address:	803A2CB8
 * Size:	000090
 */
Morimura::TScrollList::TScrollList(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q28Morimura9TTestBaseFPc
	lis      r3, __vt__Q28Morimura11TScrollList@ha
	li       r4, 0
	addi     r3, r3, __vt__Q28Morimura11TScrollList@l
	li       r0, 1
	stw      r3, 0(r31)
	addi     r5, r3, 0x10
	lfs      f0, lbl_8051F2F8@sda21(r2)
	mr       r3, r31
	stw      r5, 0x18(r31)
	stw      r4, 0x7c(r31)
	stw      r4, 0x80(r31)
	stw      r4, 0x84(r31)
	stw      r4, 0x88(r31)
	stb      r4, 0x8c(r31)
	sth      r4, 0x8e(r31)
	stw      r4, 0x90(r31)
	stw      r4, 0x94(r31)
	stw      r4, 0x98(r31)
	stw      r0, 0x9c(r31)
	stfs     f0, 0xa0(r31)
	stfs     f0, 0xa4(r31)
	stfs     f0, 0xa8(r31)
	stfs     f0, 0xac(r31)
	stb      r4, 0xb0(r31)
	stw      r4, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A2D48
 * Size:	000428
 */
void Morimura::TScrollList::updateIndex(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r6, 0
	li       r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, -1
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_803A2DC0

lbl_803A2D7C:
	lwz      r3, 0x88(r28)
	lwzx     r4, r3, r5
	lwz      r3, 4(r4)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x1c(r4)
	lwz      r3, 0x88(r28)
	lfs      f0, 0xac(r28)
	lwzx     r3, r3, r5
	lfs      f1, 0x1c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_803A2DB8
	lfs      f0, 0xa8(r28)
	fcmpo    cr0, f1, f0
	ble      lbl_803A2DB8
	mr       r31, r6

lbl_803A2DB8:
	addi     r5, r5, 4
	addi     r6, r6, 1

lbl_803A2DC0:
	lha      r3, 0x8e(r28)
	cmpw     r6, r3
	blt      lbl_803A2D7C
	lbz      r0, 0x8c(r28)
	cmplwi   r0, 0
	beq      lbl_803A2E5C
	cmpwi    r31, 0
	bge      lbl_803A2E34
	lfs      f1, lbl_8051F320@sda21(r2)
	li       r5, 0
	li       r4, 0
	mtctr    r3
	cmpwi    r3, 0
	ble      lbl_803A2E34

lbl_803A2DF8:
	lwz      r3, 0x88(r28)
	lfs      f0, 0xac(r28)
	lwzx     r3, r3, r4
	fadds    f0, f1, f0
	lfs      f2, 0x1c(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_803A2E28
	lfs      f0, 0xa8(r28)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	ble      lbl_803A2E28
	mr       r31, r5

lbl_803A2E28:
	addi     r4, r4, 4
	addi     r5, r5, 1
	bdnz     lbl_803A2DF8

lbl_803A2E34:
	cmpwi    r31, 0
	bge      lbl_803A2E58
	lis      r3, lbl_80495210@ha
	lis      r5, lbl_80495220@ha
	addi     r3, r3, lbl_80495210@l
	li       r4, 0x205
	addi     r5, r5, lbl_80495220@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A2E58:
	stw      r31, 0x94(r28)

lbl_803A2E5C:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	clrlwi   r31, r29, 0x18

lbl_803A2E74:
	lbz      r0, 0x8c(r28)
	li       r30, 0
	cmplwi   r0, 0
	bne      lbl_803A2E88
	li       r30, 1

lbl_803A2E88:
	cmplwi   r31, 0
	beq      lbl_803A2FE4
	lwz      r0, 0x98(r28)
	lwz      r5, 0x88(r28)
	slwi     r0, r0, 2
	lwz      r3, 0x84(r28)
	lwzx     r4, r5, r0
	lwz      r0, 0x90(r28)
	lwz      r4, 4(r4)
	slwi     r0, r0, 2
	lfs      f0, 0x18(r3)
	lfs      f1, 0xd8(r4)
	lwzx     r3, r5, r0
	fadds    f0, f1, f0
	stfs     f0, 0x1c(r3)
	lwz      r0, 0x90(r28)
	lwz      r3, 0x88(r28)
	slwi     r0, r0, 2
	lfs      f0, 0xa4(r28)
	lwzx     r4, r3, r0
	lfs      f1, 0x1c(r4)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803A2EEC
	li       r30, 1

lbl_803A2EEC:
	lfs      f1, 0x1c(r4)
	lfs      f0, lbl_8051F2F8@sda21(r2)
	lwz      r3, 4(r4)
	fadds    f0, f1, f0
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x98(r28)
	mr       r3, r28
	lwz      r6, 0x88(r28)
	mr       r5, r29
	slwi     r0, r0, 2
	addi     r4, r1, 0xc
	lwzx     r6, r6, r0
	lwz      r0, 0(r6)
	stw      r0, 0xc(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r6, r29
	lwz      r12, 0(r28)
	lwz      r4, 0x90(r28)
	lwz      r12, 0x94(r12)
	lwz      r5, 0xc(r1)
	mtctr    r12
	bctrl
	mr       r3, r28
	lwz      r4, 0x90(r28)
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x90(r28)
	stw      r0, 0x98(r28)
	lwz      r3, 0x90(r28)
	addi     r0, r3, 1
	stw      r0, 0x90(r28)
	lwz      r3, 0x90(r28)
	lha      r0, 0x8e(r28)
	cmpw     r3, r0
	blt      lbl_803A2FA8
	li       r0, 0
	stw      r0, 0x90(r28)

lbl_803A2FA8:
	lbz      r0, 0x8c(r28)
	cmplwi   r0, 0
	bne      lbl_803A2FD8
	lwz      r3, 0x94(r28)
	addi     r0, r3, 1
	stw      r0, 0x94(r28)
	lwz      r3, 0x94(r28)
	lha      r0, 0x8e(r28)
	cmpw     r3, r0
	blt      lbl_803A2FD8
	li       r0, 0
	stw      r0, 0x94(r28)

lbl_803A2FD8:
	clrlwi.  r0, r30, 0x18
	bne      lbl_803A3150
	b        lbl_803A2E74

lbl_803A2FE4:
	lwz      r0, 0x90(r28)
	lwz      r5, 0x88(r28)
	slwi     r0, r0, 2
	lwz      r3, 0x84(r28)
	lwzx     r4, r5, r0
	lwz      r0, 0x98(r28)
	lwz      r4, 4(r4)
	slwi     r0, r0, 2
	lfs      f0, 0x18(r3)
	lfs      f1, 0xd8(r4)
	lwzx     r3, r5, r0
	fsubs    f0, f1, f0
	lfd      f2, lbl_8051F348@sda21(r2)
	stfs     f0, 0x1c(r3)
	lwz      r0, 0x90(r28)
	lwz      r5, 0x88(r28)
	slwi     r0, r0, 2
	lwz      r3, 0x84(r28)
	lwzx     r4, r5, r0
	lfs      f1, 0x18(r3)
	lfs      f3, 0x1c(r4)
	lfs      f0, 0xa0(r28)
	fnmsub   f1, f2, f1, f3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803A3050
	li       r30, 1

lbl_803A3050:
	lwz      r0, 0x98(r28)
	lfs      f0, lbl_8051F2F8@sda21(r2)
	slwi     r0, r0, 2
	lwzx     r4, r5, r0
	lfs      f1, 0x1c(r4)
	lwz      r3, 4(r4)
	fadds    f0, f1, f0
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x90(r28)
	mr       r3, r28
	lwz      r6, 0x88(r28)
	mr       r5, r29
	slwi     r0, r0, 2
	addi     r4, r1, 8
	lwzx     r6, r6, r0
	lwz      r0, 0(r6)
	stw      r0, 8(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r6, r29
	lwz      r12, 0(r28)
	lwz      r4, 0x98(r28)
	lwz      r12, 0x94(r12)
	lwz      r5, 8(r1)
	mtctr    r12
	bctrl
	mr       r3, r28
	lwz      r4, 0x98(r28)
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x98(r28)
	stw      r0, 0x90(r28)
	lwz      r3, 0x98(r28)
	addi     r0, r3, -1
	stw      r0, 0x98(r28)
	lwz      r0, 0x98(r28)
	cmpwi    r0, 0
	bge      lbl_803A3118
	lha      r3, 0x8e(r28)
	addi     r0, r3, -1
	stw      r0, 0x98(r28)

lbl_803A3118:
	lbz      r0, 0x8c(r28)
	cmplwi   r0, 0
	bne      lbl_803A3148
	lwz      r3, 0x94(r28)
	addi     r0, r3, -1
	stw      r0, 0x94(r28)
	lwz      r0, 0x94(r28)
	cmpwi    r0, 0
	bge      lbl_803A3148
	lha      r3, 0x8e(r28)
	addi     r0, r3, -1
	stw      r0, 0x94(r28)

lbl_803A3148:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A2E74

lbl_803A3150:
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
 * Address:	803A3170
 * Size:	0000DC
 */
void Morimura::TScrollList::getUpdateIndex(int&, bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r5, 0x18
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_803A31E4
	lwz      r4, 0(r31)
	lwz      r0, 0x9c(r30)
	add      r0, r4, r0
	stw      r0, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r31)
	cmpw     r0, r3
	blt      lbl_803A31C8
	li       r0, 0
	stw      r0, 0(r31)

lbl_803A31C8:
	lwz      r0, 0x90(r30)
	lwz      r3, 0x88(r30)
	slwi     r0, r0, 2
	lwz      r4, 0(r31)
	lwzx     r3, r3, r0
	bl       setIndex__Q28Morimura10TIndexPaneFi
	b        lbl_803A3234

lbl_803A31E4:
	lwz      r4, 0x9c(r30)
	lwz      r0, 0(r31)
	subf     r0, r4, r0
	stw      r0, 0(r31)
	lwz      r0, 0(r31)
	cmpwi    r0, 0
	bge      lbl_803A321C
	lwz      r12, 0(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x9c(r30)
	subf     r0, r0, r3
	stw      r0, 0(r31)

lbl_803A321C:
	lwz      r0, 0x98(r30)
	lwz      r3, 0x88(r30)
	slwi     r0, r0, 2
	lwz      r4, 0(r31)
	lwzx     r3, r3, r0
	bl       setIndex__Q28Morimura10TIndexPaneFi

lbl_803A3234:
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
 * Address:	803A324C
 * Size:	000390
 */
void Morimura::TScrollList::updateList(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r31, r3
	lwz      r3, 0x84(r3)
	lwz      r0, 0x20(r3)
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_803A3290
	lfs      f0, 0x10(r3)
	stfs     f0, 0x1c(r3)

lbl_803A3290:
	lwz      r3, 0x84(r31)
	lfs      f2, 0x1c(r3)
	lfs      f0, 0x10(r3)
	fcmpo    cr0, f2, f0
	ble      lbl_803A32EC
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	bne      lbl_803A32EC
	lfs      f0, 0x14(r3)
	lfs      f1, lbl_8051F318@sda21(r2)
	fabs     f3, f0
	lfs      f0, 0x18(r3)
	fmuls    f0, f1, f0
	frsp     f1, f3
	fcmpo    cr0, f1, f0
	bge      lbl_803A32E0
	lfs      f0, 0xc(r3)
	fmuls    f0, f2, f0
	stfs     f0, 0x1c(r3)
	b        lbl_803A32EC

lbl_803A32E0:
	lfs      f0, 4(r3)
	fmuls    f0, f2, f0
	stfs     f0, 0x1c(r3)

lbl_803A32EC:
	lwz      r4, 0x94(r31)
	lwz      r5, 0x88(r31)
	slwi     r0, r4, 2
	lfs      f1, lbl_8051F310@sda21(r2)
	lwzx     r7, r5, r0
	lwz      r0, 0xc(r7)
	cmpwi    r0, 0
	beq      lbl_803A3314
	lfs      f0, lbl_8051F350@sda21(r2)
	fadds    f1, f1, f0

lbl_803A3314:
	lwz      r3, 0x84(r31)
	lwz      r6, 0x20(r3)
	subfic   r0, r6, 1
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_803A33A0
	lha      r8, 0x8e(r31)
	addi     r9, r4, 1
	cmpw     r9, r8
	blt      lbl_803A3340
	li       r9, 0

lbl_803A3340:
	slwi     r0, r9, 2
	lwzx     r6, r5, r0
	lwz      r0, 0xc(r6)
	cmpwi    r0, 0
	beq      lbl_803A3414
	lfs      f0, lbl_8051F350@sda21(r2)
	lwz      r4, 0(r7)
	lwz      r0, 0(r6)
	fadds    f1, f1, f0
	cmpw     r4, r0
	bne      lbl_803A3414
	addi     r9, r9, 1
	fsubs    f1, f1, f0
	cmpw     r9, r8
	blt      lbl_803A3380
	li       r9, 0

lbl_803A3380:
	slwi     r0, r9, 2
	lwzx     r4, r5, r0
	lwz      r0, 0xc(r4)
	cmpwi    r0, 0
	beq      lbl_803A3414
	lfs      f0, lbl_8051F350@sda21(r2)
	fadds    f1, f1, f0
	b        lbl_803A3414

lbl_803A33A0:
	cmpwi    r6, 0
	beq      lbl_803A3414
	addic.   r8, r4, -1
	bge      lbl_803A33B8
	lha      r4, 0x8e(r31)
	addi     r8, r4, -1

lbl_803A33B8:
	slwi     r0, r8, 2
	lwzx     r6, r5, r0
	lwz      r0, 0xc(r6)
	cmpwi    r0, 0
	beq      lbl_803A3414
	lfs      f0, lbl_8051F350@sda21(r2)
	lwz      r4, 0(r7)
	lwz      r0, 0(r6)
	fadds    f1, f1, f0
	cmpw     r4, r0
	bne      lbl_803A3414
	fsubs    f1, f1, f0
	addic.   r8, r8, -1
	bge      lbl_803A33F8
	lha      r4, 0x8e(r31)
	addi     r8, r4, -1

lbl_803A33F8:
	slwi     r0, r8, 2
	lwzx     r4, r5, r0
	lwz      r0, 0xc(r4)
	cmpwi    r0, 0
	beq      lbl_803A3414
	lfs      f0, lbl_8051F350@sda21(r2)
	fadds    f1, f1, f0

lbl_803A3414:
	lfs      f0, lbl_8051F2F8@sda21(r2)
	stfs     f0, 0x2c(r3)
	lfs      f0, 0x18(r3)
	lwz      r0, 0x20(r3)
	fmuls    f1, f0, f1
	cmpwi    r0, 0
	beq      lbl_803A3494
	cmpwi    r0, 2
	bne      lbl_803A3440
	lfs      f2, 0x1c(r3)
	b        lbl_803A3448

lbl_803A3440:
	lfs      f0, 0x1c(r3)
	fneg     f2, f0

lbl_803A3448:
	lfs      f0, 0x14(r3)
	fadds    f0, f0, f2
	stfs     f0, 0x14(r3)
	lfs      f0, 0x14(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_803A3474
	fsubs    f0, f0, f1
	li       r30, 1
	stfs     f0, 0x2c(r3)
	stfs     f1, 0x14(r3)
	b        lbl_803A3498

lbl_803A3474:
	fneg     f2, f1
	fcmpo    cr0, f0, f2
	bge      lbl_803A3494
	fadds    f0, f0, f1
	li       r30, 1
	stfs     f0, 0x2c(r3)
	stfs     f2, 0x14(r3)
	b        lbl_803A3498

lbl_803A3494:
	li       r30, 0

lbl_803A3498:
	lwz      r3, 0x84(r31)
	li       r28, 0
	li       r29, 0
	lfs      f31, 0x14(r3)
	b        lbl_803A34F4

lbl_803A34AC:
	lwz      r3, 0x88(r31)
	lwzx     r4, r3, r29
	lfs      f0, 0x1c(r4)
	lwz      r3, 4(r4)
	fadds    f0, f0, f31
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	mr       r4, r28
	lwz      r12, 0(r31)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 4
	addi     r28, r28, 1

lbl_803A34F4:
	lha      r0, 0x8e(r31)
	cmpw     r28, r0
	blt      lbl_803A34AC
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A3530
	lwz      r3, 0x84(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_803A3520
	lfs      f31, 0x2c(r3)
	b        lbl_803A3524

lbl_803A3520:
	lfs      f31, lbl_8051F2F8@sda21(r2)

lbl_803A3524:
	mr       r3, r31
	bl       changeIndex__Q28Morimura11TScrollListFv
	b        lbl_803A3554

lbl_803A3530:
	lwz      r3, 0x84(r31)
	lwz      r0, 0x20(r3)
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_803A3554
	lfs      f1, 0x14(r3)
	lfs      f0, lbl_8051F354@sda21(r2)
	fmuls    f0, f0, f1
	fadds    f31, f1, f0

lbl_803A3554:
	lwz      r3, 0x84(r31)
	li       r28, 0
	li       r29, 0
	stfs     f31, 0x14(r3)
	b        lbl_803A3598

lbl_803A3568:
	lwz      r3, 0x88(r31)
	lwzx     r4, r3, r29
	lfs      f0, 0x1c(r4)
	lwz      r3, 4(r4)
	fadds    f0, f0, f31
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 4
	addi     r28, r28, 1

lbl_803A3598:
	lha      r0, 0x8e(r31)
	cmpw     r28, r0
	blt      lbl_803A3568
	lwz      r4, 0x84(r31)
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x24(r4)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A35DC
 * Size:	000060
 */
void Morimura::TScrollList::changeIndex(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0x84(r3)
	lwz      r12, 0(r3)
	lwz      r0, 0x20(r4)
	lwz      r12, 0xa4(r12)
	subfic   r0, r0, 1
	cntlzw   r0, r0
	srwi     r4, r0, 5
	mtctr    r12
	bctrl
	lwz      r3, 0x84(r31)
	li       r0, 0
	lfs      f0, lbl_8051F2F8@sda21(r2)
	stfs     f0, 0x14(r3)
	stw      r0, 0x20(r3)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A363C
 * Size:	000008
 */
@24 @Morimura::TScrollList::~TScrollList(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q28Morimura11TScrollListFv
	*/
}
