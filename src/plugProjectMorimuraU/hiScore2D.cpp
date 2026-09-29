#include "Morimura/HiScore.h"
#include "Game/Data.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "Morimura/mrUtil.h"
#include "Controller.h"
#include "PSSystem/PSSystemIF.h"
#include "Dolphin/rand.h"
#include "trig.h"

static const char name[] = "hiScore2D";

namespace Morimura {

bool THiScore::mForceClear         = false;
bool THiScore::mForceClear2        = false;
bool THiScore::mLoopDrum           = false;
f32 THiScore::mPictureOffsetY      = -8.0f;
bool THiScore::mChangeAlpha        = true;
f32 THiScore::mListOffsetY         = 25.0f;
f32 THiScore::mClearListHeightRate = 1.55f;
ResTIMG* THiScore::mPicTexture[16] = { nullptr };

u64 THiScore::mNameID[16] = {
	'8502_00', // "Days Spent:"
	'8503_00', // "Total Pikmin Lost:"
	'8504_00', // "Pikmin Lost in Battle:"
	'8505_00', // "Pikmin Left Behind:"
	'8506_00', // "Pikmin Lost to Fire:"
	'8507_00', // "Pikmin Lost to Water:"
	'8508_00', // "Pikmin Lost to Electricity:"
	'8509_00', // "Pikmin Lost to Explosions:"
	'8510_00', // "Pikmin Lost to Poison:"
	'8511_00', // "Pikmin Born:"
	'8512_00', // "Red Pikmin Born:"
	'8513_00', // "Yellow Pikmin Born:"
	'8514_00', // "Blue Pikmin Born:"
	'8515_00', // "White Pikmin Born:"
	'8516_00', // "Purple Pikmin Born:"
	'8517_00'  // "Play Time:"
};

int THiScore::mHiscoreDataOrder[16] = {
	0, 8, 1, 2, 3, 4, 5, 6, 7, 14, 10, 11, 9, 13, 12, 15,
};

/**
 * @note Address: N/A
 * @note Size: 0x254
 */
void setScreenAlpha(J2DPane*, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8037C9AC
 * @note Size: 0x214
 */
void THiScoreIndPane::draw()
{
	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_FALSE);
	GXSetDstAlpha(GX_FALSE, 0);
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
	GXSetCurrentMtx(0);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;

	GXPosition3f32(zero, zero, zero);
	GXPosition3f32((int)mTexture3->mTexInfo->getWidth(), zero, zero);
	GXPosition3f32((int)mTexture3->mTexInfo->getWidth(), (int)mTexture3->mTexInfo->getHeight(), zero);
	GXPosition3f32(zero, (int)mTexture3->mTexInfo->getHeight(), zero);

	GXSetDstAlpha(GX_FALSE, 0);
	GXSetAlphaUpdate(GX_FALSE);
	TIndPane::draw();
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void THiScoreIndPane::setRadius(s16 p1, f32 radius)
{
	mMtxUseType  = 0;
	mTexMtxScale = p1;
	mMtxYOffset  = 0.0f;
	mMtxXOffset  = 0.0f;
	mRotation    = (radius * 360.0f) / TAU;
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
THiScoreListScreen::THiScoreListScreen(JKRArchive* arc, int)
    : TListScreen(arc, 0)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8037CBC0
 * @note Size: 0x32C
 */
void THiScoreListScreen::create(char const* path, u32 screenFlags)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(path, screenFlags, mArchive);

	TCallbackScissor* scis = new TCallbackScissor;

	JGeometry::TBox2f* bounds = mScreenObj->search('Nlist1')->getBounds();
	JGeometry::TBox2f box(*bounds);
	box.f.x += 5.0f;
	box.i.y -= 5.0f;
	box.i.x *= mScreenObj->mstTuningScaleX;
	box.i.y *= mScreenObj->mstTuningScaleY;
	box.f.x *= mScreenObj->mstTuningScaleX;
	box.f.y *= mScreenObj->mstTuningScaleY;
	scis->mBounds = box;
	mScreenObj->addCallBack('Nlist1', scis);

	TScissorPane* scispane = new TScissorPane;
	scispane->mBounds      = box;
	mScreenObj->search('Pmap_l')->appendChild(scispane);

	TScissorPane* scispane2 = new TScissorPane;
	scispane2->mBounds      = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mScreenObj->search('Nlist1')->appendChild(scispane2);

	og::Screen::setCallBackMessage(mScreenObj);

	TCallbackScissor* scis2 = new TCallbackScissor;
	scis2->mBounds          = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);

	mScreenObj->addCallBack('Tmenu04', scis2);
	og::Screen::setAlphaScreen(mScreenObj);
}

/**
 * @note Address: 0x8037CEEC
 * @note Size: 0x1CC
 */
THiScore::THiScore()
    : TScrollList("hiscore")
    , mListScreen(nullptr)
    , mIndPane(nullptr)
    , mHighScorePic(nullptr)
    , mSelIconPane(0)
    , m3DStickPane(nullptr)
    , mStickAnimPic(nullptr)
    , mStickAnimMgr(nullptr)
    , mScaleMgrList(nullptr)
    , mIsAllTreasures(false)
    , mState(false)
    , mAlphaTimer(1.0f)
    , mIndPaneXDirection(0.0f)
    , mAngleGrowRate(0.05f)
    , mPaneAngle(0.0f)
    , mCornerAnimTimer(0.0f)
    , mCornerSelScaleModifier(0.02f)
    , mCornerAnimSpeed(0.25f)
    , mCornerSelScale(0.0f)
    , mCornerXOffset(0.0f)
{
	mNoAlphaUpdate     = false;
	mIndPaneType       = 0;
	mErrorSoundCounter = 0;
	mDoEnd             = 0;
	mTevBlock[0]       = nullptr;
	mTevBlock[1]       = nullptr;
	mColorBlock[0]     = nullptr;
	mColorBlock[1]     = nullptr;
	mColorChangeTimer  = 0.0f;
	mNumActiveRows     = 5; // 5 high score images active at once

	for (int i = 0; i < 6; i++) {
		mScoreCounts[i]   = 0;
		mScaleCounter1[i] = nullptr;
		mCurrScore1[i]    = 0;
		mCurrScore2[i]    = 0;
		mScaleCounter2[i] = nullptr;
		mScaleCounter3[i] = nullptr;
	}

	mSelIconCorners[0] = 0;
	mSelIconCorners[1] = 0;
	mSelIconCorners[2] = 0;
	mSelIconCorners[3] = 0;

	mScrollParm._00 = 8.0f;
	mScrollParm._08 = 1.2f;
	mScrollParm._04 = 0.99f;
	mScrollParm._0C = 1.1f;
	mScrollParm._10 = 2.0f;
}

/**
 * @note Address: 0x8037D0BC
 * @note Size: 0x105C
 */
void THiScore::doCreate(JKRArchive* arc)
{
	mArchive = arc;

	DispMemberHighScore* disp = static_cast<DispMemberHighScore*>(getDispMember());
	if (disp->isID(OWNER_MRMR, MEMBER_HIGH_SCORE)) {
		mDisp = disp;
		P2ASSERTLINE(287, mDisp);
		mIsAllTreasures = sys->getPlayCommonData()->mCommonStoryFlags.isSet(Game::PlayCommonData::CommonData_AllTreasures);
	} else {
		mDisp      = new DispMemberHighScore;
		mIsSection = true;
	}

	if (mForceClear) {
		mIsAllTreasures = true;
	}

	if (!mIsAllTreasures) {
		mScaleMgrList = new og::Screen::ScaleMgr*[mNumActiveRows];
		for (int i = 0; i < mNumActiveRows; i++) {
			mScaleMgrList[i] = new og::Screen::ScaleMgr;
		}
	}

	mController = getGamePad();

	const char* timgname[GAME_HIGHSCORE_COUNT]
	    = { "timg/hi_score_00.bti", "timg/hi_score_01.bti", "timg/hi_score_02.bti", "timg/hi_score_03.bti",
	        "timg/hi_score_04.bti", "timg/hi_score_05.bti", "timg/hi_score_06.bti", "timg/hi_score_07.bti",
	        "timg/hi_score_08.bti", "timg/hi_score_09.bti", "timg/hi_score_10.bti", "timg/hi_score_11.bti",
	        "timg/hi_score_12.bti", "timg/hi_score_13.bti", "timg/hi_score_14.bti", "timg/hi_score_15.bti" };

	// if the image archive was found, use it to get the images, otherwise get default from the main screen archive
	if (mDisp->mImageArchive) {
		for (int i = 0; i < 16; i++) {
			mPicTexture[i] = static_cast<ResTIMG*>(mDisp->mImageArchive->getResource(timgname[i]));
			P2ASSERTLINE(325, mPicTexture[i]);
		}
	} else {
		for (int i = 0; i < 16; i++) {
			mPicTexture[i] = static_cast<ResTIMG*>(mArchive->getResource("timg/hi_score_00.bti"));
			P2ASSERTLINE(331, mPicTexture[i]);
		}
	}

	mMainScreen = new TScreenBase(arc, 2);
	mMainScreen->create("hi_score_main.blo", 0x20000);
	mMainScreen->addAnim("hi_score_main.bck");
	mMainScreen->addAnim("hi_score_main.bpk");

	P2DScreen::Mgr_tuning* screen = mMainScreen->getScreenObj();
	mStickAnimPic                 = og::Screen::setCallBack_3DStickSmall(mArchive, screen, 'ota3dl');
	m3DStickPane                  = screen->search('ota3dl');
	P2ASSERTLINE(347, m3DStickPane);
	P2ASSERTLINE(348, mStickAnimPic);
	mStickAnimPic->mAnimGroup->setSpeed(2.0f);
	mStickAnimPic->mAnimGroup->start();
	mStickAnimMgr = new og::Screen::StickAnimMgr(mStickAnimPic);
	P2ASSERTLINE(353, mStickAnimMgr);

	mHighScorePic = static_cast<J2DPictureEx*>(screen->search('PICT_001'));
	P2ASSERTLINE(357, mHighScorePic);

	mListScreen = new THiScoreListScreen(arc, 0);
	mListScreen->create("hi_score_list.blo", 0x20000);

	screen         = mListScreen->getScreenObj();
	mPaneListPos.x = screen->search('Nlist1')->mTranslateX;
	mPaneListPos.y = screen->search('Nlist1')->mTranslateY;
	mPaneIconPos.x = screen->search('Nselicon')->mTranslateX;
	mPaneIconPos.y = screen->search('Nselicon')->mTranslateY;
	mSelIconPane   = screen->search('Nselicon');
	if (mSelIconPane) {
		mSelIconCorners[0] = screen->search('Psel_lu');
		P2ASSERTLINE(375, mSelIconCorners[0]);
		mSelIconCorners[1] = screen->search('Psel_ru');
		P2ASSERTLINE(378, mSelIconCorners[1]);
		mSelIconCorners[2] = screen->search('Psel_ll');
		P2ASSERTLINE(381, mSelIconCorners[2]);
		mSelIconCorners[3] = screen->search('Psel_rl');
		P2ASSERTLINE(384, mSelIconCorners[3]);
	}

	_B0               = 1;
	mCurrMinActiveRow = 0;
	mCurrActiveRowSel = 2; // selection will be the minimum currently visible + 2
	mCurrMaxActiveRow = mNumActiveRows - 1;

	u64 tags1[5] = { 'Nmenu00', 'Nmenu01', 'Nmenu02', 'Nmenu03', 'Nmenu04' };
	u64 tags2[5] = { 'Tmenu00', 'Tmenu01', 'Tmenu02', 'Tmenu03', 'Tmenu04' };

	J2DPane* pane = screen->search(tags1[mCurrMinActiveRow]);
	P2ASSERTLINE(401, pane);
	mMinSelYOffset = pane->mTranslateY;

	pane = screen->search(tags1[mCurrMaxActiveRow]);
	P2ASSERTLINE(405, pane);
	mMaxSelYOffset = pane->mTranslateY;

	mIndexPaneList = new TIndexPane*[mNumActiveRows];

	for (int i = 0; i < mNumActiveRows; i++) {
		mIndexPaneList[i]         = new TIndexPane(nullptr, screen, tags1[i]);
		mIndexPaneList[i]->mPane2 = screen->search(tags2[i]);

		JUT_ASSERTLINE(415, screen->search(tags1[i]), "assertindex = %d \n", i);

		mIndexPaneList[i]->mPane->getFirstChildPane()->getFirstChildPane()->setInfluencedAlpha(false, false);

		J2DPane* cPane = mIndexPaneList[i]->mPane2;
		P2ASSERTLINE(423, cPane);
		cPane->setMsgID(getNameID(i));
		cPane = cPane->getFirstChildPane();
		P2ASSERTLINE(428, cPane);
		cPane->setInfluencedAlpha(false, false);
		cPane->setMsgID(getNameID(i));
		mIndexPaneList[i]->setIndex(i);
	}

	if (mIsAllTreasures) {
		for (int i = 0; i < mNumActiveRows; i++) {
			J2DPane* cPane = mIndexPaneList[i]->getMainPane();
			cPane->appendChild(cPane->getFirstChildPane()->getFirstChildPane());
			mIndexPaneList[i]->getMainPane()->getFirstChildPane()->removeFromParent();
			mIndexPaneList[i]->getMainPane()->appendChild(mIndexPaneList[i]->getSubPane());

			J2DPictureEx* pic = static_cast<J2DPictureEx*>(mIndexPaneList[i]->mPane->getFirstChildPane());
			if (mPicTexture[i]) {
				pic->changeTexture(mPicTexture[i], 0);
			}
			changeTevBlock(mHighScorePic->getMaterial()->getTevBlock(), pic->getMaterial()->getTevBlock());
			changeColorBlock(&mHighScorePic->getMaterial()->mColorBlock, &pic->getMaterial()->mColorBlock);
		}
	}

	mIndexPaneList[0]->mPane->show();
	mIndexGroup = new TIndexGroup;
	updateLayout();
	TIndexGroup* group          = mIndexGroup;
	group->mMaxRollSpeed        = mScrollParm._00;
	group->mSpeedSlowdownFactor = mScrollParm._04;
	group->mRollSpeedMod        = mScrollParm._08;
	group->mSpeedSpeedupFactor  = mScrollParm._0C;
	group->mInitialRollSpeed    = mScrollParm._10;

	J2DPane* total = mMainScreen->mScreenObj->search('Tot3rds');
	P2ASSERTLINE(469, total);
	total->setMsgID('8472_00'); // 3rd

	u64 tagList0[6] = { 'Phe1st1', 'Phe2nd1', 'Phe3rd1', 'Pot1st1', 'Pot2nd1', 'Pot3rd1' };
	u64 tagList1[6] = { 'Phe1st4', 'Phe2nd4', 'Phe3rd4', 'Pot1st4', 'Pot2nd4', 'Pot3rd4' };
	u64 tagList2[6] = { 'Phe1st5', 'Phe2nd5', 'Phe3rd5', 'Pot1st5', 'Pot2nd5', 'Pot3rd5' };
	u64 tagList3[6] = { 'Phe1st1', 'Phe2nd1', 'Phe3rd1', 'Pot1st1', 'Pot2nd1', 'Pot3rd1' };
	u64 tagList4[6] = { 'Phe1st2', 'Phe2nd2', 'Phe3rd2', 'Pot1st2', 'Pot2nd2', 'Pot3rd2' };
	for (int i = 0; i < 6; i++) {
		mScaleCounter1[i] = Morimura::setScaleUpCounter(mMainScreen->mScreenObj, tagList0[i], &mScoreCounts[i], 10, mArchive);
		mScaleCounter2[i] = Morimura::setScaleUpCounter2(mMainScreen->mScreenObj, tagList1[i], tagList2[i], &mCurrScore1[i], 3, mArchive);
		mScaleCounter3[i] = Morimura::setScaleUpCounter2(mMainScreen->mScreenObj, tagList3[i], tagList4[i], &mCurrScore2[i], 3, mArchive);
		mScaleCounter3[i]->setZeroAlpha(255);
		mScaleCounter3[i]->setPuyoAnimZero(true);
	}

	paneInit();

	mIndPane = new THiScoreIndPane(mHighScorePic);
	mIndPane->createIndTexture("hi_score_00.bti");
	mIndPane->createCaptureTexture(GX_TF_I4);
	mIndPane->mTexture1->storeTIMG(mPicTexture[0], (u8)0);
	mIndPane->mTexture2->storeTIMG(mPicTexture[0], (u8)0);

	ResTIMG* img = mIndPane->mTexture3->mTexInfo;
	P2ASSERTLINE(507, img);
	img->mTransparency = 2;

	img = mIndPane->mTexture1->mTexInfo;
	P2ASSERTLINE(512, img);
	img->mTransparency = 2;

	img = mIndPane->mTexture2->mTexInfo;
	P2ASSERTLINE(516, img);
	img->mTransparency = 2;
	changePaneInfo();

	f32 yoffs = mIndexGroup->mHeight;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < mNumActiveRows; j++) {
			mIndexPaneList[j]->setOffset(yoffs);
			mIndexPaneList[j]->mYOffset = mIndexPaneList[j]->getPaneOffsetY();
		}
		updateIndex(0);
		TIndexGroup* grp   = mIndexGroup;
		grp->mScrollOffset = 0.0f;
		grp->mStateID      = TIndexGroup::IDGroup_Idle;
		changePaneInfo();
	}
}

