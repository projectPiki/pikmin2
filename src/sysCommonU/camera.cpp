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
	upVec.x = mViewMatrix->mMatrix.structView.xy;
	upVec.y = mViewMatrix->mMatrix.structView.yy;
	upVec.z = mViewMatrix->mMatrix.structView.zy;
	return upVec;
}

/**
 * @note Address: 0x8041A2A8
 * @note Size: 0x2C
 */
Vector3f CullFrustum::getSideVector()
{
	Vector3f sideVec;
	sideVec.x = -mViewMatrix->mMatrix.structView.xx;
	sideVec.y = -mViewMatrix->mMatrix.structView.yx;
	sideVec.z = -mViewMatrix->mMatrix.structView.zx;
	return sideVec;
}

/**
 * @note Address: 0x8041A2D4
 * @note Size: 0x2C
 */
Vector3f CullFrustum::getViewVector()
{
	Vector3f viewVec;
	viewVec.x = -mViewMatrix->mMatrix.structView.xz;
	viewVec.y = -mViewMatrix->mMatrix.structView.yz;
	viewVec.z = -mViewMatrix->mMatrix.structView.zz;
	return viewVec;
}

/**
 * @note Address: 0x8041A300
 * @note Size: 0x74
 */
Vector3f CullFrustum::getPosition()
{
	Vector3f tVec = mViewMatrix->getBasis(3);
	tVec.negate2();

	Vector3f xVec = mViewMatrix->getBasis(0);
	Vector3f yVec = mViewMatrix->getBasis(1);
	Vector3f zVec = mViewMatrix->getBasis(2);

	Vector3f position;
	position.x = tVec.dot(xVec);
	position.y = tVec.dot(yVec);
	position.z = tVec.dot(zVec);
	return position;
}

/**
 * @note Address: 0x8041A374
 * @note Size: 0x2D4
 */
void CullFrustum::updatePlanes()
{
	Matrixf outMat;
	Vec temp;

	Vector3f row1 = getSideVector();
	Vector3f row2 = getUpVector();

	Vector3f posVec = getPosition();

	f32 viewAngle = PI * (mViewAngle / 360.0f);
	f32 fovAngle  = getFOV(viewAngle);

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row1, (PI - viewAngle));
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row2, &temp);
	mObjects[0].updatePlane(posVec, temp);

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row1, (viewAngle));
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row2, &temp);
	mObjects[1].updatePlane(posVec, temp);

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row2, (-fovAngle));
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row1, &temp);
	mObjects[2].updatePlane(posVec, temp);

	PSMTXRotAxisRad(outMat.mMatrix.mtxView, (Vec*)&row2, (PI + fovAngle));
	PSMTXMultVec(outMat.mMatrix.mtxView, (Vec*)&row1, &temp);
	mObjects[3].updatePlane(posVec, temp);
}

/**
 * @note Address: 0x8041A648
 * @note Size: 0x158
 */
