#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen22ObjWorldMapInfoWindow1
    __vt__Q32og9newScreen22ObjWorldMapInfoWindow1:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv"
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
        .4byte doStart__Q32og9newScreen22ObjWorldMapInfoWindow1FPCQ26Screen13StartSceneArg
        .4byte doEnd__Q32og9newScreen15ObjSMenuPauseVSFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32og9newScreen22ObjWorldMapInfoWindow1FP10JKRArchive
        .4byte doUpdateFadein__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFadeinFinish__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdate__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFinish__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFadeout__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFadeoutFinish__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte doDraw__Q32og9newScreen15ObjSMenuPauseVSFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte in_L__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte in_R__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte wait__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte out_L__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte out_R__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte loop__Q32og9newScreen12ObjSMenuBaseFv
        .4byte doUpdateCancelAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateRAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateLAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv
        .4byte updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv
        .4byte commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte getResult__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
    .global __vt__Q32og6Screen26DispMemberWorldMapInfoWin1
    __vt__Q32og6Screen26DispMemberWorldMapInfoWin1:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen26DispMemberWorldMapInfoWin1Fv
        .4byte getOwnerID__Q32og6Screen26DispMemberWorldMapInfoWin1Fv
        .4byte getMemberID__Q32og6Screen26DispMemberWorldMapInfoWin1Fv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DF18
    lbl_8051DF18:
        .float 0.5
    .global lbl_8051DF1C
    lbl_8051DF1C:
        .4byte 0x3F19999A
    .global lbl_8051DF20
    lbl_8051DF20:
        .float 0.7
        .4byte 0x00000000
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8032BC48
 * Size:	000080
 */