/**
 * @note Address: 0x8037E178
 * @note Size: 0x1C
 */
u64 THiScore::getNameID(int id)
{
	return mNameID[id];
}

/**
 * @note Address: 0x8037E194
 * @note Size: 0x9F0
 */
bool THiScore::doUpdate()
{
	if (mCanInput) {
		Controller* input = mController;
		if (input->getButtonDown() & Controller::PRESS_B) {
			if (!mIsSection) {
				P2ASSERTLINE(549, getOwner());
				getOwner()->endScene(nullptr);
				mDoEnd    = 0;
				mCanInput = false;
				changePaneInfo();
			}
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
		} else if ((input->getButton() & Controller::ANALOG_UP) || (input->getButton() & Controller::PRESS_DPAD_UP)) {
			if (mState != 1) {
				if (mIndPaneXDirection == 0.0f) {
					mIndPaneXDirection = 1.0f;
				}
				mIndexGroup->upIndex();
			} else {
				if (!mIndexGroup->mStateID && mErrorSoundCounter == 0) {
					mErrorSoundCounter = 1;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
				}
			}
		} else if ((input->getButton() & Controller::ANALOG_DOWN) || (input->getButton() & Controller::PRESS_DPAD_DOWN)) {
			if (mState != 2) {
				if (mIndPaneXDirection == 0.0f) {
					mIndPaneXDirection = -1.0f;
				}
				mIndexGroup->downIndex();
			} else {
				if (mIndexGroup->isState(0) && mErrorSoundCounter == 0) {
					mErrorSoundCounter = 1;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
				}
			}
		}
	}

	if (mErrorSoundCounter) {
		mErrorSoundCounter++;
		if (mErrorSoundCounter > 30)
			mErrorSoundCounter = 0;
	}

	mListScreen->update();
	mMainScreen->update();

	if (mIsAllTreasures) {
		mListScreen->mScreenObj->search('Nlist1')->setOffset(mPaneListPos.x, mPaneListPos.y + mListOffsetY);
		mListScreen->mScreenObj->search('Nselicon')->setOffset(mPaneIconPos.x, mPaneIconPos.y + mListOffsetY);
	}

	if (updateList()) {
		changePaneInfo();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		if (mScaleMgrList) {
			mScaleMgrList[mCurrActiveRowSel]->up(0.1f, 20.0f, 0.5f, 0.0f);
		}
		for (int i = 0; i < 6; i++) {
			mScaleCounter1[i]->forceScaleUp(true);
			mScaleCounter2[i]->forceScaleUp(true);
			mScaleCounter3[i]->forceScaleUp(true);
		}
	}

	f32 alpha = mAlphaTimer;
	if (alpha < 0.2f) {
		alpha = 0.0f;
	}
	mMainScreen->mScreenObj->search('Nheten')->setAlpha(alpha * 255.0f);
	mMainScreen->mScreenObj->search('Notten')->setAlpha(alpha * 255.0f);

	for (int i = 0; i < 6; i++) {
		mScaleCounter1[i]->getMotherPane()->setAlpha(alpha * 255.0f);
		mScaleCounter2[i]->getMotherPane()->setAlpha(alpha * 255.0f);
		mScaleCounter3[i]->getMotherPane()->setAlpha(alpha * 255.0f);
	}

	if (!mIndexGroup->mStateID) {
		mAlphaTimer += 0.04f;
		if (mAlphaTimer > 1.0f) {
			mAlphaTimer        = 1.0f;
			mIndPaneXDirection = 0.0f;
		}
	} else {
		mAlphaTimer *= 0.75f;
		if (mAlphaTimer < 0.1f) {
			mAlphaTimer = 0.0f;
		}
	}

	f32 invAlpha = 1.0f - mAlphaTimer;
	mPaneAngle += mAngleGrowRate;
	if (mPaneAngle > TAU) {
		mPaneAngle -= TAU;
	}

	if (!mNoAlphaUpdate) {
		f32 alpha = mAlphaTimer;
		if (alpha > 0.2f) {
			alpha *= 2.0f;
		}
		if (alpha > 1.0f) {
			alpha = 1.0f;
		}
		if (invAlpha == 0.0f) {
			if (mIndPaneType) {
				mIndPane->setRadius(-6, mPaneAngle);
			} else {
				mIndPane->setXY(0.0f, 0.0f);
			}
		} else {
			mIndPane->setFlag(1);
			mIndPane->setXY(invAlpha * mIndPaneXDirection * 1.1f, 0.0f);
		}
		mHighScorePic->setAlpha(alpha * 255.0f);
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

	mHighScorePic->setOffset(mHighScorePic->mTranslateX, mHighScorePic->getOffsetY() + mPictureOffsetY);

	if (mScaleMgrList) {
		for (int i = 0; i < mNumActiveRows; i++) {
			mIndexPaneList[i]->mPane->updateScale(mScaleMgrList[i]->calc());
		}
	} else {
		for (int i = 0; i < mNumActiveRows; i++) {
			mIndexPaneList[i]->mPane->getFirstChildPane()->updateScale(1.0f, 2.0f);
		}
	}

	if (mIsAllTreasures) {
		for (int i = 0; i < mNumActiveRows; i++) {
			TIndexPane* pane = mIndexPaneList[i];
			pane->mPane2->setOffset(pane->mPane->mTranslateX, 0.5f * -mPaneHeightDiff);
		}
	}

	if (mSelIconPane) {
		mCornerAnimTimer += mCornerAnimSpeed;
		if (mCornerAnimTimer > TAU) {
			mCornerAnimTimer -= TAU;
		}
		mCornerSelScale = mCornerSelScaleModifier * sinf(mCornerAnimTimer) + 0.85f;

		f32 x, y;
		f32 paneHeight = 0.0f;
		J2DPane* pane  = mIndexPaneList[mCurrActiveRowSel]->mPane->getFirstChildPane();
		if (mIsAllTreasures) {
			paneHeight = -mPaneHeightDiff * 0.5f;
			pane       = mIndexPaneList[mCurrActiveRowSel]->mPane2;
		}
		pane->setBasePosition(J2DPOS_Center);
		for (u8 i = 0; i < 4; i++) {
			switch (i) {
			case 0:
				x = -20.0f;
				y = 0.0f;
				break;
			case 1:
				x = 20.0f;
				y = 0.0f;
				break;
			case 2:
				x = -20.0f;
				y = 0.0f;
				if (mIsAllTreasures) {
					f32 zero = 0.0f;
					y        = (pane->getHeight()) * 2.0f + zero;
				}
				break;
			case 3:
				x = 20.0f;
				y = 0.0f;
				if (mIsAllTreasures) {
					f32 zero = 0.0f;
					y        = (pane->getHeight()) * 2.0f + zero;
				}
				break;
			}
			f32 width  = pane->getGlbVtx(i).x - pane->mGlobalMtx[0][3];
			f32 height = pane->getGlbVtx(i).y - pane->mGlobalMtx[1][3];
			mSelIconCorners[i]->setOffset(mCornerSelScale * width + mCornerXOffset + x, paneHeight + (mCornerSelScale * height + y));
		}
	}
	return false;
}

/**
 * @note Address: 0x8037EB84
 * @note Size: 0x30
 */
void THiScoreListScreen::update()
{
	mScreenObj->update();
}

/**
 * @note Address: 0x8037EBB4
 * @note Size: 0x1A8
 */
void THiScore::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = gfx.getPerspGraph();
	if (mDoEnd) {
		gfx.mOrthoGraph.setPort();
		Graphics::dirtyInitGX();
		mIndPane->draw();
		mIndPane->mTexture3->capture(0, 0, GX_CTF_R4, false, 0);
		gfx.getPerspGraph()->setPort();
	}

	mListScreen->draw(gfx, graf);
	mMainScreen->draw(gfx, graf);
	JUtility::TColor color;
	color = JUtility::TColor(0, 0, 0, 255 - mFadeAlpha);
	drawFillScreen(graf, color);
}

