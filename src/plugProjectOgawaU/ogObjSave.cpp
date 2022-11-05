#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F2E8
    lbl_8048F2E8:
        .4byte 0x6F674F62
        .4byte 0x6A536176
        .4byte 0x652E6370
        .4byte 0x70000000
    .global lbl_8048F2F8
    lbl_8048F2F8:
        .4byte 0x45525221
        .4byte 0x20696E20
        .4byte 0x4F626A53
        .4byte 0x61766520
        .4byte 0x43726561
        .4byte 0x74658EB8
        .4byte 0x94738149
        .4byte 0x0A000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen7ObjSave
    __vt__Q32og9newScreen7ObjSave:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen7ObjSaveFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen7ObjSaveFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte doStart__Q32og9newScreen7ObjSaveFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q32og9newScreen7ObjSaveFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32og9newScreen7ObjSaveFP10JKRArchive
        .4byte doUpdateFadein__Q32og9newScreen7ObjSaveFv
        .4byte doUpdateFadeinFinish__Q32og9newScreen7ObjSaveFv
        .4byte doUpdate__Q32og9newScreen7ObjSaveFv
        .4byte doUpdateFinish__Q32og9newScreen7ObjSaveFv
        .4byte doUpdateFadeout__Q32og9newScreen7ObjSaveFv
        .4byte doUpdateFadeoutFinish__Q32og9newScreen7ObjSaveFv
        .4byte doDraw__Q32og9newScreen7ObjSaveFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DD68
    lbl_8051DD68:
        .4byte 0x00000000
    .global lbl_8051DD6C
    lbl_8051DD6C:
        .float 0.1
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80324A54
 * Size:	000060
 */
ObjSave::ObjSave(char const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q26Screen7ObjBaseFv
	lis      r3, __vt__Q32og9newScreen7ObjSave@ha
	li       r0, 0
	addi     r4, r3, __vt__Q32og9newScreen7ObjSave@l
	mr       r3, r30
	stw      r4, 0(r30)
	addi     r4, r4, 0x10
	stw      r4, 0x18(r30)
	stw      r0, 0x40(r30)
	stw      r31, 0x14(r30)
	stw      r0, 0x38(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80324AB4
 * Size:	0000AC
 */
ObjSave::~ObjSave(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80324B44
	lis      r4, __vt__Q32og9newScreen7ObjSave@ha
	addi     r4, r4, __vt__Q32og9newScreen7ObjSave@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_80324B34
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_80324B34
	lis      r4, __vt__Q26Screen8IObjBase@ha
	addi     r4, r4, __vt__Q26Screen8IObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	bl       del__5CNodeFv
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_80324B34:
	extsh.   r0, r31
	ble      lbl_80324B44
	mr       r3, r30
	bl       __dl__FPv

lbl_80324B44:
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
 * Address:	80324B60
 * Size:	00008C
 */
void ObjSave::doCreate(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x53415645@ha
	mr       r31, r3
	li       r5, 0
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x53415645@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80324BA8
	stw      r31, 0x38(r30)
	b        lbl_80324BC4

lbl_80324BA8:
	lis      r3, lbl_8048F2E8@ha
	lis      r5, lbl_8048F2F8@ha
	addi     r3, r3, lbl_8048F2E8@l
	li       r4, 0x54
	addi     r5, r5, lbl_8048F2F8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80324BC4:
	li       r0, 0
	lfs      f0, lbl_8051DD68@sda21(r2)
	stw      r0, 0x3c(r30)
	stfs     f0, 0x44(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void ObjSave::startSave(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80324BEC
 * Size:	000134
 */
void ObjSave::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x38(r3)
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80324C20
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setSaveCave__Q22og5SoundFv

lbl_80324C20:
	lwz      r3, 0x40(r30)
	bl       update__Q33ebi4Save4TMgrFv
	lwz      r0, 0x3c(r30)
	cmpwi    r0, 1
	beq      lbl_80324CDC
	bge      lbl_80324C44
	cmpwi    r0, 0
	bge      lbl_80324C50
	b        lbl_80324D04

lbl_80324C44:
	cmpwi    r0, 3
	bge      lbl_80324D04
	b        lbl_80324CF8

lbl_80324C50:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x44(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051DD6C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x44(r30)
	lfs      f1, 0x44(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_80324D04
	li       r0, 1
	mr       r3, r30
	stw      r0, 0x3c(r30)
	bl       getGamePad__Q26Screen7ObjBaseCFv
	lwz      r6, 0x40(r30)
	lis      r4, gGameConfig__4Game@ha
	li       r0, 0
	li       r5, 1
	stw      r3, 0x3d0(r6)
	addi     r4, r4, gGameConfig__4Game@l
	stw      r3, 0x24(r6)
	stw      r3, 0x104(r6)
	lwz      r3, 0x40(r30)
	stw      r0, 0x470(r3)
	lwz      r3, 0x40(r30)
	stb      r5, 0x478(r3)
	lwz      r0, 0x258(r4)
	cmpwi    r0, 0
	bne      lbl_80324CC8
	lwz      r3, 0x40(r30)
	stb      r5, 0x479(r3)

lbl_80324CC8:
	lwz      r3, 0x40(r30)
	bl       start__Q33ebi4Save4TMgrFv
	lwz      r3, 0x40(r30)
	bl       update__Q33ebi4Save4TMgrFv
	b        lbl_80324D04

lbl_80324CDC:
	lwz      r3, 0x40(r30)
	bl       isFinish__Q33ebi4Save4TMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80324D04
	li       r0, 2
	stw      r0, 0x3c(r30)
	b        lbl_80324D04

lbl_80324CF8:
	li       r0, 0
	li       r31, 1
	stw      r0, 0x3c(r30)

lbl_80324D04:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80324D20
 * Size:	000030
 */
void ObjSave::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x3c(r3)
	cmpwi    r0, 1
	bne      lbl_80324D40
	lwz      r3, 0x40(r3)
	bl       draw__Q33ebi4Save4TMgrFv

lbl_80324D40:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80324D50
 * Size:	000008
 */
u32 ObjSave::doStart(Screen::StartSceneArg const*) { return 0x1; }

/*
 * --INFO--
 * Address:	80324D58
 * Size:	000008
 */
u32 ObjSave::doEnd(Screen::EndSceneArg const*) { return 0x1; }

/*
 * --INFO--
 * Address:	80324D60
 * Size:	000004
 */
void ObjSave::doUpdateFadeinFinish(void) { }

/*
 * --INFO--
 * Address:	80324D64
 * Size:	000004
 */
void ObjSave::doUpdateFinish(void) { }

/*
 * --INFO--
 * Address:	80324D68
 * Size:	000034
 */
void ObjSave::doUpdateFadeoutFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80324D9C
 * Size:	000008
 */
u32 ObjSave::doUpdateFadein(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80324DA4
 * Size:	000008
 */
u32 ObjSave::doUpdateFadeout(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80324DAC
 * Size:	000008
 */
@24 @og::newScreen::ObjSave::~ObjSave(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q32og9newScreen7ObjSaveFv
	*/
}
} // namespace newScreen
} // namespace og
