#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F2C8
    lbl_8048F2C8:
        .4byte 0x75666F20
        .4byte 0x6D656E75
        .4byte 0x20736372
        .4byte 0x65656E00
    .global lbl_8048F2D8
    lbl_8048F2D8:
        .4byte 0x7265735F
        .4byte 0x75666F2E
        .4byte 0x737A7300

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen7UfoMenu
    __vt__Q32og9newScreen7UfoMenu:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen7UfoMenuFv
        .4byte getOwnerID__Q32og9newScreen7UfoMenuFv
        .4byte getMemberID__Q32og9newScreen7UfoMenuFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen7UfoMenuFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen7UfoMenuCFv
        .4byte doCreateObj__Q32og9newScreen7UfoMenuFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen7UfoMenuFPQ28Resource10MgrCommand .4byte
   setPort__Q26Screen9SceneBaseFR8Graphics .4byte
   doUpdateActive__Q26Screen9SceneBaseFv .4byte
   doConfirmSetScene__Q32og9newScreen7UfoMenuFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q32og9newScreen7UfoMenuFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv
*/

namespace og {

namespace newScreen {

	/*
	 * --INFO--
	 * Address:	803248F4
	 * Size:	00003C
	 */
	UfoMenu::UfoMenu(void)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r3
		bl       __ct__Q26Screen9SceneBaseFv
		lis      r4, __vt__Q32og9newScreen7UfoMenu@ha
		mr       r3, r31
		addi     r0, r4, __vt__Q32og9newScreen7UfoMenu@l
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
	UfoMenu::~UfoMenu(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80324930
	 * Size:	000004
	 */
	void UfoMenu::doUserCallBackFunc(Resource::MgrCommand*) { }

	/*
	 * --INFO--
	 * Address:	80324934
	 * Size:	000078
	 */
	void UfoMenu::doCreateObj(JKRArchive*)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r4
		stw      r30, 8(r1)
		mr       r30, r3
		li       r3, 0x90
		bl       __nw__FUl
		or.      r4, r3, r3
		beq      lbl_80324970
		lis      r4, lbl_8048F2C8@ha
		addi     r4, r4, lbl_8048F2C8@l
		bl       __ct__Q32og9newScreen10ObjUfoMenuFPCc
		mr       r4, r3

	lbl_80324970:
		mr       r3, r30
		mr       r5, r31
		bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
		mr       r3, r30
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
	 * Address:	803249AC
	 * Size:	000060
	 */
	void UfoMenu::doConfirmSetScene(Screen::SetSceneArg&)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		mr       r3, r4
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		li       r31, 0
		lwz      r12, 0(r4)
		lwz      r12, 8(r12)
		mtctr    r12
		bctrl
		cmpwi    r3, 0x2717
		bge      lbl_803249E8
		cmpwi    r3, 0x2710
		beq      lbl_803249F0
		b        lbl_803249F4

	lbl_803249E8:
		cmpwi    r3, 0x2719
		bge      lbl_803249F4

	lbl_803249F0:
		li       r31, 1

	lbl_803249F4:
		lwz      r0, 0x14(r1)
		mr       r3, r31
		lwz      r31, 0xc(r1)
		mtlr     r0
		addi     r1, r1, 0x10
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80324A0C
	 * Size:	00000C
	 */
	void UfoMenu::doSetBackupScene(Screen::SetSceneArg&)
	{
		/*
		li       r0, 0
		stb      r0, 9(r4)
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80324A18
	 * Size:	00000C
	 */
	void UfoMenu::getResName() const
	{
		/*
		lis      r3, lbl_8048F2D8@ha
		addi     r3, r3, lbl_8048F2D8@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80324A24
	 * Size:	000008
	 */
	u32 UfoMenu::getSceneType(void) { return 0x2719; }

	/*
	 * --INFO--
	 * Address:	80324A2C
	 * Size:	00000C
	 */
	void UfoMenu::getOwnerID(void)
	{
		/*
		lis      r3, 0x004F4741@ha
		addi     r3, r3, 0x004F4741@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80324A38
	 * Size:	000014
	 */
	void UfoMenu::getMemberID(void)
	{
		/*
		lis      r4, 0x4D454E55@ha
		lis      r3, 0x0055464F@ha
		addi     r4, r4, 0x4D454E55@l
		addi     r3, r3, 0x0055464F@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80324A4C
	 * Size:	000008
	 */
	u32 UfoMenu::isUseBackupSceneInfo(void) { return 0x1; }
} // namespace newScreen
} // namespace og