/**
 * @note Address: 0x8037ED5C
 * @note Size: 0x358
 */
void THiScore::paneInit()
{
	mHighScorePic->changeTexture(mPicTexture[0], 0);

	J2DTextBox* pane = static_cast<J2DTextBox*>(mIndexPaneList[mCurrMinActiveRow]->mPane2->getFirstChildPane());
	mTevBlock[0]     = new J2DTevBlock2;
	copyTevBlock(mTevBlock[0], pane->getMaterial()->mTevBlock);

	J2DGXColorS10* col = mTevBlock[0]->getTevColor(0);
	mColors[2].r       = col->r;
	mColors[2].g       = col->g;
	mColors[2].b       = col->b;
	mColors[2].a       = col->a;

	col          = mTevBlock[0]->getTevColor(1);
	mColors[3].r = col->r;
	mColors[3].g = col->g;
	mColors[3].b = col->b;
	mColors[3].a = col->a;

	pane           = static_cast<J2DTextBox*>(mIndexPaneList[mCurrMinActiveRow]->mPane2);
	mColorBlock[0] = new J2DColorBlock;
	copyColorBlock(mColorBlock[0], &pane->getMaterial()->mColorBlock);

	pane         = static_cast<J2DTextBox*>(mIndexPaneList[mCurrMaxActiveRow]->mPane2->getFirstChildPane());
	mTevBlock[1] = new J2DTevBlock2;
	copyTevBlock(mTevBlock[1], pane->getMaterial()->mTevBlock);

	col          = mTevBlock[1]->getTevColor(0);
	mColors[0].r = col->r;
	mColors[0].g = col->g;
	mColors[0].b = col->b;
	mColors[0].a = col->a;

	col          = mTevBlock[1]->getTevColor(1);
	mColors[1].r = col->r;
	mColors[1].g = col->g;
	mColors[1].b = col->b;
	mColors[1].a = col->a;

	pane           = static_cast<J2DTextBox*>(mIndexPaneList[mCurrMaxActiveRow]->mPane2);
	mColorBlock[1] = new J2DColorBlock;
	copyColorBlock(mColorBlock[1], &pane->getMaterial()->mColorBlock);

	f32 y                   = 20.0f;
	mSelectionYOffset       = mIndexPaneList[mCurrActiveRowSel]->getPaneYOffset() - 10.0f;
	mCursorSelectionYOffset = mSelectionYOffset + y;
}

