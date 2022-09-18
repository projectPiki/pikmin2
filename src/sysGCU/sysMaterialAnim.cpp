#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A6A0
    lbl_8049A6A0:
        .4byte 0x7379734D
        .4byte 0x61746572
        .4byte 0x69616C41
        .4byte 0x6E696D2E
        .4byte 0x63707000
    .global lbl_8049A6B4
    lbl_8049A6B4:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23Sys17MatRepeatAnimator
    __vt__Q23Sys17MatRepeatAnimator:
        .4byte 0
        .4byte 0
        .4byte start__Q23Sys15MatBaseAnimatorFPQ23Sys16MatBaseAnimation
        .4byte onStart__Q23Sys17MatRepeatAnimatorFv
        .4byte do_animate__Q23Sys17MatRepeatAnimatorFf
    .global __vt__Q23Sys15MatLoopAnimator
    __vt__Q23Sys15MatLoopAnimator:
        .4byte 0
        .4byte 0
        .4byte start__Q23Sys15MatBaseAnimatorFPQ23Sys16MatBaseAnimation
        .4byte onStart__Q23Sys15MatBaseAnimatorFv
        .4byte do_animate__Q23Sys15MatLoopAnimatorFf
    .global __vt__Q23Sys15MatBaseAnimator
    __vt__Q23Sys15MatBaseAnimator:
        .4byte 0
        .4byte 0
        .4byte start__Q23Sys15MatBaseAnimatorFPQ23Sys16MatBaseAnimation
        .4byte onStart__Q23Sys15MatBaseAnimatorFv
        .4byte do_animate__Q23Sys15MatBaseAnimatorFf
    .global __vt__Q23Sys18MatTevRegAnimation
    __vt__Q23Sys18MatTevRegAnimation:
        .4byte 0
        .4byte 0
        .4byte onAttachResource__Q23Sys18MatTevRegAnimationFPv
        .4byte getAnmBase__Q23Sys18MatTevRegAnimationFv
        .4byte set__Q23Sys18MatTevRegAnimationFv
        .4byte remove__Q23Sys18MatTevRegAnimationFv
    .global __vt__Q23Sys15MatTexAnimation
    __vt__Q23Sys15MatTexAnimation:
        .4byte 0
        .4byte 0
        .4byte onAttachResource__Q23Sys15MatTexAnimationFPv
        .4byte getAnmBase__Q23Sys15MatTexAnimationFv
        .4byte set__Q23Sys15MatTexAnimationFv
        .4byte remove__Q23Sys15MatTexAnimationFv
    .global __vt__Q23Sys16MatBaseAnimation
    __vt__Q23Sys16MatBaseAnimation:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520780
    lbl_80520780:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520788
    lbl_80520788:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Sys {

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
MatBaseAnimation::MatBaseAnimation(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80434020
 * Size:	000084
 */
void MatBaseAnimation::attachResource(void*, J3DModelData*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8043406C
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x31
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043406C:
	stw      r31, 4(r29)
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
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
 * Address:	804340A4
 * Size:	000090
 */
void MatBaseAnimation::getFrameMax(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_804340EC
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804340EC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f1
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80434134
 * Size:	00002C
 */
MatTexAnimation::MatTexAnimation(void)
{
	/*
	lis      r5, __vt__Q23Sys16MatBaseAnimation@ha
	lis      r4, __vt__Q23Sys15MatTexAnimation@ha
	addi     r0, r5, __vt__Q23Sys16MatBaseAnimation@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q23Sys15MatTexAnimation@l
	stw      r5, 4(r3)
	stw      r0, 0(r3)
	stw      r5, 8(r3)
	stw      r5, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80434160
 * Size:	000088
 */
void MatTexAnimation::onAttachResource(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_804341A4
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x4b
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804341A4:
	mr       r3, r31
	bl       load__20J3DAnmLoaderDataBaseFPCv
	stw      r3, 8(r30)
	lwz      r31, 4(r30)
	lwz      r3, 8(r30)
	mr       r4, r31
	bl       searchUpdateMaterialID__19J3DAnmTextureSRTKeyFP12J3DModelData
	lwz      r4, 8(r30)
	addi     r3, r31, 0x58
	addi     r5, r30, 0xc
	bl
allocTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKeyPP12J3DTexMtxAnm
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
 * Address:	804341E8
 * Size:	00002C
 */
void MatTexAnimation::set(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 4(r3)
	lwz      r4, 8(r3)
	addi     r3, r5, 0x58
	bl       entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80434214
 * Size:	00002C
 */
bool MatTexAnimation::remove(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 4(r3)
	lwz      r4, 8(r3)
	addi     r3, r5, 0x58
	bl       removeTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80434240
 * Size:	000030
 */
MatTevRegAnimation::MatTevRegAnimation(void)
{
	/*
	lis      r5, __vt__Q23Sys16MatBaseAnimation@ha
	lis      r4, __vt__Q23Sys18MatTevRegAnimation@ha
	addi     r0, r5, __vt__Q23Sys16MatBaseAnimation@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q23Sys18MatTevRegAnimation@l
	stw      r5, 4(r3)
	stw      r0, 0(r3)
	stw      r5, 8(r3)
	stw      r5, 0xc(r3)
	stw      r5, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80434270
 * Size:	00008C
 */
void MatTevRegAnimation::onAttachResource(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_804342B4
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x6f
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804342B4:
	mr       r3, r31
	bl       load__20J3DAnmLoaderDataBaseFPCv
	stw      r3, 8(r30)
	lwz      r31, 4(r30)
	lwz      r3, 8(r30)
	mr       r4, r31
	bl       searchUpdateMaterialID__15J3DAnmTevRegKeyFP12J3DModelData
	lwz      r4, 8(r30)
	addi     r3, r31, 0x58
	addi     r5, r30, 0xc
	addi     r6, r30, 0x10
	bl
allocTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKeyPP14J3DTevColorAnmPP15J3DTevKColorAnm
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
 * Address:	804342FC
 * Size:	00002C
 */
void MatTevRegAnimation::set(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 4(r3)
	lwz      r4, 8(r3)
	addi     r3, r5, 0x58
	bl       entryTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80434328
 * Size:	00002C
 */
bool MatTevRegAnimation::remove(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 4(r3)
	lwz      r4, 8(r3)
	addi     r3, r5, 0x58
	bl       removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80434354
 * Size:	000018
 */
MatBaseAnimator::MatBaseAnimator(void)
{
	/*
	lis      r4, __vt__Q23Sys15MatBaseAnimator@ha
	li       r0, 0
	addi     r4, r4, __vt__Q23Sys15MatBaseAnimator@l
	stw      r4, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043436C
 * Size:	000070
 */
void MatBaseAnimator::start(Sys::MatBaseAnimation*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_804343A4
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_804343A4:
	stw      r31, 4(r30)
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80520788@sda21(r2)
	stfs     f0, 8(r30)
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
 * Address:	........
 * Size:	00004C
 */
void MatBaseAnimator::removeMotion(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A4
 */
void MatBaseAnimator::forward(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804343DC
 * Size:	000170
 */
void MatBaseAnimator::setCurrentFrame(float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r31, r3
	fmr      f31, f1
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_80434428
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0xc9
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80434428:
	lfs      f0, lbl_80520788@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8043443C
	fmr      f31, f0
	b        lbl_80434528

lbl_8043443C:
	lwz      r30, 4(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80434478
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80434478:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_80434528
	lwz      r30, 4(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_804344F4
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804344F4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f31, f0, f1

lbl_80434528:
	stfs     f31, 8(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043454C
 * Size:	000078
 */
void MatBaseAnimator::animate(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lwz      r4, sys@sda21(r13)
	mr       r31, r3
	lwz      r3, 4(r3)
	lfs      f0, 0x54(r4)
	cmplwi   r3, 0
	fmuls    f31, f1, f0
	beq      lbl_80434590
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80434590:
	mr       r3, r31
	fmr      f1, f31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804345C4
 * Size:	000004
 */
void MatBaseAnimator::do_animate(float) { }

/*
 * --INFO--
 * Address:	804345C8
 * Size:	0001B0
 */
void MatLoopAnimator::do_animate(float)
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
	mr       r31, r3
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_80434604
	lis      r3, 0x00008000@ha
	addi     r30, r3, 0x00008000@l
	b        lbl_80434744

lbl_80434604:
	lfs      f2, 8(r31)
	li       r30, 0
	lfs      f0, lbl_80520788@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 8(r31)
	lfs      f1, 8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80434630
	stfs     f0, 8(r31)
	li       r30, 1
	b        lbl_80434728

lbl_80434630:
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8043466C
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043466C:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfs      f2, 8(r31)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80434728
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_804346EC
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804346EC:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	li       r30, 2
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 8(r31)

lbl_80434728:
	lwz      r3, 4(r31)
	lfs      f31, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stfs     f31, 8(r3)

lbl_80434744:
	cmplwi   r30, 2
	bne      lbl_80434754
	lfs      f0, lbl_80520788@sda21(r2)
	stfs     f0, 8(r31)

lbl_80434754:
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
 * Address:	80434778
 * Size:	00000C
 */
void MatRepeatAnimator::onStart(void)
{
	// Generated from stb r0, 0xC(r3)
	_0C = 1;
}

/*
 * --INFO--
 * Address:	80434784
 * Size:	000328
 */
void MatRepeatAnimator::do_animate(float)
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
	mr       r31, r3
	lbz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_80434920
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_804347CC
	lis      r3, 0x00008000@ha
	addi     r30, r3, 0x00008000@l
	b        lbl_8043490C

lbl_804347CC:
	lfs      f2, 8(r31)
	li       r30, 0
	lfs      f0, lbl_80520788@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 8(r31)
	lfs      f1, 8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_804347F8
	stfs     f0, 8(r31)
	li       r30, 1
	b        lbl_804348F0

lbl_804347F8:
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80434834
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80434834:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfs      f2, 8(r31)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_804348F0
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_804348B4
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804348B4:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	li       r30, 2
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 8(r31)

lbl_804348F0:
	lwz      r3, 4(r31)
	lfs      f31, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stfs     f31, 8(r3)

lbl_8043490C:
	cmplwi   r30, 2
	bne      lbl_80434A88
	li       r0, 0
	stb      r0, 0xc(r31)
	b        lbl_80434A88

lbl_80434920:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_80434938
	lis      r3, 0x00008000@ha
	addi     r30, r3, 0x00008000@l
	b        lbl_80434A78

lbl_80434938:
	lfs      f2, 8(r31)
	li       r30, 0
	lfs      f0, lbl_80520788@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 8(r31)
	lfs      f1, 8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80434964
	stfs     f0, 8(r31)
	li       r30, 1
	b        lbl_80434A5C

lbl_80434964:
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_804349A0
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804349A0:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfs      f2, 8(r31)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80434A5C
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80434A20
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80434A20:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	li       r30, 2
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 8(r31)

lbl_80434A5C:
	lwz      r3, 4(r31)
	lfs      f31, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stfs     f31, 8(r3)

lbl_80434A78:
	cmplwi   r30, 1
	bne      lbl_80434A88
	li       r0, 1
	stb      r0, 0xc(r31)

lbl_80434A88:
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
 * Address:	80434AAC
 * Size:	000004
 */
void MatBaseAnimator::onStart(void) { }

/*
 * --INFO--
 * Address:	80434AB0
 * Size:	000008
 */
J3DAnmBase* MatTevRegAnimation::getAnmBase(void)
{
	/*
	lwz      r3, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80434AB8
 * Size:	000008
 */
J3DAnmBase* MatTexAnimation::getAnmBase(void)
{
	/*
	lwz      r3, 8(r3)
	blr
	*/
}
} // namespace Sys
