#include "Morimura/VsSelect.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/ArrowAlphaBlink.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "Game/gameChallenge2D.h"
#include "efx2d/efx2dEffect.h"
#include "Dolphin/rand.h"
#include "Screen/Game2DMgr.h"
#include "Controller.h"

static const char unusedName[] = "vsSelect2D";
namespace Morimura {
f32 TVsSelect::mAngRate       = 0.2f;
f32 TVsSelect::mMoveSpeed     = 25.0f;
f32 TVsSelect::mIndVal        = 0.05f;
f32 TVsSelect::mIndShuki      = 0.3f;
f32 TVsSelect::mZoomFrameMax  = 25.0f;
f32 TVsSelect::mTestVal       = 10.0f;
f32 TVsSelect::mAngUp         = 0.03f;
f32 TVsSelect::mWindowScale   = 1.0f;
f32 TVsSelect::mDemoScaleMax  = 2.2f;
f32 TVsSelect::mDemoScale     = 1.0f;
f32 TVsSelect::mDemoOffsetMax = 290.0f;
f32 TVsSelect::mFireAlphaRate = 0.5f;
JKRHeap* TVsSelect::mDebugHeapParent;
JKRHeap* TVsSelect::mDebugHeap;
Vector2f TVsPiki::mPikiOffset   = Vector2f(12.5f, -0.5f);
bool TVsSelect::mForceDemoStart = false;
bool TVsSelect::mLoopDrum       = false;
bool TVsSelect::mCanCancel      = false;
TVsSelect::StaticValues TVsSelect::mScrollParm;

u32 unk[]                            = { 1, 2, 3, 0 };
ResTIMG* TVsSelect::mOrimaTexture[5] = { nullptr };
ResTIMG* TVsSelect::mLouieTexture[5] = { nullptr };

TVsSelectSlotIndex slotIDInfo[12] = {
	{ 6, 0, '2042_00' },  // "Supercharge all Pikmin!"
	{ 7, 1, '2041_00' },  // "Bury enemy Pikmin!"
	{ 8, 5, '2049_00' },  // "Volatile Dweevil drops on opponent."
	{ 9, 3, '2044_00' },  // "Blowhog drops on opponent."
	{ 10, 4, '2045_00' }, // "Blowhog drops on opponent."
	{ 11, 2, '2052_00' }, // "Swooping Snitchbug drops on opponent."
	{ 0, 6, '2046_00' },  // "Recover stolen marble."
	{ 1, 7, '2050_00' },  // "Boulders drop on opponent."
	{ 2, 8, '2051_00' },  // "All Pikmin bloom."
	{ 3, 9, '2047_00' },  // "Increase Pikmin by five."
	{ 4, 10, '2048_00' }, // "Increase Pikmin by ten."
	{ 5, 11, '2043_00' }, // "Vanish from opponent's view."
};

/**
 * @note Address: 0x8039982C
 * @note Size: 0x314
 */
void TVsSelectIndPane::draw()
{
	J2DOrthoGraph graf(0.0f, 0.0f, 640.0f, 480.0f, -1.0f, 1.0f);
	graf.setPort();
	P2ASSERTLINE(49, mTexture1);
	P2ASSERTLINE(50, mTexture2);
	mTexture1->load(GX_TEXMAP0);
	mTexture2->load(GX_TEXMAP1);
	GXSetNumTevStages(1);
	GXSetNumIndStages(1);
	GXSetNumChans(0);
	GXSetNumTexGens(1);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_DSTALPHA, GX_BL_INVDSTALPHA, GX_LO_CLEAR);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x1e, GX_FALSE, 0x7d);
	GXSetIndTexOrder(GX_IND_TEX_STAGE_0, GX_TEXCOORD0, GX_TEXMAP1);
	GXSetIndTexCoordScale(GX_IND_TEX_STAGE_0, GX_ITS_1, GX_ITS_1);

	Mtx mtx;
	Mtx23 indMtx;
	if (mMtxUseType) {
		indMtx[0][0] = mMtxXOffset;
		indMtx[0][1] = 0.0f;
		indMtx[0][2] = 0.0f;
		indMtx[1][0] = 0.0f;
		indMtx[1][1] = mMtxYOffset;
		indMtx[1][2] = 0.0f;
	} else {
		PSMTXRotRad(mtx, J2DROTATE_Z, MTXDegToRad(mRotation));
		indMtx[0][0] = mtx[0][0] * 0.5f;
		indMtx[0][1] = mtx[0][1] * 0.5f;
		indMtx[0][2] = 0.0f;
		indMtx[1][0] = mtx[1][0] * 0.5f;
		indMtx[1][1] = mtx[1][1] * 0.5f;
		indMtx[1][2] = 0.0f;
	}

	GXSetIndTexMtx(GX_ITM_0, indMtx, mTexMtxScale);
	GXSetTevIndWarp(GX_TEVSTAGE0, GX_IND_TEX_STAGE_0, GX_TRUE, GX_FALSE, GX_ITM_0);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
	GXSetTevOp(GX_TEVSTAGE0, GX_REPLACE);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);

	Mtx mtx2;
	PSMTXIdentity(mtx2);
	GXLoadPosMtxImm(mtx2, 0);
	GXLoadTexMtxImm(mtx2, 0x1e, GX_MTX2x4);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	f32 one  = 1.0f;
	// Top Left
	GXTexCoord2f32(mMinPos.x, mMinPos.y);
	GXPosition3f32(zero, zero, zero);

	// Top Right
	GXTexCoord2f32(mMaxPos.x, mMinPos.y);
	GXPosition3f32(zero, one, zero);

	// Bottom Right
	GXTexCoord2f32(mMaxPos.x, mMaxPos.y);
	GXPosition3f32(zero, one, one);

	// Bottom Left
	GXTexCoord2f32(mMinPos.x, mMaxPos.y);
	GXPosition3f32(zero, zero, one);
}

/**
 * @note Address: 0x80399B40
 * @note Size: 0x3C
 */
void TVsSelectExplanationWindow::create(char const* path, u32 flags)
{
	TScreenBase::create(path, flags);
	mTransXModifier = 0.0f;
	mTransYModifier = -800.0f;
}

/**
 * @note Address: 0x80399B7C
 * @note Size: 0x4
 */
void TVsSelectExplanationWindow::screenScaleUp()
{
}

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
TVsPiki::TVsPiki(J2DPane* left, J2DPane* right, J2DPane* flower)
{
	mPikminLeft = static_cast<J2DPicture*>(left);
	left->setBasePosition(J2DPOS_TopRight);

	mPikminRight = static_cast<J2DPicture*>(right);
	right->setBasePosition(J2DPOS_TopLeft);

	mPikminFlower = static_cast<J2DPicture*>(flower);
	flower->setBasePosition(J2DPOS_Center);

	for (int i = 0; i < 3; i++) {
		P2ASSERTLINE(176, (&mPikminLeft)[i]);
	}
}

/**
 * @note Address: 0x80399B80
 * @note Size: 0x4
 */
