#include "og/Screen/callbackNodes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogLifeGauge_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048DFB8
    lbl_8048DFB8:
        .asciz "ogLifeGauge.cpp"
    .global lbl_8048DFC8
    lbl_8048DFC8:
        .asciz "ERR! : NULL Pane !!!\n"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen13NaviLifeGauge
    __vt__Q32og6Screen13NaviLifeGauge:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen13NaviLifeGaugeFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__Q32og6Screen13NaviLifeGaugeFv
        .4byte drawSelf__7J2DPaneFff
        .4byte drawSelf__9J2DScreenFffPA3_A4_f
        .4byte search__9J2DScreenFUx
        .4byte searchUserInfo__9J2DScreenFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__9J2DScreenFPC7ResTIMG
        .4byte isUsed__9J2DScreenFPC7ResFONT
        .4byte clearAnmTransform__9J2DScreenFv
        .4byte rewriteAlpha__7J2DPaneFv
        .4byte setAnimation__9J2DScreenFP10J2DAnmBase
        .4byte setAnimation__9J2DScreenFP15J2DAnmTransform
        .4byte setAnimation__9J2DScreenFP11J2DAnmColor
        .4byte setAnimation__9J2DScreenFP16J2DAnmTexPattern
        .4byte setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey
        .4byte setAnimation__9J2DScreenFP15J2DAnmTevRegKey
        .4byte setAnimation__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setAnimation__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
        .4byte draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
    .global __vt__Q32og6Screen18CallBack_LifeGauge
    __vt__Q32og6Screen18CallBack_LifeGauge:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen18CallBack_LifeGaugeFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen18CallBack_LifeGaugeFv
        .4byte
   draw__Q32og6Screen18CallBack_LifeGaugeFR8GraphicsR14J2DGrafContext .4byte
   doInit__Q29P2DScreen4NodeFv .global __vt__Q29P2DScreen12CallBackNode
    __vt__Q29P2DScreen12CallBackNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29P2DScreen12CallBackNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q29P2DScreen12CallBackNodeFv
        .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32og6Screen18CallBack_LifeGauge
    msVal__Q32og6Screen18CallBack_LifeGauge:
        .skip 0x10

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D5B0
    lbl_8051D5B0:
        .float 1.0
    .global lbl_8051D5B4
    lbl_8051D5B4:
        .4byte 0x41880000
    .global lbl_8051D5B8
    lbl_8051D5B8:
        .4byte 0x00000000
    .global lbl_8051D5BC
    lbl_8051D5BC:
        .4byte 0x43000000
    .global lbl_8051D5C0
    lbl_8051D5C0:
        .4byte 0x40490FDB
    .global lbl_8051D5C4
    lbl_8051D5C4:
        .float 0.5
    .global lbl_8051D5C8
    lbl_8051D5C8:
        .4byte 0x3ECCCCCD
    .global lbl_8051D5CC
    lbl_8051D5CC:
        .4byte 0x41F00000
    .global lbl_8051D5D0
    lbl_8051D5D0:
        .4byte 0x3F19999A
    .global lbl_8051D5D4
    lbl_8051D5D4:
        .4byte 0x42480000
    .global lbl_8051D5D8
    lbl_8051D5D8:
        .4byte 0xC3A2F983
    .global lbl_8051D5DC
    lbl_8051D5DC:
        .4byte 0x43A2F983
    .global lbl_8051D5E0
    lbl_8051D5E0:
        .float 0.7
    .global lbl_8051D5E4
    lbl_8051D5E4:
        .4byte 0x437F0000
    .global lbl_8051D5E8
    lbl_8051D5E8:
        .float 0.3
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80306038
 * Size:	000158
 */
