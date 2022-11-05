#include "BootSection.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_bootSection_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049AF08
    lbl_8049AF08:
        .skip 0xC
        .asciz "bootSection.cpp"
        .asciz "P2Assert"
        .skip 0x3
    TitlePiki_Red:
        .asciz "title_red_5a3.bti"
        .skip 0x2
    TitlePiki_Yellow:
        .asciz "title_yellow_5a3.bti"
        .skip 0x3
    TitlePiki_Blue:
        .asciz "title_blue_5a3.bti"
        .skip 0x1
    TitlePiki_White:
        .asciz "title_white_5a3.bti"
    TitlePiki_Violet:
        .asciz "title_violet_5a3.bti"
        .skip 0x3
        .4byte TitlePiki_Red
        .4byte TitlePiki_Yellow
        .4byte TitlePiki_Blue
        .4byte TitlePiki_White
        .4byte TitlePiki_Violet
        .4byte 0x8375815B
        .4byte 0x8367835A
        .4byte 0x834E8356
        .4byte 0x83878393
        .4byte 0x00000000
        .asciz "/user/yamashita/arc/boot_us.szs"
        .asciz "/data/timg/nintendo_376x104.bti"
        .asciz "/data/timg/dolby_mark.bti"
        .skip 0x2
        .asciz "/data/timg/warning.bti"
        .skip 0x1
        .asciz "/data/timg/warning_pstart.bti"
        .skip 0x2
        .asciz "og::Screen::Manager2D::create"
        .skip 0x2
        .asciz "ebiScreen"
        .skip 0x2
        .asciz "TParticle2dMgr"
        .skip 0x1
        .asciz "user/Ebisawa/effect/eff2d_game2d.jpc"
        .skip 0x3
        .asciz "ebi::TScreenProgre"
        .skip 0x1
        .asciz "ebi::TScreenProgre::loadResource"
        .skip 0x3
        .asciz "PSGame.h"
        .skip 0x3

    .section .data, "wa"	# 0x8049E220 - 0x804EFC20
    .global lbl_804ECFE8
    lbl_804ECFE8:
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000003
        .4byte 0x00000000
    .global lbl_804ECFF8
    lbl_804ECFF8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804ED004
    lbl_804ED004:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadResident__11BootSectionFv
    .global lbl_804ED010
    lbl_804ED010:
        .4byte lbl_80448834
        .4byte lbl_80448834
        .4byte lbl_80448834
        .4byte lbl_80448834
        .4byte lbl_80448844
        .4byte lbl_8044884C
        .4byte lbl_80448978
        .4byte lbl_804488AC
        .4byte lbl_8044890C
        .4byte lbl_8044896C
        .4byte lbl_8044896C
    .global lbl_804ED03C
    lbl_804ED03C:
        .4byte lbl_8044907C
        .4byte lbl_80449088
        .4byte lbl_80449374
        .4byte lbl_804494C0
        .4byte lbl_80449094
        .4byte lbl_804490A0
        .4byte lbl_804490AC
        .4byte lbl_80449220
        .4byte lbl_804490B8
        .4byte lbl_8044959C
        .4byte lbl_8044962C
    .global lbl_804ED068
    lbl_804ED068:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte load2DResource__11BootSectionFv
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadBootResource__11BootSectionFv
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte waitLoadResource__11BootSectionFv
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte waitLoadResource__11BootSectionFv
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__11BootSection
    __vt__11BootSection:
        .4byte 0
        .4byte 0
        .4byte __dt__11BootSectionFv
        .4byte run__11BootSectionFv
        .4byte update__7SectionFv
        .4byte draw__7SectionFR8Graphics
        .4byte init__11BootSectionFv
        .4byte drawInit__7SectionFR8Graphics
        .4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
        .4byte doExit__7SectionFv
        .4byte forceFinish__7SectionFv
        .4byte forceReset__11BootSectionFv
        .4byte getCurrentSection__7SectionFv
        .4byte doLoadingStart__7SectionFv
        .4byte doLoading__7SectionFv
        .4byte doUpdate__11BootSectionFv
        .4byte doDraw__11BootSectionFR8Graphics
        .4byte isFinishable__7SectionFv
        .4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
        .4byte refreshHIO__Q24Game14BaseHIOSectionFv
    .global "__vt__23Delegate<11BootSection>"
    "__vt__23Delegate<11BootSection>":
        .4byte 0
        .4byte 0
        .4byte "invoke__23Delegate<11BootSection>Fv"
        .4byte 0
        .4byte 0
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sPikminTex__13TinyPikminMgr
    sPikminTex__13TinyPikminMgr:
        .skip 0x18

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sTinyPikminNum__13TinyPikminMgr
    sTinyPikminNum__13TinyPikminMgr:
        .4byte 10

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516290
    lbl_80516290:
        .skip 0x4
    .global lbl_80516294
    lbl_80516294:
        .skip 0x4
    .global sBootSection
    sBootSection:
        .skip 0x4
    .global sTinyPikminMgr
    sTinyPikminMgr:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805209A0
    lbl_805209A0:
        .4byte 0x00000000
    .global lbl_805209A4
    lbl_805209A4:
        .float 1.0
    .global lbl_805209A8
    lbl_805209A8:
        .4byte 0x428C0000
    .global lbl_805209AC
    lbl_805209AC:
        .4byte 0x47000000
    .global lbl_805209B0
    lbl_805209B0:
        .4byte 0x40000000
    .global lbl_805209B4
    lbl_805209B4:
        .4byte 0xC3480000
    .global lbl_805209B8
    lbl_805209B8:
        .4byte 0x3FC00000
        .4byte 0x00000000
    .global lbl_805209C0
    lbl_805209C0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805209C8
    lbl_805209C8:
        .4byte 0x41200000
    .global lbl_805209CC
    lbl_805209CC:
        .4byte 0x41A00000
    .global lbl_805209D0
    lbl_805209D0:
        .4byte 0x40800000
    .global lbl_805209D4
    lbl_805209D4:
        .4byte 0x40A00000
    .global lbl_805209D8
    lbl_805209D8:
        .4byte 0x41080000
    .global lbl_805209DC
    lbl_805209DC:
        .4byte 0x40E00000
    .global lbl_805209E0
    lbl_805209E0:
        .4byte 0x3F0CCCCD
    .global lbl_805209E4
    lbl_805209E4:
        .4byte 0x43960000
    .global lbl_805209E8
    lbl_805209E8:
        .4byte 0xBF800000
    .global lbl_805209EC
    lbl_805209EC:
        .4byte 0x41700000
    .global lbl_805209F0
    lbl_805209F0:
        .4byte 0xC0800000
    .global lbl_805209F4
    lbl_805209F4:
        .4byte 0x3F666666
    .global lbl_805209F8
    lbl_805209F8:
        .float 0.5
    .global lbl_805209FC
    lbl_805209FC:
        .float 0.98
    .global lbl_80520A00
    lbl_80520A00:
        .4byte 0x3F400000
    .global lbl_80520A04
    lbl_80520A04:
        .4byte 0x43B40000
    .global lbl_80520A08
    lbl_80520A08:
        .4byte 0x43E00000
    .global lbl_80520A0C
    lbl_80520A0C:
        .4byte 0x3F4CCCCD
    .global lbl_80520A10
    lbl_80520A10:
        .4byte 0x3E4CCCCD
    .global lbl_80520A14
    lbl_80520A14:
        .4byte 0x40C90FDB
    .global lbl_80520A18
    lbl_80520A18:
        .float 0.1
    .global lbl_80520A1C
    lbl_80520A1C:
        .4byte 0xC3A2F983
    .global lbl_80520A20
    lbl_80520A20:
        .4byte 0x43A2F983
    .global lbl_80520A24
    lbl_80520A24:
        .4byte 0x3DA3D70A
    .global lbl_80520A28
    lbl_80520A28:
        .4byte 0x74696D67
        .4byte 0x2F257300
    .global lbl_80520A30
    lbl_80520A30:
        .4byte 0x43890000
    .global lbl_80520A34
    lbl_80520A34:
        .4byte 0x432F0000
    .global lbl_80520A38
    lbl_80520A38:
        .4byte 0x43260000
        .4byte 0x00000000
    .global lbl_80520A40
    lbl_80520A40:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520A48
    lbl_80520A48:
        .4byte 0x3D08850A
    .global lbl_80520A4C
    lbl_80520A4C:
        .4byte 0x42EA0000
    .global lbl_80520A50
    lbl_80520A50:
        .4byte 0x431A0000
    .global lbl_80520A54
    lbl_80520A54:
        .4byte 0x43BC0000
    .global lbl_80520A58
    lbl_80520A58:
        .float 104.0
    .global lbl_80520A5C
    lbl_80520A5C:
        .4byte 0x3F70A3D7
    .global lbl_80520A60
    lbl_80520A60:
        .4byte 0x433D0000
    .global lbl_80520A64
    lbl_80520A64:
        .4byte 0x43160000
    .global lbl_80520A68
    lbl_80520A68:
        .4byte 0x43680000
    .global lbl_80520A6C
    lbl_80520A6C:
        .4byte 0x42E00000
    .global lbl_80520A70
    lbl_80520A70:
        .4byte 0x44180000
    .global lbl_80520A74
    lbl_80520A74:
        .4byte 0x42FF0000
    .global lbl_80520A78
    lbl_80520A78:
        .4byte 0x42400000
    .global zz_80520a7c
    zz_80520a7c:
        .4byte 0x42700000
*/

/*
 * --INFO--
 * Address:	804473BC
 * Size:	000030
 */