TVsPiki::posInfo::posInfo()
{
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
void TVsPiki::init(int sel)
{
	for (int i = 0; i < 10; i++) {
		mPosInfos[i].mPosition.x = mPikiOffset.x * i;
		mPosInfos[i].mStateTimer = 0.0f;
		if (i < sel) {
			mPosInfos[i].mState      = posInfo::Idle;
			mPosInfos[i].mPosition.y = 0.0f;
		} else {
			mPosInfos[i].mState      = posInfo::Sprout;
			mPosInfos[i].mPosition.y = 20.0f;
		}
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80399B84
 * @note Size: 0x2C8
 */
void TVsPiki::update(int pikis)
{
	mPikminLeft->setBasePosition(J2DPOS_TopRight);
	mPikminRight->setBasePosition(J2DPOS_TopLeft);
	mPikminFlower->setBasePosition(J2DPOS_Center);

	mBounds[0] = Vector2f(mPikminLeft->getGlbVtx(GLBVTX_BtmLeft).x - mPikminRight->getGlbVtx(GLBVTX_BtmRight).x,
	                      mPikminLeft->getGlbVtx(GLBVTX_BtmLeft).y - mPikminRight->getGlbVtx(GLBVTX_BtmRight).y);
	mBounds[1] = Vector2f(mPikminLeft->getGlbVtx(GLBVTX_BtmLeft).x - mPikminFlower->getGlbVtx(GLBVTX_BtmLeft).x,
	                      mPikminLeft->getGlbVtx(GLBVTX_BtmLeft).y - mPikminFlower->getGlbVtx(GLBVTX_BtmLeft).y);

	for (int i = 0; i < 10; i++) {
		if (i < pikis) {
			if (mPosInfos[i].mState == posInfo::Sprout) {
				mPosInfos[i].mState = posInfo::Pluck;
			}
		} else if (mPosInfos[i].mState == posInfo::Idle) {
			mPosInfos[i].mState = posInfo::Bury;
		}

		switch (mPosInfos[i].mState) {
		case posInfo::Idle:
		case posInfo::Sprout:
			mPosInfos[i].mStateTimer = 0.0f;
			break;
		case posInfo::Pluck:
			if (mPosInfos[i].mPosition.y > 0.0f) {
				mPosInfos[i].mPosition.y -= 5.0f;
				if (mPosInfos[i].mPosition.y <= 0.0f) {
					mPosInfos[i].mPosition.y = 0.0f;
				}
			} else {
				mPosInfos[i].mStateTimer += PI / 10;
				if (mPosInfos[i].mStateTimer >= PI) {
					mPosInfos[i].mStateTimer = PI;
					mPosInfos[i].mState      = posInfo::Idle;
				}
				mPosInfos[i].mPosition.y = sinf(mPosInfos[i].mStateTimer) * -20.0f;
			}
			break;
		case posInfo::Bury:
			if (mPosInfos[i].mPosition.y < 20.0f) {
				mPosInfos[i].mPosition.y += 5.0f;
				if (mPosInfos[i].mPosition.y >= 20.0f) {
					mPosInfos[i].mPosition.y = 20.0f;
					mPosInfos[i].mState      = posInfo::Sprout;
				}
			}
			break;
		}
	}
}

/**
 * @note Address: 0x80399E4C
 * @note Size: 0x280
 */
void TVsPiki::draw()
{
	const JGeometry::TVec3f& pos = mPikminLeft->getGlbVtx(GLBVTX_TopLeft);
	Vector2f origin(pos.x, pos.y);
	f32 xoffs = mPikiOffset.x;
	origin.x -= xoffs;
	origin.y -= 50.0f;
	f32 x1 = origin.x;
	f32 y1 = origin.y;
	f32 y2 = mPikminLeft->getGlbVtx(GLBVTX_TopLeft).y - y1;
	f32 x2 = (xoffs * 12.0f + x1) - x1;
	GXSetScissor(x1, y1, x2, y2);

	for (int i = 0; i < 10; i++) {
		Vector2f* offs  = &mPikiOffset;
		J2DPicture* pic = mPikminLeft;
		f32 calc        = TVsSelect::mDemoScale;
		Vector2f pos(mPosInfos[i].mPosition.x * calc + pic->getGlbVtx(GLBVTX_BtmLeft).x,
		             mPosInfos[i].mPosition.y * calc + pic->getGlbVtx(GLBVTX_BtmLeft).y);
		pic->draw(pos.x, pos.y, calc * pic->getWidth(), calc * pic->getHeight(), false, false, false);
		pic->calcMtx();

		pic = mPikminRight;
		pic->draw(pos.x - mBounds[0].x, pos.y - mBounds[0].y, calc * -pic->getWidth(), calc * pic->getHeight(), false, false, false);
		pic->calcMtx();

		pic = mPikminFlower;
		pic->draw(offs->y + (pos.x + mBounds[1].x), pos.y - mBounds[1].y, calc * pic->getWidth(), calc * pic->getHeight(), false, false,
		          false);
		pic->calcMtx();
	}

	GXSetScissor(0, 0, 640, 480);

	FORCE_DONT_INLINE;
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void TVsPiki::setAlpha(u8 alpha)
{
	for (int i = 0; i < 3; i++) {
		(&mPikminLeft)[i]->setAlpha(alpha);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
void TVsSelectOnyon::reset()
{
	mCurrentPosition = Vector2f(-100.0f, 0.0f);
	int test         = randInt(20);
	mCounter         = -(int(TVsSelect::mTestVal) + test);
	_30              = 0.0f;
	_3C              = true;
	mOnyonPane->hide();
	mGoalAngle = 0.0f;
	if (randFloat() > 0.5f) {
		mGoalAngle = PI;
	}
	mVelocity   = 0.0f;
	mAngleDef   = 0.0f;
	mAngleTimer = TVsSelect::mAngRate;
}

/**
 * @note Address: 0x8039A0CC
 * @note Size: 0x308
 */
void TVsSelectOnyon::posUpdate(f32 rate)
{
	mCounter++;
	if (mCounter > 0) {
		if (rate == 1.0f) {
			mAngleTimer += TVsSelect::mAngUp;
			if (mAngleTimer > 1.0f) {
				mAngleTimer = 1.0f;
			}
		} else {
			mAngleTimer -= TVsSelect::mAngUp;
			if (mAngleTimer < 0.0f) {
				mAngleTimer = 0.0f;
			}
		}
	}

	f32 dist  = mAngleTimer * getAngDist();
	f32 clamp = TAU;
	if (FABS(dist) > clamp) {
		if (dist > 0.0f) {
			dist = clamp;
		} else {
			dist = -clamp;
		}
	}

	mGoalAngle  = roundAng(mGoalAngle + dist);
	f32 speed   = TVsSelect::mMoveSpeed * rate;
	mAngleDef.x = speed * sinf(mGoalAngle);
	mAngleDef.y = speed * -cosf(mGoalAngle);

	f32 scale = mAngleTimer;
	if (scale < 0.05f) {
		scale = 0.05f;
	}
	scale = 0.4f / scale;
	if (scale <= 0.4f) {
		mAngleDef = 0.0f;
		mVelocity = 0.0f;
	} else {
		f32 calc = roundAng(TAU - mGoalAngle);
		mOnyonPane->setAngle((calc * 360.0f) / TAU);
	}
	mVelocity = mVelocity + (mAngleDef - mVelocity) * 0.1f;
	mCurrentPosition += mVelocity;
	mOnyonPane->setOffset(mCurrentPosition.x + -320.0f, mCurrentPosition.y + -240.0f);

	if (scale > 1.25f) {
		scale = 1.25f;
	}
	if (scale <= 0.4f) {
		mOnyonPane->hide();
		scale = 0.4f;
	} else {
		mOnyonPane->show();
	}
	mOnyonPane->updateScale(scale);
}

/**
 * @note Address: 0x8039A3D4
 * @note Size: 0x7C
 */
f32 TVsSelectOnyon::getAngDist()
{
	f32 x = mGoalPosition.x - mCurrentPosition.x;
	if (x == 0.0f) {
		x = 0.1f;
	}

	f32 y = mGoalPosition.y - mCurrentPosition.y;
	if (y == 0.0f) {
		y = 0.1f;
	}

	f32 angle = JMAAtan2Radian(x, -y);
	return angDist(roundAng(angle), mGoalAngle);
}

/**
 * @note Address: N/A
 * @note Size: 0x198
 */
void TVsSelectOnyon::draw()
{
	if (0.4f == mOnyonPane->mScaleX) {
		mNaviPane->setBasePosition(J2DPOS_Center);
		f32 offs = -30.0f;
		mNaviPane->draw(mCurrentPosition.x + offs, mCurrentPosition.y + offs, false, false, false);
		mNaviPane->calcMtx();
		_30 += 0.05f;
		mOnyonPane->hide();
		if (_30 > 2.0f) {
			_30 = 2.0f;
		}
		if (_3C) {
			_3C = false;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_2PTOP_ONY_ENTER, 0);
			Vector2f pos(mCurrentPosition.x - 16.0f, mCurrentPosition.y - 16.0f);
			efx2d::Arg arg(pos);
			efx2d::T2DBattleDive efx;
			efx.create(&arg);
		}
	}
}

/**
 * @note Address: 0x8039A450
 * @note Size: 0x2B0
 */
void TVsSelectScreen::create(char const* name, u32 flags)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(name, flags, mArchive);
	J2DPane* menu = mScreenObj->search('Tbmenu11');
	P2ASSERTLINE(489, menu);

	mCallbackScissor          = new TCallbackScissor;
	mCallbackScissor->mBounds = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mScreenObj->addCallBack('Pblo1', mCallbackScissor);

	mScreenObj->addCallBack('Tbmenu11', new og::Screen::CallBack_Message);

	TCallbackScissor* scis = new TCallbackScissor;
	scis->mBounds          = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mScreenObj->addCallBack('Tbmenu11', scis);

	menu->removeFromParent();
	og::Screen::setCallBackMessage(mScreenObj);
	mScreenObj->search('Ncourse')->appendChild(menu);

	mAnimScreens = new og::Screen::AnimScreen*[mAnimScreenCountMax];
	og::Screen::setAlphaScreen(mScreenObj);
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
TVsSelectCBWinNum::TVsSelectCBWinNum(char** p1, u16 p2, JKRArchive* arc)
    : og::Screen::CallBack_CounterDay(p1, p2, arc)
    , mIsNeedUp(false)
    , mScaleMgr(nullptr)
{
	mScaleMgr = new og::Screen::ScaleMgr;
}

/**
 * @note Address: 0x8039A700
 * @note Size: 0x58
 */
void TVsSelectCBWinNum::update()
{
	CallBack_CounterRV::update();
	CallBack_CounterDay::setValue();
	mDayPic->updateScale(mScaleMgr->calc());
}

/**
 * @note Address: 0x8039A758
 * @note Size: 0x68
 */
void TVsSelectCBWinNum::setValue(bool a1, bool a2)
{
	if (mIsNeedUp) {
		CallBack_CounterRV::setValue(true, false);
		mScaleMgr->up(0.5f, 30.0f, 0.8f, 0.0f);
		mIsNeedUp = false;
	} else {
		CallBack_CounterRV::setValue(a1, a2);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
TVsSelectSlotIndex* TVsSelectSlotIndex::getIndexInfo(int id)
{
	for (int i = 0; i < 12; i++) {
		if (slotIDInfo[i].mIndex == id) {
			return &slotIDInfo[i];
		}
	}
	return &slotIDInfo[0];
}

/**
 * @note Address: 0x8039A7C0
 * @note Size: 0x3A0
 */
TVsSelect::TVsSelect()
    : TScrollList("vsSelect")
    , mVsSelectTextureArc(nullptr)
    , mController2(nullptr)
    , mListScreen(nullptr)
    , mBackgroundScreen(nullptr)
    , mRedPodScreen(nullptr)
    , mBluePodScreen(nullptr)
    , mSlotTexturesScreen(nullptr)
    , mFireScreen(nullptr)
    , mRulesWindow(nullptr)
    , mIndPane(nullptr)
    , mPane3DStick(nullptr)
    , mPaneSpot(nullptr)
    , mPaneStageList(nullptr)
    , mPaneStageNameBg(nullptr)
    , mPaneStars(nullptr)
    , mPaneLevelName(nullptr)
    , mPaneRulesInfo(nullptr)
    , mIndPic(nullptr)
    , mMesgData(nullptr)
    , mEfxCountKira(nullptr)
    , mStickImage(nullptr)
    , mStickAnim(nullptr)
    , mArrowBlink(nullptr)
    , mIsDemoStarted(true)
    , mIsOnyonHitGoal(false)
    , mIsUpdatedScore(true)
    , mCurrentRulesPage(0)
    , mDoChangeRulesPage(false)
    , mIsRulesPageChanging(true)
    , mLevelNameYPos(0.0f)
    , _234(1.0f)
    , mPaneStarAlpha(1.0f)
    , mDrawAlpha(0)
    , mIsSelectIndexChange(0)
    , mZoomState(0)
    , mStickAnimState(0)
    , mChangeFaceState(-1)
    , mZoomLevel(0.0f)
    , mOtherLevelsFadeAlpha(1.0f)
    , mRulesMoveXPos(0.0f)
    , mRuleChangeTimer(0.0f)
    , mRulePageChangeSpeed(0.25f)
    , mChangeFaceTimer(0.0f)
    , mFaceChangeSpeed(60.0f)
    , mDoDebugScores(false)
{
	mNumActiveRows = 5; // 5 course thumbnails are loaded at a time
	for (int i = 0; i < mNumActiveRows; i++) {
		mActiveCourseThumbs[i] = nullptr;
		mPaneLevelWindows[i]   = nullptr;
	}

	for (int i = 0; i < 2; i++) {
		mHandicapSel[i]        = 3;
		mOnyonObj[i]           = nullptr;
		mVsPiki[i]             = nullptr;
		mWinCounter[i]         = nullptr;
		mPaneRulesLR[i]        = nullptr;
		mPlayerWinCounts[i]    = false;
		mDebugWinCounts[i]     = 0;
		mCharacterMainIcons[i] = nullptr;
		mPlayerIconOffset[i]   = 0.0f;
	}

	for (int i = 0; i < 3; i++) {
		mButtonMsgTags[i] = nullptr;
	}

	for (int i = 0; i < 5; i++) {
		mOlimarFaceScales[i] = 1.0f;
		mLouieFaceScales[i]  = 1.0f;
	}
	mPowerIconOffset = 0.0f;

	for (int i = 0; i < 6; i++) {
		mPaneRulesDesc1[i]  = nullptr;
		mPaneRulesDesc2[i]  = nullptr;
		mPaneRulesIcons[i]  = nullptr;
		mOlimarFacePanes[i] = nullptr;
		mLouieFacePanes[i]  = nullptr;
	}

	for (int i = 0; i < 12; i++) {
		mPowerIconPanes[i] = nullptr;
	}
	mDemoScale         = 1.0f;
	mScreenXPos        = 0.0f;
	_290               = 115.0f;
	_294               = 170.0f;
	_298               = 470.0f;
	_29C               = 420.0f;
	mOnyonGoalOffset.x = -15.0f;
	mOnyonGoalOffset.y = -15.0f;
	mScrollParm._00    = 20.0f;
	mScrollParm._04    = 0.99f;
	mScrollParm._08    = 1.5f;
	mScrollParm._0C    = 1.25f;
	mScrollParm._10    = 2.5f;
	mCanCancel         = false;
}

/**
 * @note Address: 0x8039AB60
 * @note Size: 0x10C
 */
TVsSelect::~TVsSelect()
{
	if (mDebugHeap) {
		mDispMember->mDebugExpHeap->freeAll();
		mDebugHeap->destroy();
	}
	mDebugHeap = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void TVsSelect::setDebugHeapParent(JKRHeap* heap)
{
	mDebugHeapParent = heap;
	P2ASSERTLINE(769, mDebugHeapParent);
}

/**
 * @note Address: 0x8039AC6C
 * @note Size: 0x2554
 */
void TVsSelect::doCreate(JKRArchive* arc)
{
	mController2 = new Controller(JUTGamePad::PORT_1);
	P2ASSERTLINE(783, mController2);
	mArchive = arc;

	DispMemberVsSelect* disp = static_cast<DispMemberVsSelect*>(getDispMember());
	int something            = 0;
	if (disp->isID(OWNER_MRMR, MEMBER_VS_SELECT)) {
		mDispMember = disp;
		something   = mDispMember->mStageNumber;
	} else {
		mIsSection = true;
	}

	if (mIsSection) {
		if (mDebugHeapParent) {
			mDebugHeap = JKRExpHeap::create(0x200000, mDebugHeapParent, true);
			P2ASSERTLINE(800, mDebugHeap);
			mDispMember                        = new (mDebugHeap, 0) DispMemberVsSelect;
			mDispMember->mDebugExpHeap         = mDebugHeap;
			mDispMember->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
			mDispMember->mRedWinCount          = randInt(99);
			mDispMember->mBlueWinCount         = randInt(99);
			mDispMember->mRedWinCount          = 2;
			mDispMember->mBlueWinCount         = 0;
			mDispMember->mStageCount           = VS_Stage_Count;
			if (randFloat() > 0.5f) {
				mDispMember->mVsWinner = 0;
			} else {
				mDispMember->mVsWinner = 1;
			}
			mDispMember->mVsWinner = 0; // so much for the random thing we just did
			getOwner()->setDispMember(mDispMember);
		} else {
			JUT_PANICLINE(820, "set DebugHeapParent. mail to morimun.\n");
		}
	}

	if (!mIsSection) {
		mDispMember->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
	}

	mController     = getGamePad();
	mHandicapSel[0] = mDispMember->mOlimarHandicap;
	mHandicapSel[1] = mDispMember->mLouieHandicap;

	u64 tags[1] = { '4771_00' };
	mMesgData   = new TOffsetMsgSet(tags, '4770_00', 1);

	mRedPodScreen = new TScreenBase(arc, 2);
	mRedPodScreen->create("red_pod.blo", 0x20000);
	mRedPodScreen->addAnim("red_pod.bck");
	mRedPodScreen->addAnim("red_pod.btp");

	mBluePodScreen = new TScreenBase(arc, 2);
	mBluePodScreen->create("blue_pod.blo", 0x20000);
	mBluePodScreen->addAnim("blue_pod.bck");
	mBluePodScreen->addAnim("blue_pod.btp");

	mStageCount    = mDispMember->mStageCount;
	mLevelTextures = new ResTIMG*[mStageCount];

	if (mIsSection) {
		something = randFloat() * mStageCount;
	}

	JKRHeap* backup = JKRGetCurrentHeap();
	mDispMember->mDebugExpHeap->becomeCurrentHeap();
	sys->heapStatusStart("vsSelectTexture", nullptr);
	mVsSelectTextureArc = nullptr;
	char path[50];
	const char* textureArchiveName = "res_vsSelectTexture.szs";
	og::newScreen::makeLanguageResName(path, textureArchiveName);
	mVsSelectTextureArc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	JUT_ASSERTLINE(893, mVsSelectTextureArc, "arcName = %s\n", path);
	sys->heapStatusEnd("vsSelectTexture");

	const char* texNames[VS_Stage_Count]
	    = { "timg/otegaru.bti",  "timg/ujyaujya.bti", "timg/hirobiro.bti", "timg/karakuchi.bti", "timg/semai.bti",
	        "timg/hiyahiya.bti", "timg/nobinobi.bti", "timg/kakukaku.bti", "timg/meiro.bti",     "timg/tile.bti" };
	for (int i = 0; i < mStageCount; i++) {
		mLevelTextures[i] = JKRGetArchiveImageResource(mVsSelectTextureArc, texNames[i]);

		// Use louie face as a default if level icon not found
		if (!mLevelTextures[i]) {
			mLevelTextures[i] = JKRGetArchiveImageResource(mArchive, "timg/loozy_icon.bti");
		}
	}

	const char* olimarTexNames[5]
	    = { "timg/orima001.bti", "timg/orima002.bti", "timg/orima003.bti", "timg/orima004.bti", "timg/orima005.bti" };
	const char* louieTexNames[5] = { "timg/lui001.bti", "timg/lui002.bti", "timg/lui003.bti", "timg/lui004.bti", "timg/lui005.bti" };
	for (int i = 0; i < 5; i++) {
		mOrimaTexture[i] = JKRGetArchiveImageResource(mVsSelectTextureArc, olimarTexNames[i]);
		P2ASSERTLINE(926, mOrimaTexture[i]);
		mLouieTexture[i] = JKRGetArchiveImageResource(mVsSelectTextureArc, louieTexNames[i]);
		P2ASSERTLINE(930, mLouieTexture[i]);
	}

	mSlotTexturesScreen = new TScreenBase(mVsSelectTextureArc, 0);
	mSlotTexturesScreen->create("vs_slot_texture.blo", 0x20000);

	u64 iconTags[12] = { 'P0icon00', 'P0icon01', 'P0icon02', 'P0icon03', 'P0icon04', 'P0icon05',
	                     'P1icon00', 'P1icon01', 'P1icon02', 'P1icon03', 'P1icon04', 'P1icon05' };

	for (int i = 0; i < 12; i++) {
		TVsSelectSlotIndex info      = *TVsSelectSlotIndex::getIndexInfo(i);
		mPowerIconPanes[info.mIndex] = mSlotTexturesScreen->mScreenObj->search(iconTags[info.mTagID]);
		P2ASSERTLINE(949, mPowerIconPanes[info.mIndex]);
	}

	mArrowBlink = new og::Screen::ArrowAlphaBlink;
	mIndPane    = new TVsSelectIndPane("otegaru.bti", 336.0, 240.0);
	mIndPane->createIndTexture("AK_kagerouRR.bti");
	mIndPane->mTexture2->mWrapS = GX_REPEAT;
	mIndPane->mTexture2->mWrapT = GX_REPEAT;
	mIndPane->createCaptureTexture(GX_TF_RGB5A3);
	ResTIMG* timg = mIndPane->mTexture3->mTexInfo;
	P2ASSERTLINE(962, timg);
	timg->mTransparency = 2;
	timg                = mIndPane->mTexture1->mTexInfo;
	P2ASSERTLINE(966, timg);
	timg->mTransparency = 2;
	timg                = mIndPane->mTexture2->mTexInfo;
	P2ASSERTLINE(970, timg);
	timg->mTransparency = 2;

	mIndPic = new J2DPictureEx(mIndPane->mTexture1->mTexInfo, 0x20000);

	mMainScreen = new TVsSelectScreen(arc, 2);
	mMainScreen->create("vs_select_main.blo", 0x1020000);
	mMainScreen->addAnim("vs_select_main.btk");
	mMainScreen->addAnim("vs_select_main_02.btk");

	P2DScreen::Mgr_tuning* screen = mMainScreen->getScreenObj();
	mOlimarFacePanes[0]           = static_cast<J2DPicture*>(screen->search('Porbody0')); // big icon 1
	mOlimarFacePanes[1]           = static_cast<J2DPicture*>(screen->search('Porbody1')); // big icon 2
	mOlimarFacePanes[2]           = static_cast<J2DPicture*>(screen->search('Porbody2')); // big icon 3
	mOlimarFacePanes[3]           = static_cast<J2DPicture*>(screen->search('Ph_or'));    // for handicap
	mOlimarFacePanes[4]           = static_cast<J2DPicture*>(screen->search('Pbor0'));    // for curr score
	mOlimarFacePanes[5]           = static_cast<J2DPicture*>(screen->search('Pbor1'));    // for curr score

	mLouieFacePanes[0] = static_cast<J2DPicture*>(screen->search('Plobody0')); // big icon 1
	mLouieFacePanes[1] = static_cast<J2DPicture*>(screen->search('Plobody1')); // big icon 2
	mLouieFacePanes[2] = static_cast<J2DPicture*>(screen->search('Plobody2')); // big icon 3
	mLouieFacePanes[3] = static_cast<J2DPicture*>(screen->search('Ph_lo'));    // for handicap
	mLouieFacePanes[4] = static_cast<J2DPicture*>(screen->search('Pblo0'));    // for curr score
	mLouieFacePanes[5] = static_cast<J2DPicture*>(screen->search('Pblo1'));    // for curr score

	for (int i = 0; i < 6; i++) {
		P2ASSERTLINE(1004, mOlimarFacePanes[i]);
		mOlimarFacePanes[i]->setBasePosition(J2DPOS_Center);
		P2ASSERTLINE(1006, mLouieFacePanes[i]);
		mLouieFacePanes[i]->setBasePosition(J2DPOS_Center);
	}

	mStickImage  = og::Screen::setCallBack_3DStickSmall(mArchive, screen, 'ota3dl');
	mPane3DStick = screen->search('ota3dl');
	P2ASSERTLINE(1018, mPane3DStick);
	P2ASSERTLINE(1019, mStickImage);
	mStickImage->mAnimGroup->setSpeed(2.0f);
	mStickImage->mAnimGroup->start();
	mStickAnim = new og::Screen::StickAnimMgr(mStickImage);
	P2ASSERTLINE(1024, mStickAnim);

	mCharacterMainIcons[0] = screen->search('Norima');
	P2ASSERTLINE(1027, mCharacterMainIcons[0]);
	mPlayerMainIconPos[0].x = mCharacterMainIcons[0]->mTranslateX;
	mPlayerMainIconPos[0].y = mCharacterMainIcons[0]->mTranslateY;

	mCharacterMainIcons[1] = screen->search('Nluie');
	P2ASSERTLINE(1032, mCharacterMainIcons[1]);
	mPlayerMainIconPos[1].x = mCharacterMainIcons[1]->mTranslateX;
	mPlayerMainIconPos[1].y = mCharacterMainIcons[1]->mTranslateY;

	J2DPane* light = screen->search('Ploligh2');
	P2ASSERTLINE(1039, light);

	u64 btnmsg[3] = { 'Tbmenu3', 'Tbmenu4', 'Tbmenu5' };
	for (int i = 0; i < 3; i++) {
		mButtonMsgTags[i] = screen->search(btnmsg[i]);
		JUT_ASSERTLINE(1046, mButtonMsgTags[i], "btnmsg[%d] is unknown", i);
		mButtonMsgTags[i]->setInfluencedAlpha(false, false);
	}

	mOnyonObj[0] = new TVsSelectOnyon(light, mRedPodScreen->mScreenObj->search('Nyonyon'));
	mOnyonObj[0]->reset();

	light = mMainScreen->mScreenObj->search('Ploligh');
	P2ASSERTLINE(1056, light);

	mOnyonObj[1] = new TVsSelectOnyon(light, mBluePodScreen->mScreenObj->search('Nyonyon'));
	mOnyonObj[1]->reset();

	mVsPiki[0]       = new TVsPiki(screen->search('Prp_l_00'), screen->search('Prp_r_00'), screen->search('Prp_f_00'));
	u64 pikiTags[10] = { 'Nrp_00', 'Nrp_01', 'Nrp_02', 'Nrp_03', 'Nrp_04', 'Nrp_05', 'Nrp_06', 'Nrp_07', 'Nrp_08', 'Nrp_09' };
	for (int i = 0; i < 10; i++) {
		J2DPane* pane = screen->search(pikiTags[i]);
		if (pane) {
			pane->hide();
		}
	}

	mVsPiki[1]        = new TVsPiki(screen->search('Pbp_l_00'), screen->search('Pbp_r_00'), screen->search('Pbp_f_00'));
	u64 pikiTags2[10] = { 'Nbp_00', 'Nbp_01', 'Nbp_02', 'Nbp_03', 'Nbp_04', 'Nbp_05', 'Nbp_06', 'Nbp_07', 'Nbp_08', 'Nbp_09' };
	for (int i = 0; i < 10; i++) {
		J2DPane* pane = screen->search(pikiTags2[i]);
		if (pane) {
			pane->hide();
		}
	}

	for (int i = 0; i < 2; i++) {
		mVsPiki[i]->init(mHandicapSel[i]);
		mDispPikiNum[i] = mHandicapSel[i] * 5;
	}

	og::Screen::setCallBack_CounterRV(screen, 'Prp_f_r', 'Prp_f_l', 'Prp_f_l', &mDispPikiNum[0], 2, 0, 1, mArchive);
	og::Screen::setCallBack_CounterRV(screen, 'Prp_f_r1', 'Prp_f_l1', 'Prp_f_l1', &mDispPikiNum[1], 2, 0, 1, mArchive);

	mWinCounter[0] = new TVsSelectCBWinNum(const_cast<char**>(og::Screen::SujiTex32), 4, mArchive);
	mWinCounter[0]->init(screen, 'Pori_r', 'Pori_l', 'Pori_c', &mPlayerWinCounts[0], true);
	mWinCounter[0]->setPuyoAnim(true);
	screen->addCallBack('Pori_r', mWinCounter[0]);

	mWinCounter[1] = new TVsSelectCBWinNum(const_cast<char**>(og::Screen::SujiTex32), 4, mArchive);
	mWinCounter[1]->init(screen, 'Plui_r', 'Plui_l', 'Plui_c', &mPlayerWinCounts[1], true);
	mWinCounter[1]->setPuyoAnim(true);
	screen->addCallBack('Plui_r', mWinCounter[1]);

	mEfxCountKira = new efx2d::T2DCountKira;

	mListScreen = new TVsSelectListScreen(arc, 0);
	mListScreen->create("vs_select_list.blo", 0x20000);
	mPaneStageList = mMainScreen->mScreenObj->search('Nlist');
	P2ASSERTLINE(1110, mPaneStageList);

	mBackgroundScreen = new TScreenBase(arc, 1);
	mBackgroundScreen->create("vs_select_bg.blo", 0x1020000);
	mBackgroundScreen->addAnim("vs_select_bg.btk");

	mFireScreen = new TScreenBase(arc, 2);
	mFireScreen->create("vs_select_fire.blo", 0x1020000);
	mFireScreen->addAnim("vs_select_fire.btk");
	mFireScreen->addAnim("vs_select_fire_02.btk");

	mRulesWindow = new TVsSelectExplanationWindow(arc, 12);
	mRulesWindow->create("vs_main_rule_window.blo", 0x1020000);
	mRulesWindow->addAnim("vs_main_rule_window.btk");
	mRulesWindow->addAnim("vs_main_rule_window_02.btk");
	mRulesWindow->addAnim("vs_main_rule_window_03.btk");
	mRulesWindow->addAnim("vs_main_rule_window_04.btk");
	mRulesWindow->addAnim("vs_main_rule_window_05.btk");
	mRulesWindow->addAnim("vs_main_rule_window_06.btk");
	mRulesWindow->addAnim("vs_main_rule_window_07.btk");
	mRulesWindow->addAnim("vs_main_rule_window_08.btk");
	mRulesWindow->addAnim("vs_main_rule_window_09.btk");
	mRulesWindow->addAnim("vs_main_rule_window_10.btk");
	mRulesWindow->addAnim("vs_main_rule_window_11.btk");
	mRulesWindow->addAnim("vs_main_rule_window_12.btk");

	mPaneRulesInfo = mRulesWindow->mScreenObj->search('Nmg0');
	P2ASSERTLINE(1142, mPaneRulesInfo);
	JGeometry::TVec2f test = mPaneRulesInfo->getTranslate();
	mRulesPanePos          = test;

	mPaneRulesLR[0] = mRulesWindow->mScreenObj->search('Nyaji00');
	P2ASSERTLINE(1146, mPaneRulesLR[0]);
	mPaneRulesLR[1] = mRulesWindow->mScreenObj->search('Nyaji01');
	P2ASSERTLINE(1149, mPaneRulesLR[1]);

	mPaneRulesDesc1[0] = mRulesWindow->mScreenObj->search('T0mg00');
	P2ASSERTLINE(1152, mPaneRulesDesc1[0]);
	mPaneRulesDesc2[0] = mRulesWindow->mScreenObj->search('T0mgs00');
	P2ASSERTLINE(1154, mPaneRulesDesc2[0]);

	mPaneRulesDesc1[1] = mRulesWindow->mScreenObj->search('T0mg01');
	P2ASSERTLINE(1157, mPaneRulesDesc1[1]);
	mPaneRulesDesc2[1] = mRulesWindow->mScreenObj->search('T0mgs01');
	P2ASSERTLINE(1159, mPaneRulesDesc2[1]);

	mPaneRulesDesc1[2] = mRulesWindow->mScreenObj->search('T0mg02');
	P2ASSERTLINE(1162, mPaneRulesDesc1[2]);
	mPaneRulesDesc2[2] = mRulesWindow->mScreenObj->search('T0mgs02');
	P2ASSERTLINE(1164, mPaneRulesDesc2[2]);

	mPaneRulesDesc1[3] = mRulesWindow->mScreenObj->search('T0mg03');
	P2ASSERTLINE(1167, mPaneRulesDesc1[3]);
	mPaneRulesDesc2[3] = mRulesWindow->mScreenObj->search('T0mgs03');
	P2ASSERTLINE(1169, mPaneRulesDesc2[3]);

	mPaneRulesDesc1[4] = mRulesWindow->mScreenObj->search('T0mg04');
	P2ASSERTLINE(1172, mPaneRulesDesc1[4]);
	mPaneRulesDesc2[4] = mRulesWindow->mScreenObj->search('T0mgs04');
	P2ASSERTLINE(1174, mPaneRulesDesc2[4]);

	mPaneRulesDesc1[5] = mRulesWindow->mScreenObj->search('T0mg05');
	P2ASSERTLINE(1177, mPaneRulesDesc1[5]);
	mPaneRulesDesc2[5] = mRulesWindow->mScreenObj->search('T0mgs05');
	P2ASSERTLINE(1179, mPaneRulesDesc2[5]);

	mPaneRulesIcons[0] = mRulesWindow->mScreenObj->search('P0icon00');
	P2ASSERTLINE(1182, mPaneRulesIcons[0]);
	mPaneRulesIcons[1] = mRulesWindow->mScreenObj->search('P0icon01');
	P2ASSERTLINE(1185, mPaneRulesIcons[1]);
	mPaneRulesIcons[2] = mRulesWindow->mScreenObj->search('P0icon02');
	P2ASSERTLINE(1188, mPaneRulesIcons[2]);
	mPaneRulesIcons[3] = mRulesWindow->mScreenObj->search('P0icon03');
	P2ASSERTLINE(1191, mPaneRulesIcons[3]);
	mPaneRulesIcons[4] = mRulesWindow->mScreenObj->search('P0icon04');
	P2ASSERTLINE(1194, mPaneRulesIcons[4]);
	mPaneRulesIcons[5] = mRulesWindow->mScreenObj->search('P0icon05');
	P2ASSERTLINE(1197, mPaneRulesIcons[5]);

	for (int i = 0; i < 6; i++) {
		mPaneRulesIcons[i]->hide();
	}

	J2DPane* desc = mRulesWindow->mScreenObj->search('Trule_11');
	P2ASSERTLINE(1204, desc);
	desc->setMsgID('2013_00'); // "Get a cherry, spin the roulette!"

	desc = mRulesWindow->mScreenObj->search('Trule_m6');
	P2ASSERTLINE(1208, desc);
	desc->setMsgID('2013_00'); // "Get a cherry, spin the roulette!"

	changeSlotPage();

	screen            = mListScreen->getScreenObj();
	mCurrMinActiveRow = 0;
	mCurrActiveRowSel = 2;
	mCurrMaxActiveRow = mNumActiveRows - 1;

	u64 stageTags[5] = { 'Tmenu00', 'Tmenu01', 'Tmenu02', 'Tmenu03', 'Tmenu04' };
	J2DPane* icon    = screen->search(stageTags[mCurrMinActiveRow]);
	P2ASSERTLINE(1227, icon);
	mMinSelYOffset = icon->mTranslateY;
	icon           = screen->search(stageTags[mCurrMaxActiveRow]);
	P2ASSERTLINE(1231, icon);
	mMaxSelYOffset = icon->mTranslateY;
	mIndexPaneList = new TIndexPane*[mNumActiveRows];
	for (int i = 0; i < mNumActiveRows; i++) {
		mIndexPaneList[i] = new TIndexPane(nullptr, screen, stageTags[i]);
		mIndexPaneList[i]->mPane->setMsgID('0000_01');
		mIndexPaneList[i]->setIndex(i);
		mIndexPaneList[i]->mPane->show();
	}

	f32 calc = getHeight();

	mIndexGroup               = new TIndexGroup;
	mIndexGroup->mHeight      = calc;
	TIndexGroup* grp          = mIndexGroup;
	grp->mMaxRollSpeed        = mScrollParm._00;
	grp->mSpeedSlowdownFactor = mScrollParm._04;
	grp->mRollSpeedMod        = mScrollParm._08;
	grp->mSpeedSpeedupFactor  = mScrollParm._0C;
	grp->mInitialRollSpeed    = mScrollParm._10;

	paneInit();
	changePaneInfo();

	int num = mDispMember->mRedWinCount;
	if (mDispMember->mVsWinner == 0) {
		num--;
	}
	if (num < 0) {
		num = 0;
	}
	mPlayerWinCounts[0] = num;

	num = mDispMember->mBlueWinCount;
	if (mDispMember->mVsWinner == 1) {
		num--;
	}
	if (num < 0) {
		num = 0;
	}
	mPlayerWinCounts[1] = num;

	int max = mStageCount - something;
	max += 2;
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < mNumActiveRows; j++) {
			mIndexPaneList[j]->setOffset(calc);
			mIndexPaneList[j]->mYOffset = mIndexPaneList[j]->getPaneOffsetY();
		}
		updateIndex(0);
		mIndexGroup->reset();
		changePaneInfo();
	}
	changeFaceTexture();
	backup->becomeCurrentHeap();
}

/**
 * @note Address: 0x8039D1E0
 * @note Size: 0x1244
 */
bool TVsSelect::doUpdate()
{
	if (mIsSection && mDoDebugScores) {
		mPlayerWinCounts[0] = mDebugWinCounts[0];
		mPlayerWinCounts[1] = mDebugWinCounts[1];
		changeFaceTexture();
	}
	updateFacePicture();

	if (mIsSection && mForceDemoStart) {
		mForceDemoStart = false;
		demoStart();
	}

	bool rulesinactive = false;
	if (mRulesWindow->mState == 0) {
		rulesinactive = true;
	}

	if (mCanInput && mDispMember->mState == Screen::Game2DMgr::CHECK2D_VsSelect_Default
	    && !static_cast<TVsSelectScene*>(getOwner())->mConfirmEndWindow->mHasDrawn) {
		if (mZoomState == 0) {
			if (rulesinactive) {
				if (mController->getButtonDown() & Controller::PRESS_R) {
					mHandicapSel[0]++;
					if (mHandicapSel[0] > 10) {
						mHandicapSel[0] = 10;
					} else {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_INCREMENT, 0);
					}
				}
				if (mController->getButtonDown() & Controller::PRESS_L) {
					mHandicapSel[0]--;
					if (mHandicapSel[0] < 1) {
						mHandicapSel[0] = 1;
					} else {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECREMENT, 0);
					}
				}

				if (mController2->getButtonDown() & Controller::PRESS_R) {
					mHandicapSel[1]++;
					if (mHandicapSel[1] > 10) {
						mHandicapSel[1] = 10;
					} else {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_INCREMENT, 0);
					}
				}
				if (mController2->getButtonDown() & Controller::PRESS_L) {
					mHandicapSel[1]--;
					if (mHandicapSel[1] < 1) {
						mHandicapSel[1] = 1;
					} else {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECREMENT, 0);
					}
				}
			} else {
				if (mController->getButtonDown()
				    & (Controller::CSTICK_RIGHT | Controller::ANALOG_RIGHT | Controller::PRESS_R | Controller::PRESS_DPAD_RIGHT)) {
					if (mCurrentRulesPage == 0 && !mDoChangeRulesPage) {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
						mDoChangeRulesPage = true;
					}
				} else if (mController->getButtonDown()
				           & (Controller::CSTICK_LEFT | Controller::ANALOG_LEFT | Controller::PRESS_L | Controller::PRESS_DPAD_LEFT)) {
					if (mCurrentRulesPage && !mDoChangeRulesPage) {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
						mDoChangeRulesPage = true;
					}
				}
			}

			if (mController->getButtonDown() & Controller::PRESS_B) {
				if (rulesinactive) {
					mDrawAlpha = 0;
					static_cast<TVsSelectScene*>(getOwner())->mConfirmEndWindow->start(nullptr);
				} else {
					mRulesWindow->closeWindow();
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				}
			} else if (mController->getButtonDown() & Controller::PRESS_Z) {
				mRulesWindow->openClose();
			} else if (rulesinactive) {
				if (mController->getButtonDown() & (Controller::PRESS_START | Controller::PRESS_A)) {
					if (!mIsSection) {
						mIsDemoStarted = 1;
						demoStart();
					}
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
					mRulesWindow->closeWindow();
				} else if (mController->getButton() & (Controller::ANALOG_UP) || mController->getButton() & (Controller::PRESS_DPAD_UP)) {
					if (mStickAnimState != 1) {
						mIndexGroup->upIndex();
					} else if (mIndexGroup->mStateID == TIndexGroup::IDGroup_Idle && !mIsSelectIndexChange) {
						mIsSelectIndexChange = true;
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
					}
				} else if (mController->getButton() & (Controller::ANALOG_DOWN)
				           || mController->getButton() & (Controller::PRESS_DPAD_DOWN)) {
					if (mStickAnimState != 2) {
						mIndexGroup->downIndex();
					} else if (mIndexGroup->mStateID == TIndexGroup::IDGroup_Idle && !mIsSelectIndexChange) {
						mIsSelectIndexChange = true;
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
					}
				}
			}
		} else if (mCanCancel && mController->getButtonDown() & Controller::PRESS_B) {
			mCanCancel = false;
			if (mZoomState != 1) {
				mZoomLevel = mZoomFrameMax;
			}
			mZoomState = 2;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
			for (int i = 0; i < 2; i++) {
				TVsSelectOnyon* onyon = mOnyonObj[i];
				f32 calc              = onyon->mGoalAngle;
				Vector2f pos          = onyon->mCurrentPosition;
				pos.x += 400.0f * sinf(calc);
				pos.y += 400.0f * cosf(calc);
				onyon->mGoalPosition = pos;
			}
		}
	}

	mDispPikiNum[0] = mHandicapSel[0] * 5;
	mDispPikiNum[1] = mHandicapSel[1] * 5;

	if (mIsSelectIndexChange) {
		mIsSelectIndexChange++;
		if (mIsSelectIndexChange > 15) {
			mIsSelectIndexChange = 0;
		}
	}

	if (mDispMember->mState != Screen::Game2DMgr::CHECK2D_VsSelect_InDemo && mDispMember->mDispWorldMapInfoWin0->mResult == 1
	    && !mIsSection) {
		mIsDemoStarted      = 0;
		mDispMember->mState = Screen::Game2DMgr::CHECK2D_VsSelect_InDemo;
		getOwner()->endScene(nullptr);
	}

	mBackgroundScreen->update();
	mListScreen->update();
	mMainScreen->update();
	mRulesWindow->update();
	mRedPodScreen->update();
	mBluePodScreen->update();
	mFireScreen->update();

	if (updateList()) {
		changePaneInfo();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
	}

	switch (mZoomState) {
	case 1:
	case 2:
		doZoom();
		doMoveOnyon();
		break;
	case 3:
		doMoveOnyon();
		doScreenEffect();
		break;
	default:
		mZoomLevel += 1.0f;
		if (mIsUpdatedScore && mZoomLevel == 35.0f) {
			mIsUpdatedScore = false;
			Vector2f pos;

			if (mDispMember->mVsWinner == 0) {

				f32 calc                  = 1.5f;
				mPlayerWinCounts[0]       = mDispMember->mRedWinCount;
				mWinCounter[0]->mIsNeedUp = true;
				int num                   = mDispMember->mRedWinCount;
				if (num >= 100) { // Are you telling me something changes from 100 WINS???
					calc = 2.5f;
				} else if (num >= 10) {
					calc = 2.0f;
				}
				mEfxCountKira->mScale = calc;
				J2DPane* pane         = mMainScreen->mScreenObj->search('Pori_c');
				pane->setBasePosition(J2DPOS_Center);
				pos.x = pane->getGlbVtx(GLBVTX_BtmLeft).x + pane->getWidth() * 0.5f;
				pos.y = pane->getGlbVtx(GLBVTX_BtmLeft).y + pane->getHeight() * 0.5f;
				efx2d::Arg arg(pos);
				mEfxCountKira->create(&arg);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_2P_WIN_COUNT, 0);
			} else if (mDispMember->mVsWinner == 1) {
				f32 calc                  = 1.5f;
				mPlayerWinCounts[1]       = mDispMember->mBlueWinCount;
				mWinCounter[1]->mIsNeedUp = true;
				int num                   = mDispMember->mBlueWinCount;
				if (num >= 100) {
					calc = 2.5f;
				} else if (num >= 10) {
					calc = 2.0f;
				}
				mEfxCountKira->mScale = calc;
				J2DPane* pane         = mMainScreen->mScreenObj->search('Plui_c');
				pane->setBasePosition(J2DPOS_Center);
				pos.x = pane->getGlbVtx(GLBVTX_BtmLeft).x + pane->getWidth() * 0.5f;
				pos.y = pane->getGlbVtx(GLBVTX_BtmLeft).y + pane->getHeight() * 0.5f;
				efx2d::Arg arg(pos);
				mEfxCountKira->create(&arg);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_2P_WIN_COUNT, 0);
			}
			changeFaceTexture();
		}
		if (mZoomLevel > 100.0f) {
			mEfxCountKira->fade();
		}
	}

	mBackgroundScreen->mScreenObj->setXY(mScreenXPos, 0.0f);
	mMainScreen->mScreenObj->setXY(mScreenXPos, 0.0f);
	mListScreen->mScreenObj->setXY(mScreenXPos, 0.0f);
	mFireScreen->mScreenObj->setXY(mScreenXPos, 0.0f);

	mBackgroundScreen->mScreenObj->scaleScreen(mDemoScale);
	mMainScreen->mScreenObj->scaleScreen(mDemoScale);
	mListScreen->mScreenObj->scaleScreen(mDemoScale);
	mFireScreen->mScreenObj->scaleScreen(mDemoScale);

	f32 x1, y1, x2, y2;
	f32 spotOffsetX = -mScreenXPos / mDemoScale;
	f32 scale       = 1.0f / mDemoScale;
	mPaneSpot->updateScale(scale);
	f32 x = 1.1f * spotOffsetX + 324.0f;
	f32 y = 243.0f - 40.0f * (1.0f - 1.0f / mDemoScale);
	mPaneSpot->setOffset(x, y);

	f32 dist = 0.0f;
	if (mIndexGroup->isState(TIndexGroup::IDGroup_Down) != false) {
		dist = 30.0f;
	}
	if (mIndexGroup->mStateID == TIndexGroup::IDGroup_Up) {
		dist = -30.0f;
	}
	mLevelNameYPos += (dist - mLevelNameYPos) * 0.3f;
	if ((f32)fabs(mLevelNameYPos - dist) < 0.1f) {
		mLevelNameYPos = dist;
	}
	mPaneLevelName->setOffset(0.0f, mLevelNameYPos + -3.0f);

	mCharacterMainIcons[0]->setOffset(mPlayerMainIconPos[0].x + mPlayerIconOffset[0].x, mPlayerMainIconPos[0].y + mPlayerIconOffset[0].y);
	mCharacterMainIcons[1]->setOffset(mPlayerMainIconPos[1].x + mPlayerIconOffset[1].x, mPlayerMainIconPos[1].y + mPlayerIconOffset[1].y);

	if (mDoChangeRulesPage) {
		mRuleChangeTimer += mRulePageChangeSpeed;
		if (mRuleChangeTimer > PI) {
			mRuleChangeTimer     = 0.0f;
			mDoChangeRulesPage   = false;
			mIsRulesPageChanging = true;
		}
		if (mCurrentRulesPage) {
			mRulesMoveXPos = sinf(mRuleChangeTimer) * 600.0f;
			if (mIsRulesPageChanging && mRuleChangeTimer > HALF_PI) {
				mCurrentRulesPage    = 0;
				mIsRulesPageChanging = false;
				changeSlotPage();
			}
		} else {
			mRulesMoveXPos = sinf(mRuleChangeTimer) * -600.0f;
			if (mIsRulesPageChanging && mRuleChangeTimer > HALF_PI) {
				mIsRulesPageChanging = false;
				mCurrentRulesPage    = 1;
				changeSlotPage();
			}
		}
		mPaneRulesLR[0]->hide();
		mPaneRulesLR[1]->hide();
	} else {
		// mRuleChangeTimer += mRulePageChangeSpeed;
		f32 alpha = mArrowBlink->calc() * 255.0f;
		for (int i = 0; i < 2; i++) {
			mPaneRulesLR[i]->setAlpha(alpha);
		}
		if (mCurrentRulesPage == 0) {
			mPaneRulesLR[0]->hide();
			mPaneRulesLR[1]->show();
		} else {
			mPaneRulesLR[0]->show();
			mPaneRulesLR[1]->hide();
		}
	}
	mPaneRulesInfo->setOffset(mRulesPanePos.x + mRulesMoveXPos, mRulesPanePos.y);

	const JGeometry::TVec3f& bottomLeft1 = mPaneStageNameBg->getGlbVtx(GLBVTX_BtmLeft);
	x1                                   = bottomLeft1.x;
	y1                                   = bottomLeft1.y;
	const JGeometry::TVec3f& topRight1   = mPaneStageNameBg->getGlbVtx(GLBVTX_TopRight);
	TVsSelectScreen* scrn                = static_cast<TVsSelectScreen*>(mMainScreen);
	JGeometry::TBox2f box;
	box.i.x                         = x1;
	box.i.y                         = y1;
	box.f.y                         = topRight1.y;
	box.f.x                         = topRight1.x;
	scrn->mCallbackScissor->mBounds = box;

	const JGeometry::TVec3f& bottomLeft2 = mPaneStageList->getGlbVtx(GLBVTX_BtmLeft);
	x2                                   = bottomLeft2.x;
	y2                                   = bottomLeft2.y;
	const JGeometry::TVec3f& topRight2   = mPaneStageList->getGlbVtx(GLBVTX_TopRight);
	f32 right                            = topRight2.x;
	f32 top                              = topRight2.y;
	mScissorBounds.set(x2, y2, right, top);

	for (int i = 0; i < 2; i++) {
		mVsPiki[i]->update(mHandicapSel[i]);
		mWinCounter[i]->update();
	}

	mFireScreen->mScreenObj->setAlpha(255.0f * mFireAlphaRate);
	for (int i = 0; i < 3; i++) {
		mButtonMsgTags[i]->setAlpha(255);
	}

	for (int i = 0; i < 2; i++) {
		mVsPiki[i]->setAlpha(255);
	}

	if (mZoomState < 1) {
		mPaneStarAlpha = 1.0f;
		mOtherLevelsFadeAlpha += 0.2f;
		if (mOtherLevelsFadeAlpha > 1.0f) {
			mOtherLevelsFadeAlpha = 1.0f;
		}
	} else {
		mPaneStarAlpha *= 0.9f;
		mOtherLevelsFadeAlpha -= 0.1f;
		if (mOtherLevelsFadeAlpha < 0.0f) {
			mOtherLevelsFadeAlpha = 0.0f;
		}
	}
	mPaneStars->setAlpha(mPaneStarAlpha * 255.0f);

	for (int i = 0; i < mNumActiveRows; i++) {
		mActiveCourseThumbs[i]->updateScale(mWindowScale);
		mActiveCourseThumbs[i]->setBasePosition(J2DPOS_Center);
		mPaneLevelWindows[i]->updateScale(mWindowScale);
		mPaneLevelWindows[i]->setBasePosition(J2DPOS_Center);
		if (i != mCurrActiveRowSel) {
			mIndexPaneList[i]->mPane->setAlpha(mOtherLevelsFadeAlpha * 255.0f);
		} else {
			u8 alpha      = -1;
			J2DPane* pane = mIndexPaneList[i]->mPane;
			if (pane->getAlpha() < 200) {
				alpha = pane->getAlpha() + 50;
			}
			pane->setAlpha(alpha);
		}
	}

	if (mIndexGroup->mStateID == TIndexGroup::IDGroup_Idle) {
		_234 += 0.05f;
		if (_234 > 1.0f) {
			_234 = 1.0f;
		}
	} else {
		_234 *= 0.8f;
	}

	if (mForceResetParm) {
		mForceResetParm           = false;
		TIndexGroup* grp          = mIndexGroup;
		grp->mMaxRollSpeed        = mScrollParm._00;
		grp->mSpeedSlowdownFactor = mScrollParm._04;
		grp->mRollSpeedMod        = mScrollParm._08;
		grp->mSpeedSpeedupFactor  = mScrollParm._0C;
		grp->mInitialRollSpeed    = mScrollParm._10;
	}

	return false;
}

