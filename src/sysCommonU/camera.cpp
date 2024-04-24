#include "Camera.h"
#include "types.h"
#include "Vector3.h"
#include "Sys/Sphere.h"
#include "Sys/Cylinder.h"
#include "System.h"
#include "trig.h"
#include "Quat.h"
#include "nans.h"

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
CullPlane::CullPlane(int a)
{
	alloc(6);
	mCount = 6;
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
bool CullPlane::isPointVisible(Vector3f& pos, f32 rad)
{
	for (int i = 0; i < mCount; i++) {
		Plane currPlane = mObjects[i];
		if (currPlane.calcDist(pos) < -rad) {
			return false;
		}
	}
	return true;
}

/**
 * @note Address: 0x8041A190
 * @note Size: 0x70
 */
bool CullPlane::isVisible(Sys::Sphere& ball) { return isPointVisible(ball.mPosition, ball.mRadius); }

/**
 * @note Address: 0x8041A200
 * @note Size: 0x88
 */
bool CullPlane::isCylinderVisible(Sys::Cylinder& cylinder)
{
	for (int i = 0; i < mCount; i++) {
		if (cylinder.culled(mObjects[i])) {
			return false;
		}
	}
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0xF8
 */
CullFrustum::CullFrustum(int a)
    : CullPlane(a)
{
	mViewAngle = 60.0f;
	u16 height = sys->getRenderModeObj()->efbHeight;
	u16 width  = sys->getRenderModeObj()->fbWidth;

	mAspectRatio = width / height;
}

/**
 * @note Address: 0x8041A288
 * @note Size: 0x20
 */
Vector3f CullFrustum::getUpVector()
{
	Vector3f upVec;
	upVec.x = mViewMatrix->mMatrix.vecView.y[0];
	upVec.y = mViewMatrix->mMatrix.vecView.y[1];
	upVec.z = mViewMatrix->mMatrix.vecView.y[2];
	return upVec;
}

/**
 * @note Address: 0x8041A2A8
 * @note Size: 0x2C
 */
Vector3f CullFrustum::getSideVector()
{
	Vector3f sideVec;
	sideVec.x = -mViewMatrix->mMatrix.vecView.x[0];
	sideVec.y = -mViewMatrix->mMatrix.vecView.x[1];
	sideVec.z = -mViewMatrix->mMatrix.vecView.x[2];
	return sideVec;
}

/**
 * @note Address: 0x8041A2D4
 * @note Size: 0x2C
 */
Vector3f CullFrustum::getViewVector()
{
	Vector3f viewVec;
	viewVec.x = -mViewMatrix->mMatrix.vecView.z[0];
	viewVec.y = -mViewMatrix->mMatrix.vecView.z[1];
	viewVec.z = -mViewMatrix->mMatrix.vecView.z[2];
	return viewVec;
}

/**
 * @note Address: 0x8041A300
 * @note Size: 0x74
 */
Vector3f CullFrustum::getPosition()
{
	Vector3f tVec;
	tVec.x = -mViewMatrix->mMatrix.vecView.x[3];
	tVec.y = -mViewMatrix->mMatrix.vecView.y[3];
	tVec.z = -mViewMatrix->mMatrix.vecView.z[3];

	Vector3f xVec;
	xVec.x = mViewMatrix->mMatrix.vecView.x[0];
	xVec.y = mViewMatrix->mMatrix.vecView.y[0];
	xVec.z = mViewMatrix->mMatrix.vecView.z[0];

	Vector3f yVec;
	yVec.x = mViewMatrix->mMatrix.vecView.x[1];
	yVec.y = mViewMatrix->mMatrix.vecView.y[1];
	yVec.z = mViewMatrix->mMatrix.vecView.z[1];

	Vector3f zVec;
	zVec.x = mViewMatrix->mMatrix.vecView.x[2];
	zVec.y = mViewMatrix->mMatrix.vecView.y[2];
	zVec.z = mViewMatrix->mMatrix.vecView.z[2];

	Vector3f position;
	position.x = dot(tVec, xVec);
	position.y = dot(tVec, yVec);
	position.z = dot(tVec, zVec);
	return position;
}

/**
 * @note Address: 0x8041A374
 * @note Size: 0x2D4
 */
void CullFrustum::updatePlanes()
{
	Vector3f row1 = getSideVector();
	Vector3f row2 = getUpVector();

	Vector3f posVec = getPosition(); // 38

	f32 viewAngle = PI * (mViewAngle / 360.0f);                    // 27
	f32 fovAngle  = (f32)atan(mAspectRatio * (f32)tan(viewAngle)); // 31

	Matrixf outMat;
	Vec outVec;
	Vector3f planeVec;
	f32 dist;

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row1, (PI - viewAngle));
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row2, &outVec);
	planeVec.x          = outVec.x;
	planeVec.y          = outVec.y;
	planeVec.z          = outVec.z;
	mObjects[0].mNormal = planeVec;
	dist                = dot(planeVec, posVec);
	mObjects[0].mOffset = dist;

	Vec outVec1;
	Vector3f planeVec1;

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row1, viewAngle);
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row2, &outVec1);
	planeVec1.x         = outVec1.x;
	planeVec1.y         = outVec1.y;
	planeVec1.z         = outVec1.z;
	mObjects[1].mNormal = planeVec1;
	mObjects[1].mOffset = dot(planeVec1, posVec);

	Vec outVec2;
	Vector3f planeVec2;

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row1, -fovAngle);
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row2, &outVec2);
	planeVec2.x         = outVec2.x;
	planeVec2.y         = outVec2.y;
	planeVec2.z         = outVec2.z;
	mObjects[2].mNormal = planeVec2;
	mObjects[2].mOffset = dot(planeVec2, posVec);

	Vec outVec3;
	Vector3f planeVec3;

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row1, (PI + fovAngle));
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row2, &outVec3);
	planeVec3.x         = outVec3.x;
	planeVec3.y         = outVec3.y;
	planeVec3.z         = outVec3.z;
	mObjects[3].mNormal = planeVec3;
	mObjects[3].mOffset = dot(planeVec3, posVec);
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stfd     f27, 0xa0(r1)
	psq_st   f27, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	mr       r31, r3
	addi     r3, r1, 0x38
	lwz      r5, 0x30(r31)
	mr       r4, r31
	lfs      f2, 0(r5)
	lfs      f1, 4(r5)
	lfs      f0, 8(r5)
	fneg     f2, f2
	fneg     f1, f1
	fneg     f0, f0
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	lfs      f0, 0x10(r5)
	lfs      f1, 0x14(r5)
	lfs      f2, 0x18(r5)
	stfs     f0, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f2, 0x4c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r31)
	lfs      f0, lbl_80520374@sda21(r2)
	lfs      f2, lbl_80520370@sda21(r2)
	fdivs    f0, f1, f0
	lfs      f30, 0x38(r1)
	lfs      f29, 0x3c(r1)
	lfs      f28, 0x40(r1)
	fmuls    f27, f2, f0
	fmr      f1, f27
	bl       tan
	frsp     f1, f1
	lfs      f0, 0x2c(r31)
	fmuls    f1, f0, f1
	bl       atan
	lfs      f0, lbl_80520370@sda21(r2)
	frsp     f31, f1
	addi     r3, r1, 0x68
	addi     r4, r1, 0x50
	fsubs    f1, f0, f27
	bl       PSMTXRotAxisRad
	addi     r3, r1, 0x68
	addi     r4, r1, 0x44
	addi     r5, r1, 0x5c
	bl       PSMTXMultVec
	lwz      r0, 0x5c(r1)
	fmr      f1, f27
	lwz      r5, 0x60(r1)
	addi     r3, r1, 0x68
	stw      r0, 0x2c(r1)
	addi     r4, r1, 0x50
	lwz      r0, 0x64(r1)
	stw      r5, 0x30(r1)
	lwz      r5, 0x24(r31)
	lfs      f0, 0x2c(r1)
	stw      r0, 0x34(r1)
	lfs      f2, 0x30(r1)
	stfs     f0, 0(r5)
	lfs      f0, 0x34(r1)
	stfs     f2, 4(r5)
	stfs     f0, 8(r5)
	lfs      f0, 4(r5)
	lfs      f2, 0(r5)
	fmuls    f0, f0, f29
	lfs      f3, 8(r5)
	fmadds   f0, f2, f30, f0
	fmadds   f0, f3, f28, f0
	stfs     f0, 0xc(r5)
	bl       PSMTXRotAxisRad
	addi     r3, r1, 0x68
	addi     r4, r1, 0x44
	addi     r5, r1, 0x5c
	bl       PSMTXMultVec
	lwz      r0, 0x5c(r1)
	fneg     f1, f31
	lwz      r5, 0x60(r1)
	addi     r3, r1, 0x68
	stw      r0, 0x20(r1)
	addi     r4, r1, 0x44
	lwz      r0, 0x64(r1)
	stw      r5, 0x24(r1)
	lwz      r5, 0x24(r31)
	lfs      f0, 0x20(r1)
	stw      r0, 0x28(r1)
	lfs      f2, 0x24(r1)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x28(r1)
	stfs     f2, 0x14(r5)
	stfs     f0, 0x18(r5)
	lfs      f0, 0x14(r5)
	lfs      f2, 0x10(r5)
	fmuls    f0, f0, f29
	lfs      f3, 0x18(r5)
	fmadds   f0, f2, f30, f0
	fmadds   f0, f3, f28, f0
	stfs     f0, 0x1c(r5)
	bl       PSMTXRotAxisRad
	addi     r3, r1, 0x68
	addi     r4, r1, 0x50
	addi     r5, r1, 0x5c
	bl       PSMTXMultVec
	lwz      r0, 0x5c(r1)
	addi     r3, r1, 0x68
	lwz      r5, 0x60(r1)
	addi     r4, r1, 0x44
	stw      r0, 0x14(r1)
	lwz      r0, 0x64(r1)
	stw      r5, 0x18(r1)
	lwz      r5, 0x24(r31)
	lfs      f1, 0x14(r1)
	stw      r0, 0x1c(r1)
	lfs      f0, 0x18(r1)
	stfs     f1, 0x20(r5)
	lfs      f1, 0x1c(r1)
	stfs     f0, 0x24(r5)
	lfs      f0, lbl_80520370@sda21(r2)
	stfs     f1, 0x28(r5)
	fadds    f1, f0, f31
	lfs      f0, 0x24(r5)
	lfs      f2, 0x20(r5)
	fmuls    f0, f0, f29
	lfs      f3, 0x28(r5)
	fmadds   f0, f2, f30, f0
	fmadds   f0, f3, f28, f0
	stfs     f0, 0x2c(r5)
	bl       PSMTXRotAxisRad
	addi     r3, r1, 0x68
	addi     r4, r1, 0x50
	addi     r5, r1, 0x5c
	bl       PSMTXMultVec
	lwz      r0, 0x5c(r1)
	lwz      r3, 0x60(r1)
	stw      r0, 8(r1)
	lwz      r0, 0x64(r1)
	stw      r3, 0xc(r1)
	lwz      r3, 0x24(r31)
	lfs      f0, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0x30(r3)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x34(r3)
	stfs     f0, 0x38(r3)
	lfs      f0, 0x34(r3)
	lfs      f1, 0x30(r3)
	fmuls    f0, f0, f29
	lfs      f2, 0x38(r3)
	fmadds   f0, f1, f30, f0
	fmadds   f0, f2, f28, f0
	stfs     f0, 0x3c(r3)
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	psq_l    f27, 168(r1), 0, qr0
	lfd      f27, 0xa0(r1)
	lwz      r0, 0xf4(r1)
	lwz      r31, 0x9c(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr

	*/
}

