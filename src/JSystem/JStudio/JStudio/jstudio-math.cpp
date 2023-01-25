#include "JStudio/math.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516448
    lbl_80516448:
        .4byte 0x3C8EFA35
    .global lbl_8051644C
    lbl_8051644C:
        .4byte 0x00000000
    .global lbl_80516450
    lbl_80516450:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516458
    lbl_80516458:
        .4byte 0x3FF00000
        .4byte 0x00000000
    .global lbl_80516460
    lbl_80516460:
        .4byte 0x42000000
        .4byte 0x00000000
    .global lbl_80516468
    lbl_80516468:
        .4byte 0xBFF921FB
        .4byte 0x54442D18
    .global lbl_80516470
    lbl_80516470:
        .4byte 0x3FF921FB
        .4byte 0x54442D18
    .global lbl_80516478
    lbl_80516478:
        .4byte 0x404CA5DC
        .4byte 0x1A63C1F8
*/

namespace JStudio {

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void math::getRotation_xyz(float (*)[4], float, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80010FC4
 * Size:	0001B0
 */
void math::getTransformation_SRxyzT(float (*)[4], Vec const&, Vec const&, Vec const&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stfd      f26, 0xB0(r1)
	  psq_st    f26,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  lfs       f1, 0x0(r4)
	  mr        r29, r3
	  lfs       f2, 0x4(r4)
	  mr        r30, r5
	  lfs       f3, 0x8(r4)
	  mr        r31, r6
	  addi      r3, r1, 0x68
	  bl        0xD97AC
	  lfs       f1, -0x7F18(r2)
	  lfs       f0, 0x0(r30)
	  lfs       f30, 0x8(r30)
	  fmuls     f27, f1, f0
	  lfs       f31, 0x4(r30)
	  fmr       f1, f27
	  bl        0xBE270
	  frsp      f29, f1
	  fmr       f1, f27
	  bl        0xBE7CC
	  lfs       f0, -0x7F18(r2)
	  frsp      f28, f1
	  fmuls     f31, f0, f31
	  fmr       f1, f31
	  bl        0xBE250
	  frsp      f27, f1
	  fmr       f1, f31
	  bl        0xBE7AC
	  lfs       f0, -0x7F18(r2)
	  frsp      f31, f1
	  fmuls     f26, f0, f30
	  fmr       f1, f26
	  bl        0xBE230
	  frsp      f30, f1
	  fmr       f1, f26
	  bl        0xBE78C
	  frsp      f7, f1
	  lfs       f0, -0x7F14(r2)
	  fmuls     f2, f27, f30
	  addi      r3, r1, 0x8
	  fneg      f1, f31
	  stfs      f0, 0x14(r1)
	  fmuls     f6, f29, f30
	  stfs      f2, 0x8(r1)
	  fmuls     f5, f28, f7
	  addi      r4, r1, 0x68
	  fmuls     f2, f27, f7
	  stfs      f1, 0x28(r1)
	  fmuls     f4, f28, f27
	  stfs      f0, 0x24(r1)
	  fmuls     f3, f29, f27
	  addi      r5, r1, 0x38
	  fmadds    f1, f6, f31, f5
	  stfs      f2, 0x18(r1)
	  fmadds    f2, f5, f31, f6
	  stfs      f4, 0x2C(r1)
	  fmuls     f5, f29, f7
	  fmuls     f4, f28, f30
	  stfs      f3, 0x30(r1)
	  stfs      f1, 0x10(r1)
	  fmsubs    f3, f4, f31, f5
	  fmsubs    f1, f5, f31, f4
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x34(r1)
	  bl        0xD91F4
	  lfs       f1, 0x0(r31)
	  mr        r4, r29
	  lfs       f2, 0x4(r31)
	  addi      r3, r1, 0x38
	  lfs       f3, 0x8(r31)
	  bl        0xD9664
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  psq_l     f26,0xB8(r1),0,0
	  lfd       f26, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r29, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B4
 */
void math::transform_SRxyzT(float (*)[4], float const (*)[4], Vec const&, Vec const&, Vec const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80011174
 * Size:	000254
 */
void math::getFromTransformation_SRxyzT(Vec*, Vec*, Vec*, float const (*)[4])
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r31, r6
	mr       r28, r3
	lfs      f2, 0(r6)
	mr       r29, r4
	lfs      f1, 0x10(r6)
	mr       r30, r5
	lfs      f0, 0x20(r6)
	addi     r3, r1, 0x20
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       PSVECMag
	stfs     f1, 0(r28)
	addi     r3, r1, 0x14
	lfs      f2, 4(r31)
	lfs      f1, 0x14(r31)
	lfs      f0, 0x24(r31)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       PSVECMag
	stfs     f1, 4(r28)
	addi     r3, r1, 8
	lfs      f2, 8(r31)
	lfs      f1, 0x18(r31)
	lfs      f0, 0x28(r31)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       PSVECMag
	stfs     f1, 8(r28)
	lfs      f0, 0xc(r31)
	lfs      f1, 0x1c(r31)
	stfs     f0, 0(r30)
	lfs      f0, 0x2c(r31)
	stfs     f1, 4(r30)
	lfd      f10, lbl_80516450@sda21(r2)
	stfs     f0, 8(r30)
	lfs      f0, lbl_8051644C@sda21(r2)
	fmr      f11, f10
	lfs      f1, 0(r28)
	fmr      f4, f10
	fcmpu    cr0, f0, f1
	beq      lbl_80011268
	lfd      f0, lbl_80516458@sda21(r2)
	fdiv     f10, f0, f1

lbl_80011268:
	lfs      f0, lbl_8051644C@sda21(r2)
	lfs      f1, 4(r28)
	fcmpu    cr0, f0, f1
	beq      lbl_80011280
	lfd      f0, lbl_80516458@sda21(r2)
	fdiv     f11, f0, f1

lbl_80011280:
	lfs      f0, lbl_8051644C@sda21(r2)
	lfs      f1, 8(r28)
	fcmpu    cr0, f0, f1
	beq      lbl_80011298
	lfd      f0, lbl_80516458@sda21(r2)
	fdiv     f4, f0, f1

lbl_80011298:
	lfs      f0, 0x20(r31)
	lis      r3, __float_epsilon@ha
	lfs      f2, 0x28(r31)
	fmul     f31, f0, f10
	lfs      f1, lbl_80516460@sda21(r2)
	lfs      f0, __float_epsilon@l(r3)
	fmul     f8, f2, f4
	lfs      f7, 0x24(r31)
	lfd      f3, lbl_80516458@sda21(r2)
	fmuls    f9, f1, f0
	lfs      f2, 0x14(r31)
	lfs      f6, 0x10(r31)
	lfs      f4, 0(r31)
	fsub     f1, f31, f3
	fneg     f0, f9
	lfs      f5, 4(r31)
	fmul     f7, f7, f11
	fcmpo    cr0, f1, f0
	fmul     f2, f2, f11
	fmul     f29, f6, f10
	fmul     f1, f5, f11
	fmul     f30, f4, f10
	cror     2, 1, 2
	bne      lbl_80011310
	fneg     f1, f1
	bl       atan2
	fmr      f28, f1
	lfd      f3, lbl_80516468@sda21(r2)
	lfd      f29, lbl_80516450@sda21(r2)
	b        lbl_80011360

lbl_80011310:
	fadd     f0, f31, f3
	fcmpo    cr0, f0, f9
	cror     2, 0, 2
	bne      lbl_80011334
	bl       atan2
	fmr      f28, f1
	lfd      f3, lbl_80516470@sda21(r2)
	lfd      f29, lbl_80516450@sda21(r2)
	b        lbl_80011360

lbl_80011334:
	fmr      f1, f7
	fmr      f2, f8
	bl       atan2
	fmr      f28, f1
	fmr      f1, f29
	fmr      f2, f30
	bl       atan2
	fmr      f29, f1
	fneg     f1, f31
	bl       asin
	fmr      f3, f1

lbl_80011360:
	lfd      f0, lbl_80516478@sda21(r2)
	fmul     f28, f28, f0
	fmul     f3, f3, f0
	fmul     f29, f29, f0
	frsp     f2, f28
	frsp     f1, f3
	frsp     f0, f29
	stfs     f2, 0(r29)
	stfs     f1, 4(r29)
	stfs     f0, 8(r29)
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r0, 0x84(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}
} // namespace JStudio
