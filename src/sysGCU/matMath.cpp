#include "Matrixf.h"
#include "Quat.h"
#include "trig.h"

/**
 * @note Address: N/A
 * @note Size: 0x228
 */
void Matrixf::makeNaturalPosture(Vector3f& direction)
{
	direction.x = 1.0f;
	direction.y = 0.0f; // this is just here for sdata2
	direction.z = cosf(1.0f);
	direction.y = sinf(1.0f);

	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80427F90
 * @note Size: 0x344
 */
void Matrixf::makeNaturalPosture(Vector3f& direction, f32 a1)
{
	Vector3f xDir, zDir;
	f32 absZ = absF(direction.z);
	f32 absX = absF(direction.x);
	if (absX > absZ) {
		zDir.set(sinf(a1), 0.0f, cosfc(a1));
		xDir = direction;
		xDir.CP(zDir);
		xDir.normalise();
		zDir = xDir;
		zDir.CP(direction);
		zDir.normalise();
	} else {
		xDir = Vector3f(sinf(a1 + HALF_PI), 0.0f, cosf(a1 + HALF_PI));
		zDir = xDir;
		zDir.CP(direction);
		zDir.normalise();
		xDir = direction;
		xDir.CP(zDir);
		xDir.normalise();
	}
	mMatrix.structView.xx = xDir.x;
	mMatrix.structView.xy = xDir.y;
	mMatrix.structView.xz = xDir.z;

	mMatrix.structView.yx = direction.x;
	mMatrix.structView.yy = direction.y;
	mMatrix.structView.yz = direction.z;

	mMatrix.structView.zx = zDir.x;
	mMatrix.structView.zy = zDir.y;
	mMatrix.structView.zz = zDir.z;

	setColumn(3, Vector3f::zero);
}

/**
 * @note Address: 0x804282D4
 * @note Size: 0x4
 */
void Matrixf::print(char*)
{
}

/**
 * @note Address: 0x804282D8
 * @note Size: 0x288
 */
void Matrixf::makeSRT(Vector3f& scale, Vector3f& rotation, Vector3f& translation)
{
	u32 stackFix[6];

	f32 sinX = sinf(rotation.x);
	f32 sinY = sinf(rotation.y);
	f32 sinZ = sinf(rotation.z);

	f32 cosX = cosf(rotation.x);
	f32 cosY = cosf(rotation.y);
	f32 cosZ = cosf(rotation.z);

	f32 cosX_cosZ = cosX * cosZ;
	f32 sinX_sinY = sinX * sinY;
	f32 cosX_sinZ = cosX * sinZ;

	mMatrix.mtxView[0][0] = cosY * cosZ * scale.x;
	mMatrix.mtxView[1][0] = cosY * sinZ * scale.x;
	mMatrix.mtxView[2][0] = scale.x * -sinY;

	mMatrix.mtxView[0][1] = (sinX_sinY * cosZ - cosX_sinZ) * scale.y;
	mMatrix.mtxView[1][1] = (sinX_sinY * sinZ + cosX_cosZ) * scale.y;
	mMatrix.mtxView[2][1] = sinX * cosY * scale.y;

	mMatrix.mtxView[0][2] = (cosX_cosZ * sinY + sinX * sinZ) * scale.z;
	mMatrix.mtxView[1][2] = (cosX_sinZ * sinY - sinX * cosZ) * scale.z;
	mMatrix.mtxView[2][2] = cosX * cosY * scale.z;

	mMatrix.mtxView[0][3] = translation.x;
	mMatrix.mtxView[1][3] = translation.y;
	mMatrix.mtxView[2][3] = translation.z;
}

/**
 * @note Address: 0x80428560
 * @note Size: 0x50
 */
void Matrixf::makeST(Vector3f& s, Vector3f& t)
{
	mMatrix.mtxView[0][0] = s.x;
	mMatrix.mtxView[1][0] = 0.0f;
	mMatrix.mtxView[2][0] = 0.0f;

	mMatrix.mtxView[0][1] = 0.0f;
	mMatrix.mtxView[1][1] = s.y;
	mMatrix.mtxView[2][1] = 0.0f;

	mMatrix.mtxView[0][2] = 0.0f;
	mMatrix.mtxView[1][2] = 0.0f;
	mMatrix.mtxView[2][2] = s.z;

	setColumn(3, t);
}

/**
 * @note Address: 0x804285B0
 * @note Size: 0x290
 */
void Matrixf::makeSR(Vector3f& scale, Vector3f& rotation)
{
	u32 stackFix[6];

	f32 sinX = sinf(rotation.x);
	f32 sinY = sinf(rotation.y);
	f32 sinZ = sinf(rotation.z);

	f32 cosX = cosf(rotation.x);
	f32 cosY = cosf(rotation.y);
	f32 cosZ = cosf(rotation.z);

	f32 cosX_cosZ = cosX * cosZ;
	f32 sinX_sinY = sinX * sinY;
	f32 cosX_sinZ = cosX * sinZ;

	mMatrix.mtxView[0][0] = cosY * cosZ * scale.x;
	mMatrix.mtxView[1][0] = cosY * sinZ * scale.x;
	mMatrix.mtxView[2][0] = scale.x * -sinY;

	mMatrix.mtxView[0][1] = (sinX_sinY * cosZ - cosX_sinZ) * scale.y;
	mMatrix.mtxView[1][1] = (sinX_sinY * sinZ + cosX_cosZ) * scale.y;
	mMatrix.mtxView[2][1] = sinX * cosY * scale.y;

	mMatrix.mtxView[0][2] = (cosX_cosZ * sinY + sinX * sinZ) * scale.z;
	mMatrix.mtxView[1][2] = (cosX_sinZ * sinY - sinX * cosZ) * scale.z;
	mMatrix.mtxView[2][2] = cosX * cosY * scale.z;

	setColumn(3, 0.0f, 0.0f, 0.0f);
}

/**
 * @note Address: 0x80428840
 * @note Size: 0x48
 */
void Matrixf::makeT(Vector3f& t)
{
	setColumn(0, 1.0f, 0.0f, 0.0f);
	setColumn(1, 0.0f, 1.0f, 0.0f);
	setColumn(2, 0.0f, 0.0f, 1.0f);
	setColumn(3, t);
}

/**
 * @note Address: 0x80428888
 * @note Size: 0x230
 */
void Matrixf::makeTR(Vector3f& translation, Vector3f& rotation)
{
	u32 stackFix[6];

	f32 sinX = sinf(rotation.x);
	f32 sinY = sinf(rotation.y);
	f32 sinZ = sinf(rotation.z);

	f32 cosX = cosf(rotation.x);
	f32 cosY = cosf(rotation.y);
	f32 cosZ = cosf(rotation.z);

	f32 cosX_cosZ = cosX * cosZ;
	f32 sinX_sinY = sinX * sinY;
	f32 cosX_sinZ = cosX * sinZ;

	mMatrix.mtxView[0][0] = cosY * cosZ;
	mMatrix.mtxView[1][0] = cosY * sinZ;
	mMatrix.mtxView[2][0] = -sinY;

	mMatrix.mtxView[0][1] = (sinX_sinY * cosZ - cosX_sinZ);
	mMatrix.mtxView[1][1] = (sinX_sinY * sinZ + cosX_cosZ);
	mMatrix.mtxView[2][1] = sinX * cosY;

	mMatrix.mtxView[0][2] = (cosX_cosZ * sinY + sinX * sinZ);
	mMatrix.mtxView[1][2] = (cosX_sinZ * sinY - sinX * cosZ);
	mMatrix.mtxView[2][2] = cosX * cosY;

	mMatrix.mtxView[0][3] = translation.x;
	mMatrix.mtxView[1][3] = translation.y;
	mMatrix.mtxView[2][3] = translation.z;
}

/**
 * @note Address: N/A
 * @note Size: 0x128
 */
void Matrixf::makeSQT(Vector3f& t, Quat&, Vector3f&)
{
	t.x = HALF_PI;
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80428AB8
 * @note Size: 0xD0
 */
void Matrixf::makeTQ(Vector3f& translation, Quat& rotation)
{
	f32 yy2 = 2.0f * rotation.v.y * rotation.v.y;
	f32 zz2 = 2.0f * rotation.v.z * rotation.v.z;
	f32 xx2 = 2.0f * rotation.v.x * rotation.v.x;

	f32 xy2 = 2.0f * rotation.v.x * rotation.v.y;
	f32 xz2 = 2.0f * rotation.v.x * rotation.v.z;
	f32 yz2 = 2.0f * rotation.v.y * rotation.v.z;

	f32 sz = 2.0f * rotation.w * rotation.v.z;
	f32 sx = 2.0f * rotation.w * rotation.v.x;
	f32 sy = 2.0f * rotation.w * rotation.v.y;

	mMatrix.mtxView[0][0] = (1.0f - yy2 - zz2);
	mMatrix.mtxView[0][1] = (xy2 - sz);
	mMatrix.mtxView[0][2] = (xz2 + sy);

	mMatrix.mtxView[1][0] = (xy2 + sz);
	mMatrix.mtxView[1][1] = (1.0f - xx2 - zz2);
	mMatrix.mtxView[1][2] = (yz2 - sx);

	mMatrix.mtxView[2][0] = (xz2 - sy);
	mMatrix.mtxView[2][1] = (yz2 + sx);
	mMatrix.mtxView[2][2] = (1.0f - xx2 - yy2);

	mMatrix.mtxView[0][3] = translation.x;
	mMatrix.mtxView[1][3] = translation.y;
	mMatrix.mtxView[2][3] = translation.z;
}

/**
 * @note Address: 0x80428B88
 * @note Size: 0xC8
 */
void Matrixf::makeQ(Quat& rotation)
{
	f32 yy2 = 2.0f * rotation.v.y * rotation.v.y;
	f32 zz2 = 2.0f * rotation.v.z * rotation.v.z;
	f32 xx2 = 2.0f * rotation.v.x * rotation.v.x;

	f32 xy2 = 2.0f * rotation.v.x * rotation.v.y;
	f32 xz2 = 2.0f * rotation.v.x * rotation.v.z;
	f32 yz2 = 2.0f * rotation.v.y * rotation.v.z;

	f32 sz = 2.0f * rotation.w * rotation.v.z;
	f32 sx = 2.0f * rotation.w * rotation.v.x;
	f32 sy = 2.0f * rotation.w * rotation.v.y;

	mMatrix.mtxView[0][0] = (1.0f - yy2 - zz2);
	mMatrix.mtxView[0][1] = (xy2 - sz);
	mMatrix.mtxView[0][2] = (xz2 + sy);

	mMatrix.mtxView[1][0] = (xy2 + sz);
	mMatrix.mtxView[1][1] = (1.0f - xx2 - zz2);
	mMatrix.mtxView[1][2] = (yz2 - sx);

	mMatrix.mtxView[2][0] = (xz2 - sy);
	mMatrix.mtxView[2][1] = (yz2 + sx);
	mMatrix.mtxView[2][2] = (1.0f - xx2 - yy2);

	setColumn(3, 0.0f, 0.0f, 0.0f);
}
