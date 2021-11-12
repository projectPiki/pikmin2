#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049E1C8
    lbl_8049E1C8:
        .asciz "PSMainSide_ObjCalc.cpp"
        .skip 1
    .global lbl_8049E1E0
    lbl_8049E1E0:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8049E1EC
    lbl_8049E1EC:
        .4byte 0x82A082E8
        .4byte 0x82A682C8
        .4byte 0x82A28350
        .4byte 0x815B8358
        .asciz "1"
        .skip 2
    .global lbl_8049E200
    lbl_8049E200:
        .4byte 0x82A082E8
        .4byte 0x82A682C8
        .4byte 0x82A28350
        .4byte 0x815B8358
        .asciz "2"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23PSM14ObjCalc_2PGame
    __vt__Q23PSM14ObjCalc_2PGame:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM14ObjCalc_2PGameFv
        .4byte getPlayerNo__Q23PSM14ObjCalc_2PGameFPQ23PSM8Creature
        .4byte getPlayerNo__Q23PSM14ObjCalc_2PGameFR3Vec
        .4byte setMode__Q23PSM11ObjCalcBaseFQ33PSM11ObjCalcBase4Mode
        .4byte is1PGame__Q23PSM14ObjCalc_2PGameFv
    .global __vt__Q23PSM18ObjCalc_SingleGame
    __vt__Q23PSM18ObjCalc_SingleGame:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM18ObjCalc_SingleGameFv
        .4byte getPlayerNo__Q23PSM18ObjCalc_SingleGameFPQ23PSM8Creature
        .4byte getPlayerNo__Q23PSM18ObjCalc_SingleGameFR3Vec
        .4byte setMode__Q23PSM11ObjCalcBaseFQ33PSM11ObjCalcBase4Mode
        .4byte is1PGame__Q23PSM11ObjCalcBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520E28
    lbl_80520E28:
        .float 100000.0
    .global lbl_80520E2C
    lbl_80520E2C:
        .float 1000000.0
*/

namespace PSM {

/*
 * --INFO--
 * Address:	804728A4
 * Size:	000060
 */
void ObjCalc_SingleGame::newInstance_SingleGame()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0xc
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_804728F4
	lis      r4, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@ha
	lis      r5, __vt__Q23PSM11ObjCalcBase@ha
	addi     r0, r4, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@l
	lis      r4, __vt__Q23PSM18ObjCalc_SingleGame@ha
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23PSM11ObjCalcBase@l
	li       r5, 0
	addi     r0, r4, __vt__Q23PSM18ObjCalc_SingleGame@l
	stw      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) stw r6,
0(r3) stw      r5, 4(r3) stw      r0, 0(r3) stb      r5, 8(r3)

lbl_804728F4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80472904
 * Size:	000008
 */
void ObjCalc_SingleGame::getPlayerNo(PSM::Creature*)
{
	/*
	lbz      r3, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8047290C
 * Size:	000008
 */
void ObjCalc_SingleGame::getPlayerNo(Vec&)
{
	/*
	lbz      r3, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80472914
 * Size:	00005C
 */
void ObjCalc_2PGame::newInstance_2PGame()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 8
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80472960
	lis      r4, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@ha
	lis      r5, __vt__Q23PSM11ObjCalcBase@ha
	addi     r0, r4, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@l
	lis      r4, __vt__Q23PSM14ObjCalc_2PGame@ha
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23PSM11ObjCalcBase@l
	li       r5, 0
	addi     r0, r4, __vt__Q23PSM14ObjCalc_2PGame@l
	stw      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) stw r6,
0(r3) stw      r5, 4(r3) stw      r0, 0(r3)

lbl_80472960:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80472970
 * Size:	0003BC
 */
void ObjCalc_2PGame::getPlayerNo(Vec&)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	mr       r29, r4
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_804729A8
	bge      lbl_80472CF0
	cmpwi    r0, 0
	bge      lbl_804729B0
	b        lbl_80472CF0

lbl_804729A8:
	li       r3, 0
	b        lbl_80472D10

lbl_804729B0:
	li       r0, 0
	lwz      r6, lbl_80520E28@sda21(r2)
	lwz      r5, lbl_80520E2C@sda21(r2)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	lwz      r3, naviMgr__4Game@sda21(r13)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r6, 8(r1)
	li       r30, 0
	stw      r5, 0xc(r1)
	stw      r4, 0x64(r1)
	stw      r0, 0x70(r1)
	stw      r0, 0x68(r1)
	stw      r3, 0x6c(r1)
	bne      lbl_80472A04
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_80472A8C

lbl_80472A04:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_80472A70

lbl_80472A1C:
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80472A8C
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)

