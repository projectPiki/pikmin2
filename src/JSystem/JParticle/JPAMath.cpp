#include "JSystem/JGeometry.h"
#include "JSystem/JParticle/JPAMath.h"
#include "JSystem/JMath.h"

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
void JPAGetDirMtx(const JGeometry::TVec3f& vec, Mtx mtx)
{
	JGeometry::TVec3f local_78;
	f32 minusx = -vec.x;
	local_78.x = vec.y;
	local_78.y = minusx;
	local_78.z = 0.0f;
	local_78.normalize();
	// f32 len; //    = local_78.length();

	// // if (len <= 32.0f * FLT_EPSILON) {
	// // local_78.zero();
	// //} else {
	// // local_78.scale(1.0f / len);
	// //}
	// f32 xsquared = local_78.x * local_78.x;
	// f32 ysquared = local_78.y * local_78.y;
	// f32 xlen     = local_78.x * len;
	// f32 ylen     = local_78.y * len;
	// f32 fVar5    = (1.0f - vec.z) * (local_78.x * local_78.y);
	// mtx[0][0]    = xsquared + vec.z * (1.0f - xsquared);
	// mtx[0][1]    = fVar5;
	// mtx[0][2]    = -ylen;
	// mtx[0][3]    = 0.0f;
	// mtx[1][0]    = fVar5;
	// mtx[1][1]    = ysquared + vec.z * (1.0f - ysquared);
	// mtx[1][2]    = xlen;
	// mtx[1][3]    = 0.0f;
	// mtx[2][0]    = ylen;
	// mtx[2][1]    = -xlen;
	// mtx[2][2]    = vec.z;
	// mtx[2][3]    = 0.0f;
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
void JPAGetYZRotateMtx(s16 angleY, s16 angleZ, Mtx mtx)
{
	f32 cosy  = JMASCos(angleY);
	f32 cosz  = JMASCos(angleZ);
	f32 siny  = JMASSin(angleY);
	f32 sinz  = JMASSin(angleZ);
	mtx[0][0] = (cosy * cosz);
	mtx[0][1] = -sinz;
	mtx[0][2] = (siny * cosz);
	mtx[1][0] = (cosy * sinz);
	mtx[1][1] = cosz;
	mtx[1][2] = (siny * sinz);
	mtx[2][0] = -siny;
	mtx[2][2] = cosy;
	mtx[2][3] = 0.0f;
	mtx[2][1] = 0.0f;
	mtx[1][3] = 0.0f;
	mtx[0][3] = 0.0f;
}

/*
 * --INFO--
 * Address:	80093C58
 * Size:	00009C
 */
void JPAGetXYZRotateMtx(s16 x, s16 y, s16 z, Mtx mtx)
{
	f32 cosx     = JMASCos(x);
	f32 cosy     = JMASCos(y);
	f32 cosz     = JMASCos(z);
	f32 sinx     = JMASSin(x);
	f32 siny     = JMASSin(y);
	f32 sinz     = JMASSin(z);
	mtx[0][0]    = cosy * cosz;
	mtx[1][0]    = cosy * sinz;
	mtx[2][0]    = -siny;
	mtx[2][1]    = sinx * cosy;
	mtx[2][2]    = cosx * cosy;
	f32 cosxsinz = cosx * sinz;
	f32 sinxcosz = sinx * cosz;
	mtx[0][1]    = sinxcosz * siny - cosxsinz;
	mtx[1][2]    = cosxsinz * siny - sinxcosz;
	f32 sinxsinz = sinx * sinz;
	f32 cosxcosz = cosx * cosz;
	mtx[0][2]    = sinxsinz + cosxcosz * siny;
	mtx[1][1]    = cosxcosz + sinxsinz * siny;
	mtx[2][3]    = 0.0f;
	mtx[1][3]    = 0.0f;
	mtx[0][3]    = 0.0f;
}

/*
 * --INFO--
 * Address:	80093CF4
 * Size:	000028
 */
void JPASetRMtxfromMtx(const Mtx p1, Mtx p2)
{
	JGeometry::TVec3f v1;
	JGeometry::TVec3f v2;
	JPASetRMtxSTVecfromMtx(p1, p2, &v1, &v2);
}

/*
 * --INFO--
 * Address:	80093D1C
 * Size:	000028
 */
void JPASetRMtxTVecfromMtx(const Mtx p1, Mtx p2, JGeometry::TVec3f* p3)
{
	JGeometry::TVec3f v1;
	JPASetRMtxSTVecfromMtx(p1, p2, &v1, p3);
}

/*
 * --INFO--
 * Address:	80093D44
 * Size:	00021C
 */
void JPASetRMtxSTVecfromMtx(const Mtx p1, Mtx p2, JGeometry::TVec3f* vec1, JGeometry::TVec3f* vec2)
{
	JGeometry::TVec3f aTStack_54;
	aTStack_54.set(p1[0][0], p1[1][0], p1[2][0]);
	// vec1->x = aTStack_54.length();
	aTStack_54.set(p1[0][1], p1[1][1], p1[2][1]);
	// vec1->y = p1.length();
	aTStack_54.set(p1[0][2], p1[1][2], p1[2][2]);
	// vec1->z = aTStack_54.length();
	// MTXIdentity(p2);
	if (vec1->x != 0.0f) {
		f32 fVar5 = 1.0f / vec1->x;
		p2[0][0]  = p1[0][0] * fVar5;
		p2[1][0]  = p1[1][0] * fVar5;
		p2[2][0]  = p1[2][0] * fVar5;
	}
	if (vec1->y != 0.0f) {
		f32 fVar5 = 1.0f / vec1->y;
		p2[0][1]  = p1[0][1] * fVar5;
		p2[1][1]  = p1[1][1] * fVar5;
		p2[2][1]  = p1[2][1] * fVar5;
	}
	if (vec1->z != 0.0f) {
		f32 fVar5 = 1.0f / vec1->z;
		p2[0][2]  = p1[0][2] * fVar5;
		p2[1][2]  = p1[1][2] * fVar5;
		p2[2][2]  = p1[2][2] * fVar5;
	}
	vec2->set(p1[0][3], p1[1][3], p1[2][3]);

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
f32 JPACalcKeyAnmValue(f32 p1, u16 p2, const f32* p3)
{
	if (p1 < p3[0]) {
		return p3[1];
	}
	int ind = p2 - 1;
	if (p3[ind * 4] <= p1) {
		return p3[ind * 4 + 1];
	}
	int x = p2;
	while (x > 1) {
		u32 uVar3 = x / 2;
		if (p1 >= p3[uVar3 * 4]) {
			p3 += uVar3 * 4;
			x -= uVar3;
		} else {
			x = uVar3;
		}
	}
	return JMAHermiteInterpolation(p1, p3[0], p3[1], p3[3], p3[4], p3[5], p3[6]);
}
