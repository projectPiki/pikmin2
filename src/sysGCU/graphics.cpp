#include "types.h"
#include "Graphics.h"
#include "Viewport.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_graphics_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499C38
    lbl_80499C38:
        .asciz "initPrimDraw"
        .skip 3
    .global lbl_80499C48
    lbl_80499C48:
        .asciz "draw axis"
        .skip 6

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EBD98
    lbl_804EBD98:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__17HorizonalSplitter
    __vt__17HorizonalSplitter:
        .4byte 0
        .4byte 0
        .4byte split2__17HorizonalSplitterFf
        .4byte split4__8SplitterFff
    .global __vt__8Splitter
    __vt__8Splitter:
        .4byte 0
        .4byte 0
        .4byte split2__8SplitterFf
        .4byte split4__8SplitterFff
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516190
    lbl_80516190:
        .skip 0x4
    .global lbl_80516194
    lbl_80516194:
        .skip 0x4
    .global gScissorOffset
    gScissorOffset:
        .skip 0x4
    .global lastTokenName__8Graphics
    lastTokenName__8Graphics:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805204B8
    lbl_805204B8:
        .4byte 0x00000000
    .global lbl_805204BC
    lbl_805204BC:
        .float 0.5
    .global lbl_805204C0
    lbl_805204C0:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_805204C8
    lbl_805204C8:
        .float 1.0
    .global lbl_805204CC
    lbl_805204CC:
        .4byte 0xBF800000
    .global lbl_805204D0
    lbl_805204D0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805204D8
    lbl_805204D8:
        .4byte 0x3EC90FDB
    .global lbl_805204DC
    lbl_805204DC:
        .4byte 0x43A2F983
    .global lbl_805204E0
    lbl_805204E0:
        .4byte 0xC3A2F983
    .global lbl_805204E4
    lbl_805204E4:
        .4byte 0x40490FDB
    .global lbl_805204E8
    lbl_805204E8:
        .4byte 0xBF7FBE77
    .global lbl_805204EC
    lbl_805204EC:
        .4byte 0x3BB60B61
    .global lbl_805204F0
    lbl_805204F0:
        .4byte 0x33D6BF95
    .global lbl_805204F4
    lbl_805204F4:
        .4byte 0x40C90FDB
    .global lbl_805204F8
    lbl_805204F8:
        .4byte 0xC4800000
    .global lbl_805204FC
    lbl_805204FC:
        .4byte 0x44800000
    .global lbl_80520500
    lbl_80520500:
        .4byte 0x41F00000
    .global lbl_80520504
    lbl_80520504:
        .4byte 0x41200000
    .global lbl_80520508
    lbl_80520508:
        .4byte 0x461C4000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80424E90
 * Size:	000150
 */
