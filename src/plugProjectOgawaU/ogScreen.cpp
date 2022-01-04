#include "types.h"
#include "JSystem/JSU/JSUTreeIterator.h"
#include "og/Screen/AlphaMgr.h"
#include "og/Screen/ogScreen.h"
#include "P2DScreen.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048DCC0
    lbl_8048DCC0:
        .asciz "ogScreen"
        .skip 3
    .global lbl_8048DCCC
    lbl_8048DCCC:
        .asciz "ogScreen.cpp"
        .skip 3
    .global lbl_8048DCDC
    lbl_8048DCDC:
        .asciz "picture pane overflow!!\n"
        .skip 3
    .global lbl_8048DCF8
    lbl_8048DCF8:
        .asciz "num is overflow!\n"
        .skip 2
    .global lbl_8048DD0C
    lbl_8048DD0C:
        .asciz "toumei_piki.bti"
    .global lbl_8048DD1C
    lbl_8048DD1C:
        .asciz "bp_l64.bti"
        .skip 1
    .global lbl_8048DD28
    lbl_8048DD28:
        .asciz "bp_b64.bti"
        .skip 1
    .global lbl_8048DD34
    lbl_8048DD34:
        .asciz "bp_f64.bti"
        .skip 1
    .global lbl_8048DD40
    lbl_8048DD40:
        .asciz "rp_l64.bti"
        .skip 1
    .global lbl_8048DD4C
    lbl_8048DD4C:
        .asciz "rp_b64.bti"
        .skip 1
    .global lbl_8048DD58
    lbl_8048DD58:
        .asciz "rp_f64.bti"
        .skip 1
    .global lbl_8048DD64
    lbl_8048DD64:
        .asciz "yp_l64.bti"
        .skip 1
    .global lbl_8048DD70
    lbl_8048DD70:
        .asciz "yp_b64.bti"
        .skip 1
    .global lbl_8048DD7C
    lbl_8048DD7C:
        .asciz "yp_f64.bti"
        .skip 1
    .global lbl_8048DD88
    lbl_8048DD88:
        .asciz "blp_l64.bti"
    .global lbl_8048DD94
    lbl_8048DD94:
        .asciz "blp_b64.bti"
    .global lbl_8048DDA0
    lbl_8048DDA0:
        .asciz "blp_f64.bti"
    .global lbl_8048DDAC
    lbl_8048DDAC:
        .asciz "wp_l64.bti"
        .skip 1
    .global lbl_8048DDB8
    lbl_8048DDB8:
        .asciz "wp_b64.bti"
        .skip 1
    .global lbl_8048DDC4
    lbl_8048DDC4:
        .asciz "wp_f64.bti"
        .skip 1
    .global lbl_8048DDD0
    lbl_8048DDD0:
        .asciz "cha_l.bti"
        .skip 2
    .global lbl_8048DDDC
    lbl_8048DDDC:
        .asciz "cha_b.bti"
        .skip 2
    .global lbl_8048DDE8
    lbl_8048DDE8:
        .asciz "cha_f.bti"
        .skip 2
        .asciz "MojiToNum ERR!(keta) [%s]\n"
        .skip 1
        .asciz "MojiToNum ERR! [%s]\n"
        .skip 3
    .global lbl_8048DE28
    lbl_8048DE28:
        .asciz "x%02x%02x"
        .skip 2
    .global lbl_8048DE34
    lbl_8048DE34:
        .asciz "tag[%s] is not exist!!\n"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global PikiIconTextureName__Q22og6Screen
    PikiIconTextureName__Q22og6Screen:
        .4byte lbl_8048DD0C
        .4byte lbl_8048DD1C
        .4byte lbl_8048DD28
        .4byte lbl_8048DD34
        .4byte lbl_8048DD40
        .4byte lbl_8048DD4C
        .4byte lbl_8048DD58
        .4byte lbl_8048DD64
        .4byte lbl_8048DD70
        .4byte lbl_8048DD7C
        .4byte lbl_8048DD88
        .4byte lbl_8048DD94
        .4byte lbl_8048DDA0
        .4byte lbl_8048DDAC
        .4byte lbl_8048DDB8
        .4byte lbl_8048DDC4
        .4byte lbl_8048DDD0
        .4byte lbl_8048DDDC
        .4byte lbl_8048DDE8
    .global __vt__Q29P2DScreen4Node
    __vt__Q29P2DScreen4Node:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29P2DScreen4NodeFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q29P2DScreen4NodeFv
        .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global PikiIconTextureResTIMG__Q22og6Screen
    PikiIconTextureResTIMG__Q22og6Screen:
        .skip 0x4C

    .section .sbss # 0x80514D80 - 0x80516360
    .global wkPtr$3542
    wkPtr$3542:
        .skip 0x4
    .global init$3543
    init$3543:
        .skip 0x4
    .global Max$3545
    Max$3545:
        .skip 0x4
    .global init$3546
    init$3546:
        .skip 0x4
    .global wkMax$3548
    wkMax$3548:
        .skip 0x4
    .global init$3549
    init$3549:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D508
    lbl_8051D508:
        .4byte 0x41F00000
    .global lbl_8051D50C
    lbl_8051D50C:
        .4byte 0x40C90FDB
    .global lbl_8051D510
    lbl_8051D510:
        .float 1.0
    .global lbl_8051D514
    lbl_8051D514:
        .4byte 0xC3A2F983
    .global lbl_8051D518
    lbl_8051D518:
        .4byte 0x43A2F983
    .global lbl_8051D51C
    lbl_8051D51C:
        .4byte 0x00000000
    .global lbl_8051D520
    lbl_8051D520:
        .float 0.5
        .4byte 0x00000000
    .global lbl_8051D528
    lbl_8051D528:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051D530
    lbl_8051D530:
        .4byte 0x3F4CCCCD
        .4byte 0x00000000
    .global lbl_8051D538
    lbl_8051D538:
        .4byte 0x3FF00000
        .4byte 0x00000000
    .global lbl_8051D540
    lbl_8051D540:
        .4byte 0x3FC90FDB
    .global lbl_8051D544
    lbl_8051D544:
        .4byte 0x3E4CCCCC
    .global lbl_8051D548
    lbl_8051D548:
        .4byte 0x40240000
        .4byte 0x00000000
    .global lbl_8051D550
    lbl_8051D550:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051D558
    lbl_8051D558:
        .4byte 0x437F0000
        .4byte 0x00000000
