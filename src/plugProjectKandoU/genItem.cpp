#include "Game/gameGenerator.h"
#include "Game/genItem.h"
#include "Game/itemMgr.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F810
    lbl_8047F810:
        .4byte 0x6F626A65
        .4byte 0x63742074
        .4byte 0x79706500
    .global lbl_8047F81C
    lbl_8047F81C:
        .4byte 0x4954454D
        .4byte 0x2082F083
        .4byte 0x5A836283
        .4byte 0x67000000
    .global lbl_8047F82C
    lbl_8047F82C:
        .4byte 0x83418343
        .4byte 0x83658380
        .4byte 0x82F094AD
        .4byte 0x90B60000
        .4byte 0x09232069
        .4byte 0x74656D20
        .4byte 0x69640D0A
        .4byte 0x00000000
        .4byte 0x09232072
        .4byte 0x6F746174
        .4byte 0x696F6E0D
        .4byte 0x0A000000
        .4byte 0x09232069
        .4byte 0x74656D20
        .4byte 0x6C6F6361
        .4byte 0x6C207665
        .4byte 0x7273696F
        .4byte 0x6E0D0A00
    .global lbl_8047F874
    lbl_8047F874:
        .4byte 0x67656E49
        .4byte 0x74656D2E
        .4byte 0x63707000
    .global lbl_8047F880
    lbl_8047F880:
        .4byte 0x6E6F2062
        .4byte 0x61736549
        .4byte 0x74656D4D
        .4byte 0x67722066
        .4byte 0x6F722025
        .4byte 0x730A0000
        .4byte 0x8349836A
        .4byte 0x83878393
        .4byte 0x82F094AD
        .4byte 0x90B60000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game7GenItem
    __vt__Q24Game7GenItem:
        .4byte 0
        .4byte 0
        .4byte doWrite__Q24Game7GenItemFR6Stream
        .4byte ramSaveParameters__Q24Game7GenItemFR6Stream
        .4byte ramLoadParameters__Q24Game7GenItemFR6Stream
        .4byte doEvent__Q24Game7GenItemFUl
        .4byte doRead__Q24Game7GenItemFR6Stream
        .4byte update__Q24Game9GenObjectFPQ24Game9Generator
        .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
        .4byte getLatestVersion__Q24Game9GenObjectFv
        .4byte getShape__Q24Game7GenItemFv
        .4byte updateUseList__Q24Game7GenItemFPQ24Game9Generatori
        .4byte generate__Q24Game7GenItemFPQ24Game9Generator
        .4byte birth__Q24Game7GenItemFPQ24Game6GenArg
        .4byte "generatorMakeMatrix__Q24Game7GenItemFR7MatrixfR10Vector3<f>"
        .4byte getDebugInfo__Q24Game9GenObjectFPc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805192B8
    lbl_805192B8:
        .4byte 0x00000000
    .global lbl_805192BC
    lbl_805192BC:
        .4byte 0x40490FDB
    .global lbl_805192C0
    lbl_805192C0:
        .4byte 0x3BB60B61
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	801ACD20
 * Size:	00009C
 */
void makeItem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x40
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801ACDA4
	addi     r0, r31, 0x3c
	lis      r5, lbl_8047F810@ha
	lis      r4, lbl_8047F81C@ha
	lis      r8, 0x6974656D@ha
	addi     r6, r5, lbl_8047F810@l
	stw      r0, 0(r31)
	addi     r7, r4, lbl_8047F81C@l
	addi     r5, r8, 0x6974656D@l
	li       r4, 0
	bl       __ct__Q24Game7GenBaseFUlPcPc
	lis      r3, __vt__Q24Game9GenObject@ha
	lis      r4, __vt__Q24Game7GenItem@ha
	addi     r0, r3, __vt__Q24Game9GenObject@l
	li       r3, -1
	stw      r0, 0xc(r31)
	addi     r4, r4, __vt__Q24Game7GenItem@l
	lfs      f0, lbl_805192B8@sda21(r2)
	li       r0, 0
	stw      r4, 0xc(r31)
	stw      r3, 0x24(r31)
	stfs     f0, 0x30(r31)
	stfs     f0, 0x2c(r31)
	stfs     f0, 0x28(r31)
	stw      r0, 0x34(r31)
	stw      r0, 0x38(r31)

lbl_801ACDA4:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801ACDBC
 * Size:	00008C
 */
