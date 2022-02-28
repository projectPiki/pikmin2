#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_movieMessage_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A6E0
    lbl_8049A6E0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x6D6F7669
        .4byte 0x654D6573
        .4byte 0x73616765
        .4byte 0x00000000
        .4byte 0x6D6F7669
        .4byte 0x654D6573
        .4byte 0x73616765
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_8049A710
    lbl_8049A710:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x616E696D
        .4byte 0x2F706F64
        .4byte 0x2E627470
        .4byte 0x00000000
        .4byte 0x616E696D
        .4byte 0x2F706F64
        .4byte 0x2E62636B
        .4byte 0x00000000
        .4byte 0x616E696D
        .4byte 0x2F706F64
        .4byte 0x2E62706B
        .4byte 0x00000000
        .4byte 0x6D675F77
        .4byte 0x696E646F
        .4byte 0x772E626C
        .4byte 0x6F000000
        .4byte 0x50324A4D
        .4byte 0x453A3A4D
        .4byte 0x6F766965
        .4byte 0x3A3A5443
        .4byte 0x6F6E7472
        .4byte 0x6F6C3A3A
        .4byte 0x6F6E496E
        .4byte 0x69740000
        .4byte 0x504D545F
        .4byte 0x6F6E496E
        .4byte 0x69745F61
        .4byte 0x72630000
        .4byte 0x6E65775F
        .4byte 0x73637265
        .4byte 0x656E2F63
        .4byte 0x6D6E2F6D
        .4byte 0x65737361
        .4byte 0x67655F77
        .4byte 0x696E646F
        .4byte 0x772E737A
        .4byte 0x73000000
        .4byte 0x6E65775F
        .4byte 0x73637265
        .4byte 0x656E2F63
        .4byte 0x6D6E2F67
        .4byte 0x6F6C645F
        .4byte 0x706F645F
        .4byte 0x666F725F
        .4byte 0x6D657373
        .4byte 0x6167655F
        .4byte 0x77696E64
        .4byte 0x6F772E73
        .4byte 0x7A730000
        .4byte 0x6E65775F
        .4byte 0x73637265
        .4byte 0x656E2F63
        .4byte 0x6D6E2F70
        .4byte 0x6F645F66
        .4byte 0x6F725F6D
        .4byte 0x65737361
        .4byte 0x67655F77
        .4byte 0x696E646F
        .4byte 0x772E737A
        .4byte 0x73000000
        .4byte 0x25732069
        .4byte 0x73206E6F
        .4byte 0x7420666F
        .4byte 0x756E642E
        .4byte 0x0A000000
        .4byte 0x504D545F
        .4byte 0x6F6E496E
        .4byte 0x69745F69
        .4byte 0x6E697452
        .4byte 0x656E6465
        .4byte 0x72696E67
        .4byte 0x50726F63
        .4byte 0x6573736F
        .4byte 0x72000000
    .global lbl_8049A844
    lbl_8049A844:
        .4byte 0x6D657373
        .4byte 0x6167654F
        .4byte 0x626A2E68
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EC640
    lbl_804EC640:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q35P2JME5Movie8TControl
    __vt__Q35P2JME5Movie8TControl:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME5Movie8TControlFv
        .4byte reset__Q35P2JME5Movie8TControlFv
        .4byte update__Q25P2JME8TControlFv
        .4byte update__Q35P2JME5Movie8TControlFP10ControllerP10Controller
        .4byte draw__Q35P2JME5Movie8TControlFR8Graphics
        .4byte draw__Q35P2JME6Window8TControlFPA4_fPA4_f
        .4byte setMessageID__Q25P2JME8TControlFUlUl
        .4byte setMessageID__Q25P2JME8TControlFPc
        .4byte setMessageID__Q25P2JME8TControlFUx
        .4byte setMessageCode__Q25P2JME8TControlFUsUs
        .4byte setMessageCode__Q25P2JME8TControlFUl
        .4byte onInit__Q35P2JME5Movie8TControlFv
        .4byte createReference__Q25P2JME8TControlFv
        .4byte createResourceContainer__Q25P2JME8TControlFv
        .4byte createSequenceProcessor__Q35P2JME6Window8TControlFv
        .4byte createRenderingProcessor__Q35P2JME6Window8TControlFv
    .global __vt__Q35P2JME5Movie19MessageWindowScreen
    __vt__Q35P2JME5Movie19MessageWindowScreen:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME5Movie19MessageWindowScreenFv
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
    .global __vt__Q35P2JME5Movie13PodIconScreen
    __vt__Q35P2JME5Movie13PodIconScreen:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME5Movie13PodIconScreenFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__Q35P2JME5Movie13PodIconScreenFv
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
    .global __vt__Q35P2JME5Movie8AbtnPane
    __vt__Q35P2JME5Movie8AbtnPane:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME5Movie8AbtnPaneFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q35P2JME5Movie8AbtnPaneFv
        .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q35P2JME5Movie8AbtnPaneFv
    .global __vt__Q35P2JME5Movie10WindowPane
    __vt__Q35P2JME5Movie10WindowPane:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME5Movie10WindowPaneFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q35P2JME5Movie10WindowPaneFv
        .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q35P2JME5Movie10WindowPaneFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516238
    lbl_80516238:
        .skip 0x4
    .global lbl_8051623C
    lbl_8051623C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805207B8
    lbl_805207B8:
        .4byte 0x00000000
    .global lbl_805207BC
    lbl_805207BC:
        .4byte 0x41200000
    .global lbl_805207C0
    lbl_805207C0:
        .4byte 0x42B40000
    .global lbl_805207C4
    lbl_805207C4:
        .4byte 0x43340000
    .global lbl_805207C8
    lbl_805207C8:
        .float 1.0
    .global lbl_805207CC
    lbl_805207CC:
        .4byte 0x43FA0000
    .global lbl_805207D0
    lbl_805207D0:
        .4byte 0x40490FDB
    .global lbl_805207D4
    lbl_805207D4:
        .4byte 0x3BB60B61
    .global lbl_805207D8
    lbl_805207D8:
        .4byte 0x43A2F983
    .global lbl_805207DC
    lbl_805207DC:
        .4byte 0xC3A2F983
    .global lbl_805207E0
    lbl_805207E0:
        .4byte 0x3E4CCCCD
    .global lbl_805207E4
    lbl_805207E4:
        .4byte 0x3F3851EC
    .global lbl_805207E8
    lbl_805207E8:
        .4byte 0x43870000
    .global lbl_805207EC
    lbl_805207EC:
        .4byte 0x42652EE0
    .global lbl_805207F0
    lbl_805207F0:
        .4byte 0x437F0000
        .4byte 0x00000000
    .global lbl_805207F8
    lbl_805207F8:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520800
    lbl_80520800:
        .4byte 0x40C90FDB
    .global lbl_80520804
    lbl_80520804:
        .float 0.5
    .global lbl_80520808
    lbl_80520808:
        .4byte 0x40000000
    .global lbl_8052080C
    lbl_8052080C:
        .4byte 0x3F400000
    .global lbl_80520810
    lbl_80520810:
        .4byte 0x42C80000
    .global lbl_80520814
    lbl_80520814:
        .4byte 0x41C80000
    .global lbl_80520818
    lbl_80520818:
        .4byte 0x437A0000
    .global lbl_8052081C
    lbl_8052081C:
        .4byte 0x47000000
    .global lbl_80520820
    lbl_80520820:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520828
    lbl_80520828:
        .float 0.3
    .global lbl_8052082C
    lbl_8052082C:
        .4byte 0x3FA00000
    .global lbl_80520830
    lbl_80520830:
        .4byte 0x3F266666
    .global lbl_80520834
    lbl_80520834:
        .4byte 0x706F642E
        .4byte 0x626C6F00
    .global lbl_8052083C
    lbl_8052083C:
        .4byte 0x38D1B717
    .global lbl_80520840
    lbl_80520840:
        .4byte 0x3EB33333
    .global lbl_80520844
    lbl_80520844:
        .4byte 0x41A00000
    .global lbl_80520848
    lbl_80520848:
        .4byte 0x80000000
    .global lbl_8052084C
    lbl_8052084C:
        .4byte 0x706F6449
        .4byte 0x636F6E00
    .global lbl_80520854
    lbl_80520854:
        .4byte 0x6D657373
        .4byte 0x61676500
        .4byte 0x00000000