*/

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	80301EB8
	 * Size:	000008
	 */
	void ArrowAlphaBlink::setSpeed(float)
	{
		/*
	stfs     f1, 4(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000008
	 */
	void ArrowAlphaBlink::setAmp(float)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000008
	 */
	void ArrowAlphaBlink::setBottom(float)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80301EC0
	 * Size:	0000C0
	 */
	void ArrowAlphaBlink::calc(void)
	{
		/*
	stwu     r1, -0x20(r1)
	lfs      f3, lbl_8051D508@sda21(r2)
	lwz      r4, sys@sda21(r13)
	lfs      f1, 4(r3)
	lfs      f0, 0x54(r4)
	fmuls    f2, f1, f0
	lfs      f1, 0(r3)
	lfs      f0, lbl_8051D50C@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0(r3)
	lfs      f1, 0(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80301EFC
	fsubs    f0, f1, f0
	stfs     f0, 0(r3)

lbl_80301EFC:
	lfs      f2, 0(r3)
	lfs      f0, lbl_8051D51C@sda21(r2)
	lfs      f3, 8(r3)
	fcmpo    cr0, f2, f0
	lfs      f1, lbl_8051D510@sda21(r2)
	bge      lbl_80301F40
	lfs      f0, lbl_8051D514@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80301F64

lbl_80301F40:
	lfs      f0, lbl_8051D518@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80301F64:
	fadds    f2, f1, f0
	lfs      f1, lbl_8051D520@sda21(r2)
	lfs      f0, 0xc(r3)
	fmuls    f2, f3, f2
	fmadds   f1, f2, f1, f0
	addi     r1, r1, 0x20
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80301F80
	 * Size:	00021C
	 */
	void capturePictureTreeColor(J2DPane*, int)
	{
		/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lbz      r0, init$3543@sda21(r13)
	extsb.   r0, r0
	bne      lbl_80301FBC
	li       r3, 0
	li       r0, 1
	stw      r3, wkPtr$3542@sda21(r13)
	stb      r0, init$3543@sda21(r13)

lbl_80301FBC:
	lbz      r0, init$3546@sda21(r13)
	extsb.   r0, r0
	bne      lbl_80301FD8
	li       r3, 0
	li       r0, 1
	stw      r3, Max$3545@sda21(r13)
	stb      r0, init$3546@sda21(r13)

lbl_80301FD8:
	lbz      r0, init$3549@sda21(r13)
	extsb.   r0, r0
	bne      lbl_80301FF4
	li       r3, 0
	li       r0, 1
	stw      r3, wkMax$3548@sda21(r13)
	stb      r0, init$3549@sda21(r13)

lbl_80301FF4:
	cmpwi    r30, 0
	li       r31, 0
	ble      lbl_80302050
	mulli    r3, r30, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q32og6Screen20PictureTreeColorInfoFv@ha
	mr       r7, r30
	addi     r4, r4, __ct__Q32og6Screen20PictureTreeColorInfoFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	stw      r3, wkPtr$3542@sda21(r13)
	li       r3, 8
	stw      r30, Max$3545@sda21(r13)
	stw      r30, wkMax$3548@sda21(r13)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8030204C
	lwz      r0, wkPtr$3542@sda21(r13)
	stw      r30, 0(r3)
	stw      r0, 4(r3)

lbl_8030204C:
	mr       r31, r3

lbl_80302050:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x12
	bne      lbl_80302144
	mr       r4, r29
	addi     r3, r1, 0xc
	lwz      r12, 0(r29)
	lwz      r12, 0x138(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	lwz      r0, 0xc(r1)
	lwz      r12, 0(r29)
	addi     r3, r1, 8
	stw      r0, 0x14(r1)
	lwz      r12, 0x134(r12)
	mtctr    r12
	bctrl
	lwz      r0, wkMax$3548@sda21(r13)
	lwz      r3, 8(r1)
	cmpwi    r0, 0
	stw      r3, 0x10(r1)
	ble      lbl_80302128
	lwz      r3, wkPtr$3542@sda21(r13)
	lbz      r0, 0x14(r1)
	stw      r29, 0(r3)
	lbz      r4, 0x15(r1)
	lwz      r6, wkPtr$3542@sda21(r13)
	lbz      r3, 0x16(r1)
	stb      r0, 4(r6)
	lbz      r0, 0x17(r1)
	stb      r4, 5(r6)
	lbz      r5, 0x10(r1)
	stb      r3, 6(r6)
	lbz      r4, 0x11(r1)
	stb      r0, 7(r6)
	lbz      r3, 0x12(r1)
	lwz      r6, wkPtr$3542@sda21(r13)
	lbz      r0, 0x13(r1)
	stb      r5, 8(r6)
	stb      r4, 9(r6)
	stb      r3, 0xa(r6)
	stb      r0, 0xb(r6)
	lwz      r4, wkPtr$3542@sda21(r13)
	lwz      r3, wkMax$3548@sda21(r13)
	addi     r4, r4, 0xc
	addi     r0, r3, -1
	stw      r4, wkPtr$3542@sda21(r13)
	stw      r0, wkMax$3548@sda21(r13)
	b        lbl_80302144

lbl_80302128:
	lis      r3, lbl_8048DCCC@ha
	lis      r5, lbl_8048DCDC@ha
	addi     r3, r3, lbl_8048DCCC@l
	li       r4, 0x9d
	addi     r5, r5, lbl_8048DCDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80302144:
	lwz      r29, 0xdc(r29)
	cmplwi   r29, 0
	beq      lbl_80302174
	addi     r29, r29, -12
	b        lbl_80302174

lbl_80302158:
	lwz      r3, 0xc(r29)
	li       r4, 0
	bl       capturePictureTreeColor__Q22og6ScreenFP7J2DPanei
	lwz      r29, 0x18(r29)
	cmplwi   r29, 0
	beq      lbl_80302174
	addi     r29, r29, -12

lbl_80302174:
	cmplwi   r29, 0
	bne      lbl_80302158
	lwz      r0, 0x34(r1)
	mr       r3, r31
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
	 * Address:	8030219C
	 * Size:	00003C
	 */
	PictureTreeColorInfo::PictureTreeColorInfo(void)
	{
		/*
	li       r5, -1
	li       r4, 0
	stw      r5, 4(r3)
	li       r0, 0xff
	stw      r5, 8(r3)
	stw      r4, 0(r3)
	stb      r0, 4(r3)
	stb      r0, 5(r3)
	stb      r0, 6(r3)
	stb      r0, 7(r3)
	stb      r4, 8(r3)
	stb      r4, 9(r3)
	stb      r4, 0xa(r3)
	stb      r4, 0xb(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0000AC
	 */
	void recoverPictureTreeColor(og::Screen::PictureTreeColorCaptureInfo*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	803021D8
	 * Size:	000154
	 */
	void blendColor(JUtility::TColor&, JUtility::TColor&, float,
	                JUtility::TColor*)
	{
		/*
		.loc_0x0:
		  lfs       f0, -0xE44(r2)
		  stwu      r1, -0x70(r1)
		  fcmpo     cr0, f1, f0
		  bge-      .loc_0x14
		  fmr       f1, f0

		.loc_0x14:
		  lfs       f0, -0xE50(r2)
		  fcmpo     cr0, f1, f0
		  ble-      .loc_0x24
		  fmr       f1, f0

		.loc_0x24:
		  lbz       r0, 0x0(r4)
		  lis       r9, 0x4330
		  lbz       r7, 0x1(r4)
		  li        r11, -0x1
		  stw       r0, 0x1C(r1)
		  lbz       r10, 0x0(r3)
		  stw       r9, 0x18(r1)
		  lfs       f0, -0xE50(r2)
		  lbz       r6, 0x2(r4)
		  stw       r7, 0x34(r1)
		  fsubs     f7, f0, f1
		  lfd       f6, -0xE38(r2)
		  stw       r9, 0x30(r1)
		  lfd       f2, 0x18(r1)
		  lfd       f0, 0x30(r1)
		  fsubs     f2, f2, f6
		  lbz       r8, 0x1(r3)
		  fsubs     f0, f0, f6
		  stw       r10, 0x14(r1)
		  lbz       r0, 0x3(r4)
		  stw       r9, 0x10(r1)
		  fmuls     f2, f2, f1
		  lbz       r4, 0x2(r3)
		  lfd       f4, 0x10(r1)
		  fmuls     f3, f0, f1
		  stw       r6, 0x4C(r1)
		  fsubs     f4, f4, f6
		  stw       r9, 0x48(r1)
		  lbz       r3, 0x3(r3)
		  lfd       f0, 0x48(r1)
		  fmadds    f2, f4, f7, f2
		  stw       r8, 0x2C(r1)
		  fsubs     f0, f0, f6
		  fctiwz    f5, f2
		  stw       r9, 0x28(r1)
		  lfd       f4, 0x28(r1)
		  fmuls     f2, f0, f1
		  stw       r0, 0x64(r1)
		  fsubs     f0, f4, f6
		  stw       r9, 0x60(r1)
		  fmadds    f0, f0, f7, f3
		  stw       r4, 0x44(r1)
		  stfd      f5, 0x20(r1)
		  fctiwz    f3, f0
		  lfd       f0, 0x60(r1)
		  lwz       r6, 0x24(r1)
		  fsubs     f0, f0, f6
		  stw       r9, 0x40(r1)
		  stfd      f3, 0x38(r1)
		  fmuls     f0, f0, f1
		  lfd       f1, 0x40(r1)
		  stw       r11, 0x8(r1)
		  fsubs     f3, f1, f6
		  lwz       r0, 0x3C(r1)
		  stb       r6, 0x0(r5)
		  fmadds    f2, f3, f7, f2
		  stw       r3, 0x5C(r1)
		  stw       r9, 0x58(r1)
		  fctiwz    f2, f2
		  lfd       f1, 0x58(r1)
		  stb       r0, 0x1(r5)
		  fsubs     f1, f1, f6
		  stfd      f2, 0x50(r1)
		  lwz       r3, 0x54(r1)
		  fmadds    f0, f1, f7, f0
		  stb       r0, 0x9(r1)
		  fctiwz    f0, f0
		  stb       r3, 0x2(r5)
		  stb       r6, 0x8(r1)
		  stfd      f0, 0x68(r1)
		  lwz       r0, 0x6C(r1)
		  stb       r3, 0xA(r1)
		  stb       r0, 0xB(r1)
		  stb       r0, 0x3(r5)
		  addi      r1, r1, 0x70
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0003D0
	 */
	void setPictureTreeColor(J2DPane*, JUtility::TColor&, JUtility::TColor&,
	                         float)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	8030232C
	 * Size:	000370
	 */
	void blendPictureTreeColor(og::Screen::PictureTreeColorCaptureInfo*,
	                           JUtility::TColor&, JUtility::TColor&, float)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x140(r1)
		  mflr      r0
		  stw       r0, 0x144(r1)
		  stfd      f31, 0x130(r1)
		  psq_st    f31,0x138(r1),0,0
		  stfd      f30, 0x120(r1)
		  psq_st    f30,0x128(r1),0,0
		  stfd      f29, 0x110(r1)
		  psq_st    f29,0x118(r1),0,0
		  stfd      f28, 0x100(r1)
		  psq_st    f28,0x108(r1),0,0
		  stmw      r24, 0xE0(r1)
		  fmr       f28, f1
		  lfs       f29, -0xE44(r2)
		  lfs       f30, -0xE50(r2)
		  mr        r25, r3
		  lwz       r30, 0x4(r3)
		  mr        r26, r4
		  lfd       f31, -0xE38(r2)
		  mr        r27, r5
		  li        r29, 0
		  lis       r31, 0x4330
		  b         .loc_0x330

		.loc_0x5C:
		  lwz       r28, 0x0(r30)
		  cmplwi    r28, 0
		  beq-      .loc_0x33C
		  lwz       r3, 0x4(r30)
		  fmr       f7, f28
		  lwz       r0, 0x8(r30)
		  fcmpo     cr0, f28, f29
		  stw       r3, 0x1C(r1)
		  stw       r0, 0x18(r1)
		  bge-      .loc_0x88
		  fmr       f7, f29

		.loc_0x88:
		  fcmpo     cr0, f7, f30
		  ble-      .loc_0x94
		  fmr       f7, f30

		.loc_0x94:
		  lbz       r8, 0x0(r26)
		  li        r10, -0x1
		  lbz       r6, 0x1(r26)
		  fsubs     f0, f30, f7
		  stw       r8, 0x2C(r1)
		  fmr       f1, f28
		  lbz       r4, 0x2(r26)
		  fcmpo     cr0, f28, f29
		  stw       r31, 0x28(r1)
		  lbz       r0, 0x3(r26)
		  lfd       f2, 0x28(r1)
		  stw       r6, 0x44(r1)
		  fsubs     f3, f2, f31
		  lbz       r9, 0x1C(r1)
		  stw       r31, 0x40(r1)
		  lbz       r7, 0x1D(r1)
		  lfd       f2, 0x40(r1)
		  fmuls     f6, f3, f7
		  stw       r4, 0x5C(r1)
		  fsubs     f3, f2, f31
		  lbz       r5, 0x1E(r1)
		  stw       r31, 0x58(r1)
		  lbz       r3, 0x1F(r1)
		  lfd       f2, 0x58(r1)
		  fmuls     f5, f3, f7
		  stw       r0, 0x74(r1)
		  fsubs     f3, f2, f31
		  stw       r31, 0x70(r1)
		  lfd       f2, 0x70(r1)
		  fmuls     f3, f3, f7
		  stw       r9, 0x24(r1)
		  fsubs     f2, f2, f31
		  stw       r31, 0x20(r1)
		  lfd       f4, 0x20(r1)
		  fmuls     f2, f2, f7
		  stw       r7, 0x3C(r1)
		  fsubs     f7, f4, f31
		  stw       r31, 0x38(r1)
		  fmadds    f7, f7, f0, f6
		  lfd       f4, 0x38(r1)
		  stw       r5, 0x54(r1)
		  fsubs     f6, f4, f31
		  stw       r31, 0x50(r1)
		  fctiwz    f7, f7
		  lfd       f4, 0x50(r1)
		  fmadds    f5, f6, f0, f5
		  stfd      f7, 0x30(r1)
		  fsubs     f4, f4, f31
		  fctiwz    f5, f5
		  lwz       r0, 0x34(r1)
		  stw       r10, 0xC(r1)
		  fmadds    f3, f4, f0, f3
		  stfd      f5, 0x48(r1)
		  lwz       r4, 0x4C(r1)
		  fctiwz    f4, f3
		  stw       r3, 0x6C(r1)
		  stw       r31, 0x68(r1)
		  lfd       f3, 0x68(r1)
		  stfd      f4, 0x60(r1)
		  fsubs     f3, f3, f31
		  lwz       r3, 0x64(r1)
		  stb       r0, 0xC(r1)
		  fmadds    f0, f3, f0, f2
		  stb       r0, 0x1C(r1)
		  fctiwz    f0, f0
		  stb       r4, 0xD(r1)
		  stb       r3, 0xE(r1)
		  stfd      f0, 0x78(r1)
		  lwz       r0, 0x7C(r1)
		  stb       r4, 0x1D(r1)
		  stb       r0, 0xF(r1)
		  stb       r3, 0x1E(r1)
		  stb       r0, 0x1F(r1)
		  bge-      .loc_0x1C0
		  fmr       f1, f29

		.loc_0x1C0:
		  fcmpo     cr0, f1, f30
		  ble-      .loc_0x1CC
		  fmr       f1, f30

		.loc_0x1CC:
		  lbz       r0, 0x0(r27)
		  li        r24, -0x1
		  lbz       r9, 0x1(r27)
		  fsubs     f0, f30, f1
		  stw       r0, 0x8C(r1)
		  mr        r3, r28
		  lbz       r7, 0x2(r27)
		  addi      r4, r1, 0x14
		  stw       r31, 0x88(r1)
		  lbz       r5, 0x3(r27)
		  lfd       f2, 0x88(r1)
		  stw       r9, 0xA4(r1)
		  fsubs     f3, f2, f31
		  lbz       r11, 0x18(r1)
		  stw       r31, 0xA0(r1)
		  lbz       r10, 0x19(r1)
		  lfd       f2, 0xA0(r1)
		  fmuls     f5, f3, f1
		  stw       r7, 0xBC(r1)
		  fsubs     f2, f2, f31
		  lbz       r8, 0x1A(r1)
		  stw       r31, 0xB8(r1)
		  lbz       r6, 0x1B(r1)
		  fmuls     f4, f2, f1
		  lfd       f2, 0xB8(r1)
		  stw       r5, 0xD4(r1)
		  fsubs     f3, f2, f31
		  lwz       r0, 0x1C(r1)
		  stw       r31, 0xD0(r1)
		  lfd       f2, 0xD0(r1)
		  fmuls     f3, f3, f1
		  stw       r11, 0x84(r1)
		  fsubs     f2, f2, f31
		  stw       r31, 0x80(r1)
		  lfd       f6, 0x80(r1)
		  fmuls     f1, f2, f1
		  stw       r10, 0x9C(r1)
		  fsubs     f6, f6, f31
		  stw       r31, 0x98(r1)
		  fmadds    f6, f6, f0, f5
		  lfd       f2, 0x98(r1)
		  stw       r8, 0xB4(r1)
		  fsubs     f5, f2, f31
		  stw       r31, 0xB0(r1)
		  fctiwz    f6, f6
		  lfd       f2, 0xB0(r1)
		  fmadds    f4, f5, f0, f4
		  stw       r0, 0x14(r1)
		  fsubs     f2, f2, f31
		  fctiwz    f4, f4
		  stfd      f6, 0x90(r1)
		  lwz       r12, 0x0(r28)
		  fmadds    f2, f2, f0, f3
		  lwz       r0, 0x94(r1)
		  stw       r24, 0x8(r1)
		  lwz       r12, 0x12C(r12)
		  fctiwz    f3, f2
		  stfd      f4, 0xA8(r1)
		  lwz       r7, 0xAC(r1)
		  stfd      f3, 0xC0(r1)
		  lwz       r5, 0xC4(r1)
		  stw       r6, 0xCC(r1)
		  stw       r31, 0xC8(r1)
		  lfd       f2, 0xC8(r1)
		  stb       r0, 0x8(r1)
		  fsubs     f2, f2, f31
		  stb       r0, 0x18(r1)
		  fmadds    f0, f2, f0, f1
		  stb       r7, 0x9(r1)
		  stb       r5, 0xA(r1)
		  fctiwz    f0, f0
		  stb       r7, 0x19(r1)
		  stfd      f0, 0xD8(r1)
		  lwz       r0, 0xDC(r1)
		  stb       r5, 0x1A(r1)
		  stb       r0, 0xB(r1)
		  stb       r0, 0x1B(r1)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x18(r1)
		  mr        r3, r28
		  addi      r4, r1, 0x10
		  stw       r0, 0x10(r1)
		  lwz       r12, 0x0(r28)
		  lwz       r12, 0x128(r12)
		  mtctr     r12
		  bctrl
		  addi      r30, r30, 0xC
		  addi      r29, r29, 0x1

		.loc_0x330:
		  lwz       r0, 0x0(r25)
		  cmpw      r29, r0
		  blt+      .loc_0x5C

		.loc_0x33C:
		  psq_l     f31,0x138(r1),0,0
		  lfd       f31, 0x130(r1)
		  psq_l     f30,0x128(r1),0,0
		  lfd       f30, 0x120(r1)
		  psq_l     f29,0x118(r1),0,0
		  lfd       f29, 0x110(r1)
		  psq_l     f28,0x108(r1),0,0
		  lfd       f28, 0x100(r1)
		  lmw       r24, 0xE0(r1)
		  lwz       r0, 0x144(r1)
		  mtlr      r0
		  addi      r1, r1, 0x140
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030269C
	 * Size:	0000C8
	 */
	float calcSmooth0to1(float, float)
	{
		/*
	fdivs    f1, f1, f2
	lfs      f0, lbl_8051D51C@sda21(r2)
	stwu     r1, -0x20(r1)
	fcmpo    cr0, f1, f0
	bge      lbl_803026B4
	fmr      f1, f0

lbl_803026B4:
	lfs      f0, lbl_8051D510@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803026C4
	fmr      f1, f0

lbl_803026C4:
	lfs      f0, lbl_8051D530@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803026D4
	b        lbl_8030275C

lbl_803026D4:
	lfd      f4, lbl_8051D538@sda21(r2)
	fsubs    f1, f1, f0
	lfs      f2, lbl_8051D540@sda21(r2)
	fsub     f3, f4, f0
	lfs      f0, lbl_8051D51C@sda21(r2)
	fmuls    f1, f2, f1
	lfs      f2, lbl_8051D544@sda21(r2)
	fdiv     f3, f4, f3
	fmul     f1, f3, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80302730
	lfs      f0, lbl_8051D514@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_80302754

lbl_80302730:
	lfs      f0, lbl_8051D518@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_80302754:
	lfs      f0, lbl_8051D530@sda21(r2)
	fmadds   f1, f2, f1, f0

lbl_8030275C:
	addi     r1, r1, 0x20
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80302764
	 * Size:	0000B0
	 */
	// void calcGlbCenter__Q22og6ScreenFP7J2DPaneP10Vector2<float>(void)
	void calcGlbCenter(J2DPane*, Vector2f*)
	{
		/*
		stwu     r1, -0x40(r1)
		mflr     r0
		li       r5, 0
		stw      r0, 0x44(r1)
		stw      r31, 0x3c(r1)
		mr       r31, r4
		stw      r30, 0x38(r1)
		mr       r30, r3
		addi     r3, r1, 0x14
		mr       r4, r30
		bl       getGlbVtx__7J2DPaneCFUc
		lwz      r5, 0x14(r1)
		mr       r4, r30
		lwz      r6, 0x18(r1)
		addi     r3, r1, 8
		lwz      r0, 0x1c(r1)
		stw      r5, 0x2c(r1)
		li       r5, 3
		stw      r6, 0x30(r1)
		stw      r0, 0x34(r1)
		bl       getGlbVtx__7J2DPaneCFUc
		lwz      r0, 8(r1)
		lwz      r3, 0xc(r1)
		stw      r0, 0x20(r1)
		lwz      r0, 0x10(r1)
		stw      r3, 0x24(r1)
		lfs      f3, 0x2c(r1)
		lfs      f2, 0x20(r1)
		lfs      f1, 0x30(r1)
		lfs      f0, 0x24(r1)
		fadds    f3, f3, f2
		lfs      f2, lbl_8051D520@sda21(r2)
		fadds    f0, f1, f0
		stw      r0, 0x28(r1)
		fmuls    f1, f3, f2
		fmuls    f0, f0, f2
		stfs     f1, 0(r31)
		stfs     f0, 4(r31)
		lwz      r31, 0x3c(r1)
		lwz      r30, 0x38(r1)
		lwz      r0, 0x44(r1)
		mtlr     r0
		addi     r1, r1, 0x40
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000154
	 */
	void kakomiPane(J2DPane*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000224
	 */
	void centeringPane(J2DPane*, bool, bool)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80302814
	 * Size:	00010C
	 */
	u64 maskTag2(u64, u16)
	{
		/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	clrlwi   r0, r5, 0x10
	cmplwi   r0, 0x63
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	mr       r30, r5
	stw      r29, 0x44(r1)
	mr       r29, r4
	ble      lbl_80302860
	lis      r3, lbl_8048DCCC@ha
	lis      r5, lbl_8048DCF8@ha
	addi     r3, r3, lbl_8048DCCC@l
	li       r4, 0x1c2
	addi     r5, r5, lbl_8048DCF8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80302860:
	lis      r4, 0x66666667@ha
	lis      r0, 0xffff
	clrlwi   r11, r30, 0x10
	li       r3, -1
	addi     r10, r4, 0x66666667@l
	and      r0, r29, r0
	mulhw    r4, r10, r11
	and      r3, r31, r3
	addi     r5, r1, 8
	mr       r31, r3
	srawi    r8, r4, 2
	srawi    r4, r4, 2
	srwi     r6, r4, 0x1f
	srwi     r9, r8, 0x1f
	add      r7, r4, r6
	mulhw    r4, r10, r7
	add      r8, r8, r9
	srawi    r4, r4, 2
	srwi     r6, r4, 0x1f
	add      r4, r4, r6
	mulli    r4, r4, 0xa
	mulli    r6, r8, 0xa
	subf     r4, r4, r7
	subf     r6, r6, r11
	slwi     r4, r4, 8
	add      r4, r6, r4
	addi     r4, r4, 0x3030
	or       r30, r4, r0
	mr       r4, r30
	bl       TagToName__Q22og6ScreenFUxPc
	lis      r3, 0x0000FFFF@ha
	addi     r5, r1, 0x28
	addi     r4, r3, 0x0000FFFF@l
	li       r3, 0
	bl       TagToHex__Q22og6ScreenFUxPc
	addi     r5, r1, 0x14
	lis      r4, 0xffff
	li       r3, -1
	bl       TagToHex__Q22og6ScreenFUxPc
	lwz      r0, 0x54(r1)
	mr       r3, r31
	mr       r4, r30
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80302920
	 * Size:	0000A0
	 */
	u64 maskTag(u64, u16, u16)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	clrlwi   r5, r5, 0x10
	stw      r0, 0x24(r1)
	cmplwi   r5, 8
	stmw     r27, 0xc(r1)
	mr       r28, r3
	mr       r27, r4
	mr       r29, r6
	blt      lbl_80302954
	li       r4, 0
	li       r3, 0
	b        lbl_803029AC

lbl_80302954:
	addi     r0, r5, -1
	li       r3, 0
	rlwinm   r31, r0, 3, 0x10, 0x1c
	li       r4, 0xff
	mr       r5, r31
	bl       __shl2i
	clrlwi   r5, r29, 0x10
	nor      r29, r4, r4
	cmplwi   r5, 9
	nor      r30, r3, r3
	bgt      lbl_8030298C
	addi     r4, r5, 0x30
	srawi    r3, r4, 0x1f
	b        lbl_80302994

lbl_8030298C:
	addi     r4, r5, 0x37
	srawi    r3, r4, 0x1f

lbl_80302994:
	mr       r5, r31
	bl       __shl2i
	and      r5, r27, r29
	and      r0, r28, r30
	or       r4, r4, r5
	or       r3, r3, r0

lbl_803029AC:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803029C0
	 * Size:	0000B4
	 */
	i32 CalcKeta(u32)
	{
		/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x38(r1)
	lfd      f31, lbl_8051D528@sda21(r2)
	stfd     f30, 0x30(r1)
	lfd      f30, lbl_8051D550@sda21(r2)
	stw      r31, 0x2c(r1)
	lis      r31, 0x4330
	stw      r30, 0x28(r1)
	li       r30, 1
	stw      r29, 0x24(r1)
	li       r29, 1
	stw      r28, 0x20(r1)
	mr       r28, r3

lbl_803029FC:
	xoris    r0, r29, 0x8000
	stw      r31, 8(r1)
	lfd      f1, lbl_8051D548@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsub     f2, f0, f30
	bl       pow
	stw      r28, 0x14(r1)
	stw      r31, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsub     f0, f0, f31
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_80302A48
	addi     r0, r29, 1
	addi     r29, r29, 1
	cmpwi    r29, 0xa
	clrlwi   r30, r0, 0x10
	blt      lbl_803029FC

lbl_80302A48:
	lwz      r0, 0x44(r1)
	mr       r3, r30
	lfd      f31, 0x38(r1)
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80302A74
	 * Size:	000158
	 */
	void MojiToNum(unsigned long long, int)
	{
		/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x68(r1)
	stfd     f30, 0x60(r1)
	stmw     r22, 0x38(r1)
	mr       r26, r5
	lis      r5, lbl_8048DCC0@ha
	mr       r25, r3
	cmpwi    r26, 1
	mr       r24, r4
	addi     r31, r5, lbl_8048DCC0@l
	blt      lbl_80302AB0
	cmpwi    r26, 8
	ble      lbl_80302AD8

lbl_80302AB0:
	mr       r4, r24
	mr       r3, r25
	addi     r5, r1, 0x14
	bl       TagToName__Q22og6ScreenFUxPc
	addi     r3, r31, 0xc
	addi     r5, r31, 0x134
	addi     r6, r1, 0x14
	li       r4, 0x237
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80302AD8:
	lfd      f30, lbl_8051D550@sda21(r2)
	li       r28, 0
	li       r29, 0
	li       r27, 0
	li       r30, 0
	lis      r23, 0x4330
	b        lbl_80302BA0

lbl_80302AF4:
	mr       r3, r25
	mr       r4, r24
	mr       r5, r30
	bl       __shr2u
	li       r0, 0xff
	and      r4, r4, r0
	li       r0, -48
	addc.    r22, r4, r0
	blt      lbl_80302B20
	cmpwi    r22, 9
	ble      lbl_80302B48

lbl_80302B20:
	mr       r4, r24
	mr       r3, r25
	addi     r5, r1, 8
	bl       TagToName__Q22og6ScreenFUxPc
	addi     r3, r31, 0xc
	addi     r5, r31, 0x150
	addi     r6, r1, 8
	li       r4, 0x240
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80302B48:
	xoris    r0, r27, 0x8000
	stw      r23, 0x20(r1)
	lfd      f1, lbl_8051D548@sda21(r2)
	stw      r0, 0x24(r1)
	lfd      f0, 0x20(r1)
	fsub     f2, f0, f30
	bl       pow
	fmr      f31, f1
	mr       r3, r29
	mr       r4, r28
	bl       __cvt_ull_dbl
	xoris    r0, r22, 0x8000
	stw      r23, 0x28(r1)
	stw      r0, 0x2c(r1)
	lfd      f0, 0x28(r1)
	fsub     f0, f0, f30
	fmadd    f1, f0, f31, f1
	bl       __cvt_dbl_usll
	mr       r28, r4
	mr       r29, r3
	addi     r27, r27, 1
	addi     r30, r30, 8

lbl_80302BA0:
	cmpw     r27, r26
	blt      lbl_80302AF4
	lfd      f31, 0x68(r1)
	mr       r4, r28
	mr       r3, r29
	lfd      f30, 0x60(r1)
	lmw      r22, 0x38(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80302BCC
	 * Size:	000158
	 */
	void TagToName(u64, char*)
	{
		/*
	li       r8, 0xff
	srwi     r0, r3, 0x18
	and      r6, r0, r8
	li       r9, 0
	srwi     r0, r3, 0x10
	stb      r6, 0(r5)
	and      r6, r0, r8
	srwi     r0, r3, 8
	stb      r6, 1(r5)
	and      r7, r0, r8
	rotlwi   r6, r4, 0x10
	stb      r7, 2(r5)
	and      r7, r3, r8
	rotlwi   r0, r4, 8
	rlwimi   r6, r3, 0x10, 0, 0xf
	rlwimi   r0, r3, 8, 0, 0x17
	stb      r7, 3(r5)
	and      r7, r0, r8
	and      r6, r6, r8
	stb      r7, 4(r5)
	rotlwi   r0, r4, 0x18
	rlwimi   r0, r3, 0x18, 0, 7
	and      r3, r4, r8
	stb      r6, 5(r5)
	and      r0, r0, r8
	stb      r0, 6(r5)
	li       r0, 0x3f
	stb      r3, 7(r5)
	stb      r9, 8(r5)
	lbz      r3, 0(r5)
	extsb    r3, r3
	cmpwi    r3, 0x20
	blt      lbl_80302C58
	cmpwi    r3, 0x7e
	ble      lbl_80302C5C

lbl_80302C58:
	stb      r0, 0(r5)

lbl_80302C5C:
	lbz      r3, 1(r5)
	extsb    r3, r3
	cmpwi    r3, 0x20
	blt      lbl_80302C74
	cmpwi    r3, 0x7e
	ble      lbl_80302C78

lbl_80302C74:
	stb      r0, 1(r5)

lbl_80302C78:
	lbz      r3, 2(r5)
	extsb    r3, r3
	cmpwi    r3, 0x20
	blt      lbl_80302C90
	cmpwi    r3, 0x7e
	ble      lbl_80302C94

lbl_80302C90:
	stb      r0, 2(r5)

lbl_80302C94:
	lbz      r3, 3(r5)
	extsb    r3, r3
	cmpwi    r3, 0x20
	blt      lbl_80302CAC
	cmpwi    r3, 0x7e
	ble      lbl_80302CB0

lbl_80302CAC:
	stb      r0, 3(r5)

lbl_80302CB0:
	lbz      r3, 4(r5)
	extsb    r3, r3
	cmpwi    r3, 0x20
	blt      lbl_80302CC8
	cmpwi    r3, 0x7e
	ble      lbl_80302CCC

lbl_80302CC8:
	stb      r0, 4(r5)

lbl_80302CCC:
	lbz      r3, 5(r5)
	extsb    r3, r3
	cmpwi    r3, 0x20
	blt      lbl_80302CE4
	cmpwi    r3, 0x7e
	ble      lbl_80302CE8

lbl_80302CE4:
	stb      r0, 5(r5)

lbl_80302CE8:
	lbz      r3, 6(r5)
	extsb    r3, r3
	cmpwi    r3, 0x20
	blt      lbl_80302D00
	cmpwi    r3, 0x7e
	ble      lbl_80302D04

lbl_80302D00:
	stb      r0, 6(r5)

lbl_80302D04:
	lbz      r3, 7(r5)
	extsb    r3, r3
	cmpwi    r3, 0x20
	blt      lbl_80302D1C
	cmpwi    r3, 0x7e
	blelr

lbl_80302D1C:
	stb      r0, 7(r5)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000134
	 */
	u64 NameToTag(char*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80302D24
	 * Size:	0000F4
	 */
	u64 CharCodeToTag(char*)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8048DE28@ha
	stw      r0, 0x24(r1)
	addi     r4, r4, lbl_8048DE28@l
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	lbz      r5, 0(r3)
	lbz      r6, 1(r3)
	addi     r3, r1, 8
	crclr    6
	bl       sprintf
	lbz      r0, 8(r1)
	li       r9, 0
	lbz      r3, 9(r1)
	li       r10, 0xff
	extsb    r6, r0
	lbz      r0, 0xa(r1)
	srawi    r5, r6, 0x1f
	extsb    r4, r3
	extsb    r3, r0
	and      r30, r6, r10
	and      r0, r5, r9
	srawi    r7, r4, 0x1f
	slwi     r8, r0, 8
	lbz      r0, 0xb(r1)
	and      r31, r4, r10
	srawi    r6, r3, 0x1f
	extsb    r4, r0
	lbz      r0, 0xc(r1)
	srawi    r5, r4, 0x1f
	rlwimi   r8, r30, 8, 0x18, 0x1f
	and      r11, r4, r10
	and      r4, r7, r9
	or       r4, r8, r4
	and      r12, r3, r10
	rlwimi   r31, r30, 8, 0x10, 0x17
	extsb    r3, r0
	slwi     r7, r4, 8
	and      r6, r6, r9
	rlwimi   r12, r31, 8, 8, 0x17
	srawi    r0, r3, 0x1f
	rlwimi   r7, r31, 8, 0x18, 0x1f
	and      r4, r3, r10
	and      r3, r5, r9
	rlwimi   r11, r12, 8, 0, 0x17
	or       r5, r7, r6
	lwz      r31, 0x1c(r1)
	slwi     r5, r5, 8
	and      r0, r0, r9
	rlwimi   r5, r12, 8, 0x18, 0x1f
	rlwimi   r4, r11, 8, 0, 0x17
	or       r3, r5, r3
	lwz      r30, 0x18(r1)
	slwi     r3, r3, 8
	rlwimi   r3, r11, 8, 0x18, 0x1f
	or       r3, r3, r0
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80302E18
	 * Size:	000094
	 */
	void TagToHex(u64, char*)
	{
		/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r26, r5
	li       r28, 0
	mr       r25, r3
	mr       r24, r4
	mr       r31, r26
	mr       r30, r28
	li       r27, 0
	li       r29, 0xf

lbl_80302E48:
	subfic   r5, r28, 0x3c
	mr       r3, r25
	mr       r4, r24
	bl       __shr2u
	and      r3, r4, r29
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 9
	addi     r0, r3, 0x57
	extsb    r0, r0
	bgt      lbl_80302E78
	addi     r0, r3, 0x30
	extsb    r0, r0

lbl_80302E78:
	addi     r27, r27, 1
	stb      r0, 0(r31)
	cmpwi    r27, 0x10
	addi     r28, r28, 4
	addi     r31, r31, 1
	blt      lbl_80302E48
	li       r0, 0
	stb      r0, 0x10(r26)
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80302EAC
	 * Size:	00018C
	 */
	J2DPane* TagSearch(J2DScreen* parentScreen, u64 tag)
	{
		/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stw      r31, 0x42c(r1)
	stw      r30, 0x428(r1)
	mr       r30, r6
	stw      r29, 0x424(r1)
	stw      r28, 0x420(r1)
	mr       r28, r5
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	bne      lbl_80303014
	li       r12, 0xff
	srwi     r7, r28, 0x18
	srwi     r6, r28, 0x10
	srwi     r5, r28, 8
	rotlwi   r4, r30, 8
	rotlwi   r3, r30, 0x10
	rotlwi   r0, r30, 0x18
	li       r29, 0
	and      r11, r7, r12
	rlwimi   r4, r28, 8, 0, 0x17
	and      r7, r4, r12
	and      r10, r6, r12
	rlwimi   r3, r28, 0x10, 0, 0xf
	and      r9, r5, r12
	and      r6, r3, r12
	rlwimi   r0, r28, 0x18, 0, 7
	and      r5, r0, r12
	and      r8, r28, r12
	and      r4, r30, r12
	stb      r9, 0xa(r1)
	li       r0, 2
	addi     r9, r1, 8
	stb      r11, 8(r1)
	li       r3, 0x3f
	stb      r10, 9(r1)
	stb      r8, 0xb(r1)
	stb      r7, 0xc(r1)
	stb      r6, 0xd(r1)
	stb      r5, 0xe(r1)
	stb      r4, 0xf(r1)
	stb      r29, 0x10(r1)
	mtctr    r0

lbl_80302F68:
	lbz      r0, 0(r9)
	extsb    r0, r0
	cmpwi    r0, 0x20
	blt      lbl_80302F80
	cmpwi    r0, 0x7e
	ble      lbl_80302F84

lbl_80302F80:
	stb      r3, 0(r9)

lbl_80302F84:
	lbz      r0, 1(r9)
	extsb    r0, r0
	cmpwi    r0, 0x20
	blt      lbl_80302F9C
	cmpwi    r0, 0x7e
	ble      lbl_80302FA0

lbl_80302F9C:
	stb      r3, 1(r9)

lbl_80302FA0:
	lbz      r0, 2(r9)
	extsb    r0, r0
	cmpwi    r0, 0x20
	blt      lbl_80302FB8
	cmpwi    r0, 0x7e
	ble      lbl_80302FBC

lbl_80302FB8:
	stb      r3, 2(r9)

lbl_80302FBC:
	lbz      r0, 3(r9)
	extsb    r0, r0
	cmpwi    r0, 0x20
	blt      lbl_80302FD4
	cmpwi    r0, 0x7e
	ble      lbl_80302FD8

lbl_80302FD4:
	stb      r3, 3(r9)

lbl_80302FD8:
	addi     r9, r9, 4
	addi     r29, r29, 3
	bdnz     lbl_80302F68
	lis      r4, lbl_8048DE34@ha
	addi     r3, r1, 0x14
	addi     r4, r4, lbl_8048DE34@l
	addi     r5, r1, 8
	crclr    6
	bl       sprintf
	lis      r3, lbl_8048DCCC@ha
	addi     r5, r1, 0x14
	addi     r3, r3, lbl_8048DCCC@l
	li       r4, 0x2b0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80303014:
	lwz      r0, 0x434(r1)
	mr       r3, r31
	lwz      r31, 0x42c(r1)
	lwz      r30, 0x428(r1)
	lwz      r29, 0x424(r1)
	lwz      r28, 0x420(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80303038
	 * Size:	000028
	 */
	AlphaMgr::AlphaMgr(void)
	{
		/*
	li       r0, 0
	lfs      f1, lbl_8051D51C@sda21(r2)
	stw      r0, 0(r3)
	lfs      f0, lbl_8051D510@sda21(r2)
	stfs     f1, 4(r3)
	stfs     f1, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f1, 0x10(r3)
	stfs     f0, 0x14(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80303060
	 * Size:	00000C
	 */
	void AlphaMgr::setBlinkArea(float, float)
	{
		/*
	stfs     f1, 0x10(r3)
	stfs     f2, 0x14(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030306C
	 * Size:	000064
	 */
	void AlphaMgr::in(float)
	{
		/*
	lfs      f3, lbl_8051D510@sda21(r2)
	lfs      f0, 4(r3)
	fcmpu    cr0, f3, f0
	bne      lbl_80303088
	li       r0, 0
	stw      r0, 0(r3)
	blr

lbl_80303088:
	lfs      f0, lbl_8051D51C@sda21(r2)
	fcmpu    cr0, f0, f1
	bne      lbl_803030A4
	li       r0, 0
	stw      r0, 0(r3)
	stfs     f3, 4(r3)
	blr

lbl_803030A4:
	stfs     f0, 4(r3)
	li       r0, 1
	stw      r0, 0(r3)
	lwz      r4, sys@sda21(r13)
	lfs      f2, 4(r3)
	lfs      f0, 0x54(r4)
	fsubs    f2, f3, f2
	fdivs    f0, f1, f0
	fdivs    f0, f2, f0
	stfs     f0, 8(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803030D0
	 * Size:	000064
	 */
	void AlphaMgr::out(float)
	{
		/*
	lfs      f0, lbl_8051D510@sda21(r2)
	lfs      f2, lbl_8051D51C@sda21(r2)
	stfs     f0, 4(r3)
	lfs      f0, 4(r3)
	fcmpu    cr0, f2, f0
	bne      lbl_803030F4
	li       r0, 0
	stw      r0, 0(r3)
	blr

lbl_803030F4:
	fcmpu    cr0, f2, f1
	bne      lbl_8030310C
	li       r0, 0
	stw      r0, 0(r3)
	stfs     f2, 4(r3)
	blr

lbl_8030310C:
	li       r0, 2
	stw      r0, 0(r3)
	lwz      r4, sys@sda21(r13)
	lfs      f2, 4(r3)
	lfs      f0, 0x54(r4)
	fneg     f2, f2
	fdivs    f0, f1, f0
	fdivs    f0, f2, f0
	stfs     f0, 8(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80303134
	 * Size:	000050
	 */
	void AlphaMgr::blink(float)
	{
		/*
	lwz      r0, 0(r3)
	cmpwi    r0, 0
	beq      lbl_80303148
	cmpwi    r0, 3
	bnelr

lbl_80303148:
	li       r0, 3
	lfs      f0, lbl_8051D51C@sda21(r2)
	stw      r0, 0(r3)
	lfs      f2, 8(r3)
	lwz      r4, sys@sda21(r13)
	fcmpo    cr0, f2, f0
	lfs      f0, 0x54(r4)
	ble      lbl_80303174
	fdivs    f0, f0, f1
	stfs     f0, 8(r3)
	blr

lbl_80303174:
	fdivs    f0, f0, f1
	fneg     f0, f0
	stfs     f0, 8(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80303184
	 * Size:	000190
	 */
	u8 AlphaMgr::calc()
	{
		/*
	stwu     r1, -0x10(r1)
	lwz      r0, 0(r3)
	cmpwi    r0, 2
	beq      lbl_80303268
	bge      lbl_803031A8
	cmpwi    r0, 0
	beq      lbl_803032F4
	bge      lbl_803031B8
	b        lbl_803032F4

lbl_803031A8:
	cmpwi    r0, 4
	beq      lbl_803031EC
	bge      lbl_803032F4
	b        lbl_8030329C

lbl_803031B8:
	lfs      f2, 4(r3)
	lfs      f1, 8(r3)
	lfs      f0, lbl_8051D510@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 4(r3)
	lfs      f1, 4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803032F4
	stfs     f0, 4(r3)
	li       r0, 0
	stw      r0, 0(r3)
	b        lbl_803032F4

lbl_803031EC:
	lfs      f2, 4(r3)
	lfs      f1, 8(r3)
	lfs      f0, lbl_8051D510@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 4(r3)
	lfs      f1, 4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803032F4
	stfs     f0, 4(r3)
	lwz      r0, 0(r3)
	lfs      f2, 0xc(r3)
	cmpwi    r0, 0
	beq      lbl_8030322C
	cmpwi    r0, 3
	bne      lbl_803032F4

lbl_8030322C:
	li       r0, 3
	lfs      f0, lbl_8051D51C@sda21(r2)
	stw      r0, 0(r3)
	lfs      f1, 8(r3)
	lwz      r4, sys@sda21(r13)
	fcmpo    cr0, f1, f0
	lfs      f0, 0x54(r4)
	ble      lbl_80303258
	fdivs    f0, f0, f2
	stfs     f0, 8(r3)
	b        lbl_803032F4

lbl_80303258:
	fdivs    f0, f0, f2
	fneg     f0, f0
	stfs     f0, 8(r3)
	b        lbl_803032F4

lbl_80303268:
	lfs      f2, 4(r3)
	lfs      f1, 8(r3)
	lfs      f0, lbl_8051D51C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 4(r3)
	lfs      f1, 4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803032F4
	stfs     f0, 4(r3)
	li       r0, 0
	stw      r0, 0(r3)
	b        lbl_803032F4

lbl_8030329C:
	lfs      f1, 4(r3)
	lfs      f0, 8(r3)
	fadds    f0, f1, f0
	stfs     f0, 4(r3)
	lfs      f1, 4(r3)
	lfs      f0, 0x14(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803032D4
	stfs     f0, 4(r3)
	lfs      f0, 8(r3)
	fneg     f0, f0
	stfs     f0, 8(r3)
	b        lbl_803032F4

lbl_803032D4:
	lfs      f0, 0x10(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803032F4
	stfs     f0, 4(r3)
	lfs      f0, 8(r3)
	fneg     f0, f0
	stfs     f0, 8(r3)

lbl_803032F4:
	lfs      f1, lbl_8051D558@sda21(r2)
	lfs      f0, 4(r3)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80303314
	 * Size:	0001D4
	 */
	void setAlphaScreen(J2DPane*)
	{
		/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r4, 1
	li       r5, 0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r3
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r31, 0xdc(r25)
	cmplwi   r31, 0
	beq      lbl_803034CC
	addi     r31, r31, -12
	b        lbl_803034CC

lbl_80303348:
	lwz      r28, 0xc(r31)
	li       r4, 1
	li       r5, 0
	mr       r3, r28
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r30, 0xdc(r28)
	cmplwi   r30, 0
	beq      lbl_803034B4
	addi     r30, r30, -12
	b        lbl_803034B4

lbl_80303370:
	lwz      r28, 0xc(r30)
	li       r4, 1
	li       r5, 0
	mr       r3, r28
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r29, 0xdc(r28)
	cmplwi   r29, 0
	beq      lbl_8030349C
	addi     r29, r29, -12
	b        lbl_8030349C

lbl_80303398:
	lwz      r28, 0xc(r29)
	li       r4, 1
	li       r5, 0
	mr       r3, r28
	bl       setInfluencedAlpha__7J2DPaneFbb
	addi     r3, r28, 0xdc
	bl       getFirstLink__10JSUPtrListCFv
	cmplwi   r3, 0
	beq      lbl_803033C0
	addi     r3, r3, -12

lbl_803033C0:
	mr       r26, r3
	b        lbl_80303484

lbl_803033C8:
	lwz      r28, 0xc(r26)
	li       r4, 1
	li       r5, 0
	mr       r3, r28
	bl       setInfluencedAlpha__7J2DPaneFbb
	addi     r27, r28, 0xdc
	mr       r3, r27
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	mr       r25, r3
	b        lbl_80303464

lbl_803033F0:
	mr       r3, r25
	bl       "getObject__17JSUTree<7J2DPane>CFv"
	li       r4, 1
	mr       r28, r3
	li       r5, 0
	bl       setInfluencedAlpha__7J2DPaneFbb
	mr       r3, r28
	bl       getPaneTree__7J2DPaneFv
	mr       r28, r3
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
	b        lbl_8030343C

lbl_80303428:
	addi     r3, r1, 8
	bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	addi     r3, r1, 8
	bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_8030343C:
	mr       r3, r28
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
	clrlwi.  r0, r3, 0x18
	bne      lbl_80303428
	mr       r3, r25
	bl       "getNextChild__17JSUTree<7J2DPane>CFv"
	mr       r25, r3

lbl_80303464:
	mr       r3, r27
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	cmplw    r25, r3
	bne      lbl_803033F0
	lwz      r26, 0x18(r26)
	cmplwi   r26, 0
	beq      lbl_80303484
	addi     r26, r26, -12

lbl_80303484:
	cmplwi   r26, 0
	bne      lbl_803033C8
	lwz      r29, 0x18(r29)
	cmplwi   r29, 0
	beq      lbl_8030349C
	addi     r29, r29, -12

lbl_8030349C:
	cmplwi   r29, 0
	bne      lbl_80303398
	lwz      r30, 0x18(r30)
	cmplwi   r30, 0
	beq      lbl_803034B4
	addi     r30, r30, -12

lbl_803034B4:
	cmplwi   r30, 0
	bne      lbl_80303370
	lwz      r31, 0x18(r31)
	cmplwi   r31, 0
	beq      lbl_803034CC
	addi     r31, r31, -12

lbl_803034CC:
	cmplwi   r31, 0
	bne      lbl_80303348
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
		*/
	}

} // namespace Screen

} // namespace og

/*
 * --INFO--
 * Address:	803034E8
 * Size:	00000C
 */
void JSUTreeIterator<J2DPane>::getObject() const
{
	/*
	lwz      r3, 0(r3)
	lwz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803034F4
 * Size:	000008
 */
JSUTree<J2DPane> J2DPane::getPaneTree()
{
	return m_tree;
	/*
	addi     r3, r3, 0xdc
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000364
 */
void printPaneTree__Q22og6ScreenFP7J2DPane25JSUTreeIterator<J2DPane>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
float J2DPane::getTranslateY() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
float J2DPane::getTranslateX() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803034FC
 * Size:	000010
 */
u64 J2DPane::getTagName() const
{
	return m_tag;
	/*
	mr       r4, r3
	lwz      r3, 0x10(r3)
	lwz      r4, 0x14(r4)
	blr
	*/
}

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000070
	 */
	AnimeScreen::AnimeScreen(JKRArchive*, int)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	8030350C
	 * Size:	000094
	 */
	P2DScreen::Mgr_tuning::~Mgr_tuning(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80303584
	lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
	addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
	stw      r0, 0(r30)
	beq      lbl_80303574
	lis      r3, __vt__Q29P2DScreen3Mgr@ha
	addic.   r0, r30, 0x118
	addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
	stw      r0, 0(r30)
	beq      lbl_80303568
	lis      r4, __vt__Q29P2DScreen4Node@ha
	addi     r3, r30, 0x118
	addi     r0, r4, __vt__Q29P2DScreen4Node@l
	li       r4, 0
	stw      r0, 0x118(r30)
	bl       __dt__5CNodeFv

lbl_80303568:
	mr       r3, r30
	li       r4, 0
	bl       __dt__9J2DScreenFv

lbl_80303574:
	extsh.   r0, r31
	ble      lbl_80303584
	mr       r3, r30
	bl       __dl__FPv

lbl_80303584:
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
	 * Address:	........
	 * Size:	0000C8
	 */
	void AnimeScreen::addAnim(unsigned long long, char*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000088
	 */
	void setP2DScreen(char*, unsigned long, JKRArchive*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000004
	 */
	void dumpInfoResTIMG(ResTIMG const*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000200
	 */
	void drawPaneFrame(J2DGrafContext&, J2DPane*, JUtility::TColor&)
	{
		// UNUSED FUNCTION
	}

} // namespace Screen

} // namespace og

/*
 * --INFO--
 * Address:	803035A0
 * Size:	000004
 */
void P2DScreen::Node::update(void) { }

/*
 * --INFO--
 * Address:	803035A4
 * Size:	000004
 */
void P2DScreen::Node::draw(Graphics&, J2DGrafContext&) { }

/*
 * --INFO--
 * Address:	803035A8
 * Size:	000004
 */
void P2DScreen::Node::doInit(void) { }

/*
 * --INFO--
 * Address:	803035AC
 * Size:	000060
 */
P2DScreen::Node::~Node(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803035F0
	lis      r5, __vt__Q29P2DScreen4Node@ha
	li       r4, 0
	addi     r0, r5, __vt__Q29P2DScreen4Node@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_803035F0
	mr       r3, r30
	bl       __dl__FPv

lbl_803035F0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0000A4
	 */
	AnimeScreen::~AnimeScreen(void)
	{
		// UNUSED FUNCTION
	}
} // namespace Screen
} // namespace og