/**
 * @note Address: 0x8037F0B4
 * @note Size: 0x5C
 */
void THiScore::doUpdateFadeinFinish()
{
	mCanInput = true;
	if (!mChangeAlpha) {
		mDoEnd = 1;
		mHighScorePic->changeTexture(mIndPane->mTexture3->mTexInfo, 0);
	}
}

/**
 * @note Address: 0x8037F110
 * @note Size: 0x1C
 */
void THiScore::doUpdateFadeoutFinish()
{
	if (mIsSection) {
		return;
	}
	mDisp->_0C = 1;
}

/**
 * @note Address: 0x8037F12C
 * @note Size: 0x5C4
 */
void THiScore::changePaneInfo()
{
	mColorChangeTimer = 0.0f;

	int id = mIndexPaneList[mCurrActiveRowSel]->getIndex();

	if (mIsAllTreasures || (mIsSection && mForceClear)) {
		mHighScorePic->hide();
		mMainScreen->mScreenObj->search('Notakara')->show();
	} else {
		mHighScorePic->show();
		if (!mIsSection && !(sys->getPlayCommonData()->mCommonStoryFlags.isSet(Game::PlayCommonData::CommonData_DebtRepayed))) {
			mHighScorePic->hide();
		}
		mMainScreen->mScreenObj->search('Notakara')->hide();
		if (mForceClear2) {
			mHighScorePic->show();
		}
	}

	// show the : when the current selection is play time only
	bool isTime = false;
	int id2     = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	if (id2 == 15) {
		isTime = true;
	}

	if (isTime) {
		mMainScreen->mScreenObj->search('Nheten')->show();
		if (mIsAllTreasures) {
			mMainScreen->mScreenObj->search('Notten')->show();
		}
	} else {
		P2ASSERTLINE(917, mMainScreen->mScreenObj->search('Nheten'));
		P2ASSERTLINE(918, mMainScreen->mScreenObj->search('Notten'));
		mMainScreen->mScreenObj->search('Nheten')->hide();
		mMainScreen->mScreenObj->search('Notten')->hide();
	}

	for (int i = 0; i < 6; i++) {
		int score = getRecord(i, id);
		// use compeltely different counters for the play time versus the other scores
		if (isTime) {
			mScaleCounter2[i]->getMotherPane()->show();
			mScaleCounter3[i]->getMotherPane()->show();
			mScaleCounter2[i]->setBlind(false);
			mScaleCounter3[i]->setBlind(false);
			mScaleCounter1[i]->getMotherPane()->hide();

			// if a sore is negative, assume it isnt set
			if (score <= -1) {
				score = 0;
				mScaleCounter2[i]->setBlind(true);
				mScaleCounter3[i]->setBlind(true);
			}

			// weird way to do the time calc but it works
			int hours      = score / 60;
			mCurrScore1[i] = hours;
			mCurrScore2[i] = score - hours * 60;
		} else {
			mScaleCounter2[i]->getMotherPane()->hide();
			mScaleCounter3[i]->getMotherPane()->hide();
			mScaleCounter1[i]->getMotherPane()->show();
			mScaleCounter1[i]->setBlind(false);

			if (score <= -1) {
				score = 0;
				mScaleCounter1[i]->setBlind(true);
			}
			mScoreCounts[i] = score;
		}
	}

	if (mDoEnd && !mChangeAlpha) {
		mIndPane->mTexture1->storeTIMG(mPicTexture[id], (u8)0);
		mIndPane->mTexture2->storeTIMG(mPicTexture[id], (u8)0);
	} else {
		mHighScorePic->changeTexture(mPicTexture[id], 0);
	}

	if (!mLoopDrum) {
		mState = 0;
		mStickAnimMgr->stickUpDown();
		int id3 = mIndexPaneList[mCurrActiveRowSel]->getIndex();
		f32 y1  = mIndexPaneList[mCurrActiveRowSel]->getPaneYOffset();

		if (id3 == 0) {
			mState = 1;
			mStickAnimMgr->stickDown();
		}
		if (id3 == 15) {
			mState = 2;
			mStickAnimMgr->stickUp();
		}

		if (mState == 0) {
			mErrorSoundCounter = 0;
		} else {
			mErrorSoundCounter = 1;
		}

		for (int i = 0; i < mNumActiveRows; i++) {
			mIndexPaneList[i]->getMainPane()->show();
			mIndexPaneList[i]->getSubPane()->show();
			int idx = mIndexPaneList[i]->getIndex();
			if (idx != id3) {
				TIndexPane* pane = mIndexPaneList[i];
				f32 y2           = pane->getPaneYOffset();
				pane->getIndex();
				if (mIndexPaneList[i]->getIndex() > id3 && y1 > y2 || mIndexPaneList[i]->getIndex() < id3 && y1 < y2) {
					mIndexPaneList[i]->mPane->hide();
					mIndexPaneList[i]->mPane2->hide();
				}
			}
		}
	}
}

