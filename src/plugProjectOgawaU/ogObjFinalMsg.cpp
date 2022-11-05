#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F328
    lbl_8048F328:
        .4byte 0x696E666F
        .4byte 0x5F77696E
        .4byte 0x646F772E
        .4byte 0x626C6F00

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen11ObjFinalMsg
    __vt__Q32og9newScreen11ObjFinalMsg:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen11ObjFinalMsgFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen11ObjFinalMsgFv"
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
        .4byte doStart__Q32og9newScreen11ObjFinalMsgFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q32og9newScreen11ObjFinalMsgFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32og9newScreen11ObjFinalMsgFP10JKRArchive
        .4byte doUpdateFadein__Q32og9newScreen11ObjFinalMsgFv
        .4byte doUpdateFadeinFinish__Q32og9newScreen11ObjFinalMsgFv
        .4byte doUpdate__Q32og9newScreen11ObjFinalMsgFv
        .4byte doUpdateFinish__Q32og9newScreen11ObjFinalMsgFv
        .4byte doUpdateFadeout__Q32og9newScreen11ObjFinalMsgFv
        .4byte doUpdateFadeoutFinish__Q32og9newScreen11ObjFinalMsgFv
        .4byte doDraw__Q32og9newScreen11ObjFinalMsgFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DD78
    lbl_8051DD78:
        .4byte 0x00000000
    .global lbl_8051DD7C
    lbl_8051DD7C:
        .4byte 0x3F19999A
    .global lbl_8051DD80
    lbl_8051DD80:
        .4byte 0x44480000
    .global lbl_8051DD84
    lbl_8051DD84:
        .float 1.0
    .global lbl_8051DD88
    lbl_8051DD88:
        .4byte 0xC4480000
    .global lbl_8051DD8C
    lbl_8051DD8C:
        .float 0.1
    .global lbl_8051DD90
    lbl_8051DD90:
        .4byte 0x3E4CCCCD
        .4byte 0x00000000
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80324F2C
 * Size:	000080
 */
ObjFinalMsg::ObjFinalMsg(char const*)
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
	lis      r3, __vt__Q32og9newScreen11ObjFinalMsg@ha
	li       r0, 0
	addi     r3, r3, __vt__Q32og9newScreen11ObjFinalMsg@l
	lfs      f0, lbl_8051DD78@sda21(r2)
	stw      r3, 0(r30)
	addi     r4, r3, 0x10
	mr       r3, r30
	stw      r4, 0x18(r30)
	stw      r0, 0x38(r30)
	stw      r31, 0x14(r30)
	stw      r0, 0x3c(r30)
	stw      r0, 0x40(r30)
	stw      r0, 0x44(r30)
	stw      r0, 0x48(r30)
	stw      r0, 0x4c(r30)
	stw      r0, 0x50(r30)
	stfs     f0, 0x58(r30)
	stfs     f0, 0x54(r30)
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
 * Address:	80324FAC
 * Size:	0000AC
 */
