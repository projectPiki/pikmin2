#include "Camera.h"
#include "types.h"
#include "Vector3.h"
#include "Sys/Sphere.h"
#include "Sys/Cylinder.h"
#include "System.h"
#include "trig.h"
#include "Quat.h"
#include "nans.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
CullPlane::CullPlane(int a)
{
	alloc(6);
	mCount = 6;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	8041A190
 * Size:	000070
 */
bool CullPlane::isVisible(Sys::Sphere& ball) { return isPointVisible(ball.mPosition, ball.mRadius); }

/*
 * --INFO--
 * Address:	8041A200
 * Size:	000088
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
CullFrustum::CullFrustum(int a)
    : CullPlane(a)
{
	mViewAngle = 60.0f;
	u16 height = sys->getRenderModeObj()->efbHeight;
	u16 width  = sys->getRenderModeObj()->fbWidth;

	mAspectRatio = width / height;
}

/*
 * --INFO--
 * Address:	8041A288
 * Size:	000020
 */
Vector3f CullFrustum::getUpVector()
{
	Vector3f upVec;
	upVec.x = mViewMatrix->mMatrix.vecView.y[0];
	upVec.y = mViewMatrix->mMatrix.vecView.y[1];
	upVec.z = mViewMatrix->mMatrix.vecView.y[2];
	return upVec;
}

/*
 * --INFO--
 * Address:	8041A2A8
 * Size:	00002C
 */
Vector3f CullFrustum::getSideVector()
{
	Vector3f sideVec;
	sideVec.x = -mViewMatrix->mMatrix.vecView.x[0];
	sideVec.y = -mViewMatrix->mMatrix.vecView.x[1];
	sideVec.z = -mViewMatrix->mMatrix.vecView.x[2];
	return sideVec;
}

/*
 * --INFO--
 * Address:	8041A2D4
 * Size:	00002C
 */
Vector3f CullFrustum::getViewVector()
{
	Vector3f viewVec;
	viewVec.x = -mViewMatrix->mMatrix.vecView.z[0];
	viewVec.y = -mViewMatrix->mMatrix.vecView.z[1];
	viewVec.z = -mViewMatrix->mMatrix.vecView.z[2];
	return viewVec;
}

/*
 * --INFO--
 * Address:	8041A300
 * Size:	000074
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

/*
 * --INFO--
 * Address:	8041A374
 * Size:	0002D4
 */
// WIP: https://decomp.me/scratch/Dm64d
void CullFrustum::updatePlanes()
{
	Vector3f row1 = getSideVector();
	Vector3f row2 = getUpVector();

	Vector3f posVec = getPosition(); // 38

	float viewAngle = PI * (mViewAngle / 360.0f);                    // 27
	float fovAngle  = (f32)atan(mAspectRatio * (f32)tan(viewAngle)); // 31

	Matrixf outMat;
	Vec outVec;
	Vector3f planeVec;
	float dist;

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row1, (PI - viewAngle));
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row2, &outVec);
	planeVec.x    = outVec.x;
	planeVec.y    = outVec.y;
	planeVec.z    = outVec.z;
	mObjects[0].a = planeVec.x;
	mObjects[0].b = planeVec.y;
	mObjects[0].c = planeVec.z;
	dist          = dot(planeVec, posVec);
	mObjects[0].d = dist;

	Vec outVec1;
	Vector3f planeVec1;

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row1, viewAngle);
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row2, &outVec1);
	planeVec1.x   = outVec1.x;
	planeVec1.y   = outVec1.y;
	planeVec1.z   = outVec1.z;
	mObjects[1].a = planeVec1.x;
	mObjects[1].b = planeVec1.y;
	mObjects[1].c = planeVec1.z;
	mObjects[1].d = dot(planeVec1, posVec);

	Vec outVec2;
	Vector3f planeVec2;

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row1, -fovAngle);
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row2, &outVec2);
	planeVec2.x   = outVec2.x;
	planeVec2.y   = outVec2.y;
	planeVec2.z   = outVec2.z;
	mObjects[2].a = planeVec2.x;
	mObjects[2].b = planeVec2.y;
	mObjects[2].c = planeVec2.z;
	mObjects[2].d = dot(planeVec2, posVec);

	Vec outVec3;
	Vector3f planeVec3;

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row1, (PI + fovAngle));
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row2, &outVec3);
	planeVec3.x   = outVec3.x;
	planeVec3.y   = outVec3.y;
	planeVec3.z   = outVec3.z;
	mObjects[3].a = planeVec3.x;
	mObjects[3].b = planeVec3.y;
	mObjects[3].c = planeVec3.z;
	mObjects[3].d = dot(planeVec3, posVec);
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