/**
 * @note Address: 0x8039E454
 * @note Size: 0xAF0
 */
void TVsSelect::doDraw(Graphics& gfx)
{
	j3dSys.drawInit();
	if (mZoomState > 0) {
		if (mIsSection) {
			GXSetPixelFmt(GX_PF_RGBA6_Z24, GX_ZC_LINEAR);
		}
		gfx.mOrthoGraph.setPort();
		GXSetAlphaUpdate(GX_TRUE);
		GXSetColorUpdate(GX_TRUE);
		mIndPic->draw(0.0f, 0.0f, 336.0f, 240.0f, false, false, false);
		Graphics::dirtyInitGX();
		Graphics::initGX();
		GXSetColorUpdate(GX_FALSE);
		GXSetDstAlpha(GX_TRUE, 0);
		GXSetBlendMode(GX_BM_BLEND, GX_BL_ONE, GX_BL_ZERO, GX_LO_CLEAR);
		GXSetNumTexGens(0);
		GXSetNumIndStages(0);
		GXSetNumChans(1);

		GXSetChanMatColor(GX_COLOR0A0, JUtility::TColor(0, 0, 0, 255));

		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
		GXSetCullMode(GX_CULL_NONE);
		GXSetNumTevStages(1);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);

		Mtx mtx;
		PSMTXIdentity(mtx);
		GXLoadPosMtxImm(mtx, 0);
		GXLoadTexMtxImm(mtx, 0x1e, GX_MTX2x4);

		GXSetCurrentMtx(0);
		GXClearVtxDesc();

		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
		GXBegin(GX_QUADS, GX_VTXFMT0, 4);

		f32 zero = 0.0f;
		f32 pos1 = 386.0f;
		f32 pos2 = 290.0f;

		GXTexCoord2f32(zero, zero);
		GXTexCoord2f32(zero, pos1);

		GXTexCoord2f32(zero, zero);
		GXTexCoord2f32(pos1, pos2);

		GXTexCoord2f32(zero, zero);
		GXTexCoord2f32(pos2, zero);

		J2DPicture pics[2];
		pics[0] = J2DPicture("navi_l.bti");
		pics[1] = J2DPicture("navi_l.bti");

		GXSetDstAlpha(GX_TRUE, 0xff);

		for (int i = 0; i < 2; i++) {
			if (mOnyonObj[i]->_30 > 0.0f) {
				mIsOnyonHitGoal       = true;
				TVsSelectOnyon* onyon = mOnyonObj[i];
				f32 coord, scale, x;
				f32 calc = onyon->_30;
				coord    = onyon->mCurrentPosition.x;
				f32 minX = _290;
				scale    = calc * 25.0f;
				calc     = mOnyonGoalOffset.x + (coord - minX);
				x        = calc / (_298 - minX);
				f32 minY = _294;
				coord    = 240.0f * ((mOnyonGoalOffset.y + (onyon->mCurrentPosition.y - minY)) / (_29C - minY));
				pics[i].setBasePosition(J2DPOS_Center);
				calc = x * 336.0f;
				pics[i].draw(calc - (scale * 0.5f), coord - (scale * 0.5f), scale, scale, false, false, false);
			}
		}

		GXSetDstAlpha(GX_TRUE, 0xff);
		mIndPane->mTexture3->init();
		GXSetDstAlpha(GX_FALSE, 0);
		GXSetAlphaUpdate(GX_FALSE);
		GXSetColorUpdate(GX_TRUE);
		mIndPane->draw();
		GXSetDstAlpha(GX_FALSE, 255);
		GXSetAlphaUpdate(GX_TRUE);
		GXSetColorUpdate(GX_FALSE);

		gfx.mOrthoGraph.setPort();
		mIndPic->draw(0.0f, 0.0f, 336.0f, 240.0f, false, false, false);
		GXInvalidateTexAll();
		mIndPane->mTexture3->capture(0, 0, (GXTexFmt)mIndPane->mTexture3->mTexInfo->mTextureFormat, false, 0);
		GXSetColorUpdate(GX_TRUE);
		gfx.mPerspGraph.setPort();
	}

	J2DPerspGraph* graf = gfx.getPerspGraph();
	graf->setPort();
	mBackgroundScreen->draw(gfx, graf);

	JGeometry::TBox2f bounds;
	bounds = mScissorBounds;
	GXSetScissor(bounds.i.x, bounds.i.y, bounds.getWidth(), bounds.getHeight());
	mListScreen->draw(gfx, graf);
	GXSetScissor(0, 0, 640, 480);

	mMainScreen->draw(gfx, graf);

	if (mZoomState) {
		mRedPodScreen->draw(gfx, graf);
		mBluePodScreen->draw(gfx, graf);
	}

	gfx.mOrthoGraph.setPort();

	for (int i = 0; i < 2; i++) {
		mVsPiki[i]->draw();
	}

	if (mZoomState >= 3) {
		for (int i = 0; i < 2; i++) {
			mOnyonObj[i]->draw();
		}
	}

	gfx.mPerspGraph.setPort();
	mRulesWindow->draw(gfx, graf);
	mFireScreen->draw(gfx, graf);

	bool needBG           = false;
	TVsSelectScene* owner = static_cast<TVsSelectScene*>(getOwner());
	if (owner->mConfirmEndWindow->mHasDrawn) {
		needBG = true;

		owner = static_cast<TVsSelectScene*>(getOwner());
		if (owner->mConfirmEndWindow->mIsActive) {
			mDrawAlpha += 20;
			if (mDrawAlpha > 200) {
				mDrawAlpha = 200;
			}
		} else {
			if (mDrawAlpha > 20) {
				mDrawAlpha -= 20;
			} else {
				mDrawAlpha = 0;
			}
		}
	}

	if (needBG) {
		JUtility::TColor c;
		c.set(0, 0, 0, 0);
		c.a = mDrawAlpha;
		drawFillScreen(graf, c);
	}

	if (mRulesWindow->mState) {
		gfx.mOrthoGraph.setPort();
		for (int i = 0; i < 6; i++) {
			int baseID = 0;
			if (mCurrentRulesPage == 0) {
				baseID = 6;
			}
			J2DPictureEx* pane = (J2DPictureEx*)mPowerIconPanes[i + baseID];
			f32 x              = mPowerIconOffset.x;
			f32 y              = mPowerIconOffset.y;
			Vector2f offset(x, y);
			x = mPaneRulesIcons[i]->mGlobalMtx[0][3];
			y = mPaneRulesIcons[i]->mGlobalMtx[1][3];
			Vector2f pos(x, y);
			f32 width  = pane->getWidth();
			f32 height = pane->getHeight();
			pane->draw(offset.x + (pos.x - width * 0.5f), offset.y + (pos.y - height * 0.5f), width, height, false, false, false);
			mPowerIconPanes[i + baseID]->calcMtx();
		}
		gfx.mPerspGraph.setPort();
	}

	JUtility::TColor c;
	c.set(0, 0, 0, 255 - mFadeAlpha);
	drawFillScreen(graf, c);
}