ObjFinalMsg::~ObjFinalMsg(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8032503C
	lis      r4, __vt__Q32og9newScreen11ObjFinalMsg@ha
	addi     r4, r4, __vt__Q32og9newScreen11ObjFinalMsg@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_8032502C
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_8032502C
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

lbl_8032502C:
	extsh.   r0, r31
	ble      lbl_8032503C
	mr       r3, r30
	bl       __dl__FPv

lbl_8032503C:
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
 * Address:	80325058
 * Size:	0002CC
 */
void ObjFinalMsg::doCreate(JKRArchive*)
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
	lis      r6, 0x4C4D5347@ha
	lis      r5, 0x46494E41@ha
	mr       r29, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4C4D5347@l
	addi     r5, r5, 0x46494E41@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803250AC
	stw      r29, 0x38(r30)
	b        lbl_803250E4

lbl_803250AC:
	li       r3, 0xc
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_803250E0
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q32og6Screen22DispMemberFinalMessage@ha
	addi     r0, r5, __vt__Q32og6Screen14DispMemberBase@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q32og6Screen22DispMemberFinalMessage@l
	stw      r5, 4(r3)
	stw      r0, 0(r3)
	stw      r5, 8(r3)

lbl_803250E0:
	stw      r3, 0x38(r30)

lbl_803250E4:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803250FC
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_803250FC:
	stw      r0, 0x40(r30)
	lis      r3, lbl_8048F328@ha
	addi     r4, r3, lbl_8048F328@l
	mr       r6, r31
	lwz      r3, 0x40(r30)
	lis      r5, 0x110
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lis      r5, 0x6E753031@ha
	lis      r4, 0x004E6D65@ha
	lwz      r3, 0x40(r30)
	addi     r6, r5, 0x6E753031@l
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	lis      r5, 0x6E753032@ha
	stb      r0, 0xb0(r3)
	lis      r4, 0x004E6D65@ha
	addi     r6, r5, 0x6E753032@l
	lwz      r3, 0x40(r30)
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	stb      r0, 0xb0(r3)
	lwz      r3, 0x40(r30)
	bl       setFurikoScreen__Q22og6ScreenFPQ29P2DScreen3Mgr
	li       r3, 0x78
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80325178
	bl       __ct__Q32og6Screen7MenuMgrFv
	mr       r0, r3

lbl_80325178:
	lis      r10, 0x795F6972@ha
	stw      r0, 0x44(r30)
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
	lwz      r3, 0x44(r30)
	lwz      r4, 0x40(r30)
	bl init2takuTitle__Q32og6Screen7MenuMgrFP9J2DScreenUxUxUxUxUxUxUxUx li
r0, 0 lis      r3, 0x6D303071@ha stw      r0, 0x3c(r30) addi     r6, r3,
0x6D303071@l li       r5, 0x54 lwz      r3, 0x40(r30) lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x305F3030@ha
	lis      r5, 0x00383438@ha
	addi     r0, r4, 0x305F3030@l
	lis      r4, 0x6D303079@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383438@l
	addi     r6, r4, 0x6D303079@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x40(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x315F3030@ha
	lis      r5, 0x00383438@ha
	addi     r0, r4, 0x315F3030@l
	lis      r4, 0x6D30306E@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383438@l
	addi     r6, r4, 0x6D30306E@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x40(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x325F3030@ha
	lis      r4, 0x00383438@ha
	addi     r0, r5, 0x325F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383438@l
	stw      r0, 0x18(r3)
	lwz      r3, 0x40(r30)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	lis      r6, 0x6D303071@ha
	lwz      r4, 0x40(r30)
	mr       r3, r31
	li       r5, 0x54
	addi     r6, r6, 0x6D303071@l
	bl setMenuTitleScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx stw
r3, 0x48(r30) lis      r6, 0x6D303079@ha mr       r3, r31 li       r5, 0x54
	lwz      r4, 0x40(r30)
	addi     r6, r6, 0x6D303079@l
	bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0x4c(r30)
	lis      r6, 0x6D30306E@ha
	mr       r3, r31
	li       r5, 0x54
	lwz      r4, 0x40(r30)
	addi     r6, r6, 0x6D30306E@l
	bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0x50(r30)
	mr       r3, r30
	lwz      r4, 0x3c(r30)
	bl       blink_Menu__Q32og9newScreen11ObjFinalMsgFi
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
 * Address:	80325324
 * Size:	000070
 */
void ObjFinalMsg::blink_Menu(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	cmpwi    r4, 0
	mr       r31, r3
	bne      lbl_80325354
	lfs      f1, lbl_8051DD7C@sda21(r2)
	lfs      f31, lbl_8051DD78@sda21(r2)
	b        lbl_8032535C

lbl_80325354:
	lfs      f1, lbl_8051DD78@sda21(r2)
	lfs      f31, lbl_8051DD7C@sda21(r2)

lbl_8032535C:
	lwz      r3, 0x4c(r31)
	lfs      f2, lbl_8051DD78@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	fmr      f1, f31
	lwz      r3, 0x50(r31)
	lfs      f2, lbl_8051DD78@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void ObjFinalMsg::commonUpdate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80325394
 * Size:	000068
 */
void ObjFinalMsg::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f1, lbl_8051DD78@sda21(r2)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f3, 0x54(r3)
	lwz      r3, 0x40(r3)
	fadds    f0, f1, f0
	fadds    f2, f3, f2
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0x40(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       menu__Q32og9newScreen11ObjFinalMsgFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803253FC
 * Size:	0001C0
 */
void ObjFinalMsg::menu(void)
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
	mr       r30, r3
	li       r31, 0
	bl       getGamePad__Q26Screen7ObjBaseCFv
	mr       r29, r3
	lwz      r3, 0x44(r30)
	bl       update__Q32og6Screen7MenuMgrFv
	lis      r3, 0x08000008@ha
	lwz      r4, 0x1c(r29)
	addi     r0, r3, 0x08000008@l
	and.     r0, r4, r0
	beq      lbl_803254AC
	lwz      r3, 0x3c(r30)
	cmpwi    r3, 0
	ble      lbl_80325594
	addi     r0, r3, -1
	stw      r0, 0x3c(r30)
	lwz      r0, 0x3c(r30)
	lwz      r3, 0x44(r30)
	clrlwi   r4, r0, 0x10
	bl       select__Q32og6Screen7MenuMgrFUs
	lwz      r0, 0x3c(r30)
	cmpwi    r0, 0
	bne      lbl_80325484
	lfs      f1, lbl_8051DD7C@sda21(r2)
	lfs      f31, lbl_8051DD78@sda21(r2)
	b        lbl_8032548C

lbl_80325484:
	lfs      f1, lbl_8051DD78@sda21(r2)
	lfs      f31, lbl_8051DD7C@sda21(r2)

lbl_8032548C:
	lwz      r3, 0x4c(r30)
	lfs      f2, lbl_8051DD78@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	fmr      f1, f31
	lwz      r3, 0x50(r30)
	lfs      f2, lbl_8051DD78@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_80325594

lbl_803254AC:
	lis      r3, 0x04000004@ha
	addi     r0, r3, 0x04000004@l
	and.     r0, r4, r0
	beq      lbl_80325520
	lwz      r3, 0x3c(r30)
	cmpwi    r3, 1
	bge      lbl_80325594
	addi     r0, r3, 1
	stw      r0, 0x3c(r30)
	lwz      r0, 0x3c(r30)
	lwz      r3, 0x44(r30)
	clrlwi   r4, r0, 0x10
	bl       select__Q32og6Screen7MenuMgrFUs
	lwz      r0, 0x3c(r30)
	cmpwi    r0, 0
	bne      lbl_803254F8
	lfs      f1, lbl_8051DD7C@sda21(r2)
	lfs      f31, lbl_8051DD78@sda21(r2)
	b        lbl_80325500

lbl_803254F8:
	lfs      f1, lbl_8051DD78@sda21(r2)
	lfs      f31, lbl_8051DD7C@sda21(r2)

lbl_80325500:
	lwz      r3, 0x4c(r30)
	lfs      f2, lbl_8051DD78@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	fmr      f1, f31
	lwz      r3, 0x50(r30)
	lfs      f2, lbl_8051DD78@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_80325594

lbl_80325520:
	rlwinm.  r0, r4, 0, 0x17, 0x17
	beq      lbl_80325574
	lwz      r0, 0x3c(r30)
	cmpwi    r0, 0
	bne      lbl_80325550
	lwz      r3, 0x38(r30)
	li       r0, 1
	li       r31, 1
	stw      r0, 8(r3)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setDecide__Q22og5SoundFv
	b        lbl_80325594

lbl_80325550:
	cmpwi    r0, 1
	bne      lbl_80325594
	lwz      r3, 0x38(r30)
	li       r0, 2
	li       r31, 1
	stw      r0, 8(r3)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setDecide__Q22og5SoundFv
	b        lbl_80325594

lbl_80325574:
	rlwinm.  r0, r4, 0, 0x16, 0x16
	beq      lbl_80325594
	lwz      r3, 0x38(r30)
	li       r0, 2
	li       r31, 1
	stw      r0, 8(r3)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setClose__Q22og5SoundFv

lbl_80325594:
	mr       r3, r31
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803255BC
 * Size:	000060
 */
void ObjFinalMsg::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x40(r3)
	cmplwi   r3, 0
	beq      lbl_80325604
	lwz      r12, 0(r3)
	addi     r31, r4, 0x190
	mr       r5, r31
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r30)
	mr       r4, r31
	bl       draw__Q32og6Screen7MenuMgrFP14J2DGrafContext

lbl_80325604:
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
 * Address:	8032561C
 * Size:	000060
 */
void ObjFinalMsg::doStart(Screen::StartSceneArg const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, 0x6B6F3030@ha
	lis      r4, 0x66757269@ha
	stw      r0, 0x14(r1)
	addi     r6, r5, 0x6B6F3030@l
	addi     r5, r4, 0x66757269@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x40(r3)
	bl       getFurikoPtr__Q22og6ScreenFPQ29P2DScreen3MgrUx
	bl       stop__Q32og6Screen15CallBack_FurikoFv
	lfs      f1, lbl_8051DD80@sda21(r2)
	lfs      f0, lbl_8051DD78@sda21(r2)
	stfs     f1, 0x54(r31)
	stfs     f0, 0x58(r31)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setOpenFinalMsg__Q22og5SoundFv
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
 * Address:	8032567C
 * Size:	000008
 */
u32 ObjFinalMsg::doEnd(Screen::EndSceneArg const*) { return 0x1; }

/*
 * --INFO--
 * Address:	80325684
 * Size:	0000B8
 */
void ObjFinalMsg::doUpdateFadein(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f1, lbl_8051DD78@sda21(r2)
	stw      r31, 0xc(r1)
	li       r31, 0
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stw      r30, 8(r1)
	mr       r30, r3
	fadds    f0, f1, f0
	lfs      f3, 0x54(r3)
	lwz      r3, 0x40(r3)
	fadds    f2, f3, f2
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0x40(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r4, sys@sda21(r13)
	lis      r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lfs      f1, 0x58(r30)
	addi     r3, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x58(r30)
	lfs      f1, 0x58(r30)
	lfs      f2, 8(r3)
	fcmpo    cr0, f1, f2
	ble      lbl_80325708
	li       r31, 1

lbl_80325708:
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f2, lbl_8051DD84@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_8051DD80@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x54(r30)
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
 * Address:	8032573C
 * Size:	00003C
 */
void ObjFinalMsg::doUpdateFadeinFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051DD78@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x44(r3)
	bl       startCursor__Q32og6Screen7MenuMgrFf
	mr       r3, r31
	bl       wait__Q32og9newScreen11ObjFinalMsgFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80325778
 * Size:	000038
 */
void ObjFinalMsg::doUpdateFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x44(r3)
	bl       killCursor__Q32og6Screen7MenuMgrFv
	lfs      f0, lbl_8051DD78@sda21(r2)
	stfs     f0, 0x58(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803257B0
 * Size:	0000B0
 */
void ObjFinalMsg::doUpdateFadeout(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f1, lbl_8051DD78@sda21(r2)
	stw      r31, 0xc(r1)
	li       r31, 0
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stw      r30, 8(r1)
	mr       r30, r3
	fadds    f0, f1, f0
	lfs      f3, 0x54(r3)
	lwz      r3, 0x40(r3)
	fadds    f2, f3, f2
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0x40(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r4, sys@sda21(r13)
	lis      r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lfs      f1, 0x58(r30)
	addi     r3, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x58(r30)
	lfs      f1, 0x58(r30)
	lfs      f2, 8(r3)
	fcmpo    cr0, f1, f2
	ble      lbl_80325834
	li       r31, 1

lbl_80325834:
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f0, lbl_8051DD88@sda21(r2)
	mr       r3, r31
	fmuls    f0, f0, f1
	stfs     f0, 0x54(r30)
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
 * Address:	80325860
 * Size:	000034
 */
void ObjFinalMsg::doUpdateFadeoutFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80325894
 * Size:	00004C
 */
void ObjFinalMsg::wait(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051DD78@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x48(r3)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r3, 0x4c(r31)
	lfs      f1, lbl_8051DD8C@sda21(r2)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r3, 0x50(r31)
	lfs      f1, lbl_8051DD90@sda21(r2)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803258E0
 * Size:	000008
 */
@24 @og::newScreen::ObjFinalMsg::~ObjFinalMsg(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q32og9newScreen11ObjFinalMsgFv
	*/
}
} // namespace newScreen
} // namespace og
