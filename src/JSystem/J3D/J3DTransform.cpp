#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global j3dDefaultTransformInfo
    j3dDefaultTransformInfo:
        .float 1.0
        .float 1.0
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global j3dDefaultScale
    j3dDefaultScale:
        .float 1.0
        .float 1.0
        .float 1.0
    .global j3dDefaultMtx
    j3dDefaultMtx:
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
    .global lbl_8047889C
    lbl_8047889C:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global Unit01
    Unit01:
        .skip 4
        .float 1.0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516998
    lbl_80516998:
        .4byte 0x00000000
    .global lbl_8051699C
    lbl_8051699C:
        .float 1.0
    .global lbl_805169A0
    lbl_805169A0:
        .float 0.5
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8005EE78
 * Size:	0000F0
 */
void J3DCalcBBoardMtx(float (*)[4])
{
	/*
	lfs      f2, 0(r3)
	lfs      f1, 0x10(r3)
	fmuls    f2, f2, f2
	lfs      f3, 0x20(r3)
	fmuls    f1, f1, f1
	lfs      f5, 4(r3)
	lfs      f4, 0x14(r3)
	fmuls    f7, f3, f3
	lfs      f3, 8(r3)
	fadds    f6, f2, f1
	lfs      f2, 0x18(r3)
	fmuls    f5, f5, f5
	fmuls    f4, f4, f4
	lfs      f8, 0x24(r3)
	lfs      f9, 0x28(r3)
	fmuls    f3, f3, f3
	lfs      f1, lbl_80516998@sda21(r2)
	fmuls    f2, f2, f2
	fadds    f7, f7, f6
	fmuls    f6, f8, f8
	fadds    f5, f5, f4
	fmuls    f4, f9, f9
	fadds    f2, f3, f2
	fcmpo    cr0, f7, f1
	fadds    f3, f6, f5
	fadds    f2, f4, f2
	ble      lbl_8005EEFC
	ble      lbl_8005EEF4
	frsqrte  f1, f7
	fmuls    f1, f1, f7
	b        lbl_8005EEF8

lbl_8005EEF4:
	fmr      f1, f7

lbl_8005EEF8:
	fmr      f7, f1

lbl_8005EEFC:
	lfs      f1, lbl_80516998@sda21(r2)
	fcmpo    cr0, f3, f1
	ble      lbl_8005EF20
	ble      lbl_8005EF18
	frsqrte  f1, f3
	fmuls    f1, f1, f3
	b        lbl_8005EF1C

lbl_8005EF18:
	fmr      f1, f3

lbl_8005EF1C:
	fmr      f3, f1

lbl_8005EF20:
	lfs      f1, lbl_80516998@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8005EF44
	ble      lbl_8005EF3C
	frsqrte  f1, f2
	fmuls    f1, f1, f2
	b        lbl_8005EF40

lbl_8005EF3C:
	fmr      f1, f2

lbl_8005EF40:
	fmr      f2, f1

lbl_8005EF44:
	lfs      f0, lbl_80516998@sda21(r2)
	psq_st   f0, 4(r3), 0, qr0
	psq_st   f0, 32(r3), 0, qr0
	stfs     f7, 0(r3)
	stfs     f0, 0x10(r3)
	stfs     f3, 0x14(r3)
	stfs     f0, 0x18(r3)
	stfs     f2, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005EF68
 * Size:	00013C
 */
void J3DCalcYBBoardMtx(float (*)[4])
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
	mr       r31, r3
	lfs      f0, lbl_80516998@sda21(r2)
	lfs      f2, 0(r3)
	lfs      f1, 0x10(r3)
	fmuls    f2, f2, f2
	lfs      f3, 0x20(r3)
	fmuls    f1, f1, f1
	lfs      f6, 8(r3)
	lfs      f5, 0x18(r3)
	fmuls    f4, f3, f3
	fadds    f3, f2, f1
	lfs      f7, 0x28(r3)
	fmuls    f2, f6, f6
	fmuls    f1, f5, f5
	fadds    f31, f4, f3
	fmuls    f3, f7, f7
	fadds    f1, f2, f1
	fcmpo    cr0, f31, f0
	fadds    f30, f3, f1
	ble      lbl_8005EFF0
	ble      lbl_8005EFE8
	frsqrte  f0, f31
	fmuls    f0, f0, f31
	b        lbl_8005EFEC

lbl_8005EFE8:
	fmr      f0, f31

lbl_8005EFEC:
	fmr      f31, f0

lbl_8005EFF0:
	lfs      f0, lbl_80516998@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8005F014
	ble      lbl_8005F00C
	frsqrte  f0, f30
	fmuls    f0, f0, f30
	b        lbl_8005F010

lbl_8005F00C:
	fmr      f0, f30

lbl_8005F010:
	fmr      f30, f0

lbl_8005F014:
	lis      r4, lbl_8047889C@ha
	addi     r3, r1, 8
	addi     r7, r4, lbl_8047889C@l
	lwz      r6, 0(r7)
	mr       r4, r3
	lwz      r5, 4(r7)
	lwz      r0, 8(r7)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	lfs      f0, 0x24(r31)
	fneg     f0, f0
	stfs     f0, 0xc(r1)
	lfs      f0, 0x14(r31)
	stfs     f0, 0x10(r1)
	bl       PSVECNormalize
	stfs     f31, 0(r31)
	lfs      f1, lbl_80516998@sda21(r2)
	stfs     f1, 8(r31)
	stfs     f1, 0x10(r31)
	lfs      f0, 0xc(r1)
	fmuls    f0, f0, f30
	stfs     f0, 0x18(r31)
	stfs     f1, 0x20(r31)
	lfs      f0, 0x10(r1)
	fmuls    f0, f0, f30
	stfs     f0, 0x28(r31)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005F0A4
 * Size:	0000C8
 */
void J3DPSCalcInverseTranspose(float (*)[4], float (*)[3])
{
	/*
	psq_l    f0, 0(r3), 1, qr0
	psq_l    f1, 4(r3), 0, qr0
	psq_l    f2, 16(r3), 1, qr0
	ps_merge10 f6, f1, f0
	psq_l    f3, 20(r3), 0, qr0
	psq_l    f4, 32(r3), 1, qr0
	ps_merge10 f7, f3, f2
	psq_l    f5, 36(r3), 0, qr0
	ps_mul   f11, f3, f6
	ps_merge10 f8, f5, f4
	ps_mul   f13, f5, f7
	ps_msub  f11, f1, f7, f11
	ps_mul   f12, f1, f8
	ps_msub  f13, f3, f8, f13
	ps_msub  f12, f5, f6, f12
	ps_mul   f10, f3, f4
	ps_mul   f9, f0, f5
	ps_mul   f8, f1, f2
	ps_msub  f10, f2, f5, f10
	ps_msub  f9, f1, f4, f9
	ps_msub  f8, f0, f3, f8
	ps_mul   f7, f0, f13
	ps_sub   f1, f1, f1
	ps_madd  f7, f2, f12, f7
	ps_madd  f7, f4, f11, f7
	ps_cmpo0 cr0, f7, f1
	bne      lbl_8005F118
	li       r3, 0
	blr

lbl_8005F118:
	fres     f0, f7
	ps_add   f6, f0, f0
	ps_mul   f5, f0, f0
	ps_nmsub f0, f7, f5, f6
	ps_add   f6, f0, f0
	ps_mul   f5, f0, f0
	ps_nmsub f0, f7, f5, f6
	ps_muls0 f13, f13, f0
	ps_muls0 f12, f12, f0
	psq_st   f13, 0(r4), 0, qr0
	ps_muls0 f11, f11, f0
	psq_st   f12, 12(r4), 0, qr0
	ps_muls0 f10, f10, f0
	psq_st   f11, 24(r4), 0, qr0
	ps_muls0 f9, f9, f0
	psq_st   f10, 8(r4), 1, qr0
	ps_muls0 f8, f8, f0
	psq_st   f9, 20(r4), 1, qr0
	li       r3, 1
	psq_st   f8, 32(r4), 1, qr0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005F16C
 * Size:	0000B0
 */
void J3DGetTranslateRotateMtx(const J3DTransformInfo&, float (*)[4])
{
	/*
	lha      r5, 0xe(r3)
	lis      r6, sincosTable___5JMath@ha
	addi     r6, r6, sincosTable___5JMath@l
	lha      r0, 0x10(r3)
	rlwinm   r5, r5, 0x1e, 0x12, 0x1c
	lha      r7, 0xc(r3)
	lfsx     f8, r6, r5
	rlwinm   r9, r0, 0x1e, 0x12, 0x1c
	addi     r8, r6, 4
	rlwinm   r0, r7, 0x1e, 0x12, 0x1c
	fneg     f0, f8
	lfsx     f6, r8, r5
	lfsx     f10, r8, r9
	lfsx     f4, r6, r0
	lfsx     f5, r8, r0
	fmuls    f1, f10, f6
	lfsx     f9, r6, r9
	fmuls    f12, f4, f10
	fmuls    f3, f6, f4
	lfs      f2, 0x14(r3)
	stfs     f0, 0x20(r4)
	fmuls    f0, f9, f6
	stfs     f1, 0(r4)
	fmuls    f11, f5, f9
	fmuls    f7, f6, f5
	lfs      f1, 0x18(r3)
	stfs     f0, 0x10(r4)
	fmuls    f10, f5, f10
	lfs      f0, 0x1c(r3)
	stfs     f3, 0x24(r4)
	fmuls    f9, f4, f9
	fmsubs   f6, f12, f8, f11
	stfs     f7, 0x28(r4)
	fmsubs   f5, f11, f8, f12
	fmadds   f4, f10, f8, f9
	stfs     f6, 4(r4)
	fmadds   f3, f9, f8, f10
	stfs     f5, 0x18(r4)
	stfs     f4, 8(r4)
	stfs     f3, 0x14(r4)
	stfs     f2, 0xc(r4)
	stfs     f1, 0x1c(r4)
	stfs     f0, 0x2c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005F21C
 * Size:	0000B0
 */
void J3DGetTranslateRotateMtx(short, short, short, float, float, float, float (*)[4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  lis       r7, 0x8050
	  rlwinm    r4,r4,30,18,28
	  addi      r7, r7, 0x71A0
	  rlwinm    r5,r5,30,18,28
	  lfsx      f10, r7, r4
	  addi      r8, r7, 0x4
	  rlwinm    r0,r3,30,18,28
	  lfsx      f6, r8, r4
	  lfsx      f12, r8, r5
	  fneg      f4, f10
	  lfsx      f8, r7, r0
	  lfsx      f9, r8, r0
	  fmuls     f5, f12, f6
	  lfsx      f11, r7, r5
	  fmuls     f0, f6, f8
	  fmuls     f31, f8, f12
	  stfs      f4, 0x20(r6)
	  fmuls     f4, f11, f6
	  fmuls     f13, f9, f11
	  stfs      f5, 0x0(r6)
	  fmuls     f7, f6, f9
	  fmuls     f8, f8, f11
	  stfs      f4, 0x10(r6)
	  fmuls     f9, f9, f12
	  fmsubs    f6, f31, f10, f13
	  stfs      f0, 0x24(r6)
	  fmsubs    f5, f13, f10, f31
	  fmadds    f4, f9, f10, f8
	  stfs      f7, 0x28(r6)
	  fmadds    f0, f8, f10, f9
	  stfs      f6, 0x4(r6)
	  stfs      f5, 0x18(r6)
	  stfs      f4, 0x8(r6)
	  stfs      f0, 0x14(r6)
	  stfs      f1, 0xC(r6)
	  stfs      f2, 0x1C(r6)
	  stfs      f3, 0x2C(r6)
	  psq_l     f31,0x18(r1),0,0
	  lfd       f31, 0x10(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F2CC
 * Size:	0000AC
 */
void J3DGetTextureMtx(const J3DTextureSRTInfo&, const Vec&, float (*)[4])
{
	/*
	lha      r0, 8(r3)
	lis      r6, sincosTable___5JMath@ha
	addi     r7, r6, sincosTable___5JMath@l
	lfs      f2, 0(r3)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfs      f6, 4(r4)
	add      r6, r7, r0
	lfsx     f0, r7, r0
	lfs      f1, 4(r6)
	lfs      f3, 4(r3)
	fmuls    f5, f2, f0
	fmuls    f4, f2, f1
	lfs      f9, 0(r4)
	fmuls    f10, f3, f0
	lfs      f7, 0xc(r3)
	fmuls    f11, f3, f1
	fneg     f2, f4
	fmuls    f0, f5, f6
	stfs     f4, 0(r5)
	fneg     f8, f5
	lfs      f4, 0x10(r3)
	fneg     f3, f10
	fmadds   f2, f2, f9, f0
	stfs     f8, 4(r5)
	lfs      f1, lbl_80516998@sda21(r2)
	fadds    f5, f9, f2
	lfs      f0, lbl_8051699C@sda21(r2)
	fmuls    f2, f11, f6
	fadds    f5, f7, f5
	fmsubs   f2, f3, f9, f2
	stfs     f5, 8(r5)
	fadds    f2, f6, f2
	stfs     f10, 0x10(r5)
	fadds    f2, f4, f2
	stfs     f11, 0x14(r5)
	stfs     f2, 0x18(r5)
	stfs     f1, 0x2c(r5)
	stfs     f1, 0x24(r5)
	stfs     f1, 0x20(r5)
	stfs     f1, 0x1c(r5)
	stfs     f1, 0xc(r5)
	stfs     f0, 0x28(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005F378
 * Size:	0000AC
 */
void J3DGetTextureMtxOld(const J3DTextureSRTInfo&, const Vec&, float (*)[4])
{
	/*
	lha      r0, 8(r3)
	lis      r6, sincosTable___5JMath@ha
	addi     r7, r6, sincosTable___5JMath@l
	lfs      f2, 0(r3)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfs      f6, 4(r4)
	add      r6, r7, r0
	lfsx     f0, r7, r0
	lfs      f1, 4(r6)
	lfs      f3, 4(r3)
	fmuls    f5, f2, f0
	fmuls    f4, f2, f1
	lfs      f9, 0(r4)
	fmuls    f10, f3, f0
	lfs      f7, 0xc(r3)
	fmuls    f11, f3, f1
	fneg     f2, f4
	fmuls    f0, f5, f6
	stfs     f4, 0(r5)
	fneg     f8, f5
	lfs      f4, 0x10(r3)
	fneg     f3, f10
	fmadds   f2, f2, f9, f0
	stfs     f8, 4(r5)
	lfs      f1, lbl_80516998@sda21(r2)
	fadds    f5, f9, f2
	lfs      f0, lbl_8051699C@sda21(r2)
	fmuls    f2, f11, f6
	fadds    f5, f7, f5
	fmsubs   f2, f3, f9, f2
	stfs     f5, 0xc(r5)
	fadds    f2, f6, f2
	stfs     f10, 0x10(r5)
	fadds    f2, f4, f2
	stfs     f11, 0x14(r5)
	stfs     f2, 0x1c(r5)
	stfs     f1, 0x2c(r5)
	stfs     f1, 0x24(r5)
	stfs     f1, 0x20(r5)
	stfs     f1, 0x18(r5)
	stfs     f1, 8(r5)
	stfs     f0, 0x28(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005F424
 * Size:	0000A8
 */
void J3DGetTextureMtxMaya(const J3DTextureSRTInfo&, float (*)[4])
{
	/*
	lfs      f9, lbl_805169A0@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, 0x10(r3)
	addi     r5, r5, sincosTable___5JMath@l
	lha      r0, 8(r3)
	fsubs    f1, f0, f9
	lfs      f8, 4(r3)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfs      f0, 0xc(r3)
	lfsx     f10, r5, r0
	add      r5, r5, r0
	fadds    f6, f1, f8
	lfs      f11, 4(r5)
	lfs      f4, 0(r3)
	fsubs    f12, f0, f9
	fmuls    f7, f8, f10
	lfs      f1, lbl_80516998@sda21(r2)
	fmuls    f3, f4, f11
	lfs      f0, lbl_8051699C@sda21(r2)
	fmuls    f2, f10, f6
	fneg     f4, f4
	stfs     f3, 0(r4)
	fneg     f3, f12
	fmsubs   f5, f12, f11, f2
	fmuls    f2, f11, f6
	stfs     f7, 4(r4)
	fmuls    f4, f4, f10
	fadds    f5, f9, f5
	fmsubs   f2, f3, f10, f2
	fmuls    f3, f8, f11
	stfs     f5, 8(r4)
	fadds    f2, f9, f2
	stfs     f4, 0x10(r4)
	stfs     f3, 0x14(r4)
	stfs     f2, 0x18(r4)
	stfs     f1, 0x2c(r4)
	stfs     f1, 0x24(r4)
	stfs     f1, 0x20(r4)
	stfs     f1, 0x1c(r4)
	stfs     f1, 0xc(r4)
	stfs     f0, 0x28(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005F4CC
 * Size:	0000A8
 */
void J3DGetTextureMtxMayaOld(const J3DTextureSRTInfo&, float (*)[4])
{
	/*
	lfs      f9, lbl_805169A0@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, 0x10(r3)
	addi     r5, r5, sincosTable___5JMath@l
	lha      r0, 8(r3)
	fsubs    f1, f0, f9
	lfs      f8, 4(r3)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfs      f0, 0xc(r3)
	lfsx     f10, r5, r0
	add      r5, r5, r0
	fadds    f6, f1, f8
	lfs      f11, 4(r5)
	lfs      f4, 0(r3)
	fsubs    f12, f0, f9
	fmuls    f7, f8, f10
	lfs      f1, lbl_80516998@sda21(r2)
	fmuls    f3, f4, f11
	lfs      f0, lbl_8051699C@sda21(r2)
	fmuls    f2, f10, f6
	fneg     f4, f4
	stfs     f3, 0(r4)
	fneg     f3, f12
	fmsubs   f5, f12, f11, f2
	fmuls    f2, f11, f6
	stfs     f7, 4(r4)
	fmuls    f4, f4, f10
	fadds    f5, f9, f5
	fmsubs   f2, f3, f10, f2
	fmuls    f3, f8, f11
	stfs     f5, 0xc(r4)
	fadds    f2, f9, f2
	stfs     f4, 0x10(r4)
	stfs     f3, 0x14(r4)
	stfs     f2, 0x1c(r4)
	stfs     f1, 0x2c(r4)
	stfs     f1, 0x24(r4)
	stfs     f1, 0x20(r4)
	stfs     f1, 0x18(r4)
	stfs     f1, 8(r4)
	stfs     f0, 0x28(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005F574
 * Size:	000064
 */
void J3DScaleNrmMtx(float (*)[4], const Vec&)
{
	/*
	psq_l    f2, 0(r4), 0, qr0
	psq_l    f0, 0(r3), 0, qr0
	lfs      f3, 8(r4)
	lfs      f1, 8(r3)
	ps_mul   f4, f0, f2
	psq_st   f4, 0(r3), 0, qr0
	fmuls    f4, f1, f3
	stfs     f4, 8(r3)
	psq_l    f2, 0(r4), 0, qr0
	psq_l    f0, 16(r3), 0, qr0
	lfs      f3, 8(r4)
	lfs      f1, 0x18(r3)
	ps_mul   f4, f0, f2
	psq_st   f4, 16(r3), 0, qr0
	fmuls    f4, f1, f3
	stfs     f4, 0x18(r3)
	psq_l    f2, 0(r4), 0, qr0
	psq_l    f0, 32(r3), 0, qr0
	lfs      f3, 8(r4)
	lfs      f1, 0x28(r3)
	ps_mul   f4, f0, f2
	psq_st   f4, 32(r3), 0, qr0
	fmuls    f4, f1, f3
	stfs     f4, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005F5D8
 * Size:	000054
 */
void J3DScaleNrmMtx33(float (*)[3], const Vec&)
{
	/*
	psq_l    f0, 0(r3), 0, qr0
	psq_l    f6, 0(r4), 0, qr0
	lfs      f1, 8(r3)
	lfs      f7, 8(r4)
	ps_mul   f0, f0, f6
	psq_l    f2, 12(r3), 0, qr0
	fmuls    f1, f1, f7
	lfs      f3, 0x14(r3)
	ps_mul   f2, f2, f6
	psq_l    f4, 24(r3), 0, qr0
	fmuls    f3, f3, f7
	lfs      f5, 0x20(r3)
	ps_mul   f4, f4, f6
	psq_st   f0, 0(r3), 0, qr0
	fmuls    f5, f5, f7
	stfs     f1, 8(r3)
	psq_st   f2, 12(r3), 0, qr0
	stfs     f3, 0x14(r3)
	psq_st   f4, 24(r3), 0, qr0
	stfs     f5, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005F62C
 * Size:	000124
 */
void J3DMtxProjConcat(float (*)[4], float (*)[4], float (*)[4])
{
	/*
	psq_l    f2, 0(r3), 0, qr0
	psq_l    f3, 8(r3), 0, qr0
	ps_merge00 f6, f2, f2
	ps_merge11 f7, f2, f2
	ps_merge00 f8, f3, f3
	ps_merge11 f9, f3, f3
	psq_l    f10, 0(r4), 0, qr0
	psq_l    f11, 16(r4), 0, qr0
	psq_l    f12, 32(r4), 0, qr0
	psq_l    f13, 48(r4), 0, qr0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 0(r5), 0, qr0
	psq_l    f10, 8(r4), 0, qr0
	psq_l    f11, 24(r4), 0, qr0
	psq_l    f12, 40(r4), 0, qr0
	psq_l    f13, 56(r4), 0, qr0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 8(r5), 0, qr0
	psq_l    f2, 16(r3), 0, qr0
	psq_l    f3, 24(r3), 0, qr0
	ps_merge00 f6, f2, f2
	ps_merge11 f7, f2, f2
	ps_merge00 f8, f3, f3
	ps_merge11 f9, f3, f3
	psq_l    f10, 0(r4), 0, qr0
	psq_l    f11, 16(r4), 0, qr0
	psq_l    f12, 32(r4), 0, qr0
	psq_l    f13, 48(r4), 0, qr0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 16(r5), 0, qr0
	psq_l    f10, 8(r4), 0, qr0
	psq_l    f11, 24(r4), 0, qr0
	psq_l    f12, 40(r4), 0, qr0
	psq_l    f13, 56(r4), 0, qr0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 24(r5), 0, qr0
	psq_l    f2, 32(r3), 0, qr0
	psq_l    f3, 40(r3), 0, qr0
	ps_merge00 f6, f2, f2
	ps_merge11 f7, f2, f2
	ps_merge00 f8, f3, f3
	ps_merge11 f9, f3, f3
	psq_l    f10, 0(r4), 0, qr0
	psq_l    f11, 16(r4), 0, qr0
	psq_l    f12, 32(r4), 0, qr0
	psq_l    f13, 48(r4), 0, qr0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 32(r5), 0, qr0
	psq_l    f10, 8(r4), 0, qr0
	psq_l    f11, 24(r4), 0, qr0
	psq_l    f12, 40(r4), 0, qr0
	psq_l    f13, 56(r4), 0, qr0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 40(r5), 0, qr0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005F750
 * Size:	0000DC
 */
void J3DPSMtxArrayConcat(float (*)[4], float (*)[4], float (*)[4], unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  stfd      f14, 0x8(r1)
	  lis       r7, 0x8051
	  stfd      f15, 0x10(r1)
	  addi      r7, r7, 0x46E0
	  stfd      f31, 0x28(r1)
	  subi      r4, r4, 0x8
	  subi      r5, r5, 0x8
	  mtctr     r6

	.loc_0x24:
	  psq_l     f0,0x0(r3),0,0
	  psq_l     f6,0x8(r4),0,0
	  psq_l     f7,0x10(r4),0,0
	  psq_l     f8,0x18(r4),0,0
	  ps_muls0  f12, f6, f0
	  psq_l     f2,0x10(r3),0,0
	  ps_muls0  f13, f7, f0
	  psq_l     f31,0x0(r7),0,0
	  ps_muls0  f14, f6, f2
	  psq_l     f9,0x20(r4),0,0
	  ps_muls0  f15, f7, f2
	  psq_l     f1,0x8(r3),0,0
	  ps_madds1 f12, f8, f0, f12
	  psq_l     f3,0x18(r3),0,0
	  ps_madds1 f14, f8, f2, f14
	  psq_l     f10,0x28(r4),0,0
	  ps_madds1 f13, f9, f0, f13
	  psq_lu    f11,0x30(r4),0,0
	  ps_madds1 f15, f9, f2, f15
	  psq_l     f4,0x20(r3),0,0
	  psq_l     f5,0x28(r3),0,0
	  ps_madds0 f12, f10, f1, f12
	  ps_madds0 f13, f11, f1, f13
	  ps_madds0 f14, f10, f3, f14
	  ps_madds0 f15, f11, f3, f15
	  psq_st    f12,0x8(r5),0,0
	  ps_muls0  f2, f6, f4
	  ps_madds1 f13, f31, f1, f13
	  ps_muls0  f0, f7, f4
	  psq_st    f14,0x18(r5),0,0
	  ps_madds1 f15, f31, f3, f15
	  psq_st    f13,0x10(r5),0,0
	  ps_madds1 f2, f8, f4, f2
	  ps_madds1 f0, f9, f4, f0
	  ps_madds0 f2, f10, f5, f2
	  psq_st    f15,0x20(r5),0,0
	  ps_madds0 f0, f11, f5, f0
	  psq_st    f2,0x28(r5),0,0
	  ps_madds1 f0, f31, f5, f0
	  psq_stu   f0,0x30(r5),0,0
	  bdnz+     .loc_0x24
	  lfd       f14, 0x8(r1)
	  lfd       f15, 0x10(r1)
	  lfd       f31, 0x28(r1)
	  addi      r1, r1, 0x40
	  blr
	*/
}
