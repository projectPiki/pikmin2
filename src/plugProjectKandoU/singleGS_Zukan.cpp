#include "Game/IllustratedBook.h"
#include "Game/SingleGame.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/AIConstants.h"
#include "Game/MapMgr.h"
#include "Game/PikiMgr.h"
#include "Game/PikiState.h"
#include "Game/DynParticle.h"
#include "Game/Farm.h"
#include "Game/rumble.h"
#include "Game/generalEnemyMgr.h"
#include "Game/GameLight.h"
#include "Game/CameraMgr.h"
#include "Game/Navi.h"
#include "Morimura/Zukan.h"
#include "Dolphin/rand.h"
#include "Screen/Game2DMgr.h"
#include "TParticle2dMgr.h"
#include "PSSystem/PSGame.h"
#include "PSM/ObjMgr.h"
#include "PSSystem/PSSystemIF.h"
#include "PSGame/PikScene.h"
#include "PSM/Scene.h"
#include "Splitter.h"
#include "nans.h"

static int sParentHeapFreeSize;

static const int unusedArray[] = { 0, 0, 0 };
static const char name[]       = "SingleGS_Zukan";

static int unusedArray2[] = { 1, 2, 3, 0 };

namespace {
const char* sDirName[4] = { "tutorial", "forest", "yakushima", "last" };
};

