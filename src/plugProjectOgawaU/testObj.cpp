#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048E078
    lbl_8048E078:
        .asciz "screenObj.h"
    .global lbl_8048E084
    lbl_8048E084:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26Screen8IObjBase
    __vt__Q26Screen8IObjBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q26Screen8IObjBaseFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q26Screen8IObjBaseFv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
*/

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
Test::Test(char const*)
{
	// UNUSED FUNCTION
}

namespace Screen {

/*
 * --INFO--
 * Address:	8030D868
 * Size:	000094
 */
ObjBase::~ObjBase(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_8030D8E0
lis      r4, __vt__Q26Screen7ObjBase@ha
addi     r4, r4, __vt__Q26Screen7ObjBase@l
stw      r4, 0(r30)
addi     r0, r4, 0x10
stw      r0, 0x18(r30)
beq      lbl_8030D8D0
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

lbl_8030D8D0:
extsh.   r0, r31
ble      lbl_8030D8E0
mr       r3, r30
bl       __dl__FPv

lbl_8030D8E0:
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
 * Size:	0000AC
 */
Test::~Test(void)
{
	// UNUSED FUNCTION
}

} // namespace Screen

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void Test::doCreate(JKRArchive*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Test::doUpdate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void Test::doDraw(Graphics& gfx)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Test::doStart(Screen::StartSceneArg const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Test::doEnd(Screen::EndSceneArg const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Test::doUpdateFadeinFinish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Test::doUpdateFinish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Test::doUpdateFadeoutFinish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Test::doUpdateFadein(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Test::doUpdateFadeout(void)
{
	// UNUSED FUNCTION
}

namespace Screen {

} // namespace Screen

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DispMemberTest::getSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void DispMemberTest::getOwnerID(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void DispMemberTest::getMemberID(void)
{
	// UNUSED FUNCTION
}

} // namespace newScreen

/*
 * --INFO--
 * Address:	8030D8FC
 * Size:	000060
 */
void ObjBase::setOwner(Screen::SceneBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x34(r3)
	cmplwi   r0, 0
	beq      lbl_8030D940
	lis      r3, lbl_8048E078@ha
	lis      r5, lbl_8048E084@ha
	addi     r3, r3, lbl_8048E078@l
	li       r4, 0x81
	addi     r5, r5, lbl_8048E084@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D940:
	stw      r31, 0x34(r30)
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
 * Address:	8030D95C
 * Size:	000008
 */
void ObjBase::getOwner() const
{
	/*
	lwz      r3, 0x34(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030D964
 * Size:	000008
 */
u32 ObjBase::doConfirmSetScene(Screen::SetSceneArg&) { return 0x1; }

/*
 * --INFO--
 * Address:	8030D96C
 * Size:	000008
 */
u32 ObjBase::doConfirmStartScene(Screen::StartSceneArg*) { return 0x1; }

/*
 * --INFO--
 * Address:	8030D974
 * Size:	000008
 */
u32 ObjBase::doConfirmEndScene(Screen::EndSceneArg*&) { return 0x1; }

/*
 * --INFO--
 * Address:	8030D97C
 * Size:	00007C
 */
IObjBase::~IObjBase(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8030D9DC
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
	extsh.   r0, r31
	ble      lbl_8030D9DC
	mr       r3, r30
	bl       __dl__FPv

lbl_8030D9DC:
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
 * Address:	8030D9F8
 * Size:	000008
 */
@24 @Screen::IObjBase::~IObjBase(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q26Screen8IObjBaseFv
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
@24 @og::newScreen::Test::~Test(void)
{
	// UNUSED FUNCTION
}
} // namespace og
