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
#include "PSGame/SceneInfo.h"
#include "PSM/Scene.h"
#include "Splitter.h"
#include "nans.h"

int sParentHeapFreeSize;

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
			char buffer[64];
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

	mMovementVelocity += (cameraPos - mGoalPosition) * 0.1f;
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
		sep = Vector3f(0.0f, -1.0f, 0.0f);
	}

	Vector3f vec2(mCurrentShakeMagnitude.x + mHorizontalInputDampened, mCurrentShakeMagnitude.y + mVerticalInputDampened,
	              mCurrentShakeMagnitude.z);

	Vector3f yAxis(0.0f, 1.0f, 0.0f);
	Vector3f crossVec  = cross(sep, yAxis);
	Vector3f crossVec2 = cross(crossVec, yAxis);

	mTrueCurrentPhysicalPos.x = crossVec2.x * vec2.z + ((yAxis.x * vec2.y) + ((crossVec.x * vec2.x) + (mGoalPosition.x + mObjectOffset.x)));
	mTrueCurrentPhysicalPos.y = crossVec2.y * vec2.z + ((yAxis.y * vec2.y) + ((crossVec.y * vec2.x) + (mGoalPosition.y + mObjectOffset.y)));
	mTrueCurrentPhysicalPos.z = crossVec2.z * vec2.z + ((yAxis.z * vec2.y) + ((crossVec.z * vec2.x) + (mGoalPosition.z + mObjectOffset.z)));

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
	f32 fov = absF(mCurrViewAngle - mViewAngle);
	f32 y   = absF(mCurrentHorizontalInput - mHorizontalInputDampened);
	f32 x   = absF(mCurrentVerticalInput - mVerticalInputDampened);
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
	/*
	lfs      f1, 0x288(r3)
	lfs      f0, 0x28(r3)
	lfs      f3, 0x27c(r3)
	fsubs    f4, f1, f0
	lfs      f2, 0x278(r3)
	lfs      f1, 0x284(r3)
	lfs      f0, 0x280(r3)
	fsubs    f3, f3, f2
	fabs     f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051A11C@sda21(r2)
	fabs     f3, f3
	frsp     f1, f4
	fabs     f4, f2
	frsp     f2, f3
	fcmpo    cr0, f1, f0
	frsp     f1, f4
	bgt      lbl_8022240C
	lfs      f0, lbl_8051A190@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8022240C
	fcmpo    cr0, f2, f0
	ble      lbl_8022241C

lbl_8022240C:
	lfs      f1, 0x294(r3)
	lfs      f0, lbl_8051A110@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x294(r3)

lbl_8022241C:
	lfs      f1, lbl_8051A1B0@sda21(r2)
	lfs      f0, 0x294(r3)
	lfs      f3, lbl_8051A1AC@sda21(r2)
	fsubs    f2, f1, f0
	lfs      f1, 0x298(r3)
	lfs      f0, lbl_8051A148@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x298(r3)
	lfs      f1, 0x298(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8022244C
	stfs     f0, 0x298(r3)

lbl_8022244C:
	lfs      f1, 0x298(r3)
	lfs      f0, lbl_8051A1B4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80222460
	stfs     f0, 0x298(r3)

lbl_80222460:
	lfs      f2, 0x298(r3)
	lfs      f1, 0x29c(r3)
	lfs      f0, lbl_8051A11C@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x298(r3)
	lfs      f2, 0x294(r3)
	lfs      f1, 0x298(r3)
	fadds    f1, f2, f1
	stfs     f1, 0x294(r3)
	lfs      f1, 0x294(r3)
	fcmpo    cr0, f1, f0
	blelr
	stfs     f0, 0x294(r3)
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
f32 Camera::getFocus()
{
	f32 focus = FABS(mFocusLevel);
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

static const char* modeNames[9]
    = { "StartTeki", "StartPellet", "ModeChangeToTeki", "Teki", "ChangeTeki", "ModeChangeToPellet", "Pellet", "ChangePellet", "None" };
// supposed to be pointers to the above strings, but I cant get that to work, this fixes the size of rodata for now
static const u32 dumb[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void ZukanState::startTekiMode(bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void ZukanState::startPelletMode(bool)
{
	// UNUSED FUNCTION
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
				setMode(ModeChangeToPellet);
				Morimura::DispMemberZukanItem disp;
				disp.mDebugExpHeap  = mExtraHeapFor2D;
				disp.mTexture       = mTexture2;
				disp.mEnemyTexMgr   = mEnemyTexMgr;
				disp.mResultTexMgr  = mResultTexture;
				disp.mPrevSelection = &_114;
				Screen::gGame2DMgr->open_ZukanItem(disp);
				startWipe(0.0f);
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
				setMode(ModeChangeToTeki);
				Morimura::DispMemberZukanEnemy disp;
				disp.mDebugExpHeap  = mExtraHeapFor2D;
				disp.mTexture       = mTexture2;
				disp.mEnemyTexMgr   = mEnemyTexMgr;
				disp.mResultTexMgr  = mResultTexture;
				disp.mPrevSelection = &_110;
				Screen::gGame2DMgr->open_ZukanEnemy(disp);
				startWipe(0.0f);
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
				setMode(ModeChangeToTeki);
				Morimura::DispMemberZukanEnemy disp;
				disp.mDebugExpHeap  = mExtraHeapFor2D;
				disp.mTexture       = mTexture2;
				disp.mEnemyTexMgr   = mEnemyTexMgr;
				disp.mResultTexMgr  = mResultTexture;
				disp.mPrevSelection = &_110;
				Screen::gGame2DMgr->open_ZukanEnemy(disp);
				startWipe(0.0f);
				return;
			}

			// start pellet
			setMode(ModeChangeToPellet);
			Morimura::DispMemberZukanItem disp;
			disp.mDebugExpHeap  = mExtraHeapFor2D;
			disp.mTexture       = mTexture2;
			disp.mEnemyTexMgr   = mEnemyTexMgr;
			disp.mResultTexMgr  = mResultTexture;
			disp.mPrevSelection = &_114;
			Screen::gGame2DMgr->open_ZukanItem(disp);
			startWipe(0.0f);
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

			Vector3f viewVec = mCamera->getViewVector();
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
			Vector3f perpVec = cross(velocity, yAxis);
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
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stmw     r26, 0xa8(r1)
	mr       r29, r3
	lwz      r3, 0x90(r3)
	mr       r30, r4
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80223724
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       getZukanEnemyCurrSelectId__Q26Screen9Game2DMgrFv
	cmpwi    r3, -1
	beq      lbl_80223724
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isAppearConfirmWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80223724
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80223724
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q24Game11PikiInitArg@ha
	addi     r0, r5, __vt__Q24Game15CreatureInitArg@l
	li       r5, 0x20
	stw      r0, 0x64(r1)
	addi     r6, r4, __vt__Q24Game11PikiInitArg@l
	li       r0, 0
	addi     r4, r1, 0x64
	stw      r6, 0x64(r1)
	stw      r5, 0x68(r1)
	stw      r0, 0x6c(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r31
	li       r4, 6
	bl       changeShape__Q24Game4PikiFi
	lwz      r4, 0x98(r29)
	addi     r3, r1, 0x24
	bl       getLookAtPosition__6CameraFv
	lwz      r4, 0x98(r29)
	addi     r3, r1, 0x18
	lfs      f31, 0x24(r1)
	lwz      r12, 0(r4)
	lfs      f30, 0x28(r1)
	lwz      r12, 0x4c(r12)
	lfs      f29, 0x2c(r1)
	mtctr    r12
	bctrl
	lfs      f28, 0x18(r1)
	addi     r3, r1, 0xc
	lfs      f27, 0x1c(r1)
	lfs      f26, 0x20(r1)
	lwz      r4, 0x98(r29)
	bl       getViewVector__11CullFrustumFv
	lfs      f0, 0x10(r1)
	lfs      f2, 0x14(r1)
	fmuls    f3, f0, f0
	lfs      f1, 0xc(r1)
	fmuls    f2, f2, f2
	lfs      f0, lbl_8051A128@sda21(r2)
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x74(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0x70(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0x70(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f25, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x7c(r1)
	fmr      f3, f25
	lfs      f0, lbl_8051A128@sda21(r2)
	stw      r0, 0x78(r1)
	lfd      f2, lbl_8051A188@sda21(r2)
	fcmpo    cr0, f25, f0
	lfd      f0, 0x78(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051A124@sda21(r2)
	fdivs    f1, f2, f1
	fmuls    f4, f0, f1
	bge      lbl_80223488
	fneg     f3, f25

lbl_80223488:
	lfs      f2, lbl_8051A194@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A128@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	fcmpo    cr0, f25, f0
	fctiwz   f0, f1
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f3, f4, f0
	bge      lbl_802234E4
	lfs      f0, lbl_8051A198@sda21(r2)
	fmuls    f0, f25, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802234FC

lbl_802234E4:
	fmuls    f0, f25, f2
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802234FC:
	fmuls    f2, f4, f0
	lfs      f1, lbl_8051A128@sda21(r2)
	fadds    f0, f29, f3
	stfs     f28, 0x58(r1)
	fadds    f1, f30, f1
	fadds    f2, f31, f2
	fsubs    f0, f0, f26
	stfs     f27, 0x5c(r1)
	fsubs    f1, f1, f27
	fsubs    f2, f2, f28
	stfs     f26, 0x60(r1)
	stfs     f1, 0x50(r1)
	stfs     f2, 0x4c(r1)
	stfs     f0, 0x54(r1)
	lwz      r3, 0x104(r29)
	lfs      f3, 0x28(r3)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x9c(r1)
	mr       r3, r31
	lwz      r5, 0x104(r29)
	addi     r4, r1, 0x4c
	stw      r0, 0x98(r1)
	lfd      f1, lbl_8051A188@sda21(r2)
	lfd      f0, 0x98(r1)
	lfs      f3, lbl_8051A178@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, 0x30(r5)
	lfs      f0, 0x2c(r5)
	lfs      f2, 0x50(r1)
	fdivs    f3, f4, f3
	fmadds   f0, f1, f3, f0
	fadds    f0, f2, f0
	stfs     f0, 0x50(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x4c(r1)
	lfs      f1, 0x50(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x54(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051A128@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802235F8
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_802235FC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802235FC

lbl_802235F8:
	fmr      f3, f1

lbl_802235FC:
	lfs      f0, lbl_8051A128@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80223634
	lfs      f0, lbl_8051A11C@sda21(r2)
	lfs      f2, 0x4c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x50(r1)
	lfs      f0, 0x54(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)

lbl_80223634:
	lfs      f0, 0x50(r1)
	addi     r4, r1, 0x58
	lfs      f1, lbl_8051A128@sda21(r2)
	lfs      f7, 0x4c(r1)
	fmuls    f6, f0, f1
	lfs      f2, lbl_8051A11C@sda21(r2)
	lfs      f5, 0x54(r1)
	fmuls    f0, f7, f1
	lwz      r5, 0x104(r29)
	fnmsubs  f4, f5, f2, f6
	lfs      f3, 0x20(r5)
	fmsubs   f0, f5, f1, f0
	fmsubs   f6, f7, f2, f6
	lfs      f2, 0x58(r1)
	fmuls    f4, f4, f3
	fmuls    f5, f0, f3
	lfs      f1, 0x5c(r1)
	fmuls    f6, f6, f3
	lfs      f0, 0x60(r1)
	fadds    f2, f2, f4
	fadds    f1, f1, f5
	fadds    f0, f0, f6
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x58(r1)
	stfs     f1, 0x5c(r1)
	stfs     f0, 0x60(r1)
	lfs      f0, 0x24(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x5c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_8051A180@sda21(r2)
	lfs      f0, 0x5c(r1)
	fadds    f1, f2, f1
	fcmpo    cr0, f0, f1
	bge      lbl_802236D0
	stfs     f1, 0x5c(r1)

lbl_802236D0:
	mr       r3, r31
	addi     r4, r1, 0x58
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x9c(r1)
	li       r4, 0x3858
	lfd      f3, lbl_8051A188@sda21(r2)
	li       r5, 0
	stw      r0, 0x98(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0x98(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x1fc(r31)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80223724:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isAppearConfirmWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802237DC
	lwz      r3, 0x90(r29)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_802237DC
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802237DC
	beq      lbl_80223758
	addi     r3, r3, 4

lbl_80223758:
	li       r0, 0
	stw      r3, 0x44(r1)
	addi     r3, r1, 0x3c
	stw      r0, 0x48(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x40(r1)
	bl       "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game12InteractDope@ha
	addi     r26, r4, __vt__Q24Game11Interaction@l
	li       r31, 1
	addi     r28, r3, __vt__Q24Game12InteractDope@l
	li       r27, 0
	b        lbl_802237D0

lbl_80223790:
	lwz      r12, 0(r3)
	lwz      r4, 0x40(r1)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	stw      r26, 0x30(r1)
	addi     r4, r1, 0x30
	stw      r27, 0x34(r1)
	stw      r28, 0x30(r1)
	stw      r31, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0x3c
	bl       "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_802237D0:
	lwz      r3, 0x3c(r1)
	cmplwi   r3, 0
	bne      lbl_80223790

lbl_802237DC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl       check_ZukanEnemyRequest__Q26Screen9Game2DMgrFRi
	cmpwi    r3, 1
	beq      lbl_802237F8
	bge      lbl_80223820
	b        lbl_80223820

lbl_802237F8:
	lwz      r4, 8(r1)
	lwz      r0, 0xa0(r29)
	cmpw     r4, r0
	beq      lbl_80223820
	lwz      r3, 0x104(r29)
	lhz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80223820
	mr       r3, r29
	bl       createEnemy__Q34Game10SingleGame10ZukanStateFi

lbl_80223820:
	mr       r3, r30
	bl       doUpdate__Q24Game15BaseGameSectionFv
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	lmw      r26, 0xa8(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
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
		J2DFillBox(0.0f, 0.0f, getWindowWidth(), getWindowHeight(), mParms->mColorSetting.getActiveColorA(),
		           mParms->mColorSetting.getActiveColorA(), mParms->mColorSetting.getActiveColorB(),
		           mParms->mColorSetting.getActiveColorB());
		game->BaseGameSection::draw3D(gfx);
		drawLightEffect(game, gfx);
		mTexture2->capture(0, 0, (GXTexFmt)mTexture2->mTexInfo->mTextureFormat, false, 0);
		drawGradationEffect(game, gfx);
		mTexture2->capture(0, 0, GX_TF_RGB565, false, 0);
	}

	gfx.mOrthoGraph.setPort();
	JUtility::TColor color(0, 0, 0, 255);
	u16 height = sys->getRenderModeObj()->efbHeight;
	u16 width  = sys->getRenderModeObj()->fbWidth;
	J2DFillBox(0.0f, 0.0f, width, height, color);
	j3dSys.drawInit();
	game->BaseGameSection::draw2D(gfx);
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r5
	stw      r30, 0x58(r1)
	mr       r30, r4
	stw      r29, 0x54(r1)
	mr       r29, r3
	lbz      r0, 0x88(r3)
	cmplwi   r0, 0
	beq      lbl_80223D64
	lwz      r3, 0x98(r29)
	bl       update__6CameraFv
	mr       r3, r31
	bl       setupJ2DOrthoGraphDefault__8GraphicsFv
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r7, 0x100(r29)
	li       r10, -1
	lfs      f1, lbl_8051A128@sda21(r2)
	addi     r3, r1, 0x3c
	stw      r10, 8(r1)
	addi     r4, r1, 0x34
	lbz      r11, 0x73(r7)
	fmr      f2, f1
	lbz      r9, 0x72(r7)
	addi     r5, r1, 0x2c
	lbz      r8, 0x71(r7)
	addi     r6, r1, 0x24
	lbz      r0, 0x70(r7)
	stb      r8, 9(r1)
	stb      r0, 8(r1)
	stb      r9, 0xa(r1)
	stb      r11, 0xb(r1)
	lwz      r9, 8(r1)
	stw      r10, 0xc(r1)
	stw      r9, 0x24(r1)
	lwz      r7, 0x100(r29)
	stw      r10, 0x10(r1)
	lbz      r12, 0x73(r7)
	lbz      r11, 0x72(r7)
	lbz      r8, 0x71(r7)
	lbz      r0, 0x70(r7)
	stb      r8, 0xd(r1)
	stb      r0, 0xc(r1)
	stb      r11, 0xe(r1)
	stb      r12, 0xf(r1)
	lwz      r8, 0xc(r1)
	stw      r10, 0x14(r1)
	stw      r8, 0x2c(r1)
	lwz      r7, 0x100(r29)
	stw      r9, 0x20(r1)
	lbz      r11, 0x6f(r7)
	lbz      r10, 0x6e(r7)
	lbz      r9, 0x6d(r7)
	lbz      r0, 0x6c(r7)
	stb      r9, 0x11(r1)
	stb      r0, 0x10(r1)
	stb      r10, 0x12(r1)
	stb      r11, 0x13(r1)
	lwz      r0, 0x10(r1)
	stw      r8, 0x28(r1)
	stw      r0, 0x34(r1)
	lwz      r7, 0x100(r29)
	stw      r0, 0x30(r1)
	lbz      r10, 0x6f(r7)
	lbz      r9, 0x6e(r7)
	lbz      r8, 0x6d(r7)
	lbz      r0, 0x6c(r7)
	stb      r8, 0x15(r1)
	stb      r0, 0x14(r1)
	stb      r9, 0x16(r1)
	stb      r10, 0x17(r1)
	lwz      r0, 0x14(r1)
	stw      r0, 0x3c(r1)
	lfs      f5, 0xbc(r29)
	lfs      f3, 0xb4(r29)
	lfs      f4, 0xc0(r29)
	lfs      f0, 0xb8(r29)
	fsubs    f3, f5, f3
	stw      r0, 0x38(r1)
	fsubs    f4, f4, f0
	bl
J2DFillBox__FffffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	mr       r3, r30
	mr       r4, r31
	bl       draw3D__Q24Game15BaseGameSectionFR8Graphics
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl
drawLightEffect__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionR8Graphics
	lwz      r3, 0xcc(r29)
	li       r4, 0
	li       r5, 0
	li       r7, 0
	lwz      r6, 0x20(r3)
	li       r8, 0
	lbz      r6, 0(r6)
	bl       capture__10JUTTextureFii9_GXTexFmtbUc
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl
drawGradationEffect__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionR8Graphics
	lwz      r3, 0xcc(r29)
	li       r4, 0
	li       r5, 0
	li       r6, 4
	li       r7, 0
	li       r8, 0
	bl       capture__10JUTTextureFii9_GXTexFmtbUc

lbl_80223D64:
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	li       r0, 0xff
	stb      r3, 0x18(r1)
	stb      r3, 0x19(r1)
	stb      r3, 0x1a(r1)
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x1c(r1)
	bl       getRenderModeObj__6SystemFv
	lhz      r29, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f1, lbl_8051A128@sda21(r2)
	addi     r3, r1, 0x1c
	stw      r4, 0x44(r1)
	lfd      f4, lbl_8051A1E8@sda21(r2)
	fmr      f2, f1
	stw      r0, 0x40(r1)
	lfd      f0, 0x40(r1)
	stw      r29, 0x4c(r1)
	fsubs    f3, f0, f4
	stw      r0, 0x48(r1)
	lfd      f0, 0x48(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	bl       drawInit__6J3DSysFv
	mr       r3, r30
	mr       r4, r31
	bl       draw2D__Q24Game15BaseGameSectionFR8Graphics
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
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
		pic.setCornerColor(color);
		GXSetAlphaUpdate(GX_FALSE);
		pic.draw(min, min, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		color.a -= 16;
		pic.setCornerColor(color);
		pic.draw(max, min, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		color.a -= 16;
		pic.setCornerColor(color);
		pic.draw(min, max, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		color.a -= 16;
		pic.setCornerColor(color);
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
	/*
	.loc_0x0:
	  stwu      r1, -0x390(r1)
	  mflr      r0
	  stw       r0, 0x394(r1)
	  stfd      f31, 0x380(r1)
	  psq_st    f31,0x388(r1),0,0
	  stfd      f30, 0x370(r1)
	  psq_st    f30,0x378(r1),0,0
	  stmw      r18, 0x338(r1)
	  mr        r28, r3
	  lwz       r3, 0x98(r3)
	  lfs       f0, -0x41A8(r2)
	  mr        r29, r5
	  lfs       f1, 0x294(r3)
	  fabs      f1, f1
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x48
	  fmr       f1, f0

	.loc_0x48:
	  lfs       f0, -0x4244(r2)
	  fmr       f31, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5C
	  fmr       f31, f0

	.loc_0x5C:
	  lwz       r31, 0xB0(r28)
	  mr        r3, r31
	  bl        -0x1F0A84
	  bl        -0x13C51C
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0818
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0834
	  lfs       f0, -0x4184(r2)
	  li        r30, 0
	  fneg      f30, f0

	.loc_0xB0:
	  mr        r4, r31
	  addi      r3, r1, 0x1C8
	  bl        -0x1E99BC
	  li        r4, 0xFF
	  li        r0, 0x7F
	  stb       r4, 0x58(r1)
	  li        r3, 0
	  stb       r4, 0x59(r1)
	  stb       r4, 0x5A(r1)
	  stb       r0, 0x5B(r1)
	  lwz       r24, 0x58(r1)
	  stw       r24, 0x54(r1)
	  stw       r24, 0x50(r1)
	  lbz       r6, 0x54(r1)
	  stw       r24, 0x4C(r1)
	  lbz       r10, 0x50(r1)
	  stw       r24, 0x48(r1)
	  lbz       r19, 0x4C(r1)
	  lbz       r23, 0x48(r1)
	  lbz       r22, 0x49(r1)
	  lbz       r21, 0x4A(r1)
	  lbz       r20, 0x4B(r1)
	  lbz       r18, 0x4D(r1)
	  lbz       r12, 0x4E(r1)
	  lbz       r11, 0x4F(r1)
	  lbz       r9, 0x51(r1)
	  lbz       r8, 0x52(r1)
	  lbz       r7, 0x53(r1)
	  lbz       r5, 0x55(r1)
	  lbz       r4, 0x56(r1)
	  lbz       r0, 0x57(r1)
	  stw       r24, 0x14(r1)
	  stb       r23, 0x318(r1)
	  stb       r22, 0x319(r1)
	  stb       r21, 0x31A(r1)
	  stb       r20, 0x31B(r1)
	  stb       r19, 0x31C(r1)
	  stb       r18, 0x31D(r1)
	  stb       r12, 0x31E(r1)
	  stb       r11, 0x31F(r1)
	  stb       r10, 0x320(r1)
	  stb       r9, 0x321(r1)
	  stb       r8, 0x322(r1)
	  stb       r7, 0x323(r1)
	  stb       r6, 0x324(r1)
	  stb       r5, 0x325(r1)
	  stb       r4, 0x326(r1)
	  stb       r0, 0x327(r1)
	  bl        -0x13AE2C
	  lfs       f1, -0x4184(r2)
	  addi      r3, r1, 0x1C8
	  lfs       f5, 0xBC(r28)
	  li        r4, 0
	  lfs       f3, 0xB4(r28)
	  fmr       f2, f1
	  lfs       f4, 0xC0(r28)
	  li        r5, 0
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  li        r6, 0
	  fsubs     f4, f4, f0
	  bl        -0x1E8404
	  lbz       r4, 0x5B(r1)
	  fmr       f1, f30
	  lfs       f2, -0x4184(r2)
	  addi      r3, r1, 0x1C8
	  subi      r0, r4, 0x10
	  li        r4, 0
	  stb       r0, 0x5B(r1)
	  li        r5, 0
	  li        r6, 0
	  lwz       r27, 0x58(r1)
	  stw       r27, 0x44(r1)
	  stw       r27, 0x40(r1)
	  lbz       r9, 0x44(r1)
	  stw       r27, 0x3C(r1)
	  lbz       r18, 0x40(r1)
	  stw       r27, 0x38(r1)
	  lbz       r22, 0x3C(r1)
	  lbz       r26, 0x38(r1)
	  lbz       r25, 0x39(r1)
	  lbz       r24, 0x3A(r1)
	  lbz       r23, 0x3B(r1)
	  lbz       r21, 0x3D(r1)
	  lbz       r20, 0x3E(r1)
	  lbz       r19, 0x3F(r1)
	  lbz       r12, 0x41(r1)
	  lbz       r11, 0x42(r1)
	  lbz       r10, 0x43(r1)
	  lbz       r8, 0x45(r1)
	  lbz       r7, 0x46(r1)
	  lbz       r0, 0x47(r1)
	  stb       r26, 0x318(r1)
	  stb       r25, 0x319(r1)
	  stb       r24, 0x31A(r1)
	  stb       r23, 0x31B(r1)
	  stb       r22, 0x31C(r1)
	  stb       r21, 0x31D(r1)
	  stb       r20, 0x31E(r1)
	  stb       r19, 0x31F(r1)
	  stb       r18, 0x320(r1)
	  stb       r12, 0x321(r1)
	  stb       r11, 0x322(r1)
	  stb       r10, 0x323(r1)
	  stb       r9, 0x324(r1)
	  stb       r8, 0x325(r1)
	  stb       r7, 0x326(r1)
	  stb       r0, 0x327(r1)
	  lfs       f5, 0xBC(r28)
	  lfs       f3, 0xB4(r28)
	  lfs       f4, 0xC0(r28)
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  stw       r27, 0x10(r1)
	  fsubs     f4, f4, f0
	  bl        -0x1E84DC
	  lbz       r4, 0x5B(r1)
	  fmr       f2, f30
	  lfs       f1, -0x4184(r2)
	  addi      r3, r1, 0x1C8
	  subi      r0, r4, 0x10
	  li        r4, 0
	  stb       r0, 0x5B(r1)
	  li        r5, 0
	  li        r6, 0
	  lwz       r27, 0x58(r1)
	  stw       r27, 0x34(r1)
	  stw       r27, 0x30(r1)
	  lbz       r9, 0x34(r1)
	  stw       r27, 0x2C(r1)
	  lbz       r18, 0x30(r1)
	  stw       r27, 0x28(r1)
	  lbz       r22, 0x2C(r1)
	  lbz       r26, 0x28(r1)
	  lbz       r25, 0x29(r1)
	  lbz       r24, 0x2A(r1)
	  lbz       r23, 0x2B(r1)
	  lbz       r21, 0x2D(r1)
	  lbz       r20, 0x2E(r1)
	  lbz       r19, 0x2F(r1)
	  lbz       r12, 0x31(r1)
	  lbz       r11, 0x32(r1)
	  lbz       r10, 0x33(r1)
	  lbz       r8, 0x35(r1)
	  lbz       r7, 0x36(r1)
	  lbz       r0, 0x37(r1)
	  stb       r26, 0x318(r1)
	  stb       r25, 0x319(r1)
	  stb       r24, 0x31A(r1)
	  stb       r23, 0x31B(r1)
	  stb       r22, 0x31C(r1)
	  stb       r21, 0x31D(r1)
	  stb       r20, 0x31E(r1)
	  stb       r19, 0x31F(r1)
	  stb       r18, 0x320(r1)
	  stb       r12, 0x321(r1)
	  stb       r11, 0x322(r1)
	  stb       r10, 0x323(r1)
	  stb       r9, 0x324(r1)
	  stb       r8, 0x325(r1)
	  stb       r7, 0x326(r1)
	  stb       r0, 0x327(r1)
	  lfs       f5, 0xBC(r28)
	  lfs       f3, 0xB4(r28)
	  lfs       f4, 0xC0(r28)
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  stw       r27, 0xC(r1)
	  fsubs     f4, f4, f0
	  bl        -0x1E85B4
	  lbz       r4, 0x5B(r1)
	  fmr       f1, f30
	  fmr       f2, f30
	  addi      r3, r1, 0x1C8
	  subi      r0, r4, 0x10
	  li        r4, 0
	  stb       r0, 0x5B(r1)
	  li        r5, 0
	  lwz       r18, 0x58(r1)
	  li        r6, 0
	  stw       r18, 0x24(r1)
	  stw       r18, 0x20(r1)
	  lbz       r9, 0x24(r1)
	  stw       r18, 0x1C(r1)
	  lbz       r27, 0x20(r1)
	  stw       r18, 0x18(r1)
	  lbz       r23, 0x1C(r1)
	  lbz       r19, 0x18(r1)
	  lbz       r20, 0x19(r1)
	  lbz       r21, 0x1A(r1)
	  lbz       r22, 0x1B(r1)
	  lbz       r24, 0x1D(r1)
	  lbz       r25, 0x1E(r1)
	  lbz       r26, 0x1F(r1)
	  lbz       r12, 0x21(r1)
	  lbz       r11, 0x22(r1)
	  lbz       r10, 0x23(r1)
	  lbz       r8, 0x25(r1)
	  lbz       r7, 0x26(r1)
	  lbz       r0, 0x27(r1)
	  stb       r19, 0x318(r1)
	  stb       r20, 0x319(r1)
	  stb       r21, 0x31A(r1)
	  stb       r22, 0x31B(r1)
	  stb       r23, 0x31C(r1)
	  stb       r24, 0x31D(r1)
	  stb       r25, 0x31E(r1)
	  stb       r26, 0x31F(r1)
	  stb       r27, 0x320(r1)
	  stb       r12, 0x321(r1)
	  stb       r11, 0x322(r1)
	  stb       r10, 0x323(r1)
	  stb       r9, 0x324(r1)
	  stb       r8, 0x325(r1)
	  stb       r7, 0x326(r1)
	  stb       r0, 0x327(r1)
	  lfs       f5, 0xBC(r28)
	  lfs       f3, 0xB4(r28)
	  lfs       f4, 0xC0(r28)
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  stw       r18, 0x8(r1)
	  fsubs     f4, f4, f0
	  bl        -0x1E868C
	  bl        -0x13C8E4
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0BE0
	  addi      r3, r1, 0x1C8
	  li        r4, -0x1
	  bl        -0x1E938C
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x4
	  blt+      .loc_0xB0
	  mr        r3, r29
	  bl        0x2031E8
	  addi      r3, r29, 0xBC
	  lwz       r12, 0xBC(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xCC(r28)
	  addi      r3, r1, 0x60
	  bl        -0x1E9D90
	  lwz       r12, 0x60(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x60
	  lbz       r5, 0x170(r1)
	  lwz       r12, 0xD4(r12)
	  lfs       f1, -0x4244(r2)
	  mtctr     r12
	  bctrl
	  lfs       f3, -0x4244(r2)
	  fmr       f2, f31
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  fsubs     f30, f3, f31
	  lwz       r12, 0x108(r12)
	  fmr       f4, f3
	  fmr       f5, f3
	  fmr       f1, f30
	  fmr       f6, f3
	  fmr       f7, f3
	  fmr       f8, f3
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x60(r1)
	  fmr       f1, f30
	  lfs       f3, -0x4244(r2)
	  fmr       f2, f31
	  lwz       r12, 0x10C(r12)
	  addi      r3, r1, 0x60
	  fmr       f4, f3
	  fmr       f5, f3
	  fmr       f6, f3
	  fmr       f7, f3
	  fmr       f8, f3
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lfs       f1, -0x4238(r2)
	  li        r4, 0
	  lwz       r12, 0xE8(r12)
	  li        r5, 0
	  fmr       f2, f1
	  li        r6, 0
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x60
	  li        r4, -0x1
	  bl        -0x1E9484
	  psq_l     f31,0x388(r1),0,0
	  lfd       f31, 0x380(r1)
	  psq_l     f30,0x378(r1),0,0
	  lfd       f30, 0x370(r1)
	  lmw       r18, 0x338(r1)
	  lwz       r0, 0x394(r1)
	  mtlr      r0
	  addi      r1, r1, 0x390
	  blr
	*/
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
		color = mParms->mColorSetting.mActiveColorC;
	} else {
		sep.y += JMath::sincosTable_.mTable[85].first;
		sep.y /= JMath::sincosTable_.mTable[56].first;
		color = mParms->mColorSetting.mActiveColorC;
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
				color.a    = (alphaF >= 0.0f) ? 0.5f + alphaF : alphaF - 0.5f;
				GXSetTevColor(GX_TEVREG0, color.toGXColor());

				f32 u    = 0.005f * (f32)(i + 1); // f22
				f32 v    = -u;                    // f24
				f32 zero = 0.0f;
				f32 one  = 1.0f;

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
				GXPosition3f32(zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, v);

				GXPosition3f32(x + zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(one + v, v);

				GXPosition3f32(zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, one + v);

				GXPosition3f32(x + zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(one + v, one + v);

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
				GXPosition2f32(1.0f + v, u);

				GXPosition3f32(zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, 1.0f + u);

				GXPosition3f32(x + zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(1.0f + v, 1.0f + u);
			}
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stfd      f27, 0xA0(r1)
	  psq_st    f27,0xA8(r1),0,0
	  stfd      f26, 0x90(r1)
	  psq_st    f26,0x98(r1),0,0
	  stfd      f25, 0x80(r1)
	  psq_st    f25,0x88(r1),0,0
	  stfd      f24, 0x70(r1)
	  psq_st    f24,0x78(r1),0,0
	  stfd      f23, 0x60(r1)
	  psq_st    f23,0x68(r1),0,0
	  stfd      f22, 0x50(r1)
	  psq_st    f22,0x58(r1),0,0
	  stmw      r25, 0x34(r1)
	  mr        r25, r3
	  mr        r26, r5
	  bl        -0x13CA94
	  lwz       r3, 0xB0(r25)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0D90
	  mr        r3, r26
	  bl        0x203050
	  addi      r3, r26, 0xBC
	  lwz       r12, 0xBC(r26)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r25)
	  lfs       f0, -0x4238(r2)
	  lfs       f2, 0x184(r3)
	  lfs       f1, 0x178(r3)
	  lfs       f4, 0x188(r3)
	  fsubs     f5, f2, f1
	  lfs       f3, 0x17C(r3)
	  lfs       f2, 0x180(r3)
	  lfs       f1, 0x174(r3)
	  fsubs     f3, f4, f3
	  fmuls     f4, f5, f5
	  fsubs     f1, f2, f1
	  fmuls     f2, f3, f3
	  fmadds    f1, f1, f1, f4
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF8
	  ble-      .loc_0xFC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xFC

	.loc_0xF8:
	  fmr       f1, f0

	.loc_0xFC:
	  lfs       f0, -0x4238(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x114
	  lfs       f0, -0x4244(r2)
	  fdivs     f0, f0, f1
	  fmuls     f5, f5, f0

	.loc_0x114:
	  lwz       r0, 0x9C(r25)
	  cmpwi     r0, 0x6
	  bne-      .loc_0x158
	  lis       r4, 0x8050
	  lwz       r3, 0x100(r25)
	  addi      r4, r4, 0x71A0
	  lfs       f0, -0x4224(r2)
	  lfs       f2, 0x388(r4)
	  lfs       f1, 0x1C0(r4)
	  fadds     f5, f5, f2
	  lbz       r30, 0x74(r3)
	  lbz       r29, 0x75(r3)
	  lbz       r28, 0x76(r3)
	  fdivs     f5, f5, f1
	  lbz       r27, 0x77(r3)
	  fadds     f5, f5, f0
	  b         .loc_0x184

	.loc_0x158:
	  lis       r4, 0x8050
	  lwz       r3, 0x100(r25)
	  addi      r4, r4, 0x71A0
	  lfs       f1, 0x2A8(r4)
	  lfs       f0, 0x1C0(r4)
	  fadds     f5, f5, f1
	  lbz       r30, 0x74(r3)
	  lbz       r29, 0x75(r3)
	  lbz       r28, 0x76(r3)
	  fdivs     f5, f5, f0
	  lbz       r27, 0x77(r3)

	.loc_0x184:
	  lfs       f0, -0x4238(r2)
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x198
	  fmr       f5, f0
	  b         .loc_0x1A8

	.loc_0x198:
	  lfs       f0, -0x4244(r2)
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x1A8
	  fmr       f5, f0

	.loc_0x1A8:
	  lfs       f2, 0x108(r25)
	  lwz       r3, 0x104(r25)
	  fsubs     f1, f5, f2
	  lfs       f0, -0x4238(r2)
	  lfs       f3, 0x1C(r3)
	  fmadds    f1, f3, f1, f2
	  stfs      f1, 0x108(r25)
	  lfs       f1, 0x108(r25)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x75C
	  lfs       f3, 0xBC(r25)
	  li        r4, 0
	  lfs       f2, 0xB4(r25)
	  lfs       f1, 0xC0(r25)
	  lfs       f0, 0xB8(r25)
	  fsubs     f27, f3, f2
	  lwz       r3, 0xB0(r25)
	  fsubs     f26, f1, f0
	  bl        -0x1F0F4C
	  li        r3, 0x1
	  bl        -0x13D720
	  li        r3, 0x1
	  bl        -0x13B9D4
	  li        r3, 0
	  li        r4, 0xF
	  li        r5, 0x2
	  li        r6, 0x8
	  li        r7, 0xF
	  bl        -0x13C09C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x3
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x13C030
	  li        r3, 0
	  li        r4, 0x7
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0x7
	  bl        -0x13C08C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x13BFFC
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  bl        -0x13BBEC
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        -0x13D788
	  bl        -0x13FF5C
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x1403B4
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x1403C0
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        -0x1403CC
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x13FF60
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x13FF78
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x13FF90
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x1
	  li        r6, 0xF
	  bl        -0x13B5D4
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x13B538
	  li        r3, 0
	  bl        -0x13B0AC
	  li        r3, 0x1
	  bl        -0x13F730
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0xC
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        -0x13F9CC
	  lfd       f28, -0x41D8(r2)
	  li        r26, 0
	  lfs       f29, -0x4170(r2)
	  lis       r31, 0x4330
	  lfs       f30, -0x4244(r2)
	  lfs       f31, -0x4238(r2)

	.loc_0x378:
	  xoris     r3, r26, 0x8000
	  addi      r0, r26, 0x1
	  stw       r3, 0x14(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f2, 0x108(r25)
	  stw       r31, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f1, f0, f28
	  stw       r31, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fmuls     f1, f1, f29
	  fsubs     f0, f0, f28
	  fsubs     f1, f2, f1
	  fmuls     f0, f0, f29
	  fdivs     f2, f1, f0
	  fcmpo     cr0, f2, f30
	  ble-      .loc_0x3C4
	  fmr       f2, f30

	.loc_0x3C4:
	  fcmpo     cr0, f2, f31
	  ble-      .loc_0x750
	  rlwinm    r3,r27,0,24,31
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f1, -0x4178(r2)
	  stw       r0, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fmuls     f1, f2, f0
	  fcmpo     cr0, f1, f31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x404
	  lfs       f0, -0x4218(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x40C

	.loc_0x404:
	  lfs       f0, -0x4218(r2)
	  fsubs     f0, f1, f0

	.loc_0x40C:
	  fctiwz    f0, f0
	  stb       r30, 0x8(r1)
	  addi      r4, r1, 0xC
	  li        r3, 0x1
	  stb       r29, 0x9(r1)
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stb       r28, 0xA(r1)
	  rlwinm    r27,r0,0,24,31
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x13C168
	  addi      r3, r26, 0x1
	  lis       r0, 0x4330
	  xoris     r4, r3, 0x8000
	  stw       r0, 0x20(r1)
	  lfd       f1, -0x41D8(r2)
	  li        r3, 0x98
	  stw       r4, 0x24(r1)
	  li        r4, 0
	  lfs       f2, -0x416C(r2)
	  li        r5, 0x4
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  fmuls     f22, f2, f0
	  fneg      f24, f22
	  bl        -0x13EE7C
	  lfs       f3, -0x4238(r2)
	  lis       r6, 0xCC01
	  lfs       f1, -0x4244(r2)
	  li        r0, 0xFF
	  stfs      f3, -0x8000(r6)
	  fadds     f2, f27, f3
	  fadds     f25, f1, f22
	  li        r3, 0x98
	  stfs      f3, -0x8000(r6)
	  fadds     f0, f26, f3
	  fadds     f1, f1, f24
	  stfs      f3, -0x8000(r6)
	  li        r4, 0
	  li        r5, 0x4
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  bl        -0x13EF3C
	  lfs       f2, -0x4238(r2)
	  lis       r6, 0xCC01
	  lfs       f0, -0x4244(r2)
	  li        r0, 0xFF
	  stfs      f2, -0x8000(r6)
	  fadds     f1, f27, f2
	  fadds     f23, f0, f24
	  li        r3, 0x98
	  stfs      f2, -0x8000(r6)
	  fadds     f0, f26, f2
	  li        r4, 0
	  stfs      f2, -0x8000(r6)
	  li        r5, 0x4
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  bl        -0x13EFF8
	  lfs       f2, -0x4238(r2)
	  lis       r6, 0xCC01
	  li        r0, 0xFF
	  li        r3, 0x98
	  stfs      f2, -0x8000(r6)
	  fadds     f1, f27, f2
	  fadds     f0, f26, f2
	  li        r4, 0
	  stfs      f2, -0x8000(r6)
	  li        r5, 0x4
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  bl        -0x13F0AC
	  lfs       f2, -0x4238(r2)
	  lis       r3, 0xCC01
	  li        r0, 0xFF
	  stfs      f2, -0x8000(r3)
	  fadds     f1, f27, f2
	  fadds     f0, f26, f2
	  stfs      f2, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f24, -0x8000(r3)
	  stfs      f22, -0x8000(r3)
	  stfs      f1, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f23, -0x8000(r3)
	  stfs      f22, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stfs      f0, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f24, -0x8000(r3)
	  stfs      f25, -0x8000(r3)
	  stfs      f1, -0x8000(r3)
	  stfs      f0, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f23, -0x8000(r3)
	  stfs      f25, -0x8000(r3)

	.loc_0x750:
	  addi      r26, r26, 0x1
	  cmpwi     r26, 0x4
	  blt+      .loc_0x378

	.loc_0x75C:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  psq_l     f27,0xA8(r1),0,0
	  lfd       f27, 0xA0(r1)
	  psq_l     f26,0x98(r1),0,0
	  lfd       f26, 0x90(r1)
	  psq_l     f25,0x88(r1),0,0
	  lfd       f25, 0x80(r1)
	  psq_l     f24,0x78(r1),0,0
	  lfd       f24, 0x70(r1)
	  psq_l     f23,0x68(r1),0,0
	  lfd       f23, 0x60(r1)
	  psq_l     f22,0x58(r1),0,0
	  lfd       f22, 0x50(r1)
	  lmw       r25, 0x34(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
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
	sprintf(path, "user/Yamashita/zukan/%s/%s/arc.szs", "us", sDirName[mMapIndex]);
	JKRArchive* arc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Tail);
	P2ASSERTLINE(2457, arc);
	mParms = new IllustratedBook::Parms;
	mParms->loadFile(arc);
	mGameSect->addGenNode(mParms);
	PSSystem::SingletonBase<PSM::ObjMgr>::newInstance();
	u16 width     = sys->getRenderModeObj()->fbWidth;
	u16 height    = sys->getRenderModeObj()->efbHeight;
	int newWidth  = (int)((f32)width * 0.6f * 0.75f * 0.25f + 0.5f) * 4;
	int newHeight = (int)((f32)height * 0.75f * 0.25f + 0.5f) * 4;
	Rectf bounds(0.0f, 0.0f, newWidth, newHeight);
	mWindowBounds = bounds;
	mCameraAspect = 0.0f;

	mTexture2             = new JUTTexture((int)getWindowWidth(), (int)getWindowHeight(), GX_TF_RGB565);
	mTexture2->mMinFilter = 0;
	mTexture2->mMagFilter = 0;
	mTexture              = new JUTTexture((int)getWindowWidth() / 2, (int)getWindowHeight() / 2, GX_TF_RGB565);
	mTexture->mMinFilter  = 0;
	mTexture->mMagFilter  = 0;
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

	gfx = sys->mGfx;
	vp1 = gfx->getViewport(PLAYER1_VIEWPORT);
	vp2 = gfx->getViewport(PLAYER2_VIEWPORT);
	shadowMgr->setViewport(vp1, 0);
	shadowMgr->setViewport(vp2, 1);
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
	info.mBounds.mMin.set(-1000.0f, -1000.0f, -1000.0f);
	info.mBounds.mMax.set(1000.0f, 1000.0f, 1000.0f);
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
	/*
	stwu     r1, -0x700(r1)
	mflr     r0
	stw      r0, 0x704(r1)
	stmw     r25, 0x6e4(r1)
	mr       r31, r3
	lis      r3, lbl_80482E60@ha
	addi     r30, r3, lbl_80482E60@l
	lwz      r25, 0xd4(r31)
	mr       r3, r25
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r25
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0xd8(r31)
	lwz      r3, 0xd8(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x10c(r31)
	lis      r4, "sDirName__28@unnamed@singleGS_Zukan_cpp@"@ha
	addi     r4, r4, "sDirName__28@unnamed@singleGS_Zukan_cpp@"@l
	addi     r5, r2, lbl_8051A1F8@sda21
	slwi     r0, r0, 2
	addi     r3, r1, 0x160
	lwzx     r6, r4, r0
	addi     r4, r30, 0x240
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x160
	li       r4, 1
	li       r5, 0
	li       r6, 2
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r29, r3, r3
	bne      lbl_80224BE4
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x90
	li       r4, 0x999
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80224BE4:
	lis      r3, 0x00010280@ha
	addi     r3, r3, 0x00010280@l
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224C00
	bl       __ct__Q34Game15IllustratedBook5ParmsFv
	mr       r0, r3

lbl_80224C00:
	stw      r0, 0x100(r31)
	mr       r4, r29
	lwz      r3, 0x100(r31)
	bl       loadFile__Q34Game15IllustratedBook5ParmsFP10JKRArchive
	lwz      r3, 0x94(r31)
	lwz      r4, 0x100(r31)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	beq      lbl_80224C3C
	addi     r3, r30, 0x264
	addi     r5, r30, 0x90
	li       r4, 0x76
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80224C3C:
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	bne      lbl_80224CB0
	li       r3, 0x30
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_80224CAC
	mr       r25, r5
	bl       initiate__10JSUPtrListFv
	lis      r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@ha
	addic.   r4, r25, 0xc
	addi     r0, r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@l
	stw      r0, 0xc(r25)
	beq      lbl_80224C78
	addi     r4, r4, -12

lbl_80224C78:
	stw      r4,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) addi     r3,
r25, 0x10 bl       __ct__11JKRDisposerFv lis      r3, __vt__Q23PSM6ObjMgr@ha li
r0, 0 addi     r3, r3, __vt__Q23PSM6ObjMgr@l mr       r5, r25 stw      r3,
0x28(r25) addi     r4, r3, 8 addi     r3, r3, 0x14 stw      r4, 0xc(r25) stw r3,
0x10(r25) stw      r0, 0x2c(r25)

lbl_80224CAC:
	stw      r5,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)

lbl_80224CB0:
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	bne      lbl_80224CD0
	addi     r3, r30, 0x264
	addi     r5, r30, 0x90
	li       r4, 0x79
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80224CD0:
	bl       getRenderModeObj__6SystemFv
	lhz      r25, 4(r3)
	bl       getRenderModeObj__6SystemFv
	lis      r0, 0x4330
	lhz      r4, 4(r3)
	stw      r25, 0x69c(r1)
	li       r3, 0x40
	lfs      f6, lbl_8051A128@sda21(r2)
	stw      r0, 0x698(r1)
	lfd      f4, lbl_8051A1E8@sda21(r2)
	lfd      f0, 0x698(r1)
	stw      r4, 0x684(r1)
	fsubs    f0, f0, f4
	lfs      f1, lbl_8051A19C@sda21(r2)
	stw      r0, 0x680(r1)
	lfs      f5, lbl_8051A1A8@sda21(r2)
	lfd      f2, 0x680(r1)
	fmuls    f0, f1, f0
	lfs      f3, lbl_8051A1F0@sda21(r2)
	fsubs    f4, f2, f4
	lfs      f1, lbl_8051A148@sda21(r2)
	fmuls    f0, f5, f0
	stfs     f6, 0xb4(r31)
	lfd      f2, lbl_8051A188@sda21(r2)
	fmuls    f4, f5, f4
	fmadds   f0, f0, f3, f1
	stw      r0, 0x690(r1)
	fmadds   f1, f4, f3, f1
	stw      r0, 0x6a8(r1)
	fctiwz   f0, f0
	stfs     f6, 0xb8(r31)
	fctiwz   f1, f1
	stfd     f0, 0x6a0(r1)
	stfd     f1, 0x688(r1)
	lwz      r0, 0x6a4(r1)
	lwz      r4, 0x68c(r1)
	slwi     r0, r0, 2
	slwi     r4, r4, 2
	xoris    r4, r4, 0x8000
	xoris    r0, r0, 0x8000
	stw      r4, 0x694(r1)
	stw      r0, 0x6ac(r1)
	lfd      f1, 0x690(r1)
	lfd      f0, 0x6a8(r1)
	fsubs    f1, f1, f2
	fsubs    f0, f0, f2
	stfs     f1, 0xbc(r31)
	stfs     f0, 0xc0(r31)
	stfs     f6, 0xc4(r31)
	stfs     f6, 0xc8(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224DE0
	lfs      f3, 0xbc(r31)
	li       r6, 4
	lfs      f2, 0xb4(r31)
	lfs      f1, 0xc0(r31)
	lfs      f0, 0xb8(r31)
	fsubs    f2, f3, f2
	fsubs    f0, f1, f0
	fctiwz   f1, f2
	fctiwz   f0, f0
	stfd     f1, 0x6b0(r1)
	stfd     f0, 0x6b8(r1)
	lwz      r4, 0x6b4(r1)
	lwz      r5, 0x6bc(r1)
	bl       __ct__10JUTTextureFii9_GXTexFmt
	mr       r0, r3

lbl_80224DE0:
	stw      r0, 0xcc(r31)
	li       r0, 0
	li       r3, 0x40
	lwz      r4, 0xcc(r31)
	stb      r0, 0x32(r4)
	lwz      r4, 0xcc(r31)
	stb      r0, 0x33(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224E5C
	lfs      f3, 0xbc(r31)
	li       r6, 4
	lfs      f2, 0xb4(r31)
	lfs      f1, 0xc0(r31)
	lfs      f0, 0xb8(r31)
	fsubs    f2, f3, f2
	fsubs    f0, f1, f0
	fctiwz   f1, f2
	fctiwz   f0, f0
	stfd     f1, 0x6c0(r1)
	stfd     f0, 0x6c8(r1)
	lwz      r4, 0x6c4(r1)
	lwz      r5, 0x6cc(r1)
	srwi     r0, r4, 0x1f
	add      r4, r0, r4
	srwi     r0, r5, 0x1f
	srawi    r4, r4, 1
	add      r0, r0, r5
	srawi    r5, r0, 1
	bl       __ct__10JUTTextureFii9_GXTexFmt
	mr       r0, r3

lbl_80224E5C:
	stw      r0, 0xb0(r31)
	li       r0, 0
	lwz      r3, 0xb0(r31)
	stb      r0, 0x32(r3)
	lwz      r3, 0xb0(r31)
	stb      r0, 0x33(r3)
	lwz      r3, 0x94(r31)
	lwz      r4, 0xb0(r31)
	bl       useSpecificFBTexture__Q24Game15BaseGameSectionFP10JUTTexture
	lfs      f0, 0xc4(r31)
	li       r3, 0x324
	lfs      f1, 0xc8(r31)
	fctiwz   f0, f0
	lwz      r4, 0x94(r31)
	fctiwz   f1, f1
	stfd     f0, 0x6d8(r1)
	stfd     f1, 0x6d0(r1)
	lwz      r0, 0x6dc(r1)
	lwz      r5, 0x6d4(r1)
	stw      r0, 0x15c(r4)
	stw      r5, 0x160(r4)
	lwz      r4, sys@sda21(r13)
	lwz      r25, 0x24(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224ED0
	lwz      r4, 0x90(r31)
	bl       __ct__Q34Game15IllustratedBook6CameraFP10Controller
	mr       r0, r3

lbl_80224ED0:
	stw      r0, 0x98(r31)
	lwz      r3, 0x104(r31)
	lwz      r4, 0x98(r31)
	bl       add__5CNodeFP5CNode
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224EF8
	bl       __ct__Q24Game9CameraMgrFv
	mr       r0, r3

lbl_80224EF8:
	stw      r0, cameraMgr__4Game@sda21(r13)
	mr       r3, r0
	bl       loadResource__Q24Game9CameraMgrFv
	lwz      r3, cameraMgr__4Game@sda21(r13)
	lwz      r4, 0x98(r31)
	bl       setZukanCamera__Q24Game9CameraMgrFP12LookAtCamera
	lwz      r3, 0x94(r31)
	lwz      r4, cameraMgr__4Game@sda21(r13)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224F38
	mr       r4, r25
	bl       __ct__17HorizonalSplitterFP8Graphics
	mr       r0, r3

lbl_80224F38:
	mr       r3, r0
	lfs      f1, lbl_8051A11C@sda21(r2)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r25
	li       r4, 0
	bl       getViewport__8GraphicsFi
	mr       r0, r3
	mr       r3, r25
	mr       r26, r0
	li       r4, 1
	bl       getViewport__8GraphicsFi
	lwz      r0, 0x98(r31)
	mr       r27, r3
	mr       r3, r26
	stw      r0, 0x44(r26)
	bl       updateCameraAspect__8ViewportFv
	lwz      r0, 0x98(r31)
	mr       r3, r27
	stw      r0, 0x44(r27)
	bl       updateCameraAspect__8ViewportFv
	lfs      f1, 0xc4(r31)
	mr       r3, r26
	lfs      f0, lbl_8051A11C@sda21(r2)
	addi     r4, r31, 0xb4
	stfs     f1, 0x48(r26)
	lfs      f1, 0xc8(r31)
	stfs     f1, 0x4c(r26)
	stfs     f0, 0x50(r26)
	stfs     f0, 0x54(r26)
	bl       "setRect__8ViewportFR7Rect<f>"
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r25
	bl       setViewport__11ParticleMgrFR8Graphics
	lwz      r3, particleMgr@sda21(r13)
	bl       start__11ParticleMgrFv
	li       r3, 0x50
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224FEC
	li       r4, 2
	bl       __ct__Q24Game9ShadowMgrFi
	mr       r0, r3

lbl_80224FEC:
	stw      r0, shadowMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r3, sys@sda21(r13)
	lwz      r25, 0x24(r3)
	mr       r3, r25
	bl       getViewport__8GraphicsFi
	mr       r0, r3
	mr       r3, r25
	mr       r25, r0
	li       r4, 1
	bl       getViewport__8GraphicsFi
	mr       r0, r3
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r26, r0
	mr       r4, r25
	li       r5, 0
	bl       setViewport__Q24Game9ShadowMgrFP8Viewporti
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r26
	li       r5, 1
	bl       setViewport__Q24Game9ShadowMgrFP8Viewporti
	lwz      r3, 0x94(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x108(r12)
	mtctr    r12
	bctrl
	lwz      r0, rumbleMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_802250AC
	li       r3, 0x34
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80225078
	bl       __ct__Q24Game9RumbleMgrFv
	mr       r0, r3

lbl_80225078:
	stw      r0, rumbleMgr__4Game@sda21(r13)
	mr       r3, r0
	bl       loadResource__Q24Game9RumbleMgrFv
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	bl       init__Q24Game9RumbleMgrFv
	lwz      r5, 0x98(r31)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	lwz      r4, 0x90(r31)
	addi     r5, r5, 0x174
	bl       "setZukanRumble__Q24Game9RumbleMgrFP10ControllerP10Vector3<f>"
	lwz      r3, 0x94(r31)
	lwz      r4, rumbleMgr__4Game@sda21(r13)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode

lbl_802250AC:
	addi     r3, r1, 0x28
	bl       __ct__Q26PSGame9SceneInfoFv
	li       r0, 1
	stb      r0, 0x2f(r1)
	lwz      r3, 0x98(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	lwz      r3, 0x98(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)
	lwz      r3, 0x98(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051A1FC@sda21(r2)
	li       r4, 0
	lfs      f0, lbl_8051A200@sda21(r2)
	li       r5, 1
	stw      r3, 0x40(r1)
	addi     r3, r1, 0x28
	stfs     f1, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	stfs     f0, 0x58(r1)
	stfs     f0, 0x5c(r1)
	bl
setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	li       r3, 0xd
	stb      r3, 0x2e(r1)
	cmplwi   r0, 0
	bne      lbl_8022515C
	addi     r3, r30, 0x190
	addi     r5, r30, 0x90
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022515C:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	addi     r4, r1, 0x28
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80225194
	addi     r3, r30, 0x190
	addi     r5, r30, 0x90
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225194:
	lwz      r25, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	bne      lbl_802251B8
	addi     r3, r30, 0x19c
	addi     r5, r30, 0x90
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802251B8:
	lwz      r3, 4(r25)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_802251F0
	addi     r3, r30, 0x190
	addi     r5, r30, 0x90
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802251F0:
	lwz      r25, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	bne      lbl_80225214
	addi     r3, r30, 0x19c
	addi     r5, r30, 0x90
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225214:
	lwz      r3, 4(r25)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	addi     r4, r30, 0x270
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	bne      lbl_80225260
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x90
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225260:
	mr       r4, r25
	addi     r3, r1, 0x260
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x26c(r1)
	bne      lbl_80225288
	li       r0, 0
	stw      r0, 0x674(r1)

lbl_80225288:
	li       r3, 0x100
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802252A0
	bl       __ct__Q24Game10CourseInfoFv
	mr       r0, r3

lbl_802252A0:
	stw      r0, 0x8c(r31)
	addi     r4, r1, 0x260
	lwz      r3, 0x8c(r31)
	bl       read__Q24Game10CourseInfoFR6Stream
	lwz      r3, 0x8c(r31)
	bl       dump__Q24Game10CourseInfoFv
	lwz      r3, 0x8c(r31)
	li       r4, 0
	bl       createMapMgr__Q24Game6StagesFPQ24Game10CourseInfoPQ24Game8RouteMgr
	li       r3, 0x48
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_802252DC
	bl       __ct__Q24Game11CellPyramidFv
	mr       r5, r3

lbl_802252DC:
	lfs      f1, lbl_8051A204@sda21(r2)
	li       r0, 0
	lfs      f0, lbl_8051A208@sda21(r2)
	addi     r4, r1, 0x18
	stw      r5, cellMgr__4Game@sda21(r13)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r0, platCellMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f0, 0x24(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	addi     r4, r1, 0x18
	lfs      f1, lbl_8051A20C@sda21(r2)
	bl       create__Q24Game11CellPyramidFR10BoundBox2df
	lwz      r4, mapMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80225340
	lwz      r4, 0(r4)

lbl_80225340:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 2
	bl       "alloc__27MonoObjectMgr<Q24Game4Navi>Fi"
	li       r4, 0
	li       r6, -1
	stw      r4, 0x10(r1)
	li       r3, 0x40
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r4, 0xc(r1)
	lwz      r5, mgr__Q24Game13PelletOtakara@sda21(r13)
	stw      r4, 8(r1)
	lwz      r4, mgr__Q24Game10PelletItem@sda21(r13)
	stb      r6, 0x14(r1)
	stw      r0, 0x10(r1)
	lwz      r0, 8(r5)
	stw      r0, 8(r1)
	lwz      r0, 8(r4)
	stw      r0, 0xc(r1)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802253A4
	bl       __ct__Q34Game12ResultTexMgr3MgrFv
	mr       r0, r3

lbl_802253A4:
	stw      r0, 0xe8(r31)
	addi     r4, r1, 8
	lwz      r3, 0xe8(r31)
	bl       create__Q34Game12ResultTexMgr3MgrFRQ34Game12ResultTexMgr3Arg
	li       r3, 0x40
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_802253E0
	mr       r25, r28
	bl       __ct__Q34Game11IconTexture3MgrFv
	lis      r4, __vt__Q34Game15IllustratedBook11EnemyTexMgr@ha
	addi     r3, r25, 0x20
	addi     r0, r4, __vt__Q34Game15IllustratedBook11EnemyTexMgr@l
	stw      r0, 0(r25)
	bl       __ct__Q34Game11IconTexture6LoaderFv

lbl_802253E0:
	stw      r28, 0xec(r31)
	li       r4, 0x66
	lwz      r25, 0xec(r31)
	mr       r3, r25
	bl       create__Q34Game11IconTexture3MgrFi
	addi     r3, r25, 0x20
	addi     r4, r30, 0x44
	bl       loadResource__Q34Game11IconTexture6LoaderFPc
	addi     r3, r25, 0x20
	addi     r4, r30, 0x68
	bl       getResTIMG__Q34Game11IconTexture6LoaderFPc
	or.      r26, r3, r3
	bne      lbl_80225428
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x90
	li       r4, 0x1d2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225428:
	li       r27, 0
	lis      r28, 0x0000FFFF@ha

lbl_80225430:
	mr       r3, r27
	addi     r4, r28, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii
	cmplwi   r3, 0
	beq      lbl_80225490
	mr       r5, r3
	addi     r3, r1, 0x60
	addi     r4, r30, 0x9c
	crclr    6
	bl       sprintf
	addi     r3, r25, 0x20
	addi     r4, r1, 0x60
	bl       getResTIMG__Q34Game11IconTexture6LoaderFPc
	or.      r5, r3, r3
	beq      lbl_8022547C
	mr       r3, r25
	mr       r4, r27
	bl       setTexture__Q34Game11IconTexture3MgrFiP7ResTIMG
	b        lbl_802254A0

lbl_8022547C:
	mr       r3, r25
	mr       r4, r27
	mr       r5, r26
	bl       setTexture__Q34Game11IconTexture3MgrFiP7ResTIMG
	b        lbl_802254A0

lbl_80225490:
	mr       r3, r25
	mr       r4, r27
	mr       r5, r26
	bl       setTexture__Q34Game11IconTexture3MgrFiP7ResTIMG

lbl_802254A0:
	addi     r27, r27, 1
	cmpwi    r27, 0x66
	blt      lbl_80225430
	lwz      r0, 0x98(r31)
	mr       r3, r29
	stw      r0, sCamera__Q34Game15IllustratedBook5Parms@sda21(r13)
	stw      r31, sZukanState__Q34Game15IllustratedBook5Parms@sda21(r13)
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lmw      r25, 0x6e4(r1)
	lwz      r0, 0x704(r1)
	mtlr     r0
	addi     r1, r1, 0x700
	blr
	*/
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
		u8 count                                 = parms->mParms.mAppearNum();   // r25
		IllustratedBook::PositionParms* posParms = &mParms->mPosParmsList.mParms[id];
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
					f32 dist     = sep.length();

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

				Vector3f viewVec = mCamera->getViewVector();
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
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stfd     f29, 0x150(r1)
	psq_st   f29, 344(r1), 0, qr0
	stfd     f28, 0x140(r1)
	psq_st   f28, 328(r1), 0, qr0
	stfd     f27, 0x130(r1)
	psq_st   f27, 312(r1), 0, qr0
	stfd     f26, 0x120(r1)
	psq_st   f26, 296(r1), 0, qr0
	stmw     r20, 0xf0(r1)
	mr       r31, r3
	lis      r4, lbl_80482E60@ha
	lwz      r0, 0xdc(r3)
	addi     r30, r4, lbl_80482E60@l
	cmplwi   r0, 0
	beq      lbl_80225690
	lwz      r0, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80225670
	bl       clearHeapB_teki__Q34Game10SingleGame10ZukanStateFv
	b        lbl_80225690

lbl_80225670:
	lwz      r0, 0xac(r31)
	cmplwi   r0, 0
	beq      lbl_80225684
	bl       clearHeapB_pellet__Q34Game10SingleGame10ZukanStateFv
	b        lbl_80225690

lbl_80225684:
	bl       clearHeapB_common__Q34Game10SingleGame10ZukanStateFv
	lwz      r3, 0xd8(r31)
	bl       becomeCurrentHeap__7JKRHeapFv

lbl_80225690:
	lwz      r3, 0xd8(r31)
	bl       getFreeSize__7JKRHeapFv
	stw      r3, 0xe4(r31)
	addi     r3, r2, lbl_8051A210@sda21
	crclr    6
	bl       OSReport
	lwz      r4, 0xe4(r31)
	addi     r3, r30, 0x27c
	crclr    6
	bl       OSReport
	lwz      r21, 0xd8(r31)
	mr       r3, r21
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r21
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0xdc(r31)
	lwz      r3, 0xdc(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0x64
	bl       "alloc__27MonoObjectMgr<Q24Game4Piki>Fi"
	lwz      r4, 0x94(r31)
	lwz      r3, particleMgr@sda21(r13)
	lwz      r0, 0x128(r4)
	stw      r0, 0x18(r3)
	lwz      r3, particleMgr@sda21(r13)
	bl       start__11ParticleMgrFv
	lwz      r0, 0xa0(r31)
	cmpwi    r0, 0
	bne      lbl_80225750
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r3
	addi     r3, r30, 0x28c
	crclr    6
	bl       OSReport
	lwz      r3, mgr__Q24Game12PelletNumber@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r3
	addi     r3, r30, 0x2c0
	crclr    6
	bl       OSReport

lbl_80225750:
	lwz      r0, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80225770
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x90
	li       r4, 0xabb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225770:
	li       r3, 0x90
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80225788
	bl       __ct__Q24Game15GeneralEnemyMgrFv
	mr       r4, r3

lbl_80225788:
	stw      r4, generalEnemyMgr__4Game@sda21(r13)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, 0xa0(r31)
	cmpwi    r3, -1
	beq      lbl_802261F0
	cmpwi    r3, 0
	li       r0, 0
	blt      lbl_802257B8
	cmpwi    r3, 0x66
	bge      lbl_802257B8
	li       r0, 1

lbl_802257B8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_802257D4
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x90
	li       r4, 0xac1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802257D4:
	lwz      r0, 0xa0(r31)
	li       r5, 0
	lwz      r4, 0x100(r31)
	mulli    r3, r0, 0x274
	addi     r26, r3, 0x828
	add      r26, r4, r26
	lbz      r0, 0xa0(r26)
	cmplwi   r0, 0xa
	bge      lbl_80225800
	mr       r5, r0
	b        lbl_80225808

lbl_80225800:
	li       r0, 0
	stb      r0, 0xa0(r26)

lbl_80225808:
	mulli    r3, r5, 0xc0
	lwz      r0, 0x8c(r26)
	lwz      r4, 0x100(r31)
	lfs      f31, 0x64(r26)
	clrlwi   r25, r0, 0x18
	addi     r5, r3, 0x90
	add      r5, r4, r5
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	lfs      f28, 0x8c(r5)
	lfs      f29, 0x64(r5)
	lfs      f30, 0x3c(r5)
	bl       getFreeSize__7JKRHeapFv
	mr       r5, r3
	mr       r4, r25
	addi     r3, r30, 0x2d4
	crclr    6
	bl       OSReport
	lwz      r3, playData__4Game@sda21(r13)
	li       r24, 0
	lwz      r4, 0xa0(r31)
	addi     r3, r3, 0x40
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	cmplwi   r3, 0
	beq      lbl_80225878
	lwz      r0, 0(r3)
	cmpwi    r0, 0x10
	ble      lbl_80225878
	li       r24, 1

lbl_80225878:
	clrlwi.  r0, r24, 0x18
	beq      lbl_802258B4
	lwz      r0, 0xa0(r31)
	cmpwi    r0, 0x2a
	bge      lbl_80225898
	cmpwi    r0, 2
	beq      lbl_802258A0
	b        lbl_802258B4

lbl_80225898:
	cmpwi    r0, 0x2c
	bge      lbl_802258B4

lbl_802258A0:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x4d
	li       r5, 5
	li       r6, 0
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy

lbl_802258B4:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	mr       r5, r25
	lwz      r4, 0xa0(r31)
	li       r6, 0
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
	lis      r4, 0x000FA000@ha
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	addi     r5, r4, 0x000FA000@l
	li       r4, 1
	bl       allocateEnemys__Q24Game15GeneralEnemyMgrFUci
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game15GeneralEnemyMgrFv
	lfs      f1, 0x3c(r26)
	lfs      f0, lbl_8051A128@sda21(r2)
	lfs      f27, lbl_8051A214@sda21(r2)
	fcmpu    cr0, f1, f0
	beq      lbl_802258FC
	fmr      f27, f1

lbl_802258FC:
	mulli    r3, r25, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	mr       r7, r25
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	mulli    r4, r25, 0xc
	mr       r29, r3
	addi     r3, r4, 0x10
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	mr       r7, r25
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	mr       r27, r29
	mr       r28, r3
	li       r23, 0
	b        lbl_80225A74

lbl_80225958:
	cmpwi    r23, 0
	bne      lbl_80225974
	lfs      f0, lbl_8051A128@sda21(r2)
	stfs     f0, 0(r27)
	stfs     f0, 4(r27)
	stfs     f0, 8(r27)
	b        lbl_80225A6C

lbl_80225974:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xbc(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0xb8(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0xb8(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f26, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc4(r1)
	fmr      f3, f26
	lfs      f0, lbl_8051A128@sda21(r2)
	stw      r0, 0xc0(r1)
	lfd      f2, lbl_8051A188@sda21(r2)
	fcmpo    cr0, f26, f0
	lfd      f1, 0xc0(r1)
	lfs      f0, lbl_8051A178@sda21(r2)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fmuls    f4, f31, f0
	bge      lbl_802259E4
	fneg     f3, f26

lbl_802259E4:
	lfs      f2, lbl_8051A194@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A128@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	fcmpo    cr0, f26, f0
	fctiwz   f0, f1
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f3, f4, f0
	bge      lbl_80225A40
	lfs      f0, lbl_8051A198@sda21(r2)
	fmuls    f0, f26, f0
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80225A58

lbl_80225A40:
	fmuls    f0, f26, f2
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80225A58:
	fmuls    f1, f4, f0
	lfs      f0, lbl_8051A128@sda21(r2)
	stfs     f1, 0(r27)
	stfs     f0, 4(r27)
	stfs     f3, 8(r27)

lbl_80225A6C:
	addi     r27, r27, 0xc
	addi     r23, r23, 1

lbl_80225A74:
	cmpw     r23, r25
	blt      lbl_80225958
	lfs      f31, lbl_8051A128@sda21(r2)
	addi     r27, r25, -8
	li       r23, 0

lbl_80225A88:
	cmpwi    r25, 0
	li       r4, 0
	ble      lbl_80225B58
	cmpwi    r25, 8
	ble      lbl_80225B24
	addi     r0, r27, 7
	mr       r3, r28
	srwi     r0, r0, 3
	lfs      f0, lbl_8051A128@sda21(r2)
	mtctr    r0
	cmpwi    r27, 0
	ble      lbl_80225B24

lbl_80225AB8:
	stfs     f0, 8(r3)
	addi     r4, r4, 8
	stfs     f0, 4(r3)
	stfs     f0, 0(r3)
	stfs     f0, 0x14(r3)
	stfs     f0, 0x10(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x20(r3)
	stfs     f0, 0x1c(r3)
	stfs     f0, 0x18(r3)
	stfs     f0, 0x2c(r3)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x24(r3)
	stfs     f0, 0x38(r3)
	stfs     f0, 0x34(r3)
	stfs     f0, 0x30(r3)
	stfs     f0, 0x44(r3)
	stfs     f0, 0x40(r3)
	stfs     f0, 0x3c(r3)
	stfs     f0, 0x50(r3)
	stfs     f0, 0x4c(r3)
	stfs     f0, 0x48(r3)
	stfs     f0, 0x5c(r3)
	stfs     f0, 0x58(r3)
	stfs     f0, 0x54(r3)
	addi     r3, r3, 0x60
	bdnz     lbl_80225AB8

lbl_80225B24:
	mulli    r3, r4, 0xc
	subf     r0, r4, r25
	lfs      f0, lbl_8051A128@sda21(r2)
	add      r3, r28, r3
	mtctr    r0
	cmpw     r4, r25
	bge      lbl_80225B58

lbl_80225B40:
	stfs     f0, 8(r3)
	addi     r4, r4, 1
	stfs     f0, 4(r3)
	stfs     f0, 0(r3)
	addi     r3, r3, 0xc
	bdnz     lbl_80225B40

lbl_80225B58:
	mr       r5, r29
	mr       r6, r28
	li       r7, 0
	b        lbl_80225CB0

lbl_80225B68:
	addi     r8, r7, 1
	mulli    r4, r8, 0xc
	subf     r0, r8, r25
	add      r3, r29, r4
	add      r4, r28, r4
	mtctr    r0
	cmpw     r8, r25
	bge      lbl_80225CA4

lbl_80225B88:
	lfs      f1, 4(r5)
	lfs      f0, 4(r3)
	lfs      f2, 8(r5)
	fsubs    f0, f1, f0
	lfs      f1, 8(r3)
	lfs      f3, 0(r5)
	fsubs    f1, f2, f1
	lfs      f2, 0(r3)
	fmuls    f5, f0, f0
	fsubs    f6, f3, f2
	fmuls    f7, f1, f1
	fmadds   f2, f6, f6, f5
	fadds    f8, f7, f2
	fcmpo    cr0, f8, f31
	ble      lbl_80225BDC
	ble      lbl_80225BD4
	frsqrte  f2, f8
	fmuls    f4, f2, f8
	b        lbl_80225BE0

lbl_80225BD4:
	fmr      f4, f8
	b        lbl_80225BE0

lbl_80225BDC:
	fmr      f4, f31

lbl_80225BE0:
	fcmpo    cr0, f4, f27
	bge      lbl_80225C94
	lfs      f3, lbl_8051A128@sda21(r2)
	fcmpo    cr0, f8, f3
	ble      lbl_80225C10
	fmadds   f2, f6, f6, f5
	fadds    f5, f7, f2
	fcmpo    cr0, f5, f3
	ble      lbl_80225C14
	frsqrte  f2, f5
	fmuls    f5, f2, f5
	b        lbl_80225C14

lbl_80225C10:
	fmr      f5, f3

lbl_80225C14:
	lfs      f2, lbl_8051A128@sda21(r2)
	fcmpo    cr0, f5, f2
	ble      lbl_80225C34
	lfs      f2, lbl_8051A11C@sda21(r2)
	fdivs    f2, f2, f5
	fmuls    f6, f6, f2
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2

lbl_80225C34:
	fsubs    f3, f27, f4
	lfs      f4, lbl_8051A148@sda21(r2)
	lfs      f2, 0(r6)
	fmuls    f3, f4, f3
	fmuls    f6, f6, f3
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fadds    f2, f2, f6
	stfs     f2, 0(r6)
	lfs      f2, 4(r6)
	fadds    f2, f2, f0
	stfs     f2, 4(r6)
	lfs      f2, 8(r6)
	fadds    f2, f2, f1
	stfs     f2, 8(r6)
	lfs      f2, 0(r4)
	fsubs    f2, f2, f6
	stfs     f2, 0(r4)
	lfs      f2, 4(r4)
	fsubs    f0, f2, f0
	stfs     f0, 4(r4)
	lfs      f0, 8(r4)
	fsubs    f0, f0, f1
	stfs     f0, 8(r4)

lbl_80225C94:
	addi     r3, r3, 0xc
	addi     r4, r4, 0xc
	addi     r8, r8, 1
	bdnz     lbl_80225B88

lbl_80225CA4:
	addi     r5, r5, 0xc
	addi     r6, r6, 0xc
	addi     r7, r7, 1

lbl_80225CB0:
	cmpw     r7, r25
	blt      lbl_80225B68
	mr       r22, r28
	mr       r21, r29
	li       r20, 0
	b        lbl_80225D20

lbl_80225CC8:
	lfs      f1, 0(r21)
	mr       r4, r21
	lfs      f0, 0(r22)
	fadds    f0, f1, f0
	stfs     f0, 0(r21)
	lfs      f1, 4(r21)
	lfs      f0, 4(r22)
	fadds    f0, f1, f0
	stfs     f0, 4(r21)
	lfs      f1, 8(r21)
	lfs      f0, 8(r22)
	fadds    f0, f1, f0
	stfs     f0, 8(r21)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 4(r21)
	addi     r22, r22, 0xc
	addi     r21, r21, 0xc
	addi     r20, r20, 1

lbl_80225D20:
	cmpw     r20, r25
	blt      lbl_80225CC8
	addi     r23, r23, 1
	cmpwi    r23, 5
	blt      lbl_80225A88
	mr       r21, r29
	li       r20, 0
	b        lbl_80225E2C

lbl_80225D40:
	addi     r3, r1, 0x84
	bl       __ct__Q24Game13EnemyBirthArgFv
	cmpwi    r20, 0
	bne      lbl_80225D5C
	lfs      f0, lbl_8051A128@sda21(r2)
	stfs     f0, 0x90(r1)
	b        lbl_80225D90

lbl_80225D5C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xdc(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0xd8(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0xd8(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x90(r1)

lbl_80225D90:
	lfs      f0, 0(r21)
	addi     r4, r1, 0x84
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x84(r1)
	fadds    f2, f0, f30
	lfs      f0, 4(r21)
	stfs     f0, 0x88(r1)
	fadds    f1, f0, f29
	lfs      f3, 8(r21)
	fadds    f0, f3, f28
	stfs     f3, 0x8c(r1)
	stfs     f2, 0x84(r1)
	stfs     f1, 0x88(r1)
	stfs     f0, 0x8c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x88(r1)
	addi     r5, r1, 0x84
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0xa0(r31)
	bl       birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
	or.      r23, r3, r3
	bne      lbl_80225E10
	lwz      r6, 0xa0(r31)
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x2f4
	li       r4, 0xb3f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80225E24

lbl_80225E10:
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	cmpwi    r20, 0
	bne      lbl_80225E24
	stw      r23, 0xa4(r31)

lbl_80225E24:
	addi     r21, r21, 0xc
	addi     r20, r20, 1

lbl_80225E2C:
	cmpw     r20, r25
	blt      lbl_80225D40
	mr       r3, r29
	bl       __dl__FPv
	mr       r3, r28
	bl       __dl__FPv
	clrlwi.  r0, r24, 0x18
	beq      lbl_80225F10
	lwz      r0, 0xa0(r31)
	cmpwi    r0, 0x2a
	bge      lbl_80225E64
	cmpwi    r0, 2
	beq      lbl_80225E6C
	b        lbl_80225F10

lbl_80225E64:
	cmpwi    r0, 0x2c
	bge      lbl_80225F10

lbl_80225E6C:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x4d
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r20, r3, r3
	beq      lbl_80225F10
	addi     r3, r1, 0x50
	bl       __ct__Q24Game13EnemyBirthArgFv
	lwz      r4, 0xa4(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x24(r1)
	lfs      f0, lbl_8051A138@sda21(r2)
	lfs      f3, 0x20(r1)
	lfs      f1, 0x28(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x54(r1)
	stfs     f3, 0x50(r1)
	stfs     f1, 0x58(r1)
	stfs     f0, 0x54(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xdc(r1)
	mr       r3, r20
	lfd      f3, lbl_8051A188@sda21(r2)
	addi     r4, r1, 0x50
	stw      r0, 0xd8(r1)
	li       r6, 5
	lfs      f1, lbl_8051A178@sda21(r2)
	li       r7, 0
	lfd      f2, 0xd8(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x5c(r1)
	lwz      r5, 0xa4(r31)
	bl
createGroupByEnemy__Q34Game11ShijimiChou3MgrFRQ24Game13EnemyBirthArgPQ24Game9EnemyBaseib

lbl_80225F10:
	lwz      r3, 0x98(r31)
	lwz      r4, 0xa4(r31)
	bl       setTarget__Q34Game15IllustratedBook6CameraFPQ24Game8Creature
	lfs      f4, 0x1b8(r26)
	li       r23, 0
	lfs      f3, 0x190(r26)
	lwz      r3, 0x98(r31)
	lfs      f0, 0x168(r26)
	lfs      f1, lbl_8051A21C@sda21(r2)
	stfs     f0, 0x1e4(r3)
	lfs      f2, lbl_8051A218@sda21(r2)
	stfs     f3, 0x1e8(r3)
	stfs     f4, 0x1ec(r3)
	lfs      f0, 0xc8(r26)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0xf0(r26)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x1cc(r3)
	lfs      f3, 0x140(r26)
	lwz      r3, 0x98(r31)
	lfs      f0, 0x118(r26)
	stfs     f0, 0x1d0(r3)
	stfs     f3, 0x1d4(r3)
	lfs      f4, 0x230(r26)
	lfs      f3, 0x208(r26)
	lfs      f0, 0x1e0(r26)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x288(r3)
	stfs     f3, 0x28c(r3)
	stfs     f4, 0x290(r3)
	lfs      f0, 0x258(r26)
	lwz      r3, 0x98(r31)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x1c4(r3)
	lwz      r0, 0xa0(r31)
	cmpwi    r0, 0x22
	beq      lbl_80225FD4
	bge      lbl_80225FC8
	cmpwi    r0, 0xf
	bge      lbl_80225FD8
	cmpwi    r0, 0xc
	bge      lbl_80225FD4
	b        lbl_80225FD8

lbl_80225FC8:
	cmpwi    r0, 0x46
	beq      lbl_80225FD4
	b        lbl_80225FD8

lbl_80225FD4:
	li       r23, 0xa

lbl_80225FD8:
	cmpwi    r23, 0
	ble      lbl_8022629C
	li       r24, 0
	b        lbl_802261E4

lbl_80225FE8:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	beq      lbl_802261E0
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q24Game11PikiInitArg@ha
	addi     r0, r5, __vt__Q24Game15CreatureInitArg@l
	li       r5, 0x20
	stw      r0, 0x44(r1)
	addi     r6, r4, __vt__Q24Game11PikiInitArg@l
	li       r0, 0
	addi     r4, r1, 0x44
	stw      r6, 0x44(r1)
	stw      r5, 0x48(r1)
	stw      r0, 0x4c(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r25
	li       r4, 6
	bl       changeShape__Q24Game4PikiFi
	lwz      r4, 0x98(r31)
	addi     r3, r1, 0x14
	bl       getLookAtPosition__6CameraFv
	lfs      f28, 0x14(r1)
	addi     r3, r1, 8
	lfs      f29, 0x18(r1)
	lfs      f30, 0x1c(r1)
	lwz      r4, 0x98(r31)
	bl       getViewVector__11CullFrustumFv
	lfs      f0, 0xc(r1)
	lfs      f2, 0x10(r1)
	fmuls    f3, f0, f0
	lfs      f1, 8(r1)
	fmuls    f2, f2, f2
	lfs      f0, lbl_8051A128@sda21(r2)
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xdc(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0xd8(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0xd8(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f26, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xd4(r1)
	fmr      f3, f26
	lfs      f0, lbl_8051A128@sda21(r2)
	stw      r0, 0xd0(r1)
	lfd      f2, lbl_8051A188@sda21(r2)
	fcmpo    cr0, f26, f0
	lfd      f0, 0xd0(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051A124@sda21(r2)
	fdivs    f1, f2, f1
	fmuls    f4, f0, f1
	bge      lbl_802260FC
	fneg     f3, f26

lbl_802260FC:
	lfs      f2, lbl_8051A194@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A128@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	fcmpo    cr0, f26, f0
	fctiwz   f0, f1
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f1, f4, f0
	bge      lbl_80226158
	lfs      f0, lbl_8051A198@sda21(r2)
	fmuls    f0, f26, f0
	fctiwz   f0, f0
	stfd     f0, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80226170

lbl_80226158:
	fmuls    f0, f26, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80226170:
	lfs      f2, lbl_8051A128@sda21(r2)
	fmuls    f3, f4, f0
	fadds    f1, f30, f1
	lfs      f0, lbl_8051A220@sda21(r2)
	fadds    f2, f29, f2
	mr       r3, r25
	fadds    f3, f28, f3
	stfs     f1, 0x40(r1)
	fadds    f0, f2, f0
	addi     r4, r1, 0x38
	stfs     f2, 0x3c(r1)
	li       r5, 0
	stfs     f3, 0x38(r1)
	stfs     f0, 0x3c(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xe4(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0xe0(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0xe0(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x1fc(r25)

lbl_802261E0:
	addi     r24, r24, 1

lbl_802261E4:
	cmpw     r24, r23
	blt      lbl_80225FE8
	b        lbl_8022629C

lbl_802261F0:
	lwz      r21, 0x100(r31)
	addi     r4, r1, 0x2c
	lfs      f2, 0x11c(r21)
	lfs      f1, 0xf4(r21)
	lfs      f0, 0xcc(r21)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f2, 0x34(r1)
	lwz      r3, 0x98(r31)
	bl       "move__Q34Game15IllustratedBook6CameraFRC10Vector3<f>"
	lfs      f4, 0x9e0(r21)
	lfs      f3, 0x9b8(r21)
	lwz      r3, 0x98(r31)
	lfs      f0, 0x990(r21)
	lfs      f1, lbl_8051A21C@sda21(r2)
	stfs     f0, 0x1e4(r3)
	lfs      f2, lbl_8051A218@sda21(r2)
	stfs     f3, 0x1e8(r3)
	stfs     f4, 0x1ec(r3)
	lfs      f0, 0x8f0(r21)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0x918(r21)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x1cc(r3)
	lfs      f3, 0x968(r21)
	lwz      r3, 0x98(r31)
	lfs      f0, 0x940(r21)
	stfs     f0, 0x1d0(r3)
	stfs     f3, 0x1d4(r3)
	lfs      f4, 0xa58(r21)
	lfs      f3, 0xa30(r21)
	lfs      f0, 0xa08(r21)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x288(r3)
	stfs     f3, 0x28c(r3)
	stfs     f4, 0x290(r3)
	lfs      f0, 0xa80(r21)
	lwz      r3, 0x98(r31)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x1c4(r3)

lbl_8022629C:
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	psq_l    f28, 328(r1), 0, qr0
	lfd      f28, 0x140(r1)
	psq_l    f27, 312(r1), 0, qr0
	lfd      f27, 0x130(r1)
	psq_l    f26, 296(r1), 0, qr0
	lfd      f26, 0x120(r1)
	lmw      r20, 0xf0(r1)
	lwz      r0, 0x184(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
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
		CI_LOOP(iterator2) { buffer2[j++] = *iterator2; }

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
