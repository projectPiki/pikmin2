#include "JSystem/JGeometry.h"
#include "JSystem/JParticle/JPAMath.h"
#include "JSystem/JMath.h"

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
f32 JPAConvertFixToFloat(s16 fix)
{
	return 1.0f;
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80093AE4
 * @note Size: 0x100
 */
void JPAGetDirMtx(const JGeometry::TVec3f& vec, Mtx mtx)
{
	JGeometry::TVec3f newVec;
	newVec.set(vec.y, -vec.x, 0.0f);
	f32 mag = newVec.length();
	if (mag <= JGeometry::TUtilf::epsilon()) {
		newVec.zero();
	} else {
		newVec.scale(1.0f / mag);
	}

	f32 xSq  = newVec.x * newVec.x;
	f32 ySq  = newVec.y * newVec.y;
	f32 xLen = newVec.x * mag;
	f32 yLen = newVec.y * mag;
	f32 xyz  = (1.0f - vec.z) * (newVec.x * newVec.y);

	mtx[0][0] = xSq + vec.z * (1.0f - xSq);
	mtx[0][1] = xyz;
	mtx[0][2] = -yLen;
	mtx[0][3] = 0.0f;

	mtx[1][0] = xyz;
	mtx[1][1] = ySq + vec.z * (1.0f - ySq);
	mtx[1][2] = xLen;
	mtx[1][3] = 0.0f;

	mtx[2][0] = yLen;
	mtx[2][1] = -xLen;
	mtx[2][2] = vec.z;
	mtx[2][3] = 0.0f;

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

/**
 * @note Address: 0x80093BE4
 * @note Size: 0x74
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

/**
 * @note Address: 0x80093C58
 * @note Size: 0x9C
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

/**
 * @note Address: 0x80093CF4
 * @note Size: 0x28
 */
void JPASetRMtxfromMtx(const Mtx p1, Mtx p2)
{
	JGeometry::TVec3f v1;
	JGeometry::TVec3f v2;
	JPASetRMtxSTVecfromMtx(p1, p2, &v1, &v2);
}

/**
 * @note Address: 0x80093D1C
 * @note Size: 0x28
 */
void JPASetRMtxTVecfromMtx(const Mtx p1, Mtx p2, JGeometry::TVec3f* p3)
{
	JGeometry::TVec3f v1;
	JPASetRMtxSTVecfromMtx(p1, p2, &v1, p3);
}

/**
 * @note Address: 0x80093D44
 * @note Size: 0x21C
 */
void JPASetRMtxSTVecfromMtx(const Mtx mtx, Mtx RMtx, JGeometry::TVec3f* lengths, JGeometry::TVec3f* translation)
{
	JGeometry::TVec3f tempVec;
	tempVec.set(mtx[0][0], mtx[1][0], mtx[2][0]);
	lengths->x = tempVec.length();
	tempVec.set(mtx[0][1], mtx[1][1], mtx[2][1]);
	lengths->y = tempVec.length();
	tempVec.set(mtx[0][2], mtx[1][2], mtx[2][2]);
	lengths->z = tempVec.length();
	PSMTXIdentity(RMtx);
	if (lengths->x != 0.0f) {
		f32 fVar5  = 1.0f / lengths->x;
		RMtx[0][0] = mtx[0][0] * fVar5;
		RMtx[1][0] = mtx[1][0] * fVar5;
		RMtx[2][0] = mtx[2][0] * fVar5;
	}
	if (lengths->y != 0.0f) {
		f32 fVar5  = 1.0f / lengths->y;
		RMtx[0][1] = mtx[0][1] * fVar5;
		RMtx[1][1] = mtx[1][1] * fVar5;
		RMtx[2][1] = mtx[2][1] * fVar5;
	}
	if (lengths->z != 0.0f) {
		f32 fVar5  = 1.0f / lengths->z;
		RMtx[0][2] = mtx[0][2] * fVar5;
		RMtx[1][2] = mtx[1][2] * fVar5;
		RMtx[2][2] = mtx[2][2] * fVar5;
	}

	translation->set(mtx[0][3], mtx[1][3], mtx[2][3]);
}

/**
 * @note Address: 0x80093F60
 * @note Size: 0xC8
 */
f32 JPACalcKeyAnmValue(f32 currentFrame, u16 keyFrameCount, const f32* keyFrameData)
{
	if (currentFrame < keyFrameData[0]) {
		return keyFrameData[1];
	}

	int lastKeyFrameIndex = keyFrameCount - 1;
	if (keyFrameData[lastKeyFrameIndex * 4] <= currentFrame) {
		return keyFrameData[lastKeyFrameIndex * 4 + 1];
	}

	int frame = keyFrameCount;
	while (frame > 1) {
		u32 halfIndex = frame / 2;
		if (currentFrame >= keyFrameData[halfIndex * 4]) {
			keyFrameData += halfIndex * 4;
			frame -= halfIndex;
		} else {
			frame = halfIndex;
		}
	}

	return JMAHermiteInterpolation(currentFrame, keyFrameData[0], keyFrameData[1], keyFrameData[3], keyFrameData[4], keyFrameData[5],
	                               keyFrameData[6]);
}