/**
 * @note Address: 0x8039F334
 * @note Size: 0xC
 */
void TVsSelect::doUpdateFadeinFinish()
{
	mCanInput = true;
}

/**
 * @note Address: 0x8039F340
 * @note Size: 0xAC
 */
void TVsSelect::doUpdateFadeoutFinish()
{
#if defined(VERSION_JP)
	P2ASSERTLINE(2094, mDispMember);
#else
	P2ASSERTLINE(2096, mDispMember);
#endif
	mDispMember->mOlimarHandicap     = mHandicapSel[0];
	mDispMember->mLouieHandicap      = mHandicapSel[1];
	mDispMember->mSelectedStageIndex = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	if (mIsDemoStarted) {
		mDispMember->mState = Screen::Game2DMgr::CHECK2D_VsSelect_ExitFinished;
	} else {
		mDispMember->mState = Screen::Game2DMgr::CHECK2D_VsSelect_CancelToTitle;
	}
}

/**
 * @note Address: 0x8039F3EC
 * @note Size: 0x3CC
 */
void TVsSelect::paneInit()
{
	mPaneStageNameBg = mMainScreen->mScreenObj->search('PICT_075');
#if defined(VERSION_JP)
	P2ASSERTLINE(2116, mPaneStageNameBg);
#else
	P2ASSERTLINE(2119, mPaneStageNameBg);
#endif

	mPaneLevelName = mMainScreen->mScreenObj->search('Tbmenu11');
#if defined(VERSION_JP)
	P2ASSERTLINE(2119, mPaneLevelName);
#else
	P2ASSERTLINE(2122, mPaneLevelName);
#endif

	mActiveCourseThumbs[0] = static_cast<J2DPicture*>(mListScreen->mScreenObj->search('Plistim0'));
	mActiveCourseThumbs[1] = static_cast<J2DPicture*>(mListScreen->mScreenObj->search('Plistim1'));
	mActiveCourseThumbs[2] = static_cast<J2DPicture*>(mListScreen->mScreenObj->search('Plistim2'));
	mActiveCourseThumbs[3] = static_cast<J2DPicture*>(mListScreen->mScreenObj->search('Plistim3'));
	mActiveCourseThumbs[4] = static_cast<J2DPicture*>(mListScreen->mScreenObj->search('Plistim4'));

	mPaneLevelWindows[0] = mListScreen->mScreenObj->search('Pliswin0');
	mPaneLevelWindows[1] = mListScreen->mScreenObj->search('Pliswin1');
	mPaneLevelWindows[2] = mListScreen->mScreenObj->search('Pliswin2');
	mPaneLevelWindows[3] = mListScreen->mScreenObj->search('Pliswin3');
	mPaneLevelWindows[4] = mListScreen->mScreenObj->search('Pliswin4');

	for (int i = 0; i < mNumActiveRows; i++) {
#if defined(VERSION_JP)
		JUT_ASSERTLINE(2136, mActiveCourseThumbs[i], "coursename[%d] not find\n", i);
#else
		JUT_ASSERTLINE(2139, mActiveCourseThumbs[i], "coursename[%d] not find\n", i);
#endif
#if defined(VERSION_JP)
		JUT_ASSERTLINE(2137, mPaneLevelWindows[i], "pictureframe[%d] not find\n", i);
#else
		JUT_ASSERTLINE(2140, mPaneLevelWindows[i], "pictureframe[%d] not find\n", i);
#endif
	}

	mPaneSpot = mMainScreen->mScreenObj->search('Pspot0');
#if defined(VERSION_JP)
	P2ASSERTLINE(2142, mPaneSpot);
#else
	P2ASSERTLINE(2145, mPaneSpot);
#endif

	f32 test                = 20.0f;
	mSelectionYOffset       = mIndexPaneList[mCurrActiveRowSel]->getPaneYOffset() - 10.0f;
	mCursorSelectionYOffset = mSelectionYOffset + test;

	mPaneStars = mMainScreen->mScreenObj->search('Nstarpik');
#if defined(VERSION_JP)
	P2ASSERTLINE(2151, mPaneStars);
#else
	P2ASSERTLINE(2154, mPaneStars);
#endif

	changeCourseTexture();
}

