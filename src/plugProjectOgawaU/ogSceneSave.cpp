#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F318
    lbl_8048F318:
        .4byte 0x73617665
        .4byte 0x206D656E
        .4byte 0x75000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen4Save
    __vt__Q32og9newScreen4Save:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen4SaveFv
        .4byte getOwnerID__Q32og9newScreen4SaveFv
        .4byte getMemberID__Q32og9newScreen4SaveFv
        .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen4SaveCFv
        .4byte doCreateObj__Q32og9newScreen4SaveFP10JKRArchive
        .4byte doUserCallBackFunc__Q32og9newScreen4SaveFPQ28Resource10MgrCommand
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

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DD70
    lbl_8051DD70:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80324DB4
 * Size:	00003C
 */
Save::Save(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q32og9newScreen4Save@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q32og9newScreen4Save@l
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
Save::~Save(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80324DF0
 * Size:	000078
 */
void Save::doUserCallBackFunc(Resource::MgrCommand*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       createInstance__Q33ebi4Save4TMgrFv
	stw      r3, 0x220(r29)
	lwz      r31, 0x220(r29)
	addi     r3, r31, 0x18
	bl       loadResource__Q33ebi6Screen9TSaveMenuFv
	lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r3, r31, 0x100
	mr       r4, r30
	bl       loadResource__Q33ebi6Screen11TMemoryCardFP7JKRHeap
	lwz      r3, sys@sda21(r13)
	mr       r4, r30
	lwz      r3, 0x5c(r3)
	bl       loadResource__Q34Game10MemoryCard3MgrFP7JKRHeap
	mr       r3, r29
	li       r4, 0
	bl       doCreateObjUserCallBackFunc__Q32og9newScreen4SaveFP10JKRArchive
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
 * Address:	80324E68
 * Size:	000030
 */
void Save::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	li       r5, 0
	stw      r0, 0x14(r1)
	li       r6, 0xff
	li       r7, 0xff
	bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80324E98
 * Size:	000068
 */
void Save::doCreateObjUserCallBackFunc(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x48
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80324ED4
	lis      r4, lbl_8048F318@ha
	addi     r4, r4, lbl_8048F318@l
	bl       __ct__Q32og9newScreen7ObjSaveFPCc
	mr       r4, r3

lbl_80324ED4:
	lwz      r0, 0x220(r30)
	mr       r3, r30
	mr       r5, r31
	stw      r0, 0x40(r4)
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
 * Address:	80324F00
 * Size:	000008
 */
void Save::getResName() const
{
	/*
	addi     r3, r2, lbl_8051DD70@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	80324F08
 * Size:	000008
 */
u32 Save::getSceneType(void) { return 0x2725; }

/*
 * --INFO--
 * Address:	80324F10
 * Size:	00000C
 */
void Save::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80324F1C
 * Size:	000010
 */
void Save::getMemberID(void)
{
	/*
	lis      r4, 0x53415645@ha
	li       r3, 0
	addi     r4, r4, 0x53415645@l
	blr
	*/
}
} // namespace newScreen
} // namespace og
