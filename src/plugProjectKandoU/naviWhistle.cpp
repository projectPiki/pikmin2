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
bool NaviWhistle::timeout()
{
	return mState == WS_Idle;
}

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

		f32 time           = sys->getDeltaTime();
		Vector3f newOffset = stickVec * time;
		newOffset          = newOffset + mNaviOffsetVec;

		if (newOffset.magnitude() >= mNavi->getParms()->mNaviParms.mMaxCursorMoveRadius()) {
			newOffset.normalise();

			Vector3f tangent = stickVec;
			tangent -= newOffset * newOffset.dot(stickVec);
			newOffset = tangent * time + mNaviOffsetVec;
		}
		offset = newOffset;
	}

	mNaviOffsetVec = offset;

	updatePosition();
	updateWhistle();
}
} // namespace Game