/**
 * @note Address: 0x8039F7B8
 * @note Size: 0x240
 */
void TVsSelect::changePaneInfo()
{
	int id        = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	J2DPane* pane = mPaneLevelName;
	u64 tag       = getNameID(id);
	pane->setMsgID(tag);

	mLevelNameYPos *= -1.0f;
	if (!mLoopDrum) {
		mStickAnimState = 0;
		mStickAnim->stickUpDown();
		int id = mIndexPaneList[mCurrActiveRowSel]->getIndex();
		f32 y  = mIndexPaneList[mCurrActiveRowSel]->getPaneYOffset();
		if (id == 0) {
			mStickAnimState = 1;
			mStickAnim->stickDown();
		}
		if (id == mStageCount - 1) {
			mStickAnimState = 2;
			mStickAnim->stickUp();
		}
		if (mStickAnimState == 0) {
			mIsSelectIndexChange = 0;
		} else {
			f32 calc                   = 0.0f;
			mIsSelectIndexChange       = 1;
			mIndexGroup->mScrollOffset = 0.0f;
			for (int i = 0; i < mNumActiveRows; i++) {
				mIndexPaneList[i]->setOffset(calc);
			}
		}

		for (int i = 0; i < mNumActiveRows; i++) {
			mIndexPaneList[i]->mPane->show();
			int paneIndex = mIndexPaneList[i]->getIndex();
			if (paneIndex != id) {
				TIndexPane* ind = mIndexPaneList[i];
				f32 y2          = ind->getPaneYOffset();
				ind->getIndex();
				if ((mIndexPaneList[i]->getIndex() > id && y > y2) || (mIndexPaneList[i]->getIndex() < id && y < y2)) {
					mIndexPaneList[i]->mPane->hide();
				}
			}
		}
	}
}

