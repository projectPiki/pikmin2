#include "Graphics.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8Graphics
    __vt__8Graphics:
        .4byte 0
        .4byte 0
        .4byte doJ3DDrawInit__8GraphicsFv
        .4byte doJ3DDraw__8GraphicsFi
        .4byte doJ3DFrameInit__8GraphicsFv
        .4byte doJ3DAnimation__8GraphicsFv
        .4byte doJ3DUpdateInit__8GraphicsFv
        .4byte doJ3DSetView__8GraphicsFi
        .4byte doJ3DViewCalc__8GraphicsFv
        .4byte 0
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030EF88
 * Size:	000098
 */
BloGroup::BloGroup(unsigned short)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
rlwinm   r31, r4, 2, 0xe, 0x1d
stw      r30, 0x18(r1)
mr       r30, r4
stw      r29, 0x14(r1)
mr       r29, r3
mr       r3, r31
bl       __nwa__FUl
stw      r3, 0(r29)
mr       r3, r31
bl       __nwa__FUl
stw      r3, 4(r29)
li       r4, 0
mr       r5, r4
li       r6, 0
sth      r30, 8(r29)
sth      r4, 0xa(r29)
b        lbl_8030EFF4

lbl_8030EFDC:
lwz      r3, 0(r29)
addi     r6, r6, 1
stwx     r4, r3, r5
lwz      r3, 4(r29)
stwx     r4, r3, r5
addi     r5, r5, 4

