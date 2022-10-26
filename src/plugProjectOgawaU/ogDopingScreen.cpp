#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q25efx2d11T2DSprayset
    __vt__Q25efx2d11T2DSprayset:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple2FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple2Fv
        .4byte fade__Q25efx2d8TSimple2Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q25efx2d12T2DExtractUp
    __vt__Q25efx2d12T2DExtractUp:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple1FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple1Fv
        .4byte fade__Q25efx2d8TSimple1Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q32og6Screen12DopingScreen
    __vt__Q32og6Screen12DopingScreen:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen12DopingScreenFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__Q32og6Screen12DopingScreenFv
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

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D560
    lbl_8051D560:
        .4byte 0x00000000
    .global lbl_8051D564
    lbl_8051D564:
        .float 1.0
    .global lbl_8051D568
    lbl_8051D568:
        .float 0.1
    .global lbl_8051D56C
    lbl_8051D56C:
        .4byte 0x41A00000
    .global lbl_8051D570
    lbl_8051D570:
        .4byte 0x3E4CCCCD
    .global lbl_8051D574
    lbl_8051D574:
        .4byte 0x41F00000
    .global lbl_8051D578
    lbl_8051D578:
        .4byte 0x3F4CCCCD
        .4byte 0x00000000
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030360C
 * Size:	0000F4
 */