/**
 * @note Address: 0x8039F9F8
 * @note Size: 0x84
 */
u64 TVsSelect::getNameID(int id)
{
#if defined(VERSION_JP)
	P2ASSERTLINE(2223, id <= getIdMax());
#else
	P2ASSERTLINE(2226, id <= getIdMax());
#endif
	int course = getCourseID(id);
	return mMesgData->getMsgID(course - 1);
}

/**
 * @note Address: 0x8039FA7C
 * @note Size: 0x8
 */
int TVsSelect::getIdMax()
{
	return mStageCount;
}

/**
 * @note Address: 0x8039FA84
 * @note Size: 0x3C
 */
int TVsSelect::getCourseID(int id)
{
	if (!mIsSection) {
		id = (*mDispMember->mTitleInfo)(id)->mIndex;
	}
	return id;
}

/**
 * @note Address: N/A
 * @note Size: 0x194
 */
void TVsSelect::reset()
{
	mDemoScale  = 1.0f;
	mScreenXPos = 0.0f;
	mZoomState  = 0;
	mZoomLevel  = 0.0f;
	for (int i = 0; i < 2; i++) {
		mOnyonObj[i]->reset();
	}
	mIsZoomActive   = 0;
	mIsOnyonHitGoal = 0;
}

/**
 * @note Address: 0x8039FAC0
 * @note Size: 0x1F4
 */