lbl_80472A70:
	lwz      r12, 0x64(r1)
	addi     r3, r1, 0x64
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80472A1C

lbl_80472A8C:
	addi     r31, r1, 8
	b        lbl_80472CB0

lbl_80472A94:
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 0x4c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x4c(r1)
	addic.   r0, r1, 0x58
	lfs      f1, 0x50(r1)
	lfs      f0, 0x54(r1)
	stfs     f2, 0x58(r1)
	stfs     f1, 0x5c(r1)
	stfs     f0, 0x60(r1)
	bne      lbl_80472AFC
	lis      r3, lbl_8049E1C8@ha
	lis      r5, lbl_8049E1E0@ha
	addi     r3, r3, lbl_8049E1C8@l
	li       r4, 0x41
	addi     r5, r5, lbl_8049E1E0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472AFC:
	cmpwi    r30, 2
	blt      lbl_80472B20
	lis      r3, lbl_8049E1C8@ha
	lis      r5, lbl_8049E1E0@ha
	addi     r3, r3, lbl_8049E1C8@l
	li       r4, 0x42
	addi     r5, r5, lbl_8049E1E0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472B20:
	lfs      f0, 0x58(r1)
	addi     r30, r30, 1
	lfs      f1, 0x5c(r1)
	stfs     f0, 0x34(r1)
	lfs      f0, 0x60(r1)
	stfs     f1, 0x38(r1)
	lwz      r0, 0x34(r1)
	lwz      r3, 0x38(r1)
	stw      r0, 0x40(r1)
	lfs      f1, 0(r29)
	stfs     f0, 0x3c(r1)
	lfs      f0, 0x40(r1)
	lwz      r0, 0x3c(r1)
	fsubs    f3, f1, f0
	stw      r3, 0x44(r1)
	lfs      f2, 4(r29)
	lfs      f0, 0x44(r1)
	stw      r0, 0x48(r1)
	fsubs    f2, f2, f0
	lfs      f1, 8(r29)
	lfs      f0, 0x48(r1)
	stfs     f3, 0x28(r1)
	fsubs    f0, f1, f0
	lwz      r0, 0x70(r1)
	stfs     f2, 0x2c(r1)
	lwz      r4, 0x28(r1)
	cmplwi   r0, 0
	lwz      r3, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stw      r4, 0x10(r1)
	lwz      r0, 0x30(r1)
	stw      r3, 0x14(r1)
	lfs      f1, 0x10(r1)
	lfs      f0, 0x14(r1)
	fmuls    f2, f1, f1
	stw      r0, 0x18(r1)
	fmuls    f1, f0, f0
	lfs      f0, 0x18(r1)
	stfs     f2, 0x10(r1)
	fmuls    f0, f0, f0
	stfs     f1, 0x14(r1)
	lwz      r0, 0x10(r1)
	lwz      r3, 0x14(r1)
	stw      r0, 0x1c(r1)
	stfs     f0, 0x18(r1)
	lfs      f1, 0x1c(r1)
	stw      r3, 0x20(r1)
	lwz      r0, 0x18(r1)
	lfs      f0, 0x20(r1)
	stw      r0, 0x24(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x24(r1)
	fadds    f0, f1, f0
	stfs     f0, 0(r31)
	addi     r31, r31, 4
	bne      lbl_80472C20
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_80472CB0

lbl_80472C20:
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_80472C94

lbl_80472C40:
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80472CB0
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)