/**
 * @note Address: 0x8037F6F0
 * @note Size: 0x124
 */
void THiScore::setPaneCharacter(int id)
{
	int index = mIndexPaneList[id]->getIndex();
	mIndexPaneList[id]->getSubPane()->setMsgID(getNameID(index));

	J2DPane* pane = mIndexPaneList[id]->getSubPane()->getFirstChildPane();
	P2ASSERTLINE(1031, pane);
	pane->setMsgID(getNameID(index));

	if (mIsAllTreasures && mPicTexture[index]) {
		J2DPictureEx* pic = static_cast<J2DPictureEx*>(mIndexPaneList[id]->getMainPane()->getFirstChildPane());

		pic->changeTexture(mPicTexture[index], 0);
	}
}

/**
 * @note Address: 0x8037F814
 * @note Size: 0x44C
 */
int THiScore::getRecord(int type, int id)
{
	P2ASSERTLINE(1047, sys->getPlayCommonData());

	int orderID = mHiscoreDataOrder[id];
	P2ASSERTLINE(1049, orderID <= 16);

	bool debug = false;
	if (mIsSection) {
		debug = true;
	}

	switch (type) {
	case ClearRank1:
		if (debug) {
			return 1.0f + 10.0f * randFloat();
		}
		if (sys->getPlayCommonData()->mCommonStoryFlags.isSet(Game::PlayCommonData::CommonData_DebtRepayed)) {
			return sys->getPlayCommonData()->getHighscore_clear(orderID)->getScore(0);
		}
		return -1;

	case ClearRank2:
		if (debug) {
			return 10.0f + 100.0f * randFloat();
		}
		if (sys->getPlayCommonData()->mCommonStoryFlags.isSet(Game::PlayCommonData::CommonData_DebtRepayed)) {
			return sys->getPlayCommonData()->getHighscore_clear(orderID)->getScore(1);
		}
		return -1;

	case ClearRank3:
		if (debug) {
			if (randFloat() < 0.5f) {
				return -1;
			}
			return 110.0f + 1000.0f * randFloat();
		}
		if (sys->getPlayCommonData()->mCommonStoryFlags.isSet(Game::PlayCommonData::CommonData_DebtRepayed)) {
			return sys->getPlayCommonData()->getHighscore_clear(orderID)->getScore(2);
		}
		return -1;

	case CompleteRank1:
		if (debug) {
			return 10.f + 100.0f * randFloat();
		}
		if (sys->getPlayCommonData()->mCommonStoryFlags.isSet(Game::PlayCommonData::CommonData_DebtRepayed)) {
			return sys->getPlayCommonData()->getHighscore_complete(orderID)->getScore(0);
		}
		return -1;

	case CompleteRank2:
		if (debug) {
			return 110.0f + 100.0f * randFloat();
		}
		if (sys->getPlayCommonData()->mCommonStoryFlags.isSet(Game::PlayCommonData::CommonData_DebtRepayed)) {
			return sys->getPlayCommonData()->getHighscore_complete(orderID)->getScore(1);
		}
		return -1;

	case CompleteRank3:
		if (debug) {
			return 1100.0f + 100000.0f * randFloat();
		}
		if (sys->getPlayCommonData()->mCommonStoryFlags.isSet(Game::PlayCommonData::CommonData_DebtRepayed)) {
			return sys->getPlayCommonData()->getHighscore_complete(orderID)->getScore(2);
		}
		return -1;

	default:
		JUT_PANICLINE(1094, nullptr);
	}

	return 0;
}

