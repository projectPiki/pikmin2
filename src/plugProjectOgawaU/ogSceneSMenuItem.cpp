#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048E550
    lbl_8048E550:
        .4byte 0x534D656E
        .4byte 0x75497465
        .4byte 0x6D207363
        .4byte 0x7265656E
        .4byte 0x00000000
    .global lbl_8048E564
    lbl_8048E564:
        .4byte 0x7265735F
        .4byte 0x735F6D65
        .4byte 0x6E755F69
        .4byte 0x74656D2E
        .4byte 0x737A7300

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D8778
    lbl_804D8778:
        .4byte lbl_80313FE8
        .4byte lbl_80313FE8
        .4byte lbl_80313FE8
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FE8
        .4byte lbl_80313FE8
        .4byte lbl_80313FEC
        .4byte lbl_80313FE8
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FE8
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FE8
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FEC
        .4byte lbl_80313FE8
    .global __vt__Q32og9newScreen9SMenuItem
    __vt__Q32og9newScreen9SMenuItem:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen9SMenuItemFv
        .4byte getOwnerID__Q32og9newScreen9SMenuItemFv
        .4byte getMemberID__Q32og9newScreen9SMenuItemFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen9SMenuItemFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen9SMenuItemCFv
        .4byte doCreateObj__Q32og9newScreen9SMenuItemFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen9SMenuItemFPQ28Resource10MgrCommand .4byte
   setPort__Q26Screen9SceneBaseFR8Graphics .4byte
   doUpdateActive__Q32og9newScreen9SMenuItemFv .4byte
   doConfirmSetScene__Q32og9newScreen9SMenuItemFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q32og9newScreen9SMenuItemFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q32og9newScreen14SceneSMenuBaseFv
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80313F4C
 * Size:	000050
 */
SMenuItem::SMenuItem(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q32og9newScreen14SceneSMenuBase@ha
	lis      r3, __vt__Q32og9newScreen9SMenuItem@ha
	addi     r0, r4, __vt__Q32og9newScreen14SceneSMenuBase@l
	li       r4, 1
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q32og9newScreen9SMenuItem@l
	mr       r3, r31
	stw      r4, 0x220(r31)
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
 * Size:	000084
 */
SMenuItem::~SMenuItem(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80313F9C
 * Size:	000068
 */
void SMenuItem::doConfirmSetScene(Screen::SetSceneArg&)
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
	addi     r0, r3, -10000
	cmplwi   r0, 0x1b
	bgt      lbl_80313FEC
	lis      r3, lbl_804D8778@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804D8778@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80313FE8

lbl_80313FE8:
	li       r31, 1
	.global  lbl_80313FEC

lbl_80313FEC:
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
 * Address:	80314004
 * Size:	00000C
 */
void SMenuItem::doSetBackupScene(Screen::SetSceneArg&)
{
	/*
	li       r0, 0
	stb      r0, 9(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80314010
 * Size:	000004
 */
void SMenuItem::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80314014
 * Size:	000060
 */
void SMenuItem::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0xd4
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80314050
	lis      r4, lbl_8048E550@ha
	addi     r4, r4, lbl_8048E550@l
	bl       __ct__Q32og9newScreen12ObjSMenuItemFPCc
	mr       r4, r3

lbl_80314050:
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
 * Address:	80314074
 * Size:	000004
 */
void SMenuItem::doUpdateActive(void) { }

/*
 * --INFO--
 * Address:	80314078
 * Size:	00000C
 */
void SMenuItem::getResName() const
{
	/*
	lis      r3, lbl_8048E564@ha
	addi     r3, r3, lbl_8048E564@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80314084
 * Size:	000008
 */
u32 SMenuItem::getSceneType(void) { return 0x271C; }

/*
 * --INFO--
 * Address:	8031408C
 * Size:	00000C
 */
void SMenuItem::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80314098
 * Size:	000014
 */
void SMenuItem::getMemberID(void)
{
	/*
	lis      r4, 0x4954454D@ha
	lis      r3, 0x00534D5F@ha
	addi     r4, r4, 0x4954454D@l
	addi     r3, r3, 0x00534D5F@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	803140AC
 * Size:	000008
 */
u32 SMenuItem::isUseBackupSceneInfo(void) { return 0x1; }
} // namespace newScreen
} // namespace og