HorizonalSplitter::HorizonalSplitter(Graphics*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r6, __vt__8Splitter@ha
	lis      r5, __vt__17HorizonalSplitter@ha
	stw      r0, 0x54(r1)
	addi     r0, r5, __vt__17HorizonalSplitter@l
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r29, r4
	stw      r28, 0x40(r1)
	mr       r28, r3
	addi     r3, r6, __vt__8Splitter@l
	stw      r3, 0(r28)
	stw      r0, 0(r28)
	stw      r29, 0x14(r28)
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_805204B8@sda21(r2)
	mr       r3, r29
	stw      r4, 0x2c(r1)
	li       r4, 2
	lfd      f2, lbl_805204C0@sda21(r2)
	stw      r0, 0x28(r1)
	lfd      f0, 0x28(r1)
	stfs     f3, 4(r28)
	fsubs    f1, f0, f2
	stfs     f3, 8(r28)
	stw      r31, 0x34(r1)
	stw      r0, 0x30(r1)
	lfd      f0, 0x30(r1)
	stfs     f1, 0xc(r28)
	fsubs    f0, f0, f2
	stfs     f0, 0x10(r28)
	bl       allocateViewports__8GraphicsFi
	li       r3, 0x58
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80424F40
	bl       __ct__8ViewportFv
	mr       r31, r3

lbl_80424F40:
	li       r3, 0x58
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80424F58
	bl       __ct__8ViewportFv
	mr       r30, r3

lbl_80424F58:
	lfs      f2, lbl_805204BC@sda21(r2)
	mr       r3, r31
	lfs      f1, 0x10(r28)
	addi     r4, r1, 0x18
	lfs      f3, 0xc(r28)
	lfs      f0, lbl_805204B8@sda21(r2)
	fmuls    f2, f2, f1
	stfs     f3, 0x20(r1)
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stfs     f2, 0x24(r1)
	stfs     f0, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f3, 0x10(r1)
	stfs     f1, 0x14(r1)
	bl       "setRect__8ViewportFR7Rect<f>"
	mr       r3, r30
	addi     r4, r1, 8
	bl       "setRect__8ViewportFR7Rect<f>"
	mr       r3, r29
	mr       r4, r31
	bl       addViewport__8GraphicsFP8Viewport
	mr       r3, r29
	mr       r4, r30
	bl       addViewport__8GraphicsFP8Viewport
	lwz      r0, 0x54(r1)
	mr       r3, r28
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80424FE0
 * Size:	0000BC
 */
void HorizonalSplitter::split2(float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	fmr      f31, f1
	lwz      r3, 0x14(r3)
	li       r4, 0
	bl       getViewport__8GraphicsFi
	mr       r0, r3
	lwz      r3, 0x14(r29)
	mr       r31, r0
	li       r4, 1
	bl       getViewport__8GraphicsFi
	lfs      f0, lbl_805204C8@sda21(r2)
	mr       r30, r3
	lfs      f3, lbl_805204BC@sda21(r2)
	mr       r3, r31
	fsubs    f0, f0, f31
	fdivs    f1, f31, f3
	fdivs    f0, f0, f3
	stfs     f1, 0x54(r31)
	stfs     f0, 0x54(r30)
	lfs      f0, 0x10(r29)
	lfs      f2, 0x28(r31)
	lfs      f1, 0x20(r31)
	fmuls    f0, f3, f0
	lfs      f3, 0x54(r31)
	fsubs    f1, f2, f1
	fmsubs   f0, f3, f1, f0
	stfs     f0, 0x4c(r30)
	bl       refresh__8ViewportFv
	mr       r3, r30
	bl       refresh__8ViewportFv
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
VerticalSplitter::VerticalSplitter(Graphics*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void VerticalSplitter::split2(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
FourSplitter::FourSplitter(Graphics*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
void FourSplitter::split4(float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042509C
 * Size:	0000C0
 */
Viewport::Viewport()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__8Viewport@ha
	li       r0, 0
	addi     r3, r3, __vt__8Viewport@l
	stw      r3, 0(r30)
	sth      r0, 0x18(r30)
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 4(r3)
	lis      r4, 0x4330
	lfs      f4, lbl_805204B8@sda21(r2)
	li       r0, 0
	stw      r3, 0xc(r1)
	mr       r3, r30
	lfd      f3, lbl_805204C0@sda21(r2)
	stw      r4, 8(r1)
	lfs      f0, lbl_805204C8@sda21(r2)
	lfd      f1, 8(r1)
	stfs     f4, 0x1c(r30)
	fsubs    f2, f1, f3
	stfs     f4, 0x20(r30)
	stw      r31, 0x14(r1)
	stw      r4, 0x10(r1)
	lfd      f1, 0x10(r1)
	stfs     f2, 0x24(r30)
	fsubs    f1, f1, f3
	stfs     f1, 0x28(r30)
	stb      r0, 0x3c(r30)
	stw      r0, 0x44(r30)
	stfs     f4, 0x48(r30)
	stfs     f4, 0x4c(r30)
	stfs     f0, 0x50(r30)
	stfs     f0, 0x54(r30)
	bl       refresh__8ViewportFv
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042515C
 * Size:	000044
 */
void Viewport::getMatrix(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x44(r3)
	cmplwi   r0, 0
	beq      lbl_8042518C
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	b        lbl_80425190

lbl_8042518C:
	lwz      r3, 0x40(r3)

lbl_80425190:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804251A0
 * Size:	00002C
 */
void Viewport::setProjection()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x44(r3)
	cmplwi   r3, 0
	beq      lbl_804251BC
	bl       setProjection__6CameraFv

lbl_804251BC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804251CC
 * Size:	000074
 */
int Graphics::getNumActiveViewports()
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
	b        lbl_80425214

lbl_804251F4:
	mr       r3, r29
	mr       r4, r30
	bl       getViewport__8GraphicsFi
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80425210
	addi     r31, r31, 1

lbl_80425210:
	addi     r30, r30, 1

lbl_80425214:
	lwz      r0, 0x264(r29)
	cmpw     r30, r0
	blt      lbl_804251F4
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Size:	00003C
 */
void Viewport::getAspect()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80425240
 * Size:	000050
 */
bool Viewport::viewable()
{
	/*
	lbz      r0, 0x3c(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80425254
	li       r3, 0
	blr

lbl_80425254:
	lfs      f1, 0x34(r3)
	lfs      f0, 0x2c(r3)
	lfs      f2, lbl_805204C8@sda21(r2)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f2
	blt      lbl_80425280
	lfs      f1, 0x38(r3)
	lfs      f0, 0x30(r3)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f2
	bge      lbl_80425288

lbl_80425280:
	li       r3, 0
	blr

lbl_80425288:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80425290
 * Size:	00004C
 */
void Viewport::updateCameraAspect()
{
	/*
	lwz      r4, 0x44(r3)
	cmplwi   r4, 0
	beqlr
	lfs      f3, 0x38(r3)
	lfs      f0, 0x30(r3)
	lfs      f2, 0x34(r3)
	lfs      f1, 0x2c(r3)
	fsubs    f3, f3, f0
	lfs      f0, lbl_805204B8@sda21(r2)
	fsubs    f1, f2, f1
	fcmpu    cr0, f0, f3
	beq      lbl_804252C8
	fcmpu    cr0, f0, f1
	bne      lbl_804252D0

lbl_804252C8:
	lfs      f0, lbl_805204C8@sda21(r2)
	b        lbl_804252D4

lbl_804252D0:
	fdivs    f0, f1, f3

lbl_804252D4:
	stfs     f0, 0x2c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	804252DC
 * Size:	0000A4
 */
void Viewport::refresh()
{
	/*
	lfs      f4, 0x1c(r3)
	lfs      f0, 0x48(r3)
	lfs      f7, 0x20(r3)
	lfs      f1, 0x4c(r3)
	fadds    f0, f4, f0
	lfs      f3, 0x24(r3)
	lfs      f2, 0x28(r3)
	fadds    f6, f7, f1
	lfs      f5, 0x50(r3)
	fsubs    f4, f3, f4
	lfs      f3, 0x54(r3)
	fsubs    f1, f2, f7
	stfs     f0, 0x2c(r3)
	fmuls    f2, f5, f4
	fmuls    f3, f3, f1
	stfs     f6, 0x30(r3)
	lfs      f0, 0x2c(r3)
	lfs      f1, 0x30(r3)
	fadds    f0, f0, f2
	fadds    f1, f1, f3
	stfs     f0, 0x34(r3)
	stfs     f1, 0x38(r3)
	lwz      r4, 0x44(r3)
	cmplwi   r4, 0
	beqlr
	lfs      f3, 0x38(r3)
	lfs      f0, 0x30(r3)
	lfs      f2, 0x34(r3)
	lfs      f1, 0x2c(r3)
	fsubs    f3, f3, f0
	lfs      f0, lbl_805204B8@sda21(r2)
	fsubs    f1, f2, f1
	fcmpu    cr0, f0, f3
	beq      lbl_8042536C
	fcmpu    cr0, f0, f1
	bne      lbl_80425374

lbl_8042536C:
	lfs      f0, lbl_805204C8@sda21(r2)
	b        lbl_80425378

lbl_80425374:
	fdivs    f0, f1, f3

lbl_80425378:
	stfs     f0, 0x2c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80425380
 * Size:	0000C4
 */
void Viewport::setRect(Rect<float>&)
{
	/*
	lfs      f0, 0(r4)
	stfs     f0, 0x1c(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x20(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x24(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x28(r3)
	lfs      f4, 0x1c(r3)
	lfs      f0, 0x48(r3)
	lfs      f7, 0x20(r3)
	lfs      f1, 0x4c(r3)
	fadds    f0, f4, f0
	lfs      f3, 0x24(r3)
	lfs      f2, 0x28(r3)
	fadds    f6, f7, f1
	lfs      f5, 0x50(r3)
	fsubs    f4, f3, f4
	lfs      f3, 0x54(r3)
	fsubs    f1, f2, f7
	stfs     f0, 0x2c(r3)
	fmuls    f4, f5, f4
	fmuls    f2, f3, f1
	stfs     f6, 0x30(r3)
	lfs      f0, 0x2c(r3)
	lfs      f1, 0x30(r3)
	fadds    f0, f0, f4
	fadds    f1, f1, f2
	stfs     f0, 0x34(r3)
	stfs     f1, 0x38(r3)
	lwz      r4, 0x44(r3)
	cmplwi   r4, 0
	beqlr
	lfs      f3, 0x38(r3)
	lfs      f0, 0x30(r3)
	lfs      f2, 0x34(r3)
	lfs      f1, 0x2c(r3)
	fsubs    f3, f3, f0
	lfs      f0, lbl_805204B8@sda21(r2)
	fsubs    f1, f2, f1
	fcmpu    cr0, f0, f3
	beq      lbl_80425430
	fcmpu    cr0, f0, f1
	bne      lbl_80425438

lbl_80425430:
	lfs      f0, lbl_805204C8@sda21(r2)
	b        lbl_8042543C

lbl_80425438:
	fdivs    f0, f1, f3

lbl_8042543C:
	stfs     f0, 0x2c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80425444
 * Size:	0000D4
 */
void Viewport::setViewport()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lfs      f2, 0x30(r3)
	mr       r28, r3
	lfs      f0, 0x38(r3)
	lfs      f1, 0x2c(r3)
	lfs      f3, 0x34(r3)
	fsubs    f4, f0, f2
	lfs      f5, lbl_805204B8@sda21(r2)
	fsubs    f3, f3, f1
	lfs      f6, lbl_805204C8@sda21(r2)
	bl       GXSetViewport
	lfs      f31, 0x30(r28)
	lfs      f0, 0x38(r28)
	lfs      f30, 0x2c(r28)
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	lfs      f0, 0x34(r28)
	mr       r28, r3
	lwz      r29, gScissorOffset@sda21(r13)
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r30, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r31, r3
	bl       __cvt_fp2unsigned
	mr       r4, r31
	mr       r5, r30
	add      r6, r29, r28
	bl       GXSetScissor
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x44(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001EC
 */
void Viewport::setOrthoGraph2d(J2DOrthoGraph&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80425518
 * Size:	000050
 */
void Viewport::setJ3DViewMtx(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x44(r3)
	cmplwi   r0, 0
	beq      lbl_80425548
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	b        lbl_8042554C

lbl_80425548:
	lwz      r3, 0x40(r3)

lbl_8042554C:
	lis      r4, j3dSys@ha
	addi     r4, r4, j3dSys@l
	bl       PSMTXCopy
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void Viewport::draw2dframe(J2DGrafContext&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80425568
 * Size:	000044
 */
void Graphics::allocateViewports(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x260(r3)
	lwz      r0, 0x260(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x268(r31)
	li       r0, 0
	stw      r0, 0x264(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804255AC
 * Size:	000014
 */
void Graphics::deleteViewports()
{
	/*
	li       r0, 0
	stw      r0, 0x260(r3)
	stw      r0, 0x264(r3)
	stw      r0, 0x268(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	804255C0
 * Size:	000030
 */
void Graphics::addViewport(Viewport*)
{
	/*
	lwz      r0, 0x260(r3)
	lwz      r5, 0x264(r3)
	cmpw     r0, r5
	blelr
	sth      r5, 0x18(r4)
	lwz      r6, 0x264(r3)
	lwz      r7, 0x268(r3)
	addi     r5, r6, 1
	slwi     r0, r6, 2
	stw      r5, 0x264(r3)
	stwx     r4, r7, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	804255F0
 * Size:	000010
 */
Viewport* Graphics::getViewport(int)
{
	/*
	lwz      r3, 0x268(r3)
	slwi     r0, r4, 2
	lwzx     r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80425600
 * Size:	0000E0
 */
void Graphics::mapViewport(IDelegate1<Viewport*>*)
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
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_804256B4

lbl_80425630:
	lwz      r3, 0x268(r28)
	lwzx     r3, r3, r31
	lbz      r0, 0x3c(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8042564C
	li       r0, 0
	b        lbl_80425684

lbl_8042564C:
	lfs      f1, 0x34(r3)
	lfs      f0, 0x2c(r3)
	lfs      f2, lbl_805204C8@sda21(r2)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f2
	blt      lbl_80425678
	lfs      f1, 0x38(r3)
	lfs      f0, 0x30(r3)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f2
	bge      lbl_80425680

lbl_80425678:
	li       r0, 0
	b        lbl_80425684

lbl_80425680:
	li       r0, 1

lbl_80425684:
	clrlwi.  r0, r0, 0x18
	beq      lbl_804256AC
	stw      r3, 0x25c(r28)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r4, 0x268(r28)
	lwz      r12, 8(r12)
	lwzx     r4, r4, r31
	mtctr    r12
	bctrl

lbl_804256AC:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_804256B4:
	lwz      r0, 0x264(r28)
	cmpw     r30, r0
	blt      lbl_80425630
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void Graphics::mapViewport(IDelegate2<Graphics&, Viewport*>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
void Graphics::renderJ3D()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void Graphics::updateJ3D()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804256E0
 * Size:	000030
 */
void graphicsTokenCallback(u16)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r5, sys@sda21(r13)
	lwz      r3, 0x24(r5)
	bl       getTokenName__8GraphicsFUs
	stw      r3, lastTokenName__8Graphics@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80425710
 * Size:	000078
 */
void Graphics::setToken(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       findTokenIndex__8GraphicsFPc
	cmpwi    r3, -1
	bne      lbl_80425768
	lhz      r0, 0(r30)
	cmplwi   r0, 0x20
	bge      lbl_80425770
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r3, r30, r0
	stw      r31, 4(r3)
	lhz      r3, 0(r30)
	bl       GXSetDrawSync
	lhz      r3, 0(r30)
	addi     r0, r3, 1
	sth      r0, 0(r30)
	b        lbl_80425770

lbl_80425768:
	clrlwi   r3, r3, 0x10
	bl       GXSetDrawSync

lbl_80425770:
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
 * Address:	80425788
 * Size:	000010
 */
char* Graphics::getTokenName(unsigned short)
{
	/*
	rlwinm   r0, r4, 2, 0xe, 0x1d
	add      r3, r3, r0
	lwz      r3, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
u16 Graphics::getToken()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80425798
 * Size:	000084
 */
int Graphics::findTokenIndex(char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r31, r28
	b        lbl_804257EC

lbl_804257C8:
	lwz      r3, 4(r31)
	mr       r4, r29
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_804257E4
	mr       r3, r30
	b        lbl_804257FC

lbl_804257E4:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_804257EC:
	lhz      r0, 0(r28)
	cmpw     r30, r0
	blt      lbl_804257C8
	li       r3, -1

lbl_804257FC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042581C
 * Size:	0001CC
 */
void Graphics::initPrimDraw(Matrixf*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lis      r3, lbl_80499C38@ha
	mr       r28, r4
	li       r30, 0
	mr       r29, r27
	addi     r31, r3, lbl_80499C38@l
	b        lbl_80425868

lbl_80425848:
	lwz      r3, 4(r29)
	mr       r4, r31
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80425860
	b        lbl_80425878

lbl_80425860:
	addi     r29, r29, 4
	addi     r30, r30, 1

lbl_80425868:
	lhz      r0, 0(r27)
	cmpw     r30, r0
	blt      lbl_80425848
	li       r30, -1

lbl_80425878:
	cmpwi    r30, -1
	bne      lbl_804258B8
	lhz      r0, 0(r27)
	cmplwi   r0, 0x20
	bge      lbl_804258C0
	rlwinm   r0, r0, 2, 0xe, 0x1d
	lis      r3, lbl_80499C38@ha
	addi     r4, r3, lbl_80499C38@l
	add      r3, r27, r0
	stw      r4, 4(r3)
	lhz      r3, 0(r27)
	bl       GXSetDrawSync
	lhz      r3, 0(r27)
	addi     r0, r3, 1
	sth      r0, 0(r27)
	b        lbl_804258C0

lbl_804258B8:
	clrlwi   r3, r30, 0x10
	bl       GXSetDrawSync

lbl_804258C0:
	bl       initGX__8GraphicsFv
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 4
	li       r4, 1
	li       r5, 1
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	mr       r3, r27
	bl       disableLight__8GraphicsFv
	mr       r3, r27
	bl       clearVtxDesc__8GraphicsFv
	mr       r3, r27
	li       r4, 9
	li       r5, 1
	bl       setVtxDesc__8GraphicsF7_GXAttr11_GXAttrType
	mr       r3, r27
	li       r4, 0xb
	li       r5, 1
	bl       setVtxDesc__8GraphicsF7_GXAttr11_GXAttrType
	mr       r3, r27
	li       r4, 0
	li       r5, 9
	li       r6, 1
	li       r7, 4
	li       r8, 0
	bl setVtxAttrFmt__8GraphicsF9_GXVtxFmt7_GXAttr10_GXCompCnt11_GXCompTypeUc mr
r3, r27 li       r4, 0 li       r5, 0xb li       r6, 1 li       r7, 5 li r8, 0
	bl setVtxAttrFmt__8GraphicsF9_GXVtxFmt7_GXAttr10_GXCompCnt11_GXCompTypeUc li
r3, 0 bl       GXSetCullMode cmplwi   r28, 0 beq      lbl_80425998 mr       r3,
r28 addi     r4, r27, 0x8c bl       PSMTXCopy

lbl_80425998:
	li       r3, 6
	li       r4, 0
	bl       GXSetLineWidth
	li       r3, 0
	li       r4, 1
	li       r5, 1
	li       r6, 0
	bl       GXSetBlendMode
	li       r3, 1
	li       r4, 1
	li       r5, 1
	bl       GXSetZMode
	addi     r3, r27, 0x8c
	li       r4, 0
	bl       GXLoadPosMtxImm
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void Graphics::drawPoint(Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void Graphics::drawPoint(Vector3f*, u16)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804259E8
 * Size:	0000C4
 */
void Graphics::drawLine(Vector3f&, Vector3f&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	li       r5, 2
	stw      r30, 0x18(r1)
	mr       r30, r4
	li       r4, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0xa8
	bl       GXBegin
	lfs      f2, 8(r30)
	lis      r6, 0xCC008000@ha
	lfs      f1, 4(r30)
	lfs      f0, 0(r30)
	stfs     f0, 0xCC008000@l(r6)
	stfs     f1, -0x8000(r6)
	stfs     f2, -0x8000(r6)
	lbz      r5, 0x87(r29)
	lbz      r4, 0x86(r29)
	lbz      r3, 0x85(r29)
	lbz      r0, 0x84(r29)
	stb      r0, -0x8000(r6)
	stb      r3, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stb      r5, -0x8000(r6)
	lfs      f2, 8(r31)
	lfs      f1, 4(r31)
	lfs      f0, 0(r31)
	stfs     f0, -0x8000(r6)
	stfs     f1, -0x8000(r6)
	stfs     f2, -0x8000(r6)
	lbz      r5, 0x87(r29)
	lbz      r4, 0x86(r29)
	lbz      r3, 0x85(r29)
	lbz      r0, 0x84(r29)
	stb      r0, -0x8000(r6)
	stb      r3, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stb      r5, -0x8000(r6)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002FC
 */
void Graphics::drawPlane(Plane&, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0007F0
 */
void Graphics::drawBox(Vector3f&, Vector3f*, float*, float*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000790
 */
void Graphics::drawBox(Vector3f&, Vector3f&, Vector3f&, Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80425AAC
 * Size:	000598
 */
void Graphics::drawSphere(Vector3f&, float)
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	stw      r0, 0x1d4(r1)
	stfd     f31, 0x1c0(r1)
	psq_st   f31, 456(r1), 0, qr0
	stfd     f30, 0x1b0(r1)
	psq_st   f30, 440(r1), 0, qr0
	stfd     f29, 0x1a0(r1)
	psq_st   f29, 424(r1), 0, qr0
	stfd     f28, 0x190(r1)
	psq_st   f28, 408(r1), 0, qr0
	stfd     f27, 0x180(r1)
	psq_st   f27, 392(r1), 0, qr0
	stfd     f26, 0x170(r1)
	psq_st   f26, 376(r1), 0, qr0
	stfd     f25, 0x160(r1)
	psq_st   f25, 360(r1), 0, qr0
	stfd     f24, 0x150(r1)
	psq_st   f24, 344(r1), 0, qr0
	stfd     f23, 0x140(r1)
	psq_st   f23, 328(r1), 0, qr0
	stfd     f22, 0x130(r1)
	psq_st   f22, 312(r1), 0, qr0
	stmw     r25, 0x114(r1)
	fmr      f25, f1
	lis      r5, sincosTable___5JMath@ha
	lfs      f30, lbl_805204D8@sda21(r2)
	mr       r26, r3
	lfd      f29, lbl_805204D0@sda21(r2)
	mr       r27, r4
	lfs      f28, lbl_805204B8@sda21(r2)
	addi     r30, r5, sincosTable___5JMath@l
	lfs      f27, lbl_805204DC@sda21(r2)
	li       r29, 0
	lfs      f31, lbl_805204C8@sda21(r2)
	lis      r31, 0x4330
	lis      r25, 0xcc01

lbl_80425B40:
	xoris    r0, r29, 0x8000
	stw      r31, 0xc8(r1)
	mr       r6, r27
	addi     r3, r1, 0x68
	stw      r0, 0xcc(r1)
	addi     r4, r1, 0x2c
	addi     r5, r1, 0x20
	lfd      f0, 0xc8(r1)
	stfs     f31, 0x2c(r1)
	fsubs    f0, f0, f29
	stfs     f31, 0x30(r1)
	fmuls    f0, f30, f0
	stfs     f31, 0x34(r1)
	stfs     f28, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f28, 0x28(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	addi     r3, r26, 0x8c
	addi     r4, r1, 0x68
	addi     r5, r1, 0x98
	bl       PSMTXConcat
	addi     r3, r1, 0x98
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r28, 0

lbl_80425BA4:
	addi     r3, r28, 1
	xoris    r4, r28, 0x8000
	slwi     r0, r3, 0x1b
	stw      r4, 0xcc(r1)
	srwi     r3, r3, 0x1f
	subf     r0, r3, r0
	stw      r31, 0xc8(r1)
	rotlwi   r0, r0, 5
	add      r0, r0, r3
	lfd      f0, 0xc8(r1)
	xoris    r0, r0, 0x8000
	stw      r31, 0xd0(r1)
	fsubs    f0, f0, f29
	stw      r0, 0xd4(r1)
	fmuls    f2, f30, f0
	lfd      f0, 0xd0(r1)
	fsubs    f0, f0, f29
	fmr      f1, f2
	fcmpo    cr0, f2, f28
	fmuls    f3, f30, f0
	bge      lbl_80425BFC
	fneg     f1, f2

lbl_80425BFC:
	fmuls    f0, f1, f27
	fcmpo    cr0, f2, f28
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r30, r0
	lfs      f0, 4(r3)
	fmuls    f26, f25, f0
	bge      lbl_80425C50
	lfs      f0, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80425C70

lbl_80425C50:
	fmuls    f0, f2, f27
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0xe8(r1)
	lwz      r0, 0xec(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80425C70:
	fmr      f1, f3
	fcmpo    cr0, f3, f28
	fmuls    f24, f25, f0
	bge      lbl_80425C84
	fneg     f1, f3

lbl_80425C84:
	fmuls    f0, f1, f27
	fcmpo    cr0, f3, f28
	fctiwz   f0, f0
	stfd     f0, 0xf0(r1)
	lwz      r0, 0xf4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r30, r0
	lfs      f0, 4(r3)
	fmuls    f23, f25, f0
	bge      lbl_80425CD8
	lfs      f0, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xf8(r1)
	lwz      r0, 0xfc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f22, f0
	b        lbl_80425CF8

lbl_80425CD8:
	fmuls    f0, f3, f27
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x100(r1)
	lwz      r0, 0x104(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f22, r3, r0

lbl_80425CF8:
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	bl       GXBegin
	stfs     f24, -0x8000(r25)
	addi     r28, r28, 1
	fmuls    f0, f25, f22
	cmpwi    r28, 0x10
	stfs     f26, -0x8000(r25)
	stfs     f28, -0x8000(r25)
	lbz      r5, 0x87(r26)
	lbz      r4, 0x86(r26)
	lbz      r3, 0x85(r26)
	lbz      r0, 0x84(r26)
	stb      r0, -0x8000(r25)
	stb      r3, -0x8000(r25)
	stb      r4, -0x8000(r25)
	stb      r5, -0x8000(r25)
	stfs     f0, -0x8000(r25)
	stfs     f23, -0x8000(r25)
	stfs     f28, -0x8000(r25)
	lbz      r5, 0x87(r26)
	lbz      r4, 0x86(r26)
	lbz      r3, 0x85(r26)
	lbz      r0, 0x84(r26)
	stb      r0, -0x8000(r25)
	stb      r3, -0x8000(r25)
	stb      r4, -0x8000(r25)
	stb      r5, -0x8000(r25)
	blt      lbl_80425BA4
	addi     r29, r29, 1
	cmpwi    r29, 0x10
	blt      lbl_80425B40
	lis      r3, sincosTable___5JMath@ha
	lfs      f28, lbl_805204D8@sda21(r2)
	lfd      f29, lbl_805204D0@sda21(r2)
	addi     r31, r3, sincosTable___5JMath@l
	lfs      f30, lbl_805204B8@sda21(r2)
	li       r28, 0
	lfs      f31, lbl_805204DC@sda21(r2)
	lis      r30, 0x4330
	lfs      f27, lbl_805204C8@sda21(r2)
	lis      r25, 0xcc01

lbl_80425DA4:
	xoris    r0, r28, 0x8000
	stw      r30, 0x100(r1)
	mr       r6, r27
	addi     r3, r1, 0x38
	stw      r0, 0x104(r1)
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	lfd      f0, 0x100(r1)
	stfs     f27, 0x14(r1)
	fsubs    f0, f0, f29
	stfs     f27, 0x18(r1)
	fmuls    f0, f28, f0
	stfs     f27, 0x1c(r1)
	stfs     f30, 0xc(r1)
	stfs     f0, 8(r1)
	stfs     f30, 0x10(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	addi     r3, r26, 0x8c
	addi     r4, r1, 0x38
	addi     r5, r1, 0x98
	bl       PSMTXConcat
	addi     r3, r1, 0x98
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r29, 0

lbl_80425E08:
	addi     r3, r29, 1
	xoris    r4, r29, 0x8000
	slwi     r0, r3, 0x1b
	stw      r4, 0x104(r1)
	srwi     r3, r3, 0x1f
	subf     r0, r3, r0
	stw      r30, 0x100(r1)
	rotlwi   r0, r0, 5
	add      r0, r0, r3
	lfd      f0, 0x100(r1)
	xoris    r0, r0, 0x8000
	stw      r30, 0xf8(r1)
	fsubs    f0, f0, f29
	stw      r0, 0xfc(r1)
	fmuls    f2, f28, f0
	lfd      f0, 0xf8(r1)
	fsubs    f0, f0, f29
	fmr      f1, f2
	fcmpo    cr0, f2, f30
	fmuls    f3, f28, f0
	bge      lbl_80425E60
	fneg     f1, f2

lbl_80425E60:
	fmuls    f0, f1, f31
	fcmpo    cr0, f2, f30
	fctiwz   f0, f0
	stfd     f0, 0xf0(r1)
	lwz      r0, 0xf4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f0, 4(r3)
	fmuls    f26, f25, f0
	bge      lbl_80425EB4
	lfs      f0, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xe8(r1)
	lwz      r0, 0xec(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80425ED4

lbl_80425EB4:
	fmuls    f0, f2, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80425ED4:
	fmr      f1, f3
	fcmpo    cr0, f3, f30
	fmuls    f23, f25, f0
	bge      lbl_80425EE8
	fneg     f1, f3

lbl_80425EE8:
	fmuls    f0, f1, f31
	fcmpo    cr0, f3, f30
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f0, 4(r3)
	fmuls    f24, f25, f0
	bge      lbl_80425F3C
	lfs      f0, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f22, f0
	b        lbl_80425F5C

lbl_80425F3C:
	fmuls    f0, f3, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f22, r3, r0

lbl_80425F5C:
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	bl       GXBegin
	stfs     f23, -0x8000(r25)
	addi     r29, r29, 1
	fmuls    f0, f25, f22
	cmpwi    r29, 0x10
	stfs     f30, -0x8000(r25)
	stfs     f26, -0x8000(r25)
	lbz      r5, 0x87(r26)
	lbz      r4, 0x86(r26)
	lbz      r3, 0x85(r26)
	lbz      r0, 0x84(r26)
	stb      r0, -0x8000(r25)
	stb      r3, -0x8000(r25)
	stb      r4, -0x8000(r25)
	stb      r5, -0x8000(r25)
	stfs     f0, -0x8000(r25)
	stfs     f30, -0x8000(r25)
	stfs     f24, -0x8000(r25)
	lbz      r5, 0x87(r26)
	lbz      r4, 0x86(r26)
	lbz      r3, 0x85(r26)
	lbz      r0, 0x84(r26)
	stb      r0, -0x8000(r25)
	stb      r3, -0x8000(r25)
	stb      r4, -0x8000(r25)
	stb      r5, -0x8000(r25)
	blt      lbl_80425E08
	addi     r28, r28, 1
	cmpwi    r28, 0x10
	blt      lbl_80425DA4
	psq_l    f31, 456(r1), 0, qr0
	lfd      f31, 0x1c0(r1)
	psq_l    f30, 440(r1), 0, qr0
	lfd      f30, 0x1b0(r1)
	psq_l    f29, 424(r1), 0, qr0
	lfd      f29, 0x1a0(r1)
	psq_l    f28, 408(r1), 0, qr0
	lfd      f28, 0x190(r1)
	psq_l    f27, 392(r1), 0, qr0
	lfd      f27, 0x180(r1)
	psq_l    f26, 376(r1), 0, qr0
	lfd      f26, 0x170(r1)
	psq_l    f25, 360(r1), 0, qr0
	lfd      f25, 0x160(r1)
	psq_l    f24, 344(r1), 0, qr0
	lfd      f24, 0x150(r1)
	psq_l    f23, 328(r1), 0, qr0
	lfd      f23, 0x140(r1)
	psq_l    f22, 312(r1), 0, qr0
	lfd      f22, 0x130(r1)
	lmw      r25, 0x114(r1)
	lwz      r0, 0x1d4(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80426044
 * Size:	0005C8
 */
void Graphics::drawSphere(float, Matrixf*)
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	stw      r0, 0x1d4(r1)
	stfd     f31, 0x1c0(r1)
	psq_st   f31, 456(r1), 0, qr0
	stfd     f30, 0x1b0(r1)
	psq_st   f30, 440(r1), 0, qr0
	stfd     f29, 0x1a0(r1)
	psq_st   f29, 424(r1), 0, qr0
	stfd     f28, 0x190(r1)
	psq_st   f28, 408(r1), 0, qr0
	stfd     f27, 0x180(r1)
	psq_st   f27, 392(r1), 0, qr0
	stfd     f26, 0x170(r1)
	psq_st   f26, 376(r1), 0, qr0
	stfd     f25, 0x160(r1)
	psq_st   f25, 360(r1), 0, qr0
	stfd     f24, 0x150(r1)
	psq_st   f24, 344(r1), 0, qr0
	stfd     f23, 0x140(r1)
	psq_st   f23, 328(r1), 0, qr0
	stfd     f22, 0x130(r1)
	psq_st   f22, 312(r1), 0, qr0
	stmw     r24, 0x110(r1)
	fmr      f25, f1
	lis      r5, sincosTable___5JMath@ha
	lis      r6, "zero__10Vector3<f>"@ha
	lfs      f30, lbl_805204D8@sda21(r2)
	lfd      f29, lbl_805204D0@sda21(r2)
	mr       r25, r3
	lfs      f28, lbl_805204B8@sda21(r2)
	mr       r26, r4
	lfs      f27, lbl_805204DC@sda21(r2)
	addi     r29, r5, sincosTable___5JMath@l
	lfs      f31, lbl_805204C8@sda21(r2)
	addi     r31, r6, "zero__10Vector3<f>"@l
	li       r28, 0
	lis      r30, 0x4330
	lis      r24, 0xcc01

lbl_804260E0:
	xoris    r0, r28, 0x8000
	stw      r30, 0xc8(r1)
	mr       r6, r31
	addi     r3, r1, 0x68
	stw      r0, 0xcc(r1)
	addi     r4, r1, 0x2c
	addi     r5, r1, 0x20
	lfd      f0, 0xc8(r1)
	stfs     f31, 0x2c(r1)
	fsubs    f0, f0, f29
	stfs     f31, 0x30(r1)
	fmuls    f0, f30, f0
	stfs     f31, 0x34(r1)
	stfs     f28, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f28, 0x28(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	addi     r4, r1, 0x68
	mr       r3, r26
	mr       r5, r4
	bl       PSMTXConcat
	addi     r3, r25, 0x8c
	addi     r4, r1, 0x68
	addi     r5, r1, 0x98
	bl       PSMTXConcat
	addi     r3, r1, 0x98
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r27, 0

lbl_80426154:
	addi     r3, r27, 1
	xoris    r4, r27, 0x8000
	slwi     r0, r3, 0x1b
	stw      r4, 0xcc(r1)
	srwi     r3, r3, 0x1f
	subf     r0, r3, r0
	stw      r30, 0xc8(r1)
	rotlwi   r0, r0, 5
	add      r0, r0, r3
	lfd      f0, 0xc8(r1)
	xoris    r0, r0, 0x8000
	stw      r30, 0xd0(r1)
	fsubs    f0, f0, f29
	stw      r0, 0xd4(r1)
	fmuls    f2, f30, f0
	lfd      f0, 0xd0(r1)
	fsubs    f0, f0, f29
	fmr      f1, f2
	fcmpo    cr0, f2, f28
	fmuls    f3, f30, f0
	bge      lbl_804261AC
	fneg     f1, f2

lbl_804261AC:
	fmuls    f0, f1, f27
	fcmpo    cr0, f2, f28
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r29, r0
	lfs      f0, 4(r3)
	fmuls    f26, f25, f0
	bge      lbl_80426200
	lfs      f0, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80426220

lbl_80426200:
	fmuls    f0, f2, f27
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0xe8(r1)
	lwz      r0, 0xec(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80426220:
	fmr      f1, f3
	fcmpo    cr0, f3, f28
	fmuls    f24, f25, f0
	bge      lbl_80426234
	fneg     f1, f3

lbl_80426234:
	fmuls    f0, f1, f27
	fcmpo    cr0, f3, f28
	fctiwz   f0, f0
	stfd     f0, 0xf0(r1)
	lwz      r0, 0xf4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r29, r0
	lfs      f0, 4(r3)
	fmuls    f23, f25, f0
	bge      lbl_80426288
	lfs      f0, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xf8(r1)
	lwz      r0, 0xfc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f22, f0
	b        lbl_804262A8

lbl_80426288:
	fmuls    f0, f3, f27
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x100(r1)
	lwz      r0, 0x104(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f22, r3, r0

lbl_804262A8:
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	bl       GXBegin
	stfs     f24, -0x8000(r24)
	addi     r27, r27, 1
	fmuls    f0, f25, f22
	cmpwi    r27, 0x10
	stfs     f26, -0x8000(r24)
	stfs     f28, -0x8000(r24)
	lbz      r5, 0x87(r25)
	lbz      r4, 0x86(r25)
	lbz      r3, 0x85(r25)
	lbz      r0, 0x84(r25)
	stb      r0, -0x8000(r24)
	stb      r3, -0x8000(r24)
	stb      r4, -0x8000(r24)
	stb      r5, -0x8000(r24)
	stfs     f0, -0x8000(r24)
	stfs     f23, -0x8000(r24)
	stfs     f28, -0x8000(r24)
	lbz      r5, 0x87(r25)
	lbz      r4, 0x86(r25)
	lbz      r3, 0x85(r25)
	lbz      r0, 0x84(r25)
	stb      r0, -0x8000(r24)
	stb      r3, -0x8000(r24)
	stb      r4, -0x8000(r24)
	stb      r5, -0x8000(r24)
	blt      lbl_80426154
	addi     r28, r28, 1
	cmpwi    r28, 0x10
	blt      lbl_804260E0
	lis      r3, sincosTable___5JMath@ha
	lis      r4, "zero__10Vector3<f>"@ha
	lfs      f28, lbl_805204D8@sda21(r2)
	addi     r31, r3, sincosTable___5JMath@l
	lfd      f29, lbl_805204D0@sda21(r2)
	addi     r29, r4, "zero__10Vector3<f>"@l
	lfs      f30, lbl_805204B8@sda21(r2)
	li       r27, 0
	lfs      f31, lbl_805204DC@sda21(r2)
	lis      r30, 0x4330
	lfs      f27, lbl_805204C8@sda21(r2)
	lis      r24, 0xcc01

lbl_8042635C:
	xoris    r0, r27, 0x8000
	stw      r30, 0x100(r1)
	mr       r6, r29
	addi     r3, r1, 0x38
	stw      r0, 0x104(r1)
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	lfd      f0, 0x100(r1)
	stfs     f27, 0x14(r1)
	fsubs    f0, f0, f29
	stfs     f27, 0x18(r1)
	fmuls    f0, f28, f0
	stfs     f27, 0x1c(r1)
	stfs     f30, 0xc(r1)
	stfs     f0, 8(r1)
	stfs     f30, 0x10(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	addi     r4, r1, 0x38
	mr       r3, r26
	mr       r5, r4
	bl       PSMTXConcat
	addi     r3, r25, 0x8c
	addi     r4, r1, 0x38
	addi     r5, r1, 0x98
	bl       PSMTXConcat
	addi     r3, r1, 0x98
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r28, 0

lbl_804263D0:
	addi     r3, r28, 1
	xoris    r4, r28, 0x8000
	slwi     r0, r3, 0x1b
	stw      r4, 0x104(r1)
	srwi     r3, r3, 0x1f
	subf     r0, r3, r0
	stw      r30, 0x100(r1)
	rotlwi   r0, r0, 5
	add      r0, r0, r3
	lfd      f0, 0x100(r1)
	xoris    r0, r0, 0x8000
	stw      r30, 0xf8(r1)
	fsubs    f0, f0, f29
	stw      r0, 0xfc(r1)
	fmuls    f2, f28, f0
	lfd      f0, 0xf8(r1)
	fsubs    f0, f0, f29
	fmr      f1, f2
	fcmpo    cr0, f2, f30
	fmuls    f3, f28, f0
	bge      lbl_80426428
	fneg     f1, f2

lbl_80426428:
	fmuls    f0, f1, f31
	fcmpo    cr0, f2, f30
	fctiwz   f0, f0
	stfd     f0, 0xf0(r1)
	lwz      r0, 0xf4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f0, 4(r3)
	fmuls    f26, f25, f0
	bge      lbl_8042647C
	lfs      f0, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xe8(r1)
	lwz      r0, 0xec(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8042649C

lbl_8042647C:
	fmuls    f0, f2, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8042649C:
	fmr      f1, f3
	fcmpo    cr0, f3, f30
	fmuls    f23, f25, f0
	bge      lbl_804264B0
	fneg     f1, f3

lbl_804264B0:
	fmuls    f0, f1, f31
	fcmpo    cr0, f3, f30
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f0, 4(r3)
	fmuls    f24, f25, f0
	bge      lbl_80426504
	lfs      f0, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f22, f0
	b        lbl_80426524

lbl_80426504:
	fmuls    f0, f3, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f22, r3, r0

lbl_80426524:
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	bl       GXBegin
	stfs     f23, -0x8000(r24)
	addi     r28, r28, 1
	fmuls    f0, f25, f22
	cmpwi    r28, 0x10
	stfs     f30, -0x8000(r24)
	stfs     f26, -0x8000(r24)
	lbz      r5, 0x87(r25)
	lbz      r4, 0x86(r25)
	lbz      r3, 0x85(r25)
	lbz      r0, 0x84(r25)
	stb      r0, -0x8000(r24)
	stb      r3, -0x8000(r24)
	stb      r4, -0x8000(r24)
	stb      r5, -0x8000(r24)
	stfs     f0, -0x8000(r24)
	stfs     f30, -0x8000(r24)
	stfs     f24, -0x8000(r24)
	lbz      r5, 0x87(r25)
	lbz      r4, 0x86(r25)
	lbz      r3, 0x85(r25)
	lbz      r0, 0x84(r25)
	stb      r0, -0x8000(r24)
	stb      r3, -0x8000(r24)
	stb      r4, -0x8000(r24)
	stb      r5, -0x8000(r24)
	blt      lbl_804263D0
	addi     r27, r27, 1
	cmpwi    r27, 0x10
	blt      lbl_8042635C
	psq_l    f31, 456(r1), 0, qr0
	lfd      f31, 0x1c0(r1)
	psq_l    f30, 440(r1), 0, qr0
	lfd      f30, 0x1b0(r1)
	psq_l    f29, 424(r1), 0, qr0
	lfd      f29, 0x1a0(r1)
	psq_l    f28, 408(r1), 0, qr0
	lfd      f28, 0x190(r1)
	psq_l    f27, 392(r1), 0, qr0
	lfd      f27, 0x180(r1)
	psq_l    f26, 376(r1), 0, qr0
	lfd      f26, 0x170(r1)
	psq_l    f25, 360(r1), 0, qr0
	lfd      f25, 0x160(r1)
	psq_l    f24, 344(r1), 0, qr0
	lfd      f24, 0x150(r1)
	psq_l    f23, 328(r1), 0, qr0
	lfd      f23, 0x140(r1)
	psq_l    f22, 312(r1), 0, qr0
	lfd      f22, 0x130(r1)
	lmw      r24, 0x110(r1)
	lwz      r0, 0x1d4(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0005B4
 */
void Graphics::drawCylinder(Vector3f&, Vector3f&, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void Graphics::loadPrimViewMtx()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0005F8
 */
void Graphics::drawTube(Vector3f&, Vector3f&, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void Graphics::drawMesh(Matrixf*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042660C
 * Size:	0002B8
 */
void Graphics::drawAxis(float, Matrixf*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	fmr      f31, f1
	mr       r26, r3
	lis      r3, lbl_80499C48@ha
	mr       r27, r4
	mr       r30, r26
	li       r29, 0
	addi     r28, r3, lbl_80499C48@l
	b        lbl_80426664

lbl_80426644:
	lwz      r3, 4(r30)
	mr       r4, r28
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8042665C
	b        lbl_80426674

lbl_8042665C:
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_80426664:
	lhz      r0, 0(r26)
	cmpw     r29, r0
	blt      lbl_80426644
	li       r29, -1

lbl_80426674:
	cmpwi    r29, -1
	bne      lbl_804266B4
	lhz      r0, 0(r26)
	cmplwi   r0, 0x20
	bge      lbl_804266BC
	rlwinm   r0, r0, 2, 0xe, 0x1d
	lis      r3, lbl_80499C48@ha
	addi     r4, r3, lbl_80499C48@l
	add      r3, r26, r0
	stw      r4, 4(r3)
	lhz      r3, 0(r26)
	bl       GXSetDrawSync
	lhz      r3, 0(r26)
	addi     r0, r3, 1
	sth      r0, 0(r26)
	b        lbl_804266BC

lbl_804266B4:
	clrlwi   r3, r29, 0x10
	bl       GXSetDrawSync

lbl_804266BC:
	cmplwi   r27, 0
	lbz      r31, 0x84(r26)
	lbz      r30, 0x85(r26)
	lbz      r29, 0x86(r26)
	lbz      r28, 0x87(r26)
	beq      lbl_804266F4
	mr       r4, r27
	addi     r3, r26, 0x8c
	addi     r5, r1, 8
	bl       PSMTXConcat
	addi     r3, r1, 8
	li       r4, 0
	bl       GXLoadPosMtxImm
	b        lbl_80426700

lbl_804266F4:
	addi     r3, r26, 0x8c
	li       r4, 0
	bl       GXLoadPosMtxImm

lbl_80426700:
	li       r6, 0xff
	li       r0, 0
	stb      r6, 0x84(r26)
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	stb      r0, 0x85(r26)
	stb      r0, 0x86(r26)
	stb      r6, 0x87(r26)
	bl       GXBegin
	lfs      f0, lbl_805204B8@sda21(r2)
	lis      r11, 0xCC008000@ha
	li       r6, 0
	li       r0, 0xff
	stfs     f0, 0xCC008000@l(r11)
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	stfs     f0, -0x8000(r11)
	stfs     f0, -0x8000(r11)
	lbz      r10, 0x87(r26)
	lbz      r9, 0x86(r26)
	lbz      r8, 0x85(r26)
	lbz      r7, 0x84(r26)
	stb      r7, -0x8000(r11)
	stb      r8, -0x8000(r11)
	stb      r9, -0x8000(r11)
	stb      r10, -0x8000(r11)
	stfs     f31, -0x8000(r11)
	stfs     f0, -0x8000(r11)
	stfs     f0, -0x8000(r11)
	lbz      r10, 0x87(r26)
	lbz      r9, 0x86(r26)
	lbz      r8, 0x85(r26)
	lbz      r7, 0x84(r26)
	stb      r7, -0x8000(r11)
	stb      r8, -0x8000(r11)
	stb      r9, -0x8000(r11)
	stb      r10, -0x8000(r11)
	stb      r6, 0x84(r26)
	stb      r0, 0x85(r26)
	stb      r6, 0x86(r26)
	stb      r0, 0x87(r26)
	bl       GXBegin
	lfs      f0, lbl_805204B8@sda21(r2)
	lis      r11, 0xCC008000@ha
	li       r6, 0
	li       r0, 0xff
	stfs     f0, 0xCC008000@l(r11)
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	stfs     f0, -0x8000(r11)
	stfs     f0, -0x8000(r11)
	lbz      r10, 0x87(r26)
	lbz      r9, 0x86(r26)
	lbz      r8, 0x85(r26)
	lbz      r7, 0x84(r26)
	stb      r7, -0x8000(r11)
	stb      r8, -0x8000(r11)
	stb      r9, -0x8000(r11)
	stb      r10, -0x8000(r11)
	stfs     f0, -0x8000(r11)
	stfs     f31, -0x8000(r11)
	stfs     f0, -0x8000(r11)
	lbz      r10, 0x87(r26)
	lbz      r9, 0x86(r26)
	lbz      r8, 0x85(r26)
	lbz      r7, 0x84(r26)
	stb      r7, -0x8000(r11)
	stb      r8, -0x8000(r11)
	stb      r9, -0x8000(r11)
	stb      r10, -0x8000(r11)
	stb      r6, 0x84(r26)
	stb      r6, 0x85(r26)
	stb      r0, 0x86(r26)
	stb      r0, 0x87(r26)
	bl       GXBegin
	lfs      f0, lbl_805204B8@sda21(r2)
	lis      r6, 0xCC008000@ha
	stfs     f0, 0xCC008000@l(r6)
	stfs     f0, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	lbz      r5, 0x87(r26)
	lbz      r4, 0x86(r26)
	lbz      r3, 0x85(r26)
	lbz      r0, 0x84(r26)
	stb      r0, -0x8000(r6)
	stb      r3, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stfs     f31, -0x8000(r6)
	lbz      r5, 0x87(r26)
	lbz      r4, 0x86(r26)
	lbz      r3, 0x85(r26)
	lbz      r0, 0x84(r26)
	stb      r0, -0x8000(r6)
	stb      r3, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r31, 0x84(r26)
	stb      r30, 0x85(r26)
	stb      r29, 0x86(r26)
	stb      r28, 0x87(r26)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000274
 */
void Graphics::drawMarker(float, Matrixf*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001EC
 */
void Graphics::drawRect(Rectf&, Color4&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B8
 */
void Graphics::drawRect(Rectf&, JUTTexture*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804268C4
 * Size:	000024
 */
void Graphics::clearZBuffer(Rect<float>&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_805204E8@sda21(r2)
	stw      r0, 0x14(r1)
	bl       "fillZBuffer__8GraphicsFR7Rect<f>f"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804268E8
 * Size:	0003D0
 */
void Graphics::fillZBuffer(Rect<float>&, float)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stmw     r27, 0x7c(r1)
	fmr      f29, f1
	mr       r27, r3
	lis      r3, lbl_80499C38@ha
	mr       r31, r4
	mr       r30, r27
	li       r29, 0
	addi     r28, r3, lbl_80499C38@l
	b        lbl_80426950

lbl_80426930:
	lwz      r3, 4(r30)
	mr       r4, r28
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80426948
	b        lbl_80426960

lbl_80426948:
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_80426950:
	lhz      r0, 0(r27)
	cmpw     r29, r0
	blt      lbl_80426930
	li       r29, -1

lbl_80426960:
	cmpwi    r29, -1
	bne      lbl_804269A0
	lhz      r0, 0(r27)
	cmplwi   r0, 0x20
	bge      lbl_804269A8
	rlwinm   r0, r0, 2, 0xe, 0x1d
	lis      r3, lbl_80499C38@ha
	addi     r4, r3, lbl_80499C38@l
	add      r3, r27, r0
	stw      r4, 4(r3)
	lhz      r3, 0(r27)
	bl       GXSetDrawSync
	lhz      r3, 0(r27)
	addi     r0, r3, 1
	sth      r0, 0(r27)
	b        lbl_804269A8

lbl_804269A0:
	clrlwi   r3, r29, 0x10
	bl       GXSetDrawSync

lbl_804269A8:
	bl       initGX__8GraphicsFv
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 4
	li       r4, 1
	li       r5, 1
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	mr       r3, r27
	bl       disableLight__8GraphicsFv
	mr       r3, r27
	bl       clearVtxDesc__8GraphicsFv
	mr       r3, r27
	li       r4, 9
	li       r5, 1
	bl       setVtxDesc__8GraphicsF7_GXAttr11_GXAttrType
	mr       r3, r27
	li       r4, 0xb
	li       r5, 1
	bl       setVtxDesc__8GraphicsF7_GXAttr11_GXAttrType
	mr       r3, r27
	li       r4, 0
	li       r5, 9
	li       r6, 1
	li       r7, 4
	li       r8, 0
	bl setVtxAttrFmt__8GraphicsF9_GXVtxFmt7_GXAttr10_GXCompCnt11_GXCompTypeUc mr
r3, r27 li       r4, 0 li       r5, 0xb li       r6, 1 li       r7, 5 li r8, 0
	bl setVtxAttrFmt__8GraphicsF9_GXVtxFmt7_GXAttr10_GXCompCnt11_GXCompTypeUc li
r3, 0 bl       GXSetCullMode li       r3, 6 li       r4, 0 bl GXSetLineWidth li
r3, 0 li       r4, 1 li       r5, 1 li       r6, 0 bl       GXSetBlendMode li
r3, 1 li       r4, 1 li       r5, 1 bl       GXSetZMode addi     r3, r27, 0x8c
	li       r4, 0
	bl       GXLoadPosMtxImm
	lfs      f2, 4(r31)
	lfs      f0, 0xc(r31)
	lfs      f1, 0(r31)
	lfs      f3, 8(r31)
	fsubs    f4, f0, f2
	lfs      f5, lbl_805204B8@sda21(r2)
	fsubs    f3, f3, f1
	lfs      f6, lbl_805204C8@sda21(r2)
	bl       GXSetViewport
	lfs      f31, 4(r31)
	lfs      f0, 0xc(r31)
	lfs      f30, 0(r31)
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	lfs      f0, 8(r31)
	mr       r28, r3
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r29, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r30, r3
	bl       __cvt_fp2unsigned
	mr       r4, r30
	mr       r5, r29
	mr       r6, r28
	bl       GXSetScissor
	li       r3, 0
	bl       GXSetColorUpdate
	li       r3, 1
	li       r4, 7
	li       r5, 1
	bl       GXSetZMode
	lfs      f1, 4(r31)
	addi     r3, r1, 0x38
	lfs      f2, 0xc(r31)
	lfs      f3, 0(r31)
	lfs      f4, 8(r31)
	lfs      f5, lbl_805204CC@sda21(r2)
	lfs      f6, lbl_805204C8@sda21(r2)
	bl       C_MTXOrtho
	addi     r3, r1, 0x38
	li       r4, 1
	bl       GXSetProjection
	addi     r3, r1, 8
	bl       PSMTXIdentity
	addi     r3, r1, 8
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetCullMode
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xb
	li       r5, 1
	li       r6, 5
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f1, 4(r31)
	lis      r8, 0xCC008000@ha
	lfs      f0, 0(r31)
	li       r7, 0xa
	li       r6, 0x46
	li       r0, 0xff
	stfs     f0, 0xCC008000@l(r8)
	li       r3, 1
	li       r4, 1
	li       r5, 1
	stfs     f1, -0x8000(r8)
	stfs     f29, -0x8000(r8)
	stb      r7, -0x8000(r8)
	stb      r6, -0x8000(r8)
	stb      r7, -0x8000(r8)
	stb      r0, -0x8000(r8)
	lfs      f1, 0xc(r31)
	lfs      f0, 0(r31)
	stfs     f0, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	stfs     f29, -0x8000(r8)
	stb      r7, -0x8000(r8)
	stb      r6, -0x8000(r8)
	stb      r7, -0x8000(r8)
	stb      r0, -0x8000(r8)
	lfs      f1, 0xc(r31)
	lfs      f0, 8(r31)
	stfs     f0, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	stfs     f29, -0x8000(r8)
	stb      r7, -0x8000(r8)
	stb      r6, -0x8000(r8)
	stb      r7, -0x8000(r8)
	stb      r0, -0x8000(r8)
	lfs      f1, 4(r31)
	lfs      f0, 8(r31)
	stfs     f0, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	stfs     f29, -0x8000(r8)
	stb      r7, -0x8000(r8)
	stb      r6, -0x8000(r8)
	stb      r7, -0x8000(r8)
	stb      r0, -0x8000(r8)
	bl       GXSetZMode
	li       r3, 1
	bl       GXSetColorUpdate
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	lmw      r27, 0x7c(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00045C
 */
void Graphics::drawTile(Sys::Sphere&, Sys::Sphere&, JUTTexture*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80426CB8
 * Size:	00070C
 */
void Graphics::drawCone(Vector3f&, Vector3f&, float, int)
{
	/*
	stwu     r1, -0x190(r1)
	mflr     r0
	stw      r0, 0x194(r1)
	stfd     f31, 0x180(r1)
	psq_st   f31, 392(r1), 0, qr0
	stfd     f30, 0x170(r1)
	psq_st   f30, 376(r1), 0, qr0
	stfd     f29, 0x160(r1)
	psq_st   f29, 360(r1), 0, qr0
	stfd     f28, 0x150(r1)
	psq_st   f28, 344(r1), 0, qr0
	stfd     f27, 0x140(r1)
	psq_st   f27, 328(r1), 0, qr0
	stfd     f26, 0x130(r1)
	psq_st   f26, 312(r1), 0, qr0
	stfd     f25, 0x120(r1)
	psq_st   f25, 296(r1), 0, qr0
	stfd     f24, 0x110(r1)
	psq_st   f24, 280(r1), 0, qr0
	stfd     f23, 0x100(r1)
	psq_st   f23, 264(r1), 0, qr0
	stfd     f22, 0xf0(r1)
	psq_st   f22, 248(r1), 0, qr0
	stfd     f21, 0xe0(r1)
	psq_st   f21, 232(r1), 0, qr0
	stmw     r24, 0xc0(r1)
	lfs      f3, 4(r5)
	mr       r24, r3
	lfs      f2, 4(r4)
	mr       r25, r6
	lfs      f0, lbl_805204EC@sda21(r2)
	fsubs    f2, f3, f2
	lfs      f6, 0(r5)
	lfs      f5, 0(r4)
	fmuls    f4, f0, f1
	lfs      f3, 8(r5)
	lfs      f1, 8(r4)
	fsubs    f0, f6, f5
	lfs      f5, lbl_805204E4@sda21(r2)
	fsubs    f1, f3, f1
	lfs      f3, lbl_805204B8@sda21(r2)
	fmuls    f6, f2, f2
	fmuls    f7, f5, f4
	fmuls    f5, f1, f1
	fmadds   f4, f0, f0, f6
	fadds    f31, f5, f4
	fcmpo    cr0, f31, f3
	ble      lbl_80426D88
	ble      lbl_80426D8C
	frsqrte  f3, f31
	fmuls    f31, f3, f31
	b        lbl_80426D8C

lbl_80426D88:
	fmr      f31, f3

lbl_80426D8C:
	lfs      f3, lbl_805204B8@sda21(r2)
	fcmpo    cr0, f7, f3
	bge      lbl_80426DC4
	lfs      f3, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f3, f7, f3
	fctiwz   f3, f3
	stfd     f3, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r3, r0
	fneg     f8, f3
	b        lbl_80426DE8

lbl_80426DC4:
	lfs      f3, lbl_805204DC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f3, f7, f3
	fctiwz   f3, f3
	stfd     f3, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f8, r3, r0

lbl_80426DE8:
	lfs      f3, lbl_805204B8@sda21(r2)
	fmr      f5, f7
	fcmpo    cr0, f7, f3
	bge      lbl_80426DFC
	fneg     f5, f7

lbl_80426DFC:
	lfs      f6, lbl_805204C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f4, lbl_805204DC@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fdivs    f7, f6, f31
	lfs      f9, lbl_805204B8@sda21(r2)
	lfs      f3, lbl_805204F0@sda21(r2)
	fmuls    f4, f5, f4
	fmuls    f2, f2, f7
	fmuls    f0, f0, f7
	fctiwz   f5, f4
	fmuls    f4, f2, f6
	fmuls    f1, f1, f7
	stfd     f5, 0x78(r1)
	fmadds   f4, f0, f9, f4
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	fmadds   f4, f1, f9, f4
	add      r3, r3, r0
	lfs      f5, 4(r3)
	fabs     f4, f4
	fdivs    f5, f8, f5
	frsp     f4, f4
	fmuls    f30, f31, f5
	fcmpo    cr0, f4, f3
	bge      lbl_80426F30
	fmuls    f3, f9, f1
	fmuls    f7, f9, f2
	fmsubs   f4, f9, f0, f3
	fnmsubs  f5, f6, f0, f7
	fmsubs   f3, f6, f1, f7
	fmuls    f6, f4, f4
	fmuls    f7, f5, f5
	fmadds   f6, f3, f3, f6
	fadds    f7, f7, f6
	fcmpo    cr0, f7, f9
	ble      lbl_80426EA0
	ble      lbl_80426EA4
	frsqrte  f6, f7
	fmuls    f7, f6, f7
	b        lbl_80426EA4

lbl_80426EA0:
	fmr      f7, f9

lbl_80426EA4:
	lfs      f6, lbl_805204B8@sda21(r2)
	fcmpo    cr0, f7, f6
	ble      lbl_80426EC4
	lfs      f6, lbl_805204C8@sda21(r2)
	fdivs    f6, f6, f7
	fmuls    f3, f3, f6
	fmuls    f4, f4, f6
	fmuls    f5, f5, f6

lbl_80426EC4:
	fmuls    f6, f3, f1
	lfs      f9, lbl_805204B8@sda21(r2)
	fmuls    f8, f4, f0
	fmuls    f10, f5, f2
	fmsubs   f7, f5, f0, f6
	fmsubs   f8, f3, f2, f8
	fmsubs   f6, f4, f1, f10
	fmuls    f10, f7, f7
	fmuls    f11, f8, f8
	fmadds   f10, f6, f6, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_80426F08
	ble      lbl_80426F0C
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_80426F0C

lbl_80426F08:
	fmr      f10, f9

lbl_80426F0C:
	lfs      f9, lbl_805204B8@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_80426FF8
	lfs      f9, lbl_805204C8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f6, f6, f9
	fmuls    f7, f7, f9
	fmuls    f8, f8, f9
	b        lbl_80426FF8

lbl_80426F30:
	fmuls    f4, f9, f0
	fmuls    f3, f9, f2
	fnmsubs  f7, f6, f1, f4
	fmsubs   f8, f6, f2, f4
	fmsubs   f6, f9, f1, f3
	fmuls    f3, f7, f7
	fmuls    f4, f8, f8
	fmadds   f3, f6, f6, f3
	fadds    f4, f4, f3
	fcmpo    cr0, f4, f9
	ble      lbl_80426F6C
	ble      lbl_80426F70
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_80426F70

lbl_80426F6C:
	fmr      f4, f9

lbl_80426F70:
	lfs      f3, lbl_805204B8@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_80426F90
	lfs      f3, lbl_805204C8@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f6, f6, f3
	fmuls    f7, f7, f3
	fmuls    f8, f8, f3

lbl_80426F90:
	fmuls    f3, f6, f1
	lfs      f9, lbl_805204B8@sda21(r2)
	fmuls    f5, f7, f0
	fmuls    f10, f8, f2
	fmsubs   f4, f8, f0, f3
	fmsubs   f5, f6, f2, f5
	fmsubs   f3, f7, f1, f10
	fmuls    f10, f4, f4
	fmuls    f11, f5, f5
	fmadds   f10, f3, f3, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_80426FD4
	ble      lbl_80426FD8
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_80426FD8

lbl_80426FD4:
	fmr      f10, f9

lbl_80426FD8:
	lfs      f9, lbl_805204B8@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_80426FF8
	lfs      f9, lbl_805204C8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f3, f3, f9
	fmuls    f4, f4, f9
	fmuls    f5, f5, f9

lbl_80426FF8:
	stfs     f3, 0x38(r1)
	addi     r3, r24, 0x8c
	addi     r5, r1, 8
	stfs     f4, 0x48(r1)
	stfs     f5, 0x58(r1)
	stfs     f6, 0x3c(r1)
	stfs     f7, 0x4c(r1)
	stfs     f8, 0x5c(r1)
	stfs     f0, 0x40(r1)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x60(r1)
	lfs      f0, 0(r4)
	stfs     f0, 0x44(r1)
	lfs      f0, 4(r4)
	stfs     f0, 0x54(r1)
	lfs      f0, 8(r4)
	addi     r4, r1, 0x38
	stfs     f0, 0x64(r1)
	bl       PSMTXConcat
	addi     r3, r1, 8
	li       r4, 0
	bl       GXLoadPosMtxImm
	lis      r4, "zero__10Vector3<f>"@ha
	lis      r3, sincosTable___5JMath@ha
	lfs      f25, lbl_805204F4@sda21(r2)
	addi     r27, r4, "zero__10Vector3<f>"@l
	lfd      f26, lbl_805204D0@sda21(r2)
	xoris    r29, r25, 0x8000
	lfs      f27, lbl_805204BC@sda21(r2)
	addi     r30, r3, sincosTable___5JMath@l
	lfs      f28, lbl_805204B8@sda21(r2)
	li       r26, 0
	lfs      f29, lbl_805204DC@sda21(r2)
	lis      r28, 0x4330
	lis      r31, 0xcc01
	b        lbl_80427350

lbl_80427088:
	xoris    r0, r26, 0x8000
	stw      r28, 0x78(r1)
	stw      r0, 0x7c(r1)
	lfd      f0, 0x78(r1)
	stw      r29, 0x74(r1)
	fsubs    f0, f0, f26
	stw      r28, 0x70(r1)
	fsubs    f1, f0, f27
	lfd      f0, 0x70(r1)
	fsubs    f0, f0, f26
	fmuls    f1, f25, f1
	fdivs    f1, f1, f0
	fmr      f0, f1
	fcmpo    cr0, f1, f28
	bge      lbl_804270C8
	fneg     f0, f1

lbl_804270C8:
	fmuls    f0, f0, f29
	fcmpo    cr0, f1, f28
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r30, r0
	lfs      f0, 4(r3)
	fmuls    f24, f30, f0
	bge      lbl_8042711C
	lfs      f0, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8042713C

lbl_8042711C:
	fmuls    f0, f1, f29
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8042713C:
	addi     r0, r26, 1
	stw      r28, 0x90(r1)
	xoris    r0, r0, 0x8000
	fmuls    f23, f30, f0
	stw      r0, 0x94(r1)
	lfd      f0, 0x90(r1)
	stw      r29, 0x9c(r1)
	fsubs    f0, f0, f26
	stw      r28, 0x98(r1)
	fsubs    f1, f0, f27
	lfd      f0, 0x98(r1)
	fsubs    f0, f0, f26
	fmuls    f1, f25, f1
	fdivs    f1, f1, f0
	fmr      f0, f1
	fcmpo    cr0, f1, f28
	bge      lbl_80427184
	fneg     f0, f1

lbl_80427184:
	fmuls    f0, f0, f29
	fcmpo    cr0, f1, f28
	fctiwz   f0, f0
	stfd     f0, 0xa0(r1)
	lwz      r0, 0xa4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r30, r0
	lfs      f0, 4(r3)
	fmuls    f22, f30, f0
	bge      lbl_804271D8
	lfs      f0, lbl_805204E0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_804271F8

lbl_804271D8:
	fmuls    f0, f1, f29
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_804271F8:
	fmuls    f21, f30, f0
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	bl       GXBegin
	lfs      f0, 0(r27)
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	stfs     f0, -0x8000(r31)
	lfs      f0, 4(r27)
	stfs     f0, -0x8000(r31)
	lfs      f0, 8(r27)
	stfs     f0, -0x8000(r31)
	lbz      r8, 0x87(r24)
	lbz      r7, 0x86(r24)
	lbz      r6, 0x85(r24)
	lbz      r0, 0x84(r24)
	stb      r0, -0x8000(r31)
	stb      r6, -0x8000(r31)
	stb      r7, -0x8000(r31)
	stb      r8, -0x8000(r31)
	stfs     f24, -0x8000(r31)
	stfs     f23, -0x8000(r31)
	stfs     f31, -0x8000(r31)
	lbz      r8, 0x87(r24)
	lbz      r7, 0x86(r24)
	lbz      r6, 0x85(r24)
	lbz      r0, 0x84(r24)
	stb      r0, -0x8000(r31)
	stb      r6, -0x8000(r31)
	stb      r7, -0x8000(r31)
	stb      r8, -0x8000(r31)
	bl       GXBegin
	lfs      f0, 0(r27)
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	stfs     f0, -0x8000(r31)
	lfs      f0, 4(r27)
	stfs     f0, -0x8000(r31)
	lfs      f0, 8(r27)
	stfs     f0, -0x8000(r31)
	lbz      r8, 0x87(r24)
	lbz      r7, 0x86(r24)
	lbz      r6, 0x85(r24)
	lbz      r0, 0x84(r24)
	stb      r0, -0x8000(r31)
	stb      r6, -0x8000(r31)
	stb      r7, -0x8000(r31)
	stb      r8, -0x8000(r31)
	stfs     f22, -0x8000(r31)
	stfs     f21, -0x8000(r31)
	stfs     f31, -0x8000(r31)
	lbz      r8, 0x87(r24)
	lbz      r7, 0x86(r24)
	lbz      r6, 0x85(r24)
	lbz      r0, 0x84(r24)
	stb      r0, -0x8000(r31)
	stb      r6, -0x8000(r31)
	stb      r7, -0x8000(r31)
	stb      r8, -0x8000(r31)
	bl       GXBegin
	stfs     f24, -0x8000(r31)
	addi     r26, r26, 1
	stfs     f23, -0x8000(r31)
	stfs     f31, -0x8000(r31)
	lbz      r5, 0x87(r24)
	lbz      r4, 0x86(r24)
	lbz      r3, 0x85(r24)
	lbz      r0, 0x84(r24)
	stb      r0, -0x8000(r31)
	stb      r3, -0x8000(r31)
	stb      r4, -0x8000(r31)
	stb      r5, -0x8000(r31)
	stfs     f22, -0x8000(r31)
	stfs     f21, -0x8000(r31)
	stfs     f31, -0x8000(r31)
	lbz      r5, 0x87(r24)
	lbz      r4, 0x86(r24)
	lbz      r3, 0x85(r24)
	lbz      r0, 0x84(r24)
	stb      r0, -0x8000(r31)
	stb      r3, -0x8000(r31)
	stb      r4, -0x8000(r31)
	stb      r5, -0x8000(r31)

lbl_80427350:
	cmpw     r26, r25
	blt      lbl_80427088
	psq_l    f31, 392(r1), 0, qr0
	lfd      f31, 0x180(r1)
	psq_l    f30, 376(r1), 0, qr0
	lfd      f30, 0x170(r1)
	psq_l    f29, 360(r1), 0, qr0
	lfd      f29, 0x160(r1)
	psq_l    f28, 344(r1), 0, qr0
	lfd      f28, 0x150(r1)
	psq_l    f27, 328(r1), 0, qr0
	lfd      f27, 0x140(r1)
	psq_l    f26, 312(r1), 0, qr0
	lfd      f26, 0x130(r1)
	psq_l    f25, 296(r1), 0, qr0
	lfd      f25, 0x120(r1)
	psq_l    f24, 280(r1), 0, qr0
	lfd      f24, 0x110(r1)
	psq_l    f23, 264(r1), 0, qr0
	lfd      f23, 0x100(r1)
	psq_l    f22, 248(r1), 0, qr0
	lfd      f22, 0xf0(r1)
	psq_l    f21, 232(r1), 0, qr0
	lfd      f21, 0xe0(r1)
	lmw      r24, 0xc0(r1)
	lwz      r0, 0x194(r1)
	mtlr     r0
	addi     r1, r1, 0x190
	blr
	*/
}

/*
 * --INFO--
 * Address:	804273C4
 * Size:	0000A4
 */
Graphics::Graphics()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__8Graphics@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__8Graphics@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0x26c(r3)
	addi     r3, r31, 0xbc
	bl       __ct__13J2DOrthoGraphFv
	addi     r3, r31, 0x190
	bl       __ct__13J2DPerspGraphFv
	li       r4, 0
	lis      r3, graphicsTokenCallback__FUs@ha
	stw      r4, 0x260(r31)
	li       r0, 0xff
	addi     r3, r3, graphicsTokenCallback__FUs@l
	stw      r4, 0x264(r31)
	stw      r4, 0x268(r31)
	stb      r0, 0x84(r31)
	stb      r0, 0x85(r31)
	stb      r0, 0x86(r31)
	stb      r0, 0x87(r31)
	stb      r0, 0x88(r31)
	stb      r0, 0x89(r31)
	stb      r0, 0x8a(r31)
	stb      r0, 0x8b(r31)
	sth      r4, 0(r31)
	bl       GXSetDrawSyncCallback
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x25c(r31)
	bl       setupJ2DOrthoGraphDefault__8GraphicsFv
	mr       r3, r31
	bl       setupJ2DPerspGraphDefault__8GraphicsFv
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
 * Address:	........
 * Size:	00016C
 */
void Graphics::initJ2DOrthoGraph(J2DOrthoGraph*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void Graphics::initJ2DPerspGraph(J2DPerspGraph*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80427468
 * Size:	00016C
 */
void Graphics::setupJ2DOrthoGraphDefault()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	bl       getRenderModeObj__6SystemFv
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	addi     r3, r30, 0xbc
	lfs      f1, lbl_805204B8@sda21(r2)
	stw      r4, 0x2c(r1)
	lwz      r12, 0xbc(r30)
	fmr      f2, f1
	stw      r0, 0x28(r1)
	lfd      f4, lbl_805204C0@sda21(r2)
	lfd      f0, 0x28(r1)
	stw      r31, 0x34(r1)
	lwz      r12, 0x10(r12)
	fsubs    f3, f0, f4
	stw      r0, 0x30(r1)
	lfd      f0, 0x30(r1)
	fsubs    f4, f0, f4
	mtctr    r12
	bctrl
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 6(r3)
	lis      r0, 0x4330
	lwz      r3, gScissorOffset@sda21(r13)
	stw      r0, 0x38(r1)
	add      r0, r3, r4
	lfd      f1, lbl_805204D0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0x3c(r1)
	lfd      f0, 0x38(r1)
	fsubs    f31, f0, f1
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_805204B8@sda21(r2)
	addi     r3, r30, 0xbc
	stw      r4, 0x44(r1)
	addi     r4, r1, 8
	fadds    f0, f3, f31
	lfd      f2, lbl_805204C0@sda21(r2)
	stw      r0, 0x40(r1)
	lfd      f1, 0x40(r1)
	stfs     f3, 8(r1)
	fsubs    f1, f1, f2
	stfs     f3, 0xc(r1)
	fadds    f1, f3, f1
	stfs     f0, 0x14(r1)
	stfs     f1, 0x10(r1)
	bl       "scissor__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f5, lbl_805204B8@sda21(r2)
	addi     r3, r30, 0xbc
	stw      r4, 0x4c(r1)
	addi     r4, r1, 0x18
	lfd      f4, lbl_805204C0@sda21(r2)
	stw      r0, 0x48(r1)
	lfs      f1, lbl_805204F8@sda21(r2)
	lfd      f0, 0x48(r1)
	stw      r31, 0x54(r1)
	fsubs    f3, f0, f4
	lfs      f2, lbl_805204FC@sda21(r2)
	stw      r0, 0x50(r1)
	lfd      f0, 0x50(r1)
	stfs     f5, 0x18(r1)
	fsubs    f0, f0, f4
	stfs     f5, 0x1c(r1)
	stfs     f3, 0x20(r1)
	stfs     f0, 0x24(r1)
	bl       "setOrtho__13J2DOrthoGraphFRCQ29JGeometry8TBox2<f>ff"
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	804275D4
 * Size:	00011C
 */
void Graphics::setupJ2DPerspGraphDefault()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	addi     r3, r30, 0x190
	lfs      f1, lbl_805204B8@sda21(r2)
	stw      r4, 0x1c(r1)
	lwz      r12, 0x190(r30)
	fmr      f2, f1
	stw      r0, 0x18(r1)
	lfd      f4, lbl_805204C0@sda21(r2)
	lfd      f0, 0x18(r1)
	stw      r31, 0x24(r1)
	lwz      r12, 0x10(r12)
	fsubs    f3, f0, f4
	stw      r0, 0x20(r1)
	lfd      f0, 0x20(r1)
	fsubs    f4, f0, f4
	mtctr    r12
	bctrl
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 6(r3)
	lis      r0, 0x4330
	lwz      r3, gScissorOffset@sda21(r13)
	stw      r0, 0x28(r1)
	add      r0, r3, r4
	lfd      f1, lbl_805204D0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0x2c(r1)
	lfd      f0, 0x28(r1)
	fsubs    f31, f0, f1
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_805204B8@sda21(r2)
	addi     r3, r30, 0x190
	stw      r4, 0x34(r1)
	addi     r4, r1, 8
	fadds    f0, f3, f31
	lfd      f2, lbl_805204C0@sda21(r2)
	stw      r0, 0x30(r1)
	lfd      f1, 0x30(r1)
	stfs     f3, 8(r1)
	fsubs    f1, f1, f2
	stfs     f3, 0xc(r1)
	fadds    f1, f3, f1
	stfs     f0, 0x14(r1)
	stfs     f1, 0x10(r1)
	bl       "scissor__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	lfs      f1, lbl_80520500@sda21(r2)
	addi     r3, r30, 0x190
	lfs      f2, lbl_80520504@sda21(r2)
	lfs      f3, lbl_80520508@sda21(r2)
	bl       set__13J2DPerspGraphFfff
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	804276F0
 * Size:	000020
 */
void Graphics::clearVtxDesc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       GXClearVtxDesc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80427710
 * Size:	000028
 */
void Graphics::setVtxDesc(_GXAttr, _GXAttrType)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	mr       r4, r5
	stw      r0, 0x14(r1)
	bl       GXSetVtxDesc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80427738
 * Size:	000034
 */
void Graphics::setVtxAttrFmt(_GXVtxFmt, _GXAttr, _GXCompCnt, _GXCompType, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  mr        r4, r5
	  stw       r0, 0x14(r1)
	  mr        r5, r6
	  mr        r6, r7
	  mr        r7, r8
	  bl        -0x343050
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001DC
 */
void Graphics::drawRectangle(Rect<float>&, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042776C
 * Size:	00003C
 */
void Graphics::disableLight()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 4
	li       r4, 0
	stw      r0, 0x14(r1)
	li       r5, 1
	li       r6, 1
	li       r7, 1
	li       r8, 2
	li       r9, 2
	bl       GXSetChanCtrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Graphics::disableTexture()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804277A8
 * Size:	000100
 */
void Graphics::setTextureGX()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 4
	li       r4, 0
	stw      r0, 0x14(r1)
	li       r5, 1
	li       r6, 1
	li       r7, 1
	li       r8, 2
	li       r9, 2
	bl       GXSetChanCtrl
	bl       GXClearVtxDesc
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 0
	bl       GXSetTevOp
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 1
	li       r7, 4
	bl       GXSetVtxAttrFmt
	li       r3, 2
	bl       GXSetCullMode
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetZMode
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0
	bl       GXSetBlendMode
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void Graphics::drawTexture(JUTTexture*, float, float, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804278A8
 * Size:	000234
 */
void Graphics::initPerspPrintf(Viewport*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r26, 0x38(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0x44(r4)
	cmplwi   r3, 0
	beq      lbl_804278E4
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	b        lbl_804278E8

lbl_804278E4:
	lwz      r3, 0x40(r31)

lbl_804278E8:
	lis      r4, lbl_80499C38@ha
	mr       r28, r3
	mr       r26, r30
	li       r27, 0
	addi     r29, r4, lbl_80499C38@l
	b        lbl_80427920

lbl_80427900:
	lwz      r3, 4(r26)
	mr       r4, r29
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80427918
	b        lbl_80427930

lbl_80427918:
	addi     r26, r26, 4
	addi     r27, r27, 1

lbl_80427920:
	lhz      r0, 0(r30)
	cmpw     r27, r0
	blt      lbl_80427900
	li       r27, -1

lbl_80427930:
	cmpwi    r27, -1
	bne      lbl_80427970
	lhz      r0, 0(r30)
	cmplwi   r0, 0x20
	bge      lbl_80427978
	rlwinm   r0, r0, 2, 0xe, 0x1d
	lis      r3, lbl_80499C38@ha
	addi     r4, r3, lbl_80499C38@l
	add      r3, r30, r0
	stw      r4, 4(r3)
	lhz      r3, 0(r30)
	bl       GXSetDrawSync
	lhz      r3, 0(r30)
	addi     r0, r3, 1
	sth      r0, 0(r30)
	b        lbl_80427978

lbl_80427970:
	clrlwi   r3, r27, 0x10
	bl       GXSetDrawSync

lbl_80427978:
	bl       initGX__8GraphicsFv
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 4
	li       r4, 1
	li       r5, 1
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 4
	li       r4, 0
	li       r5, 1
	li       r6, 1
	li       r7, 1
	li       r8, 2
	li       r9, 2
	bl       GXSetChanCtrl
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xb
	li       r5, 1
	li       r6, 5
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	bl       GXSetCullMode
	cmplwi   r28, 0
	beq      lbl_80427A54
	mr       r3, r28
	addi     r4, r30, 0x8c
	bl       PSMTXCopy

lbl_80427A54:
	li       r3, 6
	li       r4, 0
	bl       GXSetLineWidth
	li       r3, 0
	li       r4, 1
	li       r5, 1
	li       r6, 0
	bl       GXSetBlendMode
	li       r3, 1
	li       r4, 1
	li       r5, 1
	bl       GXSetZMode
	addi     r3, r30, 0x8c
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 8
	bl       PSMTXIdentity
	addi     r3, r1, 8
	li       r4, 0x1e
	li       r5, 0
	bl       GXLoadTexMtxImm
	li       r3, 1
	li       r4, 1
	li       r5, 0
	bl       GXSetZMode
	lwz      r3, 0x44(r31)
	cmplwi   r3, 0
	beq      lbl_80427AC8
	bl       setProjection__6CameraFv

lbl_80427AC8:
	lmw      r26, 0x38(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80427ADC
 * Size:	0003C4
 */
void Graphics::perspPrintf(PerspPrintfInfo&, Vector3f&, char*, ...)
{
	/*
	stwu     r1, -0x270(r1)
	mflr     r0
	stw      r0, 0x274(r1)
	stw      r31, 0x26c(r1)
	mr       r31, r4
	stw      r30, 0x268(r1)
	stw      r29, 0x264(r1)
	mr       r29, r5
	stw      r28, 0x260(r1)
	mr       r28, r3
	bne      cr1, lbl_80427B28
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_80427B28:
	addi     r11, r1, 0x278
	addi     r0, r1, 8
	lis      r12, 0x400
	stw      r3, 8(r1)
	addi     r30, r1, 0x80
	addi     r3, r1, 0x148
	stw      r4, 0xc(r1)
	mr       r4, r6
	stw      r5, 0x10(r1)
	mr       r5, r30
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r12, 0x80(r1)
	stw      r11, 0x84(r1)
	stw      r0, 0x88(r1)
	bl       vsprintf
	lwz      r4, 0x25c(r28)
	lwz      r3, 0x44(r4)
	cmplwi   r3, 0
	beq      lbl_80427B9C
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	b        lbl_80427BA0

lbl_80427B9C:
	lwz      r3, 0x40(r4)

lbl_80427BA0:
	lfs      f2, 0x10(r31)
	lfs      f0, 0(r3)
	fneg     f1, f2
	fmuls    f0, f0, f2
	stfs     f0, 0xbc(r1)
	lfs      f0, 4(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0xcc(r1)
	lfs      f0, 8(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0xdc(r1)
	lfs      f0, 0x10(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0xc0(r1)
	lfs      f0, 0x14(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0xd0(r1)
	lfs      f0, 0x18(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0xe0(r1)
	lfs      f0, 0x20(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0xc4(r1)
	lfs      f0, 0x24(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0xd4(r1)
	lfs      f0, 0x28(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0xe4(r1)
	lfs      f0, 0(r29)
	stfs     f0, 0xc8(r1)
	lfs      f0, 4(r29)
	stfs     f0, 0xd8(r1)
	lfs      f0, 8(r29)
	stfs     f0, 0xe8(r1)
	lwz      r4, 0x25c(r28)
	lwz      r3, 0x44(r4)
	cmplwi   r3, 0
	beq      lbl_80427C54
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	b        lbl_80427C58

lbl_80427C54:
	lwz      r3, 0x40(r4)

lbl_80427C58:
	addi     r4, r1, 0xbc
	addi     r5, r1, 0x8c
	bl       PSMTXConcat
	addi     r3, r1, 0x8c
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r7, -1
	lbz      r9, 0x1b(r31)
	stw      r7, 0x68(r1)
	addi     r3, r1, 0xec
	lbz      r8, 0x1a(r31)
	addi     r5, r1, 0x7c
	lbz      r4, 0x19(r31)
	addi     r6, r1, 0x74
	lbz      r0, 0x18(r31)
	stb      r4, 0x69(r1)
	stb      r0, 0x68(r1)
	stb      r8, 0x6a(r1)
	stb      r9, 0x6b(r1)
	lwz      r4, 0x68(r1)
	stw      r7, 0x6c(r1)
	stw      r4, 0x74(r1)
	lbz      r9, 0x17(r31)
	lbz      r8, 0x16(r31)
	lbz      r7, 0x15(r31)
	lbz      r0, 0x14(r31)
	stb      r7, 0x6d(r1)
	stb      r0, 0x6c(r1)
	stb      r8, 0x6e(r1)
	stb      r9, 0x6f(r1)
	lwz      r0, 0x6c(r1)
	stw      r4, 0x70(r1)
	stw      r0, 0x7c(r1)
	stw      r0, 0x78(r1)
	lwz      r4, 0(r31)
	bl       __ct__8J2DPrintFP7JUTFontQ28JUtility6TColorQ28JUtility6TColor
	addi     r3, r1, 0xec
	bl       initiate__8J2DPrintFv
	lwz      r0, 0xc(r31)
	cmpwi    r0, 2
	beq      lbl_80427D58
	bge      lbl_80427DE8
	cmpwi    r0, 1
	bge      lbl_80427D0C
	b        lbl_80427DE8

lbl_80427D0C:
	lwz      r4, 4(r31)
	lis      r5, 0x4330
	lwz      r0, 8(r31)
	addi     r3, r1, 0xec
	xoris    r4, r4, 0x8000
	stw      r5, 0x248(r1)
	xoris    r0, r0, 0x8000
	lfd      f2, lbl_805204D0@sda21(r2)
	stw      r4, 0x24c(r1)
	addi     r4, r1, 0x148
	lfd      f0, 0x248(r1)
	stw      r0, 0x254(r1)
	fsubs    f1, f0, f2
	stw      r5, 0x250(r1)
	lfd      f0, 0x250(r1)
	fsubs    f2, f0, f2
	crset    6
	bl       print__8J2DPrintFffPCce
	b        lbl_80427E74

lbl_80427D58:
	addi     r3, r1, 0xec
	addi     r4, r1, 0x148
	crclr    6
	bl       getWidth__8J2DPrintFPCce
	lfs      f0, lbl_805204B8@sda21(r2)
	addi     r3, r1, 0xec
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80427D88
	lfs      f0, lbl_805204BC@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_80427D90

lbl_80427D88:
	lfs      f0, lbl_805204BC@sda21(r2)
	fsubs    f0, f1, f0

lbl_80427D90:
	fctiwz   f0, f0
	lis      r5, 0x4330
	lwz      r0, 8(r31)
	addi     r4, r1, 0x148
	lwz      r6, 4(r31)
	stfd     f0, 0x250(r1)
	xoris    r0, r0, 0x8000
	lfd      f2, lbl_805204D0@sda21(r2)
	lwz      r7, 0x254(r1)
	stw      r5, 0x248(r1)
	subf     r6, r7, r6
	xoris    r6, r6, 0x8000
	stw      r0, 0x25c(r1)
	stw      r6, 0x24c(r1)
	stw      r5, 0x258(r1)
	lfd      f1, 0x248(r1)
	lfd      f0, 0x258(r1)
	fsubs    f1, f1, f2
	fsubs    f2, f0, f2
	crset    6
	bl       print__8J2DPrintFffPCce
	b        lbl_80427E74

lbl_80427DE8:
	addi     r3, r1, 0xec
	addi     r4, r1, 0x148
	crclr    6
	bl       getWidth__8J2DPrintFPCce
	lfs      f2, lbl_805204BC@sda21(r2)
	addi     r3, r1, 0xec
	lfs      f0, lbl_805204B8@sda21(r2)
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80427E1C
	fadds    f0, f2, f1
	b        lbl_80427E20

lbl_80427E1C:
	fsubs    f0, f1, f2

lbl_80427E20:
	fctiwz   f0, f0
	lis      r5, 0x4330
	lwz      r0, 8(r31)
	addi     r4, r1, 0x148
	lwz      r6, 4(r31)
	stfd     f0, 0x258(r1)
	xoris    r0, r0, 0x8000
	lfd      f2, lbl_805204D0@sda21(r2)
	lwz      r7, 0x25c(r1)
	stw      r5, 0x250(r1)
	subf     r6, r7, r6
	xoris    r6, r6, 0x8000
	stw      r0, 0x24c(r1)
	stw      r6, 0x254(r1)
	stw      r5, 0x248(r1)
	lfd      f1, 0x250(r1)
	lfd      f0, 0x248(r1)
	fsubs    f1, f1, f2
	fsubs    f2, f0, f2
	crset    6
	bl       print__8J2DPrintFffPCce

lbl_80427E74:
	addi     r3, r1, 0xec
	li       r4, -1
	bl       __dt__8J2DPrintFv
	lwz      r0, 0x274(r1)
	lwz      r31, 0x26c(r1)
	lwz      r30, 0x268(r1)
	lwz      r29, 0x264(r1)
	lwz      r28, 0x260(r1)
	mtlr     r0
	addi     r1, r1, 0x270
	blr
	*/
}

/*
 * --INFO--
 * Address:	80427EA0
 * Size:	000060
 */
void Graphics::initGX()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       GXClearVtxDesc
	bl       GXInvalidateVtxCache
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 0
	bl       GXSetNumChans
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 3
	bl       GXSetTevOp
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	bl       GXSetNumIndStages
	li       r3, 0
	bl       GXSetTevDirect
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80427F00
 * Size:	000004
 */
void Graphics::dirtyInitGX() { }

/*
 * --INFO--
 * Address:	80427F04
 * Size:	000060
 */
void Graphics::clearInitGX()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       GXClearVtxDesc
	bl       GXInvalidateVtxCache
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 0
	bl       GXSetNumChans
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 3
	bl       GXSetTevOp
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	bl       GXSetNumIndStages
	li       r3, 0
	bl       GXSetTevDirect
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80427F64
 * Size:	000004
 */
void Splitter::split4(float, float) { }

/*
 * --INFO--
 * Address:	80427F68
 * Size:	000028
 */
void __sinit_graphics_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EBD98@ha
	stw      r0, lbl_80516190@sda21(r13)
	stfsu    f0, lbl_804EBD98@l(r3)
	stfs     f0, lbl_80516194@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