void TVsSelect::doZoom()
{
	if (mZoomState == 1) {
		if (mZoomLevel > mZoomFrameMax) {
			mZoomLevel = mZoomFrameMax;
		} else {
			mZoomLevel += 1.0f;
		}
	} else if (mZoomState == 2) {
		mZoomLevel -= 1.0f;
		if (mZoomLevel <= 0.0f) {
			mZoomLevel  = 0.0f;
			bool finish = true;
			Vector2f offset(320.0f, 240.0f);
			for (int i = 0; i < 2; i++) {
				Vector2f diff = mOnyonObj[i]->mCurrentPosition;
				diff -= offset;
				if (diff.sqrLength() < 160000.0f) {
					finish = false;
				}
			}
			if (finish)
				mZoomState = 0;
		}
	}

	f32 calc  = sinf(mZoomLevel * HALF_PI / mZoomFrameMax);
	f32 scale = 0.0f;
	f32 temp;
	if (!(calc < 0.25f)) {
		temp  = 1.0f;
		scale = (calc - 0.25f) * 4.0f / 3.0f;
		if (calc == 1.0f) {
			scale = temp;
			if (mIsZoomActive) {
				mZoomState = 3;
				changeIndirectTexture();
				mCanCancel = false;
			}
		}
	}
	mScreenXPos = mDemoOffsetMax * scale;
	mDemoScale  = (mDemoScaleMax - 1.0f) * scale + 1.0f;
}

