#include "types.h"
#include "og/Screen/callbackNodes.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen15CallBack_Screen
    __vt__Q32og6Screen15CallBack_Screen:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen15CallBack_ScreenFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen15CallBack_ScreenFv
        .4byte draw__Q32og6Screen15CallBack_ScreenFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D698
    lbl_8051D698:
        .float 1.0
    .global lbl_8051D69C
    lbl_8051D69C:
        .4byte 0x00000000
*/

namespace og {

namespace Screen {

/*
 * --INFO--
 * Address:	8030B370
 * Size:	0000A4
 */
CallBack_Screen::CallBack_Screen(P2DScreen::Mgr*, unsigned long long)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stmw     r27, 0xc(r1)
mr       r27, r3
mr       r0, r27
mr       r29, r4
mr       r31, r5
mr       r30, r6
mr       r28, r0
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r3, __vt__Q32og6Screen15CallBack_Screen@ha
stw      r0, 0(r28)
li       r5, 0
addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
addi     r0, r3, __vt__Q32og6Screen15CallBack_Screen@l
stw      r5, 0x18(r28)
mr       r6, r30
mr       r5, r31
stw      r4, 0(r28)
stw      r0, 0(r27)
stw      r29, 0x1c(r27)
lwz      r3, 0x1c(r27)
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
stw      r3, 0x20(r27)
li       r0, 0
lfs      f1, lbl_8051D698@sda21(r2)
mr       r3, r27
stw      r0, 0x24(r27)
lfs      f0, lbl_8051D69C@sda21(r2)
stfs     f1, 0x28(r27)
stfs     f0, 0x2c(r27)
stfs     f0, 0x30(r27)
lmw      r27, 0xc(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	8030B414
 * Size:	000008
 */
J2DScreen* CallBack_Screen::getPartsScreen(void) { return m_partsScreen; }

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void CallBack_Screen::changeScreen(P2DScreen::Mgr*, unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030B41C
 * Size:	000038
 */
void CallBack_Screen::update(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
lwz      r3, 0x1c(r3)
cmplwi   r3, 0
beq      lbl_8030B444
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl

lbl_8030B444:
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8030B454
 * Size:	0000D0
 */
void CallBack_Screen::draw(Graphics&, J2DGrafContext&)
{
	/*
stwu     r1, -0x80(r1)
mflr     r0
stw      r0, 0x84(r1)
stw      r31, 0x7c(r1)
stw      r30, 0x78(r1)
mr       r30, r5
stw      r29, 0x74(r1)
mr       r29, r4
stw      r28, 0x70(r1)
mr       r28, r3
lwz      r0, 0x1c(r3)
cmplwi   r0, 0
beq      lbl_8030B504
lfs      f1, 0x28(r28)
addi     r3, r1, 0x38
lwz      r4, 0x24(r28)
fmr      f2, f1
lfs      f3, lbl_8051D69C@sda21(r2)
addi     r31, r4, 0x80
bl       PSMTXScale
addi     r4, r1, 0x38
mr       r3, r31
mr       r5, r4
bl       PSMTXConcat
lfs      f1, 0x2c(r28)
addi     r3, r1, 8
lfs      f2, 0x30(r28)
lfs      f3, lbl_8051D69C@sda21(r2)
bl       PSMTXTrans
mr       r5, r31
addi     r3, r1, 0x38
addi     r4, r1, 8
bl       PSMTXConcat
lwz      r4, 0x20(r28)
mr       r3, r31
addi     r4, r4, 0x50
bl       PSMTXCopy
lwz      r3, 0x1c(r28)
mr       r4, r29
mr       r5, r30
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl

lbl_8030B504:
lwz      r0, 0x84(r1)
lwz      r31, 0x7c(r1)
lwz      r30, 0x78(r1)
lwz      r29, 0x74(r1)
lwz      r28, 0x70(r1)
mtlr     r0
addi     r1, r1, 0x80
blr
	*/
}
} // namespace Screen
} // namespace og
