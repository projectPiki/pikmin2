#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F338
    lbl_8048F338:
        .4byte 0x4F626A46
        .4byte 0x696E616C
        .4byte 0x4D657373
        .4byte 0x61676520
        .4byte 0x73637265
        .4byte 0x656E0000
    .global lbl_8048F350
    lbl_8048F350:
        .4byte 0x7265735F
        .4byte 0x66696E61
        .4byte 0x6C5F6D65
        .4byte 0x73736167
        .4byte 0x652E737A
        .4byte 0x73000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen8FinalMsg
    __vt__Q32og9newScreen8FinalMsg:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen8FinalMsgFv
        .4byte getOwnerID__Q32og9newScreen8FinalMsgFv
        .4byte getMemberID__Q32og9newScreen8FinalMsgFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen8FinalMsgFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen8FinalMsgCFv
        .4byte doCreateObj__Q32og9newScreen8FinalMsgFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen8FinalMsgFPQ28Resource10MgrCommand .4byte
   setPort__Q26Screen9SceneBaseFR8Graphics .4byte
   doUpdateActive__Q26Screen9SceneBaseFv .4byte
   doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q32og9newScreen8FinalMsgFv
*/

namespace og {

/*
 * --INFO--
 * Address:	803258E8
 * Size:	00003C
 */
newScreen::FinalMsg::FinalMsg(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q32og9newScreen8FinalMsg@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q32og9newScreen8FinalMsg@l
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
 * Size:	000074
 */
newScreen::FinalMsg::~FinalMsg(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80325924
 * Size:	000004
 */
void newScreen::FinalMsg::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80325928
 * Size:	000078
 */
void newScreen::FinalMsg::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x5c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80325964
	lis      r4, lbl_8048F338@ha
	addi     r4, r4, lbl_8048F338@l
	bl       __ct__Q32og9newScreen11ObjFinalMsgFPCc
	mr       r4, r3

lbl_80325964:
	mr       r3, r30
	mr       r5, r31
	bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0xb4
	bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
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
 * Address:	803259A0
 * Size:	000064
 */
void newScreen::FinalMsg::doGetFinishState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4C4D5347@ha
	stw      r0, 0x14(r1)
	lis      r5, 0x46494E41@ha
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4C4D5347@l
	stw      r31, 0xc(r1)
	addi     r5, r5, 0x46494E41@l
	stw      r30, 8(r1)
	li       r30, 0
	lwz      r31, 0x21c(r3)
	mr       r3, r31
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803259E8
	lwz      r30, 8(r31)

lbl_803259E8:
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
 * Address:	80325A04
 * Size:	00000C
 */
void newScreen::FinalMsg::getResName() const
{
	/*
	lis      r3, lbl_8048F350@ha
	addi     r3, r3, lbl_8048F350@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80325A10
 * Size:	000008
 */
u32 newScreen::FinalMsg::getSceneType(void) { return 0x2726; }

/*
 * --INFO--
 * Address:	80325A18
 * Size:	00000C
 */
void newScreen::FinalMsg::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80325A24
 * Size:	000014
 */
void newScreen::FinalMsg::getMemberID(void)
{
	/*
	lis      r4, 0x4C4D5347@ha
	lis      r3, 0x46494E41@ha
	addi     r4, r4, 0x4C4D5347@l
	addi     r3, r3, 0x46494E41@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80325A38
 * Size:	000008
 */
u32 newScreen::FinalMsg::isUseBackupSceneInfo(void) { return 0x1; }
} // namespace og
