#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048EF88
    lbl_8048EF88:
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x65325020
        .4byte 0x73637265
        .4byte 0x656E0000
    .global lbl_8048EF9C
    lbl_8048EF9C:
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x65456E64
        .4byte 0x436F756E
        .4byte 0x74317000
    .global lbl_8048EFB0
    lbl_8048EFB0:
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x65456E64
        .4byte 0x436F756E
        .4byte 0x74327000
    .global lbl_8048EFC4
    lbl_8048EFC4:
        .4byte 0x7265735F
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x655F3270
        .4byte 0x2E737A73
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen11Challenge2P
    __vt__Q32og9newScreen11Challenge2P:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen11Challenge2PFv
        .4byte getOwnerID__Q32og9newScreen11Challenge2PFv
        .4byte getMemberID__Q32og9newScreen11Challenge2PFv
        .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
        .4byte isDrawInDemo__Q32og9newScreen11Challenge2PCFv
        .4byte getResName__Q32og9newScreen11Challenge2PCFv
        .4byte doCreateObj__Q32og9newScreen11Challenge2PFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen11Challenge2PFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q32og9newScreen11Challenge2PFv
        .4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q32og9newScreen11Challenge2PFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv .4byte
   startCountDown__Q32og9newScreen11Challenge2PFv .4byte 0
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8031FD04
 * Size:	00003C
 */
Challenge2P::Challenge2P(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q32og9newScreen13ChallengeBaseFv
	lis      r4, __vt__Q32og9newScreen11Challenge2P@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q32og9newScreen11Challenge2P@l
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
 * Size:	000060
 */
Challenge2P::~Challenge2P(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031FD40
 * Size:	000004
 */
void Challenge2P::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	8031FD44
 * Size:	0000C0
 */
void Challenge2P::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x74
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8031FD80
	lis      r4, lbl_8048EF88@ha
	addi     r4, r4, lbl_8048EF88@l
	bl       __ct__Q32og9newScreen14ObjChallenge2PFPCc
	mr       r4, r3

lbl_8031FD80:
	mr       r3, r30
	mr       r5, r31
	bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
	li       r3, 0xd4
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8031FDA4
	bl       __ct__Q28Morimura20TChallengeEndCount1pFv
	mr       r4, r3

lbl_8031FDA4:
	mr       r3, r30
	mr       r5, r31
	bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
	li       r3, 0xd4
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8031FDC8
	bl       __ct__Q28Morimura20TChallengeEndCount2pFv
	mr       r4, r3

lbl_8031FDC8:
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
 * Address:	8031FE04
 * Size:	00004C
 */
void Challenge2P::doStart(Screen::StartSceneArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_8048EF88@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r5, lbl_8048EF88@l
	bl       searchObj__Q26Screen9SceneBaseFPc
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	li       r3, 1
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031FE50
 * Size:	000038
 */
void Challenge2P::doUpdateActive(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, gameSystem__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8031FE78
	lwz      r4, 0x21c(r3)
	lfs      f1, 0x5c(r4)
	addi     r4, r4, 0x68
	bl
updateCountDown__Q32og9newScreen13ChallengeBaseFfPQ32og6Screen21DispMemberDayEndCount

lbl_8031FE78:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031FE88
 * Size:	000084
 */
void Challenge2P::startCountDown(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8048EF9C@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, lbl_8048EF9C@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       searchObj__Q26Screen9SceneBaseFPc
	lis      r4, lbl_8048EFB0@ha
	mr       r0, r3
	mr       r3, r31
	addi     r4, r4, lbl_8048EFB0@l
	mr       r31, r0
	bl       searchObj__Q26Screen9SceneBaseFPc
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r31, r0
	li       r4, 0
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031FF0C
 * Size:	00000C
 */
void Challenge2P::getResName() const
{
	/*
	lis      r3, lbl_8048EFC4@ha
	addi     r3, r3, lbl_8048EFC4@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031FF18
 * Size:	000008
 */
u32 Challenge2P::getSceneType(void) { return 0x2724; }

/*
 * --INFO--
 * Address:	8031FF20
 * Size:	00000C
 */
void Challenge2P::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031FF2C
 * Size:	000010
 */
void Challenge2P::getMemberID(void)
{
	/*
	lis      r4, 0x414C3250@ha
	li       r3, 0x4348
	addi     r4, r4, 0x414C3250@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031FF3C
 * Size:	000008
 */
u32 Challenge2P::isDrawInDemo() const { return 0x0; }
} // namespace newScreen
} // namespace og