lbl_8030EFF4:
lhz      r0, 8(r29)
cmpw     r6, r0
blt      lbl_8030EFDC
lwz      r0, 0x24(r1)
mr       r3, r29
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
BloGroup::~BloGroup(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F020
 * Size:	0000A0
 */
void BloGroup::addBlo(char*, P2DScreen::Mgr_tuning*, unsigned long, JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lhz       r3, 0xA(r3)
	  lhz       r0, 0x8(r29)
	  mr        r31, r3
	  cmplw     r3, r0
	  blt-      .loc_0x3C
	  li        r3, -0x1
	  b         .loc_0x84

	.loc_0x3C:
	  lwz       r8, 0x0(r29)
	  rlwinm    r0,r3,2,14,29
	  mr        r3, r30
	  mr        r5, r6
	  stwx      r30, r8, r0
	  mr        r6, r7
	  bl        -0x2CFA50
	  lhz       r0, 0xA(r29)
	  li        r5, 0
	  lwz       r4, 0x4(r29)
	  mr        r3, r30
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  bl        -0xBD7C
	  lhz       r4, 0xA(r29)
	  mr        r3, r31
	  addi      r0, r4, 0x1
	  sth       r0, 0xA(r29)

	.loc_0x84:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void BloGroup::setScissor(int, float, float, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void BloGroup::translate(float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F0C0
 * Size:	000044
 */
void BloGroup::scale(float)
{
	/*
lfs      f2, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
li       r6, 0
lfs      f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
li       r5, 0
fmuls    f2, f1, f2
fmuls    f0, f1, f0
b        lbl_8030F0F4

lbl_8030F0DC:
lwz      r4, 0(r3)
addi     r6, r6, 1
lwzx     r4, r4, r5
addi     r5, r5, 4
stfs     f2, 0x138(r4)
stfs     f0, 0x13c(r4)

lbl_8030F0F4:
lhz      r0, 0xa(r3)
cmpw     r6, r0
blt      lbl_8030F0DC
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void BloGroup::setAlpha(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F104
 * Size:	0000A4
 */
void BloGroup::rotate(float, float, J2DRotateAxis, float)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stfd     f31, 0x28(r1)
fmr      f31, f3
stfd     f30, 0x20(r1)
fmr      f30, f2
stfd     f29, 0x18(r1)
fmr      f29, f1
stw      r31, 0x14(r1)
li       r31, 0
stw      r30, 0x10(r1)
li       r30, 0
stw      r29, 0xc(r1)
mr       r29, r4
stw      r28, 8(r1)
mr       r28, r3
b        lbl_8030F170

lbl_8030F14C:
lwz      r3, 0(r28)
fmr      f1, f29
fmr      f2, f30
mr       r4, r29
fmr      f3, f31
lwzx     r3, r3, r31
bl       rotate__7J2DPaneFff13J2DRotateAxisf
addi     r31, r31, 4
addi     r30, r30, 1

lbl_8030F170:
lhz      r0, 0xa(r28)
cmpw     r30, r0
blt      lbl_8030F14C
lwz      r0, 0x34(r1)
lfd      f31, 0x28(r1)
lfd      f30, 0x20(r1)
lfd      f29, 0x18(r1)
lwz      r31, 0x14(r1)
lwz      r30, 0x10(r1)
lwz      r29, 0xc(r1)
lwz      r28, 8(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	8030F1A8
 * Size:	000070
 */
void BloGroup::update(void)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
li       r31, 0
stw      r30, 0x18(r1)
li       r30, 0
stw      r29, 0x14(r1)
mr       r29, r3
b        lbl_8030F1F0

lbl_8030F1D0:
lwz      r3, 0(r29)
lwzx     r3, r3, r31
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r31, r31, 4
addi     r30, r30, 1

lbl_8030F1F0:
lhz      r0, 0xa(r29)
cmpw     r30, r0
blt      lbl_8030F1D0
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void BloGroup::animation(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F218
 * Size:	0000E8
 */
void BloGroup::draw(J2DPerspGraph*)
{
	/*
stwu     r1, -0x2c0(r1)
mflr     r0
stw      r0, 0x2c4(r1)
stw      r31, 0x2bc(r1)
stw      r30, 0x2b8(r1)
stw      r29, 0x2b4(r1)
mr       r29, r4
stw      r28, 0x2b0(r1)
mr       r28, r3
addi     r3, r1, 8
bl       __ct__8GraphicsFv
li       r30, 0
li       r31, 0
b        lbl_8030F278

lbl_8030F250:
lwz      r3, 0(r28)
mr       r5, r29
addi     r4, r1, 8
lwzx     r3, r3, r31
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
addi     r31, r31, 4
addi     r30, r30, 1

lbl_8030F278:
lhz      r0, 0xa(r28)
cmpw     r30, r0
blt      lbl_8030F250
lis      r3, __vt__8Graphics@ha
addic.   r4, r1, 0x198
addi     r0, r3, __vt__8Graphics@l
stw      r0, 0x274(r1)
beq      lbl_8030F2B8
lis      r3, __vt__13J2DPerspGraph@ha
cmplwi   r4, 0
addi     r0, r3, __vt__13J2DPerspGraph@l
stw      r0, 0(r4)
beq      lbl_8030F2B8
lis      r3, __vt__14J2DGrafContext@ha
addi     r0, r3, __vt__14J2DGrafContext@l
stw      r0, 0(r4)

lbl_8030F2B8:
addic.   r4, r1, 0xc4
beq      lbl_8030F2E0
lis      r3, __vt__13J2DOrthoGraph@ha
cmplwi   r4, 0
addi     r0, r3, __vt__13J2DOrthoGraph@l
stw      r0, 0(r4)
beq      lbl_8030F2E0
lis      r3, __vt__14J2DGrafContext@ha
addi     r0, r3, __vt__14J2DGrafContext@l
stw      r0, 0(r4)

lbl_8030F2E0:
lwz      r0, 0x2c4(r1)
lwz      r31, 0x2bc(r1)
lwz      r30, 0x2b8(r1)
lwz      r29, 0x2b4(r1)
lwz      r28, 0x2b0(r1)
mtlr     r0
addi     r1, r1, 0x2c0
blr
	*/
}

} // namespace Screen
} // namespace og

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
Graphics::~Graphics()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F300
 * Size:	000004
 */
void Graphics::doJ3DDrawInit() { }

/*
 * --INFO--
 * Address:	8030F304
 * Size:	000004
 */
void Graphics::doJ3DDraw(int) { }

/*
 * --INFO--
 * Address:	8030F308
 * Size:	000004
 */
void Graphics::doJ3DFrameInit() { }

/*
 * --INFO--
 * Address:	8030F30C
 * Size:	000004
 */
void Graphics::doJ3DAnimation() { }

/*
 * --INFO--
 * Address:	8030F310
 * Size:	000004
 */
void Graphics::doJ3DUpdateInit() { }

/*
 * --INFO--
 * Address:	8030F314
 * Size:	000004
 */
void Graphics::doJ3DSetView(int) { }

/*
 * --INFO--
 * Address:	8030F318
 * Size:	000004
 */
void Graphics::doJ3DViewCalc() { }
