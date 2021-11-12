#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80495B48
    lbl_80495B48:
        .4byte 0x65667832
        .4byte 0x64426173
        .4byte 0x652E6370
        .4byte 0x70000000
    .global lbl_80495B58
    lbl_80495B58:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q25efx2d12TChasePosDir
    __vt__Q25efx2d12TChasePosDir:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d12TChasePosDirFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q25efx2d12TChasePosDirFv"
        .4byte "@8@execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter"
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q25efx2d12TChasePosDirFv
        .4byte execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter
    .global __vt__Q25efx2d9TChasePos
    __vt__Q25efx2d9TChasePos:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d9TChasePosFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q25efx2d9TChasePosFv"
        .4byte "@8@execute__Q25efx2d9TChasePosFP14JPABaseEmitter"
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q25efx2d9TChasePosFv
        .4byte execute__Q25efx2d9TChasePosFP14JPABaseEmitter
    .global __vt__Q25efx2d9TForeverN
    __vt__Q25efx2d9TForeverN:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d9TForeverNFPQ25efx2d3Arg
        .4byte kill__Q25efx2d9TForeverNFv
        .4byte fade__Q25efx2d9TForeverNFv
        .4byte setGroup__Q25efx2d9TForeverNFUc
    .global __vt__Q25efx2d8TForever
    __vt__Q25efx2d8TForever:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TForeverFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q25efx2d8TForeverFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q25efx2d8TForeverFv
    .global __vt__Q25efx2d8TSimple3
    __vt__Q25efx2d8TSimple3:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple3FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple3Fv
        .4byte fade__Q25efx2d8TSimple3Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q25efx2d8TSimple2
    __vt__Q25efx2d8TSimple2:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple2FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple2Fv
        .4byte fade__Q25efx2d8TSimple2Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q25efx2d8TSimple1
    __vt__Q25efx2d8TSimple1:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple1FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple1Fv
        .4byte fade__Q25efx2d8TSimple1Fv
        .4byte setGroup__Q25efx2d5TBaseFUc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F6D8
    lbl_8051F6D8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	803B9830
 * Size:	000098
 */
