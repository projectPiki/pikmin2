#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F140
    lbl_8048F140:
        .4byte 0x636F6E74
        .4byte 0x656E6120
        .4byte 0x73637265
        .4byte 0x656E0000
    .global lbl_8048F150
    lbl_8048F150:
        .4byte 0x7265735F
        .4byte 0x636F6E74
        .4byte 0x656E612E
        .4byte 0x737A7300

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen7Contena
    __vt__Q32og9newScreen7Contena:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen7ContenaFv
        .4byte getOwnerID__Q32og9newScreen7ContenaFv
        .4byte getMemberID__Q32og9newScreen7ContenaFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen7ContenaFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen7ContenaCFv
        .4byte doCreateObj__Q32og9newScreen7ContenaFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen7ContenaFPQ28Resource10MgrCommand .4byte
   setPort__Q26Screen9SceneBaseFR8Graphics .4byte
   doUpdateActive__Q26Screen9SceneBaseFv .4byte
   doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
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
	 * Address:	80321F08
	 * Size:	000044
	 */
	Contena::Contena(void)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r3
		bl       __ct__Q26Screen9SceneBaseFv
		lis      r3, __vt__Q32og9newScreen7Contena@ha
		li       r0, 0x2714
		addi     r4, r3, __vt__Q32og9newScreen7Contena@l
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
	Contena::~Contena(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80321F4C
	 * Size:	000004
	 */
	void Contena::doUserCallBackFunc(Resource::MgrCommand*) { }

	/*
	 * --INFO--
	 * Address:	80321F50
	 * Size:	000100
	 */
	void Contena::doCreateObj(JKRArchive*)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r3
		li       r3, 0x170
		stw      r30, 8(r1)
		mr       r30, r4
		bl       __nw__FUl
		or.      r4, r3, r3
		beq      lbl_80321F8C
		lis      r4, lbl_8048F140@ha
		addi     r4, r4, lbl_8048F140@l
		bl       __ct__Q32og9newScreen10ObjContenaFPCc
		mr       r4, r3

	lbl_80321F8C:
		mr       r3, r31
		mr       r5, r30
		bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
		lwz      r30, 0x21c(r31)
		lis      r4, 0x004F4741@ha
		lis      r6, 0x54454E41@ha
		lis      r5, 0x00434F4E@ha
		mr       r3, r30
		addi     r4, r4, 0x004F4741@l
		addi     r6, r6, 0x54454E41@l
		addi     r5, r5, 0x00434F4E@l
		bl       isID__Q32og6Screen14DispMemberBaseFUlUx
		clrlwi.  r0, r3, 0x18
		beq      lbl_80321FD0
		li       r0, 0x2714
		stw      r0, 0x220(r31)
		b        lbl_80322020

	lbl_80321FD0:
		lis      r4, 0x004F4741@ha
		lis      r6, 0x4D454E55@ha
		lis      r5, 0x0055464F@ha
		mr       r3, r30
		addi     r4, r4, 0x004F4741@l
		addi     r6, r6, 0x4D454E55@l
		addi     r5, r5, 0x0055464F@l
		bl       getSubMember__Q32og6Screen14DispMemberBaseFUlUx
		lwz      r0, 8(r3)
		cmpwi    r0, 2
		beq      lbl_80322018
		bge      lbl_80322020
		cmpwi    r0, 1
		bge      lbl_8032200C
		b        lbl_80322020

	lbl_8032200C:
		li       r0, 0x2717
		stw      r0, 0x220(r31)
		b        lbl_80322020

	lbl_80322018:
		li       r0, 0x2718
		stw      r0, 0x220(r31)

	lbl_80322020:
		mr       r3, r31
		li       r4, 0
		li       r5, 0
		li       r6, 0
		li       r7, 0xa0
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
	 * Address:	80322050
	 * Size:	00000C
	 */
	void Contena::getResName() const
	{
		/*
		lis      r3, lbl_8048F150@ha
		addi     r3, r3, lbl_8048F150@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032205C
	 * Size:	000008
	 */
	void Contena::getSceneType(void)
	{
		/*
		lwz      r3, 0x220(r3)
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80322064
	 * Size:	00000C
	 */
	void Contena::getOwnerID(void)
	{
		/*
		lis      r3, 0x004F4741@ha
		addi     r3, r3, 0x004F4741@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80322070
	 * Size:	000014
	 */
	void Contena::getMemberID(void)
	{
		/*
		lis      r4, 0x54454E41@ha
		lis      r3, 0x00434F4E@ha
		addi     r4, r4, 0x54454E41@l
		addi     r3, r3, 0x00434F4E@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80322084
	 * Size:	000008
	 */
	u32 Contena::isUseBackupSceneInfo(void) { return 0x1; }
} // namespace newScreen
} // namespace og