/**
 * @note Address: 0x8041A648
 * @note Size: 0x158
 */
Camera::Camera()
    : CullFrustum(0)
{
	mJstObject      = 0;
	mProjectionNear = 1.0f;
	mProjectionFar  = 128000.0f;
	_134            = 1.0f;
	_138            = 1.0f;
	_13C            = 1.0f;
	mSoundPosition  = 0;
	PSMTXIdentity(mCurViewMatrix.mMatrix.mtxView);
	mIsFixed = false;
	mFar     = 0.0f;
	mNear    = 0.0f;
}

/**
 * @note Address: 0x8041A7A0
 * @note Size: 0xA0
 */
// WEAK - in header
// CullFrustum::~CullFrustum() { }

/**
 * @note Address: 0x8041A840
 * @note Size: 0x18
 */
void Camera::setFixNearFar(bool fixed, f32 near, f32 far)
{
	mIsFixed = fixed;
	if (fixed) {
		mNear = near;
		mFar  = far;
	}
}

/**
 * @note Address: 0x8041A858
 * @note Size: 0xA8
 */
void Camera::copyFrom(Camera* camera)
{
	mProjectionNear = camera->mProjectionNear;
	mProjectionFar  = camera->mProjectionFar;

	_134 = camera->_134;
	_138 = camera->_138;
	_13C = camera->_13C;

	mJstObject = camera->mJstObject;

	mViewMatrix  = camera->mViewMatrix;
	mViewAngle   = camera->mViewAngle;
	mAspectRatio = camera->mAspectRatio;

	for (int i = 0; i < mCount; i++) {
		mObjects[i].setVec(camera->mObjects[i]);
		mObjects[i].setDist(camera->mObjects[i]);
	}
}

