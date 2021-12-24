#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogSceneSMenuPause_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048E578
    lbl_8048E578:
        .4byte 0x534D656E
        .4byte 0x75506175
        .4byte 0x73652073
        .4byte 0x63726565
        .4byte 0x6E000000
    .global lbl_8048E58C
    lbl_8048E58C:
        .4byte 0x7265735F
        .4byte 0x735F6D65
        .4byte 0x6E755F70
        .4byte 0x61757365
        .4byte 0x2E737A73
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D8838
    lbl_804D8838:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804D8844
    lbl_804D8844:
        .4byte lbl_803141B8
        .4byte lbl_803141B8
        .4byte lbl_803141B8
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141B8
        .4byte lbl_803141B8
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141B8
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141B8
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141BC
        .4byte lbl_803141B8
    .global __vt__Q32og9newScreen10SMenuPause
    __vt__Q32og9newScreen10SMenuPause:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen10SMenuPauseFv
        .4byte getOwnerID__Q32og9newScreen10SMenuPauseFv
        .4byte getMemberID__Q32og9newScreen10SMenuPauseFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen10SMenuPauseFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen10SMenuPauseCFv
        .4byte doCreateObj__Q32og9newScreen10SMenuPauseFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen10SMenuPauseFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q32og9newScreen10SMenuPauseFv
        .4byte
   doConfirmSetScene__Q32og9newScreen10SMenuPauseFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q32og9newScreen14SceneSMenuBaseFv .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515E60
    lbl_80515E60:
        .skip 0x4
    .global lbl_80515E64
    lbl_80515E64:
        .skip 0x4
*/

namespace og {

namespace newScreen {

	/*
	 * --INFO--
	 * Address:	803140B4
	 * Size:	000050
	 */
	SMenuPause::SMenuPause(void)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r3
		bl       __ct__Q26Screen9SceneBaseFv
		lis      r4, __vt__Q32og9newScreen14SceneSMenuBase@ha
		lis      r3, __vt__Q32og9newScreen10SMenuPause@ha
		addi     r0, r4, __vt__Q32og9newScreen14SceneSMenuBase@l
		li       r4, 1
		stw      r0, 0(r31)
		addi     r0, r3, __vt__Q32og9newScreen10SMenuPause@l
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
	SMenuPause::~SMenuPause(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80314104
	 * Size:	000004
	 */
	void SMenuPause::doUserCallBackFunc(Resource::MgrCommand*) { }

	/*
	 * --INFO--
	 * Address:	80314108
	 * Size:	000060
	 */
	void SMenuPause::doCreateObj(JKRArchive*)
	{
		/*
		stwu     r1, -0x10(r1)
		mflr     r0
		stw      r0, 0x14(r1)
		stw      r31, 0xc(r1)
		mr       r31, r4
		stw      r30, 8(r1)
		mr       r30, r3
		li       r3, 0x118
		bl       __nw__FUl
		or.      r4, r3, r3
		beq      lbl_80314144
		lis      r4, lbl_8048E578@ha
		addi     r4, r4, lbl_8048E578@l
		bl       __ct__Q32og9newScreen13ObjSMenuPauseFPCc
		mr       r4, r3

	lbl_80314144:
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
	 * Address:	80314168
	 * Size:	000004
	 */
	void SMenuPause::doUpdateActive(void) { }

	/*
	 * --INFO--
	 * Address:	8031416C
	 * Size:	000068
	 */
	void SMenuPause::doConfirmSetScene(Screen::SetSceneArg&)
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
		bgt      lbl_803141BC
		lis      r3, lbl_804D8844@ha
		slwi     r0, r0, 2
		addi     r3, r3, lbl_804D8844@l
		lwzx     r0, r3, r0
		mtctr    r0
		bctr
		.global  lbl_803141B8

	lbl_803141B8:
		li       r31, 1
		.global  lbl_803141BC

	lbl_803141BC:
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
	 * Address:	803141D4
	 * Size:	00000C
	 */
	void SMenuPause::getResName() const
	{
		/*
		lis      r3, lbl_8048E58C@ha
		addi     r3, r3, lbl_8048E58C@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803141E0
	 * Size:	000008
	 */
	u32 SMenuPause::getSceneType(void) { return 0x271A; }

	/*
	 * --INFO--
	 * Address:	803141E8
	 * Size:	00000C
	 */
	void SMenuPause::getOwnerID(void)
	{
		/*
		lis      r3, 0x004F4741@ha
		addi     r3, r3, 0x004F4741@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803141F4
	 * Size:	000014
	 */
	void SMenuPause::getMemberID(void)
	{
		/*
		lis      r4, 0x41555345@ha
		lis      r3, 0x534D5F50@ha
		addi     r4, r4, 0x41555345@l
		addi     r3, r3, 0x534D5F50@l
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80314208
	 * Size:	000008
	 */
	u32 SMenuPause::isUseBackupSceneInfo(void) { return 0x1; }

} // namespace newScreen

} // namespace og

/*
 * --INFO--
 * Address:	80314210
 * Size:	000028
 */
void __sinit_ogSceneSMenuPause_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804D8838@ha
	stw      r0, lbl_80515E60@sda21(r13)
	stfsu    f0, lbl_804D8838@l(r3)
	stfs     f0, lbl_80515E64@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
