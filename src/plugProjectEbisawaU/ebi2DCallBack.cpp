#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "ebi/E2DCallBack.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80496678
    lbl_80496678:
        .4byte 0x65626932
        .4byte 0x4443616C
        .4byte 0x6C426163
        .4byte 0x6B2E6370
        .4byte 0x70000000
    .global lbl_8049668C
    lbl_8049668C:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23ebi24E2DCallBack_WindowCursor
    __vt__Q23ebi24E2DCallBack_WindowCursor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23ebi24E2DCallBack_WindowCursorFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q23ebi16E2DCallBack_BaseFv
        .4byte draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte do_update__Q23ebi24E2DCallBack_WindowCursorFv
        .4byte do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
    .global __vt__Q23ebi19E2DCallBack_AnmBase
    __vt__Q23ebi19E2DCallBack_AnmBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23ebi19E2DCallBack_AnmBaseFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q23ebi16E2DCallBack_BaseFv
        .4byte draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte do_update__Q23ebi19E2DCallBack_AnmBaseFv
        .4byte do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
    .global __vt__Q23ebi22E2DCallBack_BlinkAlpha
    __vt__Q23ebi22E2DCallBack_BlinkAlpha:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23ebi22E2DCallBack_BlinkAlphaFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q23ebi16E2DCallBack_BaseFv
        .4byte draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte do_update__Q23ebi22E2DCallBack_BlinkAlphaFv
        .4byte do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
    .global __vt__Q23ebi26E2DCallBack_BlinkFontColor
    __vt__Q23ebi26E2DCallBack_BlinkFontColor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23ebi26E2DCallBack_BlinkFontColorFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q23ebi16E2DCallBack_BaseFv
        .4byte draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte do_update__Q23ebi26E2DCallBack_BlinkFontColorFv
        .4byte do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
    .global __vt__Q23ebi20E2DCallBack_Purupuru
    __vt__Q23ebi20E2DCallBack_Purupuru:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23ebi20E2DCallBack_PurupuruFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q23ebi16E2DCallBack_BaseFv
        .4byte draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte do_update__Q23ebi20E2DCallBack_PurupuruFv
        .4byte do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FA98
    lbl_8051FA98:
        .4byte 0x3A83126F
    .global lbl_8051FA9C
    lbl_8051FA9C:
        .float 1.0
    .global lbl_8051FAA0
    lbl_8051FAA0:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8051FAA8
    lbl_8051FAA8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051FAB0
    lbl_8051FAB0:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051FAB8
    lbl_8051FAB8:
        .4byte 0x46FFFE00
    .global lbl_8051FABC
    lbl_8051FABC:
        .4byte 0x3F8CCCCD
*/

