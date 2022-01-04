#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogSceneSMenuPauseVs_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F520
    lbl_8048F520:
        .4byte 0x534D656E
        .4byte 0x75506175
        .4byte 0x73655653
        .4byte 0x20736372
        .4byte 0x65656E00
    .global lbl_8048F534
    lbl_8048F534:
        .4byte 0x7265735F
        .4byte 0x735F6D65
        .4byte 0x6E755F70
        .4byte 0x61757365
        .4byte 0x5F56532E
        .4byte 0x737A7300

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D9CA0
    lbl_804D9CA0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q32og9newScreen12SMenuPauseVS
    __vt__Q32og9newScreen12SMenuPauseVS:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen12SMenuPauseVSFv
        .4byte getOwnerID__Q32og9newScreen12SMenuPauseVSFv
        .4byte getMemberID__Q32og9newScreen12SMenuPauseVSFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen12SMenuPauseVSFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen12SMenuPauseVSCFv
        .4byte doCreateObj__Q32og9newScreen12SMenuPauseVSFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen12SMenuPauseVSFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q32og9newScreen12SMenuPauseVSFv
        .4byte
   doConfirmSetScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg
        .4byte doGetFinishState__Q32og9newScreen12SMenuPauseVSFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515E98
    lbl_80515E98:
        .skip 0x4
    .global lbl_80515E9C
    lbl_80515E9C:
        .skip 0x4
*/

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	80329CFC
 * Size:	00003C
 */
SMenuPauseVS::SMenuPauseVS(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q32og9newScreen12SMenuPauseVS@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q32og9newScreen12SMenuPauseVS@l
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
SMenuPauseVS::~SMenuPauseVS(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80329D38
 * Size:	000004
 */
void SMenuPauseVS::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80329D3C
 * Size:	000078
 */
void SMenuPauseVS::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0xcc
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80329D78
	lis      r4, lbl_8048F520@ha
	addi     r4, r4, lbl_8048F520@l
	bl       __ct__Q32og9newScreen15ObjSMenuPauseVSFPCc
	mr       r4, r3

lbl_80329D78:
	mr       r3, r30
	mr       r5, r31
	bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0xb4
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
 * Address:	80329DB4
 * Size:	000088
 */
void SMenuPauseVS::doGetFinishState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x004F4741@ha
	lis      r5, 0x5F414C4C@ha
	stw      r0, 0x14(r1)
	addi     r6, r5, 0x5F414C4C@l
	addi     r4, r4, 0x004F4741@l
	li       r5, 0x534d
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	li       r30, 0
	lwz      r31, 0x21c(r3)
	mr       r3, r31
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80329E20
	lis      r4, 0x004F4741@ha
	lis      r6, 0x535F5653@ha
	lis      r5, 0x534D5F50@ha
	mr       r3, r31
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x535F5653@l
	addi     r5, r5, 0x534D5F50@l
	bl       getSubMember__Q32og6Screen14DispMemberBaseFUlUx
	cmplwi   r3, 0
	beq      lbl_80329E20
	lwz      r30, 8(r3)

lbl_80329E20:
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
 * Address:	80329E3C
 * Size:	000004
 */
void SMenuPauseVS::doUpdateActive(void) { }

/*
 * --INFO--
 * Address:	80329E40
 * Size:	000068
 */
void SMenuPauseVS::doConfirmSetScene(Screen::SetSceneArg&)
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
	cmpwi    r3, 0x2724
	beq      lbl_80329E8C
	bge      lbl_80329E80
	cmpwi    r3, 0x2712
	beq      lbl_80329E8C
	b        lbl_80329E90

lbl_80329E80:
	cmpwi    r3, 0x2727
	beq      lbl_80329E8C
	b        lbl_80329E90

lbl_80329E8C:
	li       r31, 1

lbl_80329E90:
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
 * Address:	80329EA8
 * Size:	00000C
 */
void SMenuPauseVS::doSetBackupScene(Screen::SetSceneArg&)
{
	/*
	li       r0, 0
	stb      r0, 9(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329EB4
 * Size:	00000C
 */
void SMenuPauseVS::getResName() const
{
	/*
	lis      r3, lbl_8048F534@ha
	addi     r3, r3, lbl_8048F534@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329EC0
 * Size:	000008
 */
u32 SMenuPauseVS::getSceneType(void) { return 0x2728; }

/*
 * --INFO--
 * Address:	80329EC8
 * Size:	00000C
 */
void SMenuPauseVS::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329ED4
 * Size:	000014
 */
void SMenuPauseVS::getMemberID(void)
{
	/*
	lis      r4, 0x535F5653@ha
	lis      r3, 0x534D5F50@ha
	addi     r4, r4, 0x535F5653@l
	addi     r3, r3, 0x534D5F50@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329EE8
 * Size:	000008
 */
u32 SMenuPauseVS::isUseBackupSceneInfo(void) { return 0x1; }

} // namespace newScreen

} // namespace og

/*
 * --INFO--
 * Address:	80329EF0
 * Size:	000028
 */
void __sinit_ogSceneSMenuPauseVs_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804D9CA0@ha
	stw      r0, lbl_80515E98@sda21(r13)
	stfsu    f0, lbl_804D9CA0@l(r3)
	stfs     f0, lbl_80515E9C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