*/

namespace P2JME {

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
Movie::WindowPane::WindowPane(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80434F5C
 * Size:	000020
 */
void Movie::WindowPane::doInit(void)
{
	/*
	lwz      r4, 0x18(r3)
	lfs      f0, lbl_805207B8@sda21(r2)
	lfs      f2, 0xd8(r4)
	lfs      f1, 0xd4(r4)
	stfs     f1, 0x28(r3)
	stfs     f2, 0x2c(r3)
	stfs     f0, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80434F7C
 * Size:	000164
 */
void Movie::WindowPane::update(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 2
	beq      lbl_804350C8
	bge      lbl_80434FA8
	cmpwi    r0, 0
	beq      lbl_80434FB8
	bge      lbl_80434FC8
	b        lbl_804350C8

lbl_80434FA8:
	cmpwi    r0, 4
	beq      lbl_80434FB8
	bge      lbl_804350C8
	b        lbl_80435070

lbl_80434FB8:
	lwz      r4, 0x18(r3)
	li       r0, 0
	stb      r0, 0xb0(r4)
	b        lbl_804350C8

lbl_80434FC8:
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x20(r3)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x20(r3)
	lfs      f0, 0x20(r3)
	lfs      f1, 0x24(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_80435050
	stfs     f1, 0x20(r3)
	lfs      f1, lbl_805207B8@sda21(r2)
	lfs      f3, 0x44(r3)
	lfs      f2, 0x48(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x4c(r3)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80435038
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8043503C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8043503C

lbl_80435038:
	fmr      f2, f1

lbl_8043503C:
	lfs      f0, lbl_805207BC@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80435050
	li       r0, 2
	stw      r0, 0x1c(r3)

lbl_80435050:
	lfs      f1, 0x20(r3)
	lfs      f0, 0x24(r3)
	lfs      f2, lbl_805207C4@sda21(r2)
	fdivs    f1, f1, f0
	lfs      f0, lbl_805207C0@sda21(r2)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x34(r3)
	b        lbl_804350C8

lbl_80435070:
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x20(r3)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x20(r3)
	lfs      f1, 0x20(r3)
	lfs      f0, 0x24(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_804350A4
	li       r0, 4
	stw      r0, 0x1c(r3)
	lfs      f0, 0x24(r3)
	stfs     f0, 0x20(r3)

lbl_804350A4:
	lfs      f1, 0x20(r3)
	lfs      f0, 0x24(r3)
	lfs      f2, lbl_805207C8@sda21(r2)
	fdivs    f1, f1, f0
	lfs      f3, lbl_805207C4@sda21(r2)
	lfs      f0, lbl_805207C0@sda21(r2)
	fsubs    f1, f2, f1
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x34(r3)

lbl_804350C8:
	li       r4, 0
	bl       moveWindow__Q35P2JME5Movie10WindowPaneFb
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804350E0
 * Size:	000278
 */
void Movie::WindowPane::moveWindow(bool)
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
	lfs      f1, lbl_805207D4@sda21(r2)
	lfs      f0, 0x34(r3)
	lfs      f2, lbl_805207D0@sda21(r2)
	fmuls    f1, f1, f0
	lfs      f4, 0x28(r3)
	lfs      f3, lbl_805207CC@sda21(r2)
	lfs      f0, lbl_805207B8@sda21(r2)
	fmuls    f5, f2, f1
	lfs      f30, 0x2c(r3)
	fadds    f31, f4, f3
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_8043513C
	fneg     f1, f5

lbl_8043513C:
	lfs      f2, lbl_805207D8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805207B8@sda21(r2)
	addi     r5, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_805207CC@sda21(r2)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r5, r0
	lfs      f0, 4(r3)
	fmadds   f4, f3, f0, f30
	bge      lbl_8043519C
	lfs      f0, lbl_805207DC@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f0, f0
	b        lbl_804351B4

lbl_8043519C:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0

lbl_804351B4:
	clrlwi.  r0, r4, 0x18
	fmadds   f2, f3, f0, f31
	beq      lbl_804351E0
	stfs     f2, 0x38(r31)
	lfs      f0, lbl_805207B8@sda21(r2)
	stfs     f4, 0x3c(r31)
	stfs     f0, 0x40(r31)
	stfs     f0, 0x44(r31)
	stfs     f0, 0x48(r31)
	stfs     f0, 0x4c(r31)
	b        lbl_80435288

lbl_804351E0:
	lfs      f1, 0x38(r31)
	lfs      f0, 0x3c(r31)
	fsubs    f5, f2, f1
	lfs      f2, lbl_805207E0@sda21(r2)
	fsubs    f6, f4, f0
	lfs      f0, 0x44(r31)
	lfs      f3, 0x40(r31)
	fmuls    f5, f5, f2
	lfs      f4, lbl_805207B8@sda21(r2)
	fmuls    f6, f6, f2
	lfs      f1, lbl_805207E4@sda21(r2)
	fadds    f0, f0, f5
	fsubs    f3, f4, f3
	stfs     f0, 0x44(r31)
	fmuls    f3, f3, f2
	lfs      f0, 0x48(r31)
	fadds    f0, f0, f6
	stfs     f0, 0x48(r31)
	lfs      f0, 0x4c(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x4c(r31)
	lfs      f0, 0x44(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x44(r31)
	lfs      f0, 0x48(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x48(r31)
	lfs      f0, 0x4c(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x4c(r31)
	lfs      f1, 0x38(r31)
	lfs      f0, 0x44(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x38(r31)
	lfs      f1, 0x3c(r31)
	lfs      f0, 0x48(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x3c(r31)
	lfs      f1, 0x40(r31)
	lfs      f0, 0x4c(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x40(r31)

lbl_80435288:
	lwz      r3, 0x18(r31)
	lfs      f1, 0x3c(r31)
	lfs      f0, 0x38(r31)
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x38(r31)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x3c(r31)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f1, f31
	fsubs    f2, f0, f30
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f30, f1
	lfs      f1, 0x34(r31)
	bl       roundAng__Ff
	lfs      f0, lbl_805207E8@sda21(r2)
	lfs      f2, lbl_805207C4@sda21(r2)
	fsubs    f3, f1, f0
	lfs      f1, lbl_805207EC@sda21(r2)
	lfs      f0, lbl_805207C0@sda21(r2)
	lwz      r3, 0x18(r31)
	fdivs    f3, f3, f2
	lfs      f2, lbl_805207C8@sda21(r2)
	fmadds   f0, f1, f30, f0
	fabs     f1, f3
	stfs     f0, 0xc0(r3)
	frsp     f0, f1
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	fadds    f30, f2, f0
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	stfs     f30, 0xcc(r3)
	stfs     f30, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
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
 * Address:	80435358
 * Size:	000048
 */
void Movie::WindowPane::open(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_805207B8@sda21(r2)
	li       r4, 1
	stw      r0, 0x14(r1)
	li       r0, 1
	lfs      f0, lbl_805207C0@sda21(r2)
	lwz      r5, 0x18(r3)
	stb      r0, 0xb0(r5)
	stw      r0, 0x1c(r3)
	stfs     f2, 0x20(r3)
	stfs     f1, 0x24(r3)
	stfs     f0, 0x34(r3)
	bl       moveWindow__Q35P2JME5Movie10WindowPaneFb
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Movie::WindowPane::close(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
Movie::AbtnPane::AbtnPane(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804353A0
 * Size:	000054
 */
void Movie::AbtnPane::doInit(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	li       r4, 1
	li       r0, 0
	stb      r4, 0xb0(r3)
	stw      r0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804353F4
 * Size:	000170
 */
void Movie::AbtnPane::update(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_80520800@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f1, lbl_805207C8@sda21(r2)
	lfs      f0, 0x20(r3)
	fmuls    f2, f2, f0
	lfs      f0, lbl_805207B8@sda21(r2)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80435424
	fneg     f1, f1

lbl_80435424:
	lfs      f0, lbl_805207D8@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lwz      r0, 0x1c(r3)
	addi     r5, r4, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	lfs      f3, lbl_805207C8@sda21(r2)
	lfs      f1, lbl_80520804@sda21(r2)
	cmpwi    r0, 1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	rlwinm   r4, r4, 3, 0x12, 0x1c
	add      r4, r5, r4
	lfs      f0, 4(r4)
	fsubs    f0, f3, f0
	fmuls    f4, f1, f0
	beq      lbl_804354A8
	bge      lbl_804354D0
	cmpwi    r0, 0
	bge      lbl_80435478
	b        lbl_804354D0

lbl_80435478:
	lwz      r4, sys@sda21(r13)
	lfs      f3, lbl_80520808@sda21(r2)
	lfs      f2, 0x54(r4)
	lfs      f1, 0x24(r3)
	lfs      f0, lbl_805207B8@sda21(r2)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x24(r3)
	lfs      f1, 0x24(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_804354D0
	stfs     f0, 0x24(r3)
	b        lbl_804354D0

lbl_804354A8:
	lwz      r4, sys@sda21(r13)
	lfs      f2, lbl_80520808@sda21(r2)
	lfs      f1, 0x54(r4)
	lfs      f0, 0x24(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x24(r3)
	lfs      f0, 0x24(r3)
	fcmpo    cr0, f0, f3
	ble      lbl_804354D0
	stfs     f3, 0x24(r3)

lbl_804354D0:
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x20(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_805207C8@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x20(r3)
	lfs      f1, 0x20(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_804354FC
	lfs      f0, lbl_805207B8@sda21(r2)
	stfs     f0, 0x20(r3)

lbl_804354FC:
	lfs      f0, lbl_805207F0@sda21(r2)
	lfs      f1, 0x24(r3)
	fmuls    f2, f0, f4
	lfs      f0, lbl_805207B8@sda21(r2)
	lwz      r3, 0x18(r3)
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8043552C
	lfs      f0, lbl_80520804@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_80435534

lbl_8043552C:
	lfs      f0, lbl_80520804@sda21(r2)
	fsubs    f0, f1, f0

lbl_80435534:
	fctiwz   f0, f0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	clrlwi   r4, r0, 0x18
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
Movie::PodIconScreen::PodIconScreen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Movie::PodIconScreen::setTrans(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000168
 */
void Movie::PodIconScreen::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000178
 */
void Movie::PodIconScreen::appear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002A0
 */
void Movie::PodIconScreen::disappear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E0
 */
void Movie::PodIconScreen::set(JKRArchive*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80435564
 * Size:	000438
 */
void Movie::PodIconScreen::update(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r0, 0x148(r3)
	cmpwi    r0, -1
	beq      lbl_80435980
	lfs      f1, 0x160(r31)
	lis      r0, 0x4330
	lfs      f0, lbl_805207C8@sda21(r2)
	stw      r0, 8(r1)
	fadds    f0, f1, f0
	lfd      f1, lbl_80520820@sda21(r2)
	stfs     f0, 0x160(r31)
	lwz      r3, 0x15c(r31)
	lfs      f2, 0x160(r31)
	lha      r3, 6(r3)
	xoris    r3, r3, 0x8000
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_804355E0
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fsubs    f0, f2, f0
	stfs     f0, 0x160(r31)

lbl_804355E0:
	lfs      f1, 0x160(r31)
	lis      r0, 0x4330
	lwz      r3, 0x15c(r31)
	lfs      f0, lbl_805207C8@sda21(r2)
	stfs     f1, 8(r3)
	lfd      f1, lbl_80520820@sda21(r2)
	lfs      f2, 0x158(r31)
	stw      r0, 8(r1)
	fadds    f0, f2, f0
	stfs     f0, 0x158(r31)
	lwz      r3, 0x154(r31)
	lfs      f2, 0x158(r31)
	lha      r3, 6(r3)
	xoris    r3, r3, 0x8000
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80435648
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fsubs    f0, f2, f0
	stfs     f0, 0x158(r31)

lbl_80435648:
	lfs      f1, 0x158(r31)
	lis      r0, 0x4330
	lwz      r3, 0x154(r31)
	lfs      f0, lbl_805207C8@sda21(r2)
	stfs     f1, 8(r3)
	lfd      f1, lbl_80520820@sda21(r2)
	lfs      f2, 0x150(r31)
	stw      r0, 8(r1)
	fadds    f0, f2, f0
	stfs     f0, 0x150(r31)
	lwz      r3, 0x14c(r31)
	lfs      f2, 0x150(r31)
	lha      r3, 6(r3)
	xoris    r3, r3, 0x8000
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_804356B0
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fsubs    f0, f2, f0
	stfs     f0, 0x150(r31)

lbl_804356B0:
	lfs      f0, 0x150(r31)
	mr       r3, r31
	lwz      r4, 0x14c(r31)
	stfs     f0, 8(r4)
	bl       animation__9J2DScreenFv
	lfs      f1, 0x174(r31)
	lfs      f0, 0x168(r31)
	lfs      f3, 0x178(r31)
	fsubs    f6, f1, f0
	lfs      f2, 0x16c(r31)
	lfs      f1, 0x170(r31)
	lfs      f0, 0x164(r31)
	fsubs    f11, f3, f2
	fmuls    f2, f6, f6
	fsubs    f3, f1, f0
	lfs      f1, lbl_805207B8@sda21(r2)
	fmuls    f4, f11, f11
	fmadds   f0, f3, f3, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80435714
	ble      lbl_80435718
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_80435718

lbl_80435714:
	fmr      f0, f1

lbl_80435718:
	lfs      f1, lbl_8052083C@sda21(r2)
	fcmpo    cr0, f0, f1
	ble      lbl_80435860
	lfs      f9, lbl_805207C8@sda21(r2)
	lfs      f5, 0x180(r31)
	fdivs    f10, f9, f0
	lfs      f7, 0x17c(r31)
	lfs      f8, 0x184(r31)
	lfs      f1, lbl_80520804@sda21(r2)
	lfs      f4, lbl_805207E0@sda21(r2)
	lfs      f2, 0x17c(r31)
	fmuls    f13, f6, f10
	lfs      f6, lbl_80520840@sda21(r2)
	fmuls    f12, f3, f10
	lfs      f3, lbl_805207B8@sda21(r2)
	fmuls    f10, f11, f10
	fmuls    f5, f13, f5
	fmadds   f5, f12, f7, f5
	fmadds   f5, f10, f8, f5
	fadds    f5, f9, f5
	fmuls    f5, f5, f1
	fsubs    f1, f9, f5
	fmuls    f5, f5, f5
	fadds    f1, f9, f1
	fmuls    f5, f0, f5
	fmuls    f4, f4, f1
	fmuls    f1, f6, f5
	fmuls    f12, f12, f4
	fmuls    f13, f13, f4
	fmuls    f10, f10, f4
	fadds    f2, f2, f12
	stfs     f2, 0x17c(r31)
	lfs      f2, 0x180(r31)
	fadds    f2, f2, f13
	stfs     f2, 0x180(r31)
	lfs      f2, 0x184(r31)
	fadds    f2, f2, f10
	stfs     f2, 0x184(r31)
	lfs      f5, 0x17c(r31)
	lfs      f4, 0x180(r31)
	lfs      f6, 0x184(r31)
	fmuls    f2, f5, f5
	fmuls    f4, f4, f4
	fmuls    f6, f6, f6
	fadds    f2, f2, f4
	fadds    f2, f6, f2
	fcmpo    cr0, f2, f3
	ble      lbl_804357F4
	fmadds   f2, f5, f5, f4
	fadds    f4, f6, f2
	fcmpo    cr0, f4, f3
	ble      lbl_804357F8
	frsqrte  f2, f4
	fmuls    f4, f2, f4
	b        lbl_804357F8

lbl_804357F4:
	fmr      f4, f3

lbl_804357F8:
	lfs      f2, lbl_805207B8@sda21(r2)
	fcmpo    cr0, f4, f2
	ble      lbl_80435830
	lfs      f3, lbl_805207C8@sda21(r2)
	lfs      f2, 0x17c(r31)
	fdivs    f3, f3, f4
	fmuls    f2, f2, f3
	stfs     f2, 0x17c(r31)
	lfs      f2, 0x180(r31)
	fmuls    f2, f2, f3
	stfs     f2, 0x180(r31)
	lfs      f2, 0x184(r31)
	fmuls    f2, f2, f3
	stfs     f2, 0x184(r31)

lbl_80435830:
	lfs      f3, 0x17c(r31)
	lfs      f2, 0x164(r31)
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x164(r31)
	lfs      f3, 0x180(r31)
	lfs      f2, 0x168(r31)
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x168(r31)
	lfs      f3, 0x184(r31)
	lfs      f2, 0x16c(r31)
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x16c(r31)

lbl_80435860:
	lfs      f3, 0x16c(r31)
	lfs      f2, lbl_80520844@sda21(r2)
	lfs      f1, lbl_80520804@sda21(r2)
	fdivs    f2, f3, f2
	fmr      f6, f2
	fcmpo    cr0, f2, f1
	bge      lbl_80435880
	fmr      f6, f1

lbl_80435880:
	lwz      r3, playData__4Game@sda21(r13)
	lfs      f1, lbl_805207C8@sda21(r2)
	lbz      r0, 0x2f(r3)
	fadds    f6, f6, f1
	clrlwi.  r0, r0, 0x1f
	beq      lbl_804358CC
	lfs      f2, 0x164(r31)
	lfs      f1, lbl_80520818@sda21(r2)
	lfs      f5, 0x168(r31)
	lfs      f4, lbl_80520814@sda21(r2)
	fsubs    f3, f2, f1
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f4, f5, f4
	lfs      f1, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	fadds    f1, f4, f1
	stfs     f2, 0x140(r31)
	stfs     f1, 0x144(r31)
	b        lbl_804358FC

lbl_804358CC:
	lfs      f2, 0x164(r31)
	lfs      f1, lbl_80520818@sda21(r2)
	lfs      f5, 0x168(r31)
	lfs      f4, lbl_805207BC@sda21(r2)
	fsubs    f3, f2, f1
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f4, f5, f4
	lfs      f1, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	fadds    f1, f4, f1
	stfs     f2, 0x140(r31)
	stfs     f1, 0x144(r31)

lbl_804358FC:
	lfs      f1, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f2, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fmuls    f3, f6, f1
	lfs      f1, lbl_805207BC@sda21(r2)
	fmuls    f2, f6, f2
	fcmpo    cr0, f0, f1
	stfs     f3, 0x138(r31)
	stfs     f2, 0x13c(r31)
	bge      lbl_8043595C
	lwz      r0, 0x148(r31)
	cmpwi    r0, 1
	beq      lbl_8043595C
	bge      lbl_8043593C
	cmpwi    r0, 0
	bge      lbl_80435948
	b        lbl_8043595C

lbl_8043593C:
	cmpwi    r0, 3
	bge      lbl_8043595C
	b        lbl_80435954

lbl_80435948:
	li       r0, 1
	stw      r0, 0x148(r31)
	b        lbl_8043595C

lbl_80435954:
	li       r0, 3
	stw      r0, 0x148(r31)

lbl_8043595C:
	lwz      r0, 0x148(r31)
	cmpwi    r0, 0
	beq      lbl_80435970
	cmpwi    r0, 1
	bne      lbl_80435980

lbl_80435970:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x4007
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80435980:
	mr       r3, r31
	bl       update__Q29P2DScreen3MgrFv
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
 * Size:	00003C
 */
Movie::MessageWindowScreen::MessageWindowScreen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00026C
 */
void Movie::MessageWindowScreen::set(JKRArchive*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043599C
 * Size:	000080
 */
Movie::TControl::TControl(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q35P2JME6Window8TControlFv
	lis      r3, __vt__Q35P2JME5Movie8TControl@ha
	li       r0, 0
	addi     r4, r3, __vt__Q35P2JME5Movie8TControl@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x5c(r31)
	stw      r0, 0x60(r31)
	stw      r0, 0x64(r31)
	stb      r0, 0x68(r31)
	stw      r0, 0x6c(r31)
	stb      r0, 0x70(r31)
	stb      r0, 0x71(r31)
	stb      r0, 0x72(r31)
	stb      r0, 0x73(r31)
	stb      r0, 0x70(r31)
	stb      r0, 0x71(r31)
	stb      r0, 0x72(r31)
	stb      r0, 0x73(r31)
	lwz      r0, 0x70(r31)
	ori      r0, r0, 1
	stw      r0, 0x70(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80435A1C
 * Size:	000070
 */
Window::TControl::~TControl(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80435A70
	lis      r4, __vt__Q35P2JME6Window8TControl@ha
	addi     r0, r4, __vt__Q35P2JME6Window8TControl@l
	stw      r0, 0(r30)
	beq      lbl_80435A60
	lis      r5, __vt__Q25P2JME8TControl@ha
	li       r4, 0
	addi     r0, r5, __vt__Q25P2JME8TControl@l
	stw      r0, 0(r30)
	bl       __dt__Q28JMessage8TControlFv

lbl_80435A60:
	extsh.   r0, r31
	ble      lbl_80435A70
	mr       r3, r30
	bl       __dl__FPv

lbl_80435A70:
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
 * Address:	80435A8C
 * Size:	0007B0
 */
void Movie::TControl::onInit(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_8049A6E0@ha
	li       r5, 0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r29, r3
	addi     r31, r4, lbl_8049A6E0@l
	addi     r4, r31, 0x7c
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, gP2JMEMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80435AE0
	lwz      r4, 0x18(r3)
	mr       r3, r29
	bl       setFont__Q25P2JME8TControlFP7JUTFont
	lwz      r4, gP2JMEMgr@sda21(r13)
	mr       r3, r29
	lwz      r4, 0x18(r4)
	bl       setRubyFont__Q25P2JME8TControlFP7JUTFont

lbl_80435AE0:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x9c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r31, 0xac
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r27, r3, r3
	beq      lbl_80435DF0
	li       r3, 0x158
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80435B2C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	lis      r3, __vt__Q35P2JME5Movie19MessageWindowScreen@ha
	addi     r0, r3, __vt__Q35P2JME5Movie19MessageWindowScreen@l
	stw      r0, 0(r28)

lbl_80435B2C:
	stw      r28, 0x5c(r29)
	mr       r6, r27
	addi     r4, r31, 0x6c
	li       r5, 0
	lwz      r30, 0x5c(r29)
	mr       r3, r30
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	clrlwi.  r0, r3, 0x18
	bne      lbl_80435B64
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x22a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80435B64:
	li       r3, 0x50
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80435BFC
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	li       r6, 0
	stw      r0, 0(r28)
	lis      r4, __vt__Q35P2JME5Movie10WindowPane@ha
	addi     r5, r5, __vt__Q29P2DScreen12CallBackNode@l
	lfs      f0, lbl_805207B8@sda21(r2)
	stw      r6, 0x18(r28)
	addi     r0, r4, __vt__Q35P2JME5Movie10WindowPane@l
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r5, 0(r28)
	stw      r0, 0(r28)
	stw      r6, 0x1c(r28)
	stfs     f0, 0x20(r28)
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0x28(r28)
	lfs      f0, 4(r3)
	stfs     f0, 0x2c(r28)
	lfs      f0, 8(r3)
	stfs     f0, 0x30(r28)
	lfs      f0, 0(r3)
	stfs     f0, 0x38(r28)
	lfs      f0, 4(r3)
	stfs     f0, 0x3c(r28)
	lfs      f0, 8(r3)
	stfs     f0, 0x40(r28)
	lfs      f0, 0(r3)
	stfs     f0, 0x44(r28)
	lfs      f0, 4(r3)
	stfs     f0, 0x48(r28)
	lfs      f0, 8(r3)
	stfs     f0, 0x4c(r28)

lbl_80435BFC:
	stw      r28, 0x148(r30)
	lis      r5, 0x6C6C3030@ha
	lis      r4, 0x6D676E75@ha
	mr       r3, r30
	lwz      r7, 0x148(r30)
	addi     r6, r5, 0x6C6C3030@l
	addi     r5, r4, 0x6D676E75@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	li       r3, 0x28
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80435C74
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r3, __vt__Q35P2JME5Movie8AbtnPane@ha
	stw      r0, 0(r28)
	li       r5, 0
	addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r0, r3, __vt__Q35P2JME5Movie8AbtnPane@l
	stw      r5, 0x18(r28)
	lfs      f1, lbl_805207B8@sda21(r2)
	stw      r4, 0(r28)
	lfs      f0, lbl_80520848@sda21(r2)
	stw      r0, 0(r28)
	stw      r5, 0x1c(r28)
	stfs     f1, 0x20(r28)
	stfs     f1, 0x24(r28)
	stfs     f0, 0x20(r28)

lbl_80435C74:
	stw      r28, 0x14c(r30)
	lis      r5, 0x62746E5F@ha
	lis      r4, 0x6D675F61@ha
	mr       r3, r30
	lwz      r7, 0x14c(r30)
	addi     r6, r5, 0x62746E5F@l
	addi     r5, r4, 0x6D675F61@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	li       r3, 0x28
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80435CEC
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r3, __vt__Q35P2JME5Movie8AbtnPane@ha
	stw      r0, 0(r28)
	li       r5, 0
	addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r0, r3, __vt__Q35P2JME5Movie8AbtnPane@l
	stw      r5, 0x18(r28)
	lfs      f1, lbl_805207B8@sda21(r2)
	stw      r4, 0(r28)
	lfs      f0, lbl_80520848@sda21(r2)
	stw      r0, 0(r28)
	stw      r5, 0x1c(r28)
	stfs     f1, 0x20(r28)
	stfs     f1, 0x24(r28)
	stfs     f0, 0x20(r28)

lbl_80435CEC:
	stw      r28, 0x150(r30)
	lis      r5, 0x79616A69@ha
	lis      r4, 0x006D675F@ha
	mr       r3, r30
	lwz      r7, 0x150(r30)
	addi     r6, r5, 0x79616A69@l
	addi     r5, r4, 0x006D675F@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r30
	lis      r5, 0x616A6931@ha
	lwz      r12, 0(r30)
	lis      r4, 0x6D675F79@ha
	addi     r6, r5, 0x616A6931@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x6D675F79@l
	mtctr    r12
	bctrl
	li       r4, 1
	li       r5, 0
	bl       setInfluencedAlpha__7J2DPaneFbb
	mr       r3, r30
	lis      r5, 0x5F303031@ha
	lwz      r12, 0(r30)
	lis      r4, 0x50494354@ha
	addi     r6, r5, 0x5F303031@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	li       r4, 1
	li       r5, 0
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r3, 0x5c(r29)
	lis      r5, 0x656D6F5F@ha
	lis      r4, 0x6D675F64@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x656D6F5F@l
	addi     r5, r4, 0x6D675F64@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r27, r3, r3
	bne      lbl_80435DAC
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x278
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80435DAC:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	beq      lbl_80435DE0
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x279
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80435DE0:
	stw      r27, 0x64(r29)
	lwz      r3, 0x40(r29)
	lwz      r4, 0x64(r29)
	bl       setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane

lbl_80435DF0:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8052084C@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, playData__4Game@sda21(r13)
	addi     r28, r31, 0x100
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80435E18
	addi     r28, r31, 0xd0

lbl_80435E18:
	mr       r3, r28
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r30, r3, r3
	beq      lbl_804361C0
	li       r3, 0x188
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8043601C
	mr       r28, r4
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	lis      r4, __vt__Q35P2JME5Movie13PodIconScreen@ha
	li       r3, -1
	addi     r4, r4, __vt__Q35P2JME5Movie13PodIconScreen@l
	li       r0, 0
	stw      r4, 0(r28)
	lfs      f0, lbl_805207B8@sda21(r2)
	stw      r3, 0x148(r28)
	stw      r0, 0x14c(r28)
	stfs     f0, 0x150(r28)
	stw      r0, 0x154(r28)
	stfs     f0, 0x158(r28)
	stw      r0, 0x15c(r28)
	stfs     f0, 0x160(r28)
	bl       getRenderModeObj__6SystemFv
	lhz      r27, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 4(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f3, lbl_805207F8@sda21(r2)
	stw      r3, 0xc(r1)
	lfs      f2, lbl_8052080C@sda21(r2)
	lfd      f0, 8(r1)
	stw      r27, 0x14(r1)
	fsubs    f1, f0, f3
	lfs      f0, lbl_80520810@sda21(r2)
	stw      r0, 0x10(r1)
	fmuls    f2, f2, f1
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f3
	stfs     f2, 0x164(r28)
	stfs     f1, 0x168(r28)
	stfs     f0, 0x16c(r28)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfs      f0, lbl_805207C8@sda21(r2)
	stw      r0, 0x18(r1)
	lfd      f3, lbl_80520820@sda21(r2)
	lfd      f1, 0x18(r1)
	lfs      f2, lbl_8052081C@sda21(r2)
	fsubs    f3, f1, f3
	stfs     f0, 0x17c(r28)
	lfs      f1, lbl_805207B8@sda21(r2)
	fdivs    f0, f3, f2
	stfs     f0, 0x180(r28)
	stfs     f1, 0x184(r28)
	lfs      f3, 0x17c(r28)
	lfs      f2, 0x180(r28)
	lfs      f4, 0x184(r28)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80435F50
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80435F54
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80435F54

lbl_80435F50:
	fmr      f2, f1

lbl_80435F54:
	lfs      f0, lbl_805207B8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80435F8C
	lfs      f1, lbl_805207C8@sda21(r2)
	lfs      f0, 0x17c(r28)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x17c(r28)
	lfs      f0, 0x180(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x180(r28)
	lfs      f0, 0x184(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x184(r28)

lbl_80435F8C:
	lfs      f0, lbl_805207B8@sda21(r2)
	stfs     f0, 0x170(r28)
	stfs     f0, 0x174(r28)
	stfs     f0, 0x178(r28)
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80435FE0
	lfs      f1, 0x164(r28)
	lfs      f0, lbl_80520818@sda21(r2)
	lfs      f4, 0x168(r28)
	lfs      f3, lbl_80520814@sda21(r2)
	fsubs    f2, f1, f0
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f3, f4, f3
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f1, f2, f1
	fadds    f0, f3, f0
	stfs     f1, 0x140(r28)
	stfs     f0, 0x144(r28)
	b        lbl_80436010

lbl_80435FE0:
	lfs      f1, 0x164(r28)
	lfs      f0, lbl_80520818@sda21(r2)
	lfs      f4, 0x168(r28)
	lfs      f3, lbl_805207BC@sda21(r2)
	fsubs    f2, f1, f0
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f3, f4, f3
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f1, f2, f1
	fadds    f0, f3, f0
	stfs     f1, 0x140(r28)
	stfs     f0, 0x144(r28)

lbl_80436010:
	li       r0, 0
	mr       r4, r28
	stb      r0, 0xb0(r28)

lbl_8043601C:
	stw      r4, 0x60(r29)
	mr       r6, r30
	addi     r4, r2, lbl_80520834@sda21
	lis      r5, 4
	lwz      r27, 0x60(r29)
	mr       r3, r27
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	clrlwi.  r0, r3, 0x18
	bne      lbl_80436054
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1ac
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80436054:
	mr       r3, r30
	addi     r4, r31, 0x3c
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_80436088
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1b1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80436088:
	mr       r3, r28
	bl       load__20J2DAnmLoaderDataBaseFPCv
	stw      r3, 0x15c(r27)
	lwz      r0, 0x15c(r27)
	cmplwi   r0, 0
	bne      lbl_804360B4
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1b3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804360B4:
	mr       r3, r27
	lwz      r4, 0x15c(r27)
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	addi     r4, r31, 0x4c
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_80436100
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1b8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80436100:
	mr       r3, r28
	bl       load__20J2DAnmLoaderDataBaseFPCv
	stw      r3, 0x154(r27)
	lwz      r0, 0x154(r27)
	cmplwi   r0, 0
	bne      lbl_8043612C
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1ba
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043612C:
	mr       r3, r27
	lwz      r4, 0x154(r27)
	lwz      r12, 0(r27)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	addi     r4, r31, 0x5c
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_80436178
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80436178:
	mr       r3, r28
	bl       load__20J2DAnmLoaderDataBaseFPCv
	stw      r3, 0x14c(r27)
	lwz      r0, 0x14c(r27)
	cmplwi   r0, 0
	bne      lbl_804361A4
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1c1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804361A4:
	mr       r3, r27
	lwz      r4, 0x14c(r27)
	lwz      r12, 0(r27)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	b        lbl_804361D8

lbl_804361C0:
	mr       r6, r28
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x12c
	li       r4, 0x292
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804361D8:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8052084C@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x9c
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x140
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r29
	li       r4, 0x400
	bl       initRenderingProcessor__Q35P2JME6Window8TControlFUl
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x140
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x7c
	bl       heapStatusEnd__6SystemFPc
	lmw      r27, 0x2c(r1)
	li       r3, 1
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043623C
 * Size:	000038
 */
void Movie::TControl::reset(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       reset__Q35P2JME6Window8TControlFv
	mr       r3, r31
	li       r4, 0
	bl       setMode__Q35P2JME5Movie8TControlFQ45P2JME5Movie8TControl9EModeFlag
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80436274
 * Size:	0004E0
 */
void Movie::TControl::setMode(P2JME::Movie::TControl::EModeFlag)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	mr       r30, r3
	cmpwi    r4, 2
	lwz      r31, 0x6c(r3)
	stw      r4, 0x6c(r3)
	beq      lbl_8043647C
	bge      lbl_804362C0
	cmpwi    r4, 0
	beq      lbl_804362CC
	bge      lbl_804362F8
	b        lbl_80436728

lbl_804362C0:
	cmpwi    r4, 4
	bge      lbl_80436728
	b        lbl_80436490

lbl_804362CC:
	li       r0, 0
	stb      r0, 0x68(r30)
	lwz      r3, 0x5c(r30)
	lwz      r3, 0x148(r3)
	lwz      r3, 0x18(r3)
	stb      r0, 0xb0(r3)
	lwz      r3, 0x3c(r30)
	lwz      r0, 0x68(r3)
	ori      r0, r0, 1
	stw      r0, 0x68(r3)
	b        lbl_80436728

lbl_804362F8:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x186f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0x5c(r30)
	lfs      f1, lbl_80520804@sda21(r2)
	bl       open__Q35P2JME5Movie19MessageWindowScreenFf
	lwz      r29, 0x60(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f0, lbl_805207C8@sda21(r2)
	stw      r0, 8(r1)
	lfd      f3, lbl_80520820@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f2, lbl_8052081C@sda21(r2)
	fsubs    f3, f1, f3
	stfs     f0, 0x17c(r29)
	lfs      f1, lbl_805207B8@sda21(r2)
	fdivs    f0, f3, f2
	stfs     f0, 0x180(r29)
	stfs     f1, 0x184(r29)
	lfs      f3, 0x17c(r29)
	lfs      f2, 0x180(r29)
	lfs      f4, 0x184(r29)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80436398
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8043639C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8043639C

lbl_80436398:
	fmr      f2, f1

lbl_8043639C:
	lfs      f0, lbl_805207B8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_804363D4
	lfs      f1, lbl_805207C8@sda21(r2)
	lfs      f0, 0x17c(r29)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x17c(r29)
	lfs      f0, 0x180(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x180(r29)
	lfs      f0, 0x184(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x184(r29)

lbl_804363D4:
	lfs      f0, lbl_805207B8@sda21(r2)
	stfs     f0, 0x170(r29)
	stfs     f0, 0x174(r29)
	stfs     f0, 0x178(r29)
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80436428
	lfs      f1, 0x164(r29)
	lfs      f0, lbl_80520818@sda21(r2)
	lfs      f4, 0x168(r29)
	lfs      f3, lbl_80520814@sda21(r2)
	fsubs    f2, f1, f0
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f3, f4, f3
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f1, f2, f1
	fadds    f0, f3, f0
	stfs     f1, 0x140(r29)
	stfs     f0, 0x144(r29)
	b        lbl_80436458

lbl_80436428:
	lfs      f1, 0x164(r29)
	lfs      f0, lbl_80520818@sda21(r2)
	lfs      f4, 0x168(r29)
	lfs      f3, lbl_805207BC@sda21(r2)
	fsubs    f2, f1, f0
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f3, f4, f3
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f1, f2, f1
	fadds    f0, f3, f0
	stfs     f1, 0x140(r29)
	stfs     f0, 0x144(r29)

lbl_80436458:
	li       r3, 1
	li       r0, 0
	stb      r3, 0xb0(r29)
	stw      r0, 0x148(r29)
	lwz      r3, 0x3c(r30)
	lwz      r0, 0x68(r3)
	ori      r0, r0, 1
	stw      r0, 0x68(r3)
	b        lbl_80436728

lbl_8043647C:
	lwz      r3, 0x3c(r30)
	lwz      r0, 0x68(r3)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x68(r3)
	b        lbl_80436728

lbl_80436490:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1870
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0x5c(r30)
	li       r4, 1
	li       r0, 3
	lfs      f1, lbl_805207B8@sda21(r2)
	lwz      r5, 0x148(r3)
	lfs      f0, lbl_80520804@sda21(r2)
	lwz      r3, 0x18(r5)
	stb      r4, 0xb0(r3)
	stw      r0, 0x1c(r5)
	stfs     f1, 0x20(r5)
	stfs     f0, 0x24(r5)
	lwz      r29, 0x60(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80520820@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8052081C@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80520808@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	cmpwi    r0, 1
	beq      lbl_804365B4
	bge      lbl_80436638
	cmpwi    r0, 0
	bge      lbl_80436524
	b        lbl_80436638

lbl_80436524:
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r28, 4(r3)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14(r1)
	neg      r0, r30
	xoris    r0, r0, 0x8000
	lfd      f5, lbl_80520820@sda21(r2)
	stw      r4, 0x10(r1)
	lfs      f0, lbl_8052081C@sda21(r2)
	lfd      f1, 0x10(r1)
	stw      r28, 0xc(r1)
	fsubs    f1, f1, f5
	lfs      f4, lbl_80520804@sda21(r2)
	stw      r4, 8(r1)
	lfs      f2, lbl_80520828@sda21(r2)
	fdivs    f6, f1, f0
	stw      r0, 0x1c(r1)
	lfd      f3, lbl_805207F8@sda21(r2)
	stw      r4, 0x18(r1)
	lfd      f0, 8(r1)
	lfd      f1, 0x18(r1)
	fmadds   f4, f4, f6, f2
	lfs      f2, lbl_8052082C@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80520810@sda21(r2)
	fsubs    f1, f1, f5
	fmuls    f3, f4, f3
	fmuls    f1, f2, f1
	stfs     f3, 0x170(r29)
	stfs     f1, 0x174(r29)
	stfs     f0, 0x178(r29)
	b        lbl_80436638

lbl_804365B4:
	bl       getRenderModeObj__6SystemFv
	lhz      r28, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 4(r3)
	bl       rand
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r3, 0x1c(r1)
	lfd      f2, lbl_80520820@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f0, lbl_8052081C@sda21(r2)
	lfd      f1, 0x18(r1)
	stw      r30, 0x14(r1)
	fsubs    f1, f1, f2
	lfs      f3, lbl_80520804@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_80520828@sda21(r2)
	fdivs    f5, f1, f0
	stw      r28, 0xc(r1)
	lfd      f4, lbl_805207F8@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 0x10(r1)
	lfd      f1, 8(r1)
	fmadds   f5, f3, f5, f2
	lfs      f2, lbl_80520830@sda21(r2)
	fsubs    f3, f0, f4
	lfs      f0, lbl_80520810@sda21(r2)
	fsubs    f1, f1, f4
	fmuls    f3, f5, f3
	fmuls    f1, f2, f1
	stfs     f3, 0x170(r29)
	stfs     f1, 0x174(r29)
	stfs     f0, 0x178(r29)

lbl_80436638:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f2, lbl_80520820@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f0, lbl_8052081C@sda21(r2)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fdivs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_80520820@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8052081C@sda21(r2)
	lfd      f1, 0x10(r1)
	lfs      f0, lbl_80520804@sda21(r2)
	fsubs    f3, f1, f3
	lfs      f1, lbl_805207B8@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f0, f2, f0
	stfs     f0, 0x17c(r29)
	stfs     f31, 0x180(r29)
	stfs     f1, 0x184(r29)
	lfs      f3, 0x17c(r29)
	lfs      f2, 0x180(r29)
	lfs      f4, 0x184(r29)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_804366E4
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_804366E8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_804366E8

lbl_804366E4:
	fmr      f2, f1

lbl_804366E8:
	lfs      f0, lbl_805207B8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80436720
	lfs      f1, lbl_805207C8@sda21(r2)
	lfs      f0, 0x17c(r29)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x17c(r29)
	lfs      f0, 0x180(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x180(r29)
	lfs      f0, 0x184(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x184(r29)

lbl_80436720:
	li       r0, 2
	stw      r0, 0x148(r29)

lbl_80436728:
	mr       r3, r31
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
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
 * Address:	80436754
 * Size:	000024
 */
void Movie::MessageWindowScreen::open(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x148(r3)
	bl       open__Q35P2JME5Movie10WindowPaneFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80436778
 * Size:	000228
 */
void Movie::TControl::update(Controller*, Controller*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       update__Q35P2JME6Window8TControlFP10ControllerP10Controller
	lwz      r0, 0x70(r31)
	mr       r30, r3
	clrlwi.  r0, r0, 0x1f
	beq      lbl_804367F4
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_804367F4
	lwz      r0, 0x1f0(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_804367F4
	lbz      r0, 0x68(r31)
	cmplwi   r0, 0
	beq      lbl_804367EC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, moviePlayer__4Game@sda21(r13)
	li       r4, 1
	li       r5, 0
	bl       unsuspend__Q24Game11MoviePlayerFlb

lbl_804367EC:
	li       r3, 1
	b        lbl_80436988

lbl_804367F4:
	lwz      r3, 0x5c(r31)
	cmplwi   r3, 0
	beq      lbl_80436810
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_80436810:
	lwz      r3, 0x60(r31)
	cmplwi   r3, 0
	beq      lbl_8043682C
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_8043682C:
	lwz      r0, 0x6c(r31)
	cmpwi    r0, 2
	beq      lbl_804368C8
	bge      lbl_8043684C
	cmpwi    r0, 0
	beq      lbl_80436858
	bge      lbl_804368A4
	b        lbl_80436940

lbl_8043684C:
	cmpwi    r0, 4
	bge      lbl_80436940
	b        lbl_804368E4

lbl_80436858:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80436898
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80436880
	li       r4, 1
	addi     r5, r2, lbl_80520854@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	stb      r3, 0x74(r31)

lbl_80436880:
	mr       r3, r31
	li       r4, 1
	bl       setMode__Q35P2JME5Movie8TControlFQ45P2JME5Movie8TControl9EModeFlag
	li       r0, 1
	stb      r0, 0x68(r31)
	b        lbl_80436940

lbl_80436898:
	li       r0, 0
	stb      r0, 0x68(r31)
	b        lbl_80436940

lbl_804368A4:
	lwz      r3, 0x5c(r31)
	lwz      r3, 0x148(r3)
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 2
	bne      lbl_80436940
	mr       r3, r31
	li       r4, 2
	bl       setMode__Q35P2JME5Movie8TControlFQ45P2JME5Movie8TControl9EModeFlag
	b        lbl_80436940

lbl_804368C8:
	lwz      r0, 0x4c(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80436940
	mr       r3, r31
	li       r4, 3
	bl       setMode__Q35P2JME5Movie8TControlFQ45P2JME5Movie8TControl9EModeFlag
	b        lbl_80436940

lbl_804368E4:
	lwz      r3, 0x5c(r31)
	lwz      r3, 0x148(r3)
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 4
	bne      lbl_80436940
	lwz      r3, 0x60(r31)
	lwz      r0, 0x148(r3)
	cmpwi    r0, 3
	bne      lbl_80436940
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x70(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80436940
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80436940
	li       r4, 1
	li       r5, 1
	bl       unsuspend__Q24Game11MoviePlayerFlb

lbl_80436940:
	lwz      r3, 0x3c(r31)
	lwz      r0, 0x68(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8043696C
	lwz      r4, 0x5c(r31)
	li       r0, 1
	lwz      r3, 0x14c(r4)
	stw      r0, 0x1c(r3)
	lwz      r3, 0x150(r4)
	stw      r0, 0x1c(r3)
	b        lbl_80436984

lbl_8043696C:
	lwz      r4, 0x5c(r31)
	li       r0, 0
	lwz      r3, 0x14c(r4)
	stw      r0, 0x1c(r3)
	lwz      r3, 0x150(r4)
	stw      r0, 0x1c(r3)

lbl_80436984:
	lbz      r3, 0x68(r31)

lbl_80436988:
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
 * Address:	804369A0
 * Size:	0000CC
 */
void Movie::TControl::draw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x5c(r3)
	cmplwi   r0, 0
	beq      lbl_80436A50
	lwz      r0, 0x6c(r29)
	cmpwi    r0, 0
	beq      lbl_80436A50
	addi     r3, r30, 0x190
	lwz      r12, 0x190(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x5c(r29)
	mr       r4, r30
	addi     r5, r30, 0x190
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x64(r29)
	cmplwi   r4, 0
	beq      lbl_80436A34
	addi     r31, r30, 0x210
	mr       r3, r29
	mr       r5, r31
	addi     r4, r4, 0x80
	bl       draw__Q25P2JME8TControlFPA4_fPA4_f
	mr       r3, r31
	li       r4, 0
	bl       GXLoadPosMtxImm

lbl_80436A34:
	lwz      r3, 0x60(r29)
	mr       r4, r30
	addi     r5, r30, 0x190
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl

lbl_80436A50:
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
 * Address:	80436A6C
 * Size:	000080
 */
Movie::TControl::~TControl(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80436AD0
	lis      r4, __vt__Q35P2JME5Movie8TControl@ha
	addi     r0, r4, __vt__Q35P2JME5Movie8TControl@l
	stw      r0, 0(r30)
	beq      lbl_80436AC0
	lis      r4, __vt__Q35P2JME6Window8TControl@ha
	addi     r0, r4, __vt__Q35P2JME6Window8TControl@l
	stw      r0, 0(r30)
	beq      lbl_80436AC0
	lis      r5, __vt__Q25P2JME8TControl@ha
	li       r4, 0
	addi     r0, r5, __vt__Q25P2JME8TControl@l
	stw      r0, 0(r30)
	bl       __dt__Q28JMessage8TControlFv

lbl_80436AC0:
	extsh.   r0, r31
	ble      lbl_80436AD0
	mr       r3, r30
	bl       __dl__FPv

lbl_80436AD0:
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
 * Address:	80436AEC
 * Size:	000020
 */
void Window::TControl::draw(float (*)[4], float (*)[4])
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       draw__Q25P2JME8TControlFPA4_fPA4_f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80436B0C
 * Size:	00007C
 */
void Window::TControl::createRenderingProcessor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x144
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80436B6C
	lwz      r0, 0x38(r30)
	cmplwi   r0, 0
	bne      lbl_80436B5C
	lis      r3, lbl_8049A844@ha
	lis      r5, lbl_8049A710@ha
	addi     r3, r3, lbl_8049A844@l
	li       r4, 0x79
	addi     r5, r5, lbl_8049A710@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80436B5C:
	lwz      r4, 0x38(r30)
	mr       r3, r31
	bl       __ct__Q35P2JME6Window19TRenderingProcessorFPQ28JMessage10TReference
	mr       r31, r3

lbl_80436B6C:
	stw      r31, 0x40(r30)
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
 * Address:	80436B88
 * Size:	000080
 */
void Window::TControl::createSequenceProcessor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x70
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80436BEC
	lwz      r0, 0x38(r30)
	cmplwi   r0, 0
	bne      lbl_80436BD8
	lis      r3, lbl_8049A844@ha
	lis      r5, lbl_8049A710@ha
	addi     r3, r3, lbl_8049A844@l
	li       r4, 0x79
	addi     r5, r5, lbl_8049A710@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80436BD8:
	lwz      r4, 0x38(r30)
	mr       r3, r31
	mr       r5, r30
	bl
__ct__Q35P2JME6Window18TSequenceProcessorFPQ28JMessage10TReferencePQ28JMessage8TControl
	mr       r31, r3

lbl_80436BEC:
	stw      r31, 0x3c(r30)
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
 * Address:	80436C08
 * Size:	000038
 */
void TControl::setMessageID(unsigned long long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r6, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80436C40
 * Size:	000010
 */
void TControl::createReference(void)
{
	/*
	lwz      r4, gP2JMEMgr@sda21(r13)
	lwz      r0, 0x34(r4)
	stw      r0, 0x38(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80436C50
 * Size:	000010
 */
void TControl::createResourceContainer(void)
{
	/*
	lwz      r4, gP2JMEMgr@sda21(r13)
	lwz      r0, 0x30(r4)
	stw      r0, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80436C60
 * Size:	0000A4
 */
Movie::MessageWindowScreen::~MessageWindowScreen(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80436CE8
	lis      r3, __vt__Q35P2JME5Movie19MessageWindowScreen@ha
	addi     r0, r3, __vt__Q35P2JME5Movie19MessageWindowScreen@l
	stw      r0, 0(r30)
	beq      lbl_80436CD8
	lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
	addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
	stw      r0, 0(r30)
	beq      lbl_80436CD8
	lis      r3, __vt__Q29P2DScreen3Mgr@ha
	addic.   r0, r30, 0x118
	addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
	stw      r0, 0(r30)
	beq      lbl_80436CCC
	lis      r4, __vt__Q29P2DScreen4Node@ha
	addi     r3, r30, 0x118
	addi     r0, r4, __vt__Q29P2DScreen4Node@l
	li       r4, 0
	stw      r0, 0x118(r30)
	bl       __dt__5CNodeFv

lbl_80436CCC:
	mr       r3, r30
	li       r4, 0
	bl       __dt__9J2DScreenFv

lbl_80436CD8:
	extsh.   r0, r31
	ble      lbl_80436CE8
	mr       r3, r30
	bl       __dl__FPv

lbl_80436CE8:
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
 * Address:	80436D04
 * Size:	0000A4
 */
Movie::PodIconScreen::~PodIconScreen(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80436D8C
	lis      r3, __vt__Q35P2JME5Movie13PodIconScreen@ha
	addi     r0, r3, __vt__Q35P2JME5Movie13PodIconScreen@l
	stw      r0, 0(r30)
	beq      lbl_80436D7C
	lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
	addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
	stw      r0, 0(r30)
	beq      lbl_80436D7C
	lis      r3, __vt__Q29P2DScreen3Mgr@ha
	addic.   r0, r30, 0x118
	addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
	stw      r0, 0(r30)
	beq      lbl_80436D70
	lis      r4, __vt__Q29P2DScreen4Node@ha
	addi     r3, r30, 0x118
	addi     r0, r4, __vt__Q29P2DScreen4Node@l
	li       r4, 0
	stw      r0, 0x118(r30)
	bl       __dt__5CNodeFv

lbl_80436D70:
	mr       r3, r30
	li       r4, 0
	bl       __dt__9J2DScreenFv

lbl_80436D7C:
	extsh.   r0, r31
	ble      lbl_80436D8C
	mr       r3, r30
	bl       __dl__FPv

lbl_80436D8C:
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
 * Address:	80436DA8
 * Size:	000080
 */
Movie::AbtnPane::~AbtnPane(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80436E0C
	lis      r4, __vt__Q35P2JME5Movie8AbtnPane@ha
	addi     r0, r4, __vt__Q35P2JME5Movie8AbtnPane@l
	stw      r0, 0(r30)
	beq      lbl_80436DFC
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
	stw      r0, 0(r30)
	beq      lbl_80436DFC
	lis      r5, __vt__Q29P2DScreen4Node@ha
	li       r4, 0
	addi     r0, r5, __vt__Q29P2DScreen4Node@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80436DFC:
	extsh.   r0, r31
	ble      lbl_80436E0C
	mr       r3, r30
	bl       __dl__FPv

lbl_80436E0C:
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
 * Address:	80436E28
 * Size:	000080
 */
Movie::WindowPane::~WindowPane(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80436E8C
	lis      r4, __vt__Q35P2JME5Movie10WindowPane@ha
	addi     r0, r4, __vt__Q35P2JME5Movie10WindowPane@l
	stw      r0, 0(r30)
	beq      lbl_80436E7C
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
	stw      r0, 0(r30)
	beq      lbl_80436E7C
	lis      r5, __vt__Q29P2DScreen4Node@ha
	li       r4, 0
	addi     r0, r5, __vt__Q29P2DScreen4Node@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80436E7C:
	extsh.   r0, r31
	ble      lbl_80436E8C
	mr       r3, r30
	bl       __dl__FPv

lbl_80436E8C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace P2JME

/*
 * --INFO--
 * Address:	80436EA8
 * Size:	000028
 */
void __sinit_movieMessage_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EC640@ha
	stw      r0, lbl_80516238@sda21(r13)
	stfsu    f0, lbl_804EC640@l(r3)
	stfs     f0, lbl_8051623C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
