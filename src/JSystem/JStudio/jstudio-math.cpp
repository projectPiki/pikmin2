#include "JSystem/JStudio/math.h"
#include "JSystem/JGeometry.h"
#include "types.h"
#include "math.h"

namespace JStudio {

/**
 * @note Address: N/A
 * @note Size: 0x158
 */
void math::getRotation_xyz(MtxP mtx, f32 x, f32 y, f32 z)
{
	f32 cosx     = dolcosf(x * 0.017453292f);
	f32 sinx     = dolsinf(x * 0.017453292f);
	f32 cosy     = dolcosf(y * 0.017453292f);
	f32 siny     = dolsinf(y * 0.017453292f);
	f32 cosz     = dolcosf(z * 0.017453292f);
	f32 sinz     = dolsinf(z * 0.017453292f);
	f32 cosxcosz = cosx * cosz;
	f32 cosxsinz = cosx * sinz;
	f32 sinxcosz = sinx * cosz;
	f32 sinxsinz = sinx * sinz;

	mtx[0][0] = cosy * cosz;
	mtx[1][0] = cosy * sinz;
	mtx[2][0] = -siny;
	mtx[2][1] = sinx * cosy;
	mtx[2][2] = cosx * cosy;
	mtx[0][1] = ((sinxcosz * siny) - cosxsinz);
	mtx[0][2] = (sinxsinz + (cosxcosz * siny));
	mtx[1][1] = (cosxcosz + (sinxsinz * siny));
	mtx[1][2] = (((cosxsinz)*siny) - sinxcosz);
	mtx[0][3] = 0.0f;
	mtx[1][3] = 0.0f;
	mtx[2][3] = 0.0f;
}

/**
 * @note Address: 0x80010FC4
 * @note Size: 0x1B0
 */
void math::getTransformation_SRxyzT(MtxP mtx, const Vec& scale, const Vec& rotation, const Vec& translation)
{
	Mtx scaleMtx;
	PSMTXScale(scaleMtx, scale.x, scale.y, scale.z);
	Mtx tempMtx;
	rotate_xyz(scaleMtx, tempMtx, rotation);
	PSMTXTransApply(tempMtx, mtx, translation.x, translation.y, translation.z);
}

/**
 * @note Address: N/A
 * @note Size: 0x1B4
 */
void math::transform_SRxyzT(MtxP, f32 const (*)[4], Vec const&, Vec const&, Vec const&)
{
	// UNUSED FUNCTION
}
f32 math::getFromTransformation_Sn(const Mtx mtx, u32 column)
{
	Vec col;
	col.x = mtx[0][column];
	col.y = mtx[1][column];
	col.z = mtx[2][column];
	return PSVECMag(&col);
}
/**
 * @note Address: 0x80011174
 * @note Size: 0x254
 */
void math::getFromTransformation_S(Vec* v, const Mtx mtx)
{
	v->x = getFromTransformation_Sn(mtx, 0);
	v->y = getFromTransformation_Sn(mtx, 1);
	v->z = getFromTransformation_Sn(mtx, 2);
}

void math::getFromTransformation_T(Vec* v, const Mtx mtx)
{
	v->x = mtx[0][3];
	v->y = mtx[1][3];
	v->z = mtx[2][3];
}

void math::getFromTransformation_SRxyzT(Vec* pS, Vec* pR, Vec* pT, const Mtx mtx)
{
	// to match tp debug
	u8 m[5];
	m[4] = 0;
	m[0] = 0;
	getFromTransformation_S(pS, mtx);
	getFromTransformation_T(pT, mtx);

	JGeometry::TRotation3D rotMtx;
	JGeometry::TVec3<f64> outRot;

	f64 invScaleX = 0.0;
	f64 invScaleY = 0.0;
	f64 invScaleZ = 0.0;

	if (pS->x != 0.0f) {
		invScaleX = 1.0 / pS->x;
	}

	if (pS->y != 0.0f) {
		invScaleY = 1.0 / pS->y;
	}

	if (pS->z != 0.0f) {
		invScaleZ = 1.0 / pS->z;
	}

	rotMtx.mtx.set(mtx[0][0] * invScaleX, mtx[0][1] * invScaleY, mtx[0][2] * invScaleZ, mtx[1][0] * invScaleX, mtx[1][1] * invScaleY,
	               mtx[1][2] * invScaleZ, mtx[2][0] * invScaleX, mtx[2][1] * invScaleY, mtx[2][2] * invScaleZ);

	rotMtx.getEulerXYZ(outRot);
	outRot *= RAD2DEG_F64;

	pR->x = outRot.x;
	pR->y = outRot.y;
	pR->z = outRot.z;
}
} // namespace JStudio