og::Screen::CallBack_LifeGauge::CallBack_LifeGauge(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r0, r31
	stw      r30, 8(r1)
	mr       r30, r0
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r3, __vt__Q32og6Screen18CallBack_LifeGauge@ha
	stw      r0, 0(r30)
	li       r5, 0
	addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r0, r3, __vt__Q32og6Screen18CallBack_LifeGauge@l
	stw      r5, 0x18(r30)
	li       r3, 0xc
	lfs      f2, lbl_8051D5B0@sda21(r2)
	stw      r4, 0(r30)
	lfs      f1, lbl_8051D5B4@sda21(r2)
	stw      r0, 0(r31)
	lfs      f0, lbl_8051D5B8@sda21(r2)
	stw      r5, 0x1c(r31)
	stfs     f2, 0x20(r31)
	stfs     f1, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x2c(r31)
	stfs     f0, 0x54(r31)
	stfs     f2, 0x58(r31)
	stw      r5, 0x5c(r31)
	stw      r5, 0x60(r31)
	stw      r5, 0x64(r31)
	stw      r5, 0x68(r31)
	stw      r5, 0x6c(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803060DC
	bl       __ct__9LifeGaugeFv
	mr       r0, r3

lbl_803060DC:
	stw      r0, 0x4c(r31)
	li       r4, 1
	lfs      f0, lbl_8051D5B8@sda21(r2)
	li       r0, 0
	li       r3, 0x18
	stfs     f0, 0x34(r31)
	stfs     f0, 0x38(r31)
	stfs     f0, 0x3c(r31)
	stfs     f0, 0x40(r31)
	stfs     f0, 0x44(r31)
	stfs     f0, 0x48(r31)
	stfs     f0, 0x30(r31)
	stb      r4, 0x50(r31)
	lbz      r4, 0x50(r31)
	stb      r4, 0x51(r31)
	stw      r0, 0x70(r31)
	stw      r0, 0x74(r31)
	stw      r0, 0x78(r31)
	stw      r0, 0x7c(r31)
	stw      r0, 0x80(r31)
	stw      r0, 0x84(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80306144
	bl       __ct__Q32og6Screen8AngleMgrFv
	mr       r0, r3

lbl_80306144:
	stw      r0, 0x88(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80306160
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_80306160:
	stw      r0, 0x8c(r31)
	li       r0, 0
	lfs      f0, lbl_8051D5B8@sda21(r2)
	mr       r3, r31
	stb      r0, 0x94(r31)
	stfs     f0, 0x98(r31)
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
 * Address:	80306190
 * Size:	000070
 */
P2DScreen::CallBackNode::~CallBackNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803061E4
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
	stw      r0, 0(r30)
	beq      lbl_803061D4
	lis      r5, __vt__Q29P2DScreen4Node@ha
	li       r4, 0
	addi     r0, r5, __vt__Q29P2DScreen4Node@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_803061D4:
	extsh.   r0, r31
	ble      lbl_803061E4
	mr       r3, r30
	bl       __dl__FPv

lbl_803061E4:
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
 * Address:	80306200
 * Size:	0002C4
 */
void CallBack_LifeGauge::init(P2DScreen::Mgr*, DataNavi*, LifeGaugeType)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x2A4
	  stw       r30, 0x1C(r28)
	  li        r4, 0x80
	  lfs       f0, 0x0(r30)
	  stfs      f0, 0x20(r28)
	  lwz       r3, 0x4C(r28)
	  bl        -0x1EC61C
	  lfs       f1, -0xDA4(r2)
	  lis       r4, 0x7069
	  lfs       f0, 0x20(r28)
	  mr        r3, r29
	  lwz       r7, 0x4C(r28)
	  addi      r6, r4, 0x6E31
	  fmuls     f0, f1, f0
	  li        r5, 0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  stb       r0, 0x8(r7)
	  stw       r29, 0x5C(r28)
	  bl        -0x33D8
	  stw       r3, 0x60(r28)
	  lis       r4, 0x7069
	  mr        r3, r29
	  li        r5, 0
	  addi      r6, r4, 0x6E32
	  bl        -0x33F0
	  stw       r3, 0x64(r28)
	  lis       r4, 0x6E61
	  mr        r3, r29
	  li        r5, 0
	  addi      r6, r4, 0x5F69
	  bl        -0x3408
	  stw       r3, 0x68(r28)
	  lis       r4, 0x6C69
	  mr        r3, r29
	  li        r5, 0
	  addi      r6, r4, 0x5F69
	  bl        -0x3420
	  stw       r3, 0x6C(r28)
	  lis       r4, 0x7669
	  li        r0, 0
	  mr        r3, r29
	  lwz       r7, 0x68(r28)
	  addi      r6, r4, 0x5F69
	  li        r5, 0x6E61
	  lfs       f0, 0xD4(r7)
	  stfs      f0, 0x3C(r28)
	  lwz       r4, 0x68(r28)
	  lfs       f0, 0xD8(r4)
	  stfs      f0, 0x40(r28)
	  lwz       r4, 0x6C(r28)
	  lfs       f0, 0xD4(r4)
	  stfs      f0, 0x44(r28)
	  lwz       r4, 0x6C(r28)
	  lfs       f0, 0xD8(r4)
	  stfs      f0, 0x48(r28)
	  lwz       r4, 0x60(r28)
	  stb       r0, 0xB0(r4)
	  lwz       r4, 0x64(r28)
	  stb       r0, 0xB0(r4)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x70(r28)
	  mr        r3, r29
	  lis       r5, 0x6932
	  lis       r4, 0x6E
	  lwz       r12, 0x0(r29)
	  addi      r6, r5, 0x5F69
	  addi      r5, r4, 0x6176
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x74(r28)
	  mr        r3, r29
	  lis       r5, 0x6933
	  lis       r4, 0x6E
	  lwz       r12, 0x0(r29)
	  addi      r6, r5, 0x5F69
	  addi      r5, r4, 0x6176
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r28)
	  mr        r3, r29
	  lis       r4, 0x6E61
	  li        r5, 0
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x7669
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x7C(r28)
	  mr        r3, r29
	  lis       r4, 0x6176
	  li        r5, 0x6E
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6932
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x80(r28)
	  mr        r3, r29
	  lis       r4, 0x6176
	  li        r5, 0x6E
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6933
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x84(r28)
	  lwz       r4, 0x80(r28)
	  cmplwi    r4, 0
	  beq-      .loc_0x22C
	  lwz       r0, 0x84(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x22C
	  li        r0, 0
	  mr        r3, r28
	  stb       r0, 0xB0(r4)
	  mr        r4, r31
	  lwz       r5, 0x84(r28)
	  stb       r0, 0xB0(r5)
	  bl        .loc_0x2C4

	.loc_0x22C:
	  lbz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x26C
	  lfs       f1, -0xDA8(r2)
	  lis       r3, 0x8051
	  li        r0, 0x1
	  stfs      f1, 0x30(r28)
	  addi      r4, r3, 0x3BFC
	  stb       r0, 0x50(r28)
	  lbz       r0, 0x50(r28)
	  stb       r0, 0x51(r28)
	  lwz       r3, 0x88(r28)
	  lfs       f2, 0x8(r4)
	  lfs       f3, 0xC(r4)
	  bl        0x29E54
	  b         .loc_0x29C

	.loc_0x26C:
	  lfs       f1, -0xDA0(r2)
	  lis       r3, 0x8051
	  li        r0, 0
	  stfs      f1, 0x30(r28)
	  addi      r4, r3, 0x3BFC
	  stb       r0, 0x50(r28)
	  lbz       r0, 0x50(r28)
	  stb       r0, 0x51(r28)
	  lwz       r3, 0x88(r28)
	  lfs       f2, 0x8(r4)
	  lfs       f3, 0xC(r4)
	  bl        0x29E20

	.loc_0x29C:
	  li        r0, 0
	  stb       r0, 0x94(r28)

	.loc_0x2A4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x2C4:
	*/
}

/*
 * --INFO--
 * Address:	803064C4
 * Size:	000434
 */
void CallBack_LifeGauge::setType(LifeGaugeType)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  cmpwi     r4, 0x2
	  stw       r0, 0x94(r1)
	  li        r0, -0x1
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  mr        r28, r3
	  stw       r0, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  stw       r0, 0x74(r1)
	  stw       r4, 0x90(r3)
	  beq-      .loc_0x234
	  bge-      .loc_0x414
	  cmpwi     r4, 0x1
	  bge-      .loc_0x50
	  b         .loc_0x414

	.loc_0x50:
	  lwz       r3, 0x74(r28)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x70(r28)
	  lwz       r4, 0x20(r4)
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x80(r28)
	  addi      r3, r1, 0x40
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x138(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x40(r1)
	  addi      r4, r1, 0x44
	  stw       r0, 0x44(r1)
	  lwz       r3, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x12C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x80(r28)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x134(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x38(r1)
	  addi      r4, r1, 0x3C
	  stw       r0, 0x3C(r1)
	  lwz       r3, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x80(r28)
	  lwz       r3, 0x7C(r28)
	  lbz       r4, 0x150(r5)
	  lbz       r0, 0x151(r5)
	  lbz       r31, 0x152(r5)
	  lbz       r8, 0x153(r5)
	  stb       r4, 0x68(r1)
	  lbz       r4, 0x154(r5)
	  stb       r0, 0x69(r1)
	  lbz       r0, 0x155(r5)
	  lbz       r30, 0x156(r5)
	  lbz       r7, 0x157(r5)
	  lbz       r29, 0x158(r5)
	  lbz       r28, 0x159(r5)
	  lbz       r12, 0x15A(r5)
	  lbz       r6, 0x15B(r5)
	  lbz       r11, 0x15C(r5)
	  lbz       r10, 0x15D(r5)
	  lbz       r9, 0x15E(r5)
	  lbz       r5, 0x15F(r5)
	  stb       r31, 0x6A(r1)
	  stb       r8, 0x6B(r1)
	  lwz       r8, 0x68(r1)
	  stb       r4, 0x6C(r1)
	  stw       r8, 0x18(r1)
	  lbz       r4, 0x18(r1)
	  stb       r0, 0x6D(r1)
	  lbz       r0, 0x19(r1)
	  stb       r4, 0x150(r3)
	  lbz       r4, 0x1A(r1)
	  stb       r0, 0x151(r3)
	  lbz       r0, 0x1B(r1)
	  stb       r4, 0x152(r3)
	  stb       r30, 0x6E(r1)
	  stb       r7, 0x6F(r1)
	  lwz       r7, 0x6C(r1)
	  stb       r0, 0x153(r3)
	  stw       r7, 0x1C(r1)
	  lbz       r4, 0x1C(r1)
	  stb       r29, 0x70(r1)
	  lbz       r0, 0x1D(r1)
	  stb       r4, 0x154(r3)
	  lbz       r4, 0x1E(r1)
	  stb       r0, 0x155(r3)
	  lbz       r0, 0x1F(r1)
	  stb       r4, 0x156(r3)
	  stb       r28, 0x71(r1)
	  stb       r12, 0x72(r1)
	  stb       r6, 0x73(r1)
	  lwz       r6, 0x70(r1)
	  stb       r0, 0x157(r3)
	  stw       r6, 0x20(r1)
	  lbz       r4, 0x20(r1)
	  stb       r11, 0x74(r1)
	  lbz       r0, 0x21(r1)
	  stb       r4, 0x158(r3)
	  lbz       r4, 0x22(r1)
	  stb       r0, 0x159(r3)
	  lbz       r0, 0x23(r1)
	  stb       r4, 0x15A(r3)
	  stb       r10, 0x75(r1)
	  stb       r9, 0x76(r1)
	  stb       r5, 0x77(r1)
	  lwz       r5, 0x74(r1)
	  stb       r0, 0x15B(r3)
	  stw       r5, 0x24(r1)
	  lbz       r4, 0x24(r1)
	  lbz       r0, 0x25(r1)
	  stb       r4, 0x15C(r3)
	  lbz       r4, 0x26(r1)
	  stb       r0, 0x15D(r3)
	  lbz       r0, 0x27(r1)
	  stb       r4, 0x15E(r3)
	  stw       r8, 0x58(r1)
	  stw       r7, 0x5C(r1)
	  stw       r6, 0x60(r1)
	  stw       r5, 0x64(r1)
	  stb       r0, 0x15F(r3)
	  b         .loc_0x414

	.loc_0x234:
	  lwz       r3, 0x78(r28)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x70(r28)
	  lwz       r4, 0x20(r4)
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x84(r28)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x138(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x30(r1)
	  addi      r4, r1, 0x34
	  stw       r0, 0x34(r1)
	  lwz       r3, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x12C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x84(r28)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x134(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x28(r1)
	  addi      r4, r1, 0x2C
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x84(r28)
	  lwz       r3, 0x7C(r28)
	  lbz       r4, 0x150(r5)
	  lbz       r0, 0x151(r5)
	  lbz       r28, 0x152(r5)
	  lbz       r8, 0x153(r5)
	  stb       r4, 0x68(r1)
	  lbz       r4, 0x154(r5)
	  stb       r0, 0x69(r1)
	  lbz       r0, 0x155(r5)
	  lbz       r29, 0x156(r5)
	  lbz       r7, 0x157(r5)
	  lbz       r30, 0x158(r5)
	  lbz       r31, 0x159(r5)
	  lbz       r12, 0x15A(r5)
	  lbz       r6, 0x15B(r5)
	  lbz       r11, 0x15C(r5)
	  lbz       r10, 0x15D(r5)
	  lbz       r9, 0x15E(r5)
	  lbz       r5, 0x15F(r5)
	  stb       r28, 0x6A(r1)
	  stb       r8, 0x6B(r1)
	  lwz       r8, 0x68(r1)
	  stb       r4, 0x6C(r1)
	  stw       r8, 0x8(r1)
	  lbz       r4, 0x8(r1)
	  stb       r0, 0x6D(r1)
	  lbz       r0, 0x9(r1)
	  stb       r4, 0x150(r3)
	  lbz       r4, 0xA(r1)
	  stb       r0, 0x151(r3)
	  lbz       r0, 0xB(r1)
	  stb       r4, 0x152(r3)
	  stb       r29, 0x6E(r1)
	  stb       r7, 0x6F(r1)
	  lwz       r7, 0x6C(r1)
	  stb       r0, 0x153(r3)
	  stw       r7, 0xC(r1)
	  lbz       r4, 0xC(r1)
	  stb       r30, 0x70(r1)
	  lbz       r0, 0xD(r1)
	  stb       r4, 0x154(r3)
	  lbz       r4, 0xE(r1)
	  stb       r0, 0x155(r3)
	  lbz       r0, 0xF(r1)
	  stb       r4, 0x156(r3)
	  stb       r31, 0x71(r1)
	  stb       r12, 0x72(r1)
	  stb       r6, 0x73(r1)
	  lwz       r6, 0x70(r1)
	  stb       r0, 0x157(r3)
	  stw       r6, 0x10(r1)
	  lbz       r4, 0x10(r1)
	  stb       r11, 0x74(r1)
	  lbz       r0, 0x11(r1)
	  stb       r4, 0x158(r3)
	  lbz       r4, 0x12(r1)
	  stb       r0, 0x159(r3)
	  lbz       r0, 0x13(r1)
	  stb       r4, 0x15A(r3)
	  stb       r10, 0x75(r1)
	  stb       r9, 0x76(r1)
	  stb       r5, 0x77(r1)
	  lwz       r5, 0x74(r1)
	  stb       r0, 0x15B(r3)
	  stw       r5, 0x14(r1)
	  lbz       r4, 0x14(r1)
	  lbz       r0, 0x15(r1)
	  stb       r4, 0x15C(r3)
	  lbz       r4, 0x16(r1)
	  stb       r0, 0x15D(r3)
	  lbz       r0, 0x17(r1)
	  stb       r4, 0x15E(r3)
	  stw       r8, 0x48(r1)
	  stw       r7, 0x4C(r1)
	  stw       r6, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stb       r0, 0x15F(r3)

	.loc_0x414:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803068F8
 * Size:	000078
 */
void CallBack_LifeGauge::setOffset(float, float)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
lwz      r4, 0x18(r3)
cmplwi   r4, 0
bne      lbl_80306930
lis      r3, lbl_8048DFB8@ha
lis      r5, lbl_8048DFC8@ha
addi     r3, r3, lbl_8048DFB8@l
li       r4, 0xf3
addi     r5, r5, lbl_8048DFC8@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce
b        lbl_80306960

lbl_80306930:
lfs      f4, 0x28(r4)
lfs      f0, 0x20(r4)
lfs      f3, lbl_8051D5C4@sda21(r2)
fsubs    f0, f4, f0
fmadds   f0, f0, f3, f1
stfs     f0, 0x28(r3)
lwz      r4, 0x18(r3)
lfs      f1, 0x2c(r4)
lfs      f0, 0x24(r4)
fsubs    f0, f1, f0
fmadds   f0, f0, f3, f2
stfs     f0, 0x2c(r3)

lbl_80306960:
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80306970
 * Size:	000318
 */
void CallBack_LifeGauge::moveIcon(void)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stw      r31, 0x2c(r1)
mr       r31, r3
lbz      r0, 0x50(r3)
stb      r0, 0x51(r3)
lwz      r3, 0x1c(r3)
cmplwi   r3, 0
beq      lbl_803069A8
lbz      r0, 0x14(r3)
stb      r0, 0x50(r31)

lbl_803069A8:
lbz      r3, 0x50(r31)
lbz      r0, 0x51(r31)
cmplw    r3, r0
beq      lbl_80306A44
cmplwi   r3, 0
beq      lbl_80306A0C
lis      r4, msVal__Q32og6Screen18CallBack_LifeGauge@ha
lwz      r3, 0x88(r31)
addi     r4, r4, msVal__Q32og6Screen18CallBack_LifeGauge@l
lfs      f1, 0x30(r31)
lfs      f2, 8(r4)
lfs      f3, 0xc(r4)
bl       init__Q32og6Screen8AngleMgrFfff
lis      r4, msVal__Q32og6Screen18CallBack_LifeGauge@ha
lwz      r3, 0x88(r31)
addi     r4, r4, msVal__Q32og6Screen18CallBack_LifeGauge@l
lfs      f1, lbl_8051D5B8@sda21(r2)
lfs      f2, 4(r4)
bl       chase__Q32og6Screen8AngleMgrFff
li       r0, 1
lis      r3, msVal__Q32og6Screen18CallBack_LifeGauge@ha
stb      r0, 0x94(r31)
lfs      f0, msVal__Q32og6Screen18CallBack_LifeGauge@l(r3)
stfs     f0, 0x98(r31)
b        lbl_80306AA8

lbl_80306A0C:
lis      r4, msVal__Q32og6Screen18CallBack_LifeGauge@ha
lwz      r3, 0x88(r31)
addi     r4, r4, msVal__Q32og6Screen18CallBack_LifeGauge@l
lfs      f1, 0x30(r31)
lfs      f2, 8(r4)
lfs      f3, 0xc(r4)
bl       init__Q32og6Screen8AngleMgrFfff
lis      r4, msVal__Q32og6Screen18CallBack_LifeGauge@ha
lwz      r3, 0x88(r31)
addi     r4, r4, msVal__Q32og6Screen18CallBack_LifeGauge@l
lfs      f1, lbl_8051D5C0@sda21(r2)
lfs      f2, 4(r4)
bl       chase__Q32og6Screen8AngleMgrFff
b        lbl_80306AA8

lbl_80306A44:
cmplwi   r3, 0
beq      lbl_80306AA8
lbz      r0, 0x94(r31)
cmplwi   r0, 0
beq      lbl_80306AA8
lwz      r3, sys@sda21(r13)
lfs      f2, 0x98(r31)
lfs      f1, 0x54(r3)
lfs      f0, lbl_8051D5B8@sda21(r2)
fsubs    f1, f2, f1
stfs     f1, 0x98(r31)
lfs      f1, 0x98(r31)
fcmpo    cr0, f1, f0
bge      lbl_80306AA8
li       r0, 0
stb      r0, 0x94(r31)
lwz      r3, ogSound__2og@sda21(r13)
lwz      r4, 0x90(r31)
bl       setNaviChange__Q22og5SoundFi
lwz      r3, 0x8c(r31)
lfs      f1, lbl_8051D5C8@sda21(r2)
lfs      f2, lbl_8051D5CC@sda21(r2)
lfs      f3, lbl_8051D5D0@sda21(r2)
lfs      f4, lbl_8051D5B8@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff

lbl_80306AA8:
lwz      r3, 0x88(r31)
bl       calc__Q32og6Screen8AngleMgrFv
stfs     f1, 0x30(r31)
lfs      f0, lbl_8051D5B8@sda21(r2)
lfs      f2, 0x30(r31)
lfs      f1, lbl_8051D5D4@sda21(r2)
fcmpo    cr0, f2, f0
bge      lbl_80306AF4
lfs      f0, lbl_8051D5D8@sda21(r2)
lis      r3, sincosTable___5JMath@ha
addi     r3, r3, sincosTable___5JMath@l
fmuls    f0, f2, f0
fctiwz   f0, f0
stfd     f0, 8(r1)
lwz      r0, 0xc(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f0, r3, r0
fneg     f0, f0
b        lbl_80306B18

lbl_80306AF4:
lfs      f0, lbl_8051D5DC@sda21(r2)
lis      r3, sincosTable___5JMath@ha
addi     r3, r3, sincosTable___5JMath@l
fmuls    f0, f2, f0
fctiwz   f0, f0
stfd     f0, 0x10(r1)
lwz      r0, 0x14(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f0, r3, r0

lbl_80306B18:
fmuls    f1, f1, f0
lfs      f0, lbl_8051D5B8@sda21(r2)
stfs     f1, 0x34(r31)
lfs      f2, 0x30(r31)
fcmpo    cr0, f2, f0
bge      lbl_80306B34
fneg     f2, f2

lbl_80306B34:
lfs      f0, lbl_8051D5DC@sda21(r2)
lis      r3, sincosTable___5JMath@ha
addi     r3, r3, sincosTable___5JMath@l
lfs      f1, lbl_8051D5CC@sda21(r2)
fmuls    f2, f2, f0
addi     r4, r3, 4
lfs      f0, lbl_8051D5B8@sda21(r2)
fctiwz   f2, f2
stfd     f2, 0x18(r1)
lwz      r0, 0x1c(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f2, r4, r0
fmuls    f1, f1, f2
stfs     f1, 0x38(r31)
lfs      f1, 0x30(r31)
fcmpo    cr0, f1, f0
bge      lbl_80306B7C
fneg     f1, f1

lbl_80306B7C:
lfs      f0, lbl_8051D5DC@sda21(r2)
lfs      f3, lbl_8051D5B0@sda21(r2)
fmuls    f2, f1, f0
lfs      f0, lbl_8051D5C4@sda21(r2)
lfs      f1, lbl_8051D5E0@sda21(r2)
lwz      r3, 0x8c(r31)
fctiwz   f2, f2
stfd     f2, 0x20(r1)
lwz      r0, 0x24(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f2, r4, r0
fadds    f2, f3, f2
fmuls    f2, f2, f0
fsubs    f0, f3, f2
fmadds   f31, f1, f0, f2
bl       calc__Q32og6Screen8ScaleMgrFv
lwz      r3, 0x68(r31)
fmuls    f31, f31, f1
lfs      f1, 0x40(r31)
lfs      f0, lbl_8051D5CC@sda21(r2)
lwz      r12, 0(r3)
fsubs    f1, f1, f0
lfs      f0, 0x38(r31)
lfs      f4, 0x3c(r31)
lfs      f3, 0x34(r31)
lwz      r12, 0x10(r12)
fadds    f2, f1, f0
fsubs    f1, f4, f3
mtctr    r12
bctrl
lwz      r3, 0x6c(r31)
lfs      f2, 0x3c(r31)
lfs      f1, 0x44(r31)
lfs      f0, 0x34(r31)
lwz      r12, 0(r3)
fsubs    f4, f1, f2
fsubs    f3, f2, f0
lfs      f2, 0x48(r31)
lfs      f1, lbl_8051D5CC@sda21(r2)
lfs      f0, 0x38(r31)
fsubs    f2, f2, f1
lwz      r12, 0x10(r12)
fmadds   f1, f31, f4, f3
fadds    f2, f2, f0
mtctr    r12
bctrl
lwz      r3, 0x68(r31)
stfs     f31, 0xcc(r3)
stfs     f31, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x6c(r31)
stfs     f31, 0xcc(r3)
stfs     f31, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
psq_l    f31, 56(r1), 0, qr0
lwz      r0, 0x44(r1)
lfd      f31, 0x30(r1)
lwz      r31, 0x2c(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	80306C88
 * Size:	00026C
 */
void CallBack_LifeGauge::update(void)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stfd     f30, 0x20(r1)
psq_st   f30, 40(r1), 0, qr0
stw      r31, 0x1c(r1)
mr       r31, r3
bl       checkMovieActive__Q22og9newScreenFv
clrlwi.  r0, r3, 0x18
bne      lbl_80306ED0
mr       r3, r31
bl       moveIcon__Q32og6Screen18CallBack_LifeGaugeFv
lwz      r3, 0x1c(r31)
lfs      f0, 0(r3)
stfs     f0, 0x20(r31)
lwz      r3, 0x4c(r31)
lfs      f1, 0x20(r31)
bl       update__9LifeGaugeFf
lfs      f1, 0x20(r31)
lfs      f0, lbl_8051D5C4@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_80306EBC
lwz      r3, 0x60(r31)
li       r0, 1
lfs      f0, lbl_8051D5B0@sda21(r2)
stb      r0, 0xb0(r3)
lwz      r3, 0x64(r31)
stb      r0, 0xb0(r3)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x58(r31)
lfs      f2, 0x54(r3)
lfs      f1, 0x54(r31)
fmadds   f1, f3, f2, f1
stfs     f1, 0x54(r31)
lfs      f1, 0x54(r31)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_80306D50
lfs      f1, lbl_8051D5B8@sda21(r2)
stfs     f1, 0x54(r31)
lfs      f0, 0x20(r31)
fcmpo    cr0, f0, f1
ble      lbl_80306D50
lbz      r0, 0x50(r31)
cmplwi   r0, 0
beq      lbl_80306D50
lwz      r3, ogSound__2og@sda21(r13)
bl       setLifeDanger__Q22og5SoundFv

lbl_80306D50:
lwz      r3, 0x60(r31)
li       r4, 0x7a
lfs      f31, 0x54(r31)
lfs      f3, 0x28(r3)
lfs      f2, 0x20(r3)
lfs      f1, 0x2c(r3)
lfs      f0, 0x24(r3)
fsubs    f2, f3, f2
lfs      f5, lbl_8051D5C4@sda21(r2)
fsubs    f0, f1, f0
lfs      f4, lbl_8051D5B0@sda21(r2)
fmuls    f1, f2, f5
lfs      f3, lbl_8051D5B8@sda21(r2)
fmadds   f30, f31, f5, f4
fmuls    f2, f0, f5
bl       rotate__7J2DPaneFff13J2DRotateAxisf
lwz      r3, 0x60(r31)
stfs     f30, 0xcc(r3)
stfs     f30, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f0, lbl_8051D5E4@sda21(r2)
lwz      r3, 0x60(r31)
fnmsubs  f0, f0, f31, f0
lwz      r12, 0(r3)
fctiwz   f0, f0
lwz      r12, 0x24(r12)
stfd     f0, 8(r1)
lwz      r4, 0xc(r1)
mtctr    r12
bctrl
lfs      f3, lbl_8051D5E8@sda21(r2)
lfs      f2, 0x58(r31)
lfs      f1, 0x54(r31)
lfs      f0, lbl_8051D5B8@sda21(r2)
fnmsubs  f30, f3, f2, f1
fcmpo    cr0, f30, f0
bge      lbl_80306DF8
lfs      f0, lbl_8051D5B0@sda21(r2)
fadds    f30, f30, f0

lbl_80306DF8:
lwz      r3, 0x64(r31)
li       r4, 0x7a
lfs      f5, lbl_8051D5C4@sda21(r2)
lfs      f3, 0x28(r3)
lfs      f2, 0x20(r3)
lfs      f1, 0x2c(r3)
lfs      f0, 0x24(r3)
fsubs    f2, f3, f2
lfs      f4, lbl_8051D5B0@sda21(r2)
fsubs    f0, f1, f0
lfs      f3, lbl_8051D5B8@sda21(r2)
fmuls    f1, f2, f5
fmadds   f31, f30, f5, f4
fmuls    f2, f0, f5
bl       rotate__7J2DPaneFff13J2DRotateAxisf
lwz      r3, 0x64(r31)
stfs     f31, 0xcc(r3)
stfs     f31, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f0, lbl_8051D5E4@sda21(r2)
lwz      r3, 0x64(r31)
fnmsubs  f0, f0, f30, f0
lwz      r12, 0(r3)
fctiwz   f0, f0
lwz      r12, 0x24(r12)
stfd     f0, 0x10(r1)
lwz      r4, 0x14(r1)
mtctr    r12
bctrl
lfs      f1, 0x20(r31)
lfs      f0, lbl_8051D5B8@sda21(r2)
fcmpo    cr0, f1, f0
cror     2, 0, 2
bne      lbl_80306EA4
lwz      r3, 0x68(r31)
li       r0, 0
stb      r0, 0xb0(r3)
lwz      r3, 0x6c(r31)
stb      r0, 0xb0(r3)
b        lbl_80306ED0

lbl_80306EA4:
lwz      r3, 0x68(r31)
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x6c(r31)
stb      r0, 0xb0(r3)
b        lbl_80306ED0

lbl_80306EBC:
lwz      r3, 0x60(r31)
li       r0, 0
stb      r0, 0xb0(r3)
lwz      r3, 0x64(r31)
stb      r0, 0xb0(r3)

lbl_80306ED0:
psq_l    f31, 56(r1), 0, qr0
lfd      f31, 0x30(r1)
psq_l    f30, 40(r1), 0, qr0
lfd      f30, 0x20(r1)
lwz      r0, 0x44(r1)
lwz      r31, 0x1c(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	80306EF4
 * Size:	0000B4
 */
void CallBack_LifeGauge::draw(Graphics&, J2DGrafContext&)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
lfs      f0, lbl_8051D5B8@sda21(r2)
stw      r0, 0x44(r1)
stw      r31, 0x3c(r1)
mr       r31, r5
stw      r30, 0x38(r1)
mr       r30, r3
lfs      f1, 0x20(r3)
fcmpo    cr0, f1, f0
ble      lbl_80306F90
bl       initLifeGaugeDraw__9LifeGaugeFv
lwz      r4, 0x18(r30)
addi     r3, r31, 0x80
addi     r5, r1, 8
addi     r4, r4, 0x80
bl       PSMTXConcat
addi     r3, r1, 8
li       r4, 0
bl       GXLoadPosMtxImm
lwz      r3, 0x4c(r30)
lfs      f1, 0x24(r30)
lfs      f2, 0x28(r30)
lfs      f3, 0x2c(r30)
bl       draw__9LifeGaugeFfff
lfs      f1, 0x20(r30)
lfs      f0, lbl_8051D5C4@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_80306F90
lwz      r3, 0x64(r30)
li       r4, 0
lfs      f1, 0x28(r30)
li       r5, 0
lwz      r12, 0(r3)
li       r6, 0
lfs      f2, 0x2c(r30)
lwz      r12, 0xe4(r12)
mtctr    r12
bctrl

lbl_80306F90:
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
 * Address:	80306FA8
 * Size:	000118
 */
void NaviLifeGauge::setCallBack(DataNavi*, CallBack_LifeGauge::LifeGaugeType)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x150(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xFC
	  stw       r30, 0x150(r29)
	  bl        -0x3CC8
	  li        r3, 0x9C
	  bl        -0x2E3140
	  mr.       r0, r3
	  beq-      .loc_0x50
	  bl        -0xFB8
	  mr        r0, r3

	.loc_0x50:
	  stw       r0, 0x148(r29)
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  lwz       r3, 0x148(r29)
	  bl        -0xE0C
	  lis       r4, 0x6C69
	  lwz       r7, 0x148(r29)
	  mr        r3, r29
	  li        r5, 0
	  addi      r6, r4, 0x6665
	  bl        0x12DB00
	  lis       r4, 0x6D65
	  mr        r3, r29
	  addi      r6, r4, 0x7465
	  li        r5, 0
	  bl        0x2674C
	  stw       r3, 0x14C(r29)
	  lwz       r3, 0x148(r29)
	  lwz       r4, 0x18(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0xC8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x2048
	  li        r4, 0xF3
	  subi      r5, r5, 0x2038
	  crclr     6, 0x6
	  bl        -0x2DCA28
	  b         .loc_0xFC

	.loc_0xC8:
	  lfs       f1, 0x28(r4)
	  lfs       f0, 0x20(r4)
	  lfs       f3, -0xD9C(r2)
	  fsubs     f0, f1, f0
	  lfs       f2, -0xDA8(r2)
	  fmadds    f0, f0, f3, f2
	  stfs      f0, 0x28(r3)
	  lwz       r4, 0x18(r3)
	  lfs       f1, 0x2C(r4)
	  lfs       f0, 0x24(r4)
	  fsubs     f0, f1, f0
	  fmadds    f0, f0, f3, f2
	  stfs      f0, 0x2C(r3)

	.loc_0xFC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803070C0
 * Size:	00002C
 */
void NaviLifeGauge::setType(CallBack_LifeGauge::LifeGaugeType)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
lwz      r3, 0x148(r3)
cmplwi   r3, 0
beq      lbl_803070DC
bl
setType__Q32og6Screen18CallBack_LifeGaugeFQ42og6Screen18CallBack_LifeGauge13LifeGaugeType

lbl_803070DC:
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803070EC
 * Size:	00005C
 */
void NaviLifeGauge::update(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       update__Q29P2DScreen3MgrFv
lwz      r3, 0x150(r31)
lfs      f0, lbl_8051D5B8@sda21(r2)
lfs      f1, 0(r3)
fcmpo    cr0, f1, f0
ble      lbl_80307128
lwz      r3, 0x14c(r31)
li       r0, 1
stb      r0, 0x24(r3)
b        lbl_80307134

lbl_80307128:
lwz      r3, 0x14c(r31)
li       r0, 0
stb      r0, 0x24(r3)

lbl_80307134:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80307148
 * Size:	0000A4
 */
NaviLifeGauge::~NaviLifeGauge(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803071D0
lis      r3, __vt__Q32og6Screen13NaviLifeGauge@ha
addi     r0, r3, __vt__Q32og6Screen13NaviLifeGauge@l
stw      r0, 0(r30)
beq      lbl_803071C0
lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
stw      r0, 0(r30)
beq      lbl_803071C0
lis      r3, __vt__Q29P2DScreen3Mgr@ha
addic.   r0, r30, 0x118
addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
stw      r0, 0(r30)
beq      lbl_803071B4
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x118
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x118(r30)
bl       __dt__5CNodeFv

lbl_803071B4:
mr       r3, r30
li       r4, 0
bl       __dt__9J2DScreenFv

lbl_803071C0:
extsh.   r0, r31
ble      lbl_803071D0
mr       r3, r30
bl       __dl__FPv

lbl_803071D0:
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
 * Address:	803071EC
 * Size:	000080
 */
CallBack_LifeGauge::~CallBack_LifeGauge(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80307250
lis      r4, __vt__Q32og6Screen18CallBack_LifeGauge@ha
addi     r0, r4, __vt__Q32og6Screen18CallBack_LifeGauge@l
stw      r0, 0(r30)
beq      lbl_80307240
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_80307240
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_80307240:
extsh.   r0, r31
ble      lbl_80307250
mr       r3, r30
bl       __dl__FPv

lbl_80307250:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace Screen

} // namespace og

/*
 * --INFO--
 * Address:	8030726C
 * Size:	000004
 */
void P2DScreen::CallBackNode::update(void) { }

/*
 * --INFO--
 * Address:	80307270
 * Size:	000024
 */
void __sinit_ogLifeGauge_cpp(void)
{
	/*
	lfs      f2, lbl_8051D5C8@sda21(r2)
	lis      r3, msVal__Q32og6Screen18CallBack_LifeGauge@ha
	lfs      f1, lbl_8051D5D0@sda21(r2)
	stfsu    f2, msVal__Q32og6Screen18CallBack_LifeGauge@l(r3)
	lfs      f0, lbl_8051D5E8@sda21(r2)
	stfs     f1, 4(r3)
	stfs     f0, 8(r3)
	stfs     f2, 0xc(r3)
	blr
	*/
}