/**
 * @note Address: 0x8037FC60
 * @note Size: 0x43C
 */
void THiScore::changeTextTevBlock(int id)
{
	s16 r0, g0, b0, a0;
	s16 r1, g1, b1, a1;
	J2DTextBox* textbox  = static_cast<J2DTextBox*>(mIndexPaneList[id]->getSubPane()->getFirstChildPane()); // r29
	f32 val              = mIndexGroup->getScrollOffset() + mIndexPaneList[id]->mYOffset;
	J2DTextBox* startBox = static_cast<J2DTextBox*>(mIndexPaneList[id]->getSubPane()); // r28

	if (mIndexGroup->mStateID == TIndexGroup::IDGroup_Idle && val < mCursorSelectionYOffset && val > mSelectionYOffset) {
		changeTevBlock(mTevBlock[0], textbox->getMaterial()->getTevBlock());
		mColorChangeTimer += 0.1f;
		if (mColorChangeTimer > TAU) {
			mColorChangeTimer -= TAU;
		}

		f32 t = cosf(mColorChangeTimer);
		if (t < 0.0f) {
			t = 0.0f;
		}

		f32 tInv = 1.0f - t;

		r0 = blendColorValue(t, tInv, (f32)mColors[2].r, (f32)mColors[0].r);
		g0 = blendColorValue(t, tInv, (f32)mColors[2].g, (f32)mColors[0].g);
		b0 = blendColorValue(t, tInv, (f32)mColors[2].b, (f32)mColors[0].b);
		a0 = blendColorValue(t, tInv, (f32)mColors[2].a, (f32)mColors[0].a);

		r1 = blendColorValue(t, tInv, (f32)mColors[3].r, (f32)mColors[1].r);
		g1 = blendColorValue(t, tInv, (f32)mColors[3].g, (f32)mColors[1].g);
		b1 = blendColorValue(t, tInv, (f32)mColors[3].b, (f32)mColors[1].b);
		a1 = blendColorValue(t, tInv, (f32)mColors[3].a, (f32)mColors[1].a);

		J2DGXColorS10 color0;
		color0.r = r0;
		color0.g = g0;
		color0.b = b0;
		color0.a = a0;
		textbox->getMaterial()->getTevBlock()->setTevColor(0, color0);
		textbox->getMaterial()->getTevBlock()->setTevColor(1, J2DGXColorS10(r1, g1, b1, a1));

		changeColorBlock(mColorBlock[0], startBox->getMaterial()->getColorBlock());
		return;
	}

	changeTevBlock(mTevBlock[1], textbox->getMaterial()->getTevBlock());
	changeColorBlock(mColorBlock[1], startBox->getMaterial()->getColorBlock());
}