ObjWorldMapInfoWindow1::ObjWorldMapInfoWindow1(char const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_8048F648@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, lbl_8048F648@l
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r0
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q32og9newScreen15ObjSMenuPauseVSFPCc
	lis      r3, __vt__Q32og9newScreen22ObjWorldMapInfoWindow1@ha
	li       r0, 0
	addi     r4, r3, __vt__Q32og9newScreen22ObjWorldMapInfoWindow1@l
	mr       r3, r30
	stw      r4, 0(r30)
	addi     r4, r4, 0x10
	stw      r4, 0x18(r30)
	stw      r0, 0xcc(r30)
	stw      r31, 0x14(r30)
	stw      r0, 0xac(r30)
	stw      r0, 0xb0(r30)
	stw      r0, 0xb4(r30)
	stw      r0, 0xd0(r30)
	stw      r0, 0xb8(r30)
	stw      r0, 0xbc(r30)
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
 * Address:	8032BCC8
 * Size:	000300
 */
void ObjWorldMapInfoWindow1::doCreate(JKRArchive*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	stw      r29, 0x34(r1)
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x57696E31@ha
	lis      r5, 0x574D6170@ha
	mr       r29, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x57696E31@l
	addi     r5, r5, 0x574D6170@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8032BD18
	stw      r29, 0xcc(r30)

lbl_8032BD18:
	lwz      r0, 0xcc(r30)
	cmplwi   r0, 0
	bne      lbl_8032BD64
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8032BD60
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q32og6Screen26DispMemberWorldMapInfoWin1@ha
	addi     r0, r5, __vt__Q32og6Screen14DispMemberBase@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r4, r4, __vt__Q32og6Screen26DispMemberWorldMapInfoWin1@l
	li       r0, 0xb4
	stw      r5, 4(r3)
	stw      r4, 0(r3)
	stw      r5, 8(r3)
	stb      r0, 0xc(r3)

lbl_8032BD60:
	stw      r3, 0xcc(r30)

lbl_8032BD64:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8032BD7C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8032BD7C:
	stw      r0, 0xb0(r30)
	lis      r3, lbl_8048F65C@ha
	addi     r4, r3, lbl_8048F65C@l
	mr       r6, r31
	lwz      r3, 0xb0(r30)
	lis      r5, 0x110
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lis      r5, 0x6E753031@ha
	lis      r4, 0x004E6D65@ha
	lwz      r3, 0xb0(r30)
	addi     r6, r5, 0x6E753031@l
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	lis      r5, 0x6E753032@ha
	stb      r0, 0xb0(r3)
	lis      r4, 0x004E6D65@ha
	addi     r6, r5, 0x6E753032@l
	lwz      r3, 0xb0(r30)
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	stb      r0, 0xb0(r3)
	lwz      r3, 0xb0(r30)
	bl       setFurikoScreen__Q22og6ScreenFPQ29P2DScreen3Mgr
	li       r3, 0x78
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8032BDF8
	bl       __ct__Q32og6Screen7MenuMgrFv
	mr       r0, r3

lbl_8032BDF8:
	lis      r10, 0x795F6972@ha
	stw      r0, 0xb4(r30)
	addi     r0, r10, 0x795F6972@l
	lis      r4, 0x6D303079@ha
	lis      r3, 0x506D3030@ha
	stw      r0, 0xc(r1)
	addi     r9, r3, 0x506D3030@l
	addi     r6, r4, 0x6D303079@l
	stw      r9, 8(r1)
	addi     r7, r4, 0x306e
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
	lwz      r3, 0xb4(r30)
	lwz      r4, 0xb0(r30)
	bl       init2takuTitle__Q32og6Screen7MenuMgrFP9J2DScreenUxUxUxUxUxUxUxUx
	li       r0, 0
	lis      r3, 0x6D303071@ha
	stw      r0, 0xac(r30)
	addi     r6, r3,0x6D303071@l
	li       r5, 0x54
	lwz      r3, 0xb0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x325F3030@ha
	lis      r5, 0x00343731@ha
	addi     r0, r4, 0x325F3030@l
	lis      r4, 0x6D303079@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00343731@l
	addi     r6, r4, 0x6D303079@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0xb0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x335F3030@ha
	lis      r5, 0x00343731@ha
	addi     r0, r4, 0x335F3030@l
	lis      r4, 0x6D30306E@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00343731@l
	addi     r6, r4, 0x6D30306E@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0xb0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x345F3030@ha
	lis      r4, 0x00343731@ha
	addi     r0, r5, 0x345F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00343731@l
	stw      r0, 0x18(r3)
	lwz      r3, 0xb0(r30)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	lis      r6, 0x6D303071@ha
	lwz      r4, 0xb0(r30)
	mr       r3, r31
	li       r5, 0x54
	addi     r6, r6, 0x6D303071@l
	bl       setMenuTitleScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0xd0(r30)
	lis      r6, 0x6D303079@ha
	mr       r3, r31
	li       r5, 0x54
	lwz      r4, 0xb0(r30)
	addi     r6, r6, 0x6D303079@l
	bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0xb8(r30)
	lis      r6, 0x6D30306E@ha
	mr       r3, r31
	li       r5, 0x54
	lwz      r4, 0xb0(r30)
	addi     r6, r6, 0x6D30306E@l
	bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0xbc(r30)
	lfs      f1, lbl_8051DF18@sda21(r2)
	lwz      r3, 0xd0(r30)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r3, 0xb8(r30)
	lfs      f1, lbl_8051DF1C@sda21(r2)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r3, 0xbc(r30)
	lfs      f1, lbl_8051DF20@sda21(r2)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r4, 0xac(r30)
	mr       r3, r30
	bl       blink_Menu__Q32og9newScreen15ObjSMenuPauseVSFi
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032BFC8
 * Size:	00005C
 */
void ObjWorldMapInfoWindow1::doStart(Screen::StartSceneArg const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
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
	bl       start_LR__Q32og9newScreen12ObjSMenuBaseFPCQ26Screen13StartSceneArg
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
 * Address:	8032C024
 * Size:	000020
 */
void ObjWorldMapInfoWindow1::commonUpdate(void)
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
 * Address:	8032C044
 * Size:	000038
 */
void ObjWorldMapInfoWindow1::out_cancel(void)
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
 * Address:	8032C07C
 * Size:	000038
 */
void ObjWorldMapInfoWindow1::out_menu_0(void)
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
 * Address:	8032C0B4
 * Size:	000038
 */
void ObjWorldMapInfoWindow1::out_menu_1(void)
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
 * Address:	8032C0EC
 * Size:	00000C
 */
void ObjWorldMapInfoWindow1::out_L(void)
{
	// Generated from stw r0, 0x38(r3)
	_38 = 2;
}

/*
 * --INFO--
 * Address:	8032C0F8
 * Size:	00006C
 */
void ObjWorldMapInfoWindow1::doUpdateFadeoutFinish(void)
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
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032C164
 * Size:	00000C
 */
void ObjWorldMapInfoWindow1::getResult(void)
{
	/*
	lwz      r3, 0xcc(r3)
	lwz      r3, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032C170
 * Size:	000068
 */
ObjWorldMapInfoWindow1::~ObjWorldMapInfoWindow1(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8032C1BC
	lis      r5, __vt__Q32og9newScreen22ObjWorldMapInfoWindow1@ha
	li       r4, 0
	addi     r5, r5, __vt__Q32og9newScreen22ObjWorldMapInfoWindow1@l
	stw      r5, 0(r30)
	addi     r0, r5, 0x10
	stw      r0, 0x18(r30)
	bl       __dt__Q32og9newScreen15ObjSMenuPauseVSFv
	extsh.   r0, r31
	ble      lbl_8032C1BC
	mr       r3, r30
	bl       __dl__FPv

lbl_8032C1BC:
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
 * Address:	8032C1D8
 * Size:	000008
 */
u32 DispMemberWorldMapInfoWin1::getSize(void) { return 0x10; }

/*
 * --INFO--
 * Address:	8032C1E0
 * Size:	00000C
 */
void DispMemberWorldMapInfoWin1::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8032C1EC
 * Size:	000014
 */
void DispMemberWorldMapInfoWin1::getMemberID(void)
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
 * Address:	8032C200
 * Size:	000008
 */
@24 @og::newScreen::ObjWorldMapInfoWindow1::~ObjWorldMapInfoWindow1(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
	*/
}
} // namespace newScreen
} // namespace og