/**
 * @note Address: 0x8039FCB4
 * @note Size: 0x6C
 */
void TVsSelect::doMoveOnyon()
{
	for (int i = 0; i < 2; i++) {
		f32 calc = 1.0f;
		if (mZoomState == 2) {
			calc = 2.0f;
		}
		mOnyonObj[i]->posUpdate(calc);
	}
}

/**
 * @note Address: 0x8039FD20
 * @note Size: 0x214
 */
void TVsSelect::doScreenEffect()
{
	mZoomLevel += mIndShuki;
	if (mZoomLevel > TAU) {
		mZoomLevel -= TAU;
	}
	f32 mod = mIndVal;
	mIndPane->setXY(sinf(mZoomLevel) * mod, cosf(mZoomLevel) * mod);

	if (mIsZoomActive) {
		bool isAnyAtGoal = true;
		for (int i = 0; i < 2; i++) {
			if (mOnyonObj[i]->_30 != 2.0f) {
				isAnyAtGoal = false;
			}
		}
		if (isAnyAtGoal) {
			mEndDelayTimer += 1.0f;
			if (mEndDelayTimer > 15.0f && !mIsSection) {
				mZoomState          = 0;
				mDispMember->mState = Screen::Game2DMgr::CHECK2D_VsSelect_InDemo;
#if defined(VERSION_JP)
				P2ASSERTLINE(2371, getOwner());
#else
				P2ASSERTLINE(2374, getOwner());
#endif
				getOwner()->endScene(nullptr);
#if !defined(VERSION_JP)
				for (int i = 0; i < mNumActiveRows; i++) {
					if (i != mCurrActiveRowSel) {
						mIndexPaneList[i]->mPane->hide();
					}
				}
#endif
			}
		} else {
			mEndDelayTimer = 0.0f;
		}
	}
}

/**
 * @note Address: 0x8039FF34
 * @note Size: 0x4FC
 */
void TVsSelect::onyonDemoInit()
{
	f32 goalX, goalY, x, y;
	f32 test;
	if (randFloat() > 0.5f) {
		test = 1.0f;
	} else {
		test = -1.0f;
	}

	for (int i = 0; i < 2; i++) {
		goalX = 0.5f * (_290 + _298);
		goalY = 0.5f * (_294 + _29C);

		mOnyonObj[i]->reset();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_ONY_MOVE, 0);
		goalX += test * (25.0f * sinf(TAU * randFloat()) + 20.0f);
		goalY += test * (10.0f * sinf(TAU * randFloat()) + 10.0f);
		mOnyonObj[i]->mGoalPosition = Vector2f(goalX, goalY);

		if (randFloat() < 0.5f) {
			if (test > 0.0f) {
				x = randFloat() * 50.0f + 640.0f;
			} else {
				x = randFloat() * -50.0f;
			}
			y = randFloat() * 480.0f;
		} else {
			if (test > 0.0f) {
				y = randFloat() * 50.0f + 480.0f;
			} else {
				y = randFloat() * -50.0f;
			}
			x = randFloat() * 640.0f;
		}
		mOnyonObj[i]->mCurrentPosition = Vector2f(x, y);
		mOnyonObj[i]->_00              = test;
		test *= -1.0f;
	}
	mZoomLevel = 0.0f;
}

/**
 * @note Address: 0x803A0430
 * @note Size: 0x1C0
 */
void TVsSelect::demoStart()
{
	reset();
	mZoomState = 1;
	mCanCancel = true;
	mEfxCountKira->fade();
	mIsZoomActive = 1;
	onyonDemoInit();
}

/**
 * @note Address: 0x803A05F0
 * @note Size: 0x9C
 */
void TVsSelect::changeCourseTexture()
{
	for (int i = 0; i < mNumActiveRows; i++) {
		int id = getCourseID(i);
		mActiveCourseThumbs[i]->changeTexture(mLevelTextures[id], 0);
	}
}

/**
 * @note Address: 0x803A068C
 * @note Size: 0xD0
 */
void TVsSelect::changeIndirectTexture()
{
	int id = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	id     = getCourseID(id);
	mIndPane->mTexture1->storeTIMG(mLevelTextures[id], (u8)0);
	mIndPic->changeTexture(mLevelTextures[id], 0);
	mActiveCourseThumbs[mCurrActiveRowSel]->changeTexture(mIndPane->mTexture3->mTexInfo, 0);
}

/**
 * @note Address: 0x803A075C
 * @note Size: 0xB8
 */
void TVsSelect::setShortenIndex(int id, int id2, bool)
{
#if defined(VERSION_JP)
	P2ASSERTLINE(2495, id < mNumActiveRows);
#else
	P2ASSERTLINE(2503, id < mNumActiveRows);
#endif
	id2 = getCourseID(id2);
	mActiveCourseThumbs[id]->changeTexture(mLevelTextures[id2], 0);
}

/**
 * @note Address: 0x803A0814
 * @note Size: 0x140
 */
void TVsSelect::updateFacePicture()
{
	int state  = mChangeFaceState;
	int state2 = 4 - state;
	for (int i = 0; i < 6; i++) {
		if (state >= 0) {
			mOlimarFacePanes[i]->updateScale(mOlimarFaceScales[state].x, mOlimarFaceScales[state].y);
		}
		mOlimarFacePanes[i]->setAngleY(mChangeFaceTimer);

		if (state >= 0) {
			mLouieFacePanes[i]->updateScale(mLouieFaceScales[state2].x, mLouieFaceScales[state2].y);
		}
		mLouieFacePanes[i]->setAngleY(mChangeFaceTimer);
	}

	if (mChangeFaceTimer >= 1.0f) {
		mChangeFaceTimer += mFaceChangeSpeed;
		if (mChangeFaceTimer >= 180.0f) {
			changeFaceTexture();
		}
		if (mChangeFaceTimer >= 360.0f) {
			mChangeFaceTimer = 0.0f;
		}
	}
}

/**
 * @note Address: 0x803A0954
 * @note Size: 0x1F4
 */
void TVsSelect::changeFaceTexture()
{
	int diff = mPlayerWinCounts[0] - mPlayerWinCounts[1];
	if (diff <= -3) {
		if (mChangeFaceState == -1 || mChangeFaceTimer > 180.0f) {
			mChangeFaceState = 0;
			changeOrimaTexture(0);
			changeLouieTexture(4);
		} else if (mChangeFaceState != 0) {
			mChangeFaceTimer = 1.0f;
		}
	} else if (diff <= -1) {
		if (mChangeFaceState == -1 || mChangeFaceTimer > 180.0f) {
			mChangeFaceState = 1;
			changeOrimaTexture(1);
			changeLouieTexture(3);
		} else if (mChangeFaceState != 1) {
			mChangeFaceTimer = 1.0f;
		}
	} else if (diff < 1) {
		if (mChangeFaceState == -1 || mChangeFaceTimer > 180.0f) {
			mChangeFaceState = 2;
			changeOrimaTexture(2);
			changeLouieTexture(2);
		} else if (mChangeFaceState != 2) {
			mChangeFaceTimer = 1.0f;
		}
	} else if (diff < 3) {
		if (mChangeFaceState == -1 || mChangeFaceTimer > 180.0f) {
			mChangeFaceState = 3;
			changeOrimaTexture(3);
			changeLouieTexture(1);
		} else if (mChangeFaceState != 3) {
			mChangeFaceTimer = 1.0f;
		}
	} else {
		if (mChangeFaceState == -1 || mChangeFaceTimer > 180.0f) {
			mChangeFaceState = 4;
			changeOrimaTexture(4);
			changeLouieTexture(0);
		} else if (mChangeFaceState != 4) {
			mChangeFaceTimer = 1.0f;
		}
	}
}

/**
 * @note Address: 0x803A0B48
 * @note Size: 0x9C
 */
void TVsSelect::changeOrimaTexture(int id)
{
	ResTIMG* timg = mOrimaTexture[id];
#if defined(VERSION_JP)
	P2ASSERTLINE(2589, timg);
#else
	P2ASSERTLINE(2597, timg);
#endif

	for (int i = 0; i < 6; i++) {
		mOlimarFacePanes[i]->changeTexture(timg, 0);
	}
}

/**
 * @note Address: 0x803A0BE4
 * @note Size: 0x9C
 */
void TVsSelect::changeLouieTexture(int id)
{
	ResTIMG* timg = mLouieTexture[id];
#if defined(VERSION_JP)
	P2ASSERTLINE(2603, timg);
#else
	P2ASSERTLINE(2611, timg);
#endif

	for (int i = 0; i < 6; i++) {
		mLouieFacePanes[i]->changeTexture(timg, 0);
	}
}

/**
 * @note Address: 0x803A0C80
 * @note Size: 0x118
 */
void TVsSelect::changeSlotPage()
{
	if (mCurrentRulesPage) {
		for (int i = 0; i < 6; i++) {
			TVsSelectSlotIndex* info = TVsSelectSlotIndex::getIndexInfo(i);
			u64 tag                  = info->mMesg;
			mPaneRulesDesc1[i]->setMsgID(tag);
			mPaneRulesDesc2[i]->setMsgID(tag);
		}
	} else {
		for (int i = 0; i < 6; i++) {
			TVsSelectSlotIndex* info = TVsSelectSlotIndex::getIndexInfo(i + 6);
			u64 tag                  = info->mMesg;
			mPaneRulesDesc1[i]->setMsgID(tag);
			mPaneRulesDesc2[i]->setMsgID(tag);
		}
	}
}

/**
 * @note Address: 0x803A0D98
 * @note Size: 0x9C
 */
void TVsSelectScene::doCreateObj(JKRArchive* arc)
{
	TVsSelect* obj = new TVsSelect;
	registObj(obj, arc);
	mObject           = obj;
	mConfirmEndWindow = new TConfirmEndWindow("endWindow");
	registObj(mConfirmEndWindow, arc);
}

/**
 * @note Address: 0x803A0E34
 * @note Size: 0x34
 */
bool TVsSelectScene::doStart(Screen::StartSceneArg* arg)
{
	mObject->start(arg);
	return true;
}

} // namespace Morimura
