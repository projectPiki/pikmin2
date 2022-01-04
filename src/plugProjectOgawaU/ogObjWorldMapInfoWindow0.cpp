#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen22ObjWorldMapInfoWindow0
    __vt__Q32og9newScreen22ObjWorldMapInfoWindow0:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv"
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
        .4byte
   doStart__Q32og9newScreen22ObjWorldMapInfoWindow0FPCQ26Screen13StartSceneArg
        .4byte doEnd__Q32og9newScreen15ObjSMenuPauseVSFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32og9newScreen22ObjWorldMapInfoWindow0FP10JKRArchive
        .4byte doUpdateFadein__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte doUpdateFadeinFinish__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdate__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFinish__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFadeout__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFadeoutFinish__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte doDraw__Q32og9newScreen15ObjSMenuPauseVSFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte in_L__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte in_R__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte wait__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte out_L__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte out_R__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte loop__Q32og9newScreen12ObjSMenuBaseFv
        .4byte doUpdateCancelAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateRAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateLAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv
        .4byte updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv
        .4byte commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte getResult__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
    .global __vt__Q32og6Screen26DispMemberWorldMapInfoWin0
    __vt__Q32og6Screen26DispMemberWorldMapInfoWin0:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
        .4byte getOwnerID__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
        .4byte getMemberID__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DF08
    lbl_8051DF08:
        .float 0.5
    .global lbl_8051DF0C
    lbl_8051DF0C:
        .4byte 0x3F19999A
    .global lbl_8051DF10
    lbl_8051DF10:
        .4byte 0x44480000
    .global lbl_8051DF14
    lbl_8051DF14:
        .float 1.0
*/

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	8032B340
 * Size:	000084
 */
