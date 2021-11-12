#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80490010
    lbl_80490010:
        .4byte 0x50534175
        .4byte 0x746F4267
        .4byte 0x6D5F4D65
        .4byte 0x6C6F4172
        .4byte 0x72616E67
        .4byte 0x65722E63
        .4byte 0x70700000
    .global lbl_8049002C
    lbl_8049002C:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q29PSAutoBgm11MeloArrBase
    __vt__Q29PSAutoBgm11MeloArrBase:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__Q29PSAutoBgm11MeloArrBaseFv"
        .4byte directOn__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte directOff__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte pre__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte post__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte 0
        .4byte __dt__Q29PSAutoBgm11MeloArrBaseFv
    .global __vt__Q29PSAutoBgm19MeloArr_RandomAvoid
    __vt__Q29PSAutoBgm19MeloArr_RandomAvoid:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__Q29PSAutoBgm19MeloArr_RandomAvoidFv"
        .4byte directOn__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte directOff__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte pre__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte post__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte
   avoidChk__Q29PSAutoBgm19MeloArr_RandomAvoidFRQ29PSAutoBgm10MeloArrArg .4byte
   __dt__Q29PSAutoBgm19MeloArr_RandomAvoidFv
*/

/*
 * --INFO--
 * Address:	8033EE9C
 * Size:	00003C
 */
void PSAutoBgm::MeloArr_RandomAvoid::avoidChk(PSAutoBgm::MeloArrArg&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getRandom_0_1__7JALCalcFv
	lfs      f0, 0x1c(r31)
	fcmpo    cr0, f1, f0
	mfcr     r0
	lwz      r31, 0xc(r1)
	srwi     r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033EED8
 * Size:	000138
 */
void PSAutoBgm::MeloArrMgr::isToAvoid(PSAutoBgm::MeloArrArg&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	lbz      r0, 0(r4)
	cmplwi   r0, 0x10
	blt      lbl_8033EF20
	lis      r3, lbl_80490010@ha
	lis      r5, lbl_8049002C@ha
	addi     r3, r3, lbl_80490010@l
	li       r4, 0x59
	addi     r5, r5, lbl_8049002C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033EF20:
	lbz      r0, 1(r31)
	cmplwi   r0, 0xff
	bne      lbl_8033EF48
	lis      r3, lbl_80490010@ha
	lis      r5, lbl_8049002C@ha
	addi     r3, r3, lbl_80490010@l
	li       r4, 0x5a
	addi     r5, r5, lbl_8049002C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033EF48:
	lbz      r0, 0x12(r30)
	cmplwi   r0, 0
	bne      lbl_8033EF5C
	li       r3, 0
	b        lbl_8033EFF4

lbl_8033EF5C:
	lhz      r3, 0x10(r30)
	li       r29, 0
	lbz      r0, 0(r31)
	sraw     r0, r3, r0
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8033EFF0
	lwz      r30, 4(r30)
	b        lbl_8033EFE8

lbl_8033EF7C:
	lwz      r3, 0(r30)
	mr       r4, r31
	lwz      r12, 0x14(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r29, 0x18
	bne      lbl_8033EFCC
	lwz      r3, 0(r30)
	lbz      r0, 0x19(r3)
	cmplwi   r0, 1
	bne      lbl_8033EFC4
	lwz      r12, 0x14(r3)
	mr       r4, r31
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_8033EFC8

lbl_8033EFC4:
	li       r3, 0

lbl_8033EFC8:
	mr       r29, r3

lbl_8033EFCC:
	lwz      r3, 0(r30)
	mr       r4, r31
	lwz      r12, 0x14(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r30, 0xc(r30)

lbl_8033EFE8:
	cmplwi   r30, 0
	bne      lbl_8033EF7C

lbl_8033EFF0:
	mr       r3, r29

lbl_8033EFF4:
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
 * Address:	8033F010
 * Size:	000004
 */
void PSAutoBgm::MeloArrBase::post(PSAutoBgm::MeloArrArg&) { }

/*
 * --INFO--
 * Address:	8033F014
 * Size:	000004
 */
void PSAutoBgm::MeloArrBase::pre(PSAutoBgm::MeloArrArg&) { }

/*
 * --INFO--
 * Address:	8033F018
 * Size:	00000C
 */
void PSAutoBgm::MeloArrBase::directOn(PSAutoBgm::Track*)
{
	// Generated from stb r0, 0x19(r3)
	_19 = 1;
}

/*
 * --INFO--
 * Address:	8033F024
 * Size:	00000C
 */
void PSAutoBgm::MeloArrBase::directOff(PSAutoBgm::Track*)
{
	// Generated from stb r0, 0x19(r3)
	_19 = 0;
}

/*
 * --INFO--
 * Address:	8033F030
 * Size:	000080
 */
PSAutoBgm::MeloArrBase::~MeloArrBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033F094
	lis      r4, __vt__Q29PSAutoBgm11MeloArrBase@ha
	addi     r3, r30, 0x10
	addi     r5, r4, __vt__Q29PSAutoBgm11MeloArrBase@l
	li       r4, 0
	stw      r5, 0x14(r30)
	addi     r0, r5, 8
	stw      r0, 0x10(r30)
	bl       __dt__10JADHioNodeFv
	cmplwi   r30, 0
	beq      lbl_8033F084
	mr       r3, r30
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033F084:
	extsh.   r0, r31
	ble      lbl_8033F094
	mr       r3, r30
	bl       __dl__FPv

lbl_8033F094:
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
 * Address:	8033F0B0
 * Size:	000098
 */
PSAutoBgm::MeloArr_RandomAvoid::~MeloArr_RandomAvoid()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033F12C
	lis      r3, __vt__Q29PSAutoBgm19MeloArr_RandomAvoid@ha
	addi     r3, r3, __vt__Q29PSAutoBgm19MeloArr_RandomAvoid@l
	stw      r3, 0x14(r30)
	addi     r0, r3, 8
	stw      r0, 0x10(r30)
	beq      lbl_8033F11C
	lis      r4, __vt__Q29PSAutoBgm11MeloArrBase@ha
	addi     r3, r30, 0x10
	addi     r5, r4, __vt__Q29PSAutoBgm11MeloArrBase@l
	li       r4, 0
	stw      r5, 0x14(r30)
	addi     r0, r5, 8
	stw      r0, 0x10(r30)
	bl       __dt__10JADHioNodeFv
	cmplwi   r30, 0
	beq      lbl_8033F11C
	mr       r3, r30
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033F11C:
	extsh.   r0, r31
	ble      lbl_8033F12C
	mr       r3, r30
	bl       __dl__FPv

lbl_8033F12C:
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
 * Address:	8033F148
 * Size:	000008
 */
PSAutoBgm::MeloArr_RandomAvoid::@16 @~MeloArr_RandomAvoid()
{
	/*
	addi     r3, r3, -16
	b        __dt__Q29PSAutoBgm19MeloArr_RandomAvoidFv
	*/
}

/*
 * --INFO--
 * Address:	8033F150
 * Size:	000008
 */
PSAutoBgm::MeloArrBase::@16 @~MeloArrBase()
{
	/*
	addi     r3, r3, -16
	b        __dt__Q29PSAutoBgm11MeloArrBaseFv
	*/
}
