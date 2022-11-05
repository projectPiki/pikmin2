#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F510
    lbl_8048F510:
        .4byte 0x696E666F
        .4byte 0x5F77696E
        .4byte 0x646F772E
        .4byte 0x626C6F00

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen15ObjSMenuPauseVS
    __vt__Q32og9newScreen15ObjSMenuPauseVS:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen15ObjSMenuPauseVSFv"
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
   doStart__Q32og9newScreen15ObjSMenuPauseVSFPCQ26Screen13StartSceneArg .4byte
   doEnd__Q32og9newScreen15ObjSMenuPauseVSFPCQ26Screen11EndSceneArg .4byte
   doCreate__Q32og9newScreen15ObjSMenuPauseVSFP10JKRArchive .4byte
   doUpdateFadein__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   doUpdateFadeinFinish__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   doUpdate__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   doUpdateFinish__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   doUpdateFadeout__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   doUpdateFadeoutFinish__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   doDraw__Q32og9newScreen15ObjSMenuPauseVSFR8Graphics .4byte
   doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg .4byte
   in_L__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   in_R__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   wait__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   out_L__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   out_R__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   loop__Q32og9newScreen12ObjSMenuBaseFv .4byte
   doUpdateCancelAction__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   doUpdateRAction__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   doUpdateLAction__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv .4byte
   updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv .4byte
   commonUpdate__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   out_cancel__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   out_menu_0__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   out_menu_1__Q32og9newScreen15ObjSMenuPauseVSFv .4byte
   getResult__Q32og9newScreen15ObjSMenuPauseVSFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DE90
    lbl_8051DE90:
        .4byte 0x00000000
    .global lbl_8051DE94
    lbl_8051DE94:
        .float 0.5
    .global lbl_8051DE98
    lbl_8051DE98:
        .4byte 0x3F19999A
    .global lbl_8051DE9C
    lbl_8051DE9C:
        .4byte 0x3F4CCCCD
    .global lbl_8051DEA0
    lbl_8051DEA0:
        .4byte 0x41700000
        .4byte 0x00000000
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80329190
 * Size:	000080
 */