namespace ebi {

/*
 * --INFO--
 * Address:	803D068C
 * Size:	000060
 */
void E2DCallBack_Purupuru::do_update(void)
{
	if (_18) {
		_3C             = m_scaleMgr.calc();
		J2DPane* pane   = _18;
		float scale     = _3C;
		pane->m_scale.x = scale;
		pane->m_scale.y = scale;
		pane->calcMtx();
	}
}

/*
 * --INFO--
 * Address:	803D06EC
 * Size:	0002CC
 */
void E2DCallBack_BlinkFontColor::do_update(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stmw     r26, 0x58(r1)
	mr       r27, r3
	lbz      r0, 0x49(r3)
	cmplwi   r0, 0
	beq      lbl_803D072C
	lfs      f1, 0x40(r27)
	lfs      f0, lbl_8051FA98@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_803D079C

lbl_803D072C:
	lbz      r0, 0x48(r27)
	cmplwi   r0, 0
	beq      lbl_803D076C
	lfs      f2, 0x40(r27)
	lfs      f1, 0x44(r27)
	lfs      f0, lbl_8051FA9C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x40(r27)
	lfs      f1, 0x40(r27)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803D079C
	stfs     f0, 0x40(r27)
	li       r0, 0
	stb      r0, 0x48(r27)
	b        lbl_803D079C

lbl_803D076C:
	lfs      f2, 0x40(r27)
	lfs      f1, 0x44(r27)
	lfs      f0, lbl_8051FAA0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x40(r27)
	lfs      f1, 0x40(r27)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803D079C
	stfs     f0, 0x40(r27)
	li       r0, 1
	stb      r0, 0x48(r27)

lbl_803D079C:
	lwz      r3, 0x18(r27)
	cmplwi   r3, 0
	beq      lbl_803D0994
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	bne      lbl_803D0994
	li       r0, -1
	lfs      f0, lbl_8051FA9C@sda21(r2)
	stw      r0, 0x3c(r1)
	addi     r3, r27, 0x20
	addi     r4, r27, 0x30
	addi     r5, r1, 0x3c
	stw      r0, 0x38(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x30(r1)
	lfs      f31, 0x40(r27)
	fsubs    f30, f0, f31
	fmr      f2, f31
	fmr      f1, f30
	bl
EUTColor_complement__3ebiFRQ28JUtility6TColorRQ28JUtility6TColorffPQ28JUtility6TColor
	fmr      f1, f30
	addi     r3, r27, 0x24
	fmr      f2, f31
	addi     r4, r27, 0x34
	addi     r5, r1, 0x38
	bl
EUTColor_complement__3ebiFRQ28JUtility6TColorRQ28JUtility6TColorffPQ28JUtility6TColor
	fmr      f1, f30
	addi     r3, r27, 0x28
	fmr      f2, f31
	addi     r4, r27, 0x38
	addi     r5, r1, 0x34
	bl
EUTColor_complement__3ebiFRQ28JUtility6TColorRQ28JUtility6TColorffPQ28JUtility6TColor
	fmr      f1, f30
	addi     r3, r27, 0x2c
	fmr      f2, f31
	addi     r4, r27, 0x3c
	addi     r5, r1, 0x30
	bl
EUTColor_complement__3ebiFRQ28JUtility6TColorRQ28JUtility6TColorffPQ28JUtility6TColor
	lwz      r0, 0x3c(r1)
	li       r26, -1
	lwz      r5, 0x38(r1)
	addi     r4, r1, 0x18
	stw      r0, 0x2c(r1)
	lwz      r10, 0x30(r1)
	stw      r26, 0x40(r1)
	lbz      r3, 0x2c(r1)
	lbz      r0, 0x2d(r1)
	lbz      r8, 0x2e(r1)
	lbz      r7, 0x2f(r1)
	stb      r3, 0x40(r1)
	lwz      r9, 0x34(r1)
	stw      r5, 0x28(r1)
	lwz      r31, 0x18(r27)
	stb      r0, 0x41(r1)
	lbz      r5, 0x28(r1)
	mr       r3, r31
	stw      r26, 0x44(r1)
	lbz      r0, 0x29(r1)
	lbz      r27, 0x2a(r1)
	lbz      r6, 0x2b(r1)
	stb      r8, 0x42(r1)
	stb      r7, 0x43(r1)
	stw      r9, 0x24(r1)
	lwz      r7, 0x40(r1)
	stb      r5, 0x44(r1)
	lbz      r28, 0x24(r1)
	stw      r7, 0xc(r1)
	lbz      r29, 0x25(r1)
	stw      r26, 0x48(r1)
	lbz      r5, 0xc(r1)
	lbz      r30, 0x26(r1)
	stw      r10, 0x20(r1)
	lbz      r12, 0x27(r1)
	stb      r0, 0x45(r1)
	lbz      r0, 0xd(r1)
	stb      r5, 0x104(r31)
	lbz      r5, 0xe(r1)
	stb      r0, 0x105(r31)
	lbz      r0, 0xf(r1)
	stb      r5, 0x106(r31)
	lbz      r11, 0x20(r1)
	stw      r26, 0x4c(r1)
	lbz      r10, 0x21(r1)
	lbz      r9, 0x22(r1)
	lbz      r8, 0x23(r1)
	stb      r27, 0x46(r1)
	stb      r6, 0x47(r1)
	lwz      r6, 0x44(r1)
	stb      r0, 0x107(r31)
	stw      r6, 8(r1)
	lbz      r5, 8(r1)
	lbz      r0, 9(r1)
	stb      r5, 0x108(r31)
	lbz      r5, 0xa(r1)
	stb      r0, 0x109(r31)
	lbz      r0, 0xb(r1)
	stb      r5, 0x10a(r31)
	stb      r28, 0x48(r1)
	stb      r29, 0x49(r1)
	stb      r30, 0x4a(r1)
	stb      r12, 0x4b(r1)
	stb      r0, 0x10b(r31)
	lwz      r0, 0x48(r1)
	stb      r11, 0x4c(r1)
	stw      r0, 0x18(r1)
	lwz      r12, 0(r31)
	stb      r10, 0x4d(r1)
	lwz      r12, 0xa8(r12)
	stb      r9, 0x4e(r1)
	stb      r8, 0x4f(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	mtctr    r12
	bctrl
	lwz      r0, 0x4c(r1)
	mr       r3, r31
	addi     r4, r1, 0x1c
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803D0994:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	lmw      r26, 0x58(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D09B8
 * Size:	000118
 */
void E2DCallBack_BlinkAlpha::do_update(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r6, r3
	stw      r0, 0x24(r1)
	lbz      r0, 0x29(r3)
	cmplwi   r0, 0
	beq      lbl_803D09E4
	lfs      f1, 0x20(r6)
	lfs      f0, lbl_8051FA98@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_803D0A54

lbl_803D09E4:
	lbz      r0, 0x28(r6)
	cmplwi   r0, 0
	beq      lbl_803D0A24
	lfs      f2, 0x20(r6)
	lfs      f1, 0x24(r6)
	lfs      f0, lbl_8051FA9C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x20(r6)
	lfs      f1, 0x20(r6)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803D0A54
	stfs     f0, 0x20(r6)
	li       r0, 0
	stb      r0, 0x28(r6)
	b        lbl_803D0A54

lbl_803D0A24:
	lfs      f2, 0x20(r6)
	lfs      f1, 0x24(r6)
	lfs      f0, lbl_8051FAA0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x20(r6)
	lfs      f1, 0x20(r6)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803D0A54
	stfs     f0, 0x20(r6)
	li       r0, 1
	stb      r0, 0x28(r6)

lbl_803D0A54:
	lwz      r3, 0x18(r6)
	cmplwi   r3, 0
	beq      lbl_803D0AC0
	lbz      r5, 0x2d(r6)
	lis      r0, 0x4330
	lbz      r4, 0x2c(r6)
	lwz      r12, 0(r3)
	subf     r4, r5, r4
	stw      r0, 8(r1)
	xoris    r4, r4, 0x8000
	lfd      f2, lbl_8051FAA8@sda21(r2)
	stw      r4, 0xc(r1)
	lfd      f1, lbl_8051FAB0@sda21(r2)
	lfd      f0, 8(r1)
	stw      r5, 0x14(r1)
	fsubs    f3, f0, f2
	lfs      f2, 0x20(r6)
	stw      r0, 0x10(r1)
	lwz      r12, 0x24(r12)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmadds   f0, f3, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	mtctr    r12
	bctrl

lbl_803D0AC0:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0AD0
 * Size:	0000C8
 */
void E2DCallBack_AnmBase::loadAnm(char* path, JKRArchive* archive, long p3, long p4)
{
	void* resource = JKRFileLoader::getGlbResource(path, archive);
	P2ASSERTLINE(74, (resource != nullptr));
	m_anm           = J2DAnmLoaderDataBase::load(resource);
	m_frameCtrl._06 = p3;
	m_frameCtrl._10 = p3;
	m_frameCtrl._0A = p3;
	m_frameCtrl._08 = ((m_anm->m_maxFrame < p4) ? m_anm->m_maxFrame : p4);

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r7
	stw      r29, 0x14(r1)
	mr       r29, r6
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r4
	mr       r4, r5
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r31, r3, r3
	bne      lbl_803D0B28
	lis      r3, lbl_80496678@ha
	lis      r5, lbl_8049668C@ha
	addi     r3, r3, lbl_80496678@l
	li       r4, 0x4a
	addi     r5, r5, lbl_8049668C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D0B28:
	mr       r3, r31
	bl       load__20J2DAnmLoaderDataBaseFPCv
	extsh    r4, r29
	lis      r0, 0x4330
	xoris    r4, r4, 0x8000
	stw      r3, 0x34(r28)
	lfd      f1, lbl_8051FAA8@sda21(r2)
	stw      r4, 0xc(r1)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	sth      r29, 0x26(r28)
	fsubs    f0, f0, f1
	stfs     f0, 0x30(r28)
	sth      r29, 0x2a(r28)
	lwz      r3, 0x34(r28)
	lha      r0, 6(r3)
	cmpw     r0, r30
	bge      lbl_803D0B74
	mr       r30, r0

lbl_803D0B74:
	sth      r30, 0x28(r28)
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
 * Address:	803D0B98
 * Size:	00010C
 */
void E2DCallBack_AnmBase::play(float, J3DAnmAttr, bool)
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
	mr       r31, r3
	fmr      f31, f1
	lwz      r0, 0x18(r3)
	mr       r29, r4
	mr       r30, r5
	cmplwi   r0, 0
	bne      lbl_803D0BF0
	lis      r3, lbl_80496678@ha
	lis      r5, lbl_8049668C@ha
	addi     r3, r3, lbl_80496678@l
	li       r4, 0x5a
	addi     r5, r5, lbl_8049668C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D0BF0:
	lwz      r0, 0x34(r31)
	cmplwi   r0, 0
	bne      lbl_803D0C18
	lis      r3, lbl_80496678@ha
	lis      r5, lbl_8049668C@ha
	addi     r3, r3, lbl_80496678@l
	li       r4, 0x5b
	addi     r5, r5, lbl_8049668C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D0C18:
	li       r0, 1
	stb      r0, 0x1c(r31)
	lwz      r3, 0x18(r31)
	lwz      r4, 0x34(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	stb      r29, 0x24(r31)
	clrlwi.  r0, r30, 0x18
	stfs     f31, 0x2c(r31)
	beq      lbl_803D0C6C
	lha      r3, 0x26(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_8051FAA8@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x30(r31)

lbl_803D0C6C:
	lfs      f0, 0x30(r31)
	li       r0, 0
	lwz      r3, 0x34(r31)
	stfs     f0, 8(r3)
	stb      r0, 0x38(r31)
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
 * Address:	803D0CA4
 * Size:	000110
 */
void E2DCallBack_AnmBase::playBack(float, bool)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r31, r3
	fmr      f31, f1
	lwz      r0, 0x18(r3)
	mr       r30, r4
	cmplwi   r0, 0
	bne      lbl_803D0CF4
	lis      r3, lbl_80496678@ha
	lis      r5, lbl_8049668C@ha
	addi     r3, r3, lbl_80496678@l
	li       r4, 0x6b
	addi     r5, r5, lbl_8049668C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D0CF4:
	lwz      r0, 0x34(r31)
	cmplwi   r0, 0
	bne      lbl_803D0D1C
	lis      r3, lbl_80496678@ha
	lis      r5, lbl_8049668C@ha
	addi     r3, r3, lbl_80496678@l
	li       r4, 0x6c
	addi     r5, r5, lbl_8049668C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D0D1C:
	li       r0, 1
	stb      r0, 0x1c(r31)
	lwz      r3, 0x18(r31)
	lwz      r4, 0x34(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	fabs     f0, f31
	li       r3, 3
	stb      r3, 0x24(r31)
	clrlwi.  r0, r30, 0x18
	frsp     f0, f0
	fneg     f0, f0
	stfs     f0, 0x2c(r31)
	beq      lbl_803D0D80
	lha      r3, 0x28(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_8051FAA8@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x30(r31)

lbl_803D0D80:
	lfs      f0, 0x30(r31)
	li       r0, 0
	lwz      r3, 0x34(r31)
	stfs     f0, 8(r3)
	stb      r0, 0x38(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0DB4
 * Size:	000014
 */
void E2DCallBack_AnmBase::stop(void)
{
	_1C        = 0;
	m_isFinish = true;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void E2DCallBack_AnmBase::disconnect(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D0DC8
 * Size:	00003C
 */
void E2DCallBack_AnmBase::setStartFrame(void)
{
	m_frameCtrl._10       = m_frameCtrl._06;
	m_anm->m_currentFrame = m_frameCtrl._10;
}

/*
 * --INFO--
 * Address:	803D0E04
 * Size:	00003C
 */
void E2DCallBack_AnmBase::setEndFrame(void)
{
	m_frameCtrl._10       = m_frameCtrl._08;
	m_anm->m_currentFrame = m_frameCtrl._10;
}

/*
 * --INFO--
 * Address:	803D0E40
 * Size:	0000C0
 */
void E2DCallBack_AnmBase::setRandFrame(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lis      r3, 0x4330
	lha      r4, 0x26(r31)
	lha      r0, 0x28(r31)
	xoris    r4, r4, 0x8000
	stw      r3, 8(r1)
	xoris    r0, r0, 0x8000
	lfd      f1, lbl_8051FAA8@sda21(r2)
	stw      r4, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f31, f0, f1
	stw      r3, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f30, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	fsubs    f0, f30, f31
	lfd      f3, lbl_8051FAA8@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f1, lbl_8051FAB8@sda21(r2)
	lfd      f2, 0x18(r1)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmadds   f0, f0, f1, f31
	stfs     f0, 0x30(r31)
	lfs      f0, 0x30(r31)
	lwz      r3, 0x34(r31)
	stfs     f0, 8(r3)
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0F00
 * Size:	000054
 */
float E2DCallBack_AnmBase::getPlayFinRate(void)
{
	return (m_frameCtrl._10 - m_frameCtrl._06) / m_frameCtrl._08;
	/*
	stwu     r1, -0x20(r1)
	lis      r4, 0x4330
	lfd      f2, lbl_8051FAA8@sda21(r2)
	lha      r5, 0x26(r3)
	lha      r0, 0x28(r3)
	xoris    r5, r5, 0x8000
	stw      r4, 8(r1)
	xoris    r0, r0, 0x8000
	lfs      f1, 0x30(r3)
	stw      r5, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f3, f0, f2
	stw      r4, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f1, f1, f3
	fsubs    f0, f0, f2
	fsubs    f0, f0, f3
	fdivs    f1, f1, f0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0F54
 * Size:	00005C
 */
void E2DCallBack_AnmBase::do_update(void)
{
	if (_18) {
		m_frameCtrl.update();
		m_anm->m_currentFrame = m_frameCtrl._10;
	}
	if (m_frameCtrl.m_attr & 1) {
		m_isFinish = true;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_803D0F88
	addi     r3, r31, 0x20
	bl       update__12J3DFrameCtrlFv
	lfs      f0, 0x30(r31)
	lwz      r3, 0x34(r31)
	stfs     f0, 8(r3)

lbl_803D0F88:
	lbz      r0, 0x25(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803D0F9C
	li       r0, 1
	stb      r0, 0x38(r31)

lbl_803D0F9C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0FB0
 * Size:	000008
 */
bool E2DCallBack_AnmBase::isFinish(void)
{
	return m_isFinish;
	/*
	lbz      r3, 0x38(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0FB8
 * Size:	00014C
 */
void E2DCallBack_WindowCursor::do_update(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_803D10F0
	lwz      r3, 0x40(r31)
	cmplwi   r3, 0
	beq      lbl_803D0FEC
	addi     r0, r3, -1
	stw      r0, 0x40(r31)

lbl_803D0FEC:
	lwz      r4, 0x44(r31)
	cmplwi   r4, 0
	beq      lbl_803D102C
	lwz      r3, 0x40(r31)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	lfd      f2, lbl_8051FAB0@sda21(r2)
	stw      r3, 0x1c(r1)
	lfd      f0, 0x18(r1)
	stw      r4, 0x24(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x20(r1)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f2
	fdivs    f2, f1, f0
	b        lbl_803D1030

lbl_803D102C:
	lfs      f2, lbl_8051FAA0@sda21(r2)

lbl_803D1030:
	lfs      f1, lbl_8051FA9C@sda21(r2)
	addi     r4, r1, 8
	lfs      f3, 0x20(r31)
	lfs      f0, 0x30(r31)
	fsubs    f1, f1, f2
	fsubs    f0, f0, f3
	fmadds   f0, f1, f0, f3
	stfs     f0, 8(r1)
	lfs      f2, 0x24(r31)
	lfs      f0, 0x34(r31)
	fsubs    f0, f0, f2
	fmadds   f0, f1, f0, f2
	stfs     f0, 0xc(r1)
	lfs      f2, 0x28(r31)
	lfs      f0, 0x38(r31)
	fsubs    f0, f0, f2
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x10(r1)
	lfs      f2, 0x2c(r31)
	lfs      f0, 0x3c(r31)
	fsubs    f0, f0, f2
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x14(r1)
	lwz      r3, 0x18(r31)
	bl       "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
	addi     r3, r31, 0x48
	bl       calc__Q32og6Screen8ScaleMgrFv
	stfs     f1, 0x64(r31)
	lwz      r3, 0x18(r31)
	lfs      f0, 0x64(r31)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x68(r31)
	cmplwi   r3, 0
	beq      lbl_803D10F0
	lfs      f1, lbl_8051FABC@sda21(r2)
	lfs      f0, 0x64(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_803D10F0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
} // namespace ebi
