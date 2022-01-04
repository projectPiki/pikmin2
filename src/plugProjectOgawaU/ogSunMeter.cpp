#include "og/Screen/callbackNodes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen8SunMeter
    __vt__Q32og6Screen8SunMeter:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen8SunMeterFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__Q29P2DScreen3MgrFv
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
    .global __vt__Q32og6Screen17CallBack_SunMeter
    __vt__Q32og6Screen17CallBack_SunMeter:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen17CallBack_SunMeterFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen17CallBack_SunMeterFv
        .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D5F0
    lbl_8051D5F0:
        .4byte 0x00000000
    .global lbl_8051D5F4
    lbl_8051D5F4:
        .4byte 0x3E981062
    .global lbl_8051D5F8
    lbl_8051D5F8:
        .float 0.3
    .global lbl_8051D5FC
    lbl_8051D5FC:
        .4byte 0x3EFE76C9
    .global lbl_8051D600
    lbl_8051D600:
        .float 0.5
    .global lbl_8051D604
    lbl_8051D604:
        .4byte 0x3F326E98
    .global lbl_8051D608
    lbl_8051D608:
        .float 0.7
    .global lbl_8051D60C
    lbl_8051D60C:
        .float 1.0
    .global lbl_8051D610
    lbl_8051D610:
        .4byte 0x40000000
    .global lbl_8051D614
    lbl_8051D614:
        .4byte 0x40490FDB
    .global lbl_8051D618
    lbl_8051D618:
        .4byte 0x3BB60B61
    .global lbl_8051D61C
    lbl_8051D61C:
        .4byte 0x433F0000
    .global lbl_8051D620
    lbl_8051D620:
        .4byte 0x42800000
    .global lbl_8051D624
    lbl_8051D624:
        .4byte 0x41F00000
*/

