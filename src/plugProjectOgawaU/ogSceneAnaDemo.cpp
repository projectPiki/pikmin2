#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048EE98
    lbl_8048EE98:
        .4byte 0x6F675363
        .4byte 0x656E6541
        .4byte 0x6E614465
        .4byte 0x6D6F2E63
        .4byte 0x70700000
    .global lbl_8048EEAC
    lbl_8048EEAC:
        .4byte 0x93B48C41
        .4byte 0x8381836A
        .4byte 0x8385815B
        .4byte 0x82C582CD
        .4byte 0x82A082E8
        .4byte 0x82DC82B9
        .4byte 0x82F18149
        .4byte 0x0A000000
    .global lbl_8048EECC
    lbl_8048EECC:
        .4byte 0x616E6120
        .4byte 0x64656D6F
        .4byte 0x20736372
        .4byte 0x65656E00
    .global lbl_8048EEDC
    lbl_8048EEDC:
        .4byte 0x7265735F
        .4byte 0x616E615F
        .4byte 0x64656D6F
        .4byte 0x2E737A73
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen7AnaDemo
    __vt__Q32og9newScreen7AnaDemo:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen7AnaDemoFv
        .4byte getOwnerID__Q32og9newScreen7AnaDemoFv
        .4byte getMemberID__Q32og9newScreen7AnaDemoFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen7AnaDemoFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen7AnaDemoCFv
        .4byte doCreateObj__Q32og9newScreen7AnaDemoFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen7AnaDemoFPQ28Resource10MgrCommand .4byte
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
 * Address:	8031EA58
 * Size:	000080
 */
AnaDemo::AnaDemo(long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q26Screen9SceneBaseFv
	addi     r0, r31, -10015
	lis      r3, __vt__Q32og9newScreen7AnaDemo@ha
	addi     r3, r3, __vt__Q32og9newScreen7AnaDemo@l
	cmplwi   r0, 1
	stw      r3, 0(r30)
	ble      lbl_8031EA98
	cmpwi    r31, 0x2721
	bne      lbl_8031EAA0

lbl_8031EA98:
	stw      r31, 0x220(r30)
	b        lbl_8031EABC

lbl_8031EAA0:
	lis      r3, lbl_8048EE98@ha
	lis      r5, lbl_8048EEAC@ha
	addi     r3, r3, lbl_8048EE98@l
	li       r4, 0x23
	addi     r5, r5, lbl_8048EEAC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031EABC:
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
 * Address:	........
 * Size:	000074
 */
AnaDemo::~AnaDemo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031EAD8
 * Size:	000004
 */
void AnaDemo::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	8031EADC
 * Size:	000078
 */
void AnaDemo::doCreateObj(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x94
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8031EB18
	lis      r4, lbl_8048EECC@ha
	addi     r4, r4, lbl_8048EECC@l
	bl       __ct__Q32og9newScreen10ObjAnaDemoFPCc
	mr       r4, r3

lbl_8031EB18:
	mr       r3, r30
	mr       r5, r31
	bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0x96
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
 * Address:	8031EB54
 * Size:	00000C
 */
void AnaDemo::getResName() const
{
	/*
	lis      r3, lbl_8048EEDC@ha
	addi     r3, r3, lbl_8048EEDC@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031EB60
 * Size:	000008
 */
void AnaDemo::getSceneType(void)
{
	/*
	lwz      r3, 0x220(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031EB68
 * Size:	00000C
 */
void AnaDemo::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031EB74
 * Size:	00006C
 */
void AnaDemo::getMemberID(void)
{
	/*
	lwz      r0, 0x220(r3)
	li       r4, 0
	li       r3, 0
	cmpwi    r0, 0x2720
	beq      lbl_8031EBB8
	bge      lbl_8031EB98
	cmpwi    r0, 0x271f
	bge      lbl_8031EBA4
	blr

lbl_8031EB98:
	cmpwi    r0, 0x2722
	bgelr
	b        lbl_8031EBCC

lbl_8031EBA4:
	lis      r4, 0x44454D4F@ha
	lis      r3, 0x414E415F@ha
	addi     r4, r4, 0x44454D4F@l
	addi     r3, r3, 0x414E415F@l
	blr

lbl_8031EBB8:
	lis      r4, 0x4B455455@ha
	lis      r3, 0x004B414E@ha
	addi     r4, r4, 0x4B455455@l
	addi     r3, r3, 0x004B414E@l
	blr

lbl_8031EBCC:
	lis      r4, 0x4D4F5245@ha
	lis      r3, 0x43415645@ha
	addi     r4, r4, 0x4D4F5245@l
	addi     r3, r3, 0x43415645@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031EBE0
 * Size:	000008
 */
u32 AnaDemo::isUseBackupSceneInfo(void) { return 0x1; }
} // namespace newScreen
} // namespace og