/*
 * --INFO--
 * Address:	8041A648
 * Size:	000158
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

/*
 * --INFO--
 * Address:	8041A7A0
 * Size:	0000A0
 */
// WEAK - in header
// CullFrustum::~CullFrustum() { }

/*
 * --INFO--
 * Address:	8041A840
 * Size:	000018
 */
void Camera::setFixNearFar(bool fixed, float near, float far)
{
	mIsFixed = fixed;
	if (fixed) {
		mNear = near;
		mFar  = far;
	}
}

/*
 * --INFO--
 * Address:	8041A858
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	8041A900
 * Size:	000198
 */
// WIP: https://decomp.me/scratch/wPmZm
void Camera::updatePlanes()
{
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

/*
 * --INFO--
 * Address:	8041AA98
 * Size:	0000B0
 */
Vector3f Camera::getLookAtPosition()
{
	if (isRunning() && mJstObject) {
		return mJstObject->mViewTargetPos;
	} else {
		return getLookAtPosition_();
	}
}

/*
 * --INFO--
 * Address:	8041AB48
 * Size:	000020
 */
Vector3f Camera::getLookAtPosition_() { return Vector3f::zero; }

/*
 * --INFO--
 * Address:	8041AB68
 * Size:	000008
 */
// WEAK - in header
// void Game::P2JST::ObjectCamera::isRunning() { return mIsRunning; }

/*
 * --INFO--
 * Address:	8041AB70
 * Size:	000108
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

/*
 * --INFO--
 * Address:	8041AC78
 * Size:	00008C
 */
Vector3f* Camera::getPositionPtr()
{
	if (isRunning() && mJstObject) {
		return (Vector3f*)&mJstObject->mViewPos;
	} else {
		return on_getPositionPtr();
	}
}

/*
 * --INFO--
 * Address:	8041AD04
 * Size:	000008
 */
// WEAK - in header
// Vector3f* Camera::on_getPositionPtr() { return nullptr; }

/*
 * --INFO--
 * Address:	8041AD0C
 * Size:	00001C
 */
float Camera::getNear()
{
	if (mIsFixed) {
		return mNear;
	}
	return mProjectionNear;
}

/*
 * --INFO--
 * Address:	8041AD28
 * Size:	00001C
 */
float Camera::getFar()
{
	if (mIsFixed) {
		return mFar;
	}
	return mProjectionFar;
}

/*
 * --INFO--
 * Address:	8041AD44
 * Size:	000070
 */
void Camera::setProjection()
{
	float far     = getFar();
	Mtx44* matrix = &mProjectionMtx;
	float near    = getNear();

	C_MTXPerspective(*matrix, mViewAngle, mAspectRatio, near, far);
	GXSetProjection(mProjectionMtx, GX_PERSPECTIVE);
}

/*
 * --INFO--
 * Address:	8041ADB4
 * Size:	000128
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

/*
 * --INFO--
 * Address:	8041AEDC
 * Size:	000004
 */
// WEAK - in header
// void Camera::updateMatrix() { }

/*
 * --INFO--
 * Address:	8041AEE0
 * Size:	000018
 */
Matrixf* Camera::getViewMatrix(bool b)
{
	if (b) {
		return &mCurViewMatrix;
	}

	return mViewMatrix;
}

/*
 * --INFO--
 * Address:	8041AEF8
 * Size:	000120
 */
f32 Camera::calcProperDistance(f32 f1, f32 f2)
{
	float input2;
	float angle;
	float cos;
	float sin;
	float pct;
	float ratio;
	float returnValue;
	float new_var2;
	float returnMax;

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

/*
 * --INFO--
 * Address:	8041B018
 * Size:	0000E0
 */
void Camera::updateScreenConstants()
{
	_134      = ((mViewAngle * 0.5f) / 180.0f) * PI;
	float cos = cosf(_134);
	float sin = sinf(_134);

	_138 = cos / sin;

	_13C = -(mProjectionFar - mProjectionNear) / (mProjectionFar * 2.0f * mProjectionNear);
}

/*
 * --INFO--
 * Address:	8041B0F8
 * Size:	0000B8
 */
// WIP: https://decomp.me/scratch/iovxv
float Camera::calcScreenSize(Sys::Sphere& ball)
{
	Vector3f camPos = getPosition();
	Matrixf* matrix = mViewMatrix;
	Vector3f netPos = ball.mPosition - camPos;
	float dotprod
	    = netPos.x * -matrix->mMatrix.structView.xz + netPos.y * -matrix->mMatrix.structView.yz + netPos.z * -matrix->mMatrix.structView.zz;
	float scaledRad = _138 * ball.mRadius;

	float product = _13C * scaledRad / dotprod;

	return fabs(product);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
// void Camera::calcScreenSize(Sys::Sphere&, float&, float&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8041B1B0
 * Size:	0002E8
 */
// WIP: https://decomp.me/scratch/4nLm6
void Camera::updateSoundCamera(float angle)
{
	float cotan = cosf(angle) / sinf(angle);

	Vector3f targetPos = getTargetDistance(); // wrong func call
	Vector3f pos       = getPosition();
	Vector3f viewVec1;
	viewVec1.x = -(*mViewMatrix)(2, 0);
	viewVec1.y = -(*mViewMatrix)(2, 1);
	viewVec1.z = -(*mViewMatrix)(2, 2);

	f32 distance = targetPos.distance(pos);
	float ratio  = (cotan * distance) / _138;

	mSoundPosition.x = -(viewVec1.x * ratio - targetPos.x);
	mSoundPosition.y = -(viewVec1.y * ratio - targetPos.y);
	mSoundPosition.z = -(viewVec1.z * ratio - targetPos.z);

	Matrixf mat = *mViewMatrix;

	// mat.setMultNeg(mSoundPosition);
	PSMTXCopy(mat.mMatrix.mtxView, mSoundMatrix.mMatrix.mtxView);
}

/*
 * --INFO--
 * Address:	8041B498
 * Size:	0001AC
 */
LookAtCamera::LookAtCamera()
{
	mPosition       = Vector3f(0.0f, 0.0f, 1000.0f);
	mLookAtPosition = 0.0f;
	_18C            = Vector3f(0.0f, 1.0f, 0.0f);
	PSMTXIdentity(mLookMatrix.mMatrix.mtxView);
	mViewMatrix = &mLookMatrix;
}

/*
 * --INFO--
 * Address:	8041B644
 * Size:	0000B0
 */
// WEAK - in header
// Camera::~Camera() { }

/*
 * --INFO--
 * Address:	8041B6F4
 * Size:	000034
 */
void LookAtCamera::updateMatrix() { C_MTXLookAt(mLookMatrix.mMatrix.mtxView, (Vec*)&mPosition, (Vec*)&_18C, (Vec*)&mLookAtPosition); }

/*
 * --INFO--
 * Address:	8041B728
 * Size:	000180
 */
BlendCamera::BlendCamera(int cameraCount, Camera** cameras)
{
	mCameraCount = cameraCount;
	mCameras     = new Camera*[mCameraCount];
	setCameras(cameras);
}

/*
 * --INFO--
 * Address:	8041B8A8
 * Size:	00008C
 */
void BlendCamera::setCameras(Camera** camList)
{
	for (int i = 0; i < mCameraCount; i++) {
		mCameras[i] = camList[i];
	}

	mBlendFactor = 0.0f;

	PSMTXCopy(camList[0]->getViewMatrix(false)->mMatrix.mtxView, _150.mMatrix.mtxView);
	mViewMatrix = &_150;
}

/*
 * --INFO--
 * Address:	8041B934
 * Size:	000060
 */
void BlendCamera::setBlendFactor(float factor)
{
	float blendfactor = factor;
	if (blendfactor < 0.0f) {
		blendfactor = 0.0f;
	} else if (blendfactor > mCameraCount - 1) {
		blendfactor = mCameraCount - 1;
	}

	mBlendFactor = blendfactor;
}

/*
 * --INFO--
 * Address:	8041B994
 * Size:	0002A8
 */
// WIP: https://decomp.me/scratch/JbYac
bool BlendCamera::doUpdate()
{
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

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
// EditorCamera::EditorCamera()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
// void EditorCamera::init(Controller*, Vector3f&, float)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0001CC
 */
// void EditorCamera::makeLookAt()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000474
 */
// void EditorCamera::doUpdate()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
// EditorCamera::~EditorCamera()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8041BC3C
 * Size:	0000C0
 */
// WEAK - in header
// BlendCamera::~BlendCamera() { }

/*
 * --INFO--
 * Address:	8041BCFC
 * Size:	000008
 */
// WEAK - in header
// Matrixf* CullFrustum::getViewMatrix(bool) { return mViewMatrix; }

/*
 * --INFO--
 * Address:	8041BD04
 * Size:	000028
 */
void __sinit_camera_cpp()
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EB718@ha
	stw      r0, lbl_80516158@sda21(r13)
	stfsu    f0, lbl_804EB718@l(r3)
	stfs     f0, lbl_8051615C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr

	*/
}