/**
 * @note Address: 0x8038009C
 * @note Size: 0x21C
 */
void THiScore::copyTevBlock(J2DTevBlock* tevA, J2DTevBlock* tevB)
{
	tevA->setTevStageNum(tevB->getTevStageNum());

	for (u32 i = 0; i < (u8)tevB->getMaxStage(); i++) {
		tevA->setTevOrder(i, *tevB->getTevOrder(i));
		tevA->setTevColor(i, *tevB->getTevColor(i));
		tevA->setTevKColor(i, *tevB->getTevKColor(i));
		tevA->setTevStage(i, *tevB->getTevStage(i));
		tevA->setIndTevStage(i, *tevB->getIndTevStage(i));
		tevA->setTevSwapModeTable(i, *tevB->getTevSwapModeTable(i));
	}
}

/**
 * @note Address: 0x803802B8
 * @note Size: 0x21C
 */
void THiScore::changeTevBlock(J2DTevBlock* tevB, J2DTevBlock* tevA)
{
	tevA->setTevStageNum(tevB->getTevStageNum());

	for (u32 i = 0; i < (u8)tevB->getMaxStage(); i++) {
		tevA->setTevOrder(i, *tevB->getTevOrder(i));
		tevA->setTevColor(i, *tevB->getTevColor(i));
		tevA->setTevKColor(i, *tevB->getTevKColor(i));
		tevA->setTevStage(i, *tevB->getTevStage(i));
		tevA->setIndTevStage(i, *tevB->getIndTevStage(i));
		tevA->setTevSwapModeTable(i, *tevB->getTevSwapModeTable(i));
	}
}

