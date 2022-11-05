#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogObjGround_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048E110
    lbl_8048E110:
        .skip 0xC
        .asciz "ogObjGround.cpp"
        .4byte 0x45525221
        .4byte 0x20696E20
        .4byte 0x4F626A43
        .4byte 0x61766520
        .4byte 0x43726561
        .4byte 0x74658EB8
        .4byte 0x94738149
        .4byte 0x0A000000
        .asciz "sun_meter.blo"
        .skip 2
        .asciz "doping.blo"
        .skip 1
        .asciz "orima.blo"
        .skip 2
        .asciz "gr_pikmin.blo"
        .skip 2
        .asciz "sensor.blo"
        .skip 1
        .asciz "screenObj.h"
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D82D8
    lbl_804D82D8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q32og9newScreen9ObjGround
    __vt__Q32og9newScreen9ObjGround:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen9ObjGroundFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen9ObjGroundFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte doStart__Q32og9newScreen9ObjGroundFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q32og9newScreen9ObjGroundFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32og9newScreen9ObjGroundFP10JKRArchive
        .4byte doUpdateFadein__Q32og9newScreen9ObjGroundFv
        .4byte doUpdateFadeinFinish__Q32og9newScreen9ObjGroundFv
        .4byte doUpdate__Q32og9newScreen9ObjGroundFv
        .4byte doUpdateFinish__Q32og9newScreen9ObjGroundFv
        .4byte doUpdateFadeout__Q32og9newScreen9ObjGroundFv
        .4byte doUpdateFadeoutFinish__Q32og9newScreen9ObjGroundFv
        .4byte doDraw__Q32og9newScreen9ObjGroundFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32og9newScreen9ObjGround
    msVal__Q32og9newScreen9ObjGround:
        .skip 0x28

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515E38
    lbl_80515E38:
        .skip 0x4
    .global lbl_80515E3C
    lbl_80515E3C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D6F0
    lbl_8051D6F0:
        .4byte 0x00000000
    .global lbl_8051D6F4
    lbl_8051D6F4:
        .float 1.0
    .global lbl_8051D6F8
    lbl_8051D6F8:
        .4byte 0x3F666666
    .global lbl_8051D6FC
    lbl_8051D6FC:
        .4byte 0x3F4CCCCD
    .global lbl_8051D700
    lbl_8051D700:
        .4byte 0x44610000
    .global lbl_8051D704
    lbl_8051D704:
        .float 0.5
    .global lbl_8051D708
    lbl_8051D708:
        .4byte 0x40490FDB
    .global lbl_8051D70C
    lbl_8051D70C:
        .4byte 0x3ECCCCCD
    .global lbl_8051D710
    lbl_8051D710:
        .4byte 0x43A2F983
        .4byte 0x00000000
    .global lbl_8051D718
    lbl_8051D718:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051D720
    lbl_8051D720:
        .float 0.3
    .global lbl_8051D724
    lbl_8051D724:
        .float 0.1
    .global lbl_8051D728
    lbl_8051D728:
        .4byte 0xC2480000
    .global lbl_8051D72C
    lbl_8051D72C:
        .4byte 0x41200000
    .global lbl_8051D730
    lbl_8051D730:
        .4byte 0xC2200000
    .global lbl_8051D734
    lbl_8051D734:
        .4byte 0xC1F00000
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8030DEB8
 * Size:	000094
 */
