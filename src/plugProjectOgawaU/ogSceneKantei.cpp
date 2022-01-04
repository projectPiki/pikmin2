#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048EAB8
    lbl_8048EAB8:
        .4byte 0x6B616E74
        .4byte 0x65692073
        .4byte 0x63726565
        .4byte 0x6E000000
    .global lbl_8048EAC8
    lbl_8048EAC8:
        .4byte 0x7265735F
        .4byte 0x6B616E74
        .4byte 0x65692E73
        .4byte 0x7A730000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen10KanteiDemo
    __vt__Q32og9newScreen10KanteiDemo:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen10KanteiDemoFv
        .4byte getOwnerID__Q32og9newScreen10KanteiDemoFv
        .4byte getMemberID__Q32og9newScreen10KanteiDemoFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen10KanteiDemoFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen10KanteiDemoCFv
        .4byte doCreateObj__Q32og9newScreen10KanteiDemoFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen10KanteiDemoFPQ28Resource10MgrCommand
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

namespace newScreen {

/*
 * --INFO--
 * Address:	80319BDC
 * Size:	000044
 */
KanteiDemo::KanteiDemo(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r3, __vt__Q32og9newScreen10KanteiDemo@ha
	li       r0, 0
	addi     r4, r3, __vt__Q32og9newScreen10KanteiDemo@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x220(r31)
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
KanteiDemo::~KanteiDemo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80319C20
 * Size:	000004
 */
void KanteiDemo::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80319C24
 * Size:	000068
 */
void KanteiDemo::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0xf8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80319C60
	lis      r4, lbl_8048EAB8@ha
	addi     r4, r4, lbl_8048EAB8@l
	bl       __ct__Q32og9newScreen9ObjKanteiFPCc
	mr       r0, r3

lbl_80319C60:
	stw      r0, 0x220(r30)
	mr       r3, r30
	mr       r5, r31
	lwz      r4, 0x220(r30)
	bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
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
 * Address:	80319C8C
 * Size:	00000C
 */
void KanteiDemo::getResName() const
{
	/*
	lis      r3, lbl_8048EAC8@ha
	addi     r3, r3, lbl_8048EAC8@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80319C98
 * Size:	000008
 */
u32 KanteiDemo::getSceneType(void) { return 0x2722; }

/*
 * --INFO--
 * Address:	80319CA0
 * Size:	00000C
 */
void KanteiDemo::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80319CAC
 * Size:	000010
 */
void KanteiDemo::getMemberID(void)
{
	/*
	lis      r4, 0x4E544549@ha
	li       r3, 0x4b41
	addi     r4, r4, 0x4E544549@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80319CBC
 * Size:	000008
 */
u32 KanteiDemo::isUseBackupSceneInfo(void) { return 0x1; }
} // namespace newScreen
} // namespace og
