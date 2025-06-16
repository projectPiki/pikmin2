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
	if (FABS(direction.x) > FABS(direction.z)) {
		xDir = Vector3f(sinf(a1), a1, cosf(a1));
		xDir.normalise();
		zDir = zDir.cross(xDir);
		zDir.normalise();
	} else {
		xDir = Vector3f(sinf(a1 + HALF_PI), a1 + HALF_PI, cosf(a1 + HALF_PI));
		xDir.normalise();
		zDir = zDir.cross(xDir);
		zDir.normalise();
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
	/*
	stwu     r1, -0x20(r1)
	lfs      f2, 8(r4)
	lfs      f0, 0(r4)
	fabs     f2, f2
	fabs     f3, f0
	frsp     f0, f2
	frsp     f2, f3
	fcmpo    cr0, f2, f0
	ble      lbl_80428118
	fmr      f2, f1
	lfs      f0, lbl_80520514@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80427FC8
	fneg     f2, f2

lbl_80427FC8:
	lfs      f3, lbl_80520518@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, lbl_80520514@sda21(r2)
	addi     r6, r5, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r5, r6, r0
	lfs      f6, 4(r5)
	bge      lbl_80428020
	lfs      f0, lbl_8052051C@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r6, r0
	fneg     f3, f0
	b        lbl_80428038

lbl_80428020:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r6, r0

lbl_80428038:
	lfs      f10, 0(r4)
	lfs      f8, 4(r4)
	fmuls    f1, f10, f6
	lfs      f9, 8(r4)
	lfs      f2, lbl_80520514@sda21(r2)
	fmuls    f0, f8, f3
	fmsubs   f4, f9, f3, f1
	fmuls    f1, f9, f2
	fmsubs   f5, f10, f2, f0
	fmuls    f0, f4, f4
	fmsubs   f3, f8, f6, f1
	fmuls    f1, f5, f5
	fmadds   f0, f3, f3, f0
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f2
	ble      lbl_80428088
	ble      lbl_8042808C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8042808C

lbl_80428088:
	fmr      f1, f2

lbl_8042808C:
	lfs      f0, lbl_80520514@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_804280AC
	lfs      f0, lbl_80520510@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0

lbl_804280AC:
	fmuls    f0, f3, f9
	lfs      f6, lbl_80520514@sda21(r2)
	fmuls    f2, f4, f10
	fmuls    f7, f5, f8
	fmsubs   f1, f5, f10, f0
	fmsubs   f2, f3, f8, f2
	fmsubs   f0, f4, f9, f7
	fmuls    f7, f1, f1
	fmuls    f8, f2, f2
	fmadds   f7, f0, f0, f7
	fadds    f7, f8, f7
	fcmpo    cr0, f7, f6
	ble      lbl_804280F0
	ble      lbl_804280F4
	frsqrte  f6, f7
	fmuls    f7, f6, f7
	b        lbl_804280F4

lbl_804280F0:
	fmr      f7, f6

lbl_804280F4:
	lfs      f6, lbl_80520514@sda21(r2)
	fcmpo    cr0, f7, f6
	ble      lbl_80428280
	lfs      f6, lbl_80520510@sda21(r2)
	fdivs    f6, f6, f7
	fmuls    f0, f0, f6
	fmuls    f1, f1, f6
	fmuls    f2, f2, f6
	b        lbl_80428280

lbl_80428118:
	lfs      f2, lbl_80520520@sda21(r2)
	lfs      f0, lbl_80520514@sda21(r2)
	fadds    f3, f2, f1
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80428134
	fneg     f1, f3

lbl_80428134:
	lfs      f2, lbl_80520518@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, lbl_80520514@sda21(r2)
	addi     r6, r5, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r5, r6, r0
	lfs      f1, 4(r5)
	bge      lbl_8042818C
	lfs      f0, lbl_8052051C@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r6, r0
	fneg     f4, f0
	b        lbl_804281A4

lbl_8042818C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r6, r0

lbl_804281A4:
	lfs      f8, 8(r4)
	lfs      f10, 4(r4)
	fmuls    f0, f4, f8
	lfs      f9, 0(r4)
	lfs      f5, lbl_80520514@sda21(r2)
	fmuls    f3, f1, f10
	fmsubs   f1, f1, f9, f0
	fmuls    f2, f5, f9
	fmsubs   f0, f5, f8, f3
	fmuls    f3, f1, f1
	fmsubs   f2, f4, f10, f2
	fmadds   f3, f0, f0, f3
	fmuls    f4, f2, f2
	fadds    f4, f4, f3
	fcmpo    cr0, f4, f5
	ble      lbl_804281F4
	ble      lbl_804281F8
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_804281F8

lbl_804281F4:
	fmr      f4, f5

lbl_804281F8:
	lfs      f3, lbl_80520514@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_80428218
	lfs      f3, lbl_80520510@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3

lbl_80428218:
	fmuls    f3, f9, f2
	lfs      f6, lbl_80520514@sda21(r2)
	fmuls    f5, f10, f0
	fmuls    f7, f8, f1
	fmsubs   f4, f8, f0, f3
	fmsubs   f5, f9, f1, f5
	fmsubs   f3, f10, f2, f7
	fmuls    f7, f4, f4
	fmuls    f8, f5, f5
	fmadds   f7, f3, f3, f7
	fadds    f7, f8, f7
	fcmpo    cr0, f7, f6
	ble      lbl_8042825C
	ble      lbl_80428260
	frsqrte  f6, f7
	fmuls    f7, f6, f7
	b        lbl_80428260

lbl_8042825C:
	fmr      f7, f6

lbl_80428260:
	lfs      f6, lbl_80520514@sda21(r2)
	fcmpo    cr0, f7, f6
	ble      lbl_80428280
	lfs      f6, lbl_80520510@sda21(r2)
	fdivs    f6, f6, f7
	fmuls    f3, f3, f6
	fmuls    f4, f4, f6
	fmuls    f5, f5, f6

lbl_80428280:
	stfs     f3, 0(r3)
	lis      r5, "zero__10Vector3<f>"@ha
	stfs     f4, 0x10(r3)
	stfs     f5, 0x20(r3)
	lfs      f3, 0(r4)
	stfs     f3, 4(r3)
	lfs      f3, 4(r4)
	stfs     f3, 0x14(r3)
	lfs      f3, 8(r4)
	stfs     f3, 0x24(r3)
	stfs     f0, 8(r3)
	stfs     f1, 0x18(r3)
	stfs     f2, 0x28(r3)
	lfsu     f0, "zero__10Vector3<f>"@l(r5)
	stfs     f0, 0xc(r3)
	lfs      f0, 4(r5)
	stfs     f0, 0x1c(r3)
	lfs      f0, 8(r5)
	stfs     f0, 0x2c(r3)
	addi     r1, r1, 0x20
	blr
	*/
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
