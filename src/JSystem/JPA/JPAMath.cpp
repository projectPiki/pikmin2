#include "JSystem/JGeometry.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516C18
    lbl_80516C18:
        .float 1.0
    .global lbl_80516C1C
    lbl_80516C1C:
        .4byte 0x00000000
    .global lbl_80516C20
    lbl_80516C20:
        .float 0.5
    .global lbl_80516C24
    lbl_80516C24:
        .4byte 0x40400000
    .global lbl_80516C28
    lbl_80516C28:
        .4byte 0x42000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JPAConvertFixToFloat(short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80093AE4
 * Size:	000100
 */
void JPAGetDirMtx(const JGeometry::TVec3f&, float (*)[4])
{
	/*
	lfs      f0, 0(r3)
	lfs      f3, 4(r3)
	fneg     f4, f0
	lfs      f1, lbl_80516C1C@sda21(r2)
	fmuls    f0, f4, f4
	fmadds   f0, f3, f3, f0
	fadds    f7, f1, f0
	fcmpo    cr0, f7, f1
	cror     2, 0, 2
	bne      lbl_80093B10
	b        lbl_80093B34

lbl_80093B10:
	frsqrte  f5, f7
	lfs      f2, lbl_80516C20@sda21(r2)
	lfs      f0, lbl_80516C24@sda21(r2)
	frsp     f5, f5
	fmuls    f1, f5, f5
	fmuls    f2, f2, f5
	fnmsubs  f0, f7, f1, f0
	fmuls    f0, f2, f0
	fmuls    f7, f7, f0

lbl_80093B34:
	lis      r5, __float_epsilon@ha
	lfs      f1, lbl_80516C28@sda21(r2)
	lfs      f0, __float_epsilon@l(r5)
	fmuls    f0, f1, f0
	fcmpo    cr0, f7, f0
	cror     2, 0, 2
	bne      lbl_80093B5C
	lfs      f2, lbl_80516C1C@sda21(r2)
	fmr      f8, f2
	b        lbl_80093B6C

lbl_80093B5C:
	lfs      f0, lbl_80516C18@sda21(r2)
	fdivs    f0, f0, f7
	fmuls    f8, f3, f0
	fmuls    f2, f4, f0

lbl_80093B6C:
	fmuls    f10, f8, f8
	lfs      f6, lbl_80516C18@sda21(r2)
	lfs      f9, 8(r3)
	fmuls    f12, f2, f7
	fmuls    f11, f2, f2
	lfs      f3, lbl_80516C1C@sda21(r2)
	fsubs    f1, f6, f10
	lfs      f0, 8(r3)
	fsubs    f5, f6, f9
	fmuls    f4, f8, f2
	fmadds   f2, f9, f1, f10
	fsubs    f1, f6, f11
	fmuls    f6, f5, f4
	stfs     f2, 0(r4)
	fneg     f4, f12
	fmuls    f5, f8, f7
	stfs     f6, 4(r4)
	fmadds   f2, f9, f1, f11
	stfs     f4, 8(r4)
	fneg     f1, f5
	stfs     f3, 0xc(r4)
	stfs     f6, 0x10(r4)
	stfs     f2, 0x14(r4)
	stfs     f5, 0x18(r4)
	stfs     f3, 0x1c(r4)
	stfs     f12, 0x20(r4)
	stfs     f1, 0x24(r4)
	stfs     f0, 0x28(r4)
	stfs     f3, 0x2c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80093BE4
 * Size:	000074
 */
void JPAGetYZRotateMtx(short, short, float (*)[4])
{
	/*
	lis      r6, sincosTable___5JMath@ha
	rlwinm   r0, r3, 0x1e, 0x12, 0x1c
	addi     r3, r6, sincosTable___5JMath@l
	lfs      f0, lbl_80516C1C@sda21(r2)
	rlwinm   r6, r4, 0x1e, 0x12, 0x1c
	lfsx     f8, r3, r0
	addi     r4, r3, 4
	lfsx     f2, r3, r6
	lfsx     f6, r4, r0
	lfsx     f7, r4, r6
	fneg     f5, f2
	fmuls    f3, f6, f2
	fmuls    f1, f6, f7
	fmuls    f4, f8, f7
	fmuls    f2, f8, f2
	stfs     f1, 0(r5)
	fneg     f1, f8
	stfs     f5, 4(r5)
	stfs     f4, 8(r5)
	stfs     f3, 0x10(r5)
	stfs     f7, 0x14(r5)
	stfs     f2, 0x18(r5)
	stfs     f1, 0x20(r5)
	stfs     f6, 0x28(r5)
	stfs     f0, 0x2c(r5)
	stfs     f0, 0x24(r5)
	stfs     f0, 0x1c(r5)
	stfs     f0, 0xc(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80093C58
 * Size:	00009C
 */
void JPAGetXYZRotateMtx(short, short, short, float (*)[4])
{
	/*
	lis      r7, sincosTable___5JMath@ha
	rlwinm   r8, r4, 0x1e, 0x12, 0x1c
	addi     r7, r7, sincosTable___5JMath@l
	rlwinm   r5, r5, 0x1e, 0x12, 0x1c
	addi     r4, r7, 4
	rlwinm   r0, r3, 0x1e, 0x12, 0x1c
	lfsx     f5, r4, r8
	lfsx     f6, r4, r5
	lfsx     f9, r7, r5
	lfsx     f7, r7, r0
	fmuls    f0, f5, f6
	lfsx     f4, r4, r0
	fmuls    f2, f5, f9
	lfsx     f8, r7, r8
	fmuls    f3, f7, f5
	fmuls    f10, f4, f9
	stfs     f0, 0(r6)
	fneg     f1, f8
	fmuls    f11, f7, f6
	lfs      f0, lbl_80516C1C@sda21(r2)
	stfs     f2, 0x10(r6)
	fmuls    f2, f4, f5
	stfs     f1, 0x20(r6)
	fmsubs   f1, f11, f8, f10
	fmuls    f5, f7, f9
	stfs     f3, 0x24(r6)
	fmuls    f4, f4, f6
	fmsubs   f3, f10, f8, f11
	stfs     f2, 0x28(r6)
	fmadds   f2, f4, f8, f5
	stfs     f1, 4(r6)
	fmadds   f1, f5, f8, f4
	stfs     f3, 0x18(r6)
	stfs     f2, 8(r6)
	stfs     f1, 0x14(r6)
	stfs     f0, 0x2c(r6)
	stfs     f0, 0x1c(r6)
	stfs     f0, 0xc(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80093CF4
 * Size:	000028
 */
void JPASetRMtxfromMtx(const float (*)[4], float (*)[4])
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	addi     r5, r1, 0x14
	addi     r6, r1, 8
	bl
	"JPASetRMtxSTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>PQ29JGeometry8TVec3<f>"
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80093D1C
 * Size:	000028
 */
void JPASetRMtxTVecfromMtx(const float (*)[4], float (*)[4], JGeometry::TVec3<float>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r6, r5
	  stw       r0, 0x24(r1)
	  addi      r5, r1, 0x8
	  bl        .loc_0x28
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	80093D44
 * Size:	00021C
 */
void JPASetRMtxSTVecfromMtx(const float (*)[4], float (*)[4], JGeometry::TVec3<float>*, JGeometry::TVec3<float>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f1, 0x10(r3)
	  stw       r0, 0x24(r1)
	  fmuls     f1, f1, f1
	  lfs       f2, 0x0(r3)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  lfs       f3, 0x20(r3)
	  fmadds    f1, f2, f2, f1
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  lfs       f0, -0x7744(r2)
	  fmadds    f4, f3, f3, f1
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x58
	  b         .loc_0x7C

	.loc_0x58:
	  fsqrte    f3, f4
	  lfs       f2, -0x7740(r2)
	  lfs       f0, -0x773C(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f4, f4, f0

	.loc_0x7C:
	  lfs       f0, 0x14(r28)
	  lfs       f2, 0x4(r28)
	  fmuls     f1, f0, f0
	  lfs       f3, 0x24(r28)
	  lfs       f0, -0x7744(r2)
	  stfs      f4, 0x0(r30)
	  fmadds    f1, f2, f2, f1
	  fmadds    f4, f3, f3, f1
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xAC
	  b         .loc_0xD0

	.loc_0xAC:
	  fsqrte    f3, f4
	  lfs       f2, -0x7740(r2)
	  lfs       f0, -0x773C(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f4, f4, f0

	.loc_0xD0:
	  lfs       f0, 0x18(r28)
	  lfs       f2, 0x8(r28)
	  fmuls     f1, f0, f0
	  lfs       f3, 0x28(r28)
	  lfs       f0, -0x7744(r2)
	  stfs      f4, 0x4(r30)
	  fmadds    f1, f2, f2, f1
	  fmadds    f4, f3, f3, f1
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x100
	  b         .loc_0x124

	.loc_0x100:
	  fsqrte    f3, f4
	  lfs       f2, -0x7740(r2)
	  lfs       f0, -0x773C(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f4, f4, f0

	.loc_0x124:
	  stfs      f4, 0x8(r30)
	  mr        r3, r29
	  bl        0x56430
	  lfs       f0, -0x7744(r2)
	  lfs       f1, 0x0(r30)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x16C
	  lfs       f0, -0x7748(r2)
	  lfs       f2, 0x0(r28)
	  fdivs     f3, f0, f1
	  lfs       f1, 0x10(r28)
	  lfs       f0, 0x20(r28)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x0(r29)
	  stfs      f1, 0x10(r29)
	  stfs      f0, 0x20(r29)

	.loc_0x16C:
	  lfs       f0, -0x7744(r2)
	  lfs       f1, 0x4(r30)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x1A8
	  lfs       f0, -0x7748(r2)
	  lfs       f2, 0x4(r28)
	  fdivs     f3, f0, f1
	  lfs       f1, 0x14(r28)
	  lfs       f0, 0x24(r28)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x4(r29)
	  stfs      f1, 0x14(r29)
	  stfs      f0, 0x24(r29)

	.loc_0x1A8:
	  lfs       f0, -0x7744(r2)
	  lfs       f1, 0x8(r30)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x1E4
	  lfs       f0, -0x7748(r2)
	  lfs       f2, 0x8(r28)
	  fdivs     f3, f0, f1
	  lfs       f1, 0x18(r28)
	  lfs       f0, 0x28(r28)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r29)
	  stfs      f1, 0x18(r29)
	  stfs      f0, 0x28(r29)

	.loc_0x1E4:
	  lfs       f0, 0xC(r28)
	  lfs       f1, 0x1C(r28)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x2C(r28)
	  stfs      f1, 0x4(r31)
	  stfs      f0, 0x8(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80093F60
 * Size:	0000C8
 */
void JPACalcKeyAnmValue(float, unsigned short, const float*)
{
	/*
	lfs      f0, 0(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_80093F74
	lfs      f1, 4(r4)
	blr

lbl_80093F74:
	clrlwi   r3, r3, 0x10
	addi     r0, r3, -1
	slwi     r0, r0, 4
	lfsx     f0, r4, r0
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80093FD0
	add      r3, r4, r0
	lfs      f1, 4(r3)
	blr
	b        lbl_80093FD0

lbl_80093FA0:
	srwi     r0, r3, 0x1f
	add      r0, r0, r3
	srawi    r5, r0, 1
	slwi     r0, r5, 4
	lfsx     f0, r4, r0
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80093FCC
	add      r4, r4, r0
	subf     r3, r5, r3
	b        lbl_80093FD0

lbl_80093FCC:
	mr       r3, r5

lbl_80093FD0:
	cmpwi    r3, 1
	bgt      lbl_80093FA0
	lfs      f0, 0(r4)
	lfs      f2, 0x10(r4)
	fsubs    f5, f1, f0
	lfs      f6, 4(r4)
	fsubs    f4, f2, f0
	lfs      f2, 0x14(r4)
	lfs      f7, 0xc(r4)
	lfs      f8, 0x18(r4)
	fdivs    f3, f5, f4
	fmuls    f0, f3, f3
	fsubs    f4, f6, f2
	fadds    f1, f3, f3
	fsubs    f2, f0, f3
	fmsubs   f0, f1, f2, f0
	fmadds   f1, f7, f2, f7
	fmadds   f0, f0, f4, f6
	fmadds   f1, f8, f2, f1
	fmsubs   f1, f3, f7, f1
	fnmsubs  f1, f5, f1, f0
	blr
	*/
}
