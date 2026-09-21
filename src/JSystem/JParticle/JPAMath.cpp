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

	Vec& v   = (Vec&)vec;
	f32 xSq  = newVec.x * newVec.x;
	f32 ySq  = newVec.y * newVec.y;
	f32 xLen = newVec.x * mag;
	f32 yLen = newVec.y * mag;
	f32 xyz  = (1.0f - v.z) * (newVec.x * newVec.y);

	mtx[0][0] = xSq + v.z * (1.0f - xSq);
	mtx[0][1] = xyz;
	mtx[0][2] = -yLen;
	mtx[0][3] = 0.0f;

	mtx[1][0] = xyz;
	mtx[1][1] = ySq + v.z * (1.0f - ySq);
	mtx[1][2] = xLen;
	mtx[1][3] = 0.0f;

	mtx[2][0] = yLen;
	mtx[2][1] = -xLen;
	mtx[2][2] = vec.z;
	mtx[2][3] = 0.0f;
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