void efx2d::TSimple1::create(efx2d::Arg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r4, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	bne      lbl_803B986C
	lis      r3, lbl_80495B48@ha
	lis      r5, lbl_80495B58@ha
	addi     r3, r3, lbl_80495B48@l
	li       r4, 0xa
	addi     r5, r5, lbl_80495B58@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B986C:
	lfs      f0, 0(r31)
	addi     r5, r1, 8
	lwz      r3, particle2dMgr@sda21(r13)
	stfs     f0, 8(r1)
	lfs      f0, 4(r31)
	stfs     f0, 0xc(r1)
	lhz      r4, 8(r30)
	lbz      r6, 5(r30)
	lbz      r7, 4(r30)
	bl       "create__14TParticle2dMgrFUsR10Vector2<f>UcUc"
	stw      r3, 0xc(r30)
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_803B98AC
	li       r3, 0
	b        lbl_803B98B0

lbl_803B98AC:
	li       r3, 1

lbl_803B98B0:
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
 * Address:	803B98C8
 * Size:	0000B0
 */
void efx2d::TSimple2::create(efx2d::Arg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	or.      r28, r4, r4
	mr       r27, r3
	bne      lbl_803B9900
	lis      r3, lbl_80495B48@ha
	lis      r5, lbl_80495B58@ha
	addi     r3, r3, lbl_80495B48@l
	li       r4, 0x19
	addi     r5, r5, lbl_80495B58@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B9900:
	lfs      f0, 0(r28)
	mr       r31, r27
	mr       r30, r27
	li       r29, 0
	stfs     f0, 8(r1)
	lfs      f0, 4(r28)
	stfs     f0, 0xc(r1)

lbl_803B991C:
	lwz      r3, particle2dMgr@sda21(r13)
	addi     r5, r1, 8
	lhz      r4, 8(r31)
	lbz      r6, 5(r27)
	lbz      r7, 4(r27)
	bl       "create__14TParticle2dMgrFUsR10Vector2<f>UcUc"
	stw      r3, 0xc(r30)
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_803B994C
	li       r3, 0
	b        lbl_803B9964

lbl_803B994C:
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 2
	addi     r31, r31, 2
	blt      lbl_803B991C
	li       r3, 1

lbl_803B9964:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9978
 * Size:	0000B0
 */
void efx2d::TSimple3::create(efx2d::Arg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	or.      r28, r4, r4
	mr       r27, r3
	bne      lbl_803B99B0
	lis      r3, lbl_80495B48@ha
	lis      r5, lbl_80495B58@ha
	addi     r3, r3, lbl_80495B48@l
	li       r4, 0x28
	addi     r5, r5, lbl_80495B58@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B99B0:
	lfs      f0, 0(r28)
	mr       r31, r27
	mr       r30, r27
	li       r29, 0
	stfs     f0, 8(r1)
	lfs      f0, 4(r28)
	stfs     f0, 0xc(r1)

lbl_803B99CC:
	lwz      r3, particle2dMgr@sda21(r13)
	addi     r5, r1, 8
	lhz      r4, 8(r31)
	lbz      r6, 5(r27)
	lbz      r7, 4(r27)
	bl       "create__14TParticle2dMgrFUsR10Vector2<f>UcUc"
	stw      r3, 0x10(r30)
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_803B99FC
	li       r3, 0
	b        lbl_803B9A14

lbl_803B99FC:
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 3
	addi     r31, r31, 2
	blt      lbl_803B99CC
	li       r3, 1

lbl_803B9A14:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9A28
 * Size:	0000A4
 */
void efx2d::TForever::create(efx2d::Arg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r4, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	bne      lbl_803B9A64
	lis      r3, lbl_80495B48@ha
	lis      r5, lbl_80495B58@ha
	addi     r3, r3, lbl_80495B48@l
	li       r4, 0x36
	addi     r5, r5, lbl_80495B58@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B9A64:
	lfs      f0, 0(r31)
	stfs     f0, 8(r1)
	lfs      f0, 4(r31)
	stfs     f0, 0xc(r1)
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_803B9A88
	li       r3, 0
	b        lbl_803B9AB4

lbl_803B9A88:
	lwz      r3, particle2dMgr@sda21(r13)
	addi     r5, r1, 8
	lhz      r4, 0xc(r30)
	lbz      r6, 5(r30)
	lbz      r7, 4(r30)
	bl       "create__14TParticle2dMgrFUsR10Vector2<f>UcUc"
	stw      r3, 0x10(r30)
	lwz      r3, 0x10(r30)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_803B9AB4:
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
 * Address:	803B9ACC
 * Size:	00003C
 */
void efx2d::TForever::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, particle2dMgr@sda21(r13)
	lwz      r4, 0x10(r31)
	bl       kill__14TParticle2dMgrFP14JPABaseEmitter
	li       r0, 0
	stw      r0, 0x10(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9B08
 * Size:	00003C
 */
void efx2d::TForever::fade(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, particle2dMgr@sda21(r13)
	lwz      r4, 0x10(r31)
	bl       fade__14TParticle2dMgrFP14JPABaseEmitter
	li       r0, 0
	stw      r0, 0x10(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9B44
 * Size:	000024
 */
void efx2d::TForever::setGlobalScale(float)
{
	/*
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beqlr
	stfs     f1, 0x98(r3)
	stfs     f1, 0x9c(r3)
	stfs     f1, 0xa0(r3)
	stfs     f1, 0xb0(r3)
	stfs     f1, 0xb4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void setGlobalTranslation__Q25efx2d8TForeverFR10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B9B68
 * Size:	000028
 */
void efx2d::TForever::setGlobalEnvColor(JUtility::TColor&)
{
	/*
	lwz      r6, 0x10(r3)
	cmplwi   r6, 0
	beqlr
	lbz      r5, 2(r4)
	lbz      r3, 1(r4)
	lbz      r0, 0(r4)
	stb      r0, 0xbc(r6)
	stb      r3, 0xbd(r6)
	stb      r5, 0xbe(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9B90
 * Size:	000014
 */
void efx2d::TForever::setGlobalAlpha(unsigned char)
{
	/*
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beqlr
	stb      r4, 0xbb(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9BA4
 * Size:	000080
 */
efx2d::TForeverN::TForeverN(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r6, __vt__Q25efx2d7TBaseIF@ha
	lis      r5, __vt__Q25efx2d9TForeverN@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, __vt__Q25efx2d9TForeverN@l
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r6, __vt__Q25efx2d7TBaseIF@l
	stw      r3, 0(r30)
	stw      r0, 0(r30)
	stb      r4, 4(r30)
	lbz      r31, 4(r30)
	mulli    r3, r31, 0x14
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q25efx2d8TForeverFv@ha
	lis      r5, __dt__Q25efx2d8TForeverFv@ha
	addi     r4, r4, __ct__Q25efx2d8TForeverFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q25efx2d8TForeverFv@l
	li       r6, 0x14
	bl       __construct_new_array
	stw      r3, 8(r30)
	mr       r3, r30
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
 * Address:	803B9C24
 * Size:	000050
 */
efx2d::TForever::TForever(void)
{
	/*
	lis      r4, __vt__Q25efx2d7TBaseIF@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q25efx2d7TBaseIF@l
	lis      r6, __vt__Q25efx2d5TBase@ha
	stw      r0, 0(r3)
	addi     r0, r6, __vt__Q25efx2d5TBase@l
	lis      r4, __vt__Q25efx2d8TForever@ha
	li       r6, 0
	stw      r0, 0(r3)
	addi     r4, r4, __vt__Q25efx2d8TForever@l
	addi     r5, r5, __vt__18JPAEmitterCallBack@l
	stb      r6, 4(r3)
	addi     r0, r4, 0x18
	stb      r6, 5(r3)
	stw      r5, 8(r3)
	stw      r4, 0(r3)
	stw      r0, 8(r3)
	sth      r6, 0xc(r3)
	stw      r6, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9C74
 * Size:	000098
 */
void efx2d::TForeverN::create(efx2d::Arg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 1
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_803B9CD8

lbl_803B9CA4:
	clrlwi   r0, r30, 0x18
	lwz      r3, 8(r28)
	mulli    r0, r0, 0x14
	mr       r4, r29
	add      r3, r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803B9CD4
	li       r31, 0

lbl_803B9CD4:
	addi     r30, r30, 1

lbl_803B9CD8:
	lbz      r0, 4(r28)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_803B9CA4
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	803B9D0C
 * Size:	00006C
 */
void efx2d::TForeverN::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_803B9D50

lbl_803B9D2C:
	clrlwi   r0, r31, 0x18
	lwz      r3, 8(r30)
	mulli    r0, r0, 0x14
	add      r3, r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_803B9D50:
	lbz      r0, 4(r30)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_803B9D2C
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
 * Address:	803B9D78
 * Size:	00006C
 */
void efx2d::TForeverN::fade(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_803B9DBC

lbl_803B9D98:
	clrlwi   r0, r31, 0x18
	lwz      r3, 8(r30)
	mulli    r0, r0, 0x14
	add      r3, r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_803B9DBC:
	lbz      r0, 4(r30)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_803B9D98
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
 * Address:	803B9DE4
 * Size:	00007C
 */
void efx2d::TForeverN::setGroup(unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_803B9E34

lbl_803B9E0C:
	clrlwi   r0, r31, 0x18
	lwz      r3, 8(r29)
	mulli    r0, r0, 0x14
	mr       r4, r30
	add      r3, r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_803B9E34:
	lbz      r0, 4(r29)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_803B9E0C
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
 * Address:	........
 * Size:	000050
 */
void efx2d::TForeverN::setGlobalScale(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void setGlobalTranslation__Q25efx2d9TForeverNFR10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void efx2d::TForeverN::setGlobalEnvColor(JUtility::TColor&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B9E60
 * Size:	000040
 */
void efx2d::TForeverN::setGlobalAlpha(unsigned char)
{
	/*
	li       r7, 0
	b        lbl_803B9E8C

lbl_803B9E68:
	clrlwi   r0, r7, 0x18
	lwz      r6, 8(r3)
	mulli    r5, r0, 0x14
	addi     r0, r5, 0x10
	lwzx     r5, r6, r0
	cmplwi   r5, 0
	beq      lbl_803B9E88
	stb      r4, 0xbb(r5)

lbl_803B9E88:
	addi     r7, r7, 1

lbl_803B9E8C:
	lbz      r0, 4(r3)
	clrlwi   r5, r7, 0x18
	cmplw    r5, r0
	blt      lbl_803B9E68
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9EA0
 * Size:	000088
 */
void efx2d::TChasePos::create(efx2d::Arg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_803B9EC8
	li       r3, 0
	b        lbl_803B9F14

lbl_803B9EC8:
	lwz      r3, particle2dMgr@sda21(r13)
	lhz      r4, 0xc(r31)
	lwz      r5, 0x14(r31)
	lbz      r6, 5(r31)
	lbz      r7, 4(r31)
	bl       "create__14TParticle2dMgrFUsR10Vector2<f>UcUc"
	stw      r3, 0x10(r31)
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_803B9F08
	cmplwi   r31, 0
	mr       r0, r31
	beq      lbl_803B9F00
	addi     r0, r31, 8

lbl_803B9F00:
	stw      r0, 0xec(r3)
	b        lbl_803B9F10

lbl_803B9F08:
	li       r3, 0
	b        lbl_803B9F14

lbl_803B9F10:
	li       r3, 1

lbl_803B9F14:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9F28
 * Size:	000078
 */
void efx2d::TChasePos::execute(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	bne      lbl_803B9F6C
	lis      r3, lbl_80495B48@ha
	lis      r5, lbl_80495B58@ha
	addi     r3, r3, lbl_80495B48@l
	li       r4, 0xd6
	addi     r5, r5, lbl_80495B58@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B9F6C:
	lwz      r3, 0x14(r30)
	lfs      f0, lbl_8051F6D8@sda21(r2)
	lfs      f2, 4(r3)
	lfs      f1, 0(r3)
	stfs     f1, 0xa4(r31)
	stfs     f2, 0xa8(r31)
	stfs     f0, 0xac(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B9FA0
 * Size:	000088
 */
void efx2d::TChasePosDir::create(efx2d::Arg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_803B9FC8
	li       r3, 0
	b        lbl_803BA014

lbl_803B9FC8:
	lwz      r3, particle2dMgr@sda21(r13)
	lhz      r4, 0xc(r31)
	lwz      r5, 0x14(r31)
	lbz      r6, 5(r31)
	lbz      r7, 4(r31)
	bl       "create__14TParticle2dMgrFUsR10Vector2<f>UcUc"
	stw      r3, 0x10(r31)
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_803BA008
	cmplwi   r31, 0
	mr       r0, r31
	beq      lbl_803BA000
	addi     r0, r31, 8

lbl_803BA000:
	stw      r0, 0xec(r3)
	b        lbl_803BA010

lbl_803BA008:
	li       r3, 0
	b        lbl_803BA014

lbl_803BA010:
	li       r3, 1

lbl_803BA014:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BA028
 * Size:	0000B8
 */
void efx2d::TChasePosDir::execute(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	bne      lbl_803BA06C
	lis      r3, lbl_80495B48@ha
	lis      r5, lbl_80495B58@ha
	addi     r3, r3, lbl_80495B48@l
	li       r4, 0xf4
	addi     r5, r5, lbl_80495B58@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803BA06C:
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_803BA094
	lis      r3, lbl_80495B48@ha
	lis      r5, lbl_80495B58@ha
	addi     r3, r3, lbl_80495B48@l
	li       r4, 0xf5
	addi     r5, r5, lbl_80495B58@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803BA094:
	lwz      r4, 0x14(r30)
	lwz      r3, 0x18(r30)
	lfs      f2, 4(r4)
	lfs      f3, 0(r3)
	lfs      f4, 4(r3)
	lfs      f1, 0(r4)
	lfs      f0, lbl_8051F6D8@sda21(r2)
	stfs     f1, 0xa4(r31)
	stfs     f2, 0xa8(r31)
	stfs     f0, 0xac(r31)
	stfs     f3, 0x18(r31)
	stfs     f4, 0x1c(r31)
	stfs     f0, 0x20(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BA0E0
 * Size:	000084
 */
efx2d::TChasePosDir::~TChasePosDir(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803BA148
	lis      r3, __vt__Q25efx2d12TChasePosDir@ha
	addi     r3, r3, __vt__Q25efx2d12TChasePosDir@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x18
	stw      r0, 8(r30)
	beq      lbl_803BA138
	lis      r4, __vt__Q25efx2d8TForever@ha
	addi     r3, r30, 8
	addi     r5, r4, __vt__Q25efx2d8TForever@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x18
	stw      r0, 8(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_803BA138:
	extsh.   r0, r31
	ble      lbl_803BA148
	mr       r3, r30
	bl       __dl__FPv

lbl_803BA148:
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
 * Address:	803BA164
 * Size:	000008
 */
@8 @efx2d::TForever::~TForever(void)
{
	/*
	addi     r3, r3, -8
	b        __dt__Q25efx2d8TForeverFv
	*/
}

/*
 * --INFO--
 * Address:	803BA16C
 * Size:	000008
 */
void @8 @efx2d::TChasePos::execute(JPABaseEmitter*)
{
	/*
	addi     r3, r3, -8
	b        execute__Q25efx2d9TChasePosFP14JPABaseEmitter
	*/
}

/*
 * --INFO--
 * Address:	803BA174
 * Size:	000008
 */
@8 @efx2d::TChasePos::~TChasePos(void)
{
	/*
	addi     r3, r3, -8
	b        __dt__Q25efx2d9TChasePosFv
	*/
}

/*
 * --INFO--
 * Address:	803BA17C
 * Size:	000008
 */
void @8 @efx2d::TChasePosDir::execute(JPABaseEmitter*)
{
	/*
	addi     r3, r3, -8
	b        execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter
	*/
}

/*
 * --INFO--
 * Address:	803BA184
 * Size:	000008
 */
@8 @efx2d::TChasePosDir::~TChasePosDir(void)
{
	/*
	addi     r3, r3, -8
	b        __dt__Q25efx2d12TChasePosDirFv
	*/
}