TinyPikmin::TinyPikmin()
{
	/*
	li       r0, 0
	lfs      f1, lbl_805209A0@sda21(r2)
	stw      r0, 0(r3)
	lfs      f0, lbl_805209A4@sda21(r2)
	stw      r0, 4(r3)
	stfs     f1, 8(r3)
	stfs     f1, 0xc(r3)
	stfs     f1, 0x14(r3)
	stfs     f0, 0x18(r3)
	stfs     f1, 0x20(r3)
	stfs     f0, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void TinyPikmin::init(int, float, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void TinyPikmin::wind(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void TinyPikmin::appear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void TinyPikmin::disappear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804473EC
 * Size:	0004B8
 */
void TinyPikmin::update()
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
	lwz      r0, 0(r3)
	cmpwi    r0, 2
	beq      lbl_80447760
	bge      lbl_80447434
	cmpwi    r0, 0
	beq      lbl_8044784C
	bge      lbl_80447444
	b        lbl_8044784C

lbl_80447434:
	cmpwi    r0, 4
	beq      lbl_804477AC
	bge      lbl_8044784C
	b        lbl_804474B4

lbl_80447444:
	lfs      f1, 0x20(r31)
	lfs      f0, 0x24(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_804474A0
	lfs      f0, lbl_805209A0@sda21(r2)
	li       r0, 3
	stfs     f0, 0x20(r31)
	stw      r0, 0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_805209AC@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_805209DC@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_805209D8@sda21(r2)
	fdivs    f2, f3, f2
	fnmadds  f0, f1, f2, f0
	stfs     f0, 0x2c(r31)
	b        lbl_8044784C

lbl_804474A0:
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x20(r31)
	b        lbl_8044784C

lbl_804474B4:
	lfs      f2, 0x2c(r31)
	lfs      f0, lbl_805209E0@sda21(r2)
	lfs      f1, lbl_805209A0@sda21(r2)
	fadds    f0, f2, f0
	stfs     f0, 0x2c(r31)
	lfs      f2, 0x14(r31)
	lfs      f0, 0x2c(r31)
	fadds    f0, f2, f0
	stfs     f0, 0x14(r31)
	lfs      f2, 0x2c(r31)
	fcmpo    cr0, f2, f1
	ble      lbl_8044784C
	lfs      f0, 0x14(r31)
	fcmpo    cr0, f0, f1
	ble      lbl_8044784C
	lwz      r3, sTinyPikminMgr@sda21(r13)
	lbz      r0, 9(r3)
	cmplwi   r0, 0
	beq      lbl_80447640
	lwz      r0, 4(r31)
	cmpwi    r0, 4
	bne      lbl_80447640
	lfs      f0, lbl_805209C8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80447640
	li       r28, 0
	li       r29, 0
	b        lbl_80447628

lbl_80447524:
	cmplw    r28, r0
	lwz      r3, sTinyPikminMgr@sda21(r13)
	bge      lbl_8044753C
	lwz      r0, 0(r3)
	add      r30, r0, r29
	b        lbl_80447540

lbl_8044753C:
	li       r30, 0

lbl_80447540:
	cmplw    r30, r31
	beq      lbl_80447620
	lfs      f1, 0xc(r30)
	lfs      f0, 0xc(r31)
	lfs      f4, 8(r30)
	fsubs    f2, f1, f0
	lfs      f3, 8(r31)
	lfs      f0, lbl_805209A0@sda21(r2)
	fsubs    f1, f4, f3
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_80447584
	ble      lbl_80447588
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80447588

lbl_80447584:
	fmr      f1, f0

lbl_80447588:
	lfs      f0, lbl_805209E4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80447620
	fdivs    f0, f1, f0
	lfs      f2, lbl_805209A4@sda21(r2)
	lfs      f1, lbl_805209CC@sda21(r2)
	fsubs    f0, f2, f0
	fcmpo    cr0, f4, f3
	fmuls    f1, f1, f0
	bge      lbl_804475B4
	lfs      f2, lbl_805209E8@sda21(r2)

lbl_804475B4:
	lwz      r0, 0(r30)
	fmuls    f1, f1, f2
	cmpwi    r0, 0
	beq      lbl_80447620
	cmpwi    r0, 1
	beq      lbl_80447620
	li       r0, 4
	stw      r0, 0(r30)
	lfs      f0, 0x28(r30)
	fadds    f0, f0, f1
	stfs     f0, 0x28(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_805209C0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f3, lbl_805209AC@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_805209CC@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f0, lbl_805209C8@sda21(r2)
	lfs      f2, 0x2c(r30)
	fdivs    f3, f4, f3
	fmadds   f0, f1, f3, f0
	fsubs    f0, f2, f0
	stfs     f0, 0x2c(r30)

lbl_80447620:
	addi     r29, r29, 0x34
	addi     r28, r28, 1

lbl_80447628:
	lwz      r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	cmplw    r28, r0
	blt      lbl_80447524
	lfs      f0, lbl_805209EC@sda21(r2)
	lwz      r3, sBootSection@sda21(r13)
	stfs     f0, 0xe4(r3)

lbl_80447640:
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x2c(r31)
	stfs     f0, 0x14(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x20(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x20(r31)
	lwz      r3, sTinyPikminMgr@sda21(r13)
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_804476BC
	lfs      f1, 0x20(r31)
	lfs      f0, lbl_805209A4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_804476BC
	li       r0, 2
	stw      r0, 0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_805209AC@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_805209F0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmadds   f0, f0, f1, f0
	stfs     f0, 0x2c(r31)

lbl_804476BC:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_805209AC@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_805209F4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8044784C
	lwz      r0, 4(r31)
	cmpwi    r0, 4
	beq      lbl_80447714
	bge      lbl_8044771C
	cmpwi    r0, 3
	bge      lbl_8044770C
	b        lbl_8044771C

lbl_8044770C:
	lfs      f31, lbl_805209B0@sda21(r2)
	b        lbl_80447720

lbl_80447714:
	lfs      f31, lbl_805209F8@sda21(r2)
	b        lbl_80447720

lbl_8044771C:
	lfs      f31, lbl_805209A4@sda21(r2)

lbl_80447720:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_805209AC@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_805209F0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_805209E8@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fmuls    f0, f31, f0
	stfs     f0, 0x2c(r31)
	b        lbl_8044784C

lbl_80447760:
	lfs      f1, 0x14(r31)
	lfs      f0, lbl_805209A8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80447788
	stfs     f0, 0x14(r31)
	li       r0, 0
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x2c(r31)
	stw      r0, 0(r31)
	b        lbl_8044784C

lbl_80447788:
	lfs      f1, 0x2c(r31)
	lfs      f0, lbl_805209E0@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x2c(r31)
	lfs      f1, 0x14(r31)
	lfs      f0, 0x2c(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x14(r31)
	b        lbl_8044784C

lbl_804477AC:
	lfs      f2, 0x28(r31)
	lfs      f0, lbl_805209FC@sda21(r2)
	lfs      f1, lbl_805209E0@sda21(r2)
	fmuls    f2, f2, f0
	lfs      f3, lbl_80520A00@sda21(r2)
	lfs      f0, lbl_80520A04@sda21(r2)
	stfs     f2, 0x28(r31)
	lfs      f2, 0x2c(r31)
	fadds    f1, f2, f1
	stfs     f1, 0x2c(r31)
	lfs      f2, 0x10(r31)
	lfs      f1, 0x28(r31)
	fadds    f1, f2, f1
	stfs     f1, 0x10(r31)
	lfs      f2, 0x14(r31)
	lfs      f1, 0x2c(r31)
	fadds    f1, f2, f1
	stfs     f1, 0x14(r31)
	lfs      f2, 0x28(r31)
	lfs      f1, 0x30(r31)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x30(r31)
	lfs      f1, 0x30(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_80447818
	fsubs    f0, f1, f0
	stfs     f0, 0x30(r31)

lbl_80447818:
	lfs      f1, 0x30(r31)
	lfs      f0, lbl_805209A0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80447834
	lfs      f0, lbl_80520A04@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x30(r31)

lbl_80447834:
	lfs      f1, 0x14(r31)
	lfs      f0, lbl_80520A08@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8044784C
	li       r0, 0
	stw      r0, 0(r31)

lbl_8044784C:
	lwz      r3, sys@sda21(r13)
	lfs      f3, 0x1c(r31)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x18(r31)
	lfs      f0, lbl_805209A4@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x18(r31)
	lfs      f1, 0x18(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8044787C
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_8044787C:
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
 * Address:	........
 * Size:	000180
 */
void TinyPikmin::draw()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void TinyPikmin::drawPikmin(float, float, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000198
 */
TinyPikminMgr::TinyPikminMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void TinyPikminMgr::loadResource(JKRArchive*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804478A4
 * Size:	0004C8
 */
void TinyPikminMgr::init()
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stfd     f24, 0x60(r1)
	psq_st   f24, 104(r1), 0, qr0
	stmw     r23, 0x3c(r1)
	lwz      r5, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	lis      r0, 0x4330
	mr       r25, r3
	stw      r0, 8(r1)
	lfd      f3, lbl_80520A40@sda21(r2)
	slwi     r3, r5, 2
	stw      r5, 0xc(r1)
	li       r4, -32
	lfs      f4, lbl_805209B8@sda21(r2)
	lfd      f0, 8(r1)
	stw      r5, 0x14(r1)
	fsubs    f2, f0, f3
	lfs      f1, lbl_80520A30@sda21(r2)
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fdivs    f30, f4, f2
	fsubs    f0, f0, f3
	fdivs    f31, f1, f0
	bl       __nwa__FUli
	mr       r29, r3
	lfd      f28, lbl_805209C0@sda21(r2)
	lfs      f27, lbl_805209AC@sda21(r2)
	mr       r23, r29
	lfs      f26, lbl_80520A00@sda21(r2)
	li       r26, 0
	lfs      f25, lbl_805209F8@sda21(r2)
	lis      r24, 0x4330
	b        lbl_804479B0

lbl_80447964:
	bl       rand
	xoris    r3, r3, 0x8000
	xoris    r0, r26, 0x8000
	stw      r3, 0x14(r1)
	addi     r26, r26, 1
	stw      r24, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r0, 0xc(r1)
	fsubs    f0, f0, f28
	stw      r24, 8(r1)
	fdivs    f0, f0, f27
	lfd      f1, 8(r1)
	fsubs    f0, f0, f25
	fsubs    f1, f1, f28
	fmuls    f0, f31, f0
	fmuls    f0, f26, f0
	fmadds   f0, f31, f1, f0
	stfs     f0, 0(r23)
	addi     r23, r23, 4

lbl_804479B0:
	lwz      r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	cmplw    r26, r0
	blt      lbl_80447964
	lfd      f27, lbl_805209C0@sda21(r2)
	li       r23, 0
	lfs      f26, lbl_805209AC@sda21(r2)
	lis      r24, 0x4330
	lfd      f25, lbl_80520A40@sda21(r2)
	b        lbl_80447A70

lbl_804479D4:
	bl       rand
	xoris    r3, r3, 0x8000
	lwz      r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	stw      r3, 0x14(r1)
	stw      r24, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r0, 0xc(r1)
	fsubs    f0, f0, f27
	stw      r24, 8(r1)
	fdivs    f1, f0, f26
	lfd      f0, 8(r1)
	fsubs    f0, f0, f25
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r26, 0x1c(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lwz      r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	stw      r3, 0x24(r1)
	slwi     r3, r26, 2
	lfsx     f2, r29, r3
	addi     r23, r23, 1
	stw      r24, 0x20(r1)
	lfd      f0, 0x20(r1)
	stw      r0, 0x2c(r1)
	fsubs    f0, f0, f27
	stw      r24, 0x28(r1)
	fdivs    f1, f0, f26
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f25
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	slwi     r0, r0, 2
	lfsx     f0, r29, r0
	stfsx    f0, r29, r3
	stfsx    f2, r29, r0

lbl_80447A70:
	lwz      r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	cmplw    r23, r0
	blt      lbl_804479D4
	li       r28, 1
	li       r27, 0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f1, lbl_805209AC@sda21(r2)
	lfd      f2, 0x30(r1)
	lfs      f0, lbl_80520A00@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80447AF8
	li       r27, 1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f1, lbl_805209AC@sda21(r2)
	lfd      f2, 0x30(r1)
	lfs      f0, lbl_805209D4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r28, 0x2c(r1)

lbl_80447AF8:
	lfs      f1, lbl_805209F8@sda21(r2)
	mr       r31, r29
	lfs      f0, lbl_80520A34@sda21(r2)
	li       r26, 0
	lfs      f25, lbl_80520A38@sda21(r2)
	li       r30, 0
	fmadds   f31, f1, f31, f0
	lfs      f26, lbl_805209A0@sda21(r2)
	lfs      f27, lbl_805209A8@sda21(r2)
	lis      r24, 0x4330
	lfd      f28, lbl_805209C0@sda21(r2)
	lfs      f29, lbl_805209AC@sda21(r2)
	b        lbl_80447D04

lbl_80447B2C:
	lbz      r0, 9(r25)
	cmplwi   r0, 0
	beq      lbl_80447B94
	addi     r0, r3, -1
	cmplw    r26, r0
	bne      lbl_80447B4C
	li       r28, 4
	b        lbl_80447BD8

lbl_80447B4C:
	clrlwi.  r0, r27, 0x18
	bne      lbl_80447BD8
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f1, lbl_805209AC@sda21(r2)
	lfd      f2, 0x30(r1)
	lfs      f0, lbl_805209D0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r28, 0x2c(r1)
	b        lbl_80447BD8

lbl_80447B94:
	clrlwi.  r0, r27, 0x18
	bne      lbl_80447BD8
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f1, lbl_805209AC@sda21(r2)
	lfd      f2, 0x30(r1)
	lfs      f0, lbl_805209D4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r28, 0x2c(r1)

lbl_80447BD8:
	cmpwi    r26, 0
	bne      lbl_80447BE8
	lfs      f24, lbl_805209A0@sda21(r2)
	b        lbl_80447C2C

lbl_80447BE8:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x34(r1)
	xoris    r0, r26, 0x8000
	lfd      f2, lbl_805209C0@sda21(r2)
	stw      r4, 0x30(r1)
	lfs      f0, lbl_805209AC@sda21(r2)
	lfd      f1, 0x30(r1)
	stw      r0, 0x2c(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x28(r1)
	fdivs    f3, f1, f0
	lfd      f0, 0x28(r1)
	fsubs    f1, f0, f2
	fmuls    f0, f30, f3
	fmadds   f24, f1, f30, f0

lbl_80447C2C:
	lwz      r3, 0(r25)
	li       r0, 0
	lfs      f0, 0(r31)
	add      r23, r3, r30
	stw      r0, 0(r23)
	fadds    f0, f31, f0
	stw      r28, 4(r23)
	stfs     f0, 8(r23)
	stfs     f25, 0xc(r23)
	stfs     f26, 0x10(r23)
	stfs     f27, 0x14(r23)
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r24, 0x30(r1)
	stw      r0, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f28
	fdivs    f0, f0, f29
	stfs     f0, 0x18(r23)
	stfs     f26, 0x20(r23)
	stfs     f24, 0x24(r23)
	stfs     f26, 0x28(r23)
	stfs     f26, 0x2c(r23)
	stfs     f26, 0x30(r23)
	lwz      r0, 4(r23)
	cmpwi    r0, 4
	beq      lbl_80447CB4
	bge      lbl_80447CD8
	cmpwi    r0, 3
	bge      lbl_80447CA8
	b        lbl_80447CD8

lbl_80447CA8:
	lfs      f0, lbl_805209B0@sda21(r2)
	stfs     f0, 0x1c(r23)
	b        lbl_80447CE0

lbl_80447CB4:
	lfs      f0, lbl_805209A4@sda21(r2)
	stfs     f0, 0x1c(r23)
	lwz      r3, sTinyPikminMgr@sda21(r13)
	lbz      r0, 9(r3)
	cmplwi   r0, 0
	beq      lbl_80447CE0
	lfs      f0, lbl_805209B4@sda21(r2)
	stfs     f0, 0x14(r23)
	b        lbl_80447CE0

lbl_80447CD8:
	lfs      f0, lbl_805209B8@sda21(r2)
	stfs     f0, 0x1c(r23)

lbl_80447CE0:
	lwz      r3, sTinyPikminMgr@sda21(r13)
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	bne      lbl_80447CF8
	lfs      f0, lbl_805209B4@sda21(r2)
	stfs     f0, 0x14(r23)

lbl_80447CF8:
	addi     r31, r31, 4
	addi     r30, r30, 0x34
	addi     r26, r26, 1

lbl_80447D04:
	lwz      r3, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	cmplw    r26, r3
	blt      lbl_80447B2C
	mr       r3, r29
	bl       __dla__FPv
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	psq_l    f24, 104(r1), 0, qr0
	lfd      f24, 0x60(r1)
	lmw      r23, 0x3c(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void TinyPikminMgr::update()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000274
 */
void TinyPikminMgr::draw()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void TinyPikminMgr::appear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void TinyPikminMgr::disappear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80447D6C
 * Size:	000348
 */
BootSection::BootSection(JKRHeap*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, lbl_8049AF08@ha
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	addi     r30, r5, lbl_8049AF08@l
	stw      r29, 0x34(r1)
	mr       r29, r3
	bl       __ct__Q24Game14BaseHIOSectionFP7JKRHeap
	lis      r3, __vt__11BootSection@ha
	li       r4, -1
	addi     r0, r3, __vt__11BootSection@l
	lfs      f0, lbl_805209A0@sda21(r2)
	stw      r0, 0(r29)
	li       r0, 0
	addi     r3, r29, 0x64
	stw      r4, 0x48(r29)
	stw      r4, 0x4c(r29)
	stfs     f0, 0x50(r29)
	stw      r0, 0x5c(r29)
	bl       __ct__16DvdThreadCommandFv
	li       r0, 0
	lfs      f0, lbl_805209A0@sda21(r2)
	stw      r0, 0xd4(r29)
	li       r3, 0x1c
	stw      r0, 0xd8(r29)
	stb      r0, 0xdc(r29)
	stb      r0, 0xdd(r29)
	stfs     f0, 0xe4(r29)
	stw      r29, sBootSection@sda21(r13)
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80447E00
	mr       r4, r29
	bl       __ct__Q24Game11HIORootNodeFP7Section
	mr       r4, r3

lbl_80447E00:
	addi     r0, r30, 0xa8
	mr       r3, r29
	stw      r0, 0x14(r4)
	lwz      r12, 0(r29)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1c(r29)
	li       r3, 0
	li       r5, 2
	li       r6, 0
	bl
createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
	mr       r4, r3
	mr       r3, r29
	li       r5, 1
	bl       setDisplay__Q24Game14BaseHIOSectionFP10JFWDisplayi
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	bl       setFrameRate__6SystemFi
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80447EA4
	lis      r4, lbl_804ED004@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804ED004@l
	lis      r4, "__vt__23Delegate<11BootSection>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__23Delegate<11BootSection>"@l
	lwz      r4, 8(r8)
	stw      r7, 8(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r29, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r4, 0x10(r3)

lbl_80447EA4:
	stw      r3, 0xd0(r29)
	li       r0, 0
	li       r3, 0xb0
	lwz      r4, sManager__10JUTProcBar@sda21(r13)
	stb      r0, 0x10c(r4)
	lwz      r4, sManager__10JUTProcBar@sda21(r13)
	stb      r0, 0x130(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80447ED8
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_80447ED8:
	stw      r0, 0xd4(r29)
	li       r3, 0xb0
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80447EF4
	li       r4, 1
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort

lbl_80447EF4:
	lwz      r3, sys@sda21(r13)
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       createRomFont__6SystemFP7JKRHeap
	lwz      r3, gPikmin2AramMgr@sda21(r13)
	li       r4, 1
	bl       setLoadPermission__Q211Pikmin2ARAM3MgrFb
	li       r0, 0
	li       r3, 0xc
	stw      r0, particle2dMgr@sda21(r13)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80448080
	lwz      r0, sTinyPikminMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80447F44
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x2db
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80447F44:
	stw      r31, sTinyPikminMgr@sda21(r13)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f1, lbl_805209AC@sda21(r2)
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_80520A0C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80447F84
	li       r30, 0xa
	b        lbl_80447F88

lbl_80447F84:
	li       r30, 0x64

lbl_80447F88:
	mulli    r3, r30, 0x34
	stw      r30, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__10TinyPikminFv@ha
	mr       r7, r30
	addi     r4, r4, __ct__10TinyPikminFv@l
	li       r5, 0
	li       r6, 0x34
	bl       __construct_new_array
	stw      r3, 0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_805209AC@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_805209F8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80447FF4
	li       r0, 0
	stw      r0, 4(r31)
	b        lbl_80447FFC

lbl_80447FF4:
	li       r0, 1
	stw      r0, 4(r31)

lbl_80447FFC:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_805209AC@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_805209F8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r0, r0, 2, 0x1f, 0x1f
	stb      r0, 8(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f3, lbl_805209C0@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f1, lbl_805209AC@sda21(r2)
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_805209F8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80448078
	li       r0, 1
	stb      r0, 9(r31)
	b        lbl_80448080

lbl_80448078:
	li       r0, 0
	stb      r0, 9(r31)

lbl_80448080:
	stw      r31, 0xe0(r29)
	lwz      r3, 0xe0(r29)
	bl       init__13TinyPikminMgrFv
	lfs      f0, lbl_805209F8@sda21(r2)
	mr       r3, r29
	stfs     f0, 0x30(r29)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	804480B4
 * Size:	000084
 */
BootSection::~BootSection()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8044811C
	lis      r3, __vt__11BootSection@ha
	addi     r0, r3, __vt__11BootSection@l
	stw      r0, 0(r30)
	lwz      r3, sys@sda21(r13)
	bl       destroyRomFont__6SystemFv
	addic.   r0, r30, 0x64
	beq      lbl_80448100
	addic.   r3, r30, 0xc0
	beq      lbl_80448100
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80448100:
	mr       r3, r30
	li       r4, 0
	bl       __dt__Q24Game14BaseHIOSectionFv
	extsh.   r0, r31
	ble      lbl_8044811C
	mr       r3, r30
	bl       __dl__FPv

lbl_8044811C:
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
 * Address:	80448138
 * Size:	000004
 */
void BootSection::init() { }

/*
 * --INFO--
 * Address:	8044813C
 * Size:	0002B8
 */
void BootSection::loadBootResource()
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	lis      r4, lbl_8049AF08@ha
	stw      r0, 0x144(r1)
	stmw     r25, 0x124(r1)
	mr       r28, r3
	addi     r31, r4, lbl_8049AF08@l
	lwz      r3, 0x1c(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	addi     r3, r31, 0xbc
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r30, r3, r3
	bne      lbl_80448190
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x401
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80448190:
	addi     r3, r31, 0xdc
	bl       getGlbResource__13JKRFileLoaderFPCc
	or.      r26, r3, r3
	bne      lbl_804481B4
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x407
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804481B4:
	li       r3, 0x40
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_804481E4
	li       r0, 0
	mr       r4, r26
	stw      r0, 0x28(r29)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r29)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r29)

lbl_804481E4:
	stw      r29, 0x5c(r28)
	addi     r3, r31, 0xfc
	bl       getGlbResource__13JKRFileLoaderFPCc
	or.      r26, r3, r3
	bne      lbl_8044820C
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x40a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044820C:
	li       r3, 0x40
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8044823C
	li       r0, 0
	mr       r4, r26
	stw      r0, 0x28(r29)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r29)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r29)

lbl_8044823C:
	stw      r29, 0x60(r28)
	addi     r3, r31, 0x118
	bl       getGlbResource__13JKRFileLoaderFPCc
	or.      r26, r3, r3
	bne      lbl_80448264
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x40f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80448264:
	li       r3, 0x40
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80448294
	li       r0, 0
	mr       r4, r26
	stw      r0, 0x28(r29)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r29)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r29)

lbl_80448294:
	stw      r29, 0x54(r28)
	addi     r3, r31, 0x130
	bl       getGlbResource__13JKRFileLoaderFPCc
	or.      r26, r3, r3
	bne      lbl_804482BC
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x412
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804482BC:
	li       r3, 0x40
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_804482EC
	li       r0, 0
	mr       r4, r26
	stw      r0, 0x28(r29)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r29)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r29)

lbl_804482EC:
	stw      r29, 0x58(r28)
	lis      r3, sPikminTex__13TinyPikminMgr@ha
	addi     r28, r3, sPikminTex__13TinyPikminMgr@l
	addi     r29, r1, 8
	lwz      r6, 0x94(r31)
	li       r27, 0
	lwz      r5, 0x98(r31)
	lwz      r4, 0x9c(r31)
	lwz      r3, 0xa0(r31)
	lwz      r0, 0xa4(r31)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r3, 0x14(r1)
	stw      r0, 0x18(r1)

lbl_80448328:
	lwz      r5, 0(r29)
	addi     r3, r1, 0x1c
	addi     r4, r2, lbl_80520A28@sda21
	crclr    6
	bl       sprintf
	mr       r3, r30
	addi     r4, r1, 0x1c
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r26, r3, r3
	bne      lbl_80448370
	addi     r3, r31, 0xc
	addi     r5, r1, 0x1c
	li       r4, 0x312
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80448370:
	li       r3, 0x40
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_804483A0
	li       r0, 0
	mr       r4, r26
	stw      r0, 0x28(r25)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r25)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r25)

lbl_804483A0:
	li       r3, 0x168
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_804483BC
	mr       r4, r25
	bl       __ct__10J2DPictureFP10JUTTexture
	mr       r0, r3

lbl_804483BC:
	stw      r0, 0(r28)
	li       r4, 7
	lwz      r3, 0(r28)
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 5
	addi     r29, r29, 4
	blt      lbl_80448328
	lmw      r25, 0x124(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	804483F4
 * Size:	000128
 */
void BootSection::load2DResource()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8049AF08@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8049AF08@l
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x1c(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x150
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	bl       create__Q22og5Lib2DFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x150
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x170
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x17c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	bl       globalInstance__14TParticle2dMgrFv
	lwz      r3, particle2dMgr@sda21(r13)
	lis      r4, 0x10
	bl       createHeap__14TParticle2dMgrFUl
	lwz      r3, particle2dMgr@sda21(r13)
	addi     r4, r31, 0x18c
	li       r5, 0x7d0
	li       r6, 0x80
	li       r7, 0x80
	bl       createMgr__14TParticle2dMgrFPcUlUlUl
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x17c
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x1b4
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x158
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_804484B8
	bl       __ct__Q23ebi13TScreenProgreFv
	mr       r0, r3

lbl_804484B8:
	stw      r0, 0xd8(r30)
	addi     r4, r31, 0x1b4
	lwz      r0, 0xd4(r30)
	lwz      r3, 0xd8(r30)
	stw      r0, 4(r3)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x1c8
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, 0xd8(r30)
	bl       loadResource__Q23ebi13TScreenProgreFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x1c8
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x170
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace ebi {

/*
 * --INFO--
 * Address:	8044851C
 * Size:	000294
 */
TScreenProgre::TScreenProgre(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q23ebi13TScreenProgre@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q23ebi13TScreenProgre@l
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 1
	stw      r29, 0x14(r1)
	addi     r31, r30, 0x50
	mr       r29, r31
	stw      r0, 0(r30)
	li       r0, 0
	stb      r3, 8(r30)
	mr       r3, r31
	stw      r0, 0xc(r30)
	stw      r0, 0x10(r30)
	stw      r0, 0x14(r30)
	stw      r0, 0x18(r30)
	stw      r0, 0x1c(r30)
	stw      r0, 0x28(r30)
	stw      r0, 0x2c(r30)
	stw      r0, 0x30(r30)
	stw      r0, 0x38(r30)
	stw      r0, 0x3c(r30)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r6, __vt__Q23ebi16E2DCallBack_Base@ha
	stw      r0, 0(r31)
	li       r0, 0
	lis      r3, __ct__Q23ebi16E2DFullFontColorFv@ha
	li       r7, 1
	stw      r0, 0x18(r31)
	addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
	addi     r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
	stw      r0, 0(r29)
	lis      r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
	addi     r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
	li       r6, 0x10
	stw      r3, 0(r29)
	addi     r3, r31, 0x20
	li       r5, 0
	stb      r7, 0x1c(r29)
	li       r7, 2
	stw      r0, 0(r31)
	bl       __construct_array
	lfs      f1, lbl_805209A0@sda21(r2)
	addi     r29, r30, 0x9c
	lfs      f0, lbl_80520A48@sda21(r2)
	li       r4, 1
	stfs     f1, 0x40(r31)
	li       r0, 0
	mr       r3, r29
	stfs     f0, 0x44(r31)
	stb      r4, 0x48(r31)
	stb      r0, 0x49(r31)
	stb      r0, 0x1c(r31)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r6, __vt__Q23ebi16E2DCallBack_Base@ha
	stw      r0, 0(r29)
	li       r0, 0
	lis      r3, __ct__Q23ebi16E2DFullFontColorFv@ha
	li       r7, 1
	stw      r0, 0x18(r29)
	addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
	addi     r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
	stw      r0, 0(r29)
	lis      r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
	addi     r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
	li       r6, 0x10
	stw      r3, 0(r29)
	addi     r3, r29, 0x20
	li       r5, 0
	stb      r7, 0x1c(r29)
	li       r7, 2
	stw      r0, 0(r29)
	bl       __construct_array
	lfs      f3, lbl_805209A0@sda21(r2)
	lis      r10, __vt__Q25efx2d7TBaseIF@ha
	lis      r9, __vt__Q25efx2d5TBase@ha
	lis      r8, __vt__18JPAEmitterCallBack@ha
	stfs     f3, 0x40(r29)
	lis      r3, __vt__Q25efx2d8TForever@ha
	lfs      f0, lbl_80520A48@sda21(r2)
	addi     r7, r3, __vt__Q25efx2d8TForever@l
	lis      r4, __vt__Q25efx2d9TChasePos@ha
	lis      r3, __vt__Q25efx2d9T2DCursor@ha
	stfs     f0, 0x44(r29)
	li       r0, 1
	addi     r6, r4, __vt__Q25efx2d9TChasePos@l
	addi     r5, r3, __vt__Q25efx2d9T2DCursor@l
	stb      r0, 0x48(r29)
	li       r11, 0
	addi     r10, r10, __vt__Q25efx2d7TBaseIF@l
	addi     r9, r9, __vt__Q25efx2d5TBase@l
	stb      r11, 0x49(r29)
	addi     r8, r8, __vt__18JPAEmitterCallBack@l
	addi     r12, r7, 0x18
	addi     r31, r6, 0x18
	stb      r11, 0x1c(r29)
	addi     r4, r30, 0x104
	addi     r29, r5, 0x18
	lfs      f2, lbl_805209A4@sda21(r2)
	stw      r10, 0xe8(r30)
	addi     r0, r30, 0x13c
	lfs      f1, lbl_805209D4@sda21(r2)
	mr       r3, r30
	stw      r9, 0xe8(r30)
	stb      r11, 0xec(r30)
	stb      r11, 0xed(r30)
	stw      r8, 0xf0(r30)
	stw      r7, 0xe8(r30)
	stw      r12, 0xf0(r30)
	sth      r11, 0xf4(r30)
	stw      r11, 0xf8(r30)
	stw      r6, 0xe8(r30)
	stw      r31, 0xf0(r30)
	stw      r4, 0xfc(r30)
	stw      r5, 0xe8(r30)
	stw      r29, 0xf0(r30)
	stfs     f2, 0x100(r30)
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x10c(r30)
	stfs     f3, 0x110(r30)
	stw      r11, 0x118(r30)
	stw      r11, 0x11c(r30)
	stw      r10, 0x120(r30)
	stw      r9, 0x120(r30)
	stb      r11, 0x124(r30)
	stb      r11, 0x125(r30)
	stw      r8, 0x128(r30)
	stw      r7, 0x120(r30)
	stw      r12, 0x128(r30)
	sth      r11, 0x12c(r30)
	stw      r11, 0x130(r30)
	stw      r6, 0x120(r30)
	stw      r31, 0x128(r30)
	stw      r0, 0x134(r30)
	stw      r5, 0x120(r30)
	stw      r29, 0x128(r30)
	stfs     f2, 0x138(r30)
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x144(r30)
	stfs     f3, 0x148(r30)
	stw      r11, 0x150(r30)
	stw      r11, 0x154(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace ebi

/*
 * --INFO--
 * Address:	804487B0
 * Size:	000044
 */
void BootSection::loadResident()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r3, sys@sda21(r13)
	lwz      r31, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r3, 0x38(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, gPikmin2AramMgr@sda21(r13)
	bl       load__Q211Pikmin2ARAM3MgrFv
	mr       r3, r31
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void BootSection::drawScreenProgre(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804487F4
 * Size:	00019C
 */
void BootSection::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x48(r3)
	cmplwi   r0, 0xa
	bgt      lbl_80448978
	lis      r5, lbl_804ED010@ha
	slwi     r0, r0, 2
	addi     r5, r5, lbl_804ED010@l
	lwzx     r0, r5, r0
	mtctr    r0
	bctr

lbl_80448834:

lbl_80448834:

lbl_80448834:

lbl_80448834:
	mr       r3, r30
	mr       r4, r31
	bl       drawEpilepsy__11BootSectionFR8Graphics
	b        lbl_80448978

lbl_80448844:
	bl       drawNintendoLogo__11BootSectionFR8Graphics
	b        lbl_80448978

lbl_8044884C:
	bl       drawProgressive__11BootSectionFR8Graphics
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd8(r30)
	bl       draw__Q23ebi13TScreenProgreFv
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80448978
	li       r4, 1
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 0
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	b        lbl_80448978

lbl_804488AC:
	bl       drawSetInterlace__11BootSectionFR8Graphics
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd8(r30)
	bl       draw__Q23ebi13TScreenProgreFv
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80448978
	li       r4, 1
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 0
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	b        lbl_80448978

lbl_8044890C:
	bl       drawSetProgressive__11BootSectionFR8Graphics
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd8(r30)
	bl       draw__Q23ebi13TScreenProgreFv
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80448978
	li       r4, 1
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 0
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	b        lbl_80448978

lbl_8044896C:

lbl_8044896C:
	mr       r3, r30
	mr       r4, r31
	bl       drawDolbyLogo__11BootSectionFR8Graphics

lbl_80448978:
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
 * Address:	........
 * Size:	000004
 */
void BootSection::drawDebugInfo(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80448990
 * Size:	000020
 */
void BootSection::drawProgressive(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       drawNintendoLogo__11BootSectionFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804489B0
 * Size:	000020
 */
void BootSection::drawSetProgressive(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       drawNintendoLogo__11BootSectionFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804489D0
 * Size:	000020
 */
void BootSection::drawSetInterlace(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       drawNintendoLogo__11BootSectionFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804489F0
 * Size:	0003E0
 */
void BootSection::drawNintendoLogo(Graphics&)
{
	/*
	stwu     r1, -0x1e0(r1)
	mflr     r0
	stw      r0, 0x1e4(r1)
	stfd     f31, 0x1d0(r1)
	psq_st   f31, 472(r1), 0, qr0
	stfd     f30, 0x1c0(r1)
	psq_st   f30, 456(r1), 0, qr0
	stmw     r25, 0x1a4(r1)
	mr       r27, r4
	mr       r26, r3
	addi     r3, r27, 0xbc
	lwz      r12, 0xbc(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r31, 0
	lwz      r30, 0xe0(r26)
	mr       r28, r31
	b        lbl_80448C50

lbl_80448A3C:
	lwz      r0, 0(r30)
	add      r29, r0, r28
	lwz      r0, 0(r29)
	cmpwi    r0, 0
	beq      lbl_80448C48
	lfs      f2, 0x14(r29)
	lfs      f0, lbl_805209A0@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80448A9C
	lfs      f1, lbl_805209C8@sda21(r2)
	lfs      f0, lbl_805209A4@sda21(r2)
	fdivs    f1, f2, f1
	fabs     f1, f1
	frsp     f4, f1
	fcmpo    cr0, f4, f0
	ble      lbl_80448A80
	fmr      f4, f0

lbl_80448A80:
	lfs      f0, lbl_805209A4@sda21(r2)
	lfs      f3, lbl_80520A10@sda21(r2)
	fsubs    f2, f0, f4
	lfs      f1, lbl_80520A0C@sda21(r2)
	fmadds   f0, f3, f4, f0
	fmadds   f1, f3, f2, f1
	b        lbl_80448AA4

lbl_80448A9C:
	lfs      f1, lbl_805209A4@sda21(r2)
	fmr      f0, f1

lbl_80448AA4:
	lfs      f4, lbl_80520A14@sda21(r2)
	lfs      f3, 0x18(r29)
	lfs      f2, lbl_805209A0@sda21(r2)
	fmuls    f6, f4, f3
	lfs      f5, lbl_80520A18@sda21(r2)
	fcmpo    cr0, f6, f2
	bge      lbl_80448AEC
	lfs      f2, lbl_80520A1C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f2, f6, f2
	fctiwz   f2, f2
	stfd     f2, 0x178(r1)
	lwz      r0, 0x17c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0
	fneg     f4, f2
	b        lbl_80448B10

lbl_80448AEC:
	lfs      f2, lbl_80520A20@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f2, f6, f2
	fctiwz   f2, f2
	stfd     f2, 0x180(r1)
	lwz      r0, 0x184(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r3, r0

lbl_80448B10:
	lfs      f3, lbl_805209A4@sda21(r2)
	lfs      f2, lbl_805209A0@sda21(r2)
	fmadds   f3, f5, f4, f3
	lfs      f4, lbl_80520A24@sda21(r2)
	fcmpo    cr0, f6, f2
	fmuls    f1, f1, f3
	bge      lbl_80448B58
	lfs      f2, lbl_80520A1C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f2, f6, f2
	fctiwz   f2, f2
	stfd     f2, 0x188(r1)
	lwz      r0, 0x18c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0
	fneg     f3, f2
	b        lbl_80448B7C

lbl_80448B58:
	lfs      f2, lbl_80520A20@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f2, f6, f2
	fctiwz   f2, f2
	stfd     f2, 0x190(r1)
	lwz      r0, 0x194(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r3, r0

lbl_80448B7C:
	lfs      f2, lbl_805209A4@sda21(r2)
	lis      r3, sPikminTex__13TinyPikminMgr@ha
	lwz      r0, 4(r29)
	addi     r3, r3, sPikminTex__13TinyPikminMgr@l
	fnmsubs  f6, f4, f3, f2
	lfs      f5, 0xc(r29)
	slwi     r0, r0, 2
	lfs      f4, 0x14(r29)
	lwzx     r25, r3, r0
	lfs      f3, 8(r29)
	lfs      f2, 0x10(r29)
	fmuls    f0, f0, f6
	mr       r3, r25
	fadds    f31, f5, f4
	stfs     f1, 0xcc(r25)
	fadds    f30, f3, f2
	stfs     f0, 0xd0(r25)
	lwz      r12, 0(r25)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x28(r25)
	mr       r3, r25
	lfs      f2, 0x20(r25)
	li       r4, 0x7a
	lfs      f1, 0x2c(r25)
	lfs      f0, 0x24(r25)
	fsubs    f4, f3, f2
	lfs      f2, lbl_805209F8@sda21(r2)
	fsubs    f0, f1, f0
	lfs      f3, 0x30(r29)
	fmuls    f1, f4, f2
	fmuls    f2, f0, f2
	bl       rotate__7J2DPaneFff13J2DRotateAxisf
	lfs      f2, 0x28(r25)
	mr       r3, r25
	lfs      f0, 0x20(r25)
	li       r4, 0
	lwz      r12, 0(r25)
	li       r5, 0
	lfs      f1, 0x2c(r25)
	fsubs    f3, f2, f0
	lfs      f0, 0x24(r25)
	li       r6, 0
	lfs      f2, lbl_805209F8@sda21(r2)
	fsubs    f0, f1, f0
	lwz      r12, 0xe4(r12)
	fnmsubs  f1, f3, f2, f30
	fsubs    f2, f31, f0
	mtctr    r12
	bctrl

lbl_80448C48:
	addi     r28, r28, 0x34
	addi     r31, r31, 1

lbl_80448C50:
	lwz      r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	cmplw    r31, r0
	blt      lbl_80448A3C
	addi     r3, r27, 0xbc
	lwz      r12, 0xbc(r27)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x5c(r26)
	addi     r3, r1, 0x10
	bl       __ct__10J2DPictureFP10JUTTexture
	lwz      r3, sys@sda21(r13)
	li       r0, -1
	stw      r0, 0xc(r1)
	lwz      r0, 0xd4(r3)
	cmpwi    r0, 5
	bne      lbl_80448CB4
	li       r0, 0xff
	li       r4, 0
	li       r3, 0x46
	stb      r4, 0xc(r1)
	stb      r3, 0xd(r1)
	stb      r0, 0xe(r1)
	stb      r0, 0xf(r1)
	b        lbl_80448CD0

lbl_80448CB4:
	li       r3, 0
	li       r4, 0xdc
	li       r0, 0xff
	stb      r4, 0xc(r1)
	stb      r3, 0xd(r1)
	stb      r3, 0xe(r1)
	stb      r0, 0xf(r1)

lbl_80448CD0:
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lbz      r5, 8(r1)
	lbz      r4, 9(r1)
	lbz      r3, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0x158(r1)
	stb      r4, 0x159(r1)
	stb      r3, 0x15a(r1)
	stb      r0, 0x15b(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x194(r1)
	lfd      f2, lbl_805209C0@sda21(r2)
	stw      r0, 0x190(r1)
	lfs      f0, lbl_805209AC@sda21(r2)
	lfd      f1, 0x190(r1)
	fsubs    f1, f1, f2
	fdivs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x18c(r1)
	addi     r3, r1, 0x10
	lfs      f2, lbl_805209F8@sda21(r2)
	li       r4, 0
	stw      r0, 0x188(r1)
	li       r5, 0
	lfd      f4, lbl_805209C0@sda21(r2)
	fsubs    f1, f30, f2
	lfd      f0, 0x188(r1)
	li       r6, 0
	lfs      f3, lbl_805209AC@sda21(r2)
	fsubs    f4, f0, f4
	lfs      f7, 0xe4(r26)
	lfs      f0, lbl_80520A50@sda21(r2)
	lfs      f5, lbl_80520A4C@sda21(r2)
	fdivs    f6, f4, f3
	lfs      f3, lbl_80520A54@sda21(r2)
	lfs      f4, lbl_80520A58@sda21(r2)
	fsubs    f6, f6, f2
	fmadds   f2, f7, f1, f0
	fmadds   f1, f7, f6, f5
	bl       draw__10J2DPictureFffffbbb
	lfs      f1, 0xe4(r26)
	lfs      f0, lbl_805209A0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80448DA0
	lfs      f0, lbl_80520A5C@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0xe4(r26)

lbl_80448DA0:
	addi     r3, r1, 0x10
	li       r4, -1
	bl       __dt__10J2DPictureFv
	psq_l    f31, 472(r1), 0, qr0
	lfd      f31, 0x1d0(r1)
	psq_l    f30, 456(r1), 0, qr0
	lfd      f30, 0x1c0(r1)
	lmw      r25, 0x1a4(r1)
	lwz      r0, 0x1e4(r1)
	mtlr     r0
	addi     r1, r1, 0x1e0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80448DD0
 * Size:	0000B4
 */
void BootSection::drawDolbyLogo(Graphics&)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stw      r31, 0x17c(r1)
	mr       r31, r3
	addi     r3, r4, 0xbc
	lwz      r12, 0xbc(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x60(r31)
	addi     r3, r1, 0x10
	bl       __ct__10J2DPictureFP10JUTTexture
	li       r0, 0xff
	lfs      f1, lbl_80520A60@sda21(r2)
	stb      r0, 0xc(r1)
	addi     r3, r1, 0x10
	lfs      f2, lbl_80520A64@sda21(r2)
	li       r4, 0
	stb      r0, 0xd(r1)
	li       r5, 0
	lfs      f3, lbl_80520A68@sda21(r2)
	li       r6, 0
	stb      r0, 0xe(r1)
	lfs      f4, lbl_80520A6C@sda21(r2)
	stb      r0, 0xf(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lbz      r9, 8(r1)
	lbz      r8, 9(r1)
	lbz      r7, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r9, 0x158(r1)
	stb      r8, 0x159(r1)
	stb      r7, 0x15a(r1)
	stb      r0, 0x15b(r1)
	bl       draw__10J2DPictureFffffbbb
	addi     r3, r1, 0x10
	li       r4, -1
	bl       __dt__10J2DPictureFv
	lwz      r0, 0x184(r1)
	lwz      r31, 0x17c(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	80448E84
 * Size:	000188
 */
void BootSection::drawEpilepsy(Graphics&)
{
	/*
	stwu     r1, -0x300(r1)
	mflr     r0
	stw      r0, 0x304(r1)
	stw      r31, 0x2fc(r1)
	mr       r31, r3
	addi     r3, r4, 0xbc
	lwz      r12, 0xbc(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x54(r31)
	addi     r3, r1, 0x178
	bl       __ct__10J2DPictureFP10JUTTexture
	lfs      f1, lbl_805209A0@sda21(r2)
	addi     r3, r1, 0x178
	lfs      f3, lbl_80520A70@sda21(r2)
	li       r4, 0
	fmr      f2, f1
	lfs      f4, lbl_80520A08@sda21(r2)
	li       r5, 0
	li       r6, 0
	bl       draw__10J2DPictureFffffbbb
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80448FEC
	fsubs    f1, f1, f0
	li       r0, 0xff
	lfs      f2, lbl_80520A14@sda21(r2)
	lfs      f0, lbl_805209A0@sda21(r2)
	fmuls    f1, f2, f1
	stb      r0, 0xc(r1)
	stb      r0, 0xd(r1)
	fcmpo    cr0, f1, f0
	stb      r0, 0xe(r1)
	stb      r0, 0xf(r1)
	bge      lbl_80448F1C
	fneg     f1, f1

lbl_80448F1C:
	lfs      f0, lbl_80520A20@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, lbl_805209A4@sda21(r2)
	fmuls    f1, f1, f0
	lfs      f3, lbl_80520A74@sda21(r2)
	lfs      f0, lbl_805209A0@sda21(r2)
	fctiwz   f1, f1
	stfd     f1, 0x2e0(r1)
	lwz      r0, 0x2e4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fsubs    f1, f2, f1
	fmuls    f1, f3, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80448F70
	lfs      f0, lbl_805209F8@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_80448F78

lbl_80448F70:
	lfs      f0, lbl_805209F8@sda21(r2)
	fsubs    f0, f1, f0

lbl_80448F78:
	fctiwz   f0, f0
	lwz      r4, 0x58(r31)
	addi     r3, r1, 0x10
	stfd     f0, 0x2e8(r1)
	lwz      r0, 0x2ec(r1)
	stb      r0, 0xf(r1)
	bl       __ct__10J2DPictureFP10JUTTexture
	lwz      r0, 0xc(r1)
	addi     r3, r1, 0x10
	lfs      f1, lbl_805209A0@sda21(r2)
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	lfs      f2, lbl_80520A04@sda21(r2)
	li       r6, 0
	lbz      r9, 8(r1)
	lbz      r8, 9(r1)
	lbz      r7, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r9, 0x158(r1)
	lfs      f3, lbl_80520A70@sda21(r2)
	stb      r8, 0x159(r1)
	lfs      f4, lbl_80520A78@sda21(r2)
	stb      r7, 0x15a(r1)
	stb      r0, 0x15b(r1)
	bl       draw__10J2DPictureFffffbbb
	addi     r3, r1, 0x10
	li       r4, -1
	bl       __dt__10J2DPictureFv

lbl_80448FEC:
	addi     r3, r1, 0x178
	li       r4, -1
	bl       __dt__10J2DPictureFv
	lwz      r0, 0x304(r1)
	lwz      r31, 0x2fc(r1)
	mtlr     r0
	addi     r1, r1, 0x300
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void BootSection::changeRenderModeProgressive()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044900C
 * Size:	000694
 */
void BootSection::doUpdate()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r31, r3
	lis      r3, lbl_8049AF08@ha
	li       r29, 0
	mr       r27, r29
	addi     r30, r3, lbl_8049AF08@l
	lwz      r28, 0xe0(r31)
	b        lbl_8044904C

lbl_80449038:
	lwz      r0, 0(r28)
	add      r3, r0, r27
	bl       update__10TinyPikminFv
	addi     r27, r27, 0x34
	addi     r29, r29, 1

lbl_8044904C:
	lwz      r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	cmplw    r29, r0
	blt      lbl_80449038
	lwz      r0, 0x48(r31)
	cmplwi   r0, 0xa
	bgt      lbl_8044963C
	lis      r3, lbl_804ED03C@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804ED03C@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_8044907C:
	mr       r3, r31
	bl       updateLoadResourceFirst__11BootSectionFv
	b        lbl_8044963C

lbl_80449088:
	mr       r3, r31
	bl       updateLoadMemoryCard__11BootSectionFv
	b        lbl_8044963C

lbl_80449094:
	mr       r3, r31
	bl       updateNintendoLogo__11BootSectionFv
	b        lbl_8044963C

lbl_804490A0:
	mr       r3, r31
	bl       updateProgressive__11BootSectionFv
	b        lbl_8044963C

lbl_804490AC:
	mr       r3, r31
	bl       updateWaitProgressive__11BootSectionFv
	b        lbl_8044963C

lbl_804490B8:
	lwz      r3, 0x24(r31)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_804490DC
	bge      lbl_8044963C
	cmpwi    r0, 0
	bge      lbl_804491D8
	b        lbl_8044963C

lbl_804490DC:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x50(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r31)
	lwz      r3, 0xd4(r31)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80449110
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209B0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8044911C

lbl_80449110:
	lwz      r3, gPikmin2AramMgr@sda21(r13)
	li       r4, 0
	bl       setLoadPermission__Q211Pikmin2ARAM3MgrFb

lbl_8044911C:
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209A4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8044963C
	mr       r3, r31
	bl       waitLoadResource__11BootSectionFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8044963C
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 0xd8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80449168
	fadds    f0, f2, f1
	b        lbl_8044916C

lbl_80449168:
	fsubs    f0, f1, f2

lbl_8044916C:
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	bl       fadeout__Q23ebi13TScreenProgreFUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8044963C
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x24(r31)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_804491B4
	fadds    f0, f2, f1
	b        lbl_804491B8

lbl_804491B4:
	fsubs    f0, f1, f2

lbl_804491B8:
	fctiwz   f0, f0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	b        lbl_8044963C

lbl_804491D8:
	lwz      r3, 0xd8(r31)
	bl       isFinish__Q23ebi13TScreenProgreFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8044963C
	lfs      f0, lbl_805209A0@sda21(r2)
	mr       r3, r31
	li       r4, 6
	stfs     f0, 0x50(r31)
	bl       setMode__11BootSectionFi
	li       r3, 1
	bl       VISetBlack
	bl       VIFlush
	bl       VIWaitForRetrace
	bl       VIWaitForRetrace
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	bl       changeRenderMode__6SystemFQ26System11ERenderMode
	b        lbl_8044963C

lbl_80449220:
	lwz      r3, 0x24(r31)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_80449244
	bge      lbl_8044963C
	cmpwi    r0, 0
	bge      lbl_80449340
	b        lbl_8044963C

lbl_80449244:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x50(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r31)
	lwz      r3, 0xd4(r31)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80449278
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209B0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80449284

lbl_80449278:
	lwz      r3, gPikmin2AramMgr@sda21(r13)
	li       r4, 0
	bl       setLoadPermission__Q211Pikmin2ARAM3MgrFb

lbl_80449284:
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209A4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8044963C
	mr       r3, r31
	bl       waitLoadResource__11BootSectionFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8044963C
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 0xd8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_804492D0
	fadds    f0, f2, f1
	b        lbl_804492D4

lbl_804492D0:
	fsubs    f0, f1, f2

lbl_804492D4:
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	bl       fadeout__Q23ebi13TScreenProgreFUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8044963C
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x24(r31)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8044931C
	fadds    f0, f2, f1
	b        lbl_80449320

lbl_8044931C:
	fsubs    f0, f1, f2

lbl_80449320:
	fctiwz   f0, f0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	b        lbl_8044963C

lbl_80449340:
	lwz      r3, 0xd8(r31)
	bl       isFinish__Q23ebi13TScreenProgreFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8044963C
	lfs      f0, lbl_805209A0@sda21(r2)
	mr       r3, r31
	li       r4, 9
	stfs     f0, 0x50(r31)
	bl       setMode__11BootSectionFi
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	bl       changeRenderMode__6SystemFQ26System11ERenderMode
	b        lbl_8044963C

lbl_80449374:
	lwz      r3, 0xd4(r31)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80449398
	bl       VIGetDTVStatus
	cmplwi   r3, 1
	bne      lbl_80449398
	li       r0, 1
	stb      r0, 0xdd(r31)

lbl_80449398:
	lwz      r3, 0x24(r31)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_804493F4
	bge      lbl_8044963C
	cmpwi    r0, 0
	bge      lbl_804493BC
	b        lbl_8044963C

lbl_804493BC:
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, lbl_805209F8@sda21(r2)
	lfs      f0, 0x54(r4)
	lwz      r12, 0xc(r12)
	fdivs    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x50(r31)
	b        lbl_8044963C

lbl_804493F4:
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	lfs      f1, 0x50(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r31)
	lwz      r3, 0xd4(r31)
	lwz      r0, 0x1c(r3)
	rotlwi.  r0, r0, 0
	beq      lbl_80449444
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80449444
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1800
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r4, 1
	b        lbl_80449458

lbl_80449444:
	lfs      f1, 0x50(r31)
	lfs      f0, zz_80520a7c@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80449458
	li       r4, 1

lbl_80449458:
	clrlwi.  r0, r4, 0x18
	beq      lbl_8044963C
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x24(r31)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80449490
	fadds    f0, f2, f1
	b        lbl_80449494

lbl_80449490:
	fsubs    f0, f1, f2

lbl_80449494:
	fctiwz   f0, f0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 3
	bl       setMode__11BootSectionFi
	b        lbl_8044963C

lbl_804494C0:
	lwz      r3, 0x24(r31)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	bne      lbl_8044963C
	mr       r3, r31
	li       r4, 4
	bl       setMode__11BootSectionFi
	li       r4, 0
	lwz      r5, 0xe0(r31)
	lfs      f0, lbl_805209A0@sda21(r2)
	mr       r7, r4
	li       r3, 1
	b        lbl_8044951C

lbl_804494F8:
	lwz      r0, 0(r5)
	add      r6, r0, r7
	lwz      r0, 0(r6)
	cmpwi    r0, 1
	beq      lbl_80449514
	stfs     f0, 0x20(r6)
	stw      r3, 0(r6)

lbl_80449514:
	addi     r7, r7, 0x34
	addi     r4, r4, 1

lbl_8044951C:
	lwz      r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	cmplw    r4, r0
	blt      lbl_804494F8
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80449548
	addi     r3, r30, 0x1ec
	addi     r5, r30, 0x1c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80449548:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_80449568
	addi     r3, r30, 0x1ec
	addi     r5, r30, 0x1c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80449568:
	lwz      r27, 4(r28)
	cmplwi   r27, 0
	bne      lbl_80449588
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x666
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80449588:
	lis      r4, 0xC001101F@ha
	mr       r3, r27
	addi     r4, r4, 0xC001101F@l
	bl       startGlobalStream__Q23PSM12Scene_GlobalFUl
	b        lbl_8044963C

lbl_8044959C:
	lwz      r3, 0x24(r31)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_804495F8
	bge      lbl_8044963C
	cmpwi    r0, 0
	bge      lbl_804495C0
	b        lbl_8044963C

lbl_804495C0:
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, lbl_805209F8@sda21(r2)
	lfs      f0, 0x54(r4)
	lwz      r12, 0xc(r12)
	fdivs    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x50(r31)
	b        lbl_8044963C

lbl_804495F8:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x50(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805209A4@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x50(r31)
	lfs      f1, 0x50(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8044963C
	mr       r3, r31
	li       r4, 0xa
	bl       setMode__11BootSectionFi
	b        lbl_8044963C

lbl_8044962C:
	li       r0, 0
	lfs      f0, lbl_805209F8@sda21(r2)
	stb      r0, 0x34(r31)
	stfs     f0, 0x30(r31)

lbl_8044963C:
	lbz      r0, 0xdc(r31)
	cmplwi   r0, 0
	beq      lbl_80449680
	lwz      r3, 0xd8(r31)
	cmplwi   r3, 0
	beq      lbl_80449658
	bl       update__Q23ebi13TScreenProgreFv

lbl_80449658:
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80449680
	bl       update__14TParticle2dMgrFv

lbl_80449680:
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv
	lbz      r3, 0x34(r31)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	804496A0
 * Size:	00009C
 */
void BootSection::updateLoadResourceFirst()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x5c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadSyncAllNoBlock__6SystemFv
	cmpwi    r3, 0
	bne      lbl_80449728
	lis      r3, gGameConfig__4Game@ha
	addi     r3, r3, gGameConfig__4Game@l
	lwz      r0, 0x238(r3)
	cmpwi    r0, 0
	beq      lbl_80449704
	lwz      r3, sys@sda21(r13)
	li       r0, 0
	lwz      r3, 0x60(r3)
	stb      r0, 0x3b(r3)
	b        lbl_8044971C

lbl_80449704:
	lwz      r0, 0x1c8(r3)
	cmpwi    r0, 0
	bne      lbl_8044971C
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	bl       loadGameOption__Q34Game10MemoryCard3MgrFv

lbl_8044971C:
	mr       r3, r31
	li       r4, 1
	bl       setMode__11BootSectionFi

lbl_80449728:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8044973C
 * Size:	00013C
 */
void BootSection::updateLoadMemoryCard()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8049AF08@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8049AF08@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x5c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80449798
	addi     r3, r31, 0x1ec
	addi     r5, r31, 0x1c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80449798:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_804497B8
	addi     r3, r31, 0x1ec
	addi     r5, r31, 0x1c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804497B8:
	lwz      r30, 4(r30)
	cmplwi   r30, 0
	bne      lbl_804497D8
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x6d4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804497D8:
	mr       r3, r30
	bl       getGlobalStream__Q23PSM12Scene_GlobalFv
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, sys@sda21(r13)
	li       r31, 0
	lwz      r30, 0(r3)
	lwz      r3, 0x5c(r4)
	lwz      r0, 0xa8(r3)
	cmpwi    r0, 0
	bne      lbl_8044981C
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_8044981C
	li       r31, 1

lbl_8044981C:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8044985C
	cmplwi   r30, 0
	bne      lbl_8044985C
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	bl       checkStatus__13MemoryCardMgrFv
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x60(r3)
	bl       setup__Q34Game14CommonSaveData3MgrFv
	lwz      r3, sys@sda21(r13)
	bl       loadResourceSecond__6SystemFv
	mr       r3, r29
	bl       setModeEpilepsy__11BootSectionFv
	lwz      r3, sys@sda21(r13)
	bl       resetPermissionOn__6SystemFv

lbl_8044985C:
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
 * Address:	80449878
 * Size:	000288
 */
void BootSection::updateNintendoLogo()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, gGameConfig__4Game@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	addi     r3, r4, gGameConfig__4Game@l
	lwz      r0, 0x238(r3)
	lwz      r31, 0x48(r30)
	cmpwi    r0, 0
	bne      lbl_804498FC
	lwz      r0, mRenderMode__6System@sda21(r13)
	cmpwi    r0, 1
	beq      lbl_804498FC
	bl       OSGetProgressiveMode
	cmplwi   r3, 1
	beq      lbl_804498D0
	lwz      r3, 0xd4(r30)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_804498E8

lbl_804498D0:
	bl       VIGetDTVStatus
	cmplwi   r3, 1
	bne      lbl_804498E8
	li       r0, 1
	stb      r0, 0xdd(r30)
	b        lbl_804498FC

lbl_804498E8:
	bl       VIGetDTVStatus
	cmplwi   r3, 1
	beq      lbl_804498FC
	li       r3, 0
	bl       OSSetProgressiveMode

lbl_804498FC:
	lbz      r0, 0xdd(r30)
	cmplwi   r0, 0
	beq      lbl_8044998C
	lwz      r0, 0x4c(r30)
	cmpwi    r0, 5
	beq      lbl_8044998C
	lbz      r0, 0xdc(r30)
	cmplwi   r0, 0
	bne      lbl_8044998C
	li       r0, 5
	li       r3, 0x14
	stw      r0, 0x4c(r30)
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_80449980
	lis      r3, lbl_804ED068@ha
	lis      r4, __vt__9IDelegate@ha
	addi     r8, r3, lbl_804ED068@l
	lis      r3, "__vt__23Delegate<11BootSection>"@ha
	lwz      r7, 0(r8)
	addi     r4, r4, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r3, "__vt__23Delegate<11BootSection>"@l
	lwz      r3, 8(r8)
	stw      r7, 8(r1)
	stw      r4, 0(r5)
	stw      r0, 0(r5)
	stw      r30, 4(r5)
	stw      r7, 8(r5)
	stw      r6, 0xc(r5)
	stw      r6, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r3, 0x10(r5)

lbl_80449980:
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x64
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate

lbl_8044998C:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x50(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805209B8@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x50(r30)
	lfs      f1, 0x50(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_80449ACC
	mr       r3, r30
	bl       waitLoadResource__11BootSectionFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80449ACC
	lbz      r0, 0xdc(r30)
	cmplwi   r0, 0
	bne      lbl_804499D4
	li       r0, 1
	stb      r0, 0xdc(r30)

lbl_804499D4:
	lwz      r4, 0x4c(r30)
	cmpwi    r4, 5
	beq      lbl_80449A70
	li       r0, 9
	stw      r0, 0x4c(r30)
	lwz      r3, 0x24(r30)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	bne      lbl_80449A44
	lwz      r4, sys@sda21(r13)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80449A24
	fadds    f0, f2, f1
	b        lbl_80449A28

lbl_80449A24:
	fsubs    f0, f1, f2

lbl_80449A28:
	fctiwz   f0, f0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	mtctr    r12
	bctrl

lbl_80449A44:
	lwz      r3, 0x24(r30)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	bne      lbl_80449ACC
	lwz      r4, 0x4c(r30)
	mr       r3, r30
	bl       setMode__11BootSectionFi
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x50(r30)
	b        lbl_80449ACC

lbl_80449A70:
	mr       r3, r30
	bl       setMode__11BootSectionFi
	lfs      f2, lbl_805209A0@sda21(r2)
	li       r4, 0
	lfs      f1, lbl_805209F8@sda21(r2)
	stfs     f2, 0x50(r30)
	lwz      r5, sys@sda21(r13)
	lwz      r3, 0xd8(r30)
	lfs      f0, 0x54(r5)
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f2
	cror     2, 1, 2
	bne      lbl_80449AAC
	fadds    f0, f1, f0
	b        lbl_80449AB0

lbl_80449AAC:
	fsubs    f0, f0, f1

lbl_80449AB0:
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r5, 0x1c(r1)
	bl       startScreen__Q23ebi13TScreenProgreFlUl
	lwz      r3, 0xd8(r30)
	li       r0, 1
	stb      r0, 8(r3)

lbl_80449ACC:
	lwz      r0, 0x48(r30)
	cmpw     r0, r31
	beq      lbl_80449AE8
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x64
	lwz      r5, 0xd0(r30)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate

lbl_80449AE8:
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
 * Address:	80449B00
 * Size:	000180
 */
void BootSection::updateProgressive()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f1, lbl_805209C8@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f2, 0x50(r3)
	fcmpo    cr0, f2, f1
	bge      lbl_80449BA0
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fadds    f0, f2, f0
	stfs     f0, 0x50(r31)
	lfs      f0, 0x50(r31)
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_80449B4C
	lwz      r3, 0xd8(r31)
	bl       setDecide__Q23ebi13TScreenProgreFv

lbl_80449B4C:
	lwz      r3, 0xd8(r31)
	lbz      r0, 9(r3)
	cmplwi   r0, 0
	beq      lbl_80449BA0
	lwz      r4, sys@sda21(r13)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80449B84
	fadds    f0, f2, f1
	b        lbl_80449B88

lbl_80449B84:
	fsubs    f0, f1, f2

lbl_80449B88:
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	bl       fadeout__Q23ebi13TScreenProgreFUl
	lfs      f0, lbl_805209C8@sda21(r2)
	stfs     f0, 0x50(r31)

lbl_80449BA0:
	lwz      r3, 0xd8(r31)
	bl       isFinish__Q23ebi13TScreenProgreFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80449C6C
	lwz      r3, 0xd8(r31)
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80449C14
	mr       r3, r31
	li       r4, 8
	bl       setMode__11BootSectionFi
	lwz      r3, sys@sda21(r13)
	li       r4, 2
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 0xd8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80449BFC
	fadds    f0, f2, f1
	b        lbl_80449C00

lbl_80449BFC:
	fsubs    f0, f1, f2

lbl_80449C00:
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r5, 0xc(r1)
	bl       startScreen__Q23ebi13TScreenProgreFlUl
	b        lbl_80449C64

lbl_80449C14:
	mr       r3, r31
	li       r4, 7
	bl       setMode__11BootSectionFi
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 0xd8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80449C50
	fadds    f0, f2, f1
	b        lbl_80449C54

lbl_80449C50:
	fsubs    f0, f1, f2

lbl_80449C54:
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r5, 0xc(r1)
	bl       startScreen__Q23ebi13TScreenProgreFlUl

lbl_80449C64:
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x50(r31)

lbl_80449C6C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80449C80
 * Size:	000064
 */
void BootSection::updateWaitProgressive()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_805209A4@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f0, lbl_80520A64@sda21(r2)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f2, 0x50(r3)
	fadds    f1, f2, f1
	stfs     f1, 0x50(r3)
	lfs      f1, 0x50(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80449CD0
	li       r3, 0
	bl       VISetBlack
	bl       VIFlush
	bl       VIWaitForRetrace
	mr       r3, r31
	li       r4, 9
	bl       setMode__11BootSectionFi

lbl_80449CD0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80449CE4
 * Size:	000120
 */
void BootSection::run()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_804ECFE8@ha
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r30, 0x38(r1)
	addi     r30, r4, lbl_804ECFE8@l
	lwz      r3, 0x1c(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	li       r3, 0x14
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_80449D5C
	lwz      r8, 0x8c(r30)
	lis      r3, __vt__9IDelegate@ha
	lwz      r7, 0x90(r30)
	addi     r4, r3, __vt__9IDelegate@l
	lwz      r6, 0x94(r30)
	lis      r3, "__vt__23Delegate<11BootSection>"@ha
	addi     r0, r3, "__vt__23Delegate<11BootSection>"@l
	stw      r8, 0x20(r1)
	stw      r4, 0(r5)
	stw      r0, 0(r5)
	stw      r31, 4(r5)
	stw      r8, 8(r5)
	stw      r7, 0xc(r5)
	stw      r7, 0x24(r1)
	stw      r6, 0x28(r1)
	stw      r6, 0x10(r5)

lbl_80449D5C:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x64
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	lwz      r6, 0x98(r30)
	mr       r3, r31
	lwz      r5, 0x9c(r30)
	addi     r4, r1, 0x14
	lwz      r0, 0xa0(r30)
	stw      r6, 0x14(r1)
	stw      r5, 0x18(r1)
	stw      r0, 0x1c(r1)
	bl       runWait__11BootSectionFM11BootSectionFPCvPv_b
	lwz      r3, sys@sda21(r13)
	bl       loadResourceFirst__6SystemFv
	mr       r3, r31
	li       r4, 0
	bl       setMode__11BootSectionFi
	mr       r3, r31
	bl       run__7SectionFv
	lwz      r3, gPikmin2AramMgr@sda21(r13)
	li       r4, 0
	bl       setLoadPermission__Q211Pikmin2ARAM3MgrFb
	lwz      r6, 0xa4(r30)
	mr       r3, r31
	lwz      r5, 0xa8(r30)
	addi     r4, r1, 8
	lwz      r0, 0xac(r30)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       runWait__11BootSectionFM11BootSectionFPCvPv_b
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	bl       heapStatusDump__6SystemFb
	li       r0, 0
	stb      r0, 0x34(r31)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80449E04
 * Size:	00009C
 */
void BootSection::runWait(BootSection, bool(const void*, void*))
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 1
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80449E7C

lbl_80449E2C:
	mr       r3, r29
	bl       beginFrame__7SectionFv
	mr       r3, r29
	bl       beginRender__7SectionFv
	mr       r3, r29
	lwz      r4, 0x2c(r29)
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       endRender__7SectionFv
	mr       r3, r29
	mr       r12, r30
	bl       __ptmf_scall
	nop
	mr       r0, r3
	mr       r3, r29
	mr       r31, r0
	bl       endFrame__7SectionFv

lbl_80449E7C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_80449E2C
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
 * Size:	000090
 */
void BootSection::waitLoadGameOption()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void BootSection::waitSystemDvdLoad()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80449EA0
 * Size:	000030
 */
void BootSection::waitLoadResource()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadSyncAllNoBlock__6SystemFv
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80449ED0
 * Size:	000084
 */
void BootSection::setMode(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r0, 0x48(r3)
	cmpw     r0, r4
	beq      lbl_80449F40
	stw      r4, 0x48(r31)
	lwz      r0, 0x48(r31)
	cmpwi    r0, 4
	beq      lbl_80449F04
	b        lbl_80449F40

lbl_80449F04:
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x24(r31)
	lfs      f1, lbl_805209F8@sda21(r2)
	lfs      f0, 0x54(r3)
	lwz      r3, 4(r4)
	fdivs    f0, f1, f0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x50(r31)

lbl_80449F40:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void BootSection::getModeEpilepsy()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80449F54
 * Size:	000088
 */
void BootSection::setModeEpilepsy()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r0, 0x48(r3)
	cmpwi    r0, 2
	beq      lbl_80449FC8
	li       r0, 2
	stw      r0, 0x48(r31)
	lwz      r0, 0x48(r31)
	cmpwi    r0, 4
	beq      lbl_80449F8C
	b        lbl_80449FC8

lbl_80449F8C:
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x24(r31)
	lfs      f1, lbl_805209F8@sda21(r2)
	lfs      f0, 0x54(r3)
	lwz      r3, 4(r4)
	fdivs    f0, f1, f0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x50(r31)

lbl_80449FC8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80449FDC
 * Size:	000008
 */
u32 BootSection::forceReset() { return 0x0; }

/*
 * --INFO--
 * Address:	80449FE4
 * Size:	000030
 */
void Delegate<BootSection>::invoke()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r12, r4, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8044A014
 * Size:	000028
 */
void __sinit_bootSection_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804ECFF8@ha
	stw      r0, lbl_80516290@sda21(r13)
	stfsu    f0, lbl_804ECFF8@l(r3)
	stfs     f0, lbl_80516294@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
