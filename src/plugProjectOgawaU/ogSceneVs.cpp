#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F410
    lbl_8048F410:
        .4byte 0x56732073
        .4byte 0x63726565
        .4byte 0x6E000000
    .global lbl_8048F41C
    lbl_8048F41C:
        .4byte 0x7265735F
        .4byte 0x76732E73
        .4byte 0x7A730000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen2Vs
    __vt__Q32og9newScreen2Vs:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen2VsFv
        .4byte getOwnerID__Q32og9newScreen2VsFv
        .4byte getMemberID__Q32og9newScreen2VsFv
        .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
        .4byte isDrawInDemo__Q32og9newScreen2VsCFv
        .4byte getResName__Q32og9newScreen2VsCFv
        .4byte doCreateObj__Q32og9newScreen2VsFP10JKRArchive
        .4byte doUserCallBackFunc__Q32og9newScreen2VsFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q26Screen9SceneBaseFv
        .4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv
*/

namespace og {

/*
 * --INFO--
 * Address:	80327C5C
 * Size:	00003C
 */
newScreen::Vs::Vs(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q32og9newScreen2Vs@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q32og9newScreen2Vs@l
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
newScreen::Vs::~Vs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80327C98
 * Size:	000004
 */
void newScreen::Vs::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80327C9C
 * Size:	000078
 */
void newScreen::Vs::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x12c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80327CD8
	lis      r4, lbl_8048F410@ha
	addi     r4, r4, lbl_8048F410@l
	bl       __ct__Q32og9newScreen5ObjVsFPCc
	mr       r4, r3

lbl_80327CD8:
	mr       r3, r30
	mr       r5, r31
	bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
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
 * Address:	80327D14
 * Size:	00000C
 */
void newScreen::Vs::getResName() const
{
	/*
	lis      r3, lbl_8048F41C@ha
	addi     r3, r3, lbl_8048F41C@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80327D20
 * Size:	000008
 */
u32 newScreen::Vs::getSceneType(void) { return 0x2712; }

/*
 * --INFO--
 * Address:	80327D28
 * Size:	00000C
 */
void newScreen::Vs::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80327D34
 * Size:	00000C
 */
void newScreen::Vs::getMemberID(void)
{
	/*
	li       r4, 0x5653
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80327D40
 * Size:	000008
 */
u32 newScreen::Vs::isDrawInDemo() const { return 0x0; }
} // namespace og
