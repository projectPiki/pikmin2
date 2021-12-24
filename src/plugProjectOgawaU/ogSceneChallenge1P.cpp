#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F4D0
    lbl_8048F4D0:
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x65315020
        .4byte 0x73637265
        .4byte 0x656E0000
    .global lbl_8048F4E4
    lbl_8048F4E4:
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x65456E64
        .4byte 0x436F756E
        .4byte 0x74000000
    .global lbl_8048F4F8
    lbl_8048F4F8:
        .4byte 0x7265735F
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x655F3170
        .4byte 0x2E737A73
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen11Challenge1P
    __vt__Q32og9newScreen11Challenge1P:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen11Challenge1PFv
        .4byte getOwnerID__Q32og9newScreen11Challenge1PFv
        .4byte getMemberID__Q32og9newScreen11Challenge1PFv
        .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
        .4byte isDrawInDemo__Q32og9newScreen11Challenge1PCFv
        .4byte getResName__Q32og9newScreen11Challenge1PCFv
        .4byte doCreateObj__Q32og9newScreen11Challenge1PFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen11Challenge1PFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q32og9newScreen11Challenge1PFv
        .4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q32og9newScreen11Challenge1PFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv .4byte
   startCountDown__Q32og9newScreen11Challenge1PFv .4byte 0
*/

namespace og {

namespace newScreen {

	/*
	 * --INFO--
	 * Address:	80328C30
	 * Size:	00003C
	 */
	Challenge1P::Challenge1P(void)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r3
		bl       __ct__Q32og9newScreen13ChallengeBaseFv
		lis      r4, __vt__Q32og9newScreen11Challenge1P@ha
		mr       r3, r31
		addi     r0, r4, __vt__Q32og9newScreen11Challenge1P@l
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
	Challenge1P::~Challenge1P(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80328C6C
	 * Size:	000004
	 */
	void Challenge1P::doUserCallBackFunc(Resource::MgrCommand*) { }

	/*
	 * --INFO--
	 * Address:	80328C70
	 * Size:	00009C
	 */
	void Challenge1P::doCreateObj(JKRArchive*)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r4
		stw      r30, 8(r1)
		mr       r30, r3
		li       r3, 0x7c
		bl       __nw__FUl
		or.      r4, r3, r3
		beq      lbl_80328CAC
		lis      r4, lbl_8048F4D0@ha
		addi     r4, r4, lbl_8048F4D0@l
		bl       __ct__Q32og9newScreen14ObjChallenge1PFPCc
		mr       r4, r3

	lbl_80328CAC:
		mr       r3, r30
		mr       r5, r31
		bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
		li       r3, 0xd4
		bl       __nw__FUl
		or.      r4, r3, r3
		beq      lbl_80328CD0
		bl       __ct__Q28Morimura18TChallengeEndCountFv
		mr       r4, r3

	lbl_80328CD0:
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
	 * Address:	80328D0C
	 * Size:	00004C
	 */
	void Challenge1P::doStart(Screen::StartSceneArg*)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		lis      r5, lbl_8048F4D0@ha
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r4
		addi     r4, r5, lbl_8048F4D0@l
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
	 * Address:	80328D58
	 * Size:	000038
	 */
	void Challenge1P::doUpdateActive(void)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		lwz      r0, gameSystem__4Game@sda21(r13)
		cmplwi   r0, 0
		beq      lbl_80328D80
		lwz      r4, 0x21c(r3)
		lfs      f1, 0x5c(r4)
		addi     r4, r4, 0x68
		bl
	updateCountDown__Q32og9newScreen13ChallengeBaseFfPQ32og6Screen21DispMemberDayEndCount

	lbl_80328D80:
		lwz      r0, 0x14(r1)
		mtlr     r0
		addi     r1, r1, 0x10
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80328D90
	 * Size:	00003C
	 */
	void Challenge1P::startCountDown(void)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		lis      r4, lbl_8048F4E4@ha
		stw      r0, 0x14(r1)
		addi     r4, r4, lbl_8048F4E4@l
		bl       searchObj__Q26Screen9SceneBaseFPc
		lwz      r12, 0(r3)
		li       r4, 0
		lwz      r12, 0x24(r12)
		mtctr    r12
		bctrl
		lwz      r0, 0x14(r1)
		mtlr     r0
		addi     r1, r1, 0x10
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80328DCC
	 * Size:	00000C
	 */
	void Challenge1P::getResName() const
	{
		/*
		lis      r3, lbl_8048F4F8@ha
		addi     r3, r3, lbl_8048F4F8@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80328DD8
	 * Size:	000008
	 */
	u32 Challenge1P::getSceneType(void) { return 0x2727; }

	/*
	 * --INFO--
	 * Address:	80328DE0
	 * Size:	00000C
	 */
	void Challenge1P::getOwnerID(void)
	{
		/*
		lis      r3, 0x004F4741@ha
		addi     r3, r3, 0x004F4741@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80328DEC
	 * Size:	000010
	 */
	void Challenge1P::getMemberID(void)
	{
		/*
		lis      r4, 0x414C3150@ha
		li       r3, 0x4348
		addi     r4, r4, 0x414C3150@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80328DFC
	 * Size:	000008
	 */
	u32 Challenge1P::isDrawInDemo() const { return 0x0; }
} // namespace newScreen
} // namespace og
