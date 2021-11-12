#include "types.h"

/*
    Generated from dpostproc
*/

namespace og {

/*
 * --INFO--
 * Address:	803304F0
 * Size:	000050
 */
newScreen::SMenuCont::SMenuCont(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q32og9newScreen14SceneSMenuBase@ha
	lis      r3, __vt__Q32og9newScreen9SMenuCont@ha
	addi     r0, r4, __vt__Q32og9newScreen14SceneSMenuBase@l
	li       r4, 1
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q32og9newScreen9SMenuCont@l
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
newScreen::SMenuCont::~SMenuCont(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80330540
 * Size:	000068
 */
void newScreen::SMenuCont::doConfirmSetScene(Screen::SetSceneArg&)
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
	cmplwi   r0, 0x17
	bgt      lbl_80330590
	lis      r3, lbl_804DA328@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804DA328@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_8033058C

lbl_8033058C:
	li       r31, 1
	.global  lbl_80330590

lbl_80330590:
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
 * Address:	803305A8
 * Size:	00000C
 */
void newScreen::SMenuCont::doSetBackupScene(Screen::SetSceneArg&)
{
	/*
	li       r0, 0
	stb      r0, 9(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803305B4
 * Size:	000004
 */
void newScreen::SMenuCont::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	803305B8
 * Size:	000060
 */
void newScreen::SMenuCont::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0xbc
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803305F4
	lis      r4, lbl_8048F7A0@ha
	addi     r4, r4, lbl_8048F7A0@l
	bl       __ct__Q32og9newScreen12ObjSMenuContFPCc
	mr       r4, r3

lbl_803305F4:
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
 * Address:	80330618
 * Size:	000004
 */
void newScreen::SMenuCont::doUpdateActive(void) { }

/*
 * --INFO--
 * Address:	8033061C
 * Size:	00000C
 */
void newScreen::SMenuCont::getResName() const
{
	/*
	lis      r3, lbl_8048F7B4@ha
	addi     r3, r3, lbl_8048F7B4@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80330628
 * Size:	000008
 */
u32 newScreen::SMenuCont::getSceneType(void) { return 0x272B; }

/*
 * --INFO--
 * Address:	80330630
 * Size:	00000C
 */
void newScreen::SMenuCont::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033063C
 * Size:	000014
 */
void newScreen::SMenuCont::getMemberID(void)
{
	/*
	lis      r4, 0x434F4E54@ha
	lis      r3, 0x00534D5F@ha
	addi     r4, r4, 0x434F4E54@l
	addi     r3, r3, 0x00534D5F@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80330650
 * Size:	000008
 */
u32 newScreen::SMenuCont::isUseBackupSceneInfo(void) { return 0x1; }
} // namespace og
