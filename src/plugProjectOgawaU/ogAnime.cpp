#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048DE50
    lbl_8048DE50:
        .asciz "ogAnime.cpp"
    .global lbl_8048DE5C
    lbl_8048DE5C:
        .asciz "no name resource (%s) \n"
        .asciz "anim group is overflow!!\n"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen8AnimPane
    __vt__Q32og6Screen8AnimPane:
        .4byte 0
        .4byte 0
        .4byte start__Q32og6Screen8AnimPaneFv
        .4byte moveAnim__Q32og6Screen8AnimPaneFv
    .global __vt__Q32og6Screen10AnimScreen
    __vt__Q32og6Screen10AnimScreen:
        .4byte 0
        .4byte 0
        .4byte start__Q32og6Screen10AnimScreenFv
        .4byte moveAnim__Q32og6Screen10AnimScreenFv
    .global __vt__Q32og6Screen12AnimBaseBase
    __vt__Q32og6Screen12AnimBaseBase:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D598
    lbl_8051D598:
        .4byte 0x00000000
    .global lbl_8051D59C
    lbl_8051D59C:
        .float 1.0
    .global lbl_8051D5A0
    lbl_8051D5A0:
        .4byte 0x3C888889
        .4byte 0x00000000
    .global lbl_8051D5A8
    lbl_8051D5A8:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000088
	 */
	AnimBaseBase::AnimBaseBase(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000020
	 */
	void AnimBaseBase::setArea(float, float)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	00010C
	 */
	void AnimBaseBase::init(JKRArchive*, char*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80304CB0
	 * Size:	000010
	 */
	void AnimBaseBase::start(float)
	{
		/*
	li       r0, 1
	stb      r0, 8(r3)
	stfs     f1, 0xc(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000024
	 */
	void AnimBaseBase::setAllArea(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80304CC0
	 * Size:	000150
	 */
	void AnimBaseBase::updateSub(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 1
	stw      r30, 8(r1)
	mr       r30, r3
	stb      r4, 0x39(r3)
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_80304CF8
	stb      r4, 0x10(r30)
	b        lbl_80304DD8

lbl_80304CF8:
	lfs      f1, 0x20(r30)
	lfs      f0, 0x28(r30)
	lfs      f2, 0x24(r30)
	fmuls    f1, f1, f0
	lfs      f0, 0x18(r30)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x18(r30)
	lfs      f0, 0x18(r30)
	lfs      f1, 0x30(r30)
	fcmpo    cr0, f0, f1
	ble      lbl_80304D7C
	lbz      r0, 0x38(r30)
	cmplwi   r0, 0
	beq      lbl_80304D60
	fsubs    f1, f0, f1
	lfs      f0, 0x34(r30)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80304D48
	lfs      f1, lbl_8051D598@sda21(r2)

lbl_80304D48:
	lfs      f0, 0x2c(r30)
	li       r0, 1
	fadds    f0, f0, f1
	stfs     f0, 0x18(r30)
	stb      r0, 0x39(r30)
	b        lbl_80304DD8

lbl_80304D60:
	stfs     f1, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r31, 0
	b        lbl_80304DD8

lbl_80304D7C:
	lfs      f2, 0x2c(r30)
	fcmpo    cr0, f0, f2
	bge      lbl_80304DD8
	lbz      r0, 0x38(r30)
	cmplwi   r0, 0
	beq      lbl_80304DC0
	fsubs    f2, f2, f0
	lfs      f0, 0x34(r30)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80304DAC
	lfs      f2, lbl_8051D598@sda21(r2)

lbl_80304DAC:
	fsubs    f0, f1, f2
	li       r0, 1
	stfs     f0, 0x18(r30)
	stb      r0, 0x39(r30)
	b        lbl_80304DD8

lbl_80304DC0:
	stfs     f2, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r31, 0

lbl_80304DD8:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80304DF4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80304DF4:
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
	 * Address:	80304E10
	 * Size:	000078
	 */
	void AnimBaseBase::update(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80304E74
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0xc(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_8051D598@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0xc(r3)
	lfs      f1, 0xc(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80304E6C
	li       r0, 0
	stb      r0, 8(r3)
	stfs     f0, 0xc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80304E6C:
	li       r3, 1
	b        lbl_80304E78

lbl_80304E74:
	bl       updateSub__Q32og6Screen12AnimBaseBaseFv

lbl_80304E78:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80304E88
	 * Size:	00009C
	 */
	AnimScreen::AnimScreen(void)
	{
		/*
	lis      r5, __vt__Q32og6Screen12AnimBaseBase@ha
	lis      r4, __vt__Q32og6Screen10AnimScreen@ha
	addi     r0, r5, __vt__Q32og6Screen12AnimBaseBase@l
	li       r7, 0
	stw      r0, 0(r3)
	li       r6, 1
	lfs      f3, lbl_8051D598@sda21(r2)
	li       r5, 0xff
	stw      r7, 4(r3)
	addi     r0, r4, __vt__Q32og6Screen10AnimScreen@l
	lfs      f1, lbl_8051D59C@sda21(r2)
	stfs     f3, 0x18(r3)
	lfs      f0, lbl_8051D5A0@sda21(r2)
	stfs     f1, 0x1c(r3)
	stfs     f1, 0x20(r3)
	stfs     f1, 0x24(r3)
	stb      r6, 0x38(r3)
	stb      r7, 0x39(r3)
	stfs     f3, 0x2c(r3)
	stfs     f1, 0x30(r3)
	lfs      f2, 0x30(r3)
	lfs      f1, 0x2c(r3)
	fsubs    f1, f2, f1
	stfs     f1, 0x34(r3)
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x54(r4)
	fdivs    f0, f1, f0
	stfs     f0, 0x28(r3)
	stw      r7, 0x14(r3)
	stw      r7, 0x3c(r3)
	stb      r7, 8(r3)
	stfs     f3, 0xc(r3)
	stb      r6, 0x10(r3)
	stb      r5, 0x11(r3)
	stb      r7, 0x12(r3)
	stw      r0, 0(r3)
	stw      r7, 0x40(r3)
	stw      r6, 4(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80304F24
	 * Size:	000164
	 */
	void AnimScreen::init(JKRArchive*, J2DScreen*, char*)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r6
	stw      r28, 0x3c(r3)
	mr       r3, r28
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r29, r3, r3
	bne      lbl_80304F80
	lis      r5, lbl_8048DE50@ha
	lis      r4, lbl_8048DE5C@ha
	addi     r3, r5, lbl_8048DE50@l
	mr       r6, r28
	addi     r5, r4, lbl_8048DE5C@l
	li       r4, 0x57
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80304F80:
	mr       r3, r29
	bl       load__20J2DAnmLoaderDataBaseFPCv
	stw      r3, 0x14(r30)
	lis      r0, 0x4330
	li       r3, 4
	lfd      f1, lbl_8051D5A8@sda21(r2)
	lwz      r5, 0x14(r30)
	li       r4, 0
	stw      r0, 8(r1)
	oris     r3, r3, 4
	lha      r5, 6(r5)
	li       r0, 1
	lfs      f2, lbl_8051D598@sda21(r2)
	addi     r5, r5, -1
	xoris    r5, r5, 0x8000
	stw      r5, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x1c(r30)
	stfs     f2, 0x2c(r30)
	lfs      f0, 0x1c(r30)
	stfs     f0, 0x30(r30)
	lfs      f1, 0x30(r30)
	lfs      f0, 0x2c(r30)
	fsubs    f0, f1, f0
	stfs     f0, 0x34(r30)
	stb      r4, 8(r30)
	stfs     f2, 0xc(r30)
	stb      r0, 0x10(r30)
	mtspr    0x392, r3
	li       r3, 5
	oris     r3, r3, 5
	mtspr    0x393, r3
	li       r3, 6
	oris     r3, r3, 6
	mtspr    0x394, r3
	li       r3, 7
	oris     r3, r3, 7
	mtspr    0x395, r3
	lwz      r29, 0x14(r30)
	stw      r31, 0x40(r30)
	mr       r4, r29
	lwz      r3, 0x40(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
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
	 * Address:	80305088
	 * Size:	000090
	 */
	void AnimScreen::start(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x40(r3)
	cmplwi   r0, 0
	beq      lbl_80305108
	li       r5, 0
	lfs      f2, lbl_8051D598@sda21(r2)
	stb      r5, 8(r3)
	li       r0, 1
	stfs     f2, 0xc(r3)
	stb      r0, 0x10(r3)
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80305104
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0xc(r3)
	lfs      f0, 0x54(r4)
	fsubs    f0, f1, f0
	stfs     f0, 0xc(r3)
	lfs      f0, 0xc(r3)
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_80305108
	stb      r5, 8(r3)
	stfs     f2, 0xc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80305108

lbl_80305104:
	bl       updateSub__Q32og6Screen12AnimBaseBaseFv

lbl_80305108:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305118
	 * Size:	000060
	 */
	void AnimScreen::moveAnim(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f0, 0x18(r3)
	lwz      r3, 0x14(r3)
	stfs     f0, 8(r3)
	lwz      r3, 0x40(r31)
	bl       animation__9J2DScreenFv
	lbz      r0, 0x12(r31)
	cmplwi   r0, 0
	beq      lbl_80305164
	lwz      r3, 0x40(r31)
	lbz      r4, 0x11(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_80305164:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305178
	 * Size:	0000A0
	 */
	AnimPane::AnimPane(void)
	{
		/*
	lis      r5, __vt__Q32og6Screen12AnimBaseBase@ha
	lis      r4, __vt__Q32og6Screen8AnimPane@ha
	addi     r0, r5, __vt__Q32og6Screen12AnimBaseBase@l
	li       r8, 0
	stw      r0, 0(r3)
	li       r7, 1
	lfs      f3, lbl_8051D598@sda21(r2)
	li       r5, 0xff
	stw      r8, 4(r3)
	addi     r4, r4, __vt__Q32og6Screen8AnimPane@l
	lfs      f1, lbl_8051D59C@sda21(r2)
	li       r0, 2
	stfs     f3, 0x18(r3)
	lfs      f0, lbl_8051D5A0@sda21(r2)
	stfs     f1, 0x1c(r3)
	stfs     f1, 0x20(r3)
	stfs     f1, 0x24(r3)
	stb      r7, 0x38(r3)
	stb      r8, 0x39(r3)
	stfs     f3, 0x2c(r3)
	stfs     f1, 0x30(r3)
	lfs      f2, 0x30(r3)
	lfs      f1, 0x2c(r3)
	fsubs    f1, f2, f1
	stfs     f1, 0x34(r3)
	lwz      r6, sys@sda21(r13)
	lfs      f1, 0x54(r6)
	fdivs    f0, f1, f0
	stfs     f0, 0x28(r3)
	stw      r8, 0x14(r3)
	stw      r8, 0x3c(r3)
	stb      r8, 8(r3)
	stfs     f3, 0xc(r3)
	stb      r7, 0x10(r3)
	stb      r5, 0x11(r3)
	stb      r8, 0x12(r3)
	stw      r4, 0(r3)
	stw      r8, 0x40(r3)
	stw      r0, 4(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305218
	 * Size:	000150
	 */
	void AnimPane::init(JKRArchive*, J2DScreen*, unsigned long long, char*)
	{
		/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r26, r9
	mr       r28, r3
	mr       r29, r5
	mr       r31, r7
	mr       r30, r8
	stw      r26, 0x3c(r3)
	mr       r3, r26
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_80305270
	lis      r5, lbl_8048DE50@ha
	lis      r4, lbl_8048DE5C@ha
	addi     r3, r5, lbl_8048DE50@l
	mr       r6, r26
	addi     r5, r4, lbl_8048DE5C@l
	li       r4, 0x57
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80305270:
	mr       r3, r27
	bl       load__20J2DAnmLoaderDataBaseFPCv
	stw      r3, 0x14(r28)
	lis      r0, 0x4330
	li       r3, 4
	lfd      f1, lbl_8051D5A8@sda21(r2)
	lwz      r5, 0x14(r28)
	li       r4, 0
	stw      r0, 8(r1)
	oris     r3, r3, 4
	lha      r5, 6(r5)
	li       r0, 1
	lfs      f2, lbl_8051D598@sda21(r2)
	addi     r5, r5, -1
	xoris    r5, r5, 0x8000
	stw      r5, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x1c(r28)
	stfs     f2, 0x2c(r28)
	lfs      f0, 0x1c(r28)
	stfs     f0, 0x30(r28)
	lfs      f1, 0x30(r28)
	lfs      f0, 0x2c(r28)
	fsubs    f0, f1, f0
	stfs     f0, 0x34(r28)
	stb      r4, 8(r28)
	stfs     f2, 0xc(r28)
	stb      r0, 0x10(r28)
	mtspr    0x392, r3
	li       r3, 5
	oris     r3, r3, 5
	mtspr    0x393, r3
	li       r3, 6
	oris     r3, r3, 6
	mtspr    0x394, r3
	li       r3, 7
	oris     r3, r3, 7
	mtspr    0x395, r3
	lwz      r27, 0x14(r28)
	mr       r3, r29
	mr       r6, r30
	mr       r5, r31
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x40(r28)
	mr       r4, r27
	lwz      r3, 0x40(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	mr       r4, r29
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305368
	 * Size:	000090
	 */
	void AnimPane::start(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x40(r3)
	cmplwi   r0, 0
	beq      lbl_803053E8
	li       r5, 0
	lfs      f2, lbl_8051D598@sda21(r2)
	stb      r5, 8(r3)
	li       r0, 1
	stfs     f2, 0xc(r3)
	stb      r0, 0x10(r3)
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_803053E4
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0xc(r3)
	lfs      f0, 0x54(r4)
	fsubs    f0, f1, f0
	stfs     f0, 0xc(r3)
	lfs      f0, 0xc(r3)
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_803053E8
	stb      r5, 8(r3)
	stfs     f2, 0xc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_803053E8

lbl_803053E4:
	bl       updateSub__Q32og6Screen12AnimBaseBaseFv

lbl_803053E8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803053F8
	 * Size:	000060
	 */
	void AnimPane::moveAnim(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f0, 0x18(r3)
	lwz      r3, 0x14(r3)
	stfs     f0, 8(r3)
	lwz      r3, 0x40(r31)
	bl       animationTransform__7J2DPaneFv
	lbz      r0, 0x12(r31)
	cmplwi   r0, 0
	beq      lbl_80305444
	lwz      r3, 0x40(r31)
	lbz      r4, 0x11(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_80305444:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305458
	 * Size:	000090
	 */
	AnimGroup::AnimGroup(int)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	slwi     r3, r4, 2
	bl       __nwa__FUl
	stw      r3, 0(r30)
	li       r4, 0
	mr       r5, r4
	li       r6, 0
	stw      r4, 4(r30)
	stw      r31, 8(r30)
	b        lbl_803054A8

lbl_80305498:
	lwz      r3, 0(r30)
	addi     r6, r6, 1
	stwx     r4, r3, r5
	addi     r5, r5, 4

lbl_803054A8:
	lwz      r0, 8(r30)
	cmpw     r6, r0
	blt      lbl_80305498
	li       r0, 0
	lfs      f0, lbl_8051D598@sda21(r2)
	stb      r0, 0xc(r30)
	mr       r3, r30
	stfs     f0, 0x10(r30)
	stfs     f0, 0x14(r30)
	stfs     f0, 0x18(r30)
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
	 * Address:	........
	 * Size:	000064
	 */
	void AnimGroup::setAnim(og::Screen::AnimBaseBase*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	803054E8
	 * Size:	0001C0
	 */
	void AnimGroup::update(void)
	{
		/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	li       r31, 0
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	li       r29, 0
	stw      r28, 0x20(r1)
	mr       r28, r3
	b        lbl_80305620

lbl_80305518:
	lwz      r3, 0(r28)
	lwzx     r3, r3, r31
	cmplwi   r3, 0
	beq      lbl_80305618
	lwz      r0, 4(r3)
	li       r4, 1
	cmpwi    r0, 2
	beq      lbl_803055AC
	bge      lbl_8030560C
	cmpwi    r0, 1
	bge      lbl_80305548
	b        lbl_8030560C

lbl_80305548:
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_803055A0
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0xc(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_8051D598@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0xc(r3)
	lfs      f1, 0xc(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80305598
	li       r0, 0
	stb      r0, 8(r3)
	stfs     f0, 0xc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80305598:
	li       r3, 1
	b        lbl_803055A4

lbl_803055A0:
	bl       updateSub__Q32og6Screen12AnimBaseBaseFv

lbl_803055A4:
	mr       r4, r3
	b        lbl_8030560C

lbl_803055AC:
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80305604
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0xc(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_8051D598@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0xc(r3)
	lfs      f1, 0xc(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803055FC
	li       r0, 0
	stb      r0, 8(r3)
	stfs     f0, 0xc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_803055FC:
	li       r3, 1
	b        lbl_80305608

lbl_80305604:
	bl       updateSub__Q32og6Screen12AnimBaseBaseFv

lbl_80305608:
	mr       r4, r3

lbl_8030560C:
	clrlwi.  r0, r4, 0x18
	beq      lbl_80305618
	li       r30, 1

lbl_80305618:
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_80305620:
	lwz      r0, 8(r28)
	cmpw     r29, r0
	blt      lbl_80305518
	lbz      r0, 0xc(r28)
	cmplwi   r0, 0
	beq      lbl_80305684
	mr       r3, r28
	bl       getFrame__Q32og6Screen9AnimGroupFv
	lfs      f0, 0x10(r28)
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f1, 8(r1)
	stfd     f0, 0x10(r1)
	lwz      r3, 0xc(r1)
	lwz      r0, 0x14(r1)
	cmpw     r3, r0
	bne      lbl_80305684
	lfs      f1, 0x14(r28)
	mr       r3, r28
	lfs      f2, 0x18(r28)
	bl       setArea__Q32og6Screen9AnimGroupFff
	mr       r3, r28
	bl       start__Q32og6Screen9AnimGroupFv
	li       r0, 0
	stb      r0, 0xc(r28)

lbl_80305684:
	lwz      r0, 0x34(r1)
	mr       r3, r30
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803056A8
	 * Size:	00005C
	 */
	void AnimGroup::setSpeed(float)
	{
		/*
	li       r6, 0
	li       r5, 0
	b        lbl_803056F4

lbl_803056B4:
	lwz      r4, 0(r3)
	lwzx     r4, r4, r5
	cmplwi   r4, 0
	beq      lbl_803056EC
	lwz      r0, 4(r4)
	cmpwi    r0, 2
	beq      lbl_803056E8
	bge      lbl_803056EC
	cmpwi    r0, 1
	bge      lbl_803056E0
	b        lbl_803056EC

lbl_803056E0:
	stfs     f1, 0x20(r4)
	b        lbl_803056EC

lbl_803056E8:
	stfs     f1, 0x20(r4)

lbl_803056EC:
	addi     r5, r5, 4
	addi     r6, r6, 1

lbl_803056F4:
	lwz      r0, 8(r3)
	cmpw     r6, r0
	blt      lbl_803056B4
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305704
	 * Size:	00005C
	 */
	void AnimGroup::setRepeat(bool)
	{
		/*
	li       r7, 0
	li       r6, 0
	b        lbl_80305750

lbl_80305710:
	lwz      r5, 0(r3)
	lwzx     r5, r5, r6
	cmplwi   r5, 0
	beq      lbl_80305748
	lwz      r0, 4(r5)
	cmpwi    r0, 2
	beq      lbl_80305744
	bge      lbl_80305748
	cmpwi    r0, 1
	bge      lbl_8030573C
	b        lbl_80305748

lbl_8030573C:
	stb      r4, 0x38(r5)
	b        lbl_80305748

lbl_80305744:
	stb      r4, 0x38(r5)

lbl_80305748:
	addi     r6, r6, 4
	addi     r7, r7, 1

lbl_80305750:
	lwz      r0, 8(r3)
	cmpw     r7, r0
	blt      lbl_80305710
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305760
	 * Size:	00005C
	 */
	void AnimGroup::setFrame(float)
	{
		/*
	li       r6, 0
	li       r5, 0
	b        lbl_803057AC

lbl_8030576C:
	lwz      r4, 0(r3)
	lwzx     r4, r4, r5
	cmplwi   r4, 0
	beq      lbl_803057A4
	lwz      r0, 4(r4)
	cmpwi    r0, 2
	beq      lbl_803057A0
	bge      lbl_803057A4
	cmpwi    r0, 1
	bge      lbl_80305798
	b        lbl_803057A4

lbl_80305798:
	stfs     f1, 0x18(r4)
	b        lbl_803057A4

lbl_803057A0:
	stfs     f1, 0x18(r4)

lbl_803057A4:
	addi     r5, r5, 4
	addi     r6, r6, 1

lbl_803057AC:
	lwz      r0, 8(r3)
	cmpw     r6, r0
	blt      lbl_8030576C
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000040
	 */
	void AnimGroup::setAlpha(unsigned char)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	803057BC
	 * Size:	000054
	 */
	void AnimGroup::setAllArea(void)
	{
		/*
	lfs      f2, lbl_8051D598@sda21(r2)
	li       r6, 0
	li       r5, 0
	b        lbl_80305800

lbl_803057CC:
	lwz      r4, 0(r3)
	lwzx     r4, r4, r5
	cmplwi   r4, 0
	beq      lbl_803057F8
	stfs     f2, 0x2c(r4)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x30(r4)
	lfs      f1, 0x30(r4)
	lfs      f0, 0x2c(r4)
	fsubs    f0, f1, f0
	stfs     f0, 0x34(r4)

lbl_803057F8:
	addi     r5, r5, 4
	addi     r6, r6, 1

lbl_80305800:
	lwz      r0, 8(r3)
	cmpw     r6, r0
	blt      lbl_803057CC
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305810
	 * Size:	000020
	 */
	void AnimGroup::getFrame(void)
	{
		/*
	lwz      r0, 4(r3)
	lfs      f1, lbl_8051D598@sda21(r2)
	cmpwi    r0, 0
	blelr
	lwz      r3, 0(r3)
	lwz      r3, 0(r3)
	lfs      f1, 0x18(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305830
	 * Size:	000088
	 */
	void AnimGroup::setArea(float, float)
	{
		/*
	fsubs    f0, f2, f1
	li       r6, 0
	li       r5, 0
	b        lbl_803058A8

lbl_80305840:
	lwz      r4, 0(r3)
	lwzx     r4, r4, r5
	cmplwi   r4, 0
	beq      lbl_803058A0
	lwz      r0, 4(r4)
	cmpwi    r0, 2
	beq      lbl_80305888
	bge      lbl_803058A0
	cmpwi    r0, 1
	bge      lbl_8030586C
	b        lbl_803058A0

lbl_8030586C:
	stfs     f1, 0x2c(r4)
	li       r0, 1
	stfs     f2, 0x30(r4)
	stfs     f0, 0x34(r4)
	stfs     f1, 0x18(r4)
	stb      r0, 0x10(r4)
	b        lbl_803058A0

lbl_80305888:
	stfs     f1, 0x2c(r4)
	li       r0, 1
	stfs     f2, 0x30(r4)
	stfs     f0, 0x34(r4)
	stfs     f1, 0x18(r4)
	stb      r0, 0x10(r4)

lbl_803058A0:
	addi     r5, r5, 4
	addi     r6, r6, 1

lbl_803058A8:
	lwz      r0, 8(r3)
	cmpw     r6, r0
	blt      lbl_80305840
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803058B8
	 * Size:	0000A8
	 */
	void AnimGroup::start(void)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80305938

lbl_803058E0:
	lwz      r3, 0(r29)
	lwzx     r3, r3, r31
	cmplwi   r3, 0
	beq      lbl_80305930
	lwz      r0, 4(r3)
	cmpwi    r0, 2
	beq      lbl_80305920
	bge      lbl_80305930
	cmpwi    r0, 1
	bge      lbl_8030590C
	b        lbl_80305930

lbl_8030590C:
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80305930

lbl_80305920:
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80305930:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80305938:
	lwz      r0, 8(r29)
	cmpw     r30, r0
	blt      lbl_803058E0
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
	 * Address:	80305960
	 * Size:	000018
	 */
	void AnimGroup::reservAnim(float, float, float)
	{
		/*
	li       r0, 1
	stb      r0, 0xc(r3)
	stfs     f1, 0x10(r3)
	stfs     f2, 0x14(r3)
	stfs     f3, 0x18(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305978
	 * Size:	000020
	 */
	void AnimGroup::getLastFrame(void)
	{
		/*
	lwz      r0, 4(r3)
	lfs      f1, lbl_8051D598@sda21(r2)
	cmpwi    r0, 0
	blelr
	lwz      r3, 0(r3)
	lwz      r3, 0(r3)
	lfs      f1, 0x1c(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305998
	 * Size:	000254
	 */
	void registAnimGroupScreen(og::Screen::AnimGroup*, JKRArchive*, J2DScreen*,
	                           char*, float)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x40(r1)
		  mflr      r0
		  stw       r0, 0x44(r1)
		  stfd      f31, 0x30(r1)
		  psq_st    f31,0x38(r1),0,0
		  stmw      r26, 0x18(r1)
		  fmr       f31, f1
		  lis       r7, 0x8049
		  mr        r27, r3
		  mr        r26, r4
		  mr        r28, r5
		  mr        r29, r6
		  subi      r31, r7, 0x21B0
		  li        r3, 0x44
		  bl        -0x2E1B2C
		  mr.       r30, r3
		  beq-      .loc_0xDC
		  lis       r5, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r5, 0x7E08
		  li        r7, 0
		  stw       r0, 0x0(r30)
		  li        r6, 0x1
		  lfs       f3, -0xDC8(r2)
		  li        r5, 0xFF
		  stw       r7, 0x4(r30)
		  addi      r0, r4, 0x7DF8
		  lfs       f1, -0xDC4(r2)
		  stfs      f3, 0x18(r30)
		  lfs       f0, -0xDC0(r2)
		  stfs      f1, 0x1C(r30)
		  stfs      f1, 0x20(r30)
		  stfs      f1, 0x24(r30)
		  stb       r6, 0x38(r30)
		  stb       r7, 0x39(r30)
		  stfs      f3, 0x2C(r30)
		  stfs      f1, 0x30(r30)
		  lfs       f2, 0x30(r30)
		  lfs       f1, 0x2C(r30)
		  fsubs     f1, f2, f1
		  stfs      f1, 0x34(r30)
		  lwz       r4, -0x6514(r13)
		  lfs       f1, 0x54(r4)
		  fdivs     f0, f1, f0
		  stfs      f0, 0x28(r30)
		  stw       r7, 0x14(r30)
		  stw       r7, 0x3C(r30)
		  stb       r7, 0x8(r30)
		  stfs      f3, 0xC(r30)
		  stb       r6, 0x10(r30)
		  stb       r5, 0x11(r30)
		  stb       r7, 0x12(r30)
		  stw       r0, 0x0(r30)
		  stw       r7, 0x40(r30)
		  stw       r6, 0x4(r30)

		.loc_0xDC:
		  stw       r29, 0x3C(r30)
		  mr        r3, r29
		  mr        r4, r26
		  bl        -0x2E2A68
		  mr.       r26, r3
		  bne-      .loc_0x10C
		  mr        r6, r29
		  addi      r3, r31, 0
		  addi      r5, r31, 0xC
		  li        r4, 0x57
		  crclr     6, 0x6
		  bl        -0x2DB460

		.loc_0x10C:
		  mr        r3, r26
		  bl        -0x2BE18C
		  stw       r3, 0x14(r30)
		  lis       r0, 0x4330
		  li        r3, 0x4
		  lfd       f1, -0xDB8(r2)
		  lwz       r5, 0x14(r30)
		  li        r4, 0
		  stw       r0, 0x8(r1)
		  oris      r3, r3, 0x4
		  lha       r5, 0x6(r5)
		  li        r0, 0x1
		  lfs       f2, -0xDC8(r2)
		  subi      r5, r5, 0x1
		  xoris     r5, r5, 0x8000
		  stw       r5, 0xC(r1)
		  lfd       f0, 0x8(r1)
		  fsubs     f0, f0, f1
		  stfs      f0, 0x1C(r30)
		  stfs      f2, 0x2C(r30)
		  lfs       f0, 0x1C(r30)
		  stfs      f0, 0x30(r30)
		  lfs       f1, 0x30(r30)
		  lfs       f0, 0x2C(r30)
		  fsubs     f0, f1, f0
		  stfs      f0, 0x34(r30)
		  stb       r4, 0x8(r30)
		  stfs      f2, 0xC(r30)
		  stb       r0, 0x10(r30)
		  mtspr     914, r3
		  li        r3, 0x5
		  oris      r3, r3, 0x5
		  mtspr     915, r3
		  li        r3, 0x6
		  oris      r3, r3, 0x6
		  mtspr     916, r3
		  li        r3, 0x7
		  oris      r3, r3, 0x7
		  mtspr     917, r3
		  lwz       r26, 0x14(r30)
		  stw       r28, 0x40(r30)
		  mr        r4, r26
		  lwz       r3, 0x40(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r26
		  mr        r4, r28
		  lwz       r12, 0x0(r26)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r30
		  lwz       r12, 0x0(r30)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  stfs      f31, 0x24(r30)
		  lwz       r5, 0x4(r27)
		  lwz       r0, 0x8(r27)
		  cmpw      r5, r0
		  blt-      .loc_0x220
		  addi      r3, r31, 0
		  addi      r5, r31, 0x24
		  li        r4, 0x143
		  crclr     6, 0x6
		  bl        -0x2DB570
		  b         .loc_0x238

		.loc_0x220:
		  lwz       r4, 0x0(r27)
		  rlwinm    r0,r5,2,0,29
		  stwx      r30, r4, r0
		  lwz       r4, 0x4(r27)
		  addi      r0, r4, 0x1
		  stw       r0, 0x4(r27)

		.loc_0x238:
		  psq_l     f31,0x38(r1),0,0
		  lfd       f31, 0x30(r1)
		  lmw       r26, 0x18(r1)
		  lwz       r0, 0x44(r1)
		  mtlr      r0
		  addi      r1, r1, 0x40
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305BEC
	 * Size:	00025C
	 */
	void registAnimGroupPane(og::Screen::AnimGroup*, JKRArchive*, J2DScreen*,
	                         unsigned long long, char*, float)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x40(r1)
		  mflr      r0
		  stw       r0, 0x44(r1)
		  stfd      f31, 0x30(r1)
		  psq_st    f31,0x38(r1),0,0
		  stmw      r24, 0x10(r1)
		  fmr       f31, f1
		  lis       r6, 0x8049
		  mr        r24, r3
		  mr        r25, r4
		  mr        r26, r5
		  mr        r28, r7
		  mr        r27, r8
		  mr        r29, r9
		  subi      r30, r6, 0x21B0
		  li        r3, 0x44
		  bl        -0x2E1D88
		  mr.       r31, r3
		  beq-      .loc_0xE8
		  lis       r5, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r5, 0x7E08
		  li        r8, 0
		  stw       r0, 0x0(r31)
		  li        r7, 0x1
		  lfs       f3, -0xDC8(r2)
		  li        r5, 0xFF
		  stw       r8, 0x4(r31)
		  addi      r4, r4, 0x7DE8
		  lfs       f1, -0xDC4(r2)
		  li        r0, 0x2
		  stfs      f3, 0x18(r31)
		  lfs       f0, -0xDC0(r2)
		  stfs      f1, 0x1C(r31)
		  stfs      f1, 0x20(r31)
		  stfs      f1, 0x24(r31)
		  stb       r7, 0x38(r31)
		  stb       r8, 0x39(r31)
		  stfs      f3, 0x2C(r31)
		  stfs      f1, 0x30(r31)
		  lfs       f2, 0x30(r31)
		  lfs       f1, 0x2C(r31)
		  fsubs     f1, f2, f1
		  stfs      f1, 0x34(r31)
		  lwz       r6, -0x6514(r13)
		  lfs       f1, 0x54(r6)
		  fdivs     f0, f1, f0
		  stfs      f0, 0x28(r31)
		  stw       r8, 0x14(r31)
		  stw       r8, 0x3C(r31)
		  stb       r8, 0x8(r31)
		  stfs      f3, 0xC(r31)
		  stb       r7, 0x10(r31)
		  stb       r5, 0x11(r31)
		  stb       r8, 0x12(r31)
		  stw       r4, 0x0(r31)
		  stw       r8, 0x40(r31)
		  stw       r0, 0x4(r31)

		.loc_0xE8:
		  stw       r29, 0x3C(r31)
		  mr        r3, r29
		  mr        r4, r25
		  bl        -0x2E2CC8
		  mr.       r25, r3
		  bne-      .loc_0x118
		  mr        r6, r29
		  addi      r3, r30, 0
		  addi      r5, r30, 0xC
		  li        r4, 0x57
		  crclr     6, 0x6
		  bl        -0x2DB6C0

		.loc_0x118:
		  mr        r3, r25
		  bl        -0x2BE3EC
		  stw       r3, 0x14(r31)
		  lis       r0, 0x4330
		  li        r3, 0x4
		  lfd       f1, -0xDB8(r2)
		  lwz       r5, 0x14(r31)
		  li        r4, 0
		  stw       r0, 0x8(r1)
		  oris      r3, r3, 0x4
		  lha       r5, 0x6(r5)
		  li        r0, 0x1
		  lfs       f2, -0xDC8(r2)
		  subi      r5, r5, 0x1
		  xoris     r5, r5, 0x8000
		  stw       r5, 0xC(r1)
		  lfd       f0, 0x8(r1)
		  fsubs     f0, f0, f1
		  stfs      f0, 0x1C(r31)
		  stfs      f2, 0x2C(r31)
		  lfs       f0, 0x1C(r31)
		  stfs      f0, 0x30(r31)
		  lfs       f1, 0x30(r31)
		  lfs       f0, 0x2C(r31)
		  fsubs     f0, f1, f0
		  stfs      f0, 0x34(r31)
		  stb       r4, 0x8(r31)
		  stfs      f2, 0xC(r31)
		  stb       r0, 0x10(r31)
		  mtspr     914, r3
		  li        r3, 0x5
		  oris      r3, r3, 0x5
		  mtspr     915, r3
		  li        r3, 0x6
		  oris      r3, r3, 0x6
		  mtspr     916, r3
		  li        r3, 0x7
		  oris      r3, r3, 0x7
		  mtspr     917, r3
		  lwz       r25, 0x14(r31)
		  mr        r3, r26
		  mr        r6, r27
		  mr        r5, r28
		  bl        -0x2F04
		  stw       r3, 0x40(r31)
		  mr        r4, r25
		  lwz       r3, 0x40(r31)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r25
		  mr        r4, r26
		  lwz       r12, 0x0(r25)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  stfs      f31, 0x24(r31)
		  lwz       r5, 0x4(r24)
		  lwz       r0, 0x8(r24)
		  cmpw      r5, r0
		  blt-      .loc_0x228
		  addi      r3, r30, 0
		  addi      r5, r30, 0x24
		  li        r4, 0x143
		  crclr     6, 0x6
		  bl        -0x2DB7CC
		  b         .loc_0x240

		.loc_0x228:
		  lwz       r4, 0x0(r24)
		  rlwinm    r0,r5,2,0,29
		  stwx      r31, r4, r0
		  lwz       r4, 0x4(r24)
		  addi      r0, r4, 0x1
		  stw       r0, 0x4(r24)

		.loc_0x240:
		  psq_l     f31,0x38(r1),0,0
		  lfd       f31, 0x30(r1)
		  lmw       r24, 0x10(r1)
		  lwz       r0, 0x44(r1)
		  mtlr      r0
		  addi      r1, r1, 0x40
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000058
	 */
	AnimList::AnimList(unsigned short)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000040
	 */
	void AnimList::addAnim(og::Screen::AnimScreen*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000014
	 */
	void AnimList::start(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000084
	 */
	void AnimList::nextAnim(float)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000114
	 */
	void AnimList::update(void)
	{
		// UNUSED FUNCTION
	}
} // namespace Screen
} // namespace og
