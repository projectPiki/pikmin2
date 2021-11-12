#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048EDB8
    lbl_8048EDB8:
        .4byte 0x63617665
        .4byte 0x20736372
        .4byte 0x65656E00
    .global lbl_8048EDC4
    lbl_8048EDC4:
        .4byte 0x7265735F
        .4byte 0x63617665
        .4byte 0x2E737A73
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen4Cave
    __vt__Q32og9newScreen4Cave:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen4CaveFv
        .4byte getOwnerID__Q32og9newScreen4CaveFv
        .4byte getMemberID__Q32og9newScreen4CaveFv
        .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
        .4byte isDrawInDemo__Q32og9newScreen4CaveCFv
        .4byte getResName__Q32og9newScreen4CaveCFv
        .4byte doCreateObj__Q32og9newScreen4CaveFP10JKRArchive
        .4byte doUserCallBackFunc__Q32og9newScreen4CaveFPQ28Resource10MgrCommand
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
 * Address:	8031CC90
 * Size:	00003C
 */
newScreen::Cave::Cave(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q32og9newScreen4Cave@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q32og9newScreen4Cave@l
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
newScreen::Cave::~Cave(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031CCCC
 * Size:	000004
 */
void newScreen::Cave::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	8031CCD0
 * Size:	000078
 */
void newScreen::Cave::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x7c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8031CD0C
	lis      r4, lbl_8048EDB8@ha
	addi     r4, r4, lbl_8048EDB8@l
	bl       __ct__Q32og9newScreen7ObjCaveFPCc
	mr       r4, r3

lbl_8031CD0C:
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
 * Address:	8031CD48
 * Size:	00000C
 */
void newScreen::Cave::getResName() const
{
	/*
	lis      r3, lbl_8048EDC4@ha
	addi     r3, r3, lbl_8048EDC4@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031CD54
 * Size:	000008
 */
u32 newScreen::Cave::getSceneType(void) { return 0x2711; }

/*
 * --INFO--
 * Address:	8031CD5C
 * Size:	00000C
 */
void newScreen::Cave::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031CD68
 * Size:	000010
 */
void newScreen::Cave::getMemberID(void)
{
	/*
	lis      r4, 0x43415645@ha
	li       r3, 0
	addi     r4, r4, 0x43415645@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031CD78
 * Size:	000008
 */
u32 newScreen::Cave::isDrawInDemo() const { return 0x0; }
} // namespace og
