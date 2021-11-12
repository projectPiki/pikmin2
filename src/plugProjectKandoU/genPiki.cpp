#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_genPiki_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F788
    lbl_8047F788:
        .4byte 0x6F626A65
        .4byte 0x63742074
        .4byte 0x79706500
        .4byte 0x50494B4D
        .4byte 0x494E2082
        .4byte 0xF0835A83
        .4byte 0x62836700
        .4byte 0x8EA98A88
        .4byte 0x28313D79
        .4byte 0x65732900
    .global lbl_8047F7B0
    lbl_8047F7B0:
        .4byte 0x8373834E
        .4byte 0x837E8393
        .4byte 0x82F094AD
        .4byte 0x90B60000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8047F7CC
    lbl_8047F7CC:
        .4byte 0x67656E50
        .4byte 0x696B692E
        .4byte 0x63707000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B56A8
    lbl_804B56A8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game13GenObjectPiki
    __vt__Q24Game13GenObjectPiki:
        .4byte 0
        .4byte 0
        .4byte doWrite__Q24Game7GenBaseFR6Stream
        .4byte ramSaveParameters__Q24Game13GenObjectPikiFR6Stream
        .4byte ramLoadParameters__Q24Game13GenObjectPikiFR6Stream
        .4byte doEvent__Q24Game7GenBaseFUl
        .4byte doRead__Q24Game7GenBaseFR6Stream
        .4byte update__Q24Game9GenObjectFPQ24Game9Generator
        .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
        .4byte getLatestVersion__Q24Game9GenObjectFv
        .4byte getShape__Q24Game7GenBaseFv
        .4byte updateUseList__Q24Game9GenObjectFPQ24Game9Generatori
        .4byte generate__Q24Game13GenObjectPikiFPQ24Game9Generator
        .4byte birth__Q24Game13GenObjectPikiFPQ24Game6GenArg
        .4byte "generatorMakeMatrix__Q24Game9GenObjectFR7MatrixfR10Vector3<f>"
        .4byte getDebugInfo__Q24Game9GenObjectFPc
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515A40
    lbl_80515A40:
        .skip 0x4
    .global lbl_80515A44
    lbl_80515A44:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519278
    lbl_80519278:
        .4byte 0x90460000
    .global lbl_8051927C
    lbl_8051927C:
        .4byte 0x90940000
    .global lbl_80519280
    lbl_80519280:
        .4byte 0x00000000
    .global lbl_80519284
    lbl_80519284:
        .4byte 0x47000000
    .global lbl_80519288
    lbl_80519288:
        .4byte 0x40C90FDB
    .global lbl_8051928C
    lbl_8051928C:
        .4byte 0x41200000
    .global lbl_80519290
    lbl_80519290:
        .4byte 0x43A2F983
    .global lbl_80519294
    lbl_80519294:
        .4byte 0xC3A2F983
    .global lbl_80519298
    lbl_80519298:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805192A0
    lbl_805192A0:
        .4byte 0x64616D65
        .4byte 0x0A000000
*/

/*
 * --INFO--
 * Address:	801AC3C0
 * Size:	000128
 */