DopingScreen::DopingScreen(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       __ct__Q29P2DScreen10Mgr_tuningFv
lis      r4, __vt__Q32og6Screen12DopingScreen@ha
li       r3, 0x44
addi     r0, r4, __vt__Q32og6Screen12DopingScreen@l
stw      r0, 0(r31)
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_80303648
bl       __ct__Q32og6Screen11DopingCheckFv
mr       r0, r3

lbl_80303648:
stw      r0, 0x148(r31)
li       r0, 0
lfs      f0, lbl_8051D560@sda21(r2)
li       r3, 0x1c
stw      r0, 0x14c(r31)
stw      r0, 0x150(r31)
stw      r0, 0x154(r31)
stw      r0, 0x158(r31)
stfs     f0, 0x16c(r31)
stfs     f0, 0x170(r31)
stfs     f0, 0x164(r31)
stfs     f0, 0x168(r31)
stb      r0, 0x174(r31)
stb      r0, 0x175(r31)
stb      r0, 0x176(r31)
stb      r0, 0x177(r31)
stb      r0, 0x178(r31)
stfs     f0, 0x17c(r31)
stfs     f0, 0x180(r31)
stfs     f0, 0x184(r31)
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803036AC
bl       __ct__Q32og6Screen8ScaleMgrFv
mr       r0, r3

lbl_803036AC:
stw      r0, 0x188(r31)
li       r3, 0x1c
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803036C8
bl       __ct__Q32og6Screen8ScaleMgrFv
mr       r0, r3

lbl_803036C8:
stw      r0, 0x18c(r31)
li       r3, 0x1c
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803036E4
bl       __ct__Q32og6Screen8ScaleMgrFv
mr       r0, r3

lbl_803036E4:
stw      r0, 0x190(r31)
mr       r3, r31
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80303700
 * Size:	0002CC
 */
void DopingScreen::setCallBack(JKRArchive*)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
lis      r6, 0x4E616C6C@ha
li       r5, 0
stw      r0, 0x34(r1)
addi     r6, r6, 0x4E616C6C@l
stw      r31, 0x2c(r1)
mr       r31, r4
stw      r30, 0x28(r1)
mr       r30, r3
stw      r29, 0x24(r1)
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
stw      r3, 0x14c(r30)
lis      r5, 0x6F5F3133@ha
lis      r4, 0x00746F79@ha
mr       r3, r30
addi     r6, r5, 0x6F5F3133@l
addi     r5, r4, 0x00746F79@l
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
mr       r0, r3
lis      r5, 0x6F5F3132@ha
lis      r4, 0x00746F79@ha
mr       r3, r30
mr       r29, r0
addi     r6, r5, 0x6F5F3132@l
addi     r5, r4, 0x00746F79@l
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
mr       r0, r3
lwz      r3, 0x148(r30)
lwz      r6, 0x188(r30)
mr       r5, r0
lwz      r7, 0x18c(r30)
mr       r4, r29
bl
init__Q32og6Screen11DopingCheckFP7J2DPaneP7J2DPanePQ32og6Screen8ScaleMgrPQ32og6Screen8ScaleMgr
lis      r4, 0x6A625F72@ha
mr       r3, r30
addi     r6, r4, 0x6A625F72@l
li       r5, 0
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
stw      r3, 0x15c(r30)
lis      r4, 0x6A625F79@ha
mr       r3, r30
li       r5, 0
addi     r6, r4, 0x6A625F79@l
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
stw      r3, 0x160(r30)
mr       r3, r30
bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
lwz      r3, 0x148(r30)
lis      r4, 0x64725F6C@ha
addi     r8, r4, 0x64725F6C@l
li       r5, 3
addi     r0, r3, 0x14
li       r9, 2
stw      r0, 8(r1)
li       r0, 1
mr       r3, r30
mr       r10, r8
stw      r5, 0xc(r1)
addi     r6, r4, 0x5f72
li       r5, 0
li       r7, 0
stw      r9, 0x10(r1)
li       r9, 0
stw      r0, 0x14(r1)
stw      r31, 0x18(r1)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
lwz      r5, 0x148(r30)
lis      r4, 0x64795F6C@ha
addi     r8, r4, 0x64795F6C@l
mr       r29, r3
addi     r0, r5, 0x18
li       r6, 3
stw      r0, 8(r1)
li       r5, 2
li       r0, 1
mr       r3, r30
stw      r6, 0xc(r1)
mr       r10, r8
addi     r6, r4, 0x5f72
li       r7, 0
stw      r5, 0x10(r1)
li       r5, 0
li       r9, 0
stw      r0, 0x14(r1)
stw      r31, 0x18(r1)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
mr       r0, r3
mr       r3, r29
mr       r29, r0
li       r4, 2
bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode
mr       r3, r29
li       r4, 2
bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode
mr       r3, r30
lis      r4, 0x64725F63@ha
lwz      r12, 0(r30)
addi     r6, r4, 0x64725F63@l
li       r5, 0
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r31, r3
bl       getParentPane__7J2DPaneFv
cmplwi   r3, 0
beq      lbl_803038BC
mr       r3, r31
bl       getParentPane__7J2DPaneFv
mr       r4, r31
bl       removeChild__7J2DPaneFP7J2DPane

lbl_803038BC:
mr       r3, r30
lis      r4, 0x64795F63@ha
lwz      r12, 0(r30)
addi     r6, r4, 0x64795F63@l
li       r5, 0
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r31, r3
bl       getParentPane__7J2DPaneFv
cmplwi   r3, 0
beq      lbl_803038FC
mr       r3, r31
bl       getParentPane__7J2DPaneFv
mr       r4, r31
bl       removeChild__7J2DPaneFP7J2DPane

lbl_803038FC:
mr       r3, r30
lis      r5, 0x72617930@ha
lwz      r12, 0(r30)
lis      r4, 0x004E7370@ha
addi     r6, r5, 0x72617930@l
lwz      r12, 0x3c(r12)
addi     r5, r4, 0x004E7370@l
mtctr    r12
bctrl
stw      r3, 0x150(r30)
mr       r3, r30
lis      r5, 0x72617931@ha
lis      r4, 0x004E7370@ha
lwz      r12, 0(r30)
addi     r6, r5, 0x72617931@l
addi     r5, r4, 0x004E7370@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x154(r30)
mr       r3, r30
lis      r5, 0x696B6579@ha
lis      r4, 0x4E6A756A@ha
lwz      r12, 0(r30)
addi     r6, r5, 0x696B6579@l
addi     r5, r4, 0x4E6A756A@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x158(r30)
li       r4, 4
lwz      r3, 0x150(r30)
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lwz      r3, 0x154(r30)
li       r4, 4
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lwz      r3, 0x158(r30)
li       r4, 4
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lwz      r3, 0x14c(r30)
lfs      f0, 0xd4(r3)
stfs     f0, 0x164(r30)
lwz      r3, 0x14c(r30)
lfs      f0, 0xd8(r3)
stfs     f0, 0x168(r30)
lwz      r31, 0x2c(r1)
lwz      r30, 0x28(r1)
lwz      r29, 0x24(r1)
lwz      r0, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	803039CC
 * Size:	000038
 */
void DopingScreen::setParam(og::Screen::DataNavi&)
{
	/*
lwz      r3, 0x148(r3)
lfs      f0, 0(r4)
stfs     f0, 8(r3)
lwz      r0, 4(r4)
stw      r0, 0xc(r3)
lwz      r0, 8(r4)
stw      r0, 0x10(r3)
lwz      r0, 0xc(r4)
stw      r0, 0x14(r3)
lwz      r0, 0x10(r4)
stw      r0, 0x18(r3)
lbz      r0, 0x14(r4)
stb      r0, 0x1c(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303A04
 * Size:	000284
 */
void DopingScreen::update(void)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stfd     f30, 0x20(r1)
psq_st   f30, 40(r1), 0, qr0
stfd     f29, 0x10(r1)
psq_st   f29, 24(r1), 0, qr0
stw      r31, 0xc(r1)
mr       r31, r3
bl       update__Q29P2DScreen3MgrFv
lwz      r3, 0x158(r31)
li       r4, 0
stb      r4, 0xb0(r3)
lbz      r0, 0x174(r31)
cmplwi   r0, 0
beq      lbl_80303A6C
lwz      r3, 0x150(r31)
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x158(r31)
stb      r0, 0xb0(r3)
lwz      r3, 0x15c(r31)
stb      r0, 0xb0(r3)
b        lbl_80303A7C

lbl_80303A6C:
lwz      r3, 0x150(r31)
stb      r4, 0xb0(r3)
lwz      r3, 0x15c(r31)
stb      r4, 0xb0(r3)

lbl_80303A7C:
lbz      r0, 0x175(r31)
cmplwi   r0, 0
beq      lbl_80303AA8
lwz      r3, 0x154(r31)
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x158(r31)
stb      r0, 0xb0(r3)
lwz      r3, 0x160(r31)
stb      r0, 0xb0(r3)
b        lbl_80303ABC

lbl_80303AA8:
lwz      r3, 0x154(r31)
li       r0, 0
stb      r0, 0xb0(r3)
lwz      r3, 0x160(r31)
stb      r0, 0xb0(r3)

lbl_80303ABC:
lwz      r3, 0x148(r31)
bl       update__Q32og6Screen11DopingCheckFv
lfs      f1, 0x164(r31)
lfs      f0, 0x16c(r31)
lfs      f3, 0x168(r31)
lfs      f2, 0x170(r31)
fadds    f0, f1, f0
lwz      r3, 0x14c(r31)
fadds    f1, f3, f2
stfs     f0, 0xd4(r3)
stfs     f1, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lbz      r0, 0x176(r31)
cmplwi   r0, 0
beq      lbl_80303B48
lfs      f2, 0x17c(r31)
lfs      f1, lbl_8051D564@sda21(r2)
fcmpo    cr0, f2, f1
bge      lbl_80303B48
lfs      f0, lbl_8051D568@sda21(r2)
fadds    f0, f2, f0
stfs     f0, 0x17c(r31)
lfs      f0, 0x17c(r31)
fcmpo    cr0, f0, f1
cror     2, 1, 2
bne      lbl_80303B48
lwz      r3, 0x188(r31)
bl       up__Q32og6Screen8ScaleMgrFv
lwz      r3, 0x148(r31)
bl       startGetEff_Up__Q32og6Screen11DopingCheckFv
lwz      r3, ogSound__2og@sda21(r13)
bl       setGetSpray__Q22og5SoundFv

lbl_80303B48:
lbz      r0, 0x177(r31)
cmplwi   r0, 0
beq      lbl_80303B98
lfs      f2, 0x180(r31)
lfs      f1, lbl_8051D564@sda21(r2)
fcmpo    cr0, f2, f1
bge      lbl_80303B98
lfs      f0, lbl_8051D568@sda21(r2)
fadds    f0, f2, f0
stfs     f0, 0x180(r31)
lfs      f0, 0x180(r31)
fcmpo    cr0, f0, f1
cror     2, 1, 2
bne      lbl_80303B98
lwz      r3, 0x18c(r31)
bl       up__Q32og6Screen8ScaleMgrFv
lwz      r3, 0x148(r31)
bl       startGetEff_Down__Q32og6Screen11DopingCheckFv
lwz      r3, ogSound__2og@sda21(r13)
bl       setGetSpray__Q22og5SoundFv

lbl_80303B98:
lbz      r0, 0x178(r31)
cmplwi   r0, 0
beq      lbl_80303BD8
lfs      f2, 0x184(r31)
lfs      f1, lbl_8051D564@sda21(r2)
fcmpo    cr0, f2, f1
bge      lbl_80303BD8
lfs      f0, lbl_8051D568@sda21(r2)
fadds    f0, f2, f0
stfs     f0, 0x184(r31)
lfs      f0, 0x184(r31)
fcmpo    cr0, f0, f1
cror     2, 1, 2
bne      lbl_80303BD8
lwz      r3, 0x190(r31)
bl       up__Q32og6Screen8ScaleMgrFv

lbl_80303BD8:
lwz      r3, 0x188(r31)
bl       calc__Q32og6Screen8ScaleMgrFv
lfs      f0, 0x17c(r31)
lwz      r3, 0x18c(r31)
fmuls    f31, f0, f1
bl       calc__Q32og6Screen8ScaleMgrFv
lfs      f0, 0x180(r31)
lwz      r3, 0x190(r31)
fmuls    f30, f0, f1
bl       calc__Q32og6Screen8ScaleMgrFv
lfs      f0, 0x184(r31)
lwz      r3, 0x150(r31)
fmuls    f29, f0, f1
stfs     f31, 0xcc(r3)
stfs     f31, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x154(r31)
stfs     f30, 0xcc(r3)
stfs     f30, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x158(r31)
stfs     f29, 0xcc(r3)
stfs     f29, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
psq_l    f31, 56(r1), 0, qr0
lfd      f31, 0x30(r1)
psq_l    f30, 40(r1), 0, qr0
lfd      f30, 0x20(r1)
psq_l    f29, 24(r1), 0, qr0
lfd      f29, 0x10(r1)
lwz      r0, 0x44(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	80303C88
 * Size:	00000C
 */
void DopingScreen::adjPos(float, float)
{
	/*
stfs     f1, 0x16c(r3)
stfs     f2, 0x170(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303C94
 * Size:	000044
 */
void DopingScreen::setDopingEnable(bool, bool)
{
	/*
stb      r4, 0x174(r3)
clrlwi.  r0, r4, 0x18
stb      r5, 0x175(r3)
beq      lbl_80303CAC
lfs      f0, lbl_8051D564@sda21(r2)
stfs     f0, 0x17c(r3)

lbl_80303CAC:
clrlwi.  r0, r5, 0x18
beq      lbl_80303CBC
lfs      f0, lbl_8051D564@sda21(r2)
stfs     f0, 0x180(r3)

lbl_80303CBC:
clrlwi.  r0, r4, 0x18
bne      lbl_80303CCC
clrlwi.  r0, r5, 0x18
beqlr

lbl_80303CCC:
lfs      f0, lbl_8051D564@sda21(r2)
stfs     f0, 0x184(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303CD8
 * Size:	000010
 */
void DopingScreen::openDopingUp(void)
{
	/*
li       r0, 1
stb      r0, 0x176(r3)
stb      r0, 0x174(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303CE8
 * Size:	000010
 */
void DopingScreen::openDopingDown(void)
{
	/*
li       r0, 1
stb      r0, 0x177(r3)
stb      r0, 0x175(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303CF8
 * Size:	00000C
 */
void DopingScreen::openDopingKey(void)
{
	// Generated from stb r0, 0x178(r3)
	_178 = 1;
}

/*
 * --INFO--
 * Address:	80303D04
 * Size:	000100
 */
DopingCheck::DopingCheck(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f0, lbl_8051D564@sda21(r2)
li       r8, 1
stw      r0, 0x14(r1)
li       r7, 2
li       r6, 0xa
li       r5, 0
stw      r31, 0xc(r1)
mr       r31, r3
addi     r4, r31, 0x14
stfs     f0, 8(r3)
addi     r0, r31, 0x18
stw      r8, 0xc(r3)
li       r3, 0x10
stw      r7, 0x10(r31)
stw      r6, 0x14(r31)
stw      r6, 0x18(r31)
stb      r8, 0x1c(r31)
stw      r5, 0(r31)
stw      r5, 4(r31)
stw      r4, 0x20(r31)
stw      r0, 0x24(r31)
lwz      r4, 0x20(r31)
lwz      r0, 0(r4)
stw      r0, 0x28(r31)
lwz      r4, 0x24(r31)
lwz      r0, 0(r4)
stw      r0, 0x2c(r31)
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_80303DCC
lis      r5, __vt__Q25efx2d7TBaseIF@ha
lis      r4, __vt__Q25efx2d5TBase@ha
addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
lis      r5, __vt__Q25efx2d8TSimple1@ha
stw      r0, 0(r3)
addi     r0, r4, __vt__Q25efx2d5TBase@l
lis      r4, __vt__Q25efx2d12T2DExtractUp@ha
li       r7, 0
stw      r0, 0(r3)
addi     r6, r5, __vt__Q25efx2d8TSimple1@l
li       r5, 9
addi     r0, r4, __vt__Q25efx2d12T2DExtractUp@l
stb      r7, 4(r3)
stb      r7, 5(r3)
stw      r6, 0(r3)
sth      r5, 8(r3)
stw      r7, 0xc(r3)
stw      r0, 0(r3)

lbl_80303DCC:
stw      r3, 0x30(r31)
li       r3, 1
li       r0, 0
lfs      f0, lbl_8051D56C@sda21(r2)
stb      r3, 0x40(r31)
mr       r3, r31
stw      r0, 0x34(r31)
stw      r0, 0x38(r31)
stfs     f0, 0x3c(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80303E04
 * Size:	000044
 */
void DopingCheck::init(J2DPane*, J2DPane*, og::Screen::ScaleMgr*, og::Screen::ScaleMgr*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  addi      r8, r3, 0x14
	  addi      r4, r3, 0x18
	  li        r0, 0x1
	  stw       r5, 0x4(r3)
	  stw       r6, 0x34(r3)
	  stw       r7, 0x38(r3)
	  stw       r8, 0x20(r3)
	  stw       r4, 0x24(r3)
	  lwz       r4, 0x20(r3)
	  lwz       r4, 0x0(r4)
	  stw       r4, 0x28(r3)
	  lwz       r4, 0x24(r3)
	  lwz       r4, 0x0(r4)
	  stw       r4, 0x2C(r3)
	  stb       r0, 0x40(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303E48
 * Size:	000100
 */
void DopingCheck::update(void)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r3
lbz      r0, 0x40(r3)
lwz      r4, 0x20(r3)
lwz      r3, 0x24(r3)
cmplwi   r0, 0
lwz      r31, 0(r4)
lwz      r30, 0(r3)
beq      lbl_80303E94
li       r0, 0
stb      r0, 0x40(r29)
stw      r31, 0x28(r29)
stw      r30, 0x2c(r29)
b        lbl_80303F2C

lbl_80303E94:
bl       checkMovieActive__Q22og9newScreenFv
clrlwi.  r0, r3, 0x18
beq      lbl_80303EAC
stw      r31, 0x28(r29)
stw      r30, 0x2c(r29)
b        lbl_80303F2C

lbl_80303EAC:
lwz      r0, 0x28(r29)
cmplw    r31, r0
beq      lbl_80303EEC
ble      lbl_80303EE8
lwz      r4, 0(r29)
mr       r3, r29
bl       effStart__Q32og6Screen11DopingCheckFP7J2DPane
lwz      r3, 0x34(r29)
cmplwi   r3, 0
beq      lbl_80303EE8
lfs      f1, lbl_8051D570@sda21(r2)
lfs      f2, lbl_8051D574@sda21(r2)
lfs      f3, lbl_8051D578@sda21(r2)
lfs      f4, lbl_8051D560@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff

lbl_80303EE8:
stw      r31, 0x28(r29)

lbl_80303EEC:
lwz      r0, 0x2c(r29)
cmplw    r30, r0
beq      lbl_80303F2C
ble      lbl_80303F28
lwz      r4, 4(r29)
mr       r3, r29
bl       effStart__Q32og6Screen11DopingCheckFP7J2DPane
lwz      r3, 0x38(r29)
cmplwi   r3, 0
beq      lbl_80303F28
lfs      f1, lbl_8051D570@sda21(r2)
lfs      f2, lbl_8051D574@sda21(r2)
lfs      f3, lbl_8051D578@sda21(r2)
lfs      f4, lbl_8051D560@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff

lbl_80303F28:
stw      r30, 0x2c(r29)

lbl_80303F2C:
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
 * Address:	80303F48
 * Size:	000080
 */
void DopingCheck::effStart(J2DPane*)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r3
mr       r3, r4
addi     r4, r1, 0x10
bl       "calcGlbCenter__Q22og6ScreenFP7J2DPaneP10Vector2<f>"
lwz      r4, 0x10(r1)
lis      r3, __vt__Q25efx2d3Arg@ha
lwz      r5, 0x14(r1)
addi     r0, r3, __vt__Q25efx2d3Arg@l
stw      r4, 8(r1)
addi     r4, r1, 0x18
stw      r5, 0xc(r1)
lfs      f1, 8(r1)
lfs      f0, 0xc(r1)
stw      r0, 0x20(r1)
stfs     f1, 0x18(r1)
stfs     f0, 0x1c(r1)
lwz      r3, 0x30(r31)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lwz      r3, ogSound__2og@sda21(r13)
bl       setSprayAdd__Q22og5SoundFv
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void DopingCheck::startGetEff(J2DPane*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80303FC8
 * Size:	0000D0
 */
void DopingCheck::startGetEff_Up(void)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
addi     r4, r1, 8
stw      r31, 0x3c(r1)
mr       r31, r3
lwz      r3, 0(r3)
bl       "calcGlbCenter__Q22og6ScreenFP7J2DPaneP10Vector2<f>"
lfs      f1, 8(r1)
lis      r3, __vt__Q25efx2d7TBaseIF@ha
lfs      f0, 0x3c(r31)
li       r8, 0
addi     r6, r3, __vt__Q25efx2d7TBaseIF@l
lwz      r0, 0xc(r1)
fadds    f0, f1, f0
lis      r5, __vt__Q25efx2d5TBase@ha
stw      r0, 0x14(r1)
lis      r4, __vt__Q25efx2d8TSimple2@ha
lis      r7, __vt__Q25efx2d3Arg@ha
lis      r3, __vt__Q25efx2d11T2DSprayset@ha
stfs     f0, 8(r1)
addi     r9, r7, __vt__Q25efx2d3Arg@l
addi     r0, r5, __vt__Q25efx2d5TBase@l
lfs      f0, 0x14(r1)
stw      r6, 0x24(r1)
li       r6, 0x22
lwz      r10, 8(r1)
addi     r7, r4, __vt__Q25efx2d8TSimple2@l
stw      r0, 0x24(r1)
li       r5, 0x23
addi     r0, r3, __vt__Q25efx2d11T2DSprayset@l
addi     r3, r1, 0x24
stw      r10, 0x10(r1)
addi     r4, r1, 0x18
stw      r7, 0x24(r1)
lfs      f1, 0x10(r1)
stw      r9, 0x20(r1)
stfs     f1, 0x18(r1)
stfs     f0, 0x1c(r1)
stb      r8, 0x28(r1)
stb      r8, 0x29(r1)
sth      r6, 0x2c(r1)
sth      r5, 0x2e(r1)
stw      r8, 0x30(r1)
stw      r8, 0x34(r1)
stw      r0, 0x24(r1)
bl       create__Q25efx2d8TSimple2FPQ25efx2d3Arg
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	80304098
 * Size:	0000D0
 */
void DopingCheck::startGetEff_Down(void)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
addi     r4, r1, 8
stw      r31, 0x3c(r1)
mr       r31, r3
lwz      r3, 4(r3)
bl       "calcGlbCenter__Q22og6ScreenFP7J2DPaneP10Vector2<f>"
lfs      f1, 8(r1)
lis      r3, __vt__Q25efx2d7TBaseIF@ha
lfs      f0, 0x3c(r31)
li       r8, 0
addi     r6, r3, __vt__Q25efx2d7TBaseIF@l
lwz      r0, 0xc(r1)
fadds    f0, f1, f0
lis      r5, __vt__Q25efx2d5TBase@ha
stw      r0, 0x14(r1)
lis      r4, __vt__Q25efx2d8TSimple2@ha
lis      r7, __vt__Q25efx2d3Arg@ha
lis      r3, __vt__Q25efx2d11T2DSprayset@ha
stfs     f0, 8(r1)
addi     r9, r7, __vt__Q25efx2d3Arg@l
addi     r0, r5, __vt__Q25efx2d5TBase@l
lfs      f0, 0x14(r1)
stw      r6, 0x24(r1)
li       r6, 0x22
lwz      r10, 8(r1)
addi     r7, r4, __vt__Q25efx2d8TSimple2@l
stw      r0, 0x24(r1)
li       r5, 0x23
addi     r0, r3, __vt__Q25efx2d11T2DSprayset@l
addi     r3, r1, 0x24
stw      r10, 0x10(r1)
addi     r4, r1, 0x18
stw      r7, 0x24(r1)
lfs      f1, 0x10(r1)
stw      r9, 0x20(r1)
stfs     f1, 0x18(r1)
stfs     f0, 0x1c(r1)
stb      r8, 0x28(r1)
stb      r8, 0x29(r1)
sth      r6, 0x2c(r1)
sth      r5, 0x2e(r1)
stw      r8, 0x30(r1)
stw      r8, 0x34(r1)
stw      r0, 0x24(r1)
bl       create__Q25efx2d8TSimple2FPQ25efx2d3Arg
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

} // namespace Screen
} // namespace og

/*
 * --INFO--
 * Address:	80304168
 * Size:	000004
 */
void efx2d::TSimple2::kill(void) { }

/*
 * --INFO--
 * Address:	8030416C
 * Size:	000004
 */
void efx2d::TSimple2::fade(void) { }

/*
 * --INFO--
 * Address:	80304170
 * Size:	000004
 */
void efx2d::TSimple1::kill(void) { }

/*
 * --INFO--
 * Address:	80304174
 * Size:	000004
 */
void efx2d::TSimple1::fade(void) { }

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80304178
 * Size:	0000A4
 */
DopingScreen::~DopingScreen(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80304200
lis      r3, __vt__Q32og6Screen12DopingScreen@ha
addi     r0, r3, __vt__Q32og6Screen12DopingScreen@l
stw      r0, 0(r30)
beq      lbl_803041F0
lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
stw      r0, 0(r30)
beq      lbl_803041F0
lis      r3, __vt__Q29P2DScreen3Mgr@ha
addic.   r0, r30, 0x118
addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
stw      r0, 0(r30)
beq      lbl_803041E4
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x118
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x118(r30)
bl       __dt__5CNodeFv

lbl_803041E4:
mr       r3, r30
li       r4, 0
bl       __dt__9J2DScreenFv

lbl_803041F0:
extsh.   r0, r31
ble      lbl_80304200
mr       r3, r30
bl       __dl__FPv

lbl_80304200:
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
