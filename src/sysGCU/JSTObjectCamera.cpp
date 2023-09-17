#include "Game/P2JST/ObjectCamera.h"
#include "Camera.h"
#include "nans.h"

namespace Game {
namespace P2JST {
static f32 sFovBackup;

/*
 * --INFO--
 * Address:	8042F6E4
 * Size:	0000F0
 */
ObjectCamera::ObjectCamera(char const* name, MoviePlayer* movie)
    : ObjectBase(name, movie)
    , mViewPos(*(const Vec*)govNAN_)
    , mViewTargetPos(*(const Vec*)govNAN_)
{

	f32 n = gfNAN_;

	mViewRoll         = n;
	mProjectionNear   = n;
	mProjectionFar    = n;
	mProjectionFovy   = n;
	mProjectionAspect = n;
	mCameraObj        = nullptr;
	mIsRunning        = false;

	mCameraObj2 = new Camera;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r6, __vt__Q26JStage7TObject@ha
	li       r10, 0
	stw      r0, 0x14(r1)
	addi     r0, r6, __vt__Q26JStage7TObject@l
	lis      r6, __vt__Q34Game5P2JST10ObjectBase@ha
	li       r9, -1
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __vt__Q26JStage7TCamera@ha
	lfs      f0, lbl_805161E4@sda21(r13)
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q26JStage7TCamera@l
	lis      r3, __vt__Q34Game5P2JST12ObjectCamera@ha
	mr       r7, r31
	stw      r0, 0(r31)
	addi     r8, r3, __vt__Q34Game5P2JST12ObjectCamera@l
	addi     r0, r6, __vt__Q34Game5P2JST10ObjectBase@l
	lis      r3, lbl_804EC110@ha
	stw      r0, 4(r31)
	addi     r6, r3, lbl_804EC110@l
	addi     r7, r8, 0x94
	lwz      r0, 8(r6)
	stw      r5, 8(r31)
	li       r3, 0x144
	lwz      r5, 0(r6)
	stw      r4, 0xc(r31)
	lwz      r4, 4(r6)
	stw      r10, 0x10(r31)
	stw      r9, 0x14(r31)
	stw      r10, 0x18(r31)
	stw      r10, 0x1c(r31)
	stw      r8, 0(r31)
	stw      r7, 4(r31)
	stw      r5, 0x90(r31)
	stw      r4, 0x94(r31)
	stw      r0, 0x98(r31)
	stw      r5, 0x9c(r31)
	stw      r4, 0xa0(r31)
	stw      r0, 0xa4(r31)
	stfs     f0, 0xa8(r31)
	stfs     f0, 0xac(r31)
	stfs     f0, 0xb0(r31)
	stfs     f0, 0xb4(r31)
	stfs     f0, 0xb8(r31)
	stw      r10, 0xbc(r31)
	stb      r10, 0xc4(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8042F7B8
	bl       __ct__6CameraFv
	mr       r0, r3

lbl_8042F7B8:
	stw      r0, 0xc0(r31)
	mr       r3, r31
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042F7D4
 * Size:	000068
 */
ObjectCamera::~ObjectCamera() { }

/*
 * --INFO--
 * Address:	8042F83C
 * Size:	0000A8
 */
void ObjectCamera::reset()
{
	Vec set;
	set.x = govNAN_[0];
	set.y = govNAN_[1];
	set.z = govNAN_[2];

	f32 n = gfNAN_;

	mViewPos       = set;
	mViewTargetPos = set;

	mViewRoll         = n;
	mProjectionNear   = n;
	mProjectionFar    = n;
	mProjectionFovy   = 45.0f;
	mProjectionAspect = sys->getRenderModeObj()->fbWidth / sys->getRenderModeObj()->efbHeight;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_804EC110@ha
	lfs      f1, lbl_805161E4@sda21(r13)
	stw      r0, 0x24(r1)
	lfs      f0, lbl_80520698@sda21(r2)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r4, lbl_804EC110@l
	lfs      f4, 0(r3)
	lfs      f3, 4(r3)
	stfs     f4, 0x90(r30)
	lfs      f2, 8(r3)
	stfs     f3, 0x94(r30)
	stfs     f2, 0x98(r30)
	stfs     f4, 0x9c(r30)
	stfs     f3, 0xa0(r30)
	stfs     f2, 0xa4(r30)
	stfs     f1, 0xa8(r30)
	stfs     f1, 0xac(r30)
	stfs     f1, 0xb0(r30)
	stfs     f0, 0xb4(r30)
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 4(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	divw     r0, r3, r31
	lfd      f1, lbl_805206A0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0xb8(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042F8E4
 * Size:	000004
 */
void ObjectCamera::update() { }

/*
 * --INFO--
 * Address:	8042F8E8
 * Size:	000024
 */
void ObjectCamera::setProjection() { mCameraObj->setProjection(); }

/*
 * --INFO--
 * Address:	8042F90C
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	8042F988
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	8042F9F4
 * Size:	000008
 */
char const* ObjectCamera::JSGGetName() const { return mName; }

/*
 * --INFO--
 * Address:	8042F9FC
 * Size:	000008
 */
void ObjectCamera::JSGSetFlag(u32 a1) { mFlags = a1; }

/*
 * --INFO--
 * Address:	8042FA04
 * Size:	000008
 */
u32 ObjectCamera::JSGGetFlag() const { return mFlags; }

/*
 * --INFO--
 * Address:	8042FA0C
 * Size:	000010
 */
void ObjectCamera::JSGSetData(u32 a1, void const* a2, u32 a3)
{
	_14 = a1;
	_18 = a2;
	_1C = a3;
}

/*
 * --INFO--
 * Address:	8042FA1C
 * Size:	00001C
 */
void ObjectCamera::JSGSetViewPosition(Vec const& pos) { mViewPos = pos; }

/*
 * --INFO--
 * Address:	8042FA38
 * Size:	00001C
 */
void ObjectCamera::JSGGetViewPosition(Vec* pos) const { *pos = mViewPos; }

/*
 * --INFO--
 * Address:	8042FA54
 * Size:	00001C
 */
void ObjectCamera::JSGSetViewTargetPosition(Vec const& pos) { mViewTargetPos = pos; }

/*
 * --INFO--
 * Address:	8042FA70
 * Size:	00001C
 */
void ObjectCamera::JSGGetViewTargetPosition(Vec* pos) const { *pos = mViewTargetPos; }

/*
 * --INFO--
 * Address:	8042FA8C
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGSetViewRoll(f32 roll) { mViewRoll = roll; }

/*
 * --INFO--
 * Address:	8042FA94
 * Size:	000008
 */
f32 ObjectCamera::JSGGetViewRoll() const { return mViewRoll; }

/*
 * --INFO--
 * Address:	8042FA9C
 * Size:	000008
 */
void ObjectCamera::JSGSetProjectionNear(f32 near) { mProjectionNear = near; }

/*
 * --INFO--
 * Address:	8042FAA4
 * Size:	000008
 */
f32 ObjectCamera::JSGGetProjectionNear() const { return mProjectionNear; }

/*
 * --INFO--
 * Address:	8042FAAC
 * Size:	000008
 */
void ObjectCamera::JSGSetProjectionFar(f32 far) { mProjectionFar = far; }

/*
 * --INFO--
 * Address:	8042FAB4
 * Size:	000008
 */
f32 ObjectCamera::JSGGetProjectionFar() const { return mProjectionFar; }

/*
 * --INFO--
 * Address:	8042FABC
 * Size:	000008
 */
void ObjectCamera::JSGSetProjectionFovy(f32 fovy) { mProjectionFovy = fovy; }

/*
 * --INFO--
 * Address:	8042FAC4
 * Size:	000008
 */
f32 ObjectCamera::JSGGetProjectionFovy() const { return mProjectionFovy; }

/*
 * --INFO--
 * Address:	8042FACC
 * Size:	000064
 */
void ObjectCamera::JSGSetProjectionAspect(f32 aspect)
{
	mProjectionAspect = sys->getRenderModeObj()->fbWidth / sys->getRenderModeObj()->efbHeight;
}

/*
 * --INFO--
 * Address:	8042FB30
 * Size:	000008
 */
f32 ObjectCamera::JSGGetProjectionAspect() const { return mProjectionAspect; }

/*
 * --INFO--
 * Address:	........
 * Size:	000168
 */
void ObjectCamera::setParms(Camera*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042FB38
 * Size:	0001A0
 */
void ObjectCamera::setCamera(Camera* cam)
{
	PSMTXIdentity(mViewMatrix.mMatrix.mtxView);
	mCameraObj             = cam;
	mCameraObj->mJstObject = this;

	// can Vec die pls
	Vector3f pos = mCameraObj->getPosition();
	Vec pos2;
	pos2.x = pos.x;
	pos2.y = pos.y;
	pos2.z = pos.z;
	JSGSetViewPosition(pos2);

	pos += mCameraObj->getViewVector() * 200.0f;
	pos2.x = pos.x;
	pos2.y = pos.y;
	pos2.z = pos.z;

	JSGSetViewTargetPosition(pos2);
	JSGSetViewRoll(0.0f);
	JSGSetProjectionNear(mCameraObj->getNear());
	JSGSetProjectionFar(mCameraObj->getFar());
	JSGSetProjectionFovy(mCameraObj->mViewAngle);
	JSGSetProjectionAspect(mCameraObj->mAspectRatio);
	sFovBackup = mCameraObj->mViewAngle;
	mCameraObj2->copyFrom(mCameraObj);
	mCameraObj->mViewMatrix = &mViewMatrix;
}

/*
 * --INFO--
 * Address:	8042FCD8
 * Size:	000038
 */
void ObjectCamera::start()
{
	mCameraObj->update();
	mIsRunning = true;
}

/*
 * --INFO--
 * Address:	8042FD10
 * Size:	000050
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
