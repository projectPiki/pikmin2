#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogSceneSMenuPauseDoukutu_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F240
    lbl_8048F240:
        .4byte 0x534D656E
        .4byte 0x75506175
        .4byte 0x7365446F
        .4byte 0x756B7574
        .4byte 0x75207363
        .4byte 0x7265656E
        .4byte 0x00000000
    .global lbl_8048F25C
    lbl_8048F25C:
        .4byte 0x7265735F
        .4byte 0x735F6D65
        .4byte 0x6E755F70
        .4byte 0x61757365
        .4byte 0x5F646F75
        .4byte 0x6B757475
        .4byte 0x2E737A73
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D9708
    lbl_804D9708:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804D9714
    lbl_804D9714:
        .4byte lbl_80323718
        .4byte lbl_80323718
        .4byte lbl_80323718
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_80323718
        .4byte lbl_80323718
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_80323718
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_80323718
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_8032371C
        .4byte lbl_80323718
    .global __vt__Q32og9newScreen17SMenuPauseDoukutu
    __vt__Q32og9newScreen17SMenuPauseDoukutu:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen17SMenuPauseDoukutuFv
        .4byte getOwnerID__Q32og9newScreen17SMenuPauseDoukutuFv
        .4byte getMemberID__Q32og9newScreen17SMenuPauseDoukutuFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen17SMenuPauseDoukutuFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen17SMenuPauseDoukutuCFv
        .4byte doCreateObj__Q32og9newScreen17SMenuPauseDoukutuFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen17SMenuPauseDoukutuFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q32og9newScreen17SMenuPauseDoukutuFv
        .4byte
   doConfirmSetScene__Q32og9newScreen17SMenuPauseDoukutuFRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q32og9newScreen17SMenuPauseDoukutuFv .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515E88
    lbl_80515E88:
        .skip 0x4
    .global lbl_80515E8C
    lbl_80515E8C:
        .skip 0x4
*/

namespace og {

/*
 * --INFO--
 * Address:	80323584
 * Size:	000050
 */
newScreen::SMenuPauseDoukutu::SMenuPauseDoukutu(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q32og9newScreen14SceneSMenuBase@ha
	lis      r3, __vt__Q32og9newScreen17SMenuPauseDoukutu@ha
	addi     r0, r4, __vt__Q32og9newScreen14SceneSMenuBase@l
	li       r4, 1
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q32og9newScreen17SMenuPauseDoukutu@l
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
newScreen::SMenuPauseDoukutu::~SMenuPauseDoukutu(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803235D4
 * Size:	000004
 */
void newScreen::SMenuPauseDoukutu::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	803235D8
 * Size:	000060
 */
void newScreen::SMenuPauseDoukutu::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0xfc
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80323614
	lis      r4, lbl_8048F240@ha
	addi     r4, r4, lbl_8048F240@l
	bl       __ct__Q32og9newScreen20ObjSMenuPauseDoukutuFPCc
	mr       r4, r3

lbl_80323614:
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
 * Address:	80323638
 * Size:	000090
 */
void newScreen::SMenuPauseDoukutu::doGetFinishState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r30, 0x220(r3)
	cmpwi    r30, 1
	bne      lbl_803236AC
	lwz      r31, 0x21c(r3)
	lis      r4, 0x004F4741@ha
	lis      r6, 0x5F414C4C@ha
	li       r5, 0x534d
	mr       r3, r31
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x5F414C4C@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803236AC
	lis      r4, 0x004F4741@ha
	lis      r6, 0x53455F44@ha
	lis      r5, 0x00504155@ha
	mr       r3, r31
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x53455F44@l
	addi     r5, r5, 0x00504155@l
	bl       getSubMember__Q32og6Screen14DispMemberBaseFUlUx
	cmplwi   r3, 0
	beq      lbl_803236AC
	lwz      r30, 0x14(r3)

lbl_803236AC:
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
 * Address:	803236C8
 * Size:	000004
 */
void newScreen::SMenuPauseDoukutu::doUpdateActive(void) { }

/*
 * --INFO--
 * Address:	803236CC
 * Size:	000068
 */
void newScreen::SMenuPauseDoukutu::doConfirmSetScene(Screen::SetSceneArg&)
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
	bgt      lbl_8032371C
	lis      r3, lbl_804D9714@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804D9714@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80323718

lbl_80323718:
	li       r31, 1
	.global  lbl_8032371C

lbl_8032371C:
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
 * Address:	80323734
 * Size:	00000C
 */
void newScreen::SMenuPauseDoukutu::getResName() const
{
	/*
	lis      r3, lbl_8048F25C@ha
	addi     r3, r3, lbl_8048F25C@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80323740
 * Size:	000008
 */
u32 newScreen::SMenuPauseDoukutu::getSceneType(void) { return 0x271B; }

/*
 * --INFO--
 * Address:	80323748
 * Size:	00000C
 */
void newScreen::SMenuPauseDoukutu::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80323754
 * Size:	000014
 */
void newScreen::SMenuPauseDoukutu::getMemberID(void)
{
	/*
	lis      r4, 0x53455F44@ha
	lis      r3, 0x00504155@ha
	addi     r4, r4, 0x53455F44@l
	addi     r3, r3, 0x00504155@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80323768
 * Size:	000008
 */
u32 newScreen::SMenuPauseDoukutu::isUseBackupSceneInfo(void) { return 0x1; }

} // namespace og

/*
 * --INFO--
 * Address:	80323770
 * Size:	000028
 */
void __sinit_ogSceneSMenuPauseDoukutu_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804D9708@ha
	stw      r0, lbl_80515E88@sda21(r13)
	stfsu    f0, lbl_804D9708@l(r3)
	stfs     f0, lbl_80515E8C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