void GenItem::initialise(void)
{
	/*
	lwz      r8, factory__Q24Game16GenObjectFactory@sda21(r13)
	lwz      r5, 0(r8)
	lwz      r0, 4(r8)
	cmpw     r5, r0
	bgelr
	lis      r4, 0x6974656D@ha
	lwz      r3, 8(r8)
	addi     r4, r4, 0x6974656D@l
	slwi     r0, r5, 4
	stwx     r4, r3, r0
	lis      r5, makeItem__Fv@ha
	lis      r4, lbl_8047F82C@ha
	lis      r3, 0x30303032@ha
	lwz      r0, 0(r8)
	addi     r7, r5, makeItem__Fv@l
	lwz      r6, 8(r8)
	addi     r5, r4, lbl_8047F82C@l
	slwi     r0, r0, 4
	addi     r4, r3, 0x30303032@l
	add      r3, r6, r0
	stw      r7, 4(r3)
	lwz      r0, 0(r8)
	lwz      r3, 8(r8)
	slwi     r0, r0, 4
	add      r3, r3, r0
	stw      r5, 8(r3)
	lwz      r0, 0(r8)
	lwz      r3, 8(r8)
	slwi     r0, r0, 4
	add      r3, r3, r0
	stw      r4, 0xc(r3)
	lwz      r3, 0(r8)
	addi     r0, r3, 1
	stw      r0, 0(r8)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801ACE48
 * Size:	000038
 */
void GenItem::updateUseList(Game::Generator*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, 0x24(r31)
	bl       getMgrByIndex__Q24Game7ItemMgrFi
	stw      r3, 0x34(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801ACE80
 * Size:	00006C
 */
void GenItem::doEvent(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r0, r31, 0x24
	cmplw    r4, r0
	bne      lbl_801ACED8
	lwz      r3, 0x38(r31)
	cmplwi   r3, 0
	beq      lbl_801ACEB0
	bl       __dl__FPv

lbl_801ACEB0:
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, 0x24(r31)
	bl       getMgrByIndex__Q24Game7ItemMgrFi
	stw      r3, 0x34(r31)
	lwz      r3, 0x34(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r31)

lbl_801ACED8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801ACEEC
 * Size:	000068
 */
void generatorMakeMatrix__Q24Game7GenItemFR7MatrixfR10Vector3f(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f3, lbl_805192C0@sda21(r2)
	stw      r0, 0x24(r1)
	mr       r0, r4
	mr       r4, r5
	lfs      f4, lbl_805192BC@sda21(r2)
	lfs      f2, 0x2c(r3)
	addi     r5, r1, 8
	lfs      f1, 0x30(r3)
	lfs      f0, 0x28(r3)
	fmuls    f2, f3, f2
	fmuls    f1, f3, f1
	mr       r3, r0
	fmuls    f0, f3, f0
	fmuls    f2, f4, f2
	fmuls    f1, f4, f1
	fmuls    f0, f4, f0
	stfs     f2, 0xc(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0x10(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801ACF54
 * Size:	000050
 */
J3DModelData* GenItem::getShape(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x34(r3)
	cmplwi   r0, 0
	beq      lbl_801ACF90
	lwz      r4, 0x38(r3)
	cmplwi   r4, 0
	beq      lbl_801ACF90
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	b        lbl_801ACF94

lbl_801ACF90:
	li       r3, 0

lbl_801ACF94:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801ACFA4
 * Size:	000154
 */
void GenItem::doWrite(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, lbl_8047F810@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r5, lbl_8047F810@l
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r3, 0x34(r3)
	cmplwi   r3, 0
	beq      lbl_801AD0DC
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 0x14
	mr       r4, r0
	bl       __ct__4ID32FUl
	mr       r3, r30
	addi     r4, r1, 0x14
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r30)
	mr       r3, r30
	bl       textWriteTab__6StreamFi
	mr       r4, r30
	addi     r3, r1, 0x14
	bl       write__4ID32FR6Stream
	mr       r3, r30
	addi     r4, r31, 0x2c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r30)
	mr       r3, r30
	bl       textWriteTab__6StreamFi
	lfs      f1, 0x28(r29)
	mr       r3, r30
	bl       writeFloat__6StreamFf
	lfs      f1, 0x2c(r29)
	mr       r3, r30
	bl       writeFloat__6StreamFf
	lfs      f1, 0x30(r29)
	mr       r3, r30
	bl       writeFloat__6StreamFf
	mr       r3, r30
	addi     r4, r31, 0x3c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r3, 0x34(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 8
	mr       r4, r0
	bl       __ct__4ID32FUl
	lwz      r4, 0x414(r30)
	mr       r3, r30
	bl       textWriteTab__6StreamFi
	mr       r4, r30
	addi     r3, r1, 8
	bl       write__4ID32FR6Stream
	mr       r3, r30
	addi     r4, r31, 0x4c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r3, 0x34(r29)
	mr       r4, r30
	lwz      r5, 0x38(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       textEndGroup__6StreamFv

lbl_801AD0DC:
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
 * Address:	801AD0F8
 * Size:	000004
 */
void BaseItemMgr::generatorWrite(Stream&, Game::GenItemParm*) { }

/*
 * --INFO--
 * Address:	801AD0FC
 * Size:	00000C
 */
u32 BaseItemMgr::generatorLocalVersion(void)
{
	/*
	lis      r3, 0x30303030@ha
	addi     r3, r3, 0x30303030@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AD108
 * Size:	000148
 */
void GenItem::doRead(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r3, 0x38(r3)
	cmplwi   r3, 0
	beq      lbl_801AD13C
	bl       __dl__FPv
	li       r0, 0
	stw      r0, 0x38(r30)

lbl_801AD13C:
	li       r0, 0
	addi     r3, r1, 0x14
	stw      r0, 0x34(r30)
	bl       __ct__4ID32Fv
	mr       r4, r31
	addi     r3, r1, 0x14
	bl       read__4ID32FR6Stream
	lwz      r3, itemMgr__4Game@sda21(r13)
	addi     r4, r1, 0x14
	bl       getMgrByID__Q24Game7ItemMgrFR4ID32
	stw      r3, 0x34(r30)
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, 0x34(r30)
	bl       getIndexByMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	stw      r3, 0x24(r30)
	lwz      r0, 0x34(r30)
	cmplwi   r0, 0
	beq      lbl_801AD190
	lwz      r0, 0x24(r30)
	cmpwi    r0, -1
	bne      lbl_801AD1B0

lbl_801AD190:
	lis      r3, lbl_8047F874@ha
	lis      r4, lbl_8047F880@ha
	addi     r5, r4, lbl_8047F880@l
	addi     r6, r1, 0x14
	addi     r3, r3, lbl_8047F874@l
	li       r4, 0xaf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801AD1B0:
	lwz      r3, 0x34(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r30)
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0x28(r30)
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0x2c(r30)
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0x30(r30)
	lis      r4, 0x30303032@ha
	addi     r0, r4, 0x30303032@l
	lwz      r3, 0x14(r30)
	addi     r6, r4, 0x3030
	cmplw    r3, r0
	blt      lbl_801AD21C
	addi     r3, r1, 8
	bl       __ct__4ID32Fv
	mr       r4, r31
	addi     r3, r1, 8
	bl       read__4ID32FR6Stream
	lwz      r6, 0x10(r1)

lbl_801AD21C:
	lwz      r3, 0x34(r30)
	mr       r4, r31
	lwz      r5, 0x38(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AD250
 * Size:	000004
 */
void BaseItemMgr::generatorRead(Stream&, Game::GenItemParm*, unsigned long) { }

/*
 * --INFO--
 * Address:	801AD254
 * Size:	000004
 */
void GenItem::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801AD258
 * Size:	000004
 */
void GenItem::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801AD25C
 * Size:	000078
 */
Creature* GenItem::generate(Game::Generator*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__Q24Game15CreatureInitArg@ha
	lis      r5, __vt__Q24Game6GenArg@ha
	stw      r0, 0x24(r1)
	addi     r6, r6, __vt__Q24Game15CreatureInitArg@l
	addi     r0, r5, __vt__Q24Game6GenArg@l
	lfs      f1, 0x9c(r4)
	lfs      f0, 0xa8(r4)
	lfs      f3, 0x98(r4)
	fadds    f4, f1, f0
	lfs      f2, 0xa4(r4)
	lfs      f1, 0x94(r4)
	lfs      f0, 0xa0(r4)
	fadds    f2, f3, f2
	addi     r4, r1, 8
	fadds    f0, f1, f0
	stw      r6, 8(r1)
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f2, 0x10(r1)
	stfs     f4, 0x14(r1)
	lwz      r12, 0xc(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AD2D4
 * Size:	0000A4
 */
Creature* GenItem::birth(Game::GenArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r6, r3
	stw      r0, 0x24(r1)
	li       r0, 0
	lwz      r3, 0x34(r3)
	cmplwi   r3, 0
	beq      lbl_801AD364
	lfs      f0, 4(r4)
	addi     r5, r1, 8
	lfs      f3, lbl_805192C0@sda21(r2)
	stfs     f0, 0x14(r1)
	lfs      f4, lbl_805192BC@sda21(r2)
	lfs      f0, 8(r4)
	stfs     f0, 0x18(r1)
	lfs      f0, 0xc(r4)
	addi     r4, r1, 0x14
	stfs     f0, 0x1c(r1)
	lfs      f2, 0x30(r6)
	lfs      f1, 0x2c(r6)
	lfs      f0, 0x28(r6)
	fmuls    f2, f3, f2
	fmuls    f1, f3, f1
	fmuls    f0, f3, f0
	fmuls    f2, f4, f2
	fmuls    f1, f4, f1
	fmuls    f0, f4, f0
	stfs     f2, 0x10(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r6, 0x38(r6)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	mr       r0, r3

lbl_801AD364:
	mr       r3, r0
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void makeObjectItem()
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void GenObjectItem::initialise(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void GenObjectItem::doWrite(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void GenObjectItem::doRead(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void GenObjectItem::ramSaveParameters(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void GenObjectItem::ramLoadParameters(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void GenObjectItem::generate(Game::Generator*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void GenObjectItem::birth(Game::GenArg*)
{
	// UNUSED FUNCTION
}
} // namespace Game