/**
 * @note Address: 0x803804D4
 * @note Size: 0x80
 */
void THiScore::copyColorBlock(J2DColorBlock* colorA, J2DColorBlock* colorB)
{
	colorA->mChannelCount = colorB->mChannelCount;
	colorA->mCullMode     = colorB->mCullMode;
	for (u32 i = 0; i < colorB->mChannelCount; i++) {
		colorA->mChannels[i] = colorB->mChannels[i];

		JUtility::TColor color = colorB->mColors[i];
		colorA->mColors[i]     = color;
	}
}

/**
 * @note Address: 0x80380554
 * @note Size: 0x80
 */
void THiScore::changeColorBlock(J2DColorBlock* colorB, J2DColorBlock* colorA)
{
	colorA->mChannelCount = colorB->mChannelCount;
	colorA->mCullMode     = colorB->mCullMode;
	for (u32 i = 0; i < colorB->mChannelCount; i++) {
		colorA->mChannels[i] = colorB->mChannels[i];

		JUtility::TColor color = colorB->mColors[i];
		colorA->mColors[i]     = color;
	}
}

/**
 * @note Address: 0x803805D4
 * @note Size: 0x180
 */
void THiScore::updateLayout()
{
	f32 height = mIndexPaneList[1]->getMainPane()->getOffsetY() - mIndexPaneList[0]->getMainPane()->getOffsetY();

	mPaneHeightDiff = height * 2.0f;

	if (mIsAllTreasures) {
		for (int i = 0; i < mNumActiveRows; i++) {
			mIndexPaneList[i]->setOffset((height * mClearListHeightRate) * f32(i - mCurrActiveRowSel));
			mIndexPaneList[i]->mYOffset = mIndexPaneList[i]->getPaneOffsetY();
		}

		height         = mIndexPaneList[1]->getMainPane()->getOffsetY() - mIndexPaneList[0]->getMainPane()->getOffsetY();
		mMinSelYOffset = mIndexPaneList[mCurrMinActiveRow]->getPaneOffsetY();
		mMaxSelYOffset = mIndexPaneList[mCurrMaxActiveRow]->getPaneOffsetY();
	}
	mIndexGroup->mHeight = height;
}

/**
 * @note Address: 0x80380754
 * @note Size: 0x50
 */
THiScoreScene::THiScoreScene()
{
}

THiScore::StaticValues THiScore::mScrollParm;

} // namespace Morimura