lbl_80472C94:
	lwz      r12, 0x64(r1)
	addi     r3, r1, 0x64
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80472C40

lbl_80472CB0:
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x68(r1)
	cmplw    r4, r3
	bne      lbl_80472A94
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r0, r0, 0x1f
	cntlzw   r0, r0
	srwi     r3, r0, 5
	b        lbl_80472D10

lbl_80472CF0:
	lis      r3, lbl_8049E1C8@ha
	lis      r5, lbl_8049E1E0@ha
	addi     r3, r3, lbl_8049E1C8@l
	li       r4, 0x4d
	addi     r5, r5, lbl_8049E1E0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_80472D10:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80472D2C
 * Size:	0000C8
 */
void ObjCalc_2PGame::getPlayerNo(PSM::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	lis      r4, lbl_8049E1C8@ha
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r31, r4, lbl_8049E1C8@l
	bne      lbl_80472D6C
	addi     r3, r31, 0
	addi     r5, r31, 0x18
	li       r4, 0x57
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472D6C:
	lwz      r0, 4(r29)
	cmpwi    r0, 1
	beq      lbl_80472D88
	bge      lbl_80472DAC
	cmpwi    r0, 0
	bge      lbl_80472D90
	b        lbl_80472DAC

lbl_80472D88:
	li       r3, 0
	b        lbl_80472DD8

lbl_80472D90:
	lwz      r3, 0x2c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xfc(r12)
	mtctr    r12
	bctrl
	lbz      r3, 1(r3)
	b        lbl_80472DD8

lbl_80472DAC:
	addi     r3, r31, 0
	addi     r5, r31, 0x24
	li       r4, 0x7d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0x80
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_80472DD8:
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
 * Address:	80472DF4
 * Size:	000074
 */
ObjCalc_SingleGame::~ObjCalc_SingleGame()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80472E50
	lis      r3, __vt__Q23PSM18ObjCalc_SingleGame@ha
	addi     r0, r3, __vt__Q23PSM18ObjCalc_SingleGame@l
	stw      r0, 0(r31)
	beq      lbl_80472E40
	lis      r3, __vt__Q23PSM11ObjCalcBase@ha
	addi     r0, r3, __vt__Q23PSM11ObjCalcBase@l
	stw      r0, 0(r31)
	beq      lbl_80472E40
	lis      r3, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@ha
	li       r0, 0
	addi     r3, r3, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@l
	stw      r3, 0(r31)
	stw      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)

lbl_80472E40:
	extsh.   r0, r4
	ble      lbl_80472E50
	mr       r3, r31
	bl       __dl__FPv

lbl_80472E50:
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
 * Address:	80472E68
 * Size:	000074
 */
ObjCalc_2PGame::~ObjCalc_2PGame()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80472EC4
	lis      r3, __vt__Q23PSM14ObjCalc_2PGame@ha
	addi     r0, r3, __vt__Q23PSM14ObjCalc_2PGame@l
	stw      r0, 0(r31)
	beq      lbl_80472EB4
	lis      r3, __vt__Q23PSM11ObjCalcBase@ha
	addi     r0, r3, __vt__Q23PSM11ObjCalcBase@l
	stw      r0, 0(r31)
	beq      lbl_80472EB4
	lis      r3, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@ha
	li       r0, 0
	addi     r3, r3, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@l
	stw      r3, 0(r31)
	stw      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)

lbl_80472EB4:
	extsh.   r0, r4
	ble      lbl_80472EC4
	mr       r3, r31
	bl       __dl__FPv

lbl_80472EC4:
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
 * Address:	80472EDC
 * Size:	000008
 */
u32 ObjCalc_2PGame::is1PGame() { return 0x0; }
} // namespace PSM
