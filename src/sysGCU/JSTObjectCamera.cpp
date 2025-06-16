#include "Game/P2JST/ObjectCamera.h"
#include "Camera.h"
#include "nans.h"

namespace Game {
namespace P2JST {
static f32 sFovBackup;

/**
 * @note Address: 0x8042F6E4
 * @note Size: 0xF0
 */
ObjectCamera::ObjectCamera(char const* name, MoviePlayer* movie)
    : ObjectBase(name, movie)
    , mViewPos(govNAN_)
    , mViewTargetPos(govNAN_)
    , mViewRoll(gfNAN_)
    , mProjectionNear(gfNAN_)
    , mProjectionFar(gfNAN_)
    , mProjectionFovy(gfNAN_)
    , mProjectionAspect(gfNAN_)
    , mCameraObj(nullptr)
    , mIsRunning(false)
{
	mCameraObj2 = new Camera;
}

/**
 * @note Address: 0x8042F7D4
 * @note Size: 0x68
 */
ObjectCamera::~ObjectCamera()
{
}

/**
 * @note Address: 0x8042F83C
 * @note Size: 0xA8
 */
void ObjectCamera::reset()
{
	mViewPos        = govNAN_;
	mViewTargetPos  = govNAN_;
	mViewRoll       = gfNAN_;
	mProjectionNear = gfNAN_;
	mProjectionFar  = gfNAN_;

	mProjectionFovy   = 45.0f;
	mProjectionAspect = sys->getRenderModeObj()->fbWidth / sys->getRenderModeObj()->efbHeight;
}

/**
 * @note Address: 0x8042F8E4
 * @note Size: 0x4
 */
void ObjectCamera::update()
{
}

/**
 * @note Address: 0x8042F8E8
 * @note Size: 0x24
 */
void ObjectCamera::setProjection()
{
	mCameraObj->setProjection();
}

/**
 * @note Address: 0x8042F90C
 * @note Size: 0x7C
 */
void ObjectCamera::setView()
{
	Mtx mtx, mtx2;
	Vec angle;
	angle.x = 0.0f;
	angle.y = 1.0f;
	angle.z = 0.0f;

	C_MTXLookAt(mtx, &mViewPos, &angle, &mViewTargetPos);
	PSMTXRotRad(mtx2, 'z', -mViewRoll * (PI / 180.0f));
	PSMTXConcat(mtx2, mtx, mViewMatrix.mMatrix.mtxView);
}

/**
 * @note Address: 0x8042F988
 * @note Size: 0x6C
 */
void ObjectCamera::updateCamera()
{
	setView();
	mCameraObj->mViewMatrix = &mViewMatrix;

	mCameraObj->mViewAngle = sFovBackup;
	sFovBackup             = mProjectionFovy;

	f32 backup = mProjectionFovy;
	mCameraObj->setProjectionNearFar(mProjectionNear, mProjectionFar);
}

/**
 * @note Address: 0x8042F9F4
 * @note Size: 0x8
 */
char const* ObjectCamera::JSGGetName() const
{
	return mName;
}

/**
 * @note Address: 0x8042F9FC
 * @note Size: 0x8
 */
void ObjectCamera::JSGSetFlag(u32 a1)
{
	mFlags = a1;
}

/**
 * @note Address: 0x8042FA04
 * @note Size: 0x8
 */
u32 ObjectCamera::JSGGetFlag() const
{
	return mFlags;
}

/**
 * @note Address: 0x8042FA0C
 * @note Size: 0x10
 */
void ObjectCamera::JSGSetData(u32 a1, void const* a2, u32 a3)
{
	_14 = a1;
	_18 = a2;
	_1C = a3;
}

/**
 * @note Address: 0x8042FA1C
 * @note Size: 0x1C
 */
void ObjectCamera::JSGSetViewPosition(Vec const& pos)
{
	mViewPos = pos;
}

/**
 * @note Address: 0x8042FA38
 * @note Size: 0x1C
 */
void ObjectCamera::JSGGetViewPosition(Vec* pos) const
{
	*pos = mViewPos;
}

/**
 * @note Address: 0x8042FA54
 * @note Size: 0x1C
 */
void ObjectCamera::JSGSetViewTargetPosition(Vec const& pos)
{
	mViewTargetPos = pos;
}

/**
 * @note Address: 0x8042FA70
 * @note Size: 0x1C
 */
void ObjectCamera::JSGGetViewTargetPosition(Vec* pos) const
{
	*pos = mViewTargetPos;
}

/**
 * @note Address: 0x8042FA8C
 * @note Size: 0x8
 */
void P2JST::ObjectCamera::JSGSetViewRoll(f32 roll)
{
	mViewRoll = roll;
}

/**
 * @note Address: 0x8042FA94
 * @note Size: 0x8
 */
f32 ObjectCamera::JSGGetViewRoll() const
{
	return mViewRoll;
}

/**
 * @note Address: 0x8042FA9C
 * @note Size: 0x8
 */
void ObjectCamera::JSGSetProjectionNear(f32 near)
{
	mProjectionNear = near;
}

/**
 * @note Address: 0x8042FAA4
 * @note Size: 0x8
 */
f32 ObjectCamera::JSGGetProjectionNear() const
{
	return mProjectionNear;
}

/**
 * @note Address: 0x8042FAAC
 * @note Size: 0x8
 */
void ObjectCamera::JSGSetProjectionFar(f32 far)
{
	mProjectionFar = far;
}

/**
 * @note Address: 0x8042FAB4
 * @note Size: 0x8
 */
f32 ObjectCamera::JSGGetProjectionFar() const
{
	return mProjectionFar;
}

/**
 * @note Address: 0x8042FABC
 * @note Size: 0x8
 */
void ObjectCamera::JSGSetProjectionFovy(f32 fovy)
{
	mProjectionFovy = fovy;
}

/**
 * @note Address: 0x8042FAC4
 * @note Size: 0x8
 */
f32 ObjectCamera::JSGGetProjectionFovy() const
{
	return mProjectionFovy;
}

/**
 * @note Address: 0x8042FACC
 * @note Size: 0x64
 */
void ObjectCamera::JSGSetProjectionAspect(f32 aspect)
{
	mProjectionAspect = sys->getRenderModeObj()->fbWidth / sys->getRenderModeObj()->efbHeight;
}

/**
 * @note Address: 0x8042FB30
 * @note Size: 0x8
 */
f32 ObjectCamera::JSGGetProjectionAspect() const
{
	return mProjectionAspect;
}

/**
 * @note Address: N/A
 * @note Size: 0x168
 */
void ObjectCamera::setParms(Camera*)
{
	// this might not be right since its not using the camera input, but the size is right and it does get setCamera a bit closer

	Vector3f pos = mCameraObj->getPosition();
	JSGSetViewPosition(*(Vec*)&pos);
	pos += mCameraObj->getViewVector() * 200.0f;
	JSGSetViewTargetPosition(*(Vec*)&pos);

	JSGSetViewRoll(0.0f);
	JSGSetProjectionNear(mCameraObj->getNear());
	JSGSetProjectionFar(mCameraObj->getFar());
	JSGSetProjectionFovy(mCameraObj->mViewAngle);
	JSGSetProjectionAspect(mCameraObj->mAspectRatio);
	sFovBackup = mCameraObj->mViewAngle;
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8042FB38
 * @note Size: 0x1A0
 */
void ObjectCamera::setCamera(Camera* cam)
{
	PSMTXIdentity(mViewMatrix.mMatrix.mtxView);
	mCameraObj             = cam;
	mCameraObj->mJstObject = this;

	setParms(cam);

	mCameraObj2->copyFrom(mCameraObj);
	mCameraObj->mViewMatrix = &mViewMatrix;
}

/**
 * @note Address: 0x8042FCD8
 * @note Size: 0x38
 */
void ObjectCamera::start()
{
	mCameraObj->update();
	mIsRunning = true;
}

/**
 * @note Address: 0x8042FD10
 * @note Size: 0x50
 */
void ObjectCamera::stop()
{
	if (mCameraObj) {
		mCameraObj->copyFrom(mCameraObj2);
		mCameraObj->mJstObject = nullptr;
	}
	mIsRunning = false;
}

} // namespace P2JST
} // namespace Game
