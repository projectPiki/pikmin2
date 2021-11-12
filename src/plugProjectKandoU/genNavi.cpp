#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F7D8
    lbl_8047F7D8:
        .4byte 0x6F626A65
        .4byte 0x63742074
        .4byte 0x79706500
        .4byte 0x4E415649
        .4byte 0x2082F083
        .4byte 0x5A836283
        .4byte 0x67000000
        .4byte 0x8358835E
        .4byte 0x815B8367
        .4byte 0x8CFC82AB
        .4byte 0x00000000
    .global lbl_8047F804
    lbl_8047F804:
        .4byte 0x83698372
        .4byte 0x82F094AD
        .4byte 0x90B60000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game13GenObjectNavi
    __vt__Q24Game13GenObjectNavi:
        .4byte 0
        .4byte 0
        .4byte doWrite__Q24Game7GenBaseFR6Stream
        .4byte ramSaveParameters__Q24Game13GenObjectNaviFR6Stream
        .4byte ramLoadParameters__Q24Game13GenObjectNaviFR6Stream
        .4byte doEvent__Q24Game7GenBaseFUl
        .4byte doRead__Q24Game7GenBaseFR6Stream
        .4byte update__Q24Game9GenObjectFPQ24Game9Generator
        .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
        .4byte getLatestVersion__Q24Game9GenObjectFv
        .4byte getShape__Q24Game7GenBaseFv
        .4byte updateUseList__Q24Game9GenObjectFPQ24Game9Generatori
        .4byte generate__Q24Game13GenObjectNaviFPQ24Game9Generator
        .4byte birth__Q24Game13GenObjectNaviFPQ24Game6GenArg
        .4byte "generatorMakeMatrix__Q24Game9GenObjectFR7MatrixfR10Vector3<f>"
        .4byte getDebugInfo__Q24Game9GenObjectFPc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805192A8
    lbl_805192A8:
        .4byte 0x00000000
    .global lbl_805192AC
    lbl_805192AC:
        .4byte 0x43B40000
    .global lbl_805192B0
    lbl_805192B0:
        .4byte 0x40490FDB
    .global lbl_805192B4
    lbl_805192B4:
        .4byte 0x3BB60B61
*/

/*
 * --INFO--
 * Address:	801ACA08
 * Size:	0000B8
 */
void makeObjectNavi()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8047F7D8@ha
	li       r3, 0x50
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8047F7D8@l
	stw      r30, 8(r1)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801ACAA4
	addi     r0, r30, 0x4c
	lis      r4, 0x6E617669@ha
	stw      r0, 0(r30)
	addi     r5, r4, 0x6E617669@l
	addi     r6, r31, 0
	addi     r7, r31, 0xc
	li       r4, 0
	bl       __ct__Q24Game7GenBaseFUlPcPc
	lis      r4, __vt__Q24Game9GenObject@ha
	lis      r3, __vt__Q24Game13GenObjectNavi@ha
	addi     r0, r4, __vt__Q24Game9GenObject@l
	lis      r5, 0x70303030@ha
	stw      r0, 0xc(r30)
	addi     r0, r3, __vt__Q24Game13GenObjectNavi@l
	mr       r4, r30
	addi     r3, r30, 0x24
	stw      r0, 0xc(r30)
	addi     r5, r5, 0x70303030@l
	addi     r6, r31, 0x1c
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f1, lbl_805192A8@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805192AC@sda21(r2)
	stw      r0, 0x24(r30)
	stfs     f1, 0x3c(r30)
	stfs     f1, 0x44(r30)
	stfs     f0, 0x48(r30)

lbl_801ACAA4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801ACAC0
 * Size:	00008C
 */
void GenObjectNavi::initialise(void)
{
	/*
	lwz      r8, factory__Q24Game16GenObjectFactory@sda21(r13)
	lwz      r5, 0(r8)
	lwz      r0, 4(r8)
	cmpw     r5, r0
	bgelr
	lis      r4, 0x6E617669@ha
	lwz      r3, 8(r8)
	addi     r4, r4, 0x6E617669@l
	slwi     r0, r5, 4
	stwx     r4, r3, r0
	lis      r5, makeObjectNavi__Fv@ha
	lis      r4, lbl_8047F804@ha
	lis      r3, 0x30303030@ha
	lwz      r0, 0(r8)
	addi     r7, r5, makeObjectNavi__Fv@l
	lwz      r6, 8(r8)
	addi     r5, r4, lbl_8047F804@l
	slwi     r0, r0, 4
	addi     r4, r3, 0x30303030@l
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
 * Address:	801ACB4C
 * Size:	000004
 */
void GenObjectNavi::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801ACB50
 * Size:	000004
 */
void GenObjectNavi::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801ACB54
 * Size:	000078
 */
void GenObjectNavi::generate(Game::Generator*)
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

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void print_calcs(SysShape::Model*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void clear_calcs(SysShape::Model*, SysShape::Animator&)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	801ACBCC
 * Size:	000138
 */
void GenObjectNavi::birth(Game::GenArg*)
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
	lwz      r12, 0xc(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	beq      lbl_801ACCE0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	addi     r3, r30, 0x1ac
	lwz      r12, 0x1ac(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1c8
	lwz      r12, 0x1c8(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0x174(r30)
	lwz      r0, 0xc(r31)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801ACC64

lbl_801ACC60:
	bdnz     lbl_801ACC60

lbl_801ACC64:
	addi     r3, r30, 0x1c8
	lwz      r12, 0x1c8(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r31)
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwz      r4, 0(r4)
	stw      r3, 0x54(r4)
	lwz      r3, 0x174(r30)
	lwz      r0, 0xc(r3)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801ACCA4

lbl_801ACCA0:
	bdnz     lbl_801ACCA0

lbl_801ACCA4:
	lwz      r0, 0xc(r3)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801ACCB8

lbl_801ACCB4:
	bdnz     lbl_801ACCB4

lbl_801ACCB8:
	mr       r3, r30
	addi     r4, r29, 4
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f1, lbl_805192B4@sda21(r2)
	lfs      f0, 0x3c(r28)
	lfs      f2, lbl_805192B0@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x1fc(r30)

lbl_801ACCE0:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

namespace SysShape {

/*
 * --INFO--
 * Address:	801ACD04
 * Size:	00001C
 */
void Animator::getCalc(void)
{
	/*
	lwz      r3, 0xc(r3)
	cmplwi   r3, 0
	beq      lbl_801ACD18
	lwz      r3, 0x1c(r3)
	blr

lbl_801ACD18:
	li       r3, 0
	blr
	*/
}
} // namespace SysShape
