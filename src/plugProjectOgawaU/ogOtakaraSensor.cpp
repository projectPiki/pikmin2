#include "og/newScreen/Cave.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/OtakaraSensor.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/AngleMgr.h"
#include "efx2d/T2DSensor.h"
#include "og/Sound.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "System.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "PS.h"

namespace og {
namespace Screen {

static const char otakaraSensorName[] = "ogOtakaraSensor";

/**
 * @note Address: 0x8032D8E8
 * @note Size: 0x140
 */
OtakaraSensor::OtakaraSensor()
{
	mPane1             = nullptr;
	mPane2             = nullptr;
	mCurrReactionLevel = 0.0f;
	mAngle             = 0.0f;
	mCurrAngle         = 0.0f;
	mReactTimer        = 0.0f;
	mPanePos           = 0.0f;
	mDoAngleOffset     = false;
	mScale             = 1.0f;
	mScaleMgr          = new ScaleMgr;
	mAngleOffsetMod    = 3.0f;
	mEfxActive         = false;
	mAngleMgr          = new AngleMgr;
	mAngleMgr->init(0.0f, 0.3f, 0.0f);
	mTimer             = 0.0f;
	mAngleOffs         = 0.0f;
	mAngleOffsetMod2   = 0.3f;
	mDoStartAppear     = false;
	mState             = 1;
	mSensorGetTimer    = 0.0f;
	_4C.x              = 0.2f;
	_4C.y              = 0.25f;
	mIsFuefukid        = false;
	mRandAngle         = 0.0f;
	mCompleteEfxOffset = 0.0f;
	mAppearEfxOffset   = 0.0f;
	mEnabled           = false;
	mNotreasures       = true;
	mDoIncNoise        = false;
	mIsInit            = false;
	mTreeColor         = nullptr;
	mNoiseLevel        = 0.0f;
	mIsPoweringOff     = false;
	mPowerOffTimer     = 3.2f;
	mNoiseTimer        = 0.0f;
	mCanIncNoise       = false;
	mIsPoweredOff      = false;
	mSetGrayTimer      = 0.0f;
}

/**
 * @note Address: 0x8032DA28
 * @note Size: 0xA8
 */
void OtakaraSensor::init(J2DPane* pane1, J2DPane* pane2, int state)
{
	if (pane1 && pane2) {
		mPane1             = pane1;
		mPane2             = pane2;
		mCurrReactionLevel = 0.0f;
		mAngle             = 0.0f;
		mPanePos.x         = mPane2->mOffset.x;
		mPanePos.y         = mPane2->mOffset.y;
		mState             = state;
		mIsInit            = false;
		mTreeColor         = og::Screen::capturePictureTreeColor(pane2, 30);
	} else {
		JUT_PANICLINE(237, "NULL pane.\n");
	}
	mNotreasures = true;
}

/**
 * @note Address: 0x8032DAD0
 * @note Size: 0x150
 */
void OtakaraSensor::setParam(f32 dist, int state, bool enabled, bool complete)
{
	bool flag        = true;
	mIsFuefukid      = false;
	mEnabled         = enabled;
	f32 temp         = 12.0f;
	mNotreasures     = complete;
	mAngleOffsetMod2 = 0.3f;
	int old          = mState;
	mState           = state;

	switch (mState) {
	case 0:
		temp = 0.0f;
		flag = false;
		break;
	case 1:
		mAngleOffsetMod2 = 1.0f;
		break;
	case 2:
		mAngleOffsetMod2 = 1.0f;
		break;
	case 3:
		temp             = 100.0f;
		mAngleOffsetMod2 = 0.4f;
		break;
	case 4:
		temp             = 100.0f;
		mAngleOffsetMod2 = 0.4f;
		mIsFuefukid      = true;
		if (mState != old) {
			mRandAngle = randFloat() * 180.0f - 90.0f;
		}
		break;
	}
	mCurrReactionLevel = calcLevel(dist);
	mDoAngleOffset     = flag;
	mAngleOffsetMod    = temp;
}

/**
 * @note Address: 0x8032DC20
 * @note Size: 0x5C
 */
f32 OtakaraSensor::calcLevel(f32 distance)
{
	f32 level = 0.0f;
	if (mState != 0) {
		level = 1.0f - (distance / 900.0f);

		if (level < 0.0f) {
			level = 0.0f;

		} else if (level > 1.0f) {
			level = 1.0f;
		}

		level *= level;
		level *= 0.95f;
		level += 0.05f;
	}
	return level;
}

/**
 * @note Address: 0x8032DC7C
 * @note Size: 0x10
 */
void OtakaraSensor::show() { mPane2->show(); }

/**
 * @note Address: 0x8032DC8C
 * @note Size: 0x10
 */
void OtakaraSensor::hide() { mPane2->hide(); }

/**
 * @note Address: 0x8032DC9C
 * @note Size: 0x14
 */
void OtakaraSensor::startSensorEff()
{
	mEfxActive = true;
	mTimer     = 0.3f;
}

/**
 * @note Address: 0x8032DCB0
 * @note Size: 0xD8
 */
void OtakaraSensor::adjPos(f32 x, f32 y)
{
	f32 offs = 0.0f;
	if (mEfxActive) {
		f32 temp = mAngleMgr->calc();
		offs     = cosf(temp) * 100.0f;
	}
	mPane2->setOffset(mPanePos.x + x, mPanePos.y + y + offs);
}

/**
 * @note Address: 0x8032DD88
 * @note Size: 0x8
 */
void OtakaraSensor::adjScale(f32 scale) { mScale = scale; }

/**
 * @note Address: 0x8032DD90
 * @note Size: 0x88
 */
void OtakaraSensor::update()
{
	if (mAppearTimer > 0.0f) {
		mAppearTimer -= sys->mDeltaTime;
	}

	calcAppear();
	calcGrayColor();
	if (mState != 5) {
		calcAngle();
	}
	calcReaction();
	PSStartTresureLaderNoiseSE(mState, mNoiseLevel, mCurrReactionLevel);
}

/**
 * @note Address: 0x8032DE18
 * @note Size: 0x160
 */
void OtakaraSensor::updateInit()
{
	if (!mIsInit) {
		mIsInit = true;
		if (mEnabled && mState == 0) {
			mDoIncNoise = true;
			if (mNotreasures) {
				mNoiseLevel             = 0.0f;
				mIsPoweringOff          = true;
				PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
				PSSystem::validateSceneMgr(mgr);
				PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(mgr->getChildScene());
				PSSystem::checkGameScene(scene);
				if (scene->isCave()) {
					scene->startPollutUpSe();
				}
			} else {
				mNoiseLevel = 1.0f;
			}
		}
	}
}

/**
 * @note Address: 0x8032DF78
 * @note Size: 0x370
 */
void OtakaraSensor::calcGrayColor()
{
	if (mState != 5) {
		if (mIsPoweringOff) {
			if (mPowerOffTimer > 0.0f) {
				mPowerOffTimer -= sys->mDeltaTime;
			} else {
				mIsPoweringOff = false;
				mDoIncNoise    = true;
				ogSound->setFloorComplete();
				mIsPoweredOff = true;
				mSetGrayTimer = 1.5f;
			}
		} else if (mDoIncNoise) {
			mNoiseLevel += 0.05f;
			if (mNoiseLevel > 1.0f) {
				mNoiseLevel = 1.0f;
			}
			if (mState != 0) {
				mDoIncNoise = false;
			}
		} else {
			mNoiseLevel -= 0.05f;
			if (mNoiseLevel < 0.0f) {
				mNoiseLevel = 0.0f;
			}
		}

		if (mIsPoweredOff && mSetGrayTimer > 0.0f) {
			mSetGrayTimer -= sys->mDeltaTime;
			if (mSetGrayTimer < 0.0f) {
				ogSound->setGraySensor();
				startGraySensor();
			}
		}
		JUtility::TColor col1(255, 255, 255, 255);
		JUtility::TColor col2(0, 0, 0, 0);
		switch (mState) {
		case 3:
			col1.set(255, 0, 200, 255);
			mNoiseTimer += sys->mDeltaTime * TAU * 2.5f;
			if (mNoiseTimer > TAU) {
				mNoiseTimer -= TAU;
			}
			mNoiseLevel  = (sinf(mNoiseTimer) + 1.0f) * 0.3f / 2;
			mCanIncNoise = true;
			break;

		case 4:
			col1.set(255, 0, 200, 255);
			f32 timeFactor = sys->mDeltaTime * TAU;
			mNoiseTimer += newScreen::ObjCave::msVal.mTreasureRadarNoiseModifierHigh * timeFactor;
			if (mNoiseTimer > TAU)
				mNoiseTimer -= TAU;
			mNoiseLevel  = (sinf(mNoiseTimer) + 1.0f) * newScreen::ObjCave::msVal.mTreasureRadarNoiseModifierLow / 2;
			mCanIncNoise = true;
			break;

		default:
			if (mCanIncNoise && mState == 0) {
				mCanIncNoise = false;
				mDoIncNoise  = true;
			}
			break;
		}

		og::Screen::blendPictureTreeColor(mTreeColor, col1, col2, mNoiseLevel);
	}
}

/**
 * @note Address: 0x8032E2E8
 * @note Size: 0x1FC
 */
void OtakaraSensor::calcAppear()
{
	if (mEfxActive) {
		if (mTimer > 0.0f) {
			mTimer -= sys->mDeltaTime;
			if (mTimer < 0.0f) {
				mAngleMgr->chase(HALF_PI, _4C.x);
				mDoStartAppear  = true;
				mSensorGetTimer = _4C.y;
			}
		}
	}

	if (mDoStartAppear) {
		if (mSensorGetTimer > 0.0f) {
			mSensorGetTimer -= sys->mDeltaTime;
			if (mSensorGetTimer <= 0.0f) {
				mScaleMgr->up(0.7f, 40.0f, 0.5f, 0.0f);
				mAppearTimer = 3.0f;
				efx2d::T2DSensorGet efx;
				JGeometry::TVec3f pos1 = mPane1->getGlbVtx(GLBVTX_BtmLeft);
				JGeometry::TVec3f pos2 = mPane1->getGlbVtx(GLBVTX_TopRight);
				Vector2f argVec((pos1.x + pos2.x) / 2 + mAppearEfxOffset.x, (pos1.y + pos2.y) / 2 + mAppearEfxOffset.y);
				efx2d::Arg arg = argVec;
				efx.create(&arg);
				ogSound->setGetSensor();
			}
		}
	}
}

/**
 * @note Address: 0x8032E4E4
 * @note Size: 0x138
 */
void OtakaraSensor::startGraySensor()
{
	efx2d::T2DSensorComp efx;
	JGeometry::TVec3f pos1 = mPane1->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f pos2 = mPane1->getGlbVtx(GLBVTX_TopRight);
	Vector2f argVec((pos1.x + pos2.x) / 2 + mCompleteEfxOffset.x, (pos1.y + pos2.y) / 2 + mCompleteEfxOffset.y);
	efx2d::Arg arg = argVec;
	efx.create(&arg);
}

/**
 * @note Address: 0x8032E61C
 * @note Size: 0x22C
 */
void OtakaraSensor::calcAngle()
{
	mAngle += (mCurrReactionLevel - mAngle) / 10.0f;
	if (mPane1) {
		f32 angle = -(mAngle * 180.0f - 90.0f);
		if (mIsFuefukid) {
			angle = mCurrAngle;
		}
		f32 initOffs = 0.0f;
		f32 offs;
		if (mDoAngleOffset) {
			offs = initOffs;
			f32 temp;
			f32 angle2 = mAngleOffsetMod / 2;
			temp       = angle - angle2;
			if (temp < -90.0f) {
				offs = -90.0f - temp;

			} else {
				temp = angle + angle2;
				if (temp > 90.0f) {
					offs = 90.0f - temp;
				}
			}

			initOffs = (mAngleOffsetMod / 2) * (randFloat() * 2.0f - 1.0f) + offs;
		}

		mAngleOffs += mAngleOffsetMod2 * (initOffs - mAngleOffs);

		if (mIsFuefukid) {
			f32 temp = mRandAngle - mCurrAngle;
			if (FABS(temp) < 15.0f) {
				mRandAngle = randFloat() * 180.0f - 90.0f;
				temp       = mRandAngle - mCurrAngle;
			}
			f32 newangle = temp * 0.5f;
			if (newangle < -30.0f) {
				newangle = -30.0f;
			}
			if (newangle > 30.0f) {
				newangle = 30.0f;
			}
			mCurrAngle += newangle;
			angle = mCurrAngle;
		}

		mCurrAngle = angle;
		if (!mDoIncNoise) {
			angle += mAngleOffs;
		}

		if (angle < -90.0f) {
			angle = -90.0f;
		}
		if (angle > 90.0f) {
			angle = 90.0f;
		}
		mPane1->rotate(angle);

	} else {
		mCurrAngle = 0.0f;
	}
}

/**
 * @note Address: 0x8032E848
 * @note Size: 0x204
 */
void OtakaraSensor::calcReaction()
{
	if (mReactTimer > 0.0f) {
		mReactTimer -= sys->mDeltaTime;
		if (mReactTimer < 0.0f) {
			mReactTimer = 0.0f;
			if (!og::newScreen::checkMovieActive()) {
				PSStartTreasureLaderSE(mCurrReactionLevel);
				if (mAppearTimer <= 0.0f) {
					mScaleMgr->up(mCurrReactionLevel * 0.1f, 30.0f, 0.8f, 0.0f);
					efx2d::T2DSensorAct efx;
					JGeometry::TVec3f pos1 = mPane1->getGlbVtx(GLBVTX_BtmLeft);
					JGeometry::TVec3f pos2 = mPane1->getGlbVtx(GLBVTX_TopRight);
					Vector2f argVec((pos1.x + pos2.x) / 2 + mCompleteEfxOffset.x, (pos1.y + pos2.y) / 2 + mCompleteEfxOffset.y);
					efx2d::Arg arg = argVec;
					efx.create(&arg);
				}
			}
		}
	} else {
		if (mCurrReactionLevel > 0.3f) {
			mReactTimer = (1.0f - mCurrReactionLevel) * 2.0f + 0.4f;
		}
	}
	mPane2->updateScale(mScale * mScaleMgr->calc());
}

/**
 * @note Address: 0x8032EA4C
 * @note Size: 0x4
 */
void OtakaraSensor::draw(J2DGrafContext&) { }

} // namespace Screen
} // namespace og
