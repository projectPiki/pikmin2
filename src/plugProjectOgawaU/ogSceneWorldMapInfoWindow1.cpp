#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogSceneWorldMapInfoWindow1_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F648
    lbl_8048F648:
        .4byte 0x534D656E
        .4byte 0x75506175
        .4byte 0x73655653
        .4byte 0x20736372
        .4byte 0x65656E00
    .global lbl_8048F65C
    lbl_8048F65C:
        .4byte 0x696E666F
        .4byte 0x5F77696E
        .4byte 0x646F772E
        .4byte 0x626C6F00
        .4byte 0x00000000
    .global lbl_8048F670
    lbl_8048F670:
        .4byte 0x576F726C
        .4byte 0x644D6170
        .4byte 0x496E666F
        .4byte 0x57696E64
        .4byte 0x6F773120
        .4byte 0x73637265
        .4byte 0x656E0000
    .global lbl_8048F68C
    lbl_8048F68C:
        .4byte 0x7265735F
        .4byte 0x776F726C
        .4byte 0x645F6D61
        .4byte 0x705F696E
        .4byte 0x666F5F77
        .4byte 0x696E646F
        .4byte 0x77312E73
        .4byte 0x7A730000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D9F50
    lbl_804D9F50:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q32og9newScreen19WorldMapInfoWindow1
    __vt__Q32og9newScreen19WorldMapInfoWindow1:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen19WorldMapInfoWindow1Fv
        .4byte getOwnerID__Q32og9newScreen12SMenuPauseVSFv
        .4byte getMemberID__Q32og9newScreen19WorldMapInfoWindow1Fv
        .4byte isUseBackupSceneInfo__Q32og9newScreen19WorldMapInfoWindow1Fv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen19WorldMapInfoWindow1CFv
        .4byte doCreateObj__Q32og9newScreen19WorldMapInfoWindow1FP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen12SMenuPauseVSFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q32og9newScreen12SMenuPauseVSFv
        .4byte
   doConfirmSetScene__Q32og9newScreen19WorldMapInfoWindow1FRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg
        .4byte doGetFinishState__Q32og9newScreen19WorldMapInfoWindow1Fv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515EA8
    lbl_80515EA8:
        .skip 0x4
    .global lbl_80515EAC
    lbl_80515EAC:
        .skip 0x4
*/

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	8032C208
 * Size:	00003C
 */
WorldMapInfoWindow1::WorldMapInfoWindow1(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q32og9newScreen12SMenuPauseVSFv
	lis      r4, __vt__Q32og9newScreen19WorldMapInfoWindow1@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q32og9newScreen19WorldMapInfoWindow1@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
WorldMapInfoWindow1::~WorldMapInfoWindow1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032C244
 * Size:	0000A4
 */
void WorldMapInfoWindow1::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0xd4
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8032C280
	lis      r4, lbl_8048F670@ha
	addi     r4, r4, lbl_8048F670@l
	bl       __ct__Q32og9newScreen22ObjWorldMapInfoWindow1FPCc
	mr       r4, r3

lbl_8032C280:
	mr       r3, r30
	mr       r5, r31
	bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
	lwz      r31, 0x21c(r30)
	lis      r4, 0x004F4741@ha
	lis      r6, 0x57696E31@ha
	lis      r5, 0x574D6170@ha
	mr       r3, r31
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x57696E31@l
	addi     r5, r5, 0x574D6170@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8032C2D0
	lbz      r7, 0xc(r31)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	li       r6, 0
	bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc

lbl_8032C2D0:
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
 * Address:	8032C2E8
 * Size:	000008
 */
void WorldMapInfoWindow1::doConfirmSetScene(Screen::SetSceneArg&)
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	8032C2F0
 * Size:	000064
 */
void WorldMapInfoWindow1::doGetFinishState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x004F4741@ha
	lis      r6, 0x57696E31@ha
	stw      r0, 0x14(r1)
	lis      r5, 0x574D6170@ha
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x57696E31@l
	stw      r31, 0xc(r1)
	addi     r5, r5, 0x574D6170@l
	stw      r30, 8(r1)
	li       r30, 0
	lwz      r31, 0x21c(r3)
	mr       r3, r31
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8032C338
	lwz      r30, 8(r31)

lbl_8032C338:
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
 * Address:	8032C354
 * Size:	00000C
 */
void WorldMapInfoWindow1::getResName() const
{
	/*
	lis      r3, lbl_8048F68C@ha
	addi     r3, r3, lbl_8048F68C@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032C360
 * Size:	000008
 */
u32 WorldMapInfoWindow1::getSceneType(void) { return 0x272A; }

/*
 * --INFO--
 * Address:	8032C368
 * Size:	000014
 */
void WorldMapInfoWindow1::getMemberID(void)
{
	/*
	lis      r4, 0x57696E31@ha
	lis      r3, 0x574D6170@ha
	addi     r4, r4, 0x57696E31@l
	addi     r3, r3, 0x574D6170@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032C37C
 * Size:	000008
 */
u32 WorldMapInfoWindow1::isUseBackupSceneInfo(void) { return 0x0; }

} // namespace newScreen

} // namespace og

/*
 * --INFO--
 * Address:	8032C384
 * Size:	000028
 */
void __sinit_ogSceneWorldMapInfoWindow1_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804D9F50@ha
	stw      r0, lbl_80515EA8@sda21(r13)
	stfsu    f0, lbl_804D9F50@l(r3)
	stfs     f0, lbl_80515EAC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