namespace og {

namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
CallBack_SunMeter::CallBack_SunMeter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void CallBack_SunMeter::init(J2DScreen*, float*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80307294
 * Size:	00023C
 */
void CallBack_SunMeter::update(void)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stfd     f31, 0x40(r1)
psq_st   f31, 72(r1), 0, qr0
stfd     f30, 0x30(r1)
psq_st   f30, 56(r1), 0, qr0
stfd     f29, 0x20(r1)
psq_st   f29, 40(r1), 0, qr0
stw      r31, 0x1c(r1)
mr       r31, r3
lfs      f0, lbl_8051D5F4@sda21(r2)
lwz      r3, 0x20(r3)
lfs      f31, 0(r3)
fcmpo    cr0, f0, f31
bge      lbl_80307304
lfs      f0, lbl_8051D5F8@sda21(r2)
fcmpo    cr0, f31, f0
bge      lbl_80307304
lbz      r0, 0x39(r31)
cmplwi   r0, 0
bne      lbl_80307304
li       r0, 1
stb      r0, 0x39(r31)
lwz      r3, ogSound__2og@sda21(r13)
bl       setChime__Q22og5SoundFv
mr       r3, r31
bl       startEffectChime__Q32og6Screen17CallBack_SunMeterFv

lbl_80307304:
lfs      f0, lbl_8051D5FC@sda21(r2)
fcmpo    cr0, f0, f31
bge      lbl_80307340
lfs      f0, lbl_8051D600@sda21(r2)
fcmpo    cr0, f31, f0
bge      lbl_80307340
lbz      r0, 0x38(r31)
cmplwi   r0, 0
bne      lbl_80307340
li       r0, 1
stb      r0, 0x38(r31)
lwz      r3, ogSound__2og@sda21(r13)
bl       setChimeNoon__Q22og5SoundFv
mr       r3, r31
bl       startEffectChime__Q32og6Screen17CallBack_SunMeterFv

lbl_80307340:
lfs      f0, lbl_8051D604@sda21(r2)
fcmpo    cr0, f0, f31
bge      lbl_8030737C
lfs      f0, lbl_8051D608@sda21(r2)
fcmpo    cr0, f31, f0
bge      lbl_8030737C
lbz      r0, 0x3a(r31)
cmplwi   r0, 0
bne      lbl_8030737C
li       r0, 1
stb      r0, 0x3a(r31)
lwz      r3, ogSound__2og@sda21(r13)
bl       setChime__Q22og5SoundFv
mr       r3, r31
bl       startEffectChime__Q32og6Screen17CallBack_SunMeterFv

lbl_8030737C:
lfs      f1, 0x1c(r31)
lfs      f0, lbl_8051D60C@sda21(r2)
fadds    f0, f1, f0
stfs     f0, 0x1c(r31)
lwz      r3, 0x24(r31)
bl       getBounds__7J2DPaneFv
lfs      f30, 0(r3)
lwz      r3, 0x28(r31)
bl       getBounds__7J2DPaneFv
lfs      f29, 0(r3)
lwz      r3, 0x2c(r31)
bl       getBounds__7J2DPaneFv
lfs      f2, 4(r3)
fsubs    f0, f29, f30
lwz      r3, 0x2c(r31)
lwz      r12, 0(r3)
fmadds   f1, f31, f0, f30
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x30(r31)
li       r4, 0x7a
lfs      f0, 0x1c(r31)
lfs      f4, 0x28(r3)
lfs      f2, 0x20(r3)
fneg     f3, f0
lfs      f1, 0x2c(r3)
lfs      f0, 0x24(r3)
fsubs    f4, f4, f2
lfs      f2, lbl_8051D600@sda21(r2)
fsubs    f0, f1, f0
fmuls    f1, f4, f2
fmuls    f2, f0, f2
bl       rotate__7J2DPaneFff13J2DRotateAxisf
lfs      f0, 0x1c(r31)
lfs      f1, lbl_8051D618@sda21(r2)
fneg     f0, f0
lfs      f2, lbl_8051D614@sda21(r2)
lfs      f3, lbl_8051D610@sda21(r2)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f1, f3, f0
bl       sin
frsp     f3, f1
lfs      f2, lbl_8051D620@sda21(r2)
lfs      f1, lbl_8051D61C@sda21(r2)
lfs      f0, lbl_8051D5F0@sda21(r2)
fmadds   f1, f2, f3, f1
lwz      r3, 0x30(r31)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_80307458
lfs      f0, lbl_8051D600@sda21(r2)
fadds    f0, f0, f1
b        lbl_80307460

lbl_80307458:
lfs      f0, lbl_8051D600@sda21(r2)
fsubs    f0, f1, f0

lbl_80307460:
fctiwz   f0, f0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
stfd     f0, 8(r1)
lwz      r0, 0xc(r1)
clrlwi   r4, r0, 0x18
mtctr    r12
bctrl
lwz      r3, 0x3c(r31)
bl       calc__Q32og6Screen8ScaleMgrFv
lwz      r3, 0x2c(r31)
stfs     f1, 0xcc(r3)
stfs     f1, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
psq_l    f31, 72(r1), 0, qr0
lfd      f31, 0x40(r1)
psq_l    f30, 56(r1), 0, qr0
lfd      f30, 0x30(r1)
psq_l    f29, 40(r1), 0, qr0
lfd      f29, 0x20(r1)
lwz      r0, 0x54(r1)
lwz      r31, 0x1c(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	803074D0
 * Size:	000034
 */
void CallBack_SunMeter::startEffectChime(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, lbl_8051D5F8@sda21(r2)
stw      r0, 0x14(r1)
lfs      f2, lbl_8051D624@sda21(r2)
lwz      r3, 0x3c(r3)
lfs      f3, lbl_8051D608@sda21(r2)
lfs      f4, lbl_8051D5F0@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80307504
 * Size:	000044
 */
SunMeter::SunMeter(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       __ct__Q29P2DScreen10Mgr_tuningFv
lis      r3, __vt__Q32og6Screen8SunMeter@ha
lfs      f0, lbl_8051D5F0@sda21(r2)
addi     r0, r3, __vt__Q32og6Screen8SunMeter@l
mr       r3, r31
stw      r0, 0(r31)
stfs     f0, 0x14c(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80307548
 * Size:	0001B4
 */
void SunMeter::setCallBack(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
stw      r30, 8(r1)
bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
li       r3, 0x40
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_803075EC
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r3, __vt__Q32og6Screen17CallBack_SunMeter@ha
stw      r0, 0(r30)
li       r5, 0
addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
addi     r0, r3, __vt__Q32og6Screen17CallBack_SunMeter@l
stw      r5, 0x18(r30)
li       r3, 0x1c
lfs      f0, lbl_8051D5F0@sda21(r2)
stw      r4, 0(r30)
stw      r0, 0(r30)
stfs     f0, 0x1c(r30)
stw      r5, 0x20(r30)
stw      r5, 0x24(r30)
stw      r5, 0x28(r30)
stw      r5, 0x2c(r30)
stw      r5, 0x30(r30)
stw      r5, 0x34(r30)
stb      r5, 0x38(r30)
stb      r5, 0x39(r30)
stb      r5, 0x3a(r30)
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803075E8
bl       __ct__Q32og6Screen8ScaleMgrFv
mr       r0, r3

lbl_803075E8:
stw      r0, 0x3c(r30)

lbl_803075EC:
stw      r30, 0x148(r31)
lis      r4, 0x73746174@ha
addi     r0, r31, 0x14c
mr       r3, r31
lwz      r30, 0x148(r31)
addi     r6, r4, 0x73746174@l
li       r5, 0
stw      r0, 0x20(r30)
lwz      r12, 0(r31)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x24(r30)
mr       r3, r31
lis      r4, 0x676F616C@ha
li       r5, 0
lwz      r12, 0(r31)
addi     r6, r4, 0x676F616C@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x28(r30)
mr       r3, r31
lis      r4, 0x73756E69@ha
li       r5, 0
lwz      r12, 0(r31)
addi     r6, r4, 0x73756E69@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x2c(r30)
mr       r3, r31
lis      r4, 0x73756E31@ha
li       r5, 0
lwz      r12, 0(r31)
addi     r6, r4, 0x73756E31@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x30(r30)
mr       r3, r31
lis      r4, 0x73756E32@ha
li       r5, 0
lwz      r12, 0(r31)
addi     r6, r4, 0x73756E32@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x34(r30)
li       r0, 0
li       r4, 4
stb      r0, 0x38(r30)
stb      r0, 0x39(r30)
stb      r0, 0x3a(r30)
lwz      r3, 0x2c(r30)
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lis      r4, 0x73756E69@ha
lwz      r7, 0x148(r31)
mr       r3, r31
li       r5, 0
addi     r6, r4, 0x73756E69@l
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
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
 * Address:	803076FC
 * Size:	0000A4
 */
SunMeter::~SunMeter(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80307784
lis      r3, __vt__Q32og6Screen8SunMeter@ha
addi     r0, r3, __vt__Q32og6Screen8SunMeter@l
stw      r0, 0(r30)
beq      lbl_80307774
lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
stw      r0, 0(r30)
beq      lbl_80307774
lis      r3, __vt__Q29P2DScreen3Mgr@ha
addic.   r0, r30, 0x118
addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
stw      r0, 0(r30)
beq      lbl_80307768
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x118
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x118(r30)
bl       __dt__5CNodeFv

lbl_80307768:
mr       r3, r30
li       r4, 0
bl       __dt__9J2DScreenFv

lbl_80307774:
extsh.   r0, r31
ble      lbl_80307784
mr       r3, r30
bl       __dl__FPv

lbl_80307784:
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
 * Address:	803077A0
 * Size:	000080
 */
CallBack_SunMeter::~CallBack_SunMeter(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80307804
lis      r4, __vt__Q32og6Screen17CallBack_SunMeter@ha
addi     r0, r4, __vt__Q32og6Screen17CallBack_SunMeter@l
stw      r0, 0(r30)
beq      lbl_803077F4
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803077F4
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803077F4:
extsh.   r0, r31
ble      lbl_80307804
mr       r3, r30
bl       __dl__FPv

lbl_80307804:
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