ObjSMenuPauseVS::ObjSMenuPauseVS(char const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q32og9newScreen12ObjSMenuBaseFv
	lis      r3, __vt__Q32og9newScreen15ObjSMenuPauseVS@ha
	li       r0, 0
	addi     r3, r3, __vt__Q32og9newScreen15ObjSMenuPauseVS@l
	lfs      f0, lbl_8051DE90@sda21(r2)
	stw      r3, 0(r30)
	addi     r4, r3, 0x10
	mr       r3, r30
	stw      r4, 0x18(r30)
	stw      r0, 0xa8(r30)
	stw      r31, 0x14(r30)
	stw      r0, 0xac(r30)
	stw      r0, 0xb0(r30)
	stw      r0, 0xb4(r30)
	stw      r0, 0xb8(r30)
	stw      r0, 0xbc(r30)
	stb      r0, 0xc0(r30)
	stfs     f0, 0xc4(r30)
	stb      r0, 0xc8(r30)
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
 * Address:	80329210
 * Size:	0000C4
 */
ObjSMenuPauseVS::~ObjSMenuPauseVS(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803292B8
	lis      r4, __vt__Q32og9newScreen15ObjSMenuPauseVS@ha
	addi     r4, r4, __vt__Q32og9newScreen15ObjSMenuPauseVS@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_803292A8
	lis      r4, __vt__Q32og9newScreen12ObjSMenuBase@ha
	addi     r4, r4, __vt__Q32og9newScreen12ObjSMenuBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_803292A8
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_803292A8
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

lbl_803292A8:
	extsh.   r0, r31
	ble      lbl_803292B8
	mr       r3, r30
	bl       __dl__FPv

lbl_803292B8:
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
 * Address:	803292D4
 * Size:	000334
 */
void ObjSMenuPauseVS::doCreate(JKRArchive*)
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
	lis      r6, 0x535F5653@ha
	lis      r5, 0x534D5F50@ha
	mr       r29, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x535F5653@l
	addi     r5, r5, 0x534D5F50@l
	bl       getSubMember__Q32og6Screen14DispMemberBaseFUlUx
	stw      r3, 0xa8(r30)
	lwz      r0, 0xa8(r30)
	cmplwi   r0, 0
	bne      lbl_80329384
	li       r3, 0xc
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80329360
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q32og6Screen22DispMemberSMenuPauseVS@ha
	addi     r0, r5, __vt__Q32og6Screen14DispMemberBase@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r4, r4, __vt__Q32og6Screen22DispMemberSMenuPauseVS@l
	li       r0, 1
	stw      r5, 4(r3)
	stw      r4, 0(r3)
	stw      r0, 8(r3)

lbl_80329360:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x535F5653@ha
	lis      r5, 0x534D5F50@ha
	mr       r29, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x535F5653@l
	addi     r5, r5, 0x534D5F50@l
	bl       getSubMember__Q32og6Screen14DispMemberBaseFUlUx
	stw      r3, 0xa8(r30)

lbl_80329384:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x5F414C4C@ha
	mr       r3, r29
	li       r5, 0x534d
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x5F414C4C@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803293BC
	lwz      r0, 0xbc(r29)
	cmpwi    r0, 2
	bne      lbl_803293BC
	li       r0, 1
	stb      r0, 0xc8(r30)

lbl_803293BC:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803293D4
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_803293D4:
	stw      r0, 0xb0(r30)
	lis      r3, lbl_8048F510@ha
	addi     r4, r3, lbl_8048F510@l
	mr       r6, r31
	lwz      r3, 0xb0(r30)
	lis      r5, 0x110
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lis      r5, 0x6E753030@ha
	lis      r4, 0x004E6D65@ha
	lwz      r3, 0xb0(r30)
	addi     r6, r5, 0x6E753030@l
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
	beq      lbl_80329450
	bl       __ct__Q32og6Screen7MenuMgrFv
	mr       r0, r3

lbl_80329450:
	lis      r10, 0x795F6972@ha
	stw      r0, 0xb4(r30)
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
	lwz      r3, 0xb4(r30)
	lwz      r4, 0xb0(r30)
	bl       init2taku__Q32og6Screen7MenuMgrFP9J2DScreenUxUxUxUxUxUxUxUx
	li       r0, 0
	lis      r3, 0x6D303179@ha
	stw      r0, 0xac(r30)
	addi     r6, r3, 0x6D303179@l
	li       r5, 0x54
	lwz      r3, 0xb0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x305F3030@ha
	lis      r4, 0x00363038@ha
	addi     r0, r5, 0x305F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00363038@l
	stw      r0, 0x18(r3)
	lbz      r0, 0xc8(r30)
	cmplwi   r0, 0
	beq      lbl_80329550
	lwz      r3, 0xb0(r30)
	lis      r4, 0x6D30316E@ha
	addi     r6, r4, 0x6D30316E@l
	li       r5, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x325F3030@ha
	lis      r4, 0x00363038@ha
	addi     r0, r5, 0x325F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00363038@l
	stw      r0, 0x18(r3)
	b        lbl_80329588

lbl_80329550:
	lwz      r3, 0xb0(r30)
	lis      r4, 0x6D30316E@ha
	addi     r6, r4, 0x6D30316E@l
	li       r5, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x315F3030@ha
	lis      r4, 0x00363038@ha
	addi     r0, r5, 0x315F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00363038@l
	stw      r0, 0x18(r3)

lbl_80329588:
	lwz      r3, 0xb0(r30)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	lis      r6, 0x6D303179@ha
	lwz      r4, 0xb0(r30)
	mr       r3, r31
	li       r5, 0x54
	addi     r6, r6, 0x6D303179@l
	bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0xb8(r30)
	lis      r6, 0x6D30316E@ha
	mr       r3, r31
	li       r5, 0x54
	lwz      r4, 0xb0(r30)
	addi     r6, r6, 0x6D30316E@l
	bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0xbc(r30)
	lfs      f1, lbl_8051DE94@sda21(r2)
	lwz      r3, 0xb8(r30)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r3, 0xbc(r30)
	lfs      f1, lbl_8051DE98@sda21(r2)
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
 * Address:	80329608
 * Size:	000074
 */
void ObjSMenuPauseVS::blink_Menu(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_8051DE90@sda21(r2)
	cmpwi    r4, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stfs     f0, 8(r1)
	stfs     f0, 0xc(r1)
	blt      lbl_80329648
	cmpwi    r4, 1
	bgt      lbl_80329648
	lfs      f0, lbl_8051DE98@sda21(r2)
	slwi     r0, r4, 2
	addi     r3, r1, 8
	stfsx    f0, r3, r0

lbl_80329648:
	lwz      r3, 0xb8(r31)
	lfs      f1, 8(r1)
	lfs      f2, lbl_8051DE90@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lwz      r3, 0xbc(r31)
	lfs      f1, 0xc(r1)
	lfs      f2, lbl_8051DE90@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032967C
 * Size:	000068
 */
void ObjSMenuPauseVS::commonUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0xb4(r3)
	bl       update__Q32og6Screen7MenuMgrFv
	lfs      f3, 0x40(r31)
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f1, lbl_8051DE90@sda21(r2)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	lwz      r3, 0xb0(r31)
	fadds    f0, f1, f0
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0xb0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803296E4
 * Size:	000060
 */
void ObjSMenuPauseVS::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x38(r30)
	cmpwi    r0, 4
	bne      lbl_80329728
	mr       r3, r30
	bl       menu__Q32og9newScreen15ObjSMenuPauseVSFv
	mr       r31, r3

lbl_80329728:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329744
 * Size:	000230
 */
void ObjSMenuPauseVS::menu(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r3
	lbz      r0, 0xc0(r3)
	cmplwi   r0, 0
	bne      lbl_8032979C
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0xc4(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051DE9C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0xc4(r30)
	lfs      f1, 0xc4(r30)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8032979C
	li       r0, 1
	stb      r0, 0xc0(r30)

lbl_8032979C:
	mr       r3, r30
	bl       getGamePad__Q26Screen7ObjBaseCFv
	lis      r4, 0x08000008@ha
	lwz      r5, 0x1c(r3)
	addi     r0, r4, 0x08000008@l
	and.     r0, r5, r0
	beq      lbl_80329830
	lwz      r3, 0xac(r30)
	cmpwi    r3, 0
	ble      lbl_80329958
	addi     r0, r3, -1
	stw      r0, 0xac(r30)
	lwz      r0, 0xac(r30)
	lwz      r3, 0xb4(r30)
	clrlwi   r4, r0, 0x10
	bl       select__Q32og6Screen7MenuMgrFUs
	lwz      r0, 0xac(r30)
	lfs      f0, lbl_8051DE90@sda21(r2)
	cmpwi    r0, 0
	stfs     f0, 0x10(r1)
	stfs     f0, 0x14(r1)
	blt      lbl_8032980C
	cmpwi    r0, 1
	bgt      lbl_8032980C
	lfs      f0, lbl_8051DE98@sda21(r2)
	slwi     r0, r0, 2
	addi     r3, r1, 0x10
	stfsx    f0, r3, r0

lbl_8032980C:
	lwz      r3, 0xb8(r30)
	lfs      f1, 0x10(r1)
	lfs      f2, lbl_8051DE90@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lwz      r3, 0xbc(r30)
	lfs      f1, 0x14(r1)
	lfs      f2, lbl_8051DE90@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_80329958

lbl_80329830:
	lis      r3, 0x04000004@ha
	addi     r0, r3, 0x04000004@l
	and.     r0, r5, r0
	beq      lbl_803298B8
	lwz      r3, 0xac(r30)
	cmpwi    r3, 1
	bge      lbl_80329958
	addi     r0, r3, 1
	stw      r0, 0xac(r30)
	lwz      r0, 0xac(r30)
	lwz      r3, 0xb4(r30)
	clrlwi   r4, r0, 0x10
	bl       select__Q32og6Screen7MenuMgrFUs
	lwz      r0, 0xac(r30)
	lfs      f0, lbl_8051DE90@sda21(r2)
	cmpwi    r0, 0
	stfs     f0, 8(r1)
	stfs     f0, 0xc(r1)
	blt      lbl_80329894
	cmpwi    r0, 1
	bgt      lbl_80329894
	lfs      f0, lbl_8051DE98@sda21(r2)
	slwi     r0, r0, 2
	addi     r3, r1, 8
	stfsx    f0, r3, r0

lbl_80329894:
	lwz      r3, 0xb8(r30)
	lfs      f1, 8(r1)
	lfs      f2, lbl_8051DE90@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lwz      r3, 0xbc(r30)
	lfs      f1, 0xc(r1)
	lfs      f2, lbl_8051DE90@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_80329958

lbl_803298B8:
	lbz      r0, 0xc0(r30)
	cmplwi   r0, 0
	beq      lbl_80329930
	rlwinm.  r0, r5, 0, 0x17, 0x17
	beq      lbl_80329930
	lwz      r0, 0xac(r30)
	cmpwi    r0, 0
	bne      lbl_803298FC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lwz      r3, ogSound__2og@sda21(r13)
	li       r31, 1
	bl       setDecide__Q22og5SoundFv
	b        lbl_80329924

lbl_803298FC:
	cmpwi    r0, 1
	bne      lbl_80329924
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	lwz      r3, ogSound__2og@sda21(r13)
	li       r31, 1
	bl       setDecide__Q22og5SoundFv

lbl_80329924:
	lwz      r3, 0xb4(r30)
	bl       killCursor__Q32og6Screen7MenuMgrFv
	b        lbl_80329958

lbl_80329930:
	andi.    r0, r5, 0x1200
	beq      lbl_80329958
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r3, ogSound__2og@sda21(r13)
	li       r31, 1
	bl       setClose__Q22og5SoundFv

lbl_80329958:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329974
 * Size:	000038
 */
void ObjSMenuPauseVS::out_cancel(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 2
	lwz      r4, 0xa8(r3)
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
 * Address:	803299AC
 * Size:	000038
 */
void ObjSMenuPauseVS::out_menu_0(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 2
	lwz      r4, 0xa8(r3)
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
 * Address:	803299E4
 * Size:	000038
 */
void ObjSMenuPauseVS::out_menu_1(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 7
	lwz      r4, 0xa8(r3)
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
 * Address:	80329A1C
 * Size:	000010
 */
void ObjSMenuPauseVS::doUpdateCancelAction(void)
{
	/*
	lwz      r3, 0xa8(r3)
	li       r0, 2
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329A2C
 * Size:	000060
 */
void ObjSMenuPauseVS::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0xb0(r3)
	cmplwi   r3, 0
	beq      lbl_80329A74
	lwz      r12, 0(r3)
	addi     r31, r4, 0x190
	mr       r5, r31
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb4(r30)
	mr       r4, r31
	bl       draw__Q32og6Screen7MenuMgrFP14J2DGrafContext

lbl_80329A74:
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
 * Address:	80329A8C
 * Size:	000044
 */
void ObjSMenuPauseVS::doStart(Screen::StartSceneArg const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl start_LR__Q32og9newScreen12ObjSMenuBaseFPCQ26Screen13StartSceneArg li
	r0, 0 lfs      f0, lbl_8051DE90@sda21(r2) stb      r0, 0xc0(r31) li r3,
	1 stfs     f0, 0xc4(r31) lwz      r31, 0xc(r1) lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329AD0
 * Size:	000008
 */
u32 ObjSMenuPauseVS::doEnd(Screen::EndSceneArg const*) { return 0x1; }

/*
 * --INFO--
 * Address:	80329AD8
 * Size:	00004C
 */
void ObjSMenuPauseVS::doUpdateFadein(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329B24
 * Size:	000048
 */
void ObjSMenuPauseVS::doUpdateFadeinFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051DE90@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0xb4(r3)
	bl       startCursor__Q32og6Screen7MenuMgrFf
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329B6C
 * Size:	000048
 */
void ObjSMenuPauseVS::doUpdateFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051DE90@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stfs     f0, 0x44(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb4(r31)
	bl       killCursor__Q32og6Screen7MenuMgrFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329BB4
 * Size:	00004C
 */
void ObjSMenuPauseVS::doUpdateFadeout(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329C00
 * Size:	0000AC
 */
void ObjSMenuPauseVS::doUpdateFadeoutFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	mr       r31, r0
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	beq      lbl_80329C68
	bge      lbl_80329C74
	cmpwi    r3, 2
	beq      lbl_80329C5C
	b        lbl_80329C74

lbl_80329C5C:
	mr       r3, r30
	bl       startBackupScene__Q32og9newScreen12ObjSMenuBaseFv
	b        lbl_80329C74

lbl_80329C68:
	mr       r3, r31
	li       r4, 0
	bl       endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg

lbl_80329C74:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r30
	bl       setFinishState__Q32og9newScreen12ObjSMenuBaseFl
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
 * Address:	80329CAC
 * Size:	00000C
 */
void ObjSMenuPauseVS::getResult(void)
{
	/*
	lwz      r3, 0xa8(r3)
	lwz      r3, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329CB8
 * Size:	000014
 */
void ObjSMenuPauseVS::in_L(void)
{
	/*
	li       r0, 0
	lfs      f0, lbl_8051DEA0@sda21(r2)
	stw      r0, 0x38(r3)
	stfs     f0, 0x4c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329CCC
 * Size:	00000C
 */
void ObjSMenuPauseVS::wait(void)
{
	// Generated from stw r0, 0x38(r3)
	_38 = 4;
}

/*
 * --INFO--
 * Address:	80329CD8
 * Size:	00000C
 */
void ObjSMenuPauseVS::out_L(void)
{
	// Generated from stw r0, 0x38(r3)
	_38 = 2;
}

/*
 * --INFO--
 * Address:	80329CE4
 * Size:	000004
 */
void ObjSMenuPauseVS::doUpdateRAction(void) { }

/*
 * --INFO--
 * Address:	80329CE8
 * Size:	000004
 */
void ObjSMenuPauseVS::doUpdateLAction(void) { }

/*
 * --INFO--
 * Address:	80329CEC
 * Size:	000004
 */
void ObjSMenuPauseVS::in_R(void) { }

/*
 * --INFO--
 * Address:	80329CF0
 * Size:	000004
 */
void ObjSMenuPauseVS::out_R(void) { }

/*
 * --INFO--
 * Address:	80329CF4
 * Size:	000008
 */
@24 @og::newScreen::ObjSMenuPauseVS::~ObjSMenuPauseVS(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q32og9newScreen15ObjSMenuPauseVSFv
	*/
}
} // namespace newScreen
} // namespace og