void makeObjectPiki()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8047F788@ha
	li       r3, 0xa0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8047F788@l
	stw      r30, 8(r1)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801AC4CC
	addi     r0, r30, 0x9c
	lis      r4, 0x70696B69@ha
	stw      r0, 0(r30)
	addi     r5, r4, 0x70696B69@l
	addi     r6, r31, 0
	addi     r7, r31, 0xc
	li       r4, 0
	bl       __ct__Q24Game7GenBaseFUlPcPc
	lis      r4, __vt__Q24Game9GenObject@ha
	lis      r3, __vt__Q24Game13GenObjectPiki@ha
	addi     r0, r4, __vt__Q24Game9GenObject@l
	lis      r5, 0x70303030@ha
	stw      r0, 0xc(r30)
	addi     r0, r3, __vt__Q24Game13GenObjectPiki@l
	mr       r4, r30
	addi     r3, r30, 0x24
	stw      r0, 0xc(r30)
	addi     r5, r5, 0x70303030@l
	addi     r6, r2, lbl_80519278@sda21
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303031@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r7, 0
	stw      r0, 0x24(r30)
	li       r0, 7
	mr       r4, r30
	addi     r3, r30, 0x4c
	stw      r7, 0x3c(r30)
	addi     r5, r5, 0x70303031@l
	addi     r6, r2, lbl_8051927C@sda21
	stw      r7, 0x44(r30)
	stw      r0, 0x48(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303032@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r7, 1
	stw      r0, 0x4c(r30)
	li       r0, 0x64
	mr       r4, r30
	addi     r3, r30, 0x74
	stw      r7, 0x64(r30)
	addi     r5, r5, 0x70303032@l
	addi     r6, r31, 0x1c
	stw      r7, 0x6c(r30)
	stw      r0, 0x70(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r4, "__vt__7Parm<i>"@ha
	li       r3, 0
	addi     r4, r4, "__vt__7Parm<i>"@l
	li       r0, 1
	stw      r4, 0x74(r30)
	stw      r3, 0x8c(r30)
	stw      r3, 0x94(r30)
	stw      r0, 0x98(r30)

lbl_801AC4CC:
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
 * Address:	801AC4E8
 * Size:	00008C
 */
void GenObjectPiki::initialise(void)
{
	/*
	lwz      r8, factory__Q24Game16GenObjectFactory@sda21(r13)
	lwz      r5, 0(r8)
	lwz      r0, 4(r8)
	cmpw     r5, r0
	bgelr
	lis      r4, 0x70696B69@ha
	lwz      r3, 8(r8)
	addi     r4, r4, 0x70696B69@l
	slwi     r0, r5, 4
	stwx     r4, r3, r0
	lis      r5, makeObjectPiki__Fv@ha
	lis      r4, lbl_8047F7B0@ha
	lis      r3, 0x30303031@ha
	lwz      r0, 0(r8)
	addi     r7, r5, makeObjectPiki__Fv@l
	lwz      r6, 8(r8)
	addi     r5, r4, lbl_8047F7B0@l
	slwi     r0, r0, 4
	addi     r4, r3, 0x30303031@l
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
 * Address:	801AC574
 * Size:	00002C
 */
void GenObjectPiki::ramSaveParameters(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x3c(r3)
	mr       r3, r4
	clrlwi   r4, r0, 0x18
	bl       writeByte__6StreamFUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AC5A0
 * Size:	000038
 */
void GenObjectPiki::ramLoadParameters(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r3, r4
	bl       readByte__6StreamFv
	clrlwi   r0, r3, 0x18
	stw      r0, 0x3c(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AC5D8
 * Size:	000258
 */
void GenObjectPiki::generate(Game::Generator*)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stfd     f27, 0xa0(r1)
	psq_st   f27, 168(r1), 0, qr0
	stfd     f26, 0x90(r1)
	psq_st   f26, 152(r1), 0, qr0
	stfd     f25, 0x80(r1)
	psq_st   f25, 136(r1), 0, qr0
	stfd     f24, 0x70(r1)
	psq_st   f24, 120(r1), 0, qr0
	stfd     f23, 0x60(r1)
	psq_st   f23, 104(r1), 0, qr0
	stfd     f22, 0x50(r1)
	psq_st   f22, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	lfs      f1, 0x98(r4)
	lis      r7, sincosTable___5JMath@ha
	lfs      f0, 0xa4(r4)
	lis      r6, __vt__Q24Game15CreatureInitArg@ha
	lis      r5, __vt__Q24Game6GenArg@ha
	lfs      f4, 0x94(r4)
	lfs      f3, 0xa0(r4)
	fadds    f0, f1, f0
	lfs      f26, lbl_80519280@sda21(r2)
	mr       r28, r3
	lfs      f2, 0x9c(r4)
	fadds    f25, f4, f3
	lfs      f1, 0xa8(r4)
	fadds    f23, f26, f0
	lfd      f27, lbl_80519298@sda21(r2)
	fadds    f24, f2, f1
	lfs      f28, lbl_80519284@sda21(r2)
	lfs      f29, lbl_80519288@sda21(r2)
	addi     r31, r7, sincosTable___5JMath@l
	lfs      f30, lbl_8051928C@sda21(r2)
	addi     r26, r6, __vt__Q24Game15CreatureInitArg@l
	lfs      f31, lbl_80519290@sda21(r2)
	addi     r27, r5, __vt__Q24Game6GenArg@l
	li       r29, 0
	lis      r30, 0x4330
	b        lbl_801AC7BC

lbl_801AC6A0:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 0x18(r1)
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f27
	fdivs    f0, f0, f28
	fmuls    f22, f29, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lwz      r0, 0x3c(r28)
	stw      r3, 0x24(r1)
	cmpwi    r0, 2
	stw      r30, 0x20(r1)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f27
	fdivs    f0, f0, f28
	fmuls    f1, f30, f0
	bne      lbl_801AC6FC
	lwz      r0, 0x8c(r28)
	cmpwi    r0, 1
	bne      lbl_801AC6FC
	lfs      f1, lbl_80519280@sda21(r2)

lbl_801AC6FC:
	fmr      f0, f22
	fcmpo    cr0, f22, f26
	bge      lbl_801AC70C
	fneg     f0, f22

lbl_801AC70C:
	fmuls    f0, f0, f31
	fcmpo    cr0, f22, f26
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f0, 4(r3)
	fmuls    f2, f1, f0
	bge      lbl_801AC760
	lfs      f0, lbl_80519294@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f22, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_801AC780

lbl_801AC760:
	fmuls    f0, f22, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_801AC780:
	fmuls    f1, f1, f0
	stw      r26, 8(r1)
	fadds    f0, f2, f24
	mr       r3, r28
	stw      r27, 8(r1)
	addi     r4, r1, 8
	fadds    f1, f1, f25
	stfs     f23, 0x10(r1)
	stfs     f0, 0x14(r1)
	stfs     f1, 0xc(r1)
	lwz      r12, 0xc(r28)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 1

lbl_801AC7BC:
	lwz      r0, 0x64(r28)
	cmpw     r29, r0
	blt      lbl_801AC6A0
	li       r3, 0
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	psq_l    f27, 168(r1), 0, qr0
	lfd      f27, 0xa0(r1)
	psq_l    f26, 152(r1), 0, qr0
	lfd      f26, 0x90(r1)
	psq_l    f25, 136(r1), 0, qr0
	lfd      f25, 0x80(r1)
	psq_l    f24, 120(r1), 0, qr0
	lfd      f24, 0x70(r1)
	psq_l    f23, 104(r1), 0, qr0
	lfd      f23, 0x60(r1)
	psq_l    f22, 88(r1), 0, qr0
	lfd      f22, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AC830
 * Size:	0001B0
 */
void GenObjectPiki::birth(Game::GenArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r0, 0x8c(r3)
	cmpwi    r0, 1
	bne      lbl_801AC914
	lwz      r31, 0x3c(r30)
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r31
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_801AC87C
	li       r3, 0
	b        lbl_801AC9C4

lbl_801AC87C:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r31
	bl       hasMetPikmin__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_801AC898
	li       r3, 0
	b        lbl_801AC9C4

lbl_801AC898:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	beq      lbl_801AC90C
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r30
	addi     r4, r29, 4
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	mr       r4, r31
	bl       changeShape__Q24Game4PikiFi
	mr       r3, r30
	li       r4, 0
	bl       changeHappa__Q24Game4PikiFi
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0(r30)
	lwz      r12, 0x1f8(r12)
	mtctr    r12
	bctrl
	lis      r3, zikatuPikis__Q24Game8GameStat@ha
	mr       r4, r31
	addi     r3, r3, zikatuPikis__Q24Game8GameStat@l
	bl       inc__Q34Game8GameStat11PikiCounterFi

lbl_801AC90C:
	mr       r3, r30
	b        lbl_801AC9C4

lbl_801AC914:
	lwz      r4, playData__4Game@sda21(r13)
	lbz      r0, 0x18(r4)
	cmplwi   r0, 0
	bne      lbl_801AC92C
	li       r3, 0
	b        lbl_801AC9C4

lbl_801AC92C:
	lwz      r12, 0xc(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r30, 0x3c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_801AC9C0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r31
	addi     r4, r29, 4
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r31
	mr       r4, r30
	bl       changeShape__Q24Game4PikiFi
	mr       r3, r31
	li       r4, 0
	bl       changeHappa__Q24Game4PikiFi
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801AC9C0
	lis      r3, lbl_8047F7CC@ha
	li       r4, 0xb8
	addi     r3, r3, lbl_8047F7CC@l
	addi     r5, r2, lbl_805192A0@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801AC9C0:
	mr       r3, r31

lbl_801AC9C4:
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
 * Address:	801AC9E0
 * Size:	000028
 */
void __sinit_genPiki_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B56A8@ha
	stw      r0, lbl_80515A40@sda21(r13)
	stfsu    f0, lbl_804B56A8@l(r3)
	stfs     f0, lbl_80515A44@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