ObjWorldMapInfoWindow0::ObjWorldMapInfoWindow0(char const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_8048F5C8@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, lbl_8048F5C8@l
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r0
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q32og9newScreen15ObjSMenuPauseVSFPCc
	lis      r3, __vt__Q32og9newScreen22ObjWorldMapInfoWindow0@ha
	li       r0, 0
	addi     r4, r3, __vt__Q32og9newScreen22ObjWorldMapInfoWindow0@l
	mr       r3, r30
	stw      r4, 0(r30)
	addi     r4, r4, 0x10
	stw      r4, 0x18(r30)
	stw      r0, 0xcc(r30)
	stw      r31, 0x14(r30)
	stw      r0, 0xb0(r30)
	stw      r0, 0xb4(r30)
	stw      r0, 0xb8(r30)
	stw      r0, 0xbc(r30)
	stw      r0, 0xd0(r30)
	lwz      r0, 0xd0(r30)
	stw      r0, 0xac(r30)
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
 * Address:	8032B3C4
 * Size:	0003C4
 */
void ObjWorldMapInfoWindow0::doCreate(JKRArchive*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, lbl_8048F5A8@ha
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	addi     r31, r5, lbl_8048F5A8@l
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r4
	stw      r28, 0x30(r1)
	mr       r28, r3
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x57696E30@ha
	lis      r5, 0x574D6170@ha
	mr       r30, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x57696E30@l
	addi     r5, r5, 0x574D6170@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8032B424
	stw      r30, 0xcc(r28)
	b        lbl_8032B528

lbl_8032B424:
	lis      r4, 0x4D524D52@ha
	lis      r6, 0x4C454354@ha
	lis      r5, 0x56535345@ha
	mr       r3, r30
	addi     r4, r4, 0x4D524D52@l
	addi     r6, r6, 0x4C454354@l
	addi     r5, r5, 0x56535345@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8032B458
	lwz      r0, 0x10(r30)
	stw      r0, 0xcc(r28)
	b        lbl_8032B528

lbl_8032B458:
	lis      r4, 0x4D524D52@ha
	lis      r6, 0x4C454354@ha
	lis      r5, 0x43485345@ha
	mr       r3, r30
	addi     r4, r4, 0x4D524D52@l
	addi     r6, r6, 0x4C454354@l
	addi     r5, r5, 0x43485345@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8032B48C
	lwz      r0, 0x20(r30)
	stw      r0, 0xcc(r28)
	b        lbl_8032B528

lbl_8032B48C:
	lis      r4, 0x4D524D52@ha
	lis      r6, 0x4E454D59@ha
	mr       r3, r30
	li       r5, 0x4445
	addi     r4, r4, 0x4D524D52@l
	addi     r6, r6, 0x4E454D59@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8032B4DC
	lwz      r0, 0x18(r30)
	stw      r0, 0xcc(r28)
	lwz      r0, 0xcc(r28)
	cmplwi   r0, 0
	bne      lbl_8032B528
	addi     r3, r31, 0
	addi     r5, r31, 0x34
	li       r4, 0x7d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8032B528

lbl_8032B4DC:
	lis      r4, 0x4D524D52@ha
	lis      r6, 0x4954454D@ha
	mr       r3, r30
	li       r5, 0x44
	addi     r4, r4, 0x4D524D52@l
	addi     r6, r6, 0x4954454D@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8032B528
	lwz      r0, 0x18(r30)
	stw      r0, 0xcc(r28)
	lwz      r0, 0xcc(r28)
	cmplwi   r0, 0
	bne      lbl_8032B528
	addi     r3, r31, 0
	addi     r5, r31, 0x34
	li       r4, 0x81
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032B528:
	lwz      r0, 0xcc(r28)
	cmplwi   r0, 0
	bne      lbl_8032B5A0
	li       r3, 0x28
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8032B59C
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
	addi     r0, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r6, 0x305F3030@ha
	stw      r0, 0(r3)
	li       r8, 0
	lis      r5, 0x00343731@ha
	lis      r4, 0x315F3030@ha
	stw      r8, 4(r3)
	addi     r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
	addi     r6, r6, 0x305F3030@l
	addi     r5, r5, 0x00343731@l
	stw      r0, 0(r3)
	addi     r4, r4, 0x315F3030@l
	li       r0, 0xb4
	stw      r8, 8(r3)
	stw      r6, 0x14(r3)
	stw      r5, 0x10(r3)
	stw      r4, 0x1c(r3)
	stw      r5, 0x18(r3)
	stb      r0, 0x20(r3)
	stb      r8, 0x21(r3)

lbl_8032B59C:
	stw      r3, 0xcc(r28)

lbl_8032B5A0:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8032B5B8
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8032B5B8:
	stw      r0, 0xb0(r28)
	mr       r6, r29
	addi     r4, r31, 0x40
	lis      r5, 0x110
	lwz      r3, 0xb0(r28)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lis      r5, 0x6E753030@ha
	lis      r4, 0x004E6D65@ha
	lwz      r3, 0xb0(r28)
	addi     r6, r5, 0x6E753030@l
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	lis      r5, 0x6E753032@ha
	stb      r0, 0xb0(r3)
	lis      r4, 0x004E6D65@ha
	addi     r6, r5, 0x6E753032@l
	lwz      r3, 0xb0(r28)
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	stb      r0, 0xb0(r3)
	lwz      r3, 0xb0(r28)
	bl       setFurikoScreen__Q22og6ScreenFPQ29P2DScreen3Mgr
	li       r3, 0x78
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8032B630
	bl       __ct__Q32og6Screen7MenuMgrFv
	mr       r0, r3

lbl_8032B630:
	lis      r10, 0x795F6972@ha
	stw      r0, 0xb4(r28)
	addi     r0, r10, 0x795F6972@l
	lis      r4, 0x6D303179@ha
	lis      r3, 0x506D3031@ha
	stw      r0, 0xc(r1)
	addi     r9, r3, 0x506D3031@l
	addi     r6, r4, 0x6D303179@l
	stw      r9, 8(r1)
	addi     r7, r4, 0x316e
	lis      r3, 0x6E5F696C@ha
	li       r5, 0x4e
	stw      r7, 0x14(r1)
	li       r11, 0x54
	addi     r4, r3, 0x6E5F696C@l
	addi     r0, r3, 0x6972
	stw      r5, 0x10(r1)
	mr       r8, r6
	addi     r10, r10, 0x696c
	li       r5, 0x4e
	stw      r7, 0x1c(r1)
	li       r7, 0x54
	stw      r11, 0x18(r1)
	stw      r4, 0x24(r1)
	stw      r9, 0x20(r1)
	stw      r0, 0x2c(r1)
	stw      r9, 0x28(r1)
	lwz      r3, 0xb4(r28)
	lwz      r4, 0xb0(r28)
	bl       init2taku__Q32og6Screen7MenuMgrFP9J2DScreenUxUxUxUxUxUxUxUx
	lwz      r3, 0xb0(r28)
	lis      r4, 0x6D303179@ha
	lwz      r7, 0xcc(r28)
	addi     r6, r4, 0x6D303179@l
	lwz      r12, 0(r3)
	li       r5, 0x54
	lwz      r30, 0x10(r7)
	lwz      r12, 0x3c(r12)
	lwz      r31, 0x14(r7)
	mtctr    r12
	bctrl
	stw      r31, 0x1c(r3)
	lis      r4, 0x6D30316E@ha
	addi     r6, r4, 0x6D30316E@l
	li       r5, 0x54
	stw      r30, 0x18(r3)
	lwz      r3, 0xb0(r28)
	lwz      r4, 0xcc(r28)
	lwz      r12, 0(r3)
	lwz      r30, 0x18(r4)
	lwz      r12, 0x3c(r12)
	lwz      r31, 0x1c(r4)
	mtctr    r12
	bctrl
	stw      r31, 0x1c(r3)
	stw      r30, 0x18(r3)
	lwz      r3, 0xb0(r28)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	lis      r6, 0x6D303179@ha
	lwz      r4, 0xb0(r28)
	mr       r3, r29
	li       r5, 0x54
	addi     r6, r6, 0x6D303179@l
	bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0xb8(r28)
	lis      r6, 0x6D30316E@ha
	mr       r3, r29
	li       r5, 0x54
	lwz      r4, 0xb0(r28)
	addi     r6, r6, 0x6D30316E@l
	bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0xbc(r28)
	lfs      f1, lbl_8051DF08@sda21(r2)
	lwz      r3, 0xb8(r28)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r3, 0xbc(r28)
	lfs      f1, lbl_8051DF0C@sda21(r2)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032B788
 * Size:	00008C
 */
void ObjWorldMapInfoWindow0::doStart(Screen::StartSceneArg const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0xcc(r3)
	lbz      r0, 0x21(r3)
	stw      r0, 0xd0(r31)
	lwz      r0, 0xd0(r31)
	lwz      r3, 0xb4(r31)
	clrlwi   r4, r0, 0x10
	bl       initSelNum__Q32og6Screen7MenuMgrFUs
	lwz      r0, 0xd0(r31)
	mr       r3, r31
	stw      r0, 0xac(r31)
	lwz      r4, 0xac(r31)
	bl       blink_Menu__Q32og9newScreen15ObjSMenuPauseVSFi
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setOpenWMapMenu__Q22og5SoundFv
	lis      r5, 0x6B6F3030@ha
	lis      r4, 0x66757269@ha
	lwz      r3, 0xb0(r31)
	addi     r6, r5, 0x6B6F3030@l
	addi     r5, r4, 0x66757269@l
	bl       getFurikoPtr__Q22og6ScreenFPQ29P2DScreen3MgrUx
	bl       stop__Q32og6Screen15CallBack_FurikoFv
	mr       r3, r31
	li       r4, 0
	bl start_LR__Q32og9newScreen12ObjSMenuBaseFPCQ26Screen13StartSceneArg
	lwz      r0, 0x14(r1)
	li       r3, 1
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032B814
 * Size:	000090
 */
void ObjWorldMapInfoWindow0::doUpdateFadein(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r4, sys@sda21(r13)
	lis      r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lfs      f1, 0x44(r30)
	addi     r3, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	lfs      f0, 0x54(r4)
	li       r31, 0
	fadds    f0, f1, f0
	stfs     f0, 0x44(r30)
	lfs      f1, 0x44(r30)
	lfs      f2, 8(r3)
	fcmpo    cr0, f1, f2
	ble      lbl_8032B870
	li       r31, 1

lbl_8032B870:
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f2, lbl_8051DF14@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_8051DF10@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x40(r30)
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
 * Address:	8032B8A4
 * Size:	000020
 */
void ObjWorldMapInfoWindow0::commonUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       commonUpdate__Q32og9newScreen15ObjSMenuPauseVSFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032B8C4
 * Size:	000038
 */
void ObjWorldMapInfoWindow0::out_cancel(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	lwz      r4, 0xcc(r3)
	stw      r0, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x84(r12)
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
 * Address:	8032B8FC
 * Size:	000038
 */
void ObjWorldMapInfoWindow0::out_menu_0(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	lwz      r4, 0xcc(r3)
	stw      r0, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x84(r12)
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
 * Address:	8032B934
 * Size:	000038
 */
void ObjWorldMapInfoWindow0::out_menu_1(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 1
	lwz      r4, 0xcc(r3)
	stw      r0, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x84(r12)
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
 * Address:	8032B96C
 * Size:	00000C
 */
void ObjWorldMapInfoWindow0::out_L(void)
{
	// Generated from stw r0, 0x38(r3)
	_38 = 2;
}

/*
 * --INFO--
 * Address:	8032B978
 * Size:	000088
 */
void ObjWorldMapInfoWindow0::doUpdateFadeoutFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	bl       setFinishState__Q32og9newScreen12ObjSMenuBaseFl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_8032B9EC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc

lbl_8032B9EC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032BA00
 * Size:	00000C
 */
void ObjWorldMapInfoWindow0::getResult(void)
{
	/*
	lwz      r3, 0xcc(r3)
	lwz      r3, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032BA0C
 * Size:	000068
 */
ObjWorldMapInfoWindow0::~ObjWorldMapInfoWindow0(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8032BA58
	lis      r5, __vt__Q32og9newScreen22ObjWorldMapInfoWindow0@ha
	li       r4, 0
	addi     r5, r5, __vt__Q32og9newScreen22ObjWorldMapInfoWindow0@l
	stw      r5, 0(r30)
	addi     r0, r5, 0x10
	stw      r0, 0x18(r30)
	bl       __dt__Q32og9newScreen15ObjSMenuPauseVSFv
	extsh.   r0, r31
	ble      lbl_8032BA58
	mr       r3, r30
	bl       __dl__FPv

lbl_8032BA58:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Screen {

} // namespace Screen

/*
 * --INFO--
 * Address:	8032BA74
 * Size:	000008
 */
u32 DispMemberWorldMapInfoWin0::getSize(void) { return 0x28; }

/*
 * --INFO--
 * Address:	8032BA7C
 * Size:	00000C
 */
void DispMemberWorldMapInfoWin0::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8032BA88
 * Size:	000014
 */
void DispMemberWorldMapInfoWin0::getMemberID(void)
{
	/*
lis      r4, 0x57696E30@ha
lis      r3, 0x574D6170@ha
addi     r4, r4, 0x57696E30@l
addi     r3, r3, 0x574D6170@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8032BA9C
 * Size:	000008
 */
@24 @og::newScreen::ObjWorldMapInfoWindow0::~ObjWorldMapInfoWindow0(void)
{
	/*
addi     r3, r3, -24
b        __dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	*/
}
} // namespace newScreen
} // namespace og