namespace Game {
namespace IllustratedBook {

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
DebugParms::DebugParms()
    : CNode("図鑑デバッグ") // "Illustrated Book Debugging"
{
	mFlags.clear();
	_18.set(32, 32, 10, 255);
	_1C[0] = 0.05f;
	_1C[1] = 40.0f;
	_1C[2] = -100.0f;
	_1C[3] = 1.0f;
	_1C[4] = 300.0f;
	_1C[5] = 100.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
EnemyTexMgr::EnemyTexMgr()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
void EnemyTexMgr::create()
{
	IconTexture::Mgr::create(EnemyTypeID::EnemyID_COUNT);
	mLoader.loadResource("/user/Yamashita/enemyTex/arc.szs");
	ResTIMG* backup = mLoader.getResTIMG("ZZDummy/texture.bti");
	P2ASSERTLINE(466, backup);
	for (int i = 0; i < EnemyTypeID::EnemyID_COUNT; i++) {
		char* name = EnemyInfoFunc::getEnemyName(i, 0xffff);
		if (name) {
			char buffer[256];
			sprintf(buffer, "%s/texture.bti", name);
			ResTIMG* tex = mLoader.getResTIMG(buffer);
			if (tex) {
				setTexture(i, tex);
			} else {
				setTexture(i, backup);
			}
		} else {
			setTexture(i, backup);
		}
	}
}

/**
 * @note Address: 0x80221028
 * @note Size: 0x284
 */
Camera::Camera(Controller* input)
    : mController(input)
    , mTargetObject(nullptr)
    , mBasePhysicalPosition(Vector3f::zero)
    , mTrueCurrentPhysicalPos(Vector3f::zero)
    , mCameraLastMoveDest(Vector3f::zero)
    , mHorizontalAngle(0.0f)
    , mObjectRadius(350.0f)
    , mCurrentHeight(500.0f)
    , mMinHeight(0.0f)
    , mMaxHeight(700.0f)
    , mGoalPosition(Vector3f::zero)
    , mObjectOffset(Vector3f::zero)
    , mMovementVelocity(Vector3f::zero)
    , mCurrentPositionIndex(0)
    , mHorizontalInputDampened(0.0f)
    , mCurrentHorizontalInput(0.0f)
    , mVerticalInputDampened(0.0f)
    , mCurrentVerticalInput(0.0f)
    , mCurrViewAngle(45.0f)
    , mMinViewAngle(0.1f)
    , mMaxViewAngle(90.0f)
    , mFocusLevel(0.0f)
    , mCurrentBlurLevel(0.0f)
    , mDefaultMaxFocus(0.8f)
    , mCurrentShakeMagnitude(Vector3f::zero)
    , mShakeTargetPosition(Vector3f::zero)
    , mShakeUpdateVelocity(Vector3f::zero)
    , mCameraShakeOffsetPos(Vector3f::zero)
    , mVibrationForce(1.0f, 0.0f, 0.0f)
{
	setName("図鑑カメラ"); // 'illustrated book camera'
	move(Vector3f::zero);
	mCameraShakeFrequency     = 0.5f;
	mCameraShakeBaseMagnitude = 0.5f;
	mPassiveShakeBlurLevel    = 0.05f;
	mStrongShakeChance        = 0.008f;
	mStrongShakePower         = 7.0f;
	mShakeAccelRate           = 0.12f;
	mShakeDecelRate           = 0.95f;
	mCStickMoveModifierX      = 0.1f;
	mCStickMoveModifierY      = 15.0f;
	mCStickMoveAccelRate      = 0.3f;
	mFovChangeSpeed           = 0.8f;
	mFovChangeAccel           = 0.35f;
	mAnalogMoveSpeed          = 0.15f;
	mAnalogMoveAccel          = 0.15f;
	mVibrationForceMultiplier = 0.63f;
	mVibrationModX            = 0.5f;
	mVibrationModY            = 0.77f;
	mVibrationModZ            = 0.5f;
}

/**
 * @note Address: 0x802212AC
 * @note Size: 0x1D8
 */
void Camera::startVibration(int type)
{
	f32 factor;
	f32 calc = type / 29.0f;
	Vector3f mod(randFloat() - 0.5f, (randFloat() + 1.0f) * (randFloat() < 0.5f ? -1.0f : 1.0f), randFloat() - 0.5f);
	mod.normalise();
	mod *= (calc * 10.0f);
	mVibrationForce += mod;
}

/**
 * @note Address: N/A
 * @note Size: 0x184
 */
void Camera::debugDraw(Graphics& gfx)
{
	OSReport("radius:%6.3f");
	OSReport("angle :%6.3f");
	OSReport("height:%6.3f");
	OSReport("fovy  :%6.3f");
	mHorizontalAngle = 30.0f;
	// just to line stuff up.
}

/**
 * @note Address: 0x80221484
 * @note Size: 0x88
 */
void Camera::move(const Vector3f& pos)
{
	mTargetObject           = nullptr;
	mGoalPosition           = pos;
	mCameraLastMoveDest     = mGoalPosition;
	mTrueCurrentPhysicalPos = mCameraLastMoveDest;
	mLookAtPosition         = mTrueCurrentPhysicalPos;
	resetControl();
}

/**
 * @note Address: 0x8022150C
 * @note Size: 0x128
 */
void Camera::setTarget(Creature* obj)
{
	if (obj) {
		mTargetObject = obj;
		Sys::Sphere bound;
		mTargetObject->getBoundingSphere(bound);
		mGoalPosition           = bound.mPosition;
		mCameraLastMoveDest     = mGoalPosition;
		mTrueCurrentPhysicalPos = mCameraLastMoveDest;
		mLookAtPosition         = mTrueCurrentPhysicalPos;
		resetControl();
	} else {
		move(Vector3f::zero);
	}
}

/**
 * @note Address: 0x80221634
 * @note Size: 0x274
 */
void Camera::resetControl()
{
	mMovementVelocity = Vector3f::zero;
	for (int i = 0; i < 10; i++) {
		mPositionList[i] = mLookAtPosition;
	}
	mCurrentPositionIndex    = 0;
	mCurrentHorizontalInput  = 0.0f;
	mHorizontalInputDampened = 0.0f;
	mCurrentVerticalInput    = 0.0f;
	mVerticalInputDampened   = 0.0f;

	mBasePhysicalPosition = Vector3f(mCameraLastMoveDest.x + mObjectRadius * sinf(mHorizontalAngle), mCameraLastMoveDest.y,
	                                 mCameraLastMoveDest.z + mObjectRadius * cosf(mHorizontalAngle));

	if (mapMgr) {
		mBasePhysicalPosition.y = mapMgr->getMinY(mBasePhysicalPosition) + mCurrentHeight;
	}
	mPosition             = mBasePhysicalPosition + mCameraShakeOffsetPos;
	mVibrationForce       = 0.0f;
	mCameraShakeOffsetPos = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void Camera::setAtOffset(const Vector3f& vec)
{
	mObjectOffset.x = vec.x;
	mObjectOffset.y = vec.y;
	mObjectOffset.z = vec.z;
}

/**
 * @note Address: 0x802218A8
 * @note Size: 0x904
 */
void Camera::doUpdate()
{
	Vector3f cameraPos = Vector3f::zero; // f31, f30, f29
	Sys::Sphere targetSphere;            // 0x24
	if (mTargetObject) {
		mTargetObject->getBoundingSphere(targetSphere);
		f32 minY = mapMgr->getMinY(targetSphere.mPosition);
		if (targetSphere.mPosition.y < minY) {
			targetSphere.mPosition.y = minY;
		}
	} else {
		targetSphere.mPosition = mCameraLastMoveDest;
	}

	mGoalPosition += mMovementVelocity;
	mPositionList[mCurrentPositionIndex] = targetSphere.mPosition;

	if (++mCurrentPositionIndex >= 10) {
		mCurrentPositionIndex = 0;
	}

	for (int i = 0; i < 10; i++) {
		cameraPos += mPositionList[i];
	}

	cameraPos *= 0.1f;

	Vector3f delta = cameraPos - mGoalPosition;
	delta *= 0.1f;
	mMovementVelocity += delta;
	mMovementVelocity *= 0.6f;

	if (!Screen::gGame2DMgr->isAppearConfirmWindow()) {
		int fovInc = ((mController->getButton() / 4) & JUTGamePad::PRESS_DPAD_LEFT)
		           - ((mController->getButton() / 8) & JUTGamePad::PRESS_DPAD_LEFT);
		addFovy(fovInc);

		f32 angleRatio = (mViewAngle - mMinViewAngle) / (mMaxViewAngle - mMinViewAngle);

		mCurrentHeight += mCStickMoveModifierY * mController->getSubStickY();
		if (mCurrentHeight < mMinHeight) {
			mCurrentHeight = mMinHeight;
		}
		if (mCurrentHeight > mMaxHeight) {
			mCurrentHeight = mMaxHeight;
		}

		mHorizontalAngle += mCStickMoveModifierX * mController->getSubStickX();
		if (mHorizontalAngle > TAU) {
			mHorizontalAngle -= TAU;
		}

		if (mHorizontalAngle < 0.0f) {
			mHorizontalAngle += TAU;
		}

		if (Screen::gGame2DMgr->isZukanEnlargedWindow()) {
			mCurrentHorizontalInput = 100.0f * mController->getMainStickX();
			mCurrentVerticalInput   = 100.0f * mController->getMainStickY();
		} else {
			mCurrentHorizontalInput = 0.0f;
			mCurrentVerticalInput   = 0.0f;
		}

		f32 factor = (angleRatio * (mAnalogMoveSpeed - mAnalogMoveAccel) + mAnalogMoveAccel);
		mHorizontalInputDampened += factor * (mCurrentHorizontalInput - mHorizontalInputDampened);
		mVerticalInputDampened += factor * (mCurrentVerticalInput - mVerticalInputDampened);

		Vector3f pos = Vector3f(mObjectRadius * sinf(mHorizontalAngle) + mCameraLastMoveDest.x, mCameraLastMoveDest.y,
		                        mObjectRadius * cosf(mHorizontalAngle) + mCameraLastMoveDest.z);
		pos.y        = mCurrentHeight + mapMgr->getMinY(pos);

		Vector3f sep = pos - mBasePhysicalPosition;
		sep *= mCStickMoveAccelRate;
		mBasePhysicalPosition += sep;

		Sys::Sphere moveSphere(mBasePhysicalPosition, 10.0f);
		MoveInfo info(&moveSphere, &Vector3f::zero, 0.0f);

		mapMgr->traceMove(info, sys->mDeltaTime);

		f32 newMinY = mapMgr->getMinY(moveSphere.mPosition) + 10.0f;
		if (moveSphere.mPosition.y < newMinY) {
			moveSphere.mPosition.y = newMinY;
		}

		mBasePhysicalPosition = moveSphere.mPosition;
	}

	Vector3f sep = mGoalPosition - mPosition;
	f32 dist     = sep.length();
	if (dist > 0.0001f) {
		sep *= 1.0f / dist;
	} else {
		sep = Vector3f(0.0f, 0.0f, -1.0f);
	}

	Vector3f yAxis(0.0f, 1.0f, 0.0f);
	Vector3f crossVec  = sep.cross(yAxis);
	Vector3f crossVec2 = crossVec.cross(yAxis);

	f32 shakeX = mCurrentShakeMagnitude.x + mHorizontalInputDampened;
	f32 shakeY = mCurrentShakeMagnitude.y + mVerticalInputDampened;
	f32 shakeZ = mCurrentShakeMagnitude.z;

	mTrueCurrentPhysicalPos.x = crossVec2.x * shakeZ + ((yAxis.x * shakeY) + ((crossVec.x * shakeX) + (mGoalPosition.x + mObjectOffset.x)));
	mTrueCurrentPhysicalPos.y = crossVec2.y * shakeZ + ((yAxis.y * shakeY) + ((crossVec.y * shakeX) + (mGoalPosition.y + mObjectOffset.y)));
	mTrueCurrentPhysicalPos.z = crossVec2.z * shakeZ + ((yAxis.z * shakeY) + ((crossVec.z * shakeX) + (mGoalPosition.z + mObjectOffset.z)));

	updateCameraShake();
	updateFocus();

	Vector3f vec = Vector3f::zero;

	mVibrationForce.x *= 0.75f * mVibrationForceMultiplier;
	mVibrationForce.y *= mVibrationForceMultiplier;
	mVibrationForce.z *= 0.75f * mVibrationForceMultiplier;

	mCameraShakeOffsetPos += mVibrationForce;

	Vector3f newSep = mCameraShakeOffsetPos - vec;
	mVibrationForce.x -= mVibrationModX * newSep.x;
	mVibrationForce.y -= mVibrationModY * newSep.y;
	mVibrationForce.z -= mVibrationModZ * newSep.z;

	mFocusLevel += 0.05f * mVibrationForce.length();

	mPosition = mBasePhysicalPosition + mCameraShakeOffsetPos;

	Vector3f lookOffset = mCameraShakeOffsetPos;
	lookOffset *= 10.0f;
	mLookAtPosition = mTrueCurrentPhysicalPos + lookOffset;
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
	stw      r31, 0xec(r1)
	stw      r30, 0xe8(r1)
	mr       r30, r3
	lis      r4, "zero__10Vector3<f>"@ha
	lwz      r3, 0x19c(r3)
	addi     r31, r4, "zero__10Vector3<f>"@l
	lfs      f31, 0(r31)
	cmplwi   r3, 0
	lfs      f30, 4(r31)
	lfs      f29, 8(r31)
	beq      lbl_80221938
	lwz      r12, 0(r3)
	addi     r4, r1, 0x24
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x24
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x28(r1)
	fcmpo    cr0, f0, f1
	bge      lbl_80221950
	stfs     f1, 0x28(r1)
	b        lbl_80221950

lbl_80221938:
	lfs      f0, 0x1b8(r30)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x1bc(r30)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x1c0(r30)
	stfs     f0, 0x2c(r1)

lbl_80221950:
	lfs      f1, 0x1d8(r30)
	lfs      f0, 0x1f0(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x1d8(r30)
	lfs      f1, 0x1dc(r30)
	lfs      f0, 0x1f4(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x1dc(r30)
	lfs      f1, 0x1e0(r30)
	lfs      f0, 0x1f8(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x1e0(r30)
	lwz      r0, 0x274(r30)
	lfs      f0, 0x24(r1)
	mulli    r3, r0, 0xc
	addi     r3, r3, 0x1fc
	add      r3, r30, r3
	stfs     f0, 0(r3)
	lfs      f0, 0x28(r1)
	stfs     f0, 4(r3)
	lfs      f0, 0x2c(r1)
	stfs     f0, 8(r3)
	lwz      r3, 0x274(r30)
	addi     r0, r3, 1
	cmpwi    r0, 0xa
	stw      r0, 0x274(r30)
	blt      lbl_802219C4
	li       r0, 0
	stw      r0, 0x274(r30)

lbl_802219C4:
	lfs      f0, 0x1fc(r30)
	lfs      f1, 0x200(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x208(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x20c(r30)
	lfs      f2, 0x204(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x214(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x218(r30)
	fadds    f29, f29, f2
	fadds    f31, f31, f0
	lfs      f0, 0x220(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x224(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x22c(r30)
	lfs      f2, 0x210(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x230(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x238(r30)
	fadds    f29, f29, f2
	lfs      f2, 0x21c(r30)
	fadds    f30, f30, f1
	fadds    f31, f31, f0
	lfs      f0, 0x244(r30)
	fadds    f29, f29, f2
	lfs      f1, 0x23c(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x250(r30)
	lfs      f6, 0x228(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x248(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x25c(r30)
	fadds    f29, f29, f6
	lfs      f5, 0x234(r30)
	fadds    f30, f30, f1
	fadds    f31, f31, f0
	lfs      f0, 0x268(r30)
	fadds    f29, f29, f5
	lfs      f1, 0x254(r30)
	lfs      f2, 0x240(r30)
	fadds    f31, f31, f0
	lfs      f4, lbl_8051A13C@sda21(r2)
	fadds    f30, f30, f1
	lfs      f1, 0x260(r30)
	fadds    f29, f29, f2
	lfs      f2, 0x24c(r30)
	fmuls    f31, f31, f4
	lfs      f0, 0x1d8(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x26c(r30)
	fadds    f29, f29, f2
	lfs      f2, 0x258(r30)
	fsubs    f7, f31, f0
	lfs      f6, 0x264(r30)
	fadds    f30, f30, f1
	lfs      f0, 0x1f0(r30)
	fadds    f29, f29, f2
	lfs      f3, 0x1dc(r30)
	fmuls    f7, f7, f4
	lfs      f5, 0x270(r30)
	fmuls    f30, f30, f4
	lfs      f2, 0x1e0(r30)
	fadds    f29, f29, f6
	lfs      f1, lbl_8051A19C@sda21(r2)
	fadds    f0, f0, f7
	fsubs    f3, f30, f3
	fadds    f29, f29, f5
	stfs     f0, 0x1f0(r30)
	fmuls    f3, f3, f4
	fmuls    f29, f29, f4
	lfs      f0, 0x1f4(r30)
	fadds    f0, f0, f3
	fsubs    f2, f29, f2
	stfs     f0, 0x1f4(r30)
	fmuls    f2, f2, f4
	lfs      f0, 0x1f8(r30)
	fadds    f0, f0, f2
	stfs     f0, 0x1f8(r30)
	lfs      f0, 0x1f0(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1f0(r30)
	lfs      f0, 0x1f4(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1f4(r30)
	lfs      f0, 0x1f8(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1f8(r30)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isAppearConfirmWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80221EB8
	lwz      r4, 0x198(r30)
	lis      r0, 0x4330
	stw      r0, 0xd0(r1)
	mr       r3, r30
	lwz      r0, 0x18(r4)
	lfd      f1, lbl_8051A188@sda21(r2)
	rlwinm   r4, r0, 0x1d, 0x1f, 0x1f
	rlwinm   r0, r0, 0x1e, 0x1f, 0x1f
	subf     r0, r4, r0
	xoris    r0, r0, 0x8000
	stw      r0, 0xd4(r1)
	lfd      f0, 0xd0(r1)
	fsubs    f1, f0, f1
	bl       addFovy__Q34Game15IllustratedBook6CameraFf
	lfs      f2, 0x28c(r30)
	lfs      f1, 0x28(r30)
	lfs      f0, 0x290(r30)
	fsubs    f4, f1, f2
	lwz      r3, 0x198(r30)
	fsubs    f3, f0, f2
	lfs      f2, 0x2fc(r30)
	lfs      f1, 0x5c(r3)
	lfs      f0, 0x1cc(r30)
	fdivs    f29, f4, f3
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1cc(r30)
	lfs      f0, 0x1cc(r30)
	lfs      f1, 0x1d0(r30)
	fcmpo    cr0, f0, f1
	bge      lbl_80221BC0
	stfs     f1, 0x1cc(r30)

lbl_80221BC0:
	lfs      f0, 0x1cc(r30)
	lfs      f1, 0x1d4(r30)
	fcmpo    cr0, f0, f1
	ble      lbl_80221BD4
	stfs     f1, 0x1cc(r30)

lbl_80221BD4:
	lwz      r3, 0x198(r30)
	lfs      f3, 0x2f8(r30)
	lfs      f2, 0x58(r3)
	lfs      f1, 0x1c4(r30)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x1c4(r30)
	lfs      f1, 0x1c4(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_80221C04
	fsubs    f0, f1, f0
	stfs     f0, 0x1c4(r30)

lbl_80221C04:
	lfs      f1, 0x1c4(r30)
	lfs      f0, lbl_8051A128@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80221C20
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x1c4(r30)

lbl_80221C20:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isZukanEnlargedWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80221C58
	lwz      r3, 0x198(r30)
	lfs      f1, lbl_8051A124@sda21(r2)
	lfs      f0, 0x48(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x27c(r30)
	lwz      r3, 0x198(r30)
	lfs      f0, 0x4c(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x284(r30)
	b        lbl_80221C64

lbl_80221C58:
	lfs      f0, lbl_8051A128@sda21(r2)
	stfs     f0, 0x27c(r30)
	stfs     f0, 0x284(r30)

lbl_80221C64:
	lfs      f4, 0x310(r30)
	lfs      f0, 0x30c(r30)
	lfs      f1, 0x27c(r30)
	fsubs    f3, f0, f4
	lfs      f2, 0x278(r30)
	lfs      f0, lbl_8051A128@sda21(r2)
	fsubs    f1, f1, f2
	fmadds   f3, f29, f3, f4
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x278(r30)
	lfs      f1, 0x284(r30)
	lfs      f2, 0x280(r30)
	fsubs    f1, f1, f2
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x280(r30)
	lfs      f5, 0x1c4(r30)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_80221CB4
	fneg     f1, f5

lbl_80221CB4:
	lfs      f3, lbl_8051A194@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A128@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f6, 0x1c8(r30)
	fcmpo    cr0, f5, f0
	lfs      f1, 0x1c0(r30)
	lfs      f4, 0x1bc(r30)
	fctiwz   f0, f2
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f6, f0, f1
	bge      lbl_80221D1C
	lfs      f0, lbl_8051A198@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_80221D34

lbl_80221D1C:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_80221D34:
	lfs      f0, 0x1b8(r30)
	addi     r4, r1, 0x18
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmadds   f0, f6, f1, f0
	stfs     f4, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f0, 0x18(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x1cc(r30)
	lis      r3, sincosTable___5JMath@ha
	lis      r4, "zero__10Vector3<f>"@ha
	lfs      f6, 0x18(r1)
	fadds    f7, f0, f1
	lfs      f5, 0x20(r1)
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f3, lbl_8051A180@sda21(r2)
	lfs      f2, lbl_8051A128@sda21(r2)
	addi     r8, r1, 8
	stfs     f7, 0x1c(r1)
	addi     r7, r4, "zero__10Vector3<f>"@l
	lfs      f0, lbl_8051A19C@sda21(r2)
	li       r6, 0
	lfs      f4, 0x1a0(r30)
	li       r0, -1
	lfs      f1, 0x1a4(r30)
	addi     r4, r1, 0x34
	fsubs    f8, f6, f4
	lfs      f6, 0x300(r30)
	fsubs    f7, f7, f1
	lfs      f4, 0x1a8(r30)
	lfs      f1, 0x1a0(r30)
	fmuls    f8, f8, f6
	fsubs    f4, f5, f4
	fmuls    f7, f7, f6
	fadds    f1, f1, f8
	fmuls    f4, f4, f6
	stfs     f1, 0x1a0(r30)
	lfs      f1, 0x1a4(r30)
	fadds    f1, f1, f7
	stfs     f1, 0x1a4(r30)
	lfs      f1, 0x1a8(r30)
	fadds    f1, f1, f4
	stfs     f1, 0x1a8(r30)
	lfs      f4, 0x1a0(r30)
	lfs      f1, 0x800(r3)
	stfs     f4, 8(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lfs      f4, 0x1a4(r30)
	lwz      r5, sys@sda21(r13)
	stfs     f4, 0xc(r1)
	lfs      f4, 0x1a8(r30)
	stfs     f4, 0x10(r1)
	stfs     f3, 0x14(r1)
	stw      r8, 0x34(r1)
	stw      r7, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f2, 0x40(r1)
	stw      r6, 0x44(r1)
	stw      r6, 0x78(r1)
	stb      r6, 0xa8(r1)
	stb      r6, 0x4d(r1)
	stb      r6, 0x4c(r1)
	stw      r6, 0x7c(r1)
	stw      r6, 0x48(r1)
	stb      r6, 0xc4(r1)
	stw      r6, 0xc8(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	stw      r0, 0xcc(r1)
	stw      r6, 0x80(r1)
	stb      r6, 0x4e(r1)
	lwz      r12, 4(r3)
	lfs      f1, 0x54(r5)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 8
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_8051A180@sda21(r2)
	lfs      f0, 0xc(r1)
	fadds    f1, f2, f1
	fcmpo    cr0, f0, f1
	bge      lbl_80221EA0
	stfs     f1, 0xc(r1)

lbl_80221EA0:
	lfs      f0, 8(r1)
	stfs     f0, 0x1a0(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x1a4(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x1a8(r30)

lbl_80221EB8:
	lfs      f1, 0x1dc(r30)
	lfs      f0, 0x178(r30)
	lfs      f2, 0x1e0(r30)
	fsubs    f3, f1, f0
	lfs      f1, 0x17c(r30)
	lfs      f9, 0x1d8(r30)
	lfs      f0, 0x174(r30)
	fsubs    f4, f2, f1
	fmuls    f1, f3, f3
	fsubs    f2, f9, f0
	lfs      f0, lbl_8051A128@sda21(r2)
	fmuls    f5, f4, f4
	fmadds   f1, f2, f2, f1
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80221F08
	ble      lbl_80221F0C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80221F0C

lbl_80221F08:
	fmr      f1, f0

lbl_80221F0C:
	lfs      f0, lbl_8051A1A4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80221F30
	lfs      f0, lbl_8051A11C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f10, f2, f0
	fmuls    f1, f3, f0
	fmuls    f11, f4, f0
	b        lbl_80221F3C

lbl_80221F30:
	lfs      f10, lbl_8051A128@sda21(r2)
	lfs      f11, lbl_8051A17C@sda21(r2)
	fmr      f1, f10

lbl_80221F3C:
	lfs      f7, lbl_8051A128@sda21(r2)
	mr       r3, r30
	lfs      f0, 0x1e4(r30)
	fmuls    f6, f10, f7
	lfs      f8, lbl_8051A11C@sda21(r2)
	fmuls    f12, f1, f7
	lfs      f5, 0x2a0(r30)
	lfs      f4, 0x278(r30)
	fadds    f1, f9, f0
	fnmsubs  f9, f11, f8, f12
	lfs      f3, 0x2a4(r30)
	lfs      f2, 0x280(r30)
	fmsubs   f6, f11, f7, f6
	fadds    f13, f5, f4
	lfs      f0, 0x2a8(r30)
	fadds    f29, f3, f2
	fmuls    f3, f6, f7
	fmsubs   f5, f10, f8, f12
	fmuls    f11, f7, f29
	fmadds   f2, f9, f13, f1
	fnmsubs  f10, f5, f8, f3
	fmuls    f1, f9, f7
	fadds    f2, f11, f2
	fmsubs   f3, f9, f8, f3
	fmsubs   f4, f5, f7, f1
	fmadds   f1, f10, f0, f2
	stfs     f1, 0x1ac(r30)
	lfs      f2, 0x1dc(r30)
	lfs      f1, 0x1e8(r30)
	fadds    f1, f2, f1
	fmadds   f1, f6, f13, f1
	fmadds   f1, f8, f29, f1
	fmadds   f1, f4, f0, f1
	stfs     f1, 0x1b0(r30)
	lfs      f2, 0x1e0(r30)
	lfs      f1, 0x1ec(r30)
	fadds    f1, f2, f1
	fmadds   f1, f5, f13, f1
	fadds    f1, f11, f1
	fmadds   f0, f3, f0, f1
	stfs     f0, 0x1b4(r30)
	bl       updateCameraShake__Q34Game15IllustratedBook6CameraFv
	mr       r3, r30
	bl       updateFocus__Q34Game15IllustratedBook6CameraFv
	lfs      f3, lbl_8051A1A8@sda21(r2)
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f0, 0x314(r30)
	lfs      f1, 0x2d0(r30)
	fmuls    f0, f3, f0
	lfs      f6, "zero__10Vector3<f>"@l(r3)
	lfs      f7, 4(r31)
	lfs      f8, 8(r31)
	fmuls    f0, f1, f0
	lfs      f1, lbl_8051A128@sda21(r2)
	stfs     f0, 0x2d0(r30)
	lfs      f2, 0x2d4(r30)
	lfs      f0, 0x314(r30)
	fmuls    f0, f2, f0
	stfs     f0, 0x2d4(r30)
	lfs      f0, 0x314(r30)
	lfs      f2, 0x2d8(r30)
	fmuls    f0, f3, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x2d8(r30)
	lfs      f2, 0x2c4(r30)
	lfs      f0, 0x2d0(r30)
	fadds    f0, f2, f0
	stfs     f0, 0x2c4(r30)
	lfs      f2, 0x2c8(r30)
	lfs      f0, 0x2d4(r30)
	fadds    f0, f2, f0
	stfs     f0, 0x2c8(r30)
	lfs      f2, 0x2cc(r30)
	lfs      f0, 0x2d8(r30)
	fadds    f0, f2, f0
	stfs     f0, 0x2cc(r30)
	lfs      f0, 0x2c4(r30)
	lfs      f5, 0x2cc(r30)
	fsubs    f2, f0, f6
	lfs      f4, 0x2c8(r30)
	lfs      f3, 0x318(r30)
	fsubs    f5, f5, f8
	lfs      f0, 0x2d0(r30)
	fsubs    f4, f4, f7
	fnmsubs  f0, f3, f2, f0
	stfs     f0, 0x2d0(r30)
	lfs      f2, 0x31c(r30)
	lfs      f0, 0x2d4(r30)
	fnmsubs  f0, f2, f4, f0
	stfs     f0, 0x2d4(r30)
	lfs      f2, 0x320(r30)
	lfs      f0, 0x2d8(r30)
	fnmsubs  f0, f2, f5, f0
	stfs     f0, 0x2d8(r30)
	lfs      f3, 0x2d0(r30)
	lfs      f2, 0x2d4(r30)
	lfs      f4, 0x2d8(r30)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802220F8
	fmadds   f0, f3, f3, f2
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f1
	ble      lbl_802220FC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802220FC

lbl_802220F8:
	fmr      f3, f1

lbl_802220FC:
	lfs      f1, lbl_8051A110@sda21(r2)
	lfs      f0, 0x294(r30)
	lfs      f2, lbl_8051A180@sda21(r2)
	fmadds   f0, f1, f3, f0
	stfs     f0, 0x294(r30)
	lfs      f1, 0x1a0(r30)
	lfs      f0, 0x2c4(r30)
	lfs      f4, 0x1a4(r30)
	lfs      f3, 0x2c8(r30)
	fadds    f0, f1, f0
	lfs      f5, 0x1a8(r30)
	lfs      f1, 0x2cc(r30)
	fadds    f3, f4, f3
	stfs     f0, 0x174(r30)
	fadds    f0, f5, f1
	stfs     f3, 0x178(r30)
	stfs     f0, 0x17c(r30)
	lfs      f3, 0x2c4(r30)
	lfs      f4, 0x2c8(r30)
	lfs      f5, 0x2cc(r30)
	fmuls    f3, f3, f2
	lfs      f0, 0x1ac(r30)
	fmuls    f4, f4, f2
	lfs      f1, 0x1b0(r30)
	fmuls    f5, f5, f2
	lfs      f2, 0x1b4(r30)
	fadds    f0, f0, f3
	fadds    f1, f1, f4
	fadds    f2, f2, f5
	stfs     f0, 0x180(r30)
	stfs     f1, 0x184(r30)
	stfs     f2, 0x188(r30)
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	lwz      r31, 0xec(r1)
	lwz      r0, 0x124(r1)
	lwz      r30, 0xe8(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/**
 * @note Address: 0x802221AC
 * @note Size: 0x204
 */
void Camera::updateCameraShake()
{
	if (randFloat() < mCameraShakeFrequency) {
		f32 strength = mCameraShakeBaseMagnitude;
		mFocusLevel += mPassiveShakeBlurLevel * randFloat();

		if (randFloat() < mStrongShakeChance) {
			strength += mStrongShakePower;
		}

		mShakeTargetPosition.x = strength * (randFloat() - 0.5f);
		mShakeTargetPosition.y = strength * (randFloat() - 0.5f);
	}

	Vector3f sep = mShakeTargetPosition - mCurrentShakeMagnitude;
	sep *= mShakeAccelRate;
	mShakeUpdateVelocity += sep;
	mShakeUpdateVelocity *= mShakeDecelRate;

	mCurrentShakeMagnitude += mShakeUpdateVelocity;
}

/**
 * @note Address: 0x802223B0
 * @note Size: 0xE8
 */
void Camera::updateFocus()
{
	f64 fovAbs = fabs(mCurrViewAngle - mViewAngle);
	f32 fov    = (f32)fovAbs;
	f64 yAbs   = fabs(mCurrentHorizontalInput - mHorizontalInputDampened);
	f32 y      = (f32)yAbs;
	f64 xAbs   = fabs(mCurrentVerticalInput - mVerticalInputDampened);
	f32 x      = (f32)xAbs;
	if (fov > 1.0f || x > 30.0f || y > 30.0f) {
		mFocusLevel += 0.05f;
	}

	mCurrentBlurLevel += (0.2f - mFocusLevel) * 0.02f;
	if (mCurrentBlurLevel > 0.5f) {
		mCurrentBlurLevel = 0.5f;
	}
	if (mCurrentBlurLevel < -0.5f) {
		mCurrentBlurLevel = -0.5f;
	}
	mCurrentBlurLevel *= mDefaultMaxFocus;
	mFocusLevel += mCurrentBlurLevel;
	if (mFocusLevel > 1.0f) {
		mFocusLevel = 1.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
f32 Camera::getFocus()
{
	f32 focus = absF(mFocusLevel);
	if (focus > 0.9f) {
		focus = 0.9f;
	}

	return focus;
}

/**
 * @note Address: 0x80222498
 * @note Size: 0x54
 */
void Camera::addFovy(f32 fov)
{
	mCurrViewAngle += fov * mFovChangeSpeed;
	if (mCurrViewAngle < mMinViewAngle) {
		mCurrViewAngle = mMinViewAngle;
	}
	if (mCurrViewAngle > mMaxViewAngle) {
		mCurrViewAngle = mMaxViewAngle;
	}
	mViewAngle += mFovChangeAccel * (mCurrViewAngle - mViewAngle);
}

} // namespace IllustratedBook

namespace SingleGame {

/**
 * @note Address: 0x802224EC
 * @note Size: 0xEC
 */
ZukanState::ZukanState()
    : State(SGS_Zukan)
{
	mCurrMode         = ModeNone;
	mDebugParms       = nullptr;
	mMapIndex         = 0;
	mController       = new Controller(JUTGamePad::PORT_0);
	mParentHeap       = nullptr;
	mMainHeap         = nullptr;
	mCurrObjHeap      = nullptr;
	mTexture2         = nullptr;
	mTexture          = nullptr;
	mHeapSize         = 0;
	mExtraHeapFor2D   = nullptr;
	_108              = 0.0f;
	mChangeSelTimer   = 0.0f;
	mChangeSelMaxTime = 1.0f;
	mChangeSelState   = 0;
	_110              = -1;
	_114              = -1;
	setMode(ModeNone);
}

/**
 * @note Address: 0x802225D8
 * @note Size: 0x36C
 */
void ZukanState::init(SingleGameSection* game, StateArg* arg)
{
	mBackupHeap = JKRGetCurrentHeap();
	gameSystem->setFlag(GAMESYS_IsGameWorldActive);
	gameSystem->setPause(false, "zukan", 3);
	gameSystem->setMoviePause(false, "zukan");
	sParentHeapFreeSize = mBackupHeap->getFreeSize();
	mParentHeap         = JKRExpHeap::create(mBackupHeap->getFreeSize(), mBackupHeap, true);
	mParentHeap->becomeCurrentHeap();
	P2ASSERTLINE(1025, arg);
	mExtraHeapFor2D = JKRExpHeap::create(0x96000, JKRGetCurrentHeap(), true);
	JUT_ASSERTLINE(1031, mExtraHeapFor2D, "ExtraHeapFor2D null\n");
	mDebugParms = new IllustratedBook::DebugParms;
	game->addGenNode(mDebugParms);
	mDelegateLoadMain   = new Delegate<ZukanState>(this, dvdloadA);
	mDelegateLoadEnemy  = new Delegate<ZukanState>(this, dvdloadB_teki);
	mDelegateLoadPellet = new Delegate<ZukanState>(this, dvdloadB_pellet);
	game->mDisplayWiper = game->mWipeInFader;
	game->mWipeInFader->start(1.0f);
	game->refreshHIO();
	mGameSect           = game;
	mDoDraw             = false;
	shadowMgr           = nullptr;
	mCurrentEnemyIndex  = -1;
	mCurrentEnemy       = nullptr;
	mCurrentPelletIndex = -1;
	mCurrentPellet      = nullptr;
	gameSystem->mMode   = GSM_PIKLOPEDIA;
	sys->dvdLoadUseCallBack(&mDvdThread, mDelegateLoadMain);
	Screen::gGame2DMgr->setGamePad(mController);
	Arg* zarg = static_cast<Arg*>(arg);
	if (zarg->mStartMode != 0) {
		setMode(ModeStartTeki);
	} else {
		setMode(ModeStartPellet);
	}
	mMapIndex       = zarg->mCourseIndex;
	generalEnemyMgr = nullptr;
	gameSystem->mTimeMgr->resetFlag(1);
}

static const char* const modeNames[9]
    = { "StartTeki", "StartPellet", "ModeChangeToTeki", "Teki", "ChangeTeki", "ModeChangeToPellet", "Pellet", "ChangePellet", "None" };

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void ZukanState::startTekiMode(bool)
{
	setMode(ModeChangeToTeki);
	Morimura::DispMemberZukanEnemy disp;
	disp.mDebugExpHeap  = mExtraHeapFor2D;
	disp.mTexture       = mTexture2;
	disp.mEnemyTexMgr   = mEnemyTexMgr;
	disp.mResultTexMgr  = mResultTexture;
	disp.mPrevSelection = &_110;
	Screen::gGame2DMgr->open_ZukanEnemy(disp);
	startWipe(0.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void ZukanState::startPelletMode(bool)
{
	setMode(ModeChangeToPellet);
	Morimura::DispMemberZukanItem disp;
	disp.mDebugExpHeap  = mExtraHeapFor2D;
	disp.mTexture       = mTexture2;
	disp.mEnemyTexMgr   = mEnemyTexMgr;
	disp.mResultTexMgr  = mResultTexture;
	disp.mPrevSelection = &_114;
	Screen::gGame2DMgr->open_ZukanItem(disp);
	startWipe(0.0f);
}

/**
 * @note Address: 0x80222944
 * @note Size: 0x14
 */
void ZukanState::setMode(CMode mode)
{
	if (mCurrMode != mode) {
		mCurrMode = mode;
	}
}

/**
 * @note Address: 0x80222958
 * @note Size: 0x72C
 */
void ZukanState::exec(SingleGameSection* game)
{
	if (gameSystem->mTimeMgr->isDayTime()) {
		gameSystem->mTimeMgr->mSpeedFactor = 3.0f;
	} else {
		gameSystem->mTimeMgr->mSpeedFactor = 9.0f;
	}

	if (!(mDebugParms->mFlags.isSet(2))) {
		if (mCurrMode == ModeTeki) {
			// If in the enemy mode, and the conditions to need to load something are met
			if (mCurrentEnemyIndex >= 0 && mCurrentEnemyIndex < EnemyTypeID::EnemyID_COUNT && mDoDraw
			    && mCurrentEnemyIndex == Screen::gGame2DMgr->getZukanEnemyCurrSelectId()) {
				Screen::gGame2DMgr->requireZukanEffectOff();
			} else {
				Screen::gGame2DMgr->requireZukanRequest();
			}
		} else if (mCurrMode == ModePellet) {
			// If in the pellet mode, and the conditions to need to load something are met
			if (mCurrentPelletIndex >= 0 && mCurrentPelletIndex < (u32)getMaxPelletID() && mDoDraw
			    && mCurrentPelletIndex == Screen::gGame2DMgr->getZukanItemCurrSelectId()) {
				Screen::gGame2DMgr->requireZukanEffectOff();
			} else {
				Screen::gGame2DMgr->requireZukanRequest();
			}
		} else {
			Screen::gGame2DMgr->requireZukanRequest();
		}
	} else {
		Screen::gGame2DMgr->requireZukanEffectOff();
	}

	if (!Screen::gGame2DMgr->isAppearConfirmWindow() && !Screen::gGame2DMgr->isZukanEnlargedWindow()
	    && !Screen::gGame2DMgr->isZukanMemoWindow() && (mController->getButtonDown() & (Controller::PRESS_R | Controller::PRESS_L))) {
		switch (mCurrMode) {
		case ModeTeki:
		case ModeChangeTeki:
			bool test = false;
			if (Screen::gGame2DMgr->isZukanEnemy()) {
				startPelletMode(true);
				test = true;
			}
			if (test) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_PLAYER_CHANGE, 0);
			} else {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
			}
			break;

		case ModePellet:
		case ModeChangePellet:
			test = false;
			if (Screen::gGame2DMgr->isZukanItem()) {
				startTekiMode(true);
				test = true;
			}
			if (test) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_PLAYER_CHANGE, 0);
			} else {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
			}
			break;

		default:
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
			break;
		}
	}

	if (!mDoDraw) {
		gameSystem->mTimeMgr->setFlag(TIMEFLAG_Stopped);
		Screen::gGame2DMgr->update();
		if (mCurrMode == ModeStartTeki || mCurrMode == ModeStartPellet) {
			if (mDvdThread.mMode != DvdThreadCommand::CM_Completed) {
				return;
			}

			// start teki
			if (mCurrMode == ModeStartTeki) {
				startTekiMode(true);
				return;
			}

			// start pellet
			startPelletMode(true);
			return;
		}

		if (mDvdThread.mMode == DvdThreadCommand::CM_Completed) {
			static_cast<PSM::Scene_Objects*>(PSMGetChildScene())->adaptObjMgr();
			mDoDraw = true;
			gameSystem->mTimeMgr->resetFlag(TIMEFLAG_Stopped);
		}

		return;
	}

	switch (mCurrMode) {
	case ModeChangeToTeki:
		execModeChange(game, ModeTeki);
		break;
	case ModeChangeToPellet:
		execModeChange(game, ModePellet);
		break;
	case ModeTeki:
		int enemyID;
		if (!sys->dvdLoadSyncAllNoBlock()
		    && Screen::gGame2DMgr->check_ZukanEnemyRequest(enemyID) == Screen::Game2DMgr::CHECK2D_Zukan_ExitFinished) {
			clearHeaps();
			transit(game, SGS_Select, nullptr);
		} else {
			execTeki(game);
		}
		break;
	case ModePellet:
		if (!sys->dvdLoadSyncAllNoBlock()
		    && Screen::gGame2DMgr->check_ZukanItemRequest(enemyID) == Screen::Game2DMgr::CHECK2D_Zukan_ExitFinished) {
			clearHeaps();
			transit(game, SGS_Select, nullptr);
		} else {
			execPellet(game);
		}
		break;
	case ModeChangeTeki:
		execChangeTeki(game);
		break;
	case ModeChangePellet:
		execChangePellet(game);
		break;
	default:
		JUT_PANICLINE(1401, "Unknown mode : %d \n", mCurrMode);
	}

	mParms->mColorSetting.update();
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	lis      r6, lbl_80482E60@ha
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	addi     r31, r6, lbl_80482E60@l
	stw      r30, 0x98(r1)
	mr       r30, r4
	stw      r29, 0x94(r1)
	mr       r29, r3
	stw      r28, 0x90(r1)
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r5)
	bl       isDayTime__Q24Game7TimeMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802229AC
	lwz      r3, gameSystem__4Game@sda21(r13)
	lfs      f0, lbl_8051A1DC@sda21(r2)
	lwz      r3, 0x40(r3)
	stfs     f0, 0x21c(r3)
	b        lbl_802229BC

lbl_802229AC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lfs      f0, lbl_8051A1E0@sda21(r2)
	lwz      r3, 0x40(r3)
	stfs     f0, 0x21c(r3)

lbl_802229BC:
	lwz      r3, 0x104(r29)
	lhz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80222A8C
	lwz      r0, 0x9c(r29)
	cmpwi    r0, 3
	bne      lbl_80222A24
	lwz      r0, 0xa0(r29)
	cmpwi    r0, 0
	blt      lbl_80222A18
	cmpwi    r0, 0x66
	bge      lbl_80222A18
	lbz      r0, 0x88(r29)
	cmplwi   r0, 0
	beq      lbl_80222A18
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       getZukanEnemyCurrSelectId__Q26Screen9Game2DMgrFv
	lwz      r0, 0xa0(r29)
	cmpw     r0, r3
	bne      lbl_80222A18
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanEffectOff__Q26Screen9Game2DMgrFv
	b        lbl_80222A94

lbl_80222A18:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanRequest__Q26Screen9Game2DMgrFv
	b        lbl_80222A94

lbl_80222A24:
	cmpwi    r0, 6
	bne      lbl_80222A80
	lwz      r0, 0xa8(r29)
	cmpwi    r0, 0
	blt      lbl_80222A74
	bl       getMaxPelletID__Q34Game10SingleGame10ZukanStateFv
	lwz      r0, 0xa8(r29)
	cmplw    r0, r3
	bge      lbl_80222A74
	lbz      r0, 0x88(r29)
	cmplwi   r0, 0
	beq      lbl_80222A74
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       getZukanItemCurrSelectId__Q26Screen9Game2DMgrFv
	lwz      r0, 0xa8(r29)
	cmpw     r0, r3
	bne      lbl_80222A74
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanEffectOff__Q26Screen9Game2DMgrFv
	b        lbl_80222A94

lbl_80222A74:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanRequest__Q26Screen9Game2DMgrFv
	b        lbl_80222A94

lbl_80222A80:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanRequest__Q26Screen9Game2DMgrFv
	b        lbl_80222A94

lbl_80222A8C:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanEffectOff__Q26Screen9Game2DMgrFv

lbl_80222A94:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isAppearConfirmWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80222CCC
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isZukanEnlargedWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80222CCC
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isZukanMemoWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80222CCC
	lwz      r3, 0x90(r29)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x19, 0x1a
	beq      lbl_80222CCC
	lwz      r0, 0x9c(r29)
	cmpwi    r0, 5
	beq      lbl_80222CBC
	bge      lbl_80222AF0
	cmpwi    r0, 3
	bge      lbl_80222AFC
	b        lbl_80222CBC

lbl_80222AF0:
	cmpwi    r0, 8
	bge      lbl_80222CBC
	b        lbl_80222BDC

lbl_80222AFC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	li       r28, 0
	bl       isZukanEnemy__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80222BAC
	lwz      r0, 0x9c(r29)
	cmpwi    r0, 5
	beq      lbl_80222B24
	li       r0, 5
	stw      r0, 0x9c(r29)

lbl_80222B24:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanBase@ha
	stw      r0, 0x6c(r1)
	addi     r4, r3, __vt__Q28Morimura19DispMemberZukanBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanItem@ha
	addi     r0, r29, 0x114
	stw      r4, 0x6c(r1)
	addi     r5, r3, __vt__Q28Morimura19DispMemberZukanItem@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x6c
	stw      r6, 0x70(r1)
	stw      r6, 0x74(r1)
	stw      r6, 0x78(r1)
	stw      r6, 0x7c(r1)
	stw      r6, 0x80(r1)
	stw      r6, 0x84(r1)
	stw      r6, 0x88(r1)
	stw      r5, 0x6c(r1)
	lwz      r5, 0xf0(r29)
	stw      r5, 0x74(r1)
	lwz      r5, 0xcc(r29)
	stw      r5, 0x78(r1)
	lwz      r5, 0xec(r29)
	stw      r5, 0x80(r1)
	lwz      r5, 0xe8(r29)
	stw      r5, 0x7c(r1)
	stw      r0, 0x88(r1)
	bl open_ZukanItem__Q26Screen9Game2DMgrFRQ28Morimura19DispMemberZukanItem lfs
f1, lbl_8051A128@sda21(r2) mr       r3, r29 bl
startWipe__Q34Game10SingleGame10ZukanStateFf li       r28, 1

lbl_80222BAC:
	clrlwi.  r0, r28, 0x18
	beq      lbl_80222BC8
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x181f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80222CCC

lbl_80222BC8:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1807
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80222CCC

lbl_80222BDC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	li       r28, 0
	bl       isZukanItem__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80222C8C
	lwz      r0, 0x9c(r29)
	cmpwi    r0, 2
	beq      lbl_80222C04
	li       r0, 2
	stw      r0, 0x9c(r29)

lbl_80222C04:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanBase@ha
	stw      r0, 0x4c(r1)
	addi     r4, r3, __vt__Q28Morimura19DispMemberZukanBase@l
	lis      r3, __vt__Q28Morimura20DispMemberZukanEnemy@ha
	addi     r0, r29, 0x110
	stw      r4, 0x4c(r1)
	addi     r5, r3, __vt__Q28Morimura20DispMemberZukanEnemy@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x4c
	stw      r6, 0x50(r1)
	stw      r6, 0x54(r1)
	stw      r6, 0x58(r1)
	stw      r6, 0x5c(r1)
	stw      r6, 0x60(r1)
	stw      r6, 0x64(r1)
	stw      r6, 0x68(r1)
	stw      r5, 0x4c(r1)
	lwz      r5, 0xf0(r29)
	stw      r5, 0x54(r1)
	lwz      r5, 0xcc(r29)
	stw      r5, 0x58(r1)
	lwz      r5, 0xec(r29)
	stw      r5, 0x60(r1)
	lwz      r5, 0xe8(r29)
	stw      r5, 0x5c(r1)
	stw      r0, 0x68(r1)
	bl open_ZukanEnemy__Q26Screen9Game2DMgrFRQ28Morimura20DispMemberZukanEnemy
	lfs      f1, lbl_8051A128@sda21(r2)
	mr       r3, r29
	bl       startWipe__Q34Game10SingleGame10ZukanStateFf
	li       r28, 1

lbl_80222C8C:
	clrlwi.  r0, r28, 0x18
	beq      lbl_80222CA8
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x181f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80222CCC

lbl_80222CA8:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1807
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80222CCC

lbl_80222CBC:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1807
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80222CCC:
	lbz      r0, 0x88(r29)
	cmplwi   r0, 0
	bne      lbl_80222F04
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x240(r3)
	ori      r0, r0, 1
	stw      r0, 0x240(r3)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, 0x9c(r29)
	cmpwi    r3, 0
	beq      lbl_80222D08
	cmpwi    r3, 1
	bne      lbl_80222E4C

lbl_80222D08:
	lwz      r0, 0x34(r29)
	cmpwi    r0, 2
	bne      lbl_80223064
	cmpwi    r3, 0
	bne      lbl_80222DB4
	cmpwi    r3, 2
	beq      lbl_80222D2C
	li       r0, 2
	stw      r0, 0x9c(r29)

lbl_80222D2C:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanBase@ha
	stw      r0, 0x2c(r1)
	addi     r4, r3, __vt__Q28Morimura19DispMemberZukanBase@l
	lis      r3, __vt__Q28Morimura20DispMemberZukanEnemy@ha
	addi     r0, r29, 0x110
	stw      r4, 0x2c(r1)
	addi     r5, r3, __vt__Q28Morimura20DispMemberZukanEnemy@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x2c
	stw      r6, 0x30(r1)
	stw      r6, 0x34(r1)
	stw      r6, 0x38(r1)
	stw      r6, 0x3c(r1)
	stw      r6, 0x40(r1)
	stw      r6, 0x44(r1)
	stw      r6, 0x48(r1)
	stw      r5, 0x2c(r1)
	lwz      r5, 0xf0(r29)
	stw      r5, 0x34(r1)
	lwz      r5, 0xcc(r29)
	stw      r5, 0x38(r1)
	lwz      r5, 0xec(r29)
	stw      r5, 0x40(r1)
	lwz      r5, 0xe8(r29)
	stw      r5, 0x3c(r1)
	stw      r0, 0x48(r1)
	bl open_ZukanEnemy__Q26Screen9Game2DMgrFRQ28Morimura20DispMemberZukanEnemy
	lfs      f1, lbl_8051A128@sda21(r2)
	mr       r3, r29
	bl       startWipe__Q34Game10SingleGame10ZukanStateFf
	b        lbl_80223064

lbl_80222DB4:
	cmpwi    r3, 5
	beq      lbl_80222DC4
	li       r0, 5
	stw      r0, 0x9c(r29)

lbl_80222DC4:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanBase@ha
	stw      r0, 0xc(r1)
	addi     r4, r3, __vt__Q28Morimura19DispMemberZukanBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanItem@ha
	addi     r0, r29, 0x114
	stw      r4, 0xc(r1)
	addi     r5, r3, __vt__Q28Morimura19DispMemberZukanItem@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0xc
	stw      r6, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r6, 0x18(r1)
	stw      r6, 0x1c(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r6, 0x28(r1)
	stw      r5, 0xc(r1)
	lwz      r5, 0xf0(r29)
	stw      r5, 0x14(r1)
	lwz      r5, 0xcc(r29)
	stw      r5, 0x18(r1)
	lwz      r5, 0xec(r29)
	stw      r5, 0x20(r1)
	lwz      r5, 0xe8(r29)
	stw      r5, 0x1c(r1)
	stw      r0, 0x28(r1)
	bl open_ZukanItem__Q26Screen9Game2DMgrFRQ28Morimura19DispMemberZukanItem lfs
f1, lbl_8051A128@sda21(r2) mr       r3, r29 bl
startWipe__Q34Game10SingleGame10ZukanStateFf b        lbl_80223064

lbl_80222E4C:
	lwz      r0, 0x34(r29)
	cmpwi    r0, 2
	bne      lbl_80223064
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80222E78
	addi     r3, r31, 0x190
	addi     r5, r31, 0x90
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80222E78:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_80222E98
	addi     r3, r31, 0x190
	addi     r5, r31, 0x90
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80222E98:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_80222EB8
	addi     r3, r31, 0x19c
	addi     r5, r31, 0x90
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80222EB8:
	lwz      r3, 4(r28)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_80222EDC
	addi     r3, r31, 0x19c
	addi     r5, r31, 0x1a8
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80222EDC:
	mr       r3, r28
	bl       adaptObjMgr__Q23PSM13Scene_ObjectsFv
	li       r0, 1
	stb      r0, 0x88(r29)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x240(r3)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x240(r3)
	b        lbl_80223064

lbl_80222F04:
	lwz      r6, 0x9c(r29)
	cmpwi    r6, 5
	beq      lbl_80222F50
	bge      lbl_80222F2C
	cmpwi    r6, 3
	beq      lbl_80222F64
	bge      lbl_80223024
	cmpwi    r6, 2
	bge      lbl_80222F3C
	b        lbl_80223044

lbl_80222F2C:
	cmpwi    r6, 7
	beq      lbl_80223034
	bge      lbl_80223044
	b        lbl_80222FC4

lbl_80222F3C:
	mr       r3, r29
	mr       r4, r30
	li       r5, 3
	bl
execModeChange__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionQ44Game10SingleGame10ZukanState5CMode
	b        lbl_80223058

lbl_80222F50:
	mr       r3, r29
	mr       r4, r30
	li       r5, 6
	bl
execModeChange__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionQ44Game10SingleGame10ZukanState5CMode
	b        lbl_80223058

lbl_80222F64:
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadSyncAllNoBlock__6SystemFv
	cmpwi    r3, 0
	bne      lbl_80222FB4
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl       check_ZukanEnemyRequest__Q26Screen9Game2DMgrFRi
	cmpwi    r3, 3
	bne      lbl_80222FB4
	mr       r3, r29
	bl       clearHeaps__Q34Game10SingleGame10ZukanStateFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80223058

lbl_80222FB4:
	mr       r3, r29
	mr       r4, r30
	bl execTeki__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection b
lbl_80223058

lbl_80222FC4:
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadSyncAllNoBlock__6SystemFv
	cmpwi    r3, 0
	bne      lbl_80223014
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl       check_ZukanItemRequest__Q26Screen9Game2DMgrFRi
	cmpwi    r3, 3
	bne      lbl_80223014
	mr       r3, r29
	bl       clearHeaps__Q34Game10SingleGame10ZukanStateFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80223058

lbl_80223014:
	mr       r3, r29
	mr       r4, r30
	bl execPellet__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection
	b        lbl_80223058

lbl_80223024:
	mr       r3, r29
	mr       r4, r30
	bl
execChangeTeki__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection b
lbl_80223058

lbl_80223034:
	mr       r3, r29
	mr       r4, r30
	bl
execChangePellet__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection b
lbl_80223058

lbl_80223044:
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x1cc
	li       r4, 0x579
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80223058:
	lwz      r3, 0x100(r29)
	addi     r3, r3, 0x18
	bl       update__Q34Game15IllustratedBook12ColorSettingFv

lbl_80223064:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	lwz      r28, 0x90(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/**
 * @note Address: 0x80223084
 * @note Size: 0x16C
 */
void ZukanState::execModeChange(SingleGameSection* game, CMode mode)
{
	switch (mChangeSelState) {
	case 0:
		if (mChangeSelTimer >= mChangeSelMaxTime && sys->dvdLoadSyncAllNoBlock() == 0) {
			mChangeSelState = 1;
		}
		break;
	case 1:
		switch (mode) {
		case ModeTeki:
			mCurrentEnemyIndex = -1;
			createTeki(mCurrentEnemyIndex);
			break;
		case ModePellet:
			mCurrentPelletIndex = -1;
			createPellet(mCurrentPelletIndex);
			break;
		default:
			JUT_PANICLINE(1459, "Illegal next mode. %d \n", mode);
			break;
		}
		mChangeSelTimer = 0.0f;
		mChangeSelState = 2;
		break;
	case 2:
		if (mChangeSelTimer >= mChangeSelMaxTime) {
			mChangeSelTimer = mChangeSelMaxTime;
			if (sys->dvdLoadSyncAllNoBlock() == 0) {
				setMode(mode);
			}
		}
		break;
	}

	if (mDoDraw) {
		mChangeSelTimer += sys->mDeltaTime;
		game->BaseGameSection::doUpdate();
	}
}

/**
 * @note Address: 0x802231F0
 * @note Size: 0xE0
 */
void ZukanState::execChangeTeki(SingleGameSection* game)
{
	switch (mChangeSelState) {
	case 0:
		mChangeSelTimer = 0.0f;
		mChangeSelState = 1;
		break;
	case 1:
		createTeki(mCurrentEnemyIndex);
		mChangeSelTimer = 0.0f;
		mChangeSelState = 2;
		break;
	case 2:
		if (mChangeSelTimer > mChangeSelMaxTime) {
			setMode(ModeTeki);
			mChangeSelTimer = mChangeSelMaxTime;
		}
		break;
	}

	if (mDoDraw) {
		mChangeSelTimer += sys->mDeltaTime;
		game->BaseGameSection::doUpdate();
	}
}

/**
 * @note Address: 0x802232D0
 * @note Size: 0x5A4
 */
void ZukanState::execTeki(SingleGameSection* game)
{
	// LET'S MAKE CARROTS
	if (mController->getButtonDown() & Controller::PRESS_A && Screen::gGame2DMgr->getZukanEnemyCurrSelectId() != -1
	    && !Screen::gGame2DMgr->isAppearConfirmWindow()) {
		Piki* piki = pikiMgr->birth();
		if (piki) {
			PikiInitArg initArg(PIKISTATE_Carrot);
			piki->init(&initArg);
			piki->changeShape(Carrot);

			Vector3f lookAtPos = mCamera->getLookAtPosition();
			Vector3f cameraPos = mCamera->getPosition();

			Vector3f viewVec;
			viewVec = mCamera->getViewVector();
			viewVec.length(); // unused + regswaps

			f32 randAngle = TAU * randFloat();
			f32 randDist  = 100.0f * randFloat();

			Vector3f direction = Vector3f(randDist * sinf(randAngle), 0.0f, randDist * cosf(randAngle));
			Vector3f position  = cameraPos; // 0x58
			Vector3f velocity  = (lookAtPos + direction) - cameraPos;
			velocity *= mDebugParms->_1C[3];

			velocity.y = velocity.y + (mDebugParms->_1C[5] * randFloat() + mDebugParms->_1C[4]);
			piki->setVelocity(velocity);

			velocity.normalise();

			Vector3f yAxis(0.0f, 1.0f, 0.0f);
			Vector3f perpVec = velocity.cross(yAxis);
			perpVec *= mDebugParms->_1C[1];
			position += perpVec;
			position.y += mDebugParms->_1C[2];

			f32 minY = 10.0f + mapMgr->getMinY(position);
			if (position.y < minY) {
				position.y = minY;
			}

			piki->setPosition(position, false);

			piki->mFaceDir = TAU * randFloat();

			PSSystem::spSysIF->playSystemSe(PSSE_PK_CARROT_THROW, 0);
		}
	}

	if (!Screen::gGame2DMgr->isAppearConfirmWindow() && mController->getButtonDown() & Controller::PRESS_Z && generalEnemyMgr) {
		GeneralMgrIterator<EnemyBase> iterator(generalEnemyMgr);
		CI_LOOP(iterator)
		{
			EnemyBase* obj = iterator.getObject();
			InteractDope act(nullptr, SPRAY_TYPE_BITTER);
			obj->stimulate(act);
		}
	}

	int newID;
	switch (Screen::gGame2DMgr->check_ZukanEnemyRequest(newID)) {
	case 1:
		if (newID != mCurrentEnemyIndex && !mDebugParms->mFlags.isSet(2)) {
			createEnemy(newID);
		}
		break;
	case 0:
		break;
	}
	game->BaseGameSection::doUpdate();
}

/**
 * @note Address: 0x80223874
 * @note Size: 0x18
 */
void ZukanState::startWipe(f32 time)
{
	mChangeSelState   = 0;
	mChangeSelTimer   = 0.0f;
	mChangeSelMaxTime = time;
}

/**
 * @note Address: 0x8022388C
 * @note Size: 0x3C
 */
void ZukanState::createEnemy(int id)
{
	if (mCurrMode != ModeTeki) {
		return;
	}

	mCurrentEnemyIndex = id;

	setMode(ModeChangeTeki);
	mChangeSelState   = 0;
	mChangeSelTimer   = 0.0f;
	mChangeSelMaxTime = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void ZukanState::createItem(int)
{
	OSReport("READY:%d Enemy:%d Item:%d");
	OSReport("enemy:%d item:%d");
	OSReport("heapA %d");
	OSReport("heapB %d");
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x802238C8
 * @note Size: 0xEC
 */
void SingleGame::ZukanState::execChangePellet(SingleGameSection* game)
{
	switch (mChangeSelState) {
	case 0:
		if (mChangeSelTimer > mChangeSelMaxTime) {
			mChangeSelTimer = mChangeSelMaxTime;
			mChangeSelState = 1;
		}
		break;
	case 1:
		createPellet(mCurrentPelletIndex);
		mChangeSelTimer = 0.0f;
		mChangeSelState = 2;
		break;
	case 2:
		if (mChangeSelTimer > mChangeSelMaxTime) {
			setMode(ModePellet);
			mChangeSelTimer = mChangeSelMaxTime;
		}
		break;
	}

	if (mDoDraw) {
		mChangeSelTimer += sys->mDeltaTime;
		game->BaseGameSection::doUpdate();
	}
}

/**
 * @note Address: 0x802239B4
 * @note Size: 0xB4
 */
void ZukanState::execPellet(SingleGameSection* game)
{
	getMaxPelletID();
	int arg;
	int state = Screen::gGame2DMgr->check_ZukanItemRequest(arg);
	switch (state) {
	case 0:
		break;
	case 1:
		if (arg != mCurrentPelletIndex && !mDebugParms->mFlags.isSet(2) && mCurrMode == ModePellet) {
			mCurrentPelletIndex = arg;
			setMode(ModeChangePellet);
			mChangeSelState   = 0;
			mChangeSelTimer   = 0.0f;
			mChangeSelMaxTime = 0.0f;
		}
		break;
	}
	game->BaseGameSection::doUpdate();
}

/**
 * @note Address: 0x80223A68
 * @note Size: 0x3C
 */
int ZukanState::getMaxPelletID()
{
	int ota   = PelletList::Mgr::getCount(PelletList::PLK_Otakara);
	int items = PelletList::Mgr::getCount(PelletList::PLK_Item);
	return ota + items;
}

/**
 * @note Address: 0x80223AA4
 * @note Size: 0x7C
 */
PelletConfig* ZukanState::getCurrentPelletConfig(int id)
{
	PelletConfigList* list1 = PelletList::Mgr::getConfigList(PelletList::PLK_Otakara);
	PelletConfigList* list2 = PelletList::Mgr::getConfigList(PelletList::PLK_Item);
	int index;
	PelletList::cKind kind = convertPelletID(index, id);
	if (kind == PelletList::PLK_Otakara) {
		return list1->getPelletConfig(index);
	} else {
		return list2->getPelletConfig(index);
	}
}

/**
 * @note Address: 0x80223B20
 * @note Size: 0x80
 */
PelletList::cKind ZukanState::convertPelletID(int& ret, int id)
{
	PelletList::Mgr::getConfigList(PelletList::PLK_Otakara);
	PelletList::Mgr::getConfigList(PelletList::PLK_Item);
	int num = PelletList::Mgr::getCount(PelletList::PLK_Otakara);
	PelletList::Mgr::getCount(PelletList::PLK_Item);
	PelletList::cKind kind;
	if (id < num) {
		ret  = id;
		kind = PelletList::PLK_Otakara;
	} else {
		ret  = id - num;
		kind = PelletList::PLK_Item;
	}
	return kind;
}

/**
 * @note Address: 0x80223BA0
 * @note Size: 0x274
 */
void ZukanState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (mDoDraw) {
		mCamera->update();
		gfx.setupJ2DOrthoGraphDefault();
		gfx.mOrthoGraph.setPort();
		J2DFillBox(0.0f, 0.0f, getWindowWidth(), getWindowHeight(), mParms->mColorSetting.getActiveBgTopColor(),
		           mParms->mColorSetting.getActiveBgTopColor(), mParms->mColorSetting.getActiveBgBottomColor(),
		           mParms->mColorSetting.getActiveBgBottomColor());
		game->BaseGameSection::draw3D(gfx);
		drawLightEffect(game, gfx);
		mTexture2->capture(0, 0, (GXTexFmt)mTexture2->mTexInfo->mTextureFormat, false, 0);
		drawGradationEffect(game, gfx);
		mTexture2->capture(0, 0, GX_TF_RGB565, false, 0);
	}

	gfx.mOrthoGraph.setPort();
	J2DFillBox(0.0f, 0.0f, (u16)sys->getRenderModeWidth(), (u16)sys->getRenderModeHeight(), JUtility::TColor(0, 0, 0, 255));
	j3dSys.drawInit();
	game->BaseGameSection::draw2D(gfx);
}

/**
 * @note Address: 0x80223E14
 * @note Size: 0x578
 */
void ZukanState::drawGradationEffect(SingleGameSection*, Graphics& gfx)
{
	f32 focus = mCamera->getFocus();
	if (focus > 1.0f) {
		focus = 1.0f;
	}
	JUTTexture* tex = mTexture;
	tex->init();
	GXInvalidateTexAll();
	tex->capture(0, 0, GX_TF_RGB565, true, GX_FALSE);
	tex->capture(0, 0, GX_TF_RGB565, true, GX_FALSE);

	f32 min = 3.0f;
	f32 max = -min;
	for (int i = 0; i < 4; i++) {
		J2DPicture pic(tex);
		JUtility::TColor color(255, 255, 255, 127);
		{
			JUtility::TColor color3 = color;
			JUtility::TColor color2 = color;
			JUtility::TColor color1 = color;
			JUtility::TColor color0 = color;
			pic.setCornerColorRef(color0, color1, color2, color3);
		}
		GXSetAlphaUpdate(GX_FALSE);
		pic.draw(min, min, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		color.a -= 16;
		{
			JUtility::TColor color3 = color;
			JUtility::TColor color2 = color;
			JUtility::TColor color1 = color;
			JUtility::TColor color0 = color;
			pic.setCornerColorRef(color0, color1, color2, color3);
		}
		pic.draw(max, min, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		color.a -= 16;
		{
			JUtility::TColor color3 = color;
			JUtility::TColor color2 = color;
			JUtility::TColor color1 = color;
			JUtility::TColor color0 = color;
			pic.setCornerColorRef(color0, color1, color2, color3);
		}
		pic.draw(min, max, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		color.a -= 16;
		{
			JUtility::TColor color3 = color;
			JUtility::TColor color2 = color;
			JUtility::TColor color1 = color;
			JUtility::TColor color0 = color;
			pic.setCornerColorRef(color0, color1, color2, color3);
		}
		pic.draw(max, max, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		GXInvalidateTexAll();
		tex->capture(0, 0, GX_TF_RGB565, true, GX_FALSE);
	}

	gfx.setupJ2DOrthoGraphDefault();
	gfx.mOrthoGraph.setPort();

	J2DPicture pic(mTexture2);
	J2DPicture* picPtr = &pic;
	picPtr->insert(tex, pic.mTextureCount, 1.0f);
	f32 inv = 1.0f - focus;
	picPtr->setBlendColorRatio(inv, focus, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	picPtr->setBlendAlphaRatio(inv, focus, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	picPtr->draw(0.0f, 0.0f, 0, false, false, false);
}

/**
 * @note Address: 0x8022438C
 * @note Size: 0x7C0
 */
void ZukanState::drawLightEffect(SingleGameSection* game, Graphics& gfx)
{
	GXInvalidateTexAll();
	mTexture->capture(0, 0, GX_TF_RGB565, true, GX_FALSE);
	gfx.setupJ2DOrthoGraphDefault();
	gfx.mOrthoGraph.setPort();

	Vector3f sep = mCamera->mLookAtPosition - mCamera->mPosition;
	sep.normalise();

	Color4 color; // r30, r29, r28, r27
	if (mCurrMode == ModePellet) {
		sep.y += JMath::sincosTable_.mTable[113].first;
		sep.y /= JMath::sincosTable_.mTable[56].first;
		sep.y += 0.1f;
		color = mParms->mColorSetting.mActiveGlowColor;
	} else {
		sep.y += JMath::sincosTable_.mTable[85].first;
		sep.y /= JMath::sincosTable_.mTable[56].first;
		color = mParms->mColorSetting.mActiveGlowColor;
	}

	if (sep.y < 0.0f) {
		sep.y = 0.0f;
	} else if (sep.y > 1.0f) {
		sep.y = 1.0f;
	}

	_108 += mDebugParms->_1C[0] * (sep.y - _108);

	if (_108 > 0.0f) {
		f32 x = mWindowBounds.getWidth();  // f27
		f32 y = mWindowBounds.getHeight(); // f26

		mTexture->load(GX_TEXMAP0);
		GXSetNumChans(1);
		GXSetNumTevStages(1);
		GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_C0, GX_CC_TEXC, GX_CC_ZERO);
		GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_DIVIDE_2, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_A0, GX_CA_TEXA, GX_CA_ZERO);
		GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);
		GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_ONE, GX_LO_SET);
		GXSetZMode(GX_FALSE, GX_LESS, GX_FALSE);
		GXSetCurrentMtx(0);
		GXSetNumTexGens(1);
		GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEXCOORD0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);

		for (int i = 0; i < 4; i++) {
			f32 thisFactor = (f32)i / 4;
			f32 nextFactor = (f32)(i + 1) / 4;
			f32 factor     = (_108 - thisFactor) / (nextFactor); // f2
			if (factor > 1.0f) {
				factor = 1.0f;
			}

			if (factor > 0.0f) {
				f32 alphaF = factor * (f32)color.a;
				int alphaI = (alphaF >= 0.0f) ? 0.5f + alphaF : alphaF - 0.5f;
				color.a    = alphaI;
				GXSetTevColor(GX_TEVREG0, color.toGXColor());

				f32 v;
				f32 onePlusV;
				f32 u    = 0.005f * (f32)(i + 1);
				f32 zero = 0.0f;
				f32 one  = 1.0f;
				v        = -u;

				GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);
				GXPosition3f32(zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(u, v);

				GXPosition3f32(x + zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(one + u, v);

				GXPosition3f32(zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(u, one + v);

				GXPosition3f32(x + zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(one + u, one + v);

				GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);
				f32 v2   = -u;
				onePlusV = one + v2;
				GXPosition3f32(zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, v);

				GXPosition3f32(x + zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(onePlusV, v);

				GXPosition3f32(zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, onePlusV);

				GXPosition3f32(x + zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(onePlusV, onePlusV);

				GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);
				GXPosition3f32(zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(u, u);

				GXPosition3f32(x + zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(one + u, u);

				GXPosition3f32(zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(u, one + u);

				GXPosition3f32(x + zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(one + u, one + u);

				GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);
				GXPosition3f32(zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, u);

				GXPosition3f32(x + zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(onePlusV, u);

				GXPosition3f32(zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, 1.0f + u);

				GXPosition3f32(x + zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(onePlusV, 1.0f + u);
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x404
 */
void ZukanState::debugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80224B4C
 * @note Size: 0x994
 */
void ZukanState::dvdloadA()
{
	mMainHeap = JKRExpHeap::create(mParentHeap->getFreeSize(), mParentHeap, true);
	mMainHeap->becomeCurrentHeap();
	char path[PATH_MAX]; // 0x160
#if defined(VERSION_JP)
	const char* region = "jpn";
#elif defined(VERSION_PAL)
	const char* region = "pal";
#else
	const char* region = "us";
#endif
	sprintf(path, "user/Yamashita/zukan/%s/%s/arc.szs", region, sDirName[mMapIndex]);
	JKRArchive* arc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Tail);
	P2ASSERTLINE(2457, arc);
	mParms = new IllustratedBook::Parms;
	mParms->loadFile(arc);
	mGameSect->addGenNode(mParms);
	PSSystem::SingletonBase<PSM::ObjMgr>::newInstance();
	u16 width1    = sys->getRenderModeObj()->fbWidth;
	u16 width2    = sys->getRenderModeObj()->fbWidth;
	f32 quarter   = 0.25f;
	int newHeight = (int)((f32)width1 * 0.6f * 0.75f * quarter + 0.5f) * 4;
	int newWidth  = (int)((f32)width2 * 0.75f * quarter + 0.5f) * 4;
	Rectf bounds(0.0f, 0.0f, newWidth, newHeight);
	mWindowBounds = bounds;
	mCameraAspect = 0.0f;

	mTexture2             = new JUTTexture((int)getWindowWidth(), (int)getWindowHeight(), GX_TF_RGB565);
	mTexture2->mMinFilter = GX_NEAR;
	mTexture2->mMagFilter = GX_NEAR;
	mTexture              = new JUTTexture((int)getWindowWidth() / 2, (int)getWindowHeight() / 2, GX_TF_RGB565);
	mTexture->mMinFilter  = GX_NEAR;
	mTexture->mMagFilter  = GX_NEAR;
	mGameSect->useSpecificFBTexture(mTexture);
	mGameSect->setXfbBounds(mCameraAspect.x, mCameraAspect.y);

	Graphics* gfx = sys->mGfx;
	mCamera       = new IllustratedBook::Camera(mController);
	mDebugParms->add(mCamera);
	cameraMgr = new CameraMgr;
	cameraMgr->loadResource();
	cameraMgr->setZukanCamera(mCamera);
	mGameSect->addGenNode(cameraMgr);

	HorizonalSplitter* split = new HorizonalSplitter(gfx);
	split->split2(1.0f);
	Viewport* vp1 = gfx->getViewport(PLAYER1_VIEWPORT);
	Viewport* vp2 = gfx->getViewport(PLAYER2_VIEWPORT);
	vp1->mCamera  = mCamera;
	vp1->updateCameraAspect();
	vp2->mCamera = mCamera;
	vp2->updateCameraAspect();
	vp1->mOffset     = mCameraAspect;
	vp1->mSplitRatio = Vector2f(1.0f);
	vp1->setRect(mWindowBounds);

	particleMgr->setViewport(*gfx);
	particleMgr->start();
	shadowMgr = new ShadowMgr(2);

	gfx           = sys->mGfx;
	Viewport* vp3 = gfx->getViewport(PLAYER1_VIEWPORT);
	Viewport* vp4 = gfx->getViewport(PLAYER2_VIEWPORT);
	shadowMgr->setViewport(vp3, 0);
	shadowMgr->setViewport(vp4, 1);
	mGameSect->initLights();
	if (!rumbleMgr) {
		rumbleMgr = new RumbleMgr;
		rumbleMgr->loadResource();
		rumbleMgr->init();
		rumbleMgr->setZukanRumble(mController, &mCamera->mPosition);
		mGameSect->addGenNode(rumbleMgr);
	}

	PSGame::SceneInfo info;
	info.mCameras         = 1;
	info.mCam1Position[0] = mCamera->getSoundPositionPtr();
	info.mCam2Position[0] = mCamera->getSoundPositionPtr();
	info.mCameraMtx[0]    = mCamera->getSoundMatrixPtr();
	info.mBounds.i.set(-1000.0f, -1000.0f, -1000.0f);
	info.mBounds.f.set(1000.0f, 1000.0f, 1000.0f);
	info.setStageFlag(PSGame::SceneInfo::SCENEFLAG_Unk0, PSGame::SceneInfo::SFBS_1);
	info.mSceneType = PSGame::SceneInfo::PIKLOPEDIA;

	PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->newAndSetCurrentScene(info);

	mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->checkScene();
	mgr->mScenes->mChild->scene1stLoadSync();

	mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->checkScene();
	mgr->mScenes->mChild->startMainSeq();

	void* file = arc->getResource("course.txt");
	P2ASSERTLINE(2603, file);
	RamStream stream(file, -1);
	stream.setMode(STREAM_MODE_TEXT, 1);
	mCourseInfo = new CourseInfo;
	mCourseInfo->read(stream);
	mCourseInfo->dump();
	Stages::createMapMgr(mCourseInfo, nullptr);

	cellMgr     = new CellPyramid;
	platCellMgr = nullptr;
	BoundBox2d bound(12800000.0f, 12800000.0f, -12800000.0f, -12800000.0f);
	mapMgr->getBoundBox2d(bound);
	JKRGetCurrentHeap()->getFreeSize();
	cellMgr->create(bound, 64.0f);
	gameSystem->addObjectMgr(mapMgr);

	naviMgr->alloc(2);
	ResultTexMgr::Arg arg;
	arg.mHeap              = JKRGetCurrentHeap();
	arg.mOtakaraConfigList = PelletOtakara::mgr->mConfigList;
	arg.mItemConfigList    = PelletItem::mgr->mConfigList;
	mResultTexture         = new ResultTexMgr::Mgr;
	mResultTexture->create(arg);
	mEnemyTexMgr = new IllustratedBook::EnemyTexMgr;
	mEnemyTexMgr->create();

	IllustratedBook::Parms::sCamera     = mCamera;
	IllustratedBook::Parms::sZukanState = this;
	arc->unmount();
}

/**
 * @note Address: 0x802254E0
 * @note Size: 0xE4
 */
void ZukanState::createTeki(int)
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Objects* scene = static_cast<PSM::Scene_Objects*>(mgr->getChildScene());
	scene->detachObjMgr();

	sys->dvdLoadUseCallBack(&mDvdThread, mDelegateLoadEnemy);
	mDoDraw = false;
}

/**
 * @note Address: 0x802255C4
 * @note Size: 0x40
 */
void ZukanState::createPellet(int)
{
	sys->dvdLoadUseCallBack(&mDvdThread, mDelegateLoadPellet);
	mDoDraw = false;
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void ZukanState::dvdloadB_common()
{
	if (mCurrObjHeap) {
		if (generalEnemyMgr) {
			clearHeapB_teki();
		} else if (mCurrentPellet) {
			clearHeapB_pellet();
		} else {
			clearHeapB_common();
			mMainHeap->becomeCurrentHeap();
		}
	}
	mHeapSize = mMainHeap->getFreeSize();
	OSReport("\n");
	OSReport("FreeSizeA :%d \n", mHeapSize);
	mCurrObjHeap = JKRExpHeap::create(mMainHeap->getFreeSize(), mMainHeap, true);
	mCurrObjHeap->becomeCurrentHeap();

	pikiMgr->alloc(MAX_PIKI_COUNT);
	particleMgr->mLightMgr = mGameSect->mLightMgr;
	particleMgr->start();
}

/**
 * @note Address: 0x80225604
 * @note Size: 0xCDC
 */
void ZukanState::dvdloadB_teki()
{
	dvdloadB_common();
	if (mCurrentEnemyIndex == Game::EnemyTypeID::EnemyID_Pelplant) {
		OSReport("ペレット草なのでペレットをロードします free:%d \n", JKRGetCurrentHeap()->getFreeSize()); // "pellet grass so load pellets"
		PelletNumber::mgr->setupResources();
		OSReport("だした free:%d \n", JKRGetCurrentHeap()->getFreeSize()); // "started"
	}
	P2ASSERTLINE(2747, !generalEnemyMgr);
	generalEnemyMgr = new GeneralEnemyMgr;
	gameSystem->addObjectMgr(generalEnemyMgr);
	if (mCurrentEnemyIndex != -1) {
		P2ASSERTBOUNDSLINE(2753, 0, mCurrentEnemyIndex, EnemyTypeID::EnemyID_COUNT);

		IllustratedBook::EnemyParms* parms = &mParms->mEnemyParms.mEnemyParms[mCurrentEnemyIndex];
		int id                             = 0;
		if (parms->mGroupID < 10) {
			id = parms->mGroupID;
		} else {
			parms->mGroupID = 0;
		}
		f32 range                                = parms->mParms.mAppearRange(); // f31
		IllustratedBook::PositionParms* posParms = &mParms->mPosParmsList.mParms[id];
		u8 count                                 = parms->mParms.mAppearNum(); // r25
		Vector3f posOffset;
		posOffset.set(posParms->mParms.mAppearPosX(), posParms->mParms.mAppearPosY(), posParms->mParms.mAppearPosZ()); // f30, f29, f28

		OSReport("敵をアロック %d匹　free:%d \n", count, JKRGetCurrentHeap()->getFreeSize());
		bool makeSpectralids = false;
		TekiStat::Info* info = playData->mTekiStatMgr.getTekiInfo(mCurrentEnemyIndex);
		if (info && info->mKilledTekiCount > 16) {
			makeSpectralids = true;
		}

		if (makeSpectralids) {
			switch (mCurrentEnemyIndex) {
			case EnemyTypeID::EnemyID_Chappy:
			case EnemyTypeID::EnemyID_BlueChappy:
			case EnemyTypeID::EnemyID_YellowChappy:
				generalEnemyMgr->addEnemyNum(EnemyTypeID::EnemyID_ShijimiChou, 5, nullptr);
				break;
			}
		}

		generalEnemyMgr->addEnemyNum(mCurrentEnemyIndex, count, nullptr);
		generalEnemyMgr->allocateEnemys(1, ENEMY_HEAP_SIZE_ZUKAN);
		generalEnemyMgr->setupSoundViewerAndBas();

		f32 size = 35.0f; // f27
		if (parms->mParms.mSize()) {
			size = parms->mParms.mSize();
		}

		Vector3f* spawnPositions = new Vector3f[count]; // r29
		Vector3f* tempPositions  = new Vector3f[count]; // r28
		for (int i = 0; i < count; i++) {
			// first enemy, set position to zero
			if (i == 0) {
				spawnPositions[i] = 0.0f;
				continue;
			}
			// other enemies, randomly distribute in circle of radius `range`
			f32 randAngle = TAU * randFloat(); // f26
			f32 radius    = range * randFloat();

			spawnPositions[i] = Vector3f(radius * sinf(randAngle), 0.0f, radius * cosf(randAngle));
		}

		// jitter positions (5 iterations)
		for (int i = 0; i < 5; i++) {
			// set temp vectors to zero
			for (int j = 0; j < count; j++) {
				tempPositions[j].setZero();
			}

			// jitter temp positions in pairs
			for (int j = 0; j < count; j++) {
				for (int k = j + 1; k < count; k++) {
					Vector3f sep = spawnPositions[j] - spawnPositions[k];
					f32 dist     = sep.magnitude();

					if (dist < size) {
						sep.normalise();

						f32 factor = 0.5f * (size - dist);
						sep *= factor;
						tempPositions[j] += sep;
						tempPositions[k] -= sep;
					}
				}
			}

			// update spawn positions with jittered positions (and make sure they're on the floor)
			for (int j = 0; j < count; j++) {
				spawnPositions[j] += tempPositions[j];
				spawnPositions[j].y = mapMgr->getMinY(spawnPositions[j]);
			}
		}

		// spawn enemies
		for (int i = 0; i < count; i++) {
			EnemyBirthArg arg;
			// first enemy faces set direction, others face randomly
			if (i == 0) {
				arg.mFaceDir = 0.0f;
			} else {
				arg.mFaceDir = TAU * randFloat();
			}

			arg.mPosition = spawnPositions[i];
			arg.mPosition += posOffset;

			// make sure enemies spawn on the floor
			arg.mPosition.y = mapMgr->getMinY(arg.mPosition);

			EnemyBase* enemy = generalEnemyMgr->birth(mCurrentEnemyIndex, arg);
			if (!enemy) {
				JUT_PANICLINE(2879, "** BIRTH FAILED !! ID:%d \n", mCurrentEnemyIndex);
			} else {
				enemy->init(nullptr);
				if (i == 0) { // make first enemy "current" enemy
					mCurrentEnemy = enemy;
				}
			}
		}

		delete spawnPositions;
		delete tempPositions;

		if (makeSpectralids) {
			switch (mCurrentEnemyIndex) {
			case EnemyTypeID::EnemyID_Chappy:
			case EnemyTypeID::EnemyID_BlueChappy:
			case EnemyTypeID::EnemyID_YellowChappy:
				ShijimiChou::Mgr* mgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
				if (mgr) {
					EnemyBirthArg arg;
					arg.mPosition = mCurrentEnemy->getPosition();
					arg.mPosition.y += 45.0f;
					arg.mFaceDir = randFloat() * TAU;
					mgr->createGroupByEnemy(arg, mCurrentEnemy, 5, false);
				}
				break;
			}
		}

		mCamera->setTarget(mCurrentEnemy);
		mCamera->setAtOffset(
		    Vector3f(parms->mCameraParms.mParms.mOffsetX(), parms->mCameraParms.mParms.mOffsetY(), parms->mCameraParms.mParms.mOffsetZ()));
		mCamera->mObjectRadius  = parms->mCameraParms.mParms.mRadius();
		mCamera->mCurrentHeight = parms->mCameraParms.mParms.mInitialHeight();
		mCamera->setMinMaxHeight(parms->mCameraParms.mParms.mMinHeight(), parms->mCameraParms.mParms.mMaxHeight());
		mCamera->setViewAngleParms(parms->mCameraParms.mParms.mInitialViewAngle(), parms->mCameraParms.mParms.mMinViewAngle(),
		                           parms->mCameraParms.mParms.mMaxViewAngle());

		mCamera->mHorizontalAngle = TORADIANS(parms->mCameraParms.mParms.mInitialRotation());

		int initCarrotCount = 0;

		// buried enemies (snagrets and shears) spawn 10 carrots to start
		switch (mCurrentEnemyIndex) {
		case EnemyTypeID::EnemyID_SnakeCrow:
		case EnemyTypeID::EnemyID_SnakeWhole:
		case EnemyTypeID::EnemyID_UjiA:
		case EnemyTypeID::EnemyID_UjiB:
		case EnemyTypeID::EnemyID_Tobi:
			initCarrotCount = 10;
			break;
		}

		if (initCarrotCount <= 0) {
			return;
		}

		for (int i = 0; i < initCarrotCount; i++) {
			Piki* piki = pikiMgr->birth();
			if (piki) {
				PikiInitArg initArg(PIKISTATE_Carrot);
				piki->init(&initArg);
				piki->changeShape(Carrot);

				Vector3f lookAtPos = mCamera->getLookAtPosition();

				Vector3f viewVec;
				viewVec = mCamera->getViewVector();
				viewVec.length(); // unused + regswaps

				f32 randAngle = TAU * randFloat();
				f32 randDist  = 100.0f * randFloat();

				Vector3f direction = Vector3f(randDist * sinf(randAngle), 0.0f, randDist * cosf(randAngle));
				Vector3f position  = (lookAtPos + direction);
				position.y += 200.0f;

				piki->setPosition(position, false);

				piki->mFaceDir = TAU * randFloat();
			}
		}

		return;
	}

	IllustratedBook::EnemyParms* parm = mParms->mEnemyParms.mEnemyParms;
	Vector3f pos(mParms->mPosParmsList.mParms[0].mParms.mAppearPosX(), mParms->mPosParmsList.mParms[0].mParms.mAppearPosY(),
	             mParms->mPosParmsList.mParms[0].mParms.mAppearPosZ());
	mCamera->move(pos);
	mCamera->setAtOffset(
	    Vector3f(parm->mCameraParms.mParms.mOffsetX(), parm->mCameraParms.mParms.mOffsetY(), parm->mCameraParms.mParms.mOffsetZ()));
	mCamera->mObjectRadius  = parm->mCameraParms.mParms.mRadius();
	mCamera->mCurrentHeight = parm->mCameraParms.mParms.mInitialHeight();
	mCamera->setMinMaxHeight(parm->mCameraParms.mParms.mMinHeight(), parm->mCameraParms.mParms.mMaxHeight());
	mCamera->setViewAngleParms(parm->mCameraParms.mParms.mInitialViewAngle(), parm->mCameraParms.mParms.mMinViewAngle(),
	                           parm->mCameraParms.mParms.mMaxViewAngle());
	mCamera->mHorizontalAngle = TORADIANS(parm->mCameraParms.mParms.mInitialRotation());
}

/**
 * @note Address: 0x802262E0
 * @note Size: 0x4B0
 */
void ZukanState::dvdloadB_pellet()
{
	dvdloadB_common();
	IllustratedBook::ItemParms* parm;
	if (mCurrentPelletIndex != -1) {
		parm   = &mParms->mItemParms.mItemParms[mCurrentPelletIndex];
		int id = 0;
		if (parm->mGroupID < 10) {
			id = parm->mGroupID;
		} else {
			parm->mGroupID = 0;
		}
		IllustratedBook::PositionParms* posParms = &mParms->mPosParmsList.mParms[id];
		PelletInitArg arg;
		PelletConfig* config = getCurrentPelletConfig(mCurrentPelletIndex);
		int index;
		arg.mPelletType = convertPelletID(index, mCurrentPelletIndex);

		arg.mTextIdentifier = config->mParams.mName.mData;
		arg.mPelletColor    = 0;
		arg.mPelletIndex    = index;
		arg.mState          = PelBirthType_Piklopedia;
		pelletMgr->setUse(&arg);
		if (arg.mPelletType == PelletList::PLK_Otakara) {
			PelletOtakara::mgr->setupResources();
		} else {
			PelletItem::mgr->setupResources();
		}
		mCurrentPellet = pelletMgr->birth(&arg);
		if (mCurrentPellet) {
			Vector3f pos(posParms->mParms.mAppearPosX.mValue + parm->mParms.mOffsetX.mValue, posParms->mParms.mAppearPosY.mValue,
			             posParms->mParms.mAppearPosZ.mValue + parm->mParms.mOffsetZ.mValue);
			pos.y = parm->mParms.mOffsetY.mValue + (mCurrentPellet->getCylinderHeight() * 0.5f + mapMgr->getMinY(pos));
			mCurrentPellet->setPosition(pos, false);
			mCamera->setTarget(mCurrentPellet);
			mCamera->setAtOffset(Vector3f(parm->mCameraParms.mParms.mOffsetX.mValue, parm->mCameraParms.mParms.mOffsetY.mValue,
			                              parm->mCameraParms.mParms.mOffsetZ.mValue));
			mCamera->mObjectRadius  = parm->mCameraParms.mParms.mRadius.mValue;
			mCamera->mCurrentHeight = parm->mCameraParms.mParms.mInitialHeight.mValue;
			mCamera->setMinMaxHeight(parm->mCameraParms.mParms.mMinHeight.mValue, parm->mCameraParms.mParms.mMaxHeight.mValue);
			mCamera->setViewAngleParms(parm->mCameraParms.mParms.mInitialViewAngle.mValue, parm->mCameraParms.mParms.mMinViewAngle.mValue,
			                           parm->mCameraParms.mParms.mMaxViewAngle.mValue);
			mCamera->mHorizontalAngle = parm->mCameraParms.mParms.mInitialRotation.mValue * DEG2RAD * PI;
		}

	} else {
		IllustratedBook::Parms* mainParms = mParms;
		parm                              = &mainParms->mItemParms.mItemParms[0];
		mCurrentPellet                    = nullptr;
		Vector3f pos(mainParms->mPosParmsList.mParms[0].mParms.mAppearPosX.mValue + parm->mParms.mOffsetX.mValue,
		             mainParms->mPosParmsList.mParms[0].mParms.mAppearPosY.mValue + parm->mParms.mOffsetY.mValue,
		             mainParms->mPosParmsList.mParms[0].mParms.mAppearPosZ.mValue + parm->mParms.mOffsetZ.mValue);
		mCamera->move(pos);
	}

	mCamera->setAtOffset(Vector3f(parm->mCameraParms.mParms.mOffsetX.mValue, parm->mCameraParms.mParms.mOffsetY.mValue,
	                              parm->mCameraParms.mParms.mOffsetZ.mValue));
	mCamera->mObjectRadius  = parm->mCameraParms.mParms.mRadius.mValue;
	mCamera->mCurrentHeight = parm->mCameraParms.mParms.mInitialHeight.mValue;
	mCamera->setMinMaxHeight(parm->mCameraParms.mParms.mMinHeight.mValue, parm->mCameraParms.mParms.mMaxHeight.mValue);
	mCamera->setViewAngleParms(parm->mCameraParms.mParms.mInitialViewAngle.mValue, parm->mCameraParms.mParms.mMinViewAngle.mValue,
	                           parm->mCameraParms.mParms.mMaxViewAngle.mValue);
	mCamera->mHorizontalAngle = TORADIANS(parm->mCameraParms.mParms.mInitialRotation.mValue);
}

/**
 * @note Address: 0x80226790
 * @note Size: 0x90
 */
void ZukanState::clearHeapB_common()
{
	if (Farm::farmMgr) {
		Farm::farmMgr->initAllFarmObjectNodes();
	}
	pelletMgr->resetMgrs();
	cellMgr->clearAllCollBuffer();
	cellMgr->clear();
	particleMgr->killAll();
	particleMgr->reset();
	shadowMgr->killAll();
	rumbleMgr->stopRumble(RUMBLEID_Both);
	mCurrObjHeap->freeAll();
	mCurrObjHeap->destroy();
	mCurrObjHeap = nullptr;
}

/**
 * @note Address: 0x80226820
 * @note Size: 0x3BC
 */
void ZukanState::clearHeapB_teki()
{
	if (mCurrObjHeap) {
		Pellet* buffer[200];
		int i = 0;
		PelletIterator iterator;
		CI_LOOP(iterator)
		{
			// you know, just in case you had 200 pellets loaded at once
			Pellet* pelt = *iterator;
			if (i < 200) {
				buffer[i++] = pelt;
			} else {
				JUT_PANICLINE(3164, "too many pellet\n");
			}
		}
		for (int j = 0; j < i; j++) {
			buffer[j]->kill(nullptr);
		}
		pelletMgr->resetMgrs();
		dynParticleMgr->resetMgr();

		int j = 0;
		Piki* buffer2[200];
		Iterator<Piki> iterator2(pikiMgr);
		CI_LOOP(iterator2)
		{
			buffer2[j++] = *iterator2;
		}

		PikiKillArg arg(CKILL_DontCountAsDeath | CKILL_Unk17);
		for (int k = 0; k < j; k++) {
			buffer2[k]->kill(&arg);
		}
		pikiMgr->resetMgr();
		if (generalEnemyMgr) {
			generalEnemyMgr->killAll();
			gameSystem->detachObjectMgr(generalEnemyMgr);
			generalEnemyMgr = nullptr;
			mCurrentEnemy   = nullptr;
		}

		clearHeapB_common();
	}
	mMainHeap->becomeCurrentHeap();
}

/**
 * @note Address: 0x80226BDC
 * @note Size: 0x174
 */
void ZukanState::clearHeapB_pellet()
{
	if (mCurrObjHeap) {
		if (mCurrentPellet) {
			Pellet* buffer[200];
			int i = 0;
			PelletIterator iterator;
			CI_LOOP(iterator)
			{
				// you know, just in case you had 200 pellets loaded at once
				Pellet* pelt = *iterator;
				if (i < 200) {
					buffer[i++] = pelt;
				} else {
					JUT_PANICLINE(3221, "too many pellet\n");
				}
			}
			for (int j = 0; j < i; j++) {
				buffer[j]->kill(nullptr);
			}
			pelletMgr->resetMgrs();
			dynParticleMgr->resetMgr();
			mCurrentPellet = nullptr;
		}
		clearHeapB_common();
	}
	mMainHeap->becomeCurrentHeap();
}

/**
 * @note Address: 0x80226D50
 * @note Size: 0x3AC
 */
void ZukanState::clearHeaps()
{
	pikiMgr->resetMgr();
	if (mCurrentEnemy) {
		clearHeapB_teki();
	} else if (mCurrentPellet) {
		clearHeapB_pellet();
	} else {
		clearHeapB_common();
	}
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	mgr->deleteCurrentScene();
	delete PSSystem::SingletonBase<PSM::ObjMgr>::sInstance;
	PSSystem::SingletonBase<PSM::ObjMgr>::sInstance = nullptr;
	if (mMainHeap) {
		mGameSect->restoreFBTexture();
		if (generalEnemyMgr) {
			gameSystem->detachObjectMgr(generalEnemyMgr);
			generalEnemyMgr = nullptr;
		}
		gameSystem->detachObjectMgr(mapMgr);
		mGameSect->mLightMgr->del();
		mGameSect->mLightMgr = nullptr;
		mapMgr               = nullptr;
		mCamera->del();
		mCamera = nullptr;
		cameraMgr->del();
		cameraMgr = nullptr;
		shadowMgr->del();
		shadowMgr = nullptr;
		rumbleMgr->del();
		rumbleMgr = nullptr;
		mGameSect = nullptr;
		sys->mGfx->deleteViewports();
		cellMgr = nullptr;
		naviMgr->resetMgr();
		mParms->del();
		mDebugParms->del();
		mMainHeap->destroy();
	}
	Screen::gGame2DMgr->mScreenMgr->reset();
	if (mParentHeap) {
		mExtraHeapFor2D->destroy();
		mExtraHeapFor2D = nullptr;
		mParentHeap->destroy();
	}
	mCurrObjHeap = nullptr;
	mMainHeap    = nullptr;
	mParentHeap  = nullptr;
}

/**
 * @note Address: 0x802270FC
 * @note Size: 0xA8
 */
void ZukanState::cleanup(SingleGameSection* game)
{
	Screen::gGame2DMgr->mScreenMgr->reset();
	gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
	particle2dMgr->killAll();
	gameSystem->mMode                  = GSM_STORY_MODE;
	gameSystem->mTimeMgr->mSpeedFactor = 1.0f;
	mBackupHeap->becomeCurrentHeap();
	JUT_ASSERTLINE(3346, (int)mBackupHeap->getFreeSize() == sParentHeapFreeSize, "damek\n");
}

} // namespace SingleGame
} // namespace Game
