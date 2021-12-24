#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048EB78
    lbl_8048EB78:
        .4byte 0x73706563
        .4byte 0x69616C20
        .4byte 0x6974656D
        .4byte 0x20736372
        .4byte 0x65656E00
    .global lbl_8048EB8C
    lbl_8048EB8C:
        .4byte 0x7265735F
        .4byte 0x73706563
        .4byte 0x69616C5F
        .4byte 0x6974656D
        .4byte 0x2E737A73
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen11SpecialItem
    __vt__Q32og9newScreen11SpecialItem:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen11SpecialItemFv
        .4byte getOwnerID__Q32og9newScreen11SpecialItemFv
        .4byte getMemberID__Q32og9newScreen11SpecialItemFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen11SpecialItemFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen11SpecialItemCFv
        .4byte doCreateObj__Q32og9newScreen11SpecialItemFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen11SpecialItemFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q26Screen9SceneBaseFv
        .4byte
   doConfirmSetScene__Q32og9newScreen11SpecialItemFRQ26Screen11SetSceneArg
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
	 * Address:	8031A2A0
	 * Size:	00003C
	 */
	SpecialItem::SpecialItem(void)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r3
		bl       __ct__Q26Screen9SceneBaseFv
		lis      r4, __vt__Q32og9newScreen11SpecialItem@ha
		mr       r3, r31
		addi     r0, r4, __vt__Q32og9newScreen11SpecialItem@l
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
	SpecialItem::~SpecialItem(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	8031A2DC
	 * Size:	000004
	 */
	void SpecialItem::doUserCallBackFunc(Resource::MgrCommand*) { }

	/*
	 * --INFO--
	 * Address:	8031A2E0
	 * Size:	000060
	 */
	void SpecialItem::doCreateObj(JKRArchive*)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r4
		stw      r30, 8(r1)
		mr       r30, r3
		li       r3, 0x60
		bl       __nw__FUl
		or.      r4, r3, r3
		beq      lbl_8031A31C
		lis      r4, lbl_8048EB78@ha
		addi     r4, r4, lbl_8048EB78@l
		bl       __ct__Q32og9newScreen14ObjSpecialItemFPCc
		mr       r4, r3

	lbl_8031A31C:
		mr       r3, r30
		mr       r5, r31
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
	 * Address:	8031A340
	 * Size:	00004C
	 */
	void SpecialItem::doConfirmSetScene(Screen::SetSceneArg&)
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
		cmpwi    r3, 0x2723
		beq      lbl_8031A374
		li       r31, 1

	lbl_8031A374:
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
	 * Address:	8031A38C
	 * Size:	00000C
	 */
	void SpecialItem::getResName() const
	{
		/*
		lis      r3, lbl_8048EB8C@ha
		addi     r3, r3, lbl_8048EB8C@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8031A398
	 * Size:	000008
	 */
	u32 SpecialItem::getSceneType(void) { return 0x2723; }

	/*
	 * --INFO--
	 * Address:	8031A3A0
	 * Size:	00000C
	 */
	void SpecialItem::getOwnerID(void)
	{
		/*
		lis      r3, 0x004F4741@ha
		addi     r3, r3, 0x004F4741@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8031A3AC
	 * Size:	000014
	 */
	void SpecialItem::getMemberID(void)
	{
		/*
		lis      r4, 0x4954454D@ha
		lis      r3, 0x0053505F@ha
		addi     r4, r4, 0x4954454D@l
		addi     r3, r3, 0x0053505F@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8031A3C0
	 * Size:	000008
	 */
	u32 SpecialItem::isUseBackupSceneInfo(void) { return 0x1; }
} // namespace newScreen
} // namespace og