Camera::Camera()
    : CullFrustum(0)
{
	mJstObject          = 0;
	mProjectionNear     = 1.0f;
	mProjectionFar      = FLOAT_DIST_MAX;
	mFieldOfViewRatio   = 1.0f;
	mFieldOfViewTangent = 1.0f;
	mCameraSizeModifier = 1.0f;
	mSoundPosition      = 0;
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

	mFieldOfViewRatio   = camera->mFieldOfViewRatio;
	mFieldOfViewTangent = camera->mFieldOfViewTangent;
	mCameraSizeModifier = camera->mCameraSizeModifier;

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

	Vector3f viewVector = getViewVector();
	Vector3f position   = getPosition();

	// Update far plane
	Vec temp;
	temp.x            = -viewVector.x;
	temp.y            = -viewVector.y;
	temp.z            = -viewVector.z;
	Vector3f farPoint = viewVector * mProjectionFar + position;
	mObjects[4].updatePlane(farPoint, temp);

	// Update near plane
	temp.x             = viewVector.x;
	temp.y             = viewVector.y;
	temp.z             = viewVector.z;
	Vector3f nearPoint = viewVector * mProjectionNear + position;
	mObjects[5].updatePlane(nearPoint, temp);
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
 * @note Address: 0x8041AB70
 * @note Size: 0x108
 */
Vector3f Camera::getPosition()
{
	if (isRunning() && mJstObject) {
		return mJstObject->mViewPos;
	}

	Vector3f vec = mViewMatrix->getColumn(3);
	vec.negate2();
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
	PSMTX44Copy(mProjectionMtx, mBackupMtx);
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
 * Calculates the proper distance for the camera based on the given field of view percentage and initial distance.
 *
 * @param fovPercentage The field of view percentage. [0.0f, 100.0f]
 * @param initialDistance The initial distance.
 * @return The proper distance for the camera.
 *
 * @note Address: 0x8041AEF8
 * @note Size: 0x120
 */
f32 Camera::calcProperDistance(f32 fovPercentage, f32 initialDistance)
{
	f32 adjustedDistance = initialDistance;
	if (adjustedDistance < 0.01f) {
		adjustedDistance = 100.0f;
	}

	f32 halfViewAngleRadians = PI * (mViewAngle * 0.5f / 180.0f);
	f32 cosHalfAngle         = cosf(halfViewAngleRadians);
	f32 sinHalfAngle         = sinf(halfViewAngleRadians);
	f32 maxAllowedDistance   = (-(mProjectionFar - mProjectionNear)) / ((mProjectionFar * 2.0f) * mProjectionNear);

	f32 viewPercentage = fovPercentage / 100.0f;
	f32 aspectRatio    = cosHalfAngle / sinHalfAngle;

	f32 properDistance = maxAllowedDistance * (aspectRatio * adjustedDistance);
	f32 distance       = fabs(properDistance / (mAspectRatio * viewPercentage));

	maxAllowedDistance = fabs(properDistance / viewPercentage);

	return (distance > maxAllowedDistance) ? distance : maxAllowedDistance;
}

/**
 * @note Address: 0x8041B018
 * @note Size: 0xE0
 */
void Camera::updateScreenConstants()
{
	mFieldOfViewRatio = ((mViewAngle * 0.5f) / 180.0f) * PI;
	f32 cos           = cosf(mFieldOfViewRatio);
	f32 sin           = sinf(mFieldOfViewRatio);

	mFieldOfViewTangent = cos / sin;

	mCameraSizeModifier = -(mProjectionFar - mProjectionNear) / (mProjectionFar * 2.0f * mProjectionNear);
}

/**
 * @note Address: 0x8041B0F8
 * @note Size: 0xB8
 */
f32 Camera::calcScreenSize(Sys::Sphere& ball)
{
	Vector3f cameraPosition = getPosition();
	Vector3f sphereToCamera = ball.mPosition - cameraPosition;
	Vector3f viewDirection  = getViewVector();

	f32 scaledRadius = mFieldOfViewTangent * ball.mRadius;
	f32 screenSize   = mCameraSizeModifier * scaledRadius / sphereToCamera.dot(viewDirection);

	return absF(screenSize);
}

/**
 * @note Address: 0x8041B1B0
 * @note Size: 0x2E8
 */
void Camera::updateSoundCamera(f32 angle)
{
	f32 angleRatio = cosfc(angle) / sinf(angle);

	Vector3f targetPos = getLookAtPosition();
	Vector3f pos       = getPosition();
	Vector3f viewVec1  = getViewVector();

	f32 distance = targetPos.distance(pos);
	f32 ratio    = (angleRatio * distance) / mFieldOfViewTangent;

	mSoundPosition.x = -(viewVec1.x * ratio - targetPos.x);
	mSoundPosition.y = -(viewVec1.y * ratio - targetPos.y);
	mSoundPosition.z = -(viewVec1.z * ratio - targetPos.z);

	Vector3f soundPos = mSoundPosition;
	Matrixf matrix    = *mViewMatrix;
	Vector3f newPos;
	matrix.getSoundPosition(soundPos, newPos); // need to tweak this inline probably
	matrix.setTranslation(newPos);
	PSMTXCopy(matrix.mMatrix.mtxView, mSoundMatrix.mMatrix.mtxView);
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
	Quat indexQuat;
	Quat nextIndexQuat;
	Quat slerpQuat;

	int blend          = mBlendFactor;
	int nextBlendIndex = blend + 1;

	// Blend can't be higher than camera count
	if (blend >= mCameraCount - 1) {
		blend--;
		nextBlendIndex--;
	}

	f32 blendFactor = mBlendFactor - (f32)blend;

	indexQuat.fromMatrixf(*mCameras[blend]->getViewMatrix(false));
	nextIndexQuat.fromMatrixf(*mCameras[nextBlendIndex]->getViewMatrix(false));

	indexQuat.normalise();
	nextIndexQuat.normalise();

	Vector3f vectIndex     = mCameras[blend]->getPosition();
	Vector3f vectNextIndex = mCameras[nextBlendIndex]->getPosition();

	f32 invBlendFactor = 1.0f - blendFactor;

	mViewAngle = invBlendFactor * mCameras[blend]->mViewAngle + blendFactor * mCameras[nextBlendIndex]->mViewAngle;

	Vector3f vect3 = vectIndex * invBlendFactor + vectNextIndex * blendFactor;
	vect3.negate2();

	indexQuat.slerp(nextIndexQuat, blendFactor, slerpQuat);
	slerpQuat.normalise();

	Matrixf quatMatrix;
	Matrixf vectMatrix;

	quatMatrix.makeQ(slerpQuat);

	PSMTXTranspose(quatMatrix.mMatrix.mtxView, vectMatrix.mMatrix.mtxView);
	vect3 = vectMatrix.multTranspose(vect3);
	mTargetMatrix.makeTQ(vect3, slerpQuat);

	return;
}