ObjGround::ObjGround(char const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q26Screen7ObjBaseFv
	lis      r3, __vt__Q32og9newScreen9ObjGround@ha
	lfs      f0, lbl_8051D6F0@sda21(r2)
	addi     r3, r3, __vt__Q32og9newScreen9ObjGround@l
	li       r0, 0
	stw      r3, 0(r30)
	addi     r4, r3, 0x10
	mr       r3, r30
	stw      r4, 0x18(r30)
	stfs     f0, 0x5c(r30)
	stfs     f0, 0x60(r30)
	stw      r31, 0x14(r30)
	stw      r0, 0x38(r30)
	stw      r0, 0x3c(r30)
	stw      r0, 0x40(r30)
	stw      r0, 0x44(r30)
	stw      r0, 0x48(r30)
	stw      r0, 0x4c(r30)
	stw      r0, 0x50(r30)
	stw      r0, 0x54(r30)
	stw      r0, 0x58(r30)
	stb      r0, 0x64(r30)
	stw      r0, 0x68(r30)
	stfs     f0, 0x6c(r30)
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
 * Address:	8030DF4C
 * Size:	0000AC
 */
ObjGround::~ObjGround(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8030DFDC
	lis      r4, __vt__Q32og9newScreen9ObjGround@ha
	addi     r4, r4, __vt__Q32og9newScreen9ObjGround@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_8030DFCC
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_8030DFCC
	lis      r4, __vt__Q26Screen8IObjBase@ha
	addi     r4, r4, __vt__Q26Screen8IObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	bl       del__5CNodeFv
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_8030DFCC:
	extsh.   r0, r31
	ble      lbl_8030DFDC
	mr       r3, r30
	bl       __dl__FPv

lbl_8030DFDC:
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
 * Address:	8030DFF8
 * Size:	000464
 */
void ObjGround::doCreate(JKRArchive*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8048E110@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8048E110@l
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4F554E44@ha
	li       r5, 0x4752
	mr       r28, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4F554E44@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8030E054
	stw      r28, 0x38(r29)
	b        lbl_8030E19C

lbl_8030E054:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x554D4D59@ha
	mr       r3, r28
	li       r5, 0x44
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x554D4D59@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8030E188
	li       r3, 0x88
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8030E180
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r6, __vt__Q32og6Screen16DispMemberGround@ha
	addi     r12, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r5, __vt__Q32og6Screen21DispMemberDayEndCount@ha
	stw      r12, 0(r3)
	li       r11, 0
	lis      r4, __vt__Q32og6Screen17DispMemberHurryUp@ha
	addi     r0, r6, __vt__Q32og6Screen16DispMemberGround@l
	stw      r11, 4(r3)
	li       r10, 0x4d2
	lfs      f0, lbl_8051D6F0@sda21(r2)
	li       r9, 0x32
	stw      r0, 0(r3)
	li       r8, 1
	lfs      f3, lbl_8051D6F4@sda21(r2)
	li       r7, 2
	stfs     f0, 8(r3)
	li       r6, 0xa
	addi     r5, r5, __vt__Q32og6Screen21DispMemberDayEndCount@l
	lfs      f2, lbl_8051D6F8@sda21(r2)
	stw      r11, 0xc(r3)
	addi     r0, r4, __vt__Q32og6Screen17DispMemberHurryUp@l
	lfs      f1, lbl_8051D6FC@sda21(r2)
	stw      r11, 0x14(r3)
	lfs      f0, lbl_8051D700@sda21(r2)
	stw      r10, 0x10(r3)
	stw      r9, 0x18(r3)
	stb      r11, 0x1c(r3)
	stw      r11, 0x20(r3)
	stfs     f3, 0x24(r3)
	stw      r8, 0x28(r3)
	stw      r7, 0x2c(r3)
	stw      r6, 0x30(r3)
	stw      r6, 0x34(r3)
	stb      r8, 0x38(r3)
	stfs     f3, 0x3c(r3)
	stw      r8, 0x40(r3)
	stw      r7, 0x44(r3)
	stw      r6, 0x48(r3)
	stw      r6, 0x4c(r3)
	stb      r8, 0x50(r3)
	stw      r12, 0x68(r3)
	stw      r11, 0x6c(r3)
	stw      r5, 0x68(r3)
	stfs     f2, 0x74(r3)
	stfs     f2, 0x70(r3)
	stw      r12, 0x78(r3)
	stw      r11, 0x7c(r3)
	stw      r0, 0x78(r3)
	stfs     f1, 0x84(r3)
	stfs     f1, 0x80(r3)
	stb      r11, 0x5e(r3)
	stfs     f0, 0x54(r3)
	stb      r11, 0x5c(r3)
	stb      r8, 0x5d(r3)
	stw      r8, 0x58(r3)
	stb      r11, 0x5f(r3)
	stb      r11, 0x60(r3)
	stb      r11, 0x61(r3)
	stb      r11, 0x62(r3)
	stb      r11, 0x63(r3)
	stb      r11, 0x64(r3)

lbl_8030E180:
	stw      r3, 0x38(r29)
	b        lbl_8030E19C

lbl_8030E188:
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0xba
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030E19C:
	li       r3, 0x150
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8030E1B4
	bl       __ct__Q32og6Screen8SunMeterFv
	mr       r0, r3

lbl_8030E1B4:
	stw      r0, 0x44(r29)
	li       r3, 0x198
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8030E1D0
	bl       __ct__Q32og6Screen12DopingScreenFv
	mr       r0, r3

lbl_8030E1D0:
	stw      r0, 0x48(r29)
	li       r3, 0x158
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8030E204
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	lis      r3, __vt__Q32og6Screen13NaviLifeGauge@ha
	li       r0, 0
	addi     r3, r3, __vt__Q32og6Screen13NaviLifeGauge@l
	stw      r3, 0(r28)
	stw      r0, 0x148(r28)
	stw      r0, 0x14c(r28)
	stw      r0, 0x150(r28)

lbl_8030E204:
	stw      r28, 0x4c(r29)
	li       r3, 0x158
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8030E238
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	lis      r3, __vt__Q32og6Screen13NaviLifeGauge@ha
	li       r0, 0
	addi     r3, r3, __vt__Q32og6Screen13NaviLifeGauge@l
	stw      r3, 0(r28)
	stw      r0, 0x148(r28)
	stw      r0, 0x14c(r28)
	stw      r0, 0x150(r28)

lbl_8030E238:
	stw      r28, 0x50(r29)
	li       r3, 0x1a8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8030E254
	bl       __ct__Q32og6Screen13PikminCounterFv
	mr       r0, r3

lbl_8030E254:
	stw      r0, 0x54(r29)
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8030E270
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8030E270:
	stw      r0, 0x58(r29)
	li       r3, 0xc
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8030E290
	li       r4, 6
	bl       __ct__Q32og6Screen8BloGroupFUs
	mr       r0, r3

lbl_8030E290:
	stw      r0, 0x40(r29)
	mr       r7, r30
	addi     r4, r31, 0x3c
	lis      r6, 0x104
	lwz      r3, 0x40(r29)
	lwz      r5, 0x44(r29)
	bl
addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive lwz
r3, 0x40(r29) mr       r7, r30 lwz      r5, 0x48(r29) addi     r4, r31, 0x4c
	lis      r6, 0x104
	bl
addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive lwz
r3, 0x40(r29) mr       r7, r30 lwz      r5, 0x4c(r29) addi     r4, r31, 0x58
	lis      r6, 0x104
	bl
addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive lwz
r3, 0x40(r29) mr       r7, r30 lwz      r5, 0x50(r29) addi     r4, r31, 0x58
	lis      r6, 0x104
	bl
addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive lwz
r3, 0x40(r29) mr       r7, r30 lwz      r5, 0x54(r29) addi     r4, r31, 0x64
	lis      r6, 0x104
	bl
addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive lwz
r3, 0x40(r29) mr       r7, r30 lwz      r5, 0x58(r29) addi     r4, r31, 0x74
	lis      r6, 0x104
	bl
addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive lwz
r3, 0x44(r29) bl       setCallBack__Q32og6Screen8SunMeterFv lwz      r3,
0x48(r29) mr       r4, r30 bl
setCallBack__Q32og6Screen12DopingScreenFP10JKRArchive lwz      r4, 0x38(r29)
	li       r5, 0
	lwz      r3, 0x4c(r29)
	addi     r4, r4, 0x24
	bl
setCallBack__Q32og6Screen13NaviLifeGaugeFPQ32og6Screen8DataNaviQ42og6Screen18CallBack_LifeGauge13LifeGaugeType
	lwz      r4, 0x38(r29)
	lbz      r0, 0x5e(r4)
	cmplwi   r0, 0
	beq      lbl_8030E370
	lwz      r3, 0x50(r29)
	addi     r4, r4, 0x3c
	li       r5, 2
	bl
setCallBack__Q32og6Screen13NaviLifeGaugeFPQ32og6Screen8DataNaviQ42og6Screen18CallBack_LifeGauge13LifeGaugeType
	b        lbl_8030E380

lbl_8030E370:
	lwz      r3, 0x50(r29)
	addi     r4, r4, 0x3c
	li       r5, 1
	bl
setCallBack__Q32og6Screen13NaviLifeGaugeFPQ32og6Screen8DataNaviQ42og6Screen18CallBack_LifeGauge13LifeGaugeType

lbl_8030E380:
	lwz      r3, 0x54(r29)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x38(r29)
	li       r3, 0x94
	lfs      f0, lbl_8051D6F0@sda21(r2)
	lwz      r0, 0x20(r4)
	stw      r0, 0x68(r29)
	stfs     f0, 0x6c(r29)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8030E3C4
	bl       __ct__Q32og6Screen13OtakaraSensorFv
	mr       r0, r3

lbl_8030E3C4:
	stw      r0, 0x3c(r29)
	lis      r5, 0x6E736F72@ha
	lis      r4, 0x004E7365@ha
	lwz      r3, 0x58(r29)
	addi     r6, r5, 0x6E736F72@l
	addi     r5, r4, 0x004E7365@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	lwz      r3, 0x58(r29)
	lis      r4, 0x68617269@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x68617269@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x38(r29)
	mr       r4, r3
	lwz      r3, 0x3c(r29)
	lwz      r6, 0x58(r5)
	mr       r5, r30
	bl       init__Q32og6Screen13OtakaraSensorFP7J2DPaneP7J2DPanei
	lwz      r5, 0x38(r29)
	lwz      r3, 0x48(r29)
	lbz      r4, 0x5f(r5)
	lbz      r5, 0x60(r5)
	bl       setDopingEnable__Q32og6Screen12DopingScreenFbb
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
 * Address:	8030E45C
 * Size:	00029C
 */
void ObjGround::commonUpdate(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	bl       checkMovieActive__Q22og9newScreenFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8030E510
	lwz      r4, 0x38(r31)
	lwz      r3, 0x44(r31)
	lfs      f0, 8(r4)
	stfs     f0, 0x14c(r3)
	lwz      r4, 0x38(r31)
	lbz      r0, 0x38(r4)
	cmplwi   r0, 0
	beq      lbl_8030E4C4
	lwz      r3, 0x48(r31)
	addi     r4, r4, 0x24
	bl       setParam__Q32og6Screen12DopingScreenFRQ32og6Screen8DataNavi
	lwz      r5, 0x38(r31)
	lwz      r3, 0x54(r31)
	addi     r4, r5, 8
	addi     r5, r5, 0x24
	bl
setParam__Q32og6Screen13PikminCounterFRQ32og6Screen8DataGameRQ32og6Screen8DataNavi
	b        lbl_8030E4E4

lbl_8030E4C4:
	lwz      r3, 0x48(r31)
	addi     r4, r4, 0x3c
	bl       setParam__Q32og6Screen12DopingScreenFRQ32og6Screen8DataNavi
	lwz      r5, 0x38(r31)
	lwz      r3, 0x54(r31)
	addi     r4, r5, 8
	addi     r5, r5, 0x3c
	bl
setParam__Q32og6Screen13PikminCounterFRQ32og6Screen8DataGameRQ32og6Screen8DataNavi

lbl_8030E4E4:
	lwz      r3, 0x38(r31)
	lbz      r0, 0x5e(r3)
	cmplwi   r0, 0
	beq      lbl_8030E504
	lwz      r3, 0x50(r31)
	li       r4, 2
	bl
setType__Q32og6Screen13NaviLifeGaugeFQ42og6Screen18CallBack_LifeGauge13LifeGaugeType
	b        lbl_8030E510

lbl_8030E504:
	lwz      r3, 0x50(r31)
	li       r4, 1
	bl
setType__Q32og6Screen13NaviLifeGaugeFQ42og6Screen18CallBack_LifeGauge13LifeGaugeType

lbl_8030E510:
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 4(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 6(r3)
	lis      r0, 0x4330
	stw      r30, 0xc(r1)
	li       r4, 0x7a
	lfd      f4, lbl_8051D718@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051D704@sda21(r2)
	lfd      f0, 8(r1)
	stw      r3, 0x14(r1)
	fsubs    f1, f0, f4
	lwz      r3, 0x40(r31)
	stw      r0, 0x10(r1)
	lfs      f3, lbl_8051D6F0@sda21(r2)
	lfd      f0, 0x10(r1)
	fmuls    f1, f1, f2
	fsubs    f0, f0, f4
	fmuls    f2, f0, f2
	bl       rotate__Q32og6Screen8BloGroupFff13J2DRotateAxisf
	lfs      f1, lbl_8051D6F4@sda21(r2)
	lfs      f0, 0x60(r31)
	lfs      f3, lbl_8051D708@sda21(r2)
	fadds    f2, f1, f0
	lfs      f1, lbl_8051D704@sda21(r2)
	lfs      f0, lbl_8051D6F0@sda21(r2)
	fmuls    f2, f3, f2
	fmuls    f2, f2, f1
	fcmpo    cr0, f2, f0
	bge      lbl_8030E590
	fneg     f2, f2

lbl_8030E590:
	lfs      f0, lbl_8051D710@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r4, r3, sincosTable___5JMath@l
	lfs      f1, lbl_8051D6F4@sda21(r2)
	fmuls    f0, f2, f0
	lfs      f2, lbl_8051D70C@sda21(r2)
	lwz      r3, 0x40(r31)
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r4, r0
	lfs      f0, 4(r4)
	fneg     f0, f0
	fsubs    f0, f1, f0
	fmadds   f1, f2, f0, f1
	bl       scale__Q32og6Screen8BloGroupFf
	lwz      r3, 0x40(r31)
	bl       update__Q32og6Screen8BloGroupFv
	lwz      r6, 0x38(r31)
	lwz      r3, 0x3c(r31)
	lfs      f1, 0x54(r6)
	lwz      r4, 0x58(r6)
	lbz      r5, 0x63(r6)
	lbz      r6, 0x64(r6)
	bl       setParam__Q32og6Screen13OtakaraSensorFfibb
	lwz      r3, 0x3c(r31)
	bl       updateInit__Q32og6Screen13OtakaraSensorFv
	lwz      r3, 0x38(r31)
	lbz      r0, 0x5c(r3)
	cmplwi   r0, 0
	beq      lbl_8030E680
	lwz      r3, 0x3c(r31)
	bl       show__Q32og6Screen13OtakaraSensorFv
	lwz      r3, 0x3c(r31)
	bl       update__Q32og6Screen13OtakaraSensorFv
	lis      r4, msVal__Q32og9newScreen9ObjGround@ha
	lwz      r3, 0x3c(r31)
	addi     r4, r4, msVal__Q32og9newScreen9ObjGround@l
	lfs      f1, 0x10(r4)
	lfs      f2, 0x14(r4)
	bl       adjPos__Q32og6Screen13OtakaraSensorFff
	lis      r4, msVal__Q32og9newScreen9ObjGround@ha
	lwz      r3, 0x3c(r31)
	addi     r4, r4, msVal__Q32og9newScreen9ObjGround@l
	lfs      f1, 0x18(r4)
	bl       adjScale__Q32og6Screen13OtakaraSensorFf
	lis      r3, msVal__Q32og9newScreen7ObjCave@ha
	lwz      r4, 0x3c(r31)
	addi     r3, r3, msVal__Q32og9newScreen7ObjCave@l
	lfs      f1, 0x38(r3)
	lfs      f0, 0x34(r3)
	stfs     f0, 0x5c(r4)
	stfs     f1, 0x60(r4)
	lfs      f1, 0x40(r3)
	lwz      r4, 0x3c(r31)
	lfs      f0, 0x3c(r3)
	stfs     f0, 0x64(r4)
	stfs     f1, 0x68(r4)
	b        lbl_8030E688

lbl_8030E680:
	lwz      r3, 0x3c(r31)
	bl       hide__Q32og6Screen13OtakaraSensorFv

lbl_8030E688:
	lwz      r3, 0x38(r31)
	lbz      r0, 0x61(r3)
	cmplwi   r0, 0
	beq      lbl_8030E6A8
	lwz      r3, 0x48(r31)
	bl       openDopingUp__Q32og6Screen12DopingScreenFv
	lwz      r3, 0x48(r31)
	bl       openDopingKey__Q32og6Screen12DopingScreenFv

lbl_8030E6A8:
	lwz      r3, 0x38(r31)
	lbz      r0, 0x62(r3)
	cmplwi   r0, 0
	beq      lbl_8030E6C8
	lwz      r3, 0x48(r31)
	bl       openDopingDown__Q32og6Screen12DopingScreenFv
	lwz      r3, 0x48(r31)
	bl       openDopingKey__Q32og6Screen12DopingScreenFv

lbl_8030E6C8:
	lis      r4, msVal__Q32og9newScreen9ObjGround@ha
	lwz      r3, 0x48(r31)
	addi     r4, r4, msVal__Q32og9newScreen9ObjGround@l
	lfs      f1, 0x1c(r4)
	lfs      f2, 0x20(r4)
	bl       adjPos__Q32og6Screen12DopingScreenFff
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
 * Address:	8030E6F8
 * Size:	000024
 */
void ObjGround::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       commonUpdate__Q32og9newScreen9ObjGroundFv
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030E71C
 * Size:	000090
 */
void ObjGround::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x38(r3)
	lbz      r0, 0x5d(r3)
	cmplwi   r0, 0
	beq      lbl_8030E758
	lwz      r3, 0x44(r30)
	li       r0, 1
	stb      r0, 0xb0(r3)
	b        lbl_8030E764

lbl_8030E758:
	lwz      r3, 0x44(r30)
	li       r0, 0
	stb      r0, 0xb0(r3)

lbl_8030E764:
	lwz      r3, 0x40(r30)
	cmplwi   r3, 0
	beq      lbl_8030E778
	addi     r4, r31, 0x190
	bl       draw__Q32og6Screen8BloGroupFP13J2DPerspGraph

lbl_8030E778:
	lwz      r3, 0x38(r30)
	lbz      r0, 0x5c(r3)
	cmplwi   r0, 0
	beq      lbl_8030E794
	lwz      r3, 0x3c(r30)
	addi     r4, r31, 0x190
	bl       draw__Q32og6Screen13OtakaraSensorFR14J2DGrafContext

lbl_8030E794:
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
 * Address:	8030E7AC
 * Size:	000014
 */
void ObjGround::doStart(Screen::StartSceneArg const*)
{
	/*
	lfs      f0, lbl_8051D6F0@sda21(r2)
	stfs     f0, 0x5c(r3)
	stfs     f0, 0x60(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030E7C0
 * Size:	000010
 */
void ObjGround::doEnd(Screen::EndSceneArg const*)
{
	/*
	lfs      f0, lbl_8051D6F0@sda21(r2)
	stfs     f0, 0x5c(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030E7D0
 * Size:	000074
 */
void ObjGround::doUpdateFadein(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, msVal__Q32og9newScreen9ObjGround@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x5c(r3)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x5c(r3)
	lfs      f0, 0x5c(r3)
	lfs      f1, msVal__Q32og9newScreen9ObjGround@l(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_8030E814
	stfs     f1, 0x5c(r3)
	li       r31, 1

lbl_8030E814:
	lis      r4, msVal__Q32og9newScreen9ObjGround@ha
	lfs      f1, 0x5c(r3)
	lfs      f0, msVal__Q32og9newScreen9ObjGround@l(r4)
	fdivs    f0, f1, f0
	stfs     f0, 0x60(r3)
	bl       commonUpdate__Q32og9newScreen9ObjGroundFv
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
 * Address:	8030E844
 * Size:	000004
 */
void ObjGround::doUpdateFadeinFinish(void) { }

/*
 * --INFO--
 * Address:	8030E848
 * Size:	00000C
 */
void ObjGround::doUpdateFinish(void)
{
	/*
	lfs      f0, lbl_8051D6F0@sda21(r2)
	stfs     f0, 0x5c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030E854
 * Size:	00007C
 */
void ObjGround::doUpdateFadeout(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, msVal__Q32og9newScreen9ObjGround@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, msVal__Q32og9newScreen9ObjGround@l
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x5c(r3)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x5c(r3)
	lfs      f0, 0x5c(r3)
	lfs      f1, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_8030E89C
	stfs     f1, 0x5c(r3)
	li       r31, 1

lbl_8030E89C:
	lfs      f1, 0x5c(r3)
	lfs      f0, 4(r4)
	lfs      f2, lbl_8051D6F4@sda21(r2)
	fdivs    f0, f1, f0
	fsubs    f0, f2, f0
	stfs     f0, 0x60(r3)
	bl       commonUpdate__Q32og9newScreen9ObjGroundFv
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
 * Address:	8030E8D0
 * Size:	000004
 */
void ObjGround::doUpdateFadeoutFinish(void) { }

} // namespace newScreen
} // namespace og

/*
 * --INFO--
 * Address:	8030E8D4
 * Size:	00007C
 */
void __sinit_ogObjGround_cpp(void)
{
	/*
	lis      r3, __float_nan@ha
	lfs      f7, lbl_8051D720@sda21(r2)
	addi     r5, r3, __float_nan@l
	lis      r4, lbl_804D82D8@ha
	lfs      f8, 0(r5)
	lis      r3, msVal__Q32og9newScreen9ObjGround@ha
	li       r5, -1
	lfs      f4, lbl_8051D6F0@sda21(r2)
	stfsu    f8, lbl_804D82D8@l(r4)
	li       r0, 0
	lfs      f6, lbl_8051D724@sda21(r2)
	stfsu    f7, msVal__Q32og9newScreen9ObjGround@l(r3)
	lfs      f5, lbl_8051D728@sda21(r2)
	lfs      f3, lbl_8051D72C@sda21(r2)
	lfs      f2, lbl_8051D730@sda21(r2)
	lfs      f1, lbl_8051D6F8@sda21(r2)
	lfs      f0, lbl_8051D734@sda21(r2)
	stw      r5, lbl_80515E38@sda21(r13)
	stfs     f8, lbl_80515E3C@sda21(r13)
	stfs     f8, 4(r4)
	stfs     f8, 8(r4)
	stfs     f6, 4(r3)
	stfs     f5, 8(r3)
	stfs     f4, 0xc(r3)
	stfs     f3, 0x10(r3)
	stfs     f2, 0x14(r3)
	stfs     f1, 0x18(r3)
	stb      r0, 0x24(r3)
	stfs     f4, 0x1c(r3)
	stfs     f0, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030E950
 * Size:	000008
 */
@24 @og::newScreen::ObjGround::~ObjGround(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q32og9newScreen9ObjGroundFv
	*/
}
