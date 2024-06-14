#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "Game/CurrTriInfo.h"
#include "Game/MapMgr.h"
#include "Game/gamePlayData.h"
#include "Game/PlatInstance.h"
#include "trig.h"

namespace Game {

/**
 * __ct
 * @note Address: 0x80165088
 * @note Size: 0x34
 */
NaviWhistle::NaviWhistle(Game::Navi* navi)
    : mNavi(navi)
{
	init();
}

/**
 * @note Address: 0x801650BC
 * @note Size: 0x128
 * TODO: Needs NaviParms
 */
void NaviWhistle::init()
{
	mState               = 0;
	mRadius              = 10.0f;
	mActiveTime          = 0.0f;
	mColor               = Color4(255, 150, 0, 120);
	const f32 faceDir    = mNavi->getFaceDir();
	NaviParms* parms     = static_cast<NaviParms*>(mNavi->mParms);
	f32 cursorRadiusHalf = parms->mNaviParms.mMaxCursorMoveRadius.mValue * 0.5f;
	mNaviOffsetVec       = Vector3f(sinf(faceDir) * cursorRadiusHalf, 0.0f, cosf(faceDir) * cursorRadiusHalf);

	updatePosition();
}

/**
 * @note Address: 0x801651E4
 * @note Size: 0x190
 */
void NaviWhistle::updatePosition()
{
	// Move relative to the player
	mPosition = mNavi->getPosition() + mNaviOffsetVec;

	// Shoot a raycast down and assign conform to the terrain
	CurrTriInfo info;
	f32 y          = 0.0f;
	info.mPosition = mPosition;
	if (mapMgr) {
		// If we have a map manager, get the current triangle
		info.mUpdateOnNewMaxY = false;
		mapMgr->getCurrTri(info);
		y       = info.mMinY;
		mNormal = info.mNormalVec;
	}

	if (platMgr) {
		// If we're on a platform, get the current triangle
		info.mMinY = FLOAT_DIST_MIN;
		platMgr->getCurrTri(info);
		f32 minY = info.mMinY;
		if (minY > y) {
			mNormal = info.mNormalVec;
			y       = minY;
		}
	}

	mPosition.y = y;
	mPosition   = mPosition + mNormal;
}

/**
 * @note Address: 0x80165374
 * @note Size: 0x78
 */
void NaviWhistle::start()
{
	mIsWhistleActive = false;

	switch (mState) {
	case WS_Idle:
		mState      = WS_Blowing;
		mActiveTime = 0.0f;
		mRadius     = mNavi->getParms()->mNaviParms.mPikiCallMinRadius.mValue;
		return;
	case WS_Ended:
		mState      = WS_Blowing;
		mActiveTime = 0.0f;
		mRadius     = mNavi->getParms()->mNaviParms.mPikiCallMinRadius.mValue;
		return;
	}
}

/**
 * @note Address: 0x801653EC
 * @note Size: 0x34
 */

void NaviWhistle::stop()
{
	switch (mState) {
	case WS_Blowing:
		mState           = WS_Ended;
		mActiveTime      = 0.0f;
		mIsWhistleActive = true;
		return;
	case WS_Idle:
	case WS_Ended:
	default:
		return;
	}
}

/**
 * @note Address: 0x80165420
 * @note Size: 0x10
 */
bool NaviWhistle::timeout() { return mState == WS_Idle; }

/**
 * @note Address: 0x80165430
 * @note Size: 0xF4
 */
void NaviWhistle::setFaceDir(f32 dir)
{
	// Move the cursor in a circle around the player based on dir
	f32 dist       = mNaviOffsetVec.length();
	mNaviOffsetVec = Vector3f(dist * sinf(dir), 0.0f, dist * cosf(dir));
}

/**
 * @note Address: 0x80165524
 * @note Size: 0x1F4
 */
void NaviWhistle::updateWhistle()
{
	switch (mState) {
	case WS_Idle:
		mColor.set(255, 120, 0, 120);
		break;

	case WS_Blowing:
		// When blowing do some cool rainbow colors
		mColor.interp(255.0f, -175.0f, 120.0f, -110.0f, 0.0f, 255.0f, 120.0f, 0.0f,
		              mActiveTime / static_cast<NaviParms*>(mNavi->mParms)->mNaviParms.mMaxCallTime.mValue);

		mActiveTime += sys->mDeltaTime;
		// If we've been calling for too long, end
		if (mActiveTime > mNavi->getParms()->mNaviParms.mMaxCallTime.mValue) {
			mActiveTime = 0.0f;
			mState      = WS_Ended;
			break;
		}

		// If we've got the amplified amplifier we can go wide whistle
		f32 maxSize;
		NaviParms* parms;
		OlimarData* data = mNavi->getOlimarData();
		if (data->hasItem(OlimarData::ODII_AmplifiedAmplifier)) {
			parms   = naviMgr->mNaviParms;
			maxSize = parms->mNaviParms.mWideWhistleRadius.mValue;
		} else {
			parms   = naviMgr->mNaviParms;
			maxSize = parms->mNaviParms.mPikiCallMaxRadius.mValue;
		}

		mRadius
		    = (mActiveTime / mNavi->getParms()->mNaviParms.mMaxCallTime()) * (maxSize - mNavi->getParms()->mNaviParms.mPikiCallMinRadius())
		    + mNavi->getParms()->mNaviParms.mPikiCallMinRadius();
		break;

	case WS_Ended:
		// If ended, fade out the whistle
		mColor.a = (1.0f - mActiveTime / mNavi->getParms()->mNaviParms.mCircleDisappearTime.mValue) * 120.0f;
		mActiveTime += sys->mDeltaTime;

		// If we've faded out for too long, reset
		if (mActiveTime > mNavi->getParms()->mNaviParms.mCircleDisappearTime()) {
			mActiveTime = 0.0f;
			mState      = WS_Idle;
			mRadius     = 10.0f;
		}
		break;
	}

	FORCE_DONT_INLINE; // i dont wanna have to deal with this
}

/**
 * @note Address: 0x80165718
 * @note Size: 0x1D4
 * TODO: Decomp this properly and then comment on it
 */
void NaviWhistle::update(Vector3f& stick, bool active)
{
	Vector3f offset;
	if (active) {
		offset = Vector3f(0.0f);
	} else {
		Vector3f stickVec = stick;
		stickVec.normalise();
		stickVec = stickVec * mNavi->getParms()->mNaviParms.mCursorMovementSpeed();

		f32 time = sys->getDeltaTime();
		offset   = stickVec * time;
		offset   = offset + mNaviOffsetVec;

		if (offset.lengthWeird() >= mNavi->getParms()->mNaviParms.mMaxCursorMoveRadius()) {
			offset.normalise();

			offset = (stickVec - offset * offset.dot(stickVec)) * time + mNaviOffsetVec;
		}
	}

	mNaviOffsetVec = offset;

	updatePosition();
	updateWhistle();

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	clrlwi.  r0, r5, 0x18
	mr       r31, r3
	beq      lbl_8016574C
	lfs      f1, lbl_805188E4@sda21(r2)
	fmr      f2, f1
	fmr      f3, f1
	b        lbl_801658B4

lbl_8016574C:
	lfs      f3, 4(r4)
	lfs      f9, 8(r4)
	fmuls    f1, f3, f3
	lfs      f2, 0(r4)
	fmuls    f4, f9, f9
	lfs      f0, lbl_805188E4@sda21(r2)
	fmadds   f1, f2, f2, f1
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80165784
	ble      lbl_80165788
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80165788

lbl_80165784:
	fmr      f1, f0

lbl_80165788:
	lfs      f0, lbl_805188E4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801657A8
	lfs      f0, lbl_805188FC@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f9, f9, f0

lbl_801657A8:
	lwz      r4, 0x34(r31)
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x54(r3)
	lfs      f1, 0x9a8(r4)
	lfs      f5, 4(r31)
	fmuls    f8, f3, f1
	lfs      f4, 8(r31)
	fmuls    f7, f2, f1
	lfs      f6, 0(r31)
	fmuls    f9, f9, f1
	lfs      f11, lbl_805188E4@sda21(r2)
	fmuls    f2, f8, f0
	fmuls    f3, f9, f0
	fmuls    f1, f7, f0
	fadds    f2, f2, f5
	fadds    f3, f3, f4
	fadds    f1, f1, f6
	fmuls    f12, f2, f2
	fmuls    f13, f3, f3
	fmadds   f10, f1, f1, f12
	fadds    f31, f13, f10
	fcmpo    cr0, f31, f11
	ble      lbl_8016581C
	ble      lbl_80165818
	frsqrte  f10, f31
	fmuls    f11, f10, f31
	b        lbl_8016581C

lbl_80165818:
	fmr      f11, f31

lbl_8016581C:
	lfs      f10, 0x980(r4)
	fcmpo    cr0, f11, f10
	cror     2, 1, 2
	bne      lbl_801658B4
	lfs      f11, lbl_805188E4@sda21(r2)
	fcmpo    cr0, f31, f11
	ble      lbl_80165854
	fmadds   f10, f1, f1, f12
	fadds    f12, f13, f10
	fcmpo    cr0, f12, f11
	ble      lbl_80165858
	frsqrte  f10, f12
	fmuls    f12, f10, f12
	b        lbl_80165858

lbl_80165854:
	fmr      f12, f11

lbl_80165858:
	lfs      f10, lbl_805188E4@sda21(r2)
	fcmpo    cr0, f12, f10
	ble      lbl_80165878
	lfs      f10, lbl_805188FC@sda21(r2)
	fdivs    f10, f10, f12
	fmuls    f1, f1, f10
	fmuls    f2, f2, f10
	fmuls    f3, f3, f10

lbl_80165878:
	fmuls    f10, f2, f8
	fmadds   f10, f1, f7, f10
	fmadds   f11, f3, f9, f10
	fmuls    f10, f1, f11
	fmuls    f2, f2, f11
	fmuls    f1, f3, f11
	fsubs    f3, f7, f10
	fsubs    f2, f8, f2
	fsubs    f7, f9, f1
	fmuls    f1, f3, f0
	fmuls    f2, f2, f0
	fmuls    f0, f7, f0
	fadds    f1, f1, f6
	fadds    f2, f2, f5
	fadds    f3, f0, f4

lbl_801658B4:
	stfs     f1, 0(r31)
	mr       r3, r31
	stfs     f2, 4(r31)
	stfs     f3, 8(r31)
	bl       updatePosition__Q24Game11NaviWhistleFv
	mr       r3, r31
	bl       updateWhistle__Q24Game11NaviWhistleFv
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // namespace Game