/**
 * @note Address: 0x8041A900
 * @note Size: 0x198
 */
void Camera::updatePlanes()
{
	CullFrustum::updatePlanes();
	Vector3f zVec;
	zVec.x = -mViewMatrix->mMatrix.structView.xz;
	zVec.y = -mViewMatrix->mMatrix.structView.yz;
	zVec.z = -mViewMatrix->mMatrix.structView.zz;

	Vector3f pos = getPosition();

	mObjects[4].mNormal = Vector3f(-zVec.x, -zVec.y, -zVec.z);
	Vector3f farPlaneVec(mObjects[4].mNormal.x, mObjects[4].mNormal.y, mObjects[4].mNormal.z);
	Vector3f farVec     = zVec * mProjectionFar + pos;
	mObjects[4].mOffset = dot(farPlaneVec, farVec);

	mObjects[5].mNormal = Vector3f(-zVec.x, -zVec.y, -zVec.z);
	Vector3f nearPlaneVec(mObjects[5].mNormal.x, mObjects[5].mNormal.y, mObjects[5].mNormal.z);
	Vector3f nearVec    = zVec * mProjectionNear + pos;
	mObjects[5].mOffset = dot(nearPlaneVec, farVec);
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	bl       updatePlanes__11CullFrustumFv
	lwz      r5, 0x30(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	addi     r3, r1, 0x20
	lfs      f2, 0x20(r5)
	lfs      f1, 0x24(r5)
	lfs      f0, 0x28(r5)
	fneg     f31, f2
	lwz      r12, 0x4c(r12)
	fneg     f30, f1
	fneg     f29, f0
	mtctr    r12
	bctrl
	fneg     f0, f31
	lfs      f5, 0x74(r31)
	fneg     f6, f30
	lfs      f1, 0x20(r1)
	fneg     f4, f29
	lfs      f7, 0x24(r1)
	stfs     f0, 0x2c(r1)
	fmuls    f2, f30, f5
	fmuls    f3, f31, f5
	lfs      f0, 0x28(r1)
	lwz      r5, 0x2c(r1)
	fmuls    f5, f29, f5
	stfs     f6, 0x30(r1)
	lwz      r4, 0x24(r31)
	lwz      r3, 0x30(r1)
	fadds    f2, f2, f7
	stfs     f4, 0x34(r1)
	fadds    f4, f3, f1
	fadds    f5, f5, f0
	lwz      r0, 0x34(r1)
	stw      r5, 0x14(r1)
	stw      r3, 0x18(r1)
	lfs      f3, 0x14(r1)
	stw      r0, 0x1c(r1)
	lfs      f6, 0x18(r1)
	stfs     f3, 0x40(r4)
	lfs      f3, 0x1c(r1)
	stfs     f6, 0x44(r4)
	stfs     f3, 0x48(r4)
	lfs      f3, 0x44(r4)
	stfs     f31, 0x2c(r1)
	fmuls    f2, f3, f2
	lfs      f3, 0x40(r4)
	stfs     f30, 0x30(r1)
	lwz      r0, 0x2c(r1)
	stfs     f29, 0x34(r1)
	fmadds   f2, f3, f4, f2
	lfs      f3, 0x48(r4)
	stw      r0, 8(r1)
	fmadds   f2, f3, f5, f2
	lwz      r3, 0x30(r1)
	lwz      r0, 0x34(r1)
	stw      r3, 0xc(r1)
	lfs      f4, 8(r1)
	stfs     f2, 0x4c(r4)
	lfs      f6, 0xc(r1)
	lfs      f5, 0x70(r31)
	lwz      r3, 0x24(r31)
	stw      r0, 0x10(r1)
	fmuls    f2, f30, f5
	fmuls    f3, f31, f5
	stfs     f4, 0x50(r3)
	fmuls    f4, f29, f5
	lfs      f5, 0x10(r1)
	fadds    f2, f2, f7
	stfs     f6, 0x54(r3)
	fadds    f1, f3, f1
	stfs     f5, 0x58(r3)
	fadds    f4, f4, f0
	lfs      f0, 0x54(r3)
	lfs      f3, 0x50(r3)
	fmuls    f0, f0, f2
	lfs      f2, 0x58(r3)
	fmadds   f0, f3, f1, f0
	fmadds   f0, f2, f4, f0
	stfs     f0, 0x5c(r3)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr

	*/
}

/**
 * @note Address: 0x8041AA98
 * @note Size: 0xB0
 */
Vector3f Camera::getLookAtPosition()
{
	if (isRunning() && mJstObject) {
		return mJstObject->mViewTargetPos;
	} else {
		return getLookAtPosition_();
	}
}

/**
 * @note Address: 0x8041AB48
 * @note Size: 0x20
 */
Vector3f Camera::getLookAtPosition_() { return Vector3f::zero; }

/**
 * @note Address: 0x8041AB68
 * @note Size: 0x8
 */
// WEAK - in header
// void Game::P2JST::ObjectCamera::isRunning() { return mIsRunning; }

/**
 * @note Address: 0x8041AB70
 * @note Size: 0x108
 */
Vector3f Camera::getPosition()
{
	if (isRunning() && mJstObject) {
		return mJstObject->mViewPos;
	}

	Vector3f vec;
	vec.x = -mViewMatrix->mMatrix.structView.tx;
	vec.y = -mViewMatrix->mMatrix.structView.ty;
	vec.z = -mViewMatrix->mMatrix.structView.tz;

	return mViewMatrix->multTranspose(vec);
}

/**
 * @note Address: 0x8041AC78
 * @note Size: 0x8C
 */
Vector3f* Camera::getPositionPtr()
{
	if (isRunning() && mJstObject) {
		return (Vector3f*)&mJstObject->mViewPos;
	} else {
		return on_getPositionPtr();
	}
}

/**
 * @note Address: 0x8041AD04
 * @note Size: 0x8
 */
// WEAK - in header
// Vector3f* Camera::on_getPositionPtr() { return nullptr; }

/**
 * @note Address: 0x8041AD0C
 * @note Size: 0x1C
 */
f32 Camera::getNear()
{
	if (mIsFixed) {
		return mNear;
	}
	return mProjectionNear;
}

/**
 * @note Address: 0x8041AD28
 * @note Size: 0x1C
 */
f32 Camera::getFar()
{
	if (mIsFixed) {
		return mFar;
	}
	return mProjectionFar;
}

/**
 * @note Address: 0x8041AD44
 * @note Size: 0x70
 */
void Camera::setProjection()
{
	f32 far       = getFar();
	Mtx44* matrix = &mProjectionMtx;
	f32 near      = getNear();

	C_MTXPerspective(*matrix, mViewAngle, mAspectRatio, near, far);
	GXSetProjection(mProjectionMtx, GX_PERSPECTIVE);
}

/**
 * @note Address: 0x8041ADB4
 * @note Size: 0x128
 */
void Camera::update()
{
	PSMTX44Copy(mProjectionMtx, _F4);
	Matrixf* viewMatrix = getViewMatrix(0);
	PSMTXCopy(viewMatrix->mMatrix.mtxView, mCurViewMatrix.mMatrix.mtxView);
	// temp_r3 = this->unk140;
	if (isRunning()) {
		mJstObject->updateCamera();
		updateSoundCamera(0.7f * (PI * PSM::sCamFov));
	} else {
		doUpdate();
		updateMatrix();
		updateSoundCamera(PI * PSM::sCamFov);
	}
	updateScreenConstants();
	updatePlanes();
}

/**
 * @note Address: 0x8041AEDC
 * @note Size: 0x4
 */
// WEAK - in header
// void Camera::updateMatrix() { }

/**
 * @note Address: 0x8041AEE0
 * @note Size: 0x18
 */
Matrixf* Camera::getViewMatrix(bool getCurrentViewMtx)
{
	if (getCurrentViewMtx) {
		return &mCurViewMatrix;
	}

	return mViewMatrix;
}

/**
 * @note Address: 0x8041AEF8
 * @note Size: 0x120
 */
f32 Camera::calcProperDistance(f32 f1, f32 f2)
{
	f32 input2;
	f32 angle;
	f32 cos;
	f32 sin;
	f32 pct;
	f32 ratio;
	f32 returnValue;
	f32 new_var2;
	f32 returnMax;

	input2 = f2;
	if (input2 < 0.01f) {
		input2 = 100.0f;
	}

	angle       = PI * (mViewAngle * 0.5f / 180.0f);
	cos         = cosf(angle);
	sin         = sinf(angle);
	returnMax   = (-(mProjectionFar - mProjectionNear)) / ((mProjectionFar * 2.0f) * mProjectionNear);
	pct         = f1 / 100.0f;
	new_var2    = cos / sin;
	ratio       = returnMax * (new_var2 * input2);
	returnValue = fabs(ratio / (mAspectRatio * pct));
	returnMax   = fabs(ratio / pct);
	return (returnValue > returnMax) ? returnValue : returnMax;
}

/**
 * @note Address: 0x8041B018
 * @note Size: 0xE0
 */
void Camera::updateScreenConstants()
{
	_134    = ((mViewAngle * 0.5f) / 180.0f) * PI;
	f32 cos = cosf(_134);
	f32 sin = sinf(_134);

	_138 = cos / sin;

	_13C = -(mProjectionFar - mProjectionNear) / (mProjectionFar * 2.0f * mProjectionNear);
}

/**
 * @note Address: 0x8041B0F8
 * @note Size: 0xB8
 */
f32 Camera::calcScreenSize(Sys::Sphere& ball)
{
	Vector3f camPos = getPosition();
	Matrixf* matrix = mViewMatrix;
	Vector3f netPos = ball.mPosition - camPos;
	f32 dotprod
	    = netPos.x * -matrix->mMatrix.structView.xz + netPos.y * -matrix->mMatrix.structView.yz + netPos.z * -matrix->mMatrix.structView.zz;
	f32 scaledRad = _138 * ball.mRadius;

	f32 product = _13C * scaledRad / dotprod;

	return absF(product);
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
// void Camera::calcScreenSize(Sys::Sphere&, f32&, f32&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8041B1B0
 * @note Size: 0x2E8
 */
void Camera::updateSoundCamera(f32 angle)
{
	f32 cotan = cosf(angle) / sinf(angle);

	Vector3f targetPos = getTargetDistance(); // wrong func call
	Vector3f pos       = getPosition();
	Vector3f viewVec1;
	viewVec1.x = -(*mViewMatrix)(2, 0);
	viewVec1.y = -(*mViewMatrix)(2, 1);
	viewVec1.z = -(*mViewMatrix)(2, 2);

	f32 distance = targetPos.distance(pos);
	f32 ratio    = (cotan * distance) / _138;

	mSoundPosition.x = -(viewVec1.x * ratio - targetPos.x);
	mSoundPosition.y = -(viewVec1.y * ratio - targetPos.y);
	mSoundPosition.z = -(viewVec1.z * ratio - targetPos.z);

	Matrixf mat = *mViewMatrix;

	// mat.setMultNeg(mSoundPosition);
	PSMTXCopy(mat.mMatrix.mtxView, mSoundMatrix.mMatrix.mtxView);
}

/**
 * @note Address: 0x8041B498
 * @note Size: 0x1AC
 */
LookAtCamera::LookAtCamera()
{
	mPosition       = Vector3f(0.0f, 0.0f, 1000.0f);
	mLookAtPosition = 0.0f;
	mLookAtRotation = Vector3f(0.0f, 1.0f, 0.0f);
	PSMTXIdentity(mLookMatrix.mMatrix.mtxView);
	mViewMatrix = &mLookMatrix;
}

/**
 * @note Address: 0x8041B644
 * @note Size: 0xB0
 */
// WEAK - in header
// Camera::~Camera() { }

/**
 * @note Address: 0x8041B6F4
 * @note Size: 0x34
 */
void LookAtCamera::updateMatrix()
{
	C_MTXLookAt(mLookMatrix.mMatrix.mtxView, (Vec*)&mPosition, (Vec*)&mLookAtRotation, (Vec*)&mLookAtPosition);
}

/**
 * @note Address: 0x8041B728
 * @note Size: 0x180
 */
BlendCamera::BlendCamera(int cameraCount, Camera** cameras)
{
	mCameraCount = cameraCount;
	mCameras     = new Camera*[mCameraCount];
	setCameras(cameras);
}

/**
 * @note Address: 0x8041B8A8
 * @note Size: 0x8C
 */
void BlendCamera::setCameras(Camera** camList)
{
	for (int i = 0; i < mCameraCount; i++) {
		mCameras[i] = camList[i];
	}

	mBlendFactor = 0.0f;

	PSMTXCopy(camList[0]->getViewMatrix(false)->mMatrix.mtxView, mTargetMatrix.mMatrix.mtxView);
	mViewMatrix = &mTargetMatrix;
}

/**
 * @note Address: 0x8041B934
 * @note Size: 0x60
 */
void BlendCamera::setBlendFactor(f32 factor)
{
	f32 blendfactor = factor;
	if (blendfactor < 0.0f) {
		blendfactor = 0.0f;
	} else if (blendfactor > mCameraCount - 1) {
		blendfactor = mCameraCount - 1;
	}

	mBlendFactor = blendfactor;
}

/**
 * @note Address: 0x8041B994
 * @note Size: 0x2A8
 */
void BlendCamera::doUpdate()
{
	int blend          = mBlendFactor;
	int blendIndex     = blend;
	int nextBlendIndex = blendIndex + 1;

	// Blend can't be higher than camera count
	if (mCameraCount - 1 <= blend) {
		blend          = blendIndex - 1;
		nextBlendIndex = blend;
	}

	f32 blendFactorNextIndex = ((f32)blendIndex);

	Quat indexQuat;
	Quat nextIndexQuat;
	Quat slerpQuat;

	Matrixf* viewMatrix = mCameras[blendIndex]->getViewMatrix(false);
	indexQuat.fromMatrixf(*viewMatrix);

	viewMatrix = mCameras[nextBlendIndex]->getViewMatrix(false);
	nextIndexQuat.fromMatrixf(*viewMatrix);

	indexQuat.normalise();
	nextIndexQuat.normalise();

	Vector3f vectIndex     = mCameras[blendIndex]->getPosition();
	Vector3f vectNextIndex = mCameras[nextBlendIndex]->getPosition();

	f32 blendFactorIndex = 1.0f - blendFactorNextIndex;

	mViewAngle = blendFactorIndex * mCameras[blendIndex]->mViewAngle + blendFactorNextIndex * mCameras[nextBlendIndex]->mViewAngle;

	Vector3f vect3 = vectIndex * -blendFactorIndex + vectNextIndex * blendFactorNextIndex;

	indexQuat.slerp(nextIndexQuat, blendFactorNextIndex, slerpQuat);
	slerpQuat.normalise();

	Matrixf quatMatrix;
	Matrixf vectMatrix;

	quatMatrix.makeQ(slerpQuat);

	PSMTXTranspose(quatMatrix.mMatrix.mtxView, vectMatrix.mMatrix.mtxView);

	// Probably an Inline

	vectMatrix.mMatrix.structView.zy *= vect3.y;
	vectMatrix.mMatrix.structView.zx *= vect3.x;
	vectMatrix.mMatrix.structView.yx *= vect3.x;

	vect3.x = vect3.z * vectMatrix.mMatrix.structView.xz + vect3.x * vectMatrix.mMatrix.structView.xx
	        + vect3.y * vectMatrix.mMatrix.structView.xy;

	vect3.y = vect3.z * vectMatrix.mMatrix.structView.yz + vectMatrix.mMatrix.structView.yx + vect3.y * vectMatrix.mMatrix.structView.yy;

	vect3.z = vect3.z * vectMatrix.mMatrix.structView.zz + vectMatrix.mMatrix.structView.zx + vectMatrix.mMatrix.structView.zy;

	mTargetMatrix.makeTQ(vect3, slerpQuat);

	return;
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stfd     f29, 0xf0(r1)
	psq_st   f29, 248(r1), 0, qr0
	stfd     f28, 0xe0(r1)
	psq_st   f28, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	mr       r31, r3
	addi     r3, r1, 0x4c
	bl       __ct__4QuatFv
	addi     r3, r1, 0x3c
	bl       __ct__4QuatFv
	addi     r3, r1, 0x2c
	bl       __ct__4QuatFv
	lfs      f2, 0x14c(r31)
	lwz      r3, 0x144(r31)
	fctiwz   f0, f2
	addi     r0, r3, -1
	stfd     f0, 0xc0(r1)
	lwz      r4, 0xc4(r1)
	cmpw     r4, r0
	addi     r29, r4, 1
	blt      lbl_8041BA14
	addi     r4, r4, -1
	addi     r29, r29, -1

lbl_8041BA14:
	xoris    r3, r4, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc4(r1)
	slwi     r30, r4, 2
	lwz      r3, 0x148(r31)
	li       r4, 0
	stw      r0, 0xc0(r1)
	lwzx     r3, r3, r30
	lfd      f1, lbl_80520368@sda21(r2)
	lfd      f0, 0xc0(r1)
	lwz      r12, 0(r3)
	fsubs    f0, f0, f1
	lwz      r12, 0x48(r12)
	fsubs    f31, f2, f0
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 0x4c
	bl       fromMatrixf__4QuatFR7Matrixf
	lwz      r3, 0x148(r31)
	slwi     r29, r29, 2
	li       r4, 0
	lwzx     r3, r3, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 0x3c
	bl       fromMatrixf__4QuatFR7Matrixf
	addi     r3, r1, 0x4c
	bl       normalise__4QuatFv
	addi     r3, r1, 0x3c
	bl       normalise__4QuatFv
	lwz      r4, 0x148(r31)
	addi     r3, r1, 0x14
	lwzx     r4, r4, r30
	lwz      r12, 0(r4)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x148(r31)
	addi     r3, r1, 8
	lfs      f30, 0x14(r1)
	lwzx     r4, r4, r29
	lfs      f29, 0x18(r1)
	lwz      r12, 0(r4)
	lfs      f28, 0x1c(r1)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x148(r31)
	fmr      f1, f31
	lfs      f0, lbl_8052035C@sda21(r2)
	addi     r3, r1, 0x4c
	lwzx     r5, r6, r29
	addi     r4, r1, 0x3c
	fsubs    f9, f0, f31
	lfs      f0, 0x28(r5)
	addi     r5, r1, 0x2c
	lfs      f2, 8(r1)
	lfs      f6, 0xc(r1)
	fmuls    f5, f31, f0
	lfs      f8, 0x10(r1)
	fmuls    f4, f30, f9
	lwzx     r6, r6, r30
	fmuls    f3, f2, f31
	fmuls    f2, f29, f9
	fmuls    f0, f6, f31
	lfs      f7, 0x28(r6)
	fadds    f6, f4, f3
	fmadds   f3, f9, f7, f5
	fadds    f5, f2, f0
	fmuls    f4, f28, f9
	stfs     f3, 0x28(r31)
	fmuls    f0, f8, f31
	fneg     f3, f6
	stfs     f6, 0x20(r1)
	fneg     f2, f5
	fadds    f4, f4, f0
	stfs     f5, 0x24(r1)
	fneg     f0, f4
	stfs     f4, 0x28(r1)
	stfs     f3, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       slerp__4QuatFR4QuatfR4Quat
	addi     r3, r1, 0x2c
	bl       normalise__4QuatFv
	addi     r3, r1, 0x8c
	addi     r4, r1, 0x2c
	bl       makeQ__7MatrixfFR4Quat
	addi     r3, r1, 0x8c
	addi     r4, r1, 0x5c
	bl       PSMTXTranspose
	lfs      f3, 0x24(r1)
	addi     r3, r31, 0x150
	lfs      f2, 0x6c(r1)
	addi     r4, r1, 0x20
	lfs      f1, 0x74(r1)
	addi     r5, r1, 0x2c
	lfs      f0, 0x70(r1)
	fmuls    f4, f3, f2
	fmuls    f2, f3, f1
	lfs      f6, 0x20(r1)
	lfs      f5, 0x5c(r1)
	fmuls    f0, f3, f0
	lfs      f3, 0x64(r1)
	lfs      f1, 0x60(r1)
	fmadds   f4, f6, f5, f4
	lfs      f7, 0x28(r1)
	lfs      f5, 0x7c(r1)
	fmadds   f2, f6, f3, f2
	lfs      f3, 0x84(r1)
	fmadds   f0, f6, f1, f0
	lfs      f1, 0x80(r1)
	fmadds   f4, f7, f5, f4
	fmadds   f2, f7, f3, f2
	fmadds   f0, f7, f1, f0
	stfs     f4, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f2, 0x28(r1)
	bl       "makeTQ__7MatrixfFR10Vector3<f>R4Quat"
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	psq_l    f28, 232(r1), 0, qr0
	lfd      f28, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r0, 0x124(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr

	*/
}
