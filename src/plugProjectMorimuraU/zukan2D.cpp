#include "Morimura/Zukan.h"
#include "Game/ResultTexMgr.h"
#include "Game/IllustratedBook.h"
#include "Game/gamePlayData.h"
#include "Game/Data.h"
#include "Game/TekiStat.h"
#include "Game/PelletList.h"
#include "PSSystem/PSSystemIF.h"
#include "Dolphin/rand.h"
#include "efx2d/T2DChangesmoke.h"
#include "Screen/Game2DMgr.h"
#include "nans.h"

static const int unusedArray[] = { 0, 0, 0 };

namespace Morimura {
s16 TZukanBase::mRequestTimerMax    = 10;
bool TZukanBase::mIconMove          = true;
f32 TZukanBase::mLineSpace          = 48.0f; // [vertical spacing between lines of text in message box]
f32 TZukanBase::mWarpRadius         = 15.0f;
f32 TZukanBase::mScrollValueCoe     = 3.5f;  // [max scroll speed]
f32 TZukanBase::mScrollSpeedCoe     = 0.08f; // [acceleration]
f32 TZukanBase::mNewScale           = 0.7f;
f32 TZukanBase::mPodIconOffsetX     = 480.0f;
f32 TZukanBase::mLargeCategoryScale = 2.0f;
f32 TZukanBase::mCategoryAlphaRate  = 0.6f;
u8 TZukanBase::mDrawLineType        = 2;
bool TZukanBase::mShowAllObjects;
bool TZukanBase::mAllNewSupply;
bool TZukanBase::mZukanShortenTest;
bool TZukanBase::mZukanCategoryTest;
f32 TZukanBase::mRandShowRate;
JGeometry::TVec2f TZukanBase::mNewOffset;
JGeometry::TVec2f TZukanBase::mLargeNewOffset;
JUtility::TColor TZukanBase::mNewColor0;
JUtility::TColor TZukanBase::mNewColor1;
JGeometry::TVec2f TZukanBase::mCategoryScale;
JUtility::TColor TZukanBase::mCategoryColor0w;
JUtility::TColor TZukanBase::mCategoryColor0b;
JUtility::TColor TZukanBase::mCategoryColor1w;
JUtility::TColor TZukanBase::mCategoryColor1b;
JKRHeap* TZukanBase::mDebugHeapParent;
JKRExpHeap* TZukanBase::mDebugHeap;

// these represent the highest index (index that the hoard shows you in-game) of each set's treasures
// for example the first set is ids 1 through 7
int TItemZukan::mCategoryArray[TREASUREHOARD_CATEGORY_NUM] = {
	// treasure id of final category member
	7,   // Succulent Series
	16,  // Nature's Candy Series
	22,  // Xenoflora Series
	27,  // Gourmet Series
	42,  // Sweet Tooth Series
	51,  // Paleontology Series
	57,  // Ancient Secrets Series
	63,  // Cook's Arsenal Series
	71,  // Tortured Artist Series
	79,  // Modern Amenities Series
	86,  // Frigid Series
	94,  // Hyper-technology Series
	103, // Industrial Set
	109, // Husband's Tears Series
	120, // Space Love Series
	126, // Crystallized Emotion Series
	146, // Dream Series
	156, // Blast from the Past Series
	160, // Mystical Energy Series
	166, // Massive Receptacle Series
	168, // Survival Series
	176, // Ancient Ad Series
	183, // Odd Logo Series
	196, // Explorer's Friend Series
	201, // Titan Dweevil Series
};

// this table connects piklopedia order to the actual game enemy id order
TEnemyZukanIndex eIDInfo[ENEMY_ZUKAN_COUNT] = {
	{ TEnemyZukan::Zukan_Chappy, Game::EnemyTypeID::EnemyID_Chappy },
	{ TEnemyZukan::Zukan_YellowChappy, Game::EnemyTypeID::EnemyID_YellowChappy },
	{ TEnemyZukan::Zukan_BlueChappy, Game::EnemyTypeID::EnemyID_BlueChappy },
	{ TEnemyZukan::Zukan_Kochappy, Game::EnemyTypeID::EnemyID_Kochappy },
	{ TEnemyZukan::Zukan_YellowKochappy, Game::EnemyTypeID::EnemyID_YellowKochappy },
	{ TEnemyZukan::Zukan_BlueKochappy, Game::EnemyTypeID::EnemyID_BlueKochappy },
	{ TEnemyZukan::Zukan_KumaChappy, Game::EnemyTypeID::EnemyID_KumaChappy },
	{ TEnemyZukan::Zukan_KumaKochappy, Game::EnemyTypeID::EnemyID_KumaKochappy },
	{ TEnemyZukan::Zukan_Baby, Game::EnemyTypeID::EnemyID_Baby },
	{ TEnemyZukan::Zukan_FireChappy, Game::EnemyTypeID::EnemyID_FireChappy },
	{ TEnemyZukan::Zukan_Catfish, Game::EnemyTypeID::EnemyID_Catfish },
	{ TEnemyZukan::Zukan_LeafChappy, Game::EnemyTypeID::EnemyID_LeafChappy },
	{ TEnemyZukan::Zukan_Tank, Game::EnemyTypeID::EnemyID_Tank },
	{ TEnemyZukan::Zukan_Wtank, Game::EnemyTypeID::EnemyID_Wtank },
	{ TEnemyZukan::Zukan_Kabuto, Game::EnemyTypeID::EnemyID_Kabuto },
	{ TEnemyZukan::Zukan_Rkabuto, Game::EnemyTypeID::EnemyID_Rkabuto },
	{ TEnemyZukan::Zukan_Mar, Game::EnemyTypeID::EnemyID_Mar },
	{ TEnemyZukan::Zukan_Hanachirashi, Game::EnemyTypeID::EnemyID_Hanachirashi },
	{ TEnemyZukan::Zukan_MiniHoudai, Game::EnemyTypeID::EnemyID_MiniHoudai },
	{ TEnemyZukan::Zukan_Kogane, Game::EnemyTypeID::EnemyID_Kogane },
	{ TEnemyZukan::Zukan_Wealthy, Game::EnemyTypeID::EnemyID_Wealthy },
	{ TEnemyZukan::Zukan_Fart, Game::EnemyTypeID::EnemyID_Fart },
	{ TEnemyZukan::Zukan_UjiB, Game::EnemyTypeID::EnemyID_UjiB },
	{ TEnemyZukan::Zukan_UjiA, Game::EnemyTypeID::EnemyID_UjiA },
	{ TEnemyZukan::Zukan_Tobi, Game::EnemyTypeID::EnemyID_Tobi },
	{ TEnemyZukan::Zukan_Armor, Game::EnemyTypeID::EnemyID_Armor },
	{ TEnemyZukan::Zukan_Imomushi, Game::EnemyTypeID::EnemyID_Imomushi },
	{ TEnemyZukan::Zukan_ElecBug, Game::EnemyTypeID::EnemyID_ElecBug },
	{ TEnemyZukan::Zukan_TamagoMushi, Game::EnemyTypeID::EnemyID_TamagoMushi },
	{ TEnemyZukan::Zukan_Jigumo, Game::EnemyTypeID::EnemyID_Jigumo },
	{ TEnemyZukan::Zukan_Sarai, Game::EnemyTypeID::EnemyID_Sarai },
	{ TEnemyZukan::Zukan_Demon, Game::EnemyTypeID::EnemyID_Demon },
	{ TEnemyZukan::Zukan_BombSarai, Game::EnemyTypeID::EnemyID_BombSarai },
	{ TEnemyZukan::Zukan_Fuefuki, Game::EnemyTypeID::EnemyID_Fuefuki },
	{ TEnemyZukan::Zukan_FireOtakara, Game::EnemyTypeID::EnemyID_FireOtakara },
	{ TEnemyZukan::Zukan_ElecOtakara, Game::EnemyTypeID::EnemyID_ElecOtakara },
	{ TEnemyZukan::Zukan_WaterOtakara, Game::EnemyTypeID::EnemyID_WaterOtakara },
	{ TEnemyZukan::Zukan_GasOtakara, Game::EnemyTypeID::EnemyID_GasOtakara },
	{ TEnemyZukan::Zukan_BombOtakara, Game::EnemyTypeID::EnemyID_BombOtakara },
	{ TEnemyZukan::Zukan_UmiMushiBlind, Game::EnemyTypeID::EnemyID_UmiMushiBlind },
	{ TEnemyZukan::Zukan_Frog, Game::EnemyTypeID::EnemyID_Frog },
	{ TEnemyZukan::Zukan_MaroFrog, Game::EnemyTypeID::EnemyID_MaroFrog },
	{ TEnemyZukan::Zukan_Tadpole, Game::EnemyTypeID::EnemyID_Tadpole },
	{ TEnemyZukan::Zukan_OniKurage, Game::EnemyTypeID::EnemyID_OniKurage },
	{ TEnemyZukan::Zukan_Kurage, Game::EnemyTypeID::EnemyID_Kurage },
	{ TEnemyZukan::Zukan_PelPlant, Game::EnemyTypeID::EnemyID_Pelplant },
	{ TEnemyZukan::Zukan_BluePom, Game::EnemyTypeID::EnemyID_BluePom },
	{ TEnemyZukan::Zukan_RedPom, Game::EnemyTypeID::EnemyID_RedPom },
	{ TEnemyZukan::Zukan_YellowPom, Game::EnemyTypeID::EnemyID_YellowPom },
	{ TEnemyZukan::Zukan_BlackPom, Game::EnemyTypeID::EnemyID_BlackPom },
	{ TEnemyZukan::Zukan_WhitePom, Game::EnemyTypeID::EnemyID_WhitePom },
	{ TEnemyZukan::Zukan_RandPom, Game::EnemyTypeID::EnemyID_RandPom },
	{ TEnemyZukan::Zukan_Hana, Game::EnemyTypeID::EnemyID_Hana },
	{ TEnemyZukan::Zukan_Sokkuri, Game::EnemyTypeID::EnemyID_Sokkuri },
	{ TEnemyZukan::Zukan_ShijimiChou, Game::EnemyTypeID::EnemyID_ShijimiChou },
	{ TEnemyZukan::Zukan_Qurione, Game::EnemyTypeID::EnemyID_Qurione },
	{ TEnemyZukan::Zukan_PanModoki, Game::EnemyTypeID::EnemyID_PanModoki },
	{ TEnemyZukan::Zukan_Miulin, Game::EnemyTypeID::EnemyID_Miulin },
	{ TEnemyZukan::Zukan_HikariKinoko, Game::EnemyTypeID::EnemyID_HikariKinoko },
	{ TEnemyZukan::Zukan_Clover, Game::EnemyTypeID::EnemyID_Clover },
	{ TEnemyZukan::Zukan_Ooinu_l, Game::EnemyTypeID::EnemyID_Ooinu_l },
	{ TEnemyZukan::Zukan_Tanpopo, Game::EnemyTypeID::EnemyID_Tanpopo },
	{ TEnemyZukan::Zukan_Watage, Game::EnemyTypeID::EnemyID_Watage },
	{ TEnemyZukan::Zukan_Tukushi, Game::EnemyTypeID::EnemyID_Tukushi },
	{ TEnemyZukan::Zukan_Nekojarashi, Game::EnemyTypeID::EnemyID_Nekojarashi },
	{ TEnemyZukan::Zukan_DaiodoRed, Game::EnemyTypeID::EnemyID_DaiodoRed },
	{ TEnemyZukan::Zukan_Magaret, Game::EnemyTypeID::EnemyID_Magaret },
	{ TEnemyZukan::Zukan_Zenmai, Game::EnemyTypeID::EnemyID_Zenmai },
	{ TEnemyZukan::Zukan_Wakame_l, Game::EnemyTypeID::EnemyID_Wakame_l },
	{ TEnemyZukan::Zukan_KingChappy, Game::EnemyTypeID::EnemyID_KingChappy },
	{ TEnemyZukan::Zukan_Queen, Game::EnemyTypeID::EnemyID_Queen },
	{ TEnemyZukan::Zukan_Damagumo, Game::EnemyTypeID::EnemyID_Damagumo },
	{ TEnemyZukan::Zukan_BigFoot, Game::EnemyTypeID::EnemyID_BigFoot },
	{ TEnemyZukan::Zukan_Houdai, Game::EnemyTypeID::EnemyID_Houdai },
	{ TEnemyZukan::Zukan_BigTreasure, Game::EnemyTypeID::EnemyID_BigTreasure },
	{ TEnemyZukan::Zukan_UmiMushi, Game::EnemyTypeID::EnemyID_UmiMushi },
	{ TEnemyZukan::Zukan_OoPanModoki, Game::EnemyTypeID::EnemyID_OoPanModoki },
	{ TEnemyZukan::Zukan_SnakeCrow, Game::EnemyTypeID::EnemyID_SnakeCrow },
	{ TEnemyZukan::Zukan_SnakeWhole, Game::EnemyTypeID::EnemyID_SnakeWhole },
	{ TEnemyZukan::Zukan_DangoMushi, Game::EnemyTypeID::EnemyID_DangoMushi },
	{ TEnemyZukan::Zukan_BlackMan, Game::EnemyTypeID::EnemyID_BlackMan },
};

/**
 * @note Address: 0x80370C08
 * @note Size: 0x204
 */
TZukanBase::TZukanBase(char* name)
    : TScrollList(name)
    , mListScreen(nullptr)
    , mBGScreen(nullptr)
    , mEffectScreen(nullptr)
    , mSujiScreen(nullptr)
    , mYajiScreen(nullptr)
    , mIconScreen(nullptr)
    , mMessageNew(nullptr)
    , mMessageItemName(nullptr)
    , mMessageCallback3(nullptr)
    , mColorAnm(nullptr)
    , mWindow(nullptr)
    , mSelIndexCounter(nullptr)
    , mControlStickPic(nullptr)
    , mStickPicMesg(nullptr)
    , mStickAnim(nullptr)
    , mPaneNew1(nullptr)
    , mPaneMenu(nullptr)
    , mPane3DStick(nullptr)
    , mArrowAlpha(nullptr)
    , mPaneMesgWindowStick(nullptr)
    , mPaneMesgWindowStickCap(nullptr)
    , mPaneEnemyName(nullptr)
    , mPaneEnemyNameShadow(nullptr)
    , mPaneMessageDemo(nullptr)
    , mAButtonPane(nullptr)
    , mXButtonPane(nullptr)
    , mYButtonPane(nullptr)
    , mPaneModel(nullptr)
    , mPaneWindowBack(nullptr)
    , mPaneWindowBack_Child(nullptr)
    , mPaneBigWindow(nullptr)
    , mPaneSelectIcon(nullptr)
    , mIsCurrentSelUnlocked(false)
    , mDebugUnlockedList(nullptr)
    , mIsBigIconList(nullptr)
    , mInfoVal1(0)
    , mInfoVal2(0)
    , mInfoVal3(0)
    , mDisplayIndex(0)
    , mState(Screen::Game2DMgr::CHECK2D_Zukan_Default)
    , mCurrObjectID(0)
{

	mScaleMgr              = nullptr;
	mOffsetMsgNames        = nullptr;
	mOffsetMsg_XDesc       = nullptr;
	mOffsetMsg_YDesc       = nullptr;
	mNameAlpha             = 0.0f;
	mXButtonAlpha          = 0.0f;
	mYButtonAlpha          = 0.0f;
	mCameraFadeInLevel     = 1.0f;
	mBigWindowScale        = 1.0f;
	mCursorAnimTimer       = 0.0f;
	mCursorAnimMagnitude   = 0.02f;
	mCursorAnimSpeed       = 0.5f;
	mCursorScale           = 0.0f;
	mMessageBoxBGAlpha     = 0;
	mIsErrorSoundState     = false;
	mIsBigWindowOpened     = false;
	mIsEffectRequired      = false;
	mIsDrawScene           = false;
	mDoFadeNameAlpha       = true;
	mIsInFadeInOut         = false;
	mCurrCharacterOpened   = false;
	mDoUpdateLRButtonAlpha = true;
	mViewablePanelIDList   = nullptr;
	mMaxPane               = 0;
	_234                   = -1;
	mMaxSelectZukan        = 0;
	mSelection             = 0;
	mIsPreDebt             = true;
	mCanComplete           = false;
	mCanScroll             = true;
	_243                   = false;
	mIsInDemo              = false;
	mNumActiveRows         = 10;
	mRowSize               = 3;
	mTimerLength           = 0.25f;
	mPaneCursorCorners[0]  = nullptr;
	mPaneCursorCorners[1]  = nullptr;
	mPaneCursorCorners[2]  = nullptr;
	mPaneCursorCorners[3]  = nullptr;
}

/**
 * @note Address: 80370ED0
 * @note Size: 0xFC
 */
TZukanBase::~TZukanBase()
{
	if (mDebugHeap) {
		mDebugHeap->destroy();
	}
	mDebugHeap = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void TZukanBase::setDebugHeapParent(JKRHeap* heap)
{
	mDebugHeapParent = heap;
	P2ASSERTLINE(69, mDebugHeapParent);
}

/**
 * @brief Initializes the TZukanBase object.
 *
 * This function is responsible for initializing various member variables and creating necessary UI elements for the TZukanBase object.
 * It sets up the icon screen, text boxes, color animation, message callback, scale manager, arrow alpha blink, controller, select icon,
 * cursor corners, panel list bounds, big window, window back, model pane, and index group.
 *
 * @param archive A pointer to the JKRArchive object.
 *
 * @note Address: 0x80370FCC
 * @note Size: 0x90C
 */
void TZukanBase::doCreate(JKRArchive* archive)
{
	mIconScreen = new P2DScreen::Mgr_tuning;
	mIconScreen->set("newicon.blo", 0x20000, mArchive);
	mPaneNew1 = static_cast<J2DTextBoxEx*>(mIconScreen->search('Pnew'));
	P2ASSERTLINE(258, mPaneNew1);
	mPaneNew1->setOffset(-300.0f, 0.0f);

	mColorAnm = new kh::Screen::khUtilColorAnm(nullptr, 'dummy', 3, 50);
	mColorAnm->mColorList[0].set(mNewColor0);
	mColorAnm->mColorList[1].set(mNewColor1);
	mColorAnm->mColorList[2].set(mNewColor0);
	mColorAnm->mUpdateMode = 1;
	mMessageNew            = new og::Screen::CallBack_Message;
	mIconScreen->addCallBack('Pnew', mMessageNew);

	mScaleMgr   = new og::Screen::ScaleMgr;
	mArrowAlpha = new og::Screen::ArrowAlphaBlink;
	mController = getGamePad();

	mPaneSelectIcon = mListScreen->mScreenObj->search('Nselicon');
	P2ASSERTLINE(280, mPaneSelectIcon);
	mPaneSelectIcon->hide();

	mPaneCursorCorners[0] = mListScreen->mScreenObj->search('Psel_lu');
	P2ASSERTLINE(285, mPaneCursorCorners[0]);
	mPaneCursorCorners[1] = mListScreen->mScreenObj->search('Psel_ru');
	P2ASSERTLINE(288, mPaneCursorCorners[1]);
	mPaneCursorCorners[2] = mListScreen->mScreenObj->search('Psel_ll');
	P2ASSERTLINE(291, mPaneCursorCorners[2]);
	mPaneCursorCorners[3] = mListScreen->mScreenObj->search('Psel_rl');
	P2ASSERTLINE(294, mPaneCursorCorners[3]);

	mSelectIconPos.x = mPaneSelectIcon->mOffset.x;
	mSelectIconPos.y = mPaneSelectIcon->mOffset.y;

	J2DPane* list = mMainScreen->mScreenObj->search('Nlist');
	P2ASSERTLINE(302, list);
	mPanelListBounds.set(*list->getBounds());
	mPanelListBounds.f.x += 5.0f;
	mPanelListBounds.i.y -= 5.0f;
	mPanelListBounds.f.y -= 2.5f;
	mPanelListBounds.i.x *= P2DScreen::Mgr_tuning::mstTuningScaleX;
	mPanelListBounds.i.y *= P2DScreen::Mgr_tuning::mstTuningScaleY;
	mPanelListBounds.f.x *= P2DScreen::Mgr_tuning::mstTuningScaleX;
	mPanelListBounds.f.y *= P2DScreen::Mgr_tuning::mstTuningScaleY;

	mPaneBigWindow = mEffectScreen->mScreenObj->search('Nbigwin');
	P2ASSERTLINE(316, mPaneBigWindow);
	mPaneBigWindow->setInfluencedAlpha(false, false);
	mPaneBigWindow->setBasePosition(J2DPOS_TopRight);
	mPaneBigWindow->hide();

	mPaneWindowBack = mEffectScreen->mScreenObj->search('Pwinback');
	P2ASSERTLINE(323, mPaneWindowBack);
	mPaneWindowBack_Child = mPaneWindowBack->getFirstChildPane();
	P2ASSERTLINE(327, mPaneWindowBack_Child);
	mEffectScreen->mScreenObj->appendChild(mPaneWindowBack_Child);

	mPaneModel = mEffectScreen->mScreenObj->search('Pmodel_s');
	if (!mPaneModel) {
		mPaneModel = mMainScreen->mScreenObj->search('Pmodel_s');
	}
	P2ASSERTLINE(335, mPaneModel);
	mPaneModel->setInfluencedAlpha(false, false);
	mPaneModel->setBasePosition(J2DPOS_Center);

	mEffectScreen->mScreenObj->search('Pwinback')->setBasePosition(J2DPOS_Center);
	mPaneWindowBack->setBasePosition(J2DPOS_Center);
	mPaneWindowBack_Child->setBasePosition(J2DPOS_Center);

	J2DPictureEx* model = static_cast<J2DPictureEx*>(mPaneModel);
	if (mIsSection) {
		model->changeTexture("l_btn.bti", 0);
	} else {
		model->changeTexture(getDispDataZukan()->mTexture->mTexInfo, 0);
	}
	model->show();

	mPaneModelPos = *model->getBounds();

	J2DPane* model2 = mMainScreen->mScreenObj->search('Pmodel_l');
	if (mEffectScreen->mScreenObj->search('Pmodel_l')) {
		model2 = mEffectScreen->mScreenObj->search('Pmodel_l');
	}
	P2ASSERTLINE(363, model2);

	mPaneModelLPos = *model2->getBounds();

	mPaneModelOffs  = mPaneModel->getTranslate();
	mPaneModelLOffs = model2->getTranslate();

	P2DScreen::Mgr_tuning* screen = mListScreen->mScreenObj;
	P2ASSERTLINE(375, screen);
	mRequestTimer = 0xffffffce;
	indexPaneInit(screen);
	J2DPane* idpane = mIndexPaneList[0]->mPane;
	f32 diff        = mIndexPaneList[1]->mPane->mOffset.y - idpane->mOffset.y;
	idpane->show();

	mIndexGroup                 = new TIndexGroup;
	mIndexGroup->mHeight        = diff;
	TIndexGroup* group          = mIndexGroup;
	group->mMaxRollSpeed        = mScrollParm.mMaxRollSpeed;
	group->mSpeedSlowdownFactor = mScrollParm.mSpeedSlowdownFactor;
	group->mRollSpeedMod        = mScrollParm.mRollSpeedMod;
	group->mSpeedSpeedupFactor  = mScrollParm.mSpeedSpeedupFactor;
	group->mInitialRollSpeed    = mScrollParm.mInitialRollSpeed;

	paneInit();
	changePaneInfo();
}

/**
 * @note Address: 0x803718D8
 * @note Size: 0xFC8
 */
bool TZukanBase::doUpdate()
{
	if (!mIsInDemo) {
		doUpdateIn();
	}

	if (!mIsInDemo && mState < Screen::Game2DMgr::CHECK2D_Zukan_ExitStart) {
		mState = Screen::Game2DMgr::CHECK2D_Zukan_Default;
		if (mIsDrawScene) {
			mState            = Screen::Game2DMgr::CHECK2D_Zukan_Changing;
			mIsDrawScene      = false;
			mIsEffectRequired = false;
			if (mIsBigWindowOpened) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
			}
			mIsBigWindowOpened = false;
			mRequestTimer      = 0;
		} else if (isListShow(mIndexPaneList[mCurrActiveRowSel]->getIndex())
		           && mIndexPaneList[mCurrActiveRowSel]->getIndex() == mCurrIndex) {
			if (!mIsEffectRequired) {
				if (mRequestTimer > mRequestTimerMax) {
					mState = Screen::Game2DMgr::CHECK2D_Zukan_Changing;
					if (mIsSection) {
						mIsEffectRequired = true;
					}
				} else {
					mRequestTimer++;
				}
			}
		} else {
			mCurrIndex        = mIndexPaneList[mCurrActiveRowSel]->getIndex();
			mIsEffectRequired = false;
			if (mIsBigWindowOpened) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
			}
			mIsBigWindowOpened = false;
			mRequestTimer      = 0;
		}
	}

	if (mIsBigWindowOpened) {
		if (mBigWindowScale != 2.0f) {
			mBigWindowScale *= 1.2f;
			if (mPaneBigWindow) {
				mPaneBigWindow->show();
			}
			if (mBigWindowScale > 2.0f) {
				mBigWindowScale = 2.0f;
				mScaleMgr->up(0.2f, 25.0f, 0.25f, 0.0f);
				if (mPaneBigWindow) {
					mPaneBigWindow->show();
				}
			}
		}
	} else {
		mBigWindowScale *= 0.9f;
		if (mBigWindowScale < 1.0f) {
			mBigWindowScale = 1.0f;
			if (mPaneBigWindow) {
				mPaneBigWindow->hide();
			}
		}
	}

	bool isHorizontalScroll = false;
	if (!mIsInDemo && !mCanInput && mState < Screen::Game2DMgr::CHECK2D_Zukan_ExitStart) {
		mIsInFadeInOut = true;
	}

	if (!mIsInDemo && mCanInput && mState < Screen::Game2DMgr::CHECK2D_Zukan_ExitStart && !isOpenConfirmWindow()) {
		mIsInFadeInOut = false;
		if (!mIsBigWindowOpened && !mWindow->mState) {
			Controller* pad = mController;
			if (pad->getButton() & Controller::ANALOG_UP) {
				if (mIsPreDebt && !mCanScroll) {
					if (mCurrActiveRowSel > 0) {
						mIndexGroup->upIndex();
					} else {
						if (!mIsErrorSoundState) {
							mIsErrorSoundState = true;
							PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
						}
					}
				} else {
					mIndexGroup->upIndex();
				}
			} else if (pad->getButton() & Controller::ANALOG_DOWN) {
				if (mIsPreDebt && !mCanScroll) {
					bool cantScroll = true;
					if (_234 < 0) {
						if ((float)mCurrActiveRowSel < (float)mMaxSelectZukan / 3.0f - 1.0f) {
							cantScroll = false;
						}
					} else {
						if (mIndexPaneList[mCurrActiveRowSel]->getListIndex() < mMaxPane - 1) {
							cantScroll = false;
						}
					}
					if (cantScroll) {
						if (!mIsErrorSoundState) {
							mIsErrorSoundState = true;
							PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
						}
					} else {
						mIndexGroup->downIndex();
					}
				} else {
					mIndexGroup->downIndex();
				}
			} else if (pad->getButtonDown() & Controller::ANALOG_RIGHT) {
				if (mIndexPaneList[mCurrActiveRowSel]->mSizeType == TIndexPane::Size_Small && isPanelExist()) {
					mRightOffset++;
					if (mRightOffset > 2) {
						mRightOffset = 2;
					} else {
						isHorizontalScroll = true;
					}
				}
			} else if (pad->getButtonDown() & Controller::ANALOG_LEFT) {
				if (mIndexPaneList[mCurrActiveRowSel]->mSizeType == TIndexPane::Size_Small) {
					mRightOffset--;
					if (mRightOffset < 0) {
						mRightOffset = 0;
					} else {
						isHorizontalScroll = true;
					}
				}
			}
		}

		if (!mIndexGroup->mStateID && !isHorizontalScroll) {
			Controller* pad = mController;
			if (pad->getButtonDown() & Controller::PRESS_X) {
				mState = Screen::Game2DMgr::CHECK2D_Zukan_Changing;
				doPushXButton();
			} else if (pad->getButtonDown() & Controller::PRESS_Y) {
				mState = Screen::Game2DMgr::CHECK2D_Zukan_Changing;
				doPushYButton();
			} else if (pad->getButtonDown() & (Controller::PRESS_L | Controller::PRESS_R)) {
				if (mIsBigWindowOpened) {
					PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
					mIsBigWindowOpened = false;
				}
				if (mWindow->mState) {
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
					mWindow->windowClose();
				}
			} else if (pad->getButtonDown() & Controller::PRESS_B) {
				doPushBButton();
			} else if (pad->getButtonDown() & Controller::PRESS_A) {
				mState = Screen::Game2DMgr::CHECK2D_Zukan_Changing;
				if (mCameraFadeInLevel < 0.5f) {
					if (!mIsBigWindowOpened) {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
					}
					mIsBigWindowOpened = true;
				}
				if (mWindow->mState) {
					windowOpenClose(getXMsgID(mIndexPaneList[mCurrActiveRowSel]->getIndex()));
				}
			} else {
				bool check = mWindow->checkState(TZukanWindow::STATE_Inactive);
				if (!check) {
					// scroll through message box with analog stick
					f32 z = pad->mMStick.mYPos;
					if (pad->mMStick.mYPos >= 0.5f || pad->mMStick.mYPos <= -0.5f) {
						if (pad->mMStick.mYPos <= -0.5f) {
							z = -1.0f;
						}
						if (z >= 0.5f) {
							z = 1.0f;
						}
						mWindow->msgScroll(z);
						if (mWindow->getPosRate() == 0.0f || mWindow->getPosRate() == 1.0f) {
							z = 0.0f;
						}
						if (z != 0.0f) {
							PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMO_SCROLL, 0);
						}
						mWindow->moveIcon(z);
					}
				}
			}
		}
	}

	if (mIsErrorSoundState) {
		mIsErrorSoundState++;
		if (mIsErrorSoundState > 15) {
			mIsErrorSoundState = 0;
		}
	}

	if (getDispDataZukan()->mDispWorldMapInfoWin0->mResult == 1 && !mIsSection && mState < Screen::Game2DMgr::CHECK2D_Zukan_ExitStart) {
		mState = Screen::Game2DMgr::CHECK2D_Zukan_ExitStart;
		getOwner()->endScene(nullptr);
	}

	if (!mIsBigWindowOpened && mWindow->mState == 0) {
		mControlStickPic->mAnimGroup->setSpeed(2.0f);
	} else {
		mControlStickPic->mAnimGroup->setSpeed(0.0f);
	}

	if (mIsPreDebt && mMaxPane <= 3) {
		mControlStickPic->mAnimGroup->setSpeed(0.0f);
	}

	mBGScreen->update();
	mListScreen->update();
	mMainScreen->update();
	mWindow->update();
	mEffectScreen->update();
	if (mSujiScreen) {
		mSujiScreen->update();
	}
	mYajiScreen->update();
	mIconScreen->update();
	mIconScreen->scaleScreen(mNewScale);
	mColorAnm->update();

	if (updateList() || isHorizontalScroll) {
		changePaneInfo();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		TIndexPane* pane = mIndexPaneList[mCurrActiveRowSel];

		// for large panes (bosses), always do the scale animation on the middle pane (if its whats selected),
		// otherwise do it based on the horizontal selection
		if (pane->mSizeType != TIndexPane::Size_Small) {
			for (int i = 0; i < mNumActiveRows; i++) {
				if (mIndexPaneList[mCurrActiveRowSel]->getListIndex() == mIndexPaneList[i]->getListIndex()) {
					mIndexPaneList[i]->mIconInfos[1]->startScaleUp(0.5f);
				}
			}
		} else {
			pane->mIconInfos[mRightOffset]->startScaleUp(1.0f);
		}
	}

	JGeometry::TBox2f box;
	f32 scale = mBigWindowScale - 1.0f;
	box       = mPaneModelPos;
	mScaleMgr->calc();
	f32 scale2 = 1.0f;
	box.i.x += scale * (mPaneModelLPos.i.x - mPaneModelPos.i.x) * scale2;
	box.i.y += scale * (mPaneModelLPos.i.y - mPaneModelPos.i.y) * scale2;
	box.f.x += scale * (mPaneModelLPos.f.x - mPaneModelPos.f.x) * scale2;
	box.f.y += scale * (mPaneModelLPos.f.y - mPaneModelPos.f.y) * scale2;
	mPaneModel->place(box);
	mPaneWindowBack->place(box);
	mPaneWindowBack_Child->place(box);
	J2DPane* win = mPaneBigWindow;
	if (win) {
		f32 winScale = scale + 1.0f;
		winScale *= 0.5f;
		win->updateScale(winScale);
	}

	f32 calc = 0.35f;
	if (mDoUpdateLRButtonAlpha) {
		calc = mArrowAlpha->calc();
	}

	if (isOpenConfirmWindow()) {
		if (calc <= 0.35f) {
			mDoUpdateLRButtonAlpha = false;
			calc                   = 0.35f;
		}
	} else {
		mDoUpdateLRButtonAlpha = true;
	}

	mYajiScreen->mScreenObj->setAlpha(calc * 255.0f);
	JUtility::TColor color = mColorAnm->mColor;
	mPaneNew1->setAlpha(color.a);
	color.a = 0;
	mPaneNew1->setBlack(color);
	GXColor animColor;
	mWindow->getAnimColor(animColor);
	static_cast<J2DPicture*>(mWindow->mPaneIconLight)->setAlpha(animColor.a);

	if (!mIsEffectRequired) {
		mCameraFadeInLevel += 0.3f;
		if (mCameraFadeInLevel > 1.0f) {
			mCameraFadeInLevel = 1.0f;
		}
	} else {
		mCameraFadeInLevel *= 0.6f;
		if (mCameraFadeInLevel < 0.05f) {
			mCameraFadeInLevel = 0.0f;
		}
	}

	// manage fade out of cstick/arrow when near bottom of scroll list
	bool check = mWindow->checkState(TZukanWindow::STATE_Inactive);
	if (!check) {
		f32 alpha = mWindow->getPosRate();
		if (alpha < 0.2f) {
			alpha *= 5.0f;
		} else {
			alpha = 1.0f;
		}
		// alpha = 255.0f * alpha;
		mWindow->mScreenObj->search('mg_yaji')->setAlpha(alpha * 255.0f);
		mWindow->mScreenObj->search('Pbtn_cu1')->setAlpha(alpha * 255.0f);
		mPaneMesgWindowStickCap->setAlpha(alpha * 255.0f);
		mPaneMesgWindowStick->setAlpha(alpha * 255.0f);
	}

	if (mIsInFadeInOut) {
		mCameraFadeInLevel = 1.0f;
	}
	mEffectScreen->mScreenObj->setAlpha(mCameraFadeInLevel * 255.0f);
	mPaneModel->setAlpha((1.0f - mCameraFadeInLevel) * 255.0f);
	mAButtonPane->setAlpha((1.0f - mCameraFadeInLevel) * 255.0f);
	updateButtonAlpha(255);

	f32 xpos = scale * (mPaneModelLOffs.x - mPaneModelOffs.x) + mPaneModelOffs.x;
	f32 ypos = scale * (mPaneModelLOffs.y - mPaneModelOffs.y) + mPaneModelOffs.y;
	mPaneModel->setOffset(xpos, ypos);
	mPaneWindowBack->setOffset(xpos, ypos);
	mPaneWindowBack_Child->setOffset(xpos, ypos);
	if (mState == Screen::Game2DMgr::CHECK2D_Zukan_Changing) {
		mCurrObjectID = getModelIndex(mIndexPaneList[mCurrActiveRowSel]->getIndex());
		if (!mIsCurrentSelUnlocked) {
			mCurrObjectID = -1;
		}
	}
	doUpdateOut();

	if (mForceResetParm) {
		mForceResetParm             = false;
		TIndexGroup* group          = mIndexGroup;
		group->mMaxRollSpeed        = mScrollParm.mMaxRollSpeed;
		group->mSpeedSlowdownFactor = mScrollParm.mSpeedSlowdownFactor;
		group->mRollSpeedMod        = mScrollParm.mRollSpeedMod;
		group->mSpeedSpeedupFactor  = mScrollParm.mSpeedSpeedupFactor;
		group->mInitialRollSpeed    = mScrollParm.mInitialRollSpeed;
	}

	if (getDispDataZukan()->mPrevSelection && mCanInput) {
		*getDispDataZukan()->mPrevSelection = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	}

	return false;
}

/**
 * @note Address: 0x803728A8
 * @note Size: 0x2B8
 */
void TZukanBase::updateButtonAlpha(u8 target)
{
	if (mDoFadeNameAlpha) {
		mNameAlpha -= 0.2f;
	} else {
		if (mIsCurrentSelUnlocked) {
			mNameAlpha += 0.2f;
		} else {
			mNameAlpha -= 0.2f;
		}
	}

	if (mIsCurrentSelUnlocked) {
		if (isComplete()) {
			mYButtonAlpha += 0.2f;
		} else {
			mYButtonAlpha -= 0.2f;
		}
		mXButtonAlpha += 0.2f;
	} else {
		mXButtonAlpha -= 0.2f;
		mYButtonAlpha -= 0.2f;
	}

	if (mXButtonAlpha > 1.0f) {
		mXButtonAlpha = 1.0f;
	}
	if (mXButtonAlpha < 0.0f) {
		mXButtonAlpha = 0.0f;
	}
	if (mYButtonAlpha > 1.0f) {
		mYButtonAlpha = 1.0f;
	}
	if (mYButtonAlpha < 0.0f) {
		mYButtonAlpha = 0.0f;
	}

	if (mNameAlpha > 1.0f) {
		mNameAlpha = 1.0f;
	}

	if (mNameAlpha <= 0.0f) {
		mNameAlpha = 0.0f;
		changeName();
		mDoFadeNameAlpha = false;
	}

	if (mIsInDemo) {
		mNameAlpha    = 0.0f;
		mXButtonAlpha = 0.0f;
	} else {
		if (mXButtonPane) {
			mXButtonPane->setAlpha(mXButtonAlpha * (f32)target);
		}
		if (mYButtonPane) {
			mYButtonPane->setAlpha(mYButtonAlpha * (f32)target);
		}
	}
	mPaneEnemyName->setAlpha(mNameAlpha * (f32)target);
	if (mPaneEnemyNameShadow) {
		mPaneEnemyNameShadow->setAlpha(mNameAlpha * 120.0f);
	}
}

/**
 * @note Address: 0x80372B68
 * @note Size: 0x714
 */
void TZukanBase::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = gfx.getPerspGraph();
	mBGScreen->draw(gfx, graf);

	GXSetScissor(mPanelListBounds.i.x, mPanelListBounds.i.y, mPanelListBounds.f.x - mPanelListBounds.i.x,
	             mPanelListBounds.f.y - mPanelListBounds.i.y);
	mListScreen->draw(gfx, graf);
	mIconScreen->draw(gfx, *graf);

	for (int i = 0; i < mNumActiveRows; i++) {
		TIndexPane* idpane = mIndexPaneList[i];
		if (idpane->mPane->isVisible()) {
			if (idpane->mSizeType == TIndexPane::Size_Small) {
				for (int j = 0; j < 3; j++) {
					int index = mIndexPaneList[i]->getListIndex();
					int id    = index + j;
					if (mIndexPaneList[i]->mIconInfos[j]->mParentIndex && isNewSupply(id, false)) {
						mPaneNew1->mGlobalMtx[0][3] = mNewOffset.x + mIndexPaneList[i]->mIconInfos[j]->mPane->mGlobalMtx[0][3];
						mPaneNew1->mGlobalMtx[1][3] = mNewOffset.y + mIndexPaneList[i]->mIconInfos[j]->mPane->mGlobalMtx[1][3];
						mMessageNew->draw(gfx, *graf);
					}
				}
			} else if (idpane->mSizeType != TIndexPane::Size_Small2) {
				if (isNewSupply(idpane->getListIndex(), false)) {
					mPaneNew1->mGlobalMtx[0][3] = mLargeNewOffset.x + mIndexPaneList[i]->mIconInfos[1]->mPane->mGlobalMtx[0][3];
					mPaneNew1->mGlobalMtx[1][3] = mLargeNewOffset.y + mIndexPaneList[i]->mIconInfos[1]->mPane->mGlobalMtx[1][3];
					mMessageNew->draw(gfx, *graf);
				}
			}
		}
	}

	GXSetScissor(0, 0, 640, 480);
	mMainScreen->draw(gfx, graf);
	if (mSujiScreen) {
		mSujiScreen->draw(gfx, graf);
	}
	if (mIsInDemo) {
		mEffectScreen->draw(gfx, graf);
	}

	if ((mWindow->checkState(TZukanWindow::STATE_Inactive) == false)) { // needs to be == false to match
		if (mWindow->checkState(TZukanWindow::STATE_Exit)) {
			if (mMessageBoxBGAlpha > 20) {
				mMessageBoxBGAlpha -= 20;
			} else {
				mMessageBoxBGAlpha = 0;
			}
		} else {
			mMessageBoxBGAlpha += 20;
			if (mMessageBoxBGAlpha > 200) {
				mMessageBoxBGAlpha = 200;
			}
		}
		JUtility::TColor c;
		c.set(0, 0, 0, 0);
		c.a = mMessageBoxBGAlpha;
		graf->setColor(c);
		GXSetAlphaUpdate(GX_FALSE);
		u16 y    = System::getRenderModeObj()->efbHeight;
		u16 x    = System::getRenderModeObj()->fbWidth;
		f32 zero = 0.0f;
		JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
		graf->fillBox(box);
		GXSetAlphaUpdate(GX_TRUE);
		mPaneEnemyName->setAlpha(mMessageBoxBGAlpha);
		mMessageCallback3->draw(gfx, *graf); // this makes the enemy name appear over the background fade
	}

	if (mIsInDemo) {
		doDemoDraw(gfx);
	} else {
		mWindow->draw(gfx, graf);
		mEffectScreen->draw(gfx, graf);
	}

	mYajiScreen->draw(gfx, graf);
	mPaneSelectIcon->show();
	graf->setPort();
	JUtility::TColor color;
	color.set(0, 0, 0, 0);
	if (static_cast<TDEnemyScene*>(getOwner())->mConfirmEndWindow->mHasDrawn) {
		if (static_cast<TDEnemyScene*>(getOwner())->mConfirmEndWindow->mIsActive) {
			mMessageBoxBGAlpha += 20;
			if (mMessageBoxBGAlpha > 200) {
				mMessageBoxBGAlpha = 200;
			}
		} else {
			if (mMessageBoxBGAlpha > 20) {
				mMessageBoxBGAlpha -= 20;
			} else {
				mMessageBoxBGAlpha = 0;
			}
		}
		color.a = mMessageBoxBGAlpha;
		graf->setColor(color);
		GXSetAlphaUpdate(GX_FALSE);
		u32 y    = System::getRenderModeObj()->efbHeight;
		u32 x    = System::getRenderModeObj()->fbWidth;
		f32 zero = 0.0f;
		JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
		graf->fillBox(box);
		GXSetAlphaUpdate(GX_TRUE);
	}

	color.a = 255 - mFadeAlpha;
	graf->setColor(color);
	GXSetAlphaUpdate(GX_FALSE);
	u32 y    = System::getRenderModeObj()->efbHeight;
	u32 x    = System::getRenderModeObj()->fbWidth;
	f32 zero = 0.0f;
	JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
	graf->fillBox(box);
	GXSetAlphaUpdate(GX_TRUE);
}

/**
 * @note Address: 0x80373280
 * @note Size: 0x18
 */
void TZukanBase::doUpdateFadeoutFinish()
{
	if (mState == Screen::Game2DMgr::CHECK2D_Zukan_ExitStart) {
		mState = Screen::Game2DMgr::CHECK2D_Zukan_ExitFinished;
	}
}

/**
 * @note Address: 0x80373298
 * @note Size: 0x578
 */
void TZukanBase::indexPaneInit(J2DScreen* screen)
{
	mCurrMinActiveRow = 0;
	mCurrActiveRowSel = 4; // the current selected row will be the minimum active row + 4
	mCurrMaxActiveRow = mNumActiveRows - 1;

	u64 tags[10] = { 'Tmenu00', 'Tmenu01', 'Tmenu02', 'Tmenu03', 'Tmenu04', 'Tmenu05', 'Tmenu07', 'Tmenu06', 'Tmenu08', 'Tmenu09' };

	J2DPane* pane = screen->search(tags[mCurrMinActiveRow]);
	P2ASSERTLINE(1083, pane);
	mMinSelYOffset = pane->mOffset.y;

	J2DPane* pane2 = screen->search(tags[mCurrMaxActiveRow]);
	P2ASSERTLINE(1086, pane2);
	mMaxSelYOffset = pane2->mOffset.y;

	// clang-format off
	u64 panetags[10][4][3] = {
							'Pn00_0_1', 'Pn00_1_1', 'Pn00_2_1',
							'Pn00_0_2', 'Pn00_1_2', 'Pn00_2_2',
							'Pim00_00', 'Pim00_01', 'Pim00_02',
							'Pme00_00', 'Pme00_01', 'Pme00_02',

							'Pn01_0_1', 'Pn01_1_1', 'Pn01_2_1',
							'Pn01_0_2', 'Pn01_1_2', 'Pn01_2_2',
							'Pim01_00', 'Pim01_01', 'Pim01_02',
							'Pme01_00', 'Pme01_01', 'Pme01_02',

							'Pn02_0_1', 'Pn02_1_1', 'Pn02_2_1',
							'Pn02_0_2', 'Pn02_1_2', 'Pn02_2_2',
							'Pim02_00', 'Pim02_01', 'Pim02_02',
							'Pme02_00', 'Pme02_01', 'Pme02_02',

							'Pn03_0_1', 'Pn03_1_1', 'Pn03_2_1',
							'Pn03_0_2', 'Pn03_1_2', 'Pn03_2_2',
							'Pim03_00', 'Pim03_01', 'Pim03_02',
							'Pme03_00', 'Pme03_01', 'Pme03_02',

							'Pn04_0_1', 'Pn04_1_1', 'Pn04_2_1',
							'Pn04_0_2', 'Pn04_1_2', 'Pn04_2_2',
							'Pim04_00', 'Pim04_01', 'Pim04_02',
							'Pme04_00', 'Pme04_01', 'Pme04_02',

							'Pn05_0_1', 'Pn05_1_1', 'Pn05_2_1',
							'Pn05_0_2', 'Pn05_1_2', 'Pn05_2_2',
							'Pim05_00', 'Pim05_01', 'Pim05_02',
							'Pme05_00', 'Pme05_01', 'Pme05_02',

							'Pn07_0_1', 'Pn07_1_1', 'Pn07_2_1',
							'Pn07_0_2', 'Pn07_1_2', 'Pn07_2_2',
							'Pim07_00', 'Pim07_01', 'Pim07_02',
							'Pme07_00', 'Pme07_01', 'Pme07_02',

							'Pn06_0_1', 'Pn06_1_1', 'Pn06_2_1',
							'Pn06_0_2', 'Pn06_1_2', 'Pn06_2_2',
							'Pim06_00', 'Pim06_01', 'Pim06_02',
							'Pme06_00', 'Pme06_01', 'Pme06_02',

							'Pn08_0_1', 'Pn08_1_1', 'Pn08_2_1',
							'Pn08_0_2', 'Pn08_1_2', 'Pn08_2_2',
							'Pim08_00', 'Pim08_01', 'Pim08_02',
							'Pme08_00', 'Pme08_01', 'Pme07_05',

							'Pn09_0_1', 'Pn09_1_1', 'Pn09_2_1',
							'Pn09_0_2', 'Pn09_1_2', 'Pn09_2_2',
							'Pim09_00', 'Pim09_01', 'Pim09_02',
							'Pme09_00', 'Pme09_01', 'Pme09_02' };
	// clang-format on

	bool flag = false;
	if (mIsPreDebt && mMaxPane == 0) {
		flag = true;
	}

	mIndexPaneList = new TIndexPane*[mNumActiveRows];
	for (int i = 0; i < mNumActiveRows; i++) {
		mIndexPaneList[i] = nullptr;
	}

	int prevIndex = 0;
	for (int i = 0; i < mNumActiveRows; i++) {
		mIndexPaneList[i] = new TIndexPane(this, static_cast<P2DScreen::Mgr_tuning*>(screen), tags[i]);
		mIndexPaneList[i]->createIconInfo(3, getIdMax());
		TIconInfo* icon;
		for (int j = 0; j < 3; j++) {
			icon = mIndexPaneList[i]->mIconInfos[j];
			icon->init(
			    setScaleUpCounter2(mListScreen->getScreenObj(), panetags[i][0][j], panetags[i][1][j], &icon->mParentIndex, 3, mArchive),
			    screen->search(panetags[i][2][j]), screen->search(panetags[i][3][j]));
			if (mCanComplete) {
				J2DPictureEx* pic = new J2DPictureEx('test', *screen->search(panetags[i][3][j])->getBounds(), "w08_48_gra.bti", 0x1100000);
				P2ASSERTLINE(1129, pic);
				mIndexPaneList[i]->mIconInfos[j]->mPic = pic;
				screen->search(tags[i])->appendChild(pic);
				screen->search(tags[i])->appendChild(screen->search(panetags[i][3][j]));
				pic->setBasePosition(J2DPOS_Center);
			}
		}
		J2DPane* pane = mIndexPaneList[i]->mPane;
		int index     = i * mRowSize;
		if (mIsPreDebt) {
			index = prevIndex;
		}

		if (mIsPreDebt) {
			if (flag) {
				setShortenIndex(i, -1, true);
			} else {
				getUpdateIndex(index, true);
				setShortenIndex(i, prevIndex, true);
				if (index == 0 && prevIndex != 0) {
					flag = true;
				}

				if (mMaxPane < 3) {
					flag = true;
				}
				prevIndex = index;
			}
		} else {
			setShortenIndex(i, index, true);
		}
		if (index >= 0 && _B0) {
			pane->setMsgID(getNameID(index));
		}
	}

	for (int i = 0; i < mNumActiveRows; i++) {
		// some commented out/debug code probably
	}
}

/**
 * @note Address: 0x80373810
 * @note Size: 0x258
 */
void TZukanBase::paneInit()
{
	mPaneEnemyName = static_cast<J2DTextBoxEx*>(mMainScreen->mScreenObj->search('Ttekinam'));
	P2ASSERTLINE(1196, mPaneEnemyName);

	mPaneEnemyNameShadow = static_cast<J2DTextBoxEx*>(mMainScreen->mScreenObj->search('Ttekina1'));
	mMessageCallback3    = new og::Screen::CallBack_Message;
	mMainScreen->mScreenObj->addCallBack('Ttekinam', mMessageCallback3);

	mYButtonPane = mMainScreen->mScreenObj->search('Nbtn0');
	P2ASSERTLINE(1204, mYButtonPane);

	mXButtonPane = mMainScreen->mScreenObj->search('Nbtn2');
	P2ASSERTLINE(1208, mXButtonPane);

	mAButtonPane = mMainScreen->mScreenObj->search('Nbtn3');
	P2ASSERTLINE(1211, mAButtonPane);

	mPaneMessageDemo = mWindow->mScreenObj->search('mg_demo');
	P2ASSERTLINE(1215, mPaneMessageDemo);

	f32 offs                = 20.0f;
	mSelectionYOffset       = mIndexPaneList[mCurrActiveRowSel]->mYOffset - 10.0f;
	mCursorSelectionYOffset = mSelectionYOffset + offs;
}

/**
 * @note Address: 0x80373A68
 * @note Size: 0xC8
 */
void TZukanBase::changePaneInfo()
{
	mIsErrorSoundState = true;
	mDoFadeNameAlpha   = true;
	mDisplayIndex      = mIndexPaneList[mCurrActiveRowSel]->getIndex() + 1;
	setDetail();

	// Before paying debt, change stick anim if youre at the bottom or top of the list
	if (mIsPreDebt && !mCanScroll) {
		int sel = mCurrActiveRowSel;
		if (sel == 0) {
			mStickAnim->stickDown();
		} else if (sel == mMaxSelectZukan / 3) {
			mStickAnim->stickUp();
		} else {
			mStickAnim->stickUpDown();
		}
	}
}

/**
 * @note Address: 0x80373B30
 * @note Size: 0xA8
 */
void TZukanBase::changeName()
{
	int id = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	if (id >= 0) {
		J2DTextBoxEx* pane = mPaneEnemyName;
		pane->setMsgID(getNameID(id));
		if (mPaneEnemyNameShadow) {
			pane = mPaneEnemyNameShadow;
		}
		pane->setMsgID(getNameID(id));
	}
}

/**
 * @note Address: 0x80373BD8
 * @note Size: 0x5C
 */
void TZukanBase::doUpdateIn()
{
	bool check = mWindow->checkState(TZukanWindow::STATE_Inactive);
	if (check && mWindow->_18) {
		mWindow->_18 = false;
		if (mCurrCharacterOpened) {
			doPushXButton();
		} else {
			doPushYButton();
		}
	}
}

/**
 * @note Address: 0x80373C34
 * @note Size: 0x630
 */
void TZukanBase::doUpdateOut()
{
	mCursorAnimTimer += mCursorAnimSpeed;
	if (mCursorAnimTimer > TAU) {
		mCursorAnimTimer -= TAU;
	}
	mCursorScale = sinf(mCursorAnimTimer) * mCursorAnimMagnitude + 0.85f;

	for (int i = 0; i < mNumActiveRows; i++) {
		mIndexPaneList[i]->update();
	}
	int offs2 = mRightOffset;

	TIndexPane* pane = mIndexPaneList[mCurrActiveRowSel];
	if (pane->mSizeType != TIndexPane::Size_Small) {
		mPaneSelectIcon->setOffset(mSelectIconPos.x + 62.0f, mSelectIconPos.y);
		offs2 = 1;
	} else {
		if (mIsPreDebt && mMaxPane > 0 && pane->getIndex() < 0) {
			int offs = mMaxPane;
			if (_234 >= 0) {
				offs = _234;
			}
			offs2 = offs % 3;
			offs2--;
			if (offs2 < 0) {
				offs2 = 0;
			}
			mRightOffset = offs2;
			changePaneInfo();
			mIndexPaneList[mCurrActiveRowSel]->mIconInfos[mRightOffset]->startScaleUp(1.0f);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}
		mPaneSelectIcon->setOffset(mSelectIconPos.x + (mRightOffset * 62.0f), mSelectIconPos.y);
	}

	J2DPane* panel = mIndexPaneList[mCurrActiveRowSel]->mIconInfos[offs2]->mPane;
	for (u8 i = 0; i < 4; i++) {
		if (mIsPreDebt && !mMaxPane) {
			mPaneCursorCorners[i]->hide();
		} else {
			f32 x = panel->getGlbVtx(i).x - panel->mGlobalMtx[0][3];
			f32 y = panel->getGlbVtx(i).y - panel->mGlobalMtx[1][3];
			mPaneCursorCorners[i]->setOffset(mCursorScale * x, mCursorScale * y);
		}
	}

	for (int i = 0; i < mNumActiveRows; i++) {
		if (mIsPreDebt) {
			bool test = true;
			if (!mCanScroll && (i != mCurrActiveRowSel || mMaxPane == 0)) {
				int id1 = mIndexPaneList[i]->getListIndex();
				int id2 = mIndexPaneList[mCurrActiveRowSel]->getListIndex();
				if (id1 < 0 || mMaxSelectZukan <= 3) {
					test = false;
				} else if (id1 > id2) {
					if (mIndexPaneList[mCurrActiveRowSel]->getPaneYOffset() > mIndexPaneList[i]->getPaneYOffset()) {
						test = false;
					}
				} else {
					if (mIndexPaneList[mCurrActiveRowSel]->getPaneYOffset() < mIndexPaneList[i]->getPaneYOffset()) {
						test = false;
					}
				}
			}
			if (test) {
				switch (mDrawLineType) {
				case 0:
				case 1:
					mIndexPaneList[i]->mPane->show();
					mIndexPaneList[i]->mPane->getFirstChildPane()->show();
					break;
				case 2:
					mIndexPaneList[i]->mPane->show();
					mIndexPaneList[i]->mPane->getFirstChildPane()->hide();
					break;
				}
			} else {
				switch (mDrawLineType) {
				case 0:
				case 2:
					mIndexPaneList[i]->mPane->hide();
					break;
				case 1:
					mIndexPaneList[i]->mPane->show();
					mIndexPaneList[i]->mPane->getFirstChildPane()->show();
					mIndexPaneList[i]->mIconInfos[0]->mPane->hide();
					mIndexPaneList[i]->mIconInfos[1]->mPane->hide();
					mIndexPaneList[i]->mIconInfos[2]->mPane->hide();
					break;
				}
			}
		} else {
			mIndexPaneList[i]->mPane->getFirstChildPane()->hide();
		}
		if (mCanComplete) {
			for (int j = 0; j < 3; j++) {
				TIconInfo* icon = mIndexPaneList[i]->mIconInfos[j];
				J2DPane* pane   = icon->mPic;
				if (icon->mParentIndex && icon->mPane->isVisible()) {
					pane->show();
					if (mIndexPaneList[i]->mSizeType == TIndexPane::Size_Small) {
						pane->updateScale(mCategoryScale.x, mCategoryScale.y);
					} else {
						pane->updateScale(mCategoryScale.x * mLargeCategoryScale, mCategoryScale.y * mLargeCategoryScale);
					}
				} else {
					pane->hide();
				}
			}
		}
	}
}

/**
 * @note Address: 0x80374264
 * @note Size: 0x114
 */
void TZukanBase::doPushXButton()
{
	if (mIsCurrentSelUnlocked) {
		if (mIsBigWindowOpened) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
		}
		mIsBigWindowOpened = false;
		if (mWindow->mState == 0) {
			mCurrCharacterOpened = false;
			windowOpenClose(getXMsgID(mIndexPaneList[mCurrActiveRowSel]->getIndex()));
			setXWindow();
		} else {
			windowOpenClose(getXMsgID(mIndexPaneList[mCurrActiveRowSel]->getIndex()));
			if (mCurrCharacterOpened) {
				mWindow->_18 = 1;
			}
		}
	}
}

/**
 * @note Address: 0x80374378
 * @note Size: 0x130
 */
void TZukanBase::doPushYButton()
{
	if (mIsCurrentSelUnlocked && isComplete()) {
		if (mIsBigWindowOpened) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
		}
		mIsBigWindowOpened = false;
		if (mWindow->mState == 0) {
			mCurrCharacterOpened = true;
			windowOpenClose(getYMsgID(mIndexPaneList[mCurrActiveRowSel]->getIndex()));
			setYWindow();
		} else {
			windowOpenClose(getYMsgID(mIndexPaneList[mCurrActiveRowSel]->getIndex()));
			if (!mCurrCharacterOpened) {
				mWindow->_18 = 1;
			}
		}
	}
}

/**
 * @note Address: 0x803744A8
 * @note Size: 0xB0
 */
void TZukanBase::doPushBButton()
{
	if (mIsBigWindowOpened) {
		mIsBigWindowOpened = false;
		PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
	} else {
		if (mWindow->mState != 0) {
			windowOpenClose(getXMsgID(mIndexPaneList[mCurrActiveRowSel]->getIndex()));
		} else {
			openConfirmWindow();
		}
	}
}

/**
 * @note Address: 0x80374558
 * @note Size: 0x244
 */
void TZukanBase::setShortenIndex(int paneID, int index, bool)
{
	if (mIsPreDebt) {
		TIndexPane* pane = mIndexPaneList[paneID];
		if (pane->mIndex < 0) {
			index = -1;
		}
		pane->mIndex = index;
		if (mDoEnableBigIcon && index >= 0 && index < mMaxPane && mIsBigIconList[mViewablePanelIDList[index]]) {
			mIndexPaneList[paneID]->setIndex(index);
			TIndexPane* pane = mIndexPaneList[paneID];
			if (pane->mSizeType != TIndexPane::Size_Small2) {
				if (mIsSection)
					pane->getIconInfo(1)->setInfo(mViewablePanelIDList[index], nullptr);
				else {
					TIconInfo* info     = pane->getIconInfo(1);
					const ResTIMG* timg = getTexInfo(mViewablePanelIDList[index]);
					info->setInfo(mViewablePanelIDList[index], timg);
				}
			} else {
				pane->getIconInfo(1)->mParentIndex = mViewablePanelIDList[index] + 1;
			}
		} else {
			int i      = 0;
			int offset = 0;
			do { // not a fan of this
				if (index >= 0 && offset + index < mMaxPane) {
					if (_234 >= 0 && offset + index >= _234) {
						mIndexPaneList[paneID]->getIconInfo(i)->setInfo(-1, nullptr);
					} else if (mIsSection) {
						mIndexPaneList[paneID]->getIconInfo(i)->setInfo(mViewablePanelIDList[offset + index], nullptr);
					} else {
						TIconInfo* info     = mIndexPaneList[paneID]->getIconInfo(i);
						const ResTIMG* timg = getTexInfo(mViewablePanelIDList[offset + index]);
						info->setInfo(mViewablePanelIDList[offset + index], timg);
					}
				} else {
					mIndexPaneList[paneID]->getIconInfo(i)->setInfo(-1, nullptr);
				}
			} while (++i <= 2 && ++offset < 3);
		}
	} else {
		mIndexPaneList[paneID]->setIndex(index);
	}
}

/**
 * @note Address: 0x8037479C
 * @note Size: 0x88
 */
void TZukanBase::windowOpenClose(u64 mesg)
{
	if (mIsCurrentSelUnlocked) {
		bool check = mWindow->checkState(TZukanWindow::STATE_Inactive);
		if (check) {

			mPaneMessageDemo->setMsgID(mesg);
			mMessageBoxBGAlpha = 0;
			mWindow->windowOpen();
		} else if (mWindow->mState != TZukanWindow::STATE_Exit) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
			mWindow->windowClose();
		}
	}
}

/**
 * @note Address: 0x80374824
 * @note Size: 0x74
 */
bool TZukanBase::isPanelExist() { return (u8)((mIndexPaneList[mCurrActiveRowSel]->getIndex() + mRightOffset) < getIdMax()); }

/**
 * @note Address: 0x80374898
 * @note Size: 0x18
 */
void TZukanBase::requireRequest()
{
	mIsDrawScene      = true;
	mRequestTimer     = 0;
	mIsEffectRequired = false;
}

/**
 * @note Address: 0x803748B0
 * @note Size: 0xC
 */
void TZukanBase::requireEffectOff() { mIsEffectRequired = true; }

/**
 * @note Address: 0x803748BC
 * @note Size: 0x1C
 */
bool TZukanBase::isEnlargedWindow()
{
	if (mIsInDemo) {
		return true;
	}
	return mIsBigWindowOpened;
}

/**
 * @note Address: 0x803748D8
 * @note Size: 0x20
 */
bool TZukanBase::isMemoWindow()
{
	if (checkMemoWindow()) {
		return true;
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void TZukanBase::requireSceneEnd()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803748F8
 * @note Size: 0x10
 */
int TZukanBase::checkRequest(int& data)
{
	data = mCurrObjectID;
	return mState;
}

/**
 * @note Address: 0x80374908
 * @note Size: 0x68
 */
int TZukanBase::getCurrSelectId()
{
	if (mIsCurrentSelUnlocked) {
		return getModelIndex(mIndexPaneList[mCurrActiveRowSel]->getIndex());
	}

	return -1;
}

/**
 * @note Address: 0x80374970
 * @note Size: 0x124
 */
const ResTIMG* TZukanBase::getTexInfo(int id)
{
	if (mIsSection) {
		return static_cast<const ResTIMG*>(mArchive->getResource("timg/flower_icon.bti"));
	} else if (getDispDataZukan()->getMemberID() == MEMBER_ZUKAN_ENEMY) {
		return getDispDataZukan()->mEnemyTexMgr->getTexture(getModelIndex(id))->mTexInfo;
	} else {
		int sel = getModelIndex(id);
		return getDispDataZukan()->mResultTexMgr->getOtakaraItemTexture(sel)->mTexInfo;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
void TZukanBase::resetDebugShow()
{
	// mDebugUnlockedList        = new bool[getIdMax()];
	for (int i = 0; i < getIdMax(); i++) {
		mDebugUnlockedList[i] = false;
		if (randFloat() < mRandShowRate) {
			mDebugUnlockedList[i] = true;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
TEnemyZukanIndex& TEnemyZukanIndex::getIndexInfo(int index)
{
	TEnemyZukanIndex& data = eIDInfo[0];
	for (int i = 0; i < ENEMY_ZUKAN_COUNT; i++) {
		if (eIDInfo[i].mZukanID == index) {
			return eIDInfo[i];
		}
	}
	return eIDInfo[0];
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
TEnemyZukan::TEnemyZukan()
    : TZukanBase("enemyZukan")
{
	mValueCounter    = nullptr;
	mDefeatedCounter = nullptr;
	mPikiLostCounter = nullptr;
}

/**
 * @note Address: 0x80374A94
 * @note Size: 0x124
 */
TEnemyZukan::~TEnemyZukan() { mDispEnemy->mDebugExpHeap->freeAll(); }

/**
 * @note Address: 0x80374BB8
 * @note Size: 0x1734
 */
void TEnemyZukan::doCreate(JKRArchive* arc)
{
	mScrollParm.mMaxRollSpeed        = 10.0f;
	mScrollParm.mRollSpeedMod        = 1.1f;
	mScrollParm.mSpeedSlowdownFactor = 0.99f;
	mScrollParm.mSpeedSpeedupFactor  = 1.5f;
	mScrollParm.mInitialRollSpeed    = 2.5f;

	mCategoryColor0w.setRGB(0, 0, 255);
	mCategoryColor0b.setRGB(0, 220, 220);
	mCategoryColor1w.setRGB(70, 255, 255);
	mCategoryColor1b.setRGB(255, 255, 0);

	mArchive = arc;

	DispMemberZukanEnemy* disp = static_cast<DispMemberZukanEnemy*>(getDispMember());
	if (disp->isID(OWNER_MRMR, MEMBER_ZUKAN_ENEMY)) {
		mDispEnemy = disp;
	} else {
		mIsSection = true;
	}

	if (mIsSection) {
		// Create debug heap and setup debug data
		if (mDebugHeapParent) {
			mDebugHeap = JKRExpHeap::create(0x100000, mDebugHeapParent, true);
			P2ASSERTLINE(1986, mDebugHeap);
			mDispEnemy                = new (mDebugHeap, 0) DispMemberZukanEnemy;
			mDispEnemy->mDebugExpHeap = mDebugHeap;
			mIsSection                = true;

			mDebugUnlockedList = new bool[ENEMY_ZUKAN_COUNT];
			for (int i = 0; i < ENEMY_ZUKAN_COUNT; i++) {
				mDebugUnlockedList[i] = false;
				if (randFloat() < mRandShowRate) {
					mDebugUnlockedList[i] = true;
				}
			}
			// resetDebugShow();
			mDispEnemy->mPrevSelection = new (mDebugHeap, 0) u32;
			rand();
			*mDispEnemy->mPrevSelection       = 0;
			mDispEnemy->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
			getOwner()->setDispMember(mDispEnemy);
		} else {
			JUT_PANICLINE(2012, "set DebugHeapParent. mail to morimun.\n");
		}
	} else {
		mDispEnemy->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
	}

	// Setup icon data for all bosses
	mDoEnableBigIcon = true;
	if (mDoEnableBigIcon) {
		mIsBigIconList = new u8[ENEMY_ZUKAN_COUNT];
		for (int i = 0; i < ENEMY_ZUKAN_COUNT; i++) {
			mIsBigIconList[i] = false;
		}

		mIsBigIconList[Zukan_DangoMushi]  = true;
		mIsBigIconList[Zukan_BlackMan]    = true;
		mIsBigIconList[Zukan_OoPanModoki] = true;
		mIsBigIconList[Zukan_SnakeWhole]  = true;
		mIsBigIconList[Zukan_SnakeCrow]   = true;
		mIsBigIconList[Zukan_UmiMushi]    = true;
		mIsBigIconList[Zukan_BigTreasure] = true;
		mIsBigIconList[Zukan_Houdai]      = true;
		mIsBigIconList[Zukan_BigFoot]     = true;
		mIsBigIconList[Zukan_Damagumo]    = true;
		mIsBigIconList[Zukan_Queen]       = true;
		mIsBigIconList[Zukan_KingChappy]  = true;
	}

	if (mIsSection && !mZukanShortenTest) {
		mIsPreDebt = false;
	}

	if (Game::playData && Game::playData->mStoryFlags & Game::STORY_DebtPaid) {
		mIsPreDebt = false;
	}

	_234 = -1;

	if (mIsPreDebt) {
		if (mIsSection) {
			rand();
			int max   = getIdMax();
			int test  = randInt(50) + 1;
			int test2 = 85 - randInt(10);
			// test2     = 85 - test2;
			for (int i = 0; i < max; i++) {
				if (i < test || i > test2) {
					mMaxPane++;
				}
			}
			int max2 = mMaxPane;
			if (max2 == 0) {
				mCanScroll = false;
			} else {
				mViewablePanelIDList = new int[max2];
			}
			int k = 0;
			for (int i = 0; i < max; i++) {
				if (i < test || i > test2) {
					mViewablePanelIDList[k] = i;
					if (_234 < 0 && mIsBigIconList[i]) {
						_234 = k;
					}
					k++;
				}
			}
		} else {
			for (int i = 0; i < getIdMax(); i++) {
				if (isListShow(i)) {
					mMaxPane++;
				}
			}

			int max2 = mMaxPane;
			if (max2 == 0) {
				mCanScroll = false;
			} else {
				mViewablePanelIDList = new int[max2];
			}

			int k = 0;
			for (int i = 0; i < getIdMax(); i++) {
				if (isListShow(i)) {
					mViewablePanelIDList[k] = i;
					if (_234 < 0 && mIsBigIconList[i]) {
						_234 = k;
					}
					k++;
				}
			}
		}
	}

	mMainScreen = new TScreenBase(arc, 2);
	mMainScreen->create("new_seibutuzukan_main.blo", 0x20000);
	mMainScreen->addAnim("new_seibutuzukan_main.bck");
	mMainScreen->addAnim("new_seibutuzukan_main.bpk");

	mControlStickPic = og::Screen::setCallBack_3DStickSmall(mArchive, mMainScreen->mScreenObj, 'ota3dl');
	mPane3DStick     = mMainScreen->mScreenObj->search('ota3dl');
	P2ASSERTLINE(2142, mPane3DStick);
	P2ASSERTLINE(2143, mControlStickPic);
	mControlStickPic->mAnimGroup->setSpeed(0.0f);
	mControlStickPic->mAnimGroup->start();
	mStickAnim = new og::Screen::StickAnimMgr(mControlStickPic);
	P2ASSERTLINE(2148, mStickAnim);

	mBGScreen = new TScreenBase(arc, 0);
	mBGScreen->create("new_seibutuzukan_bg.blo", 0x20000);
	mEffectScreen = new TScreenBase(arc, 1);
	mEffectScreen->create("new_seibutuzukan_effect.blo", 0x20000);
	mEffectScreen->addAnim("new_seibutuzukan_effect.btk");
	mEffectScreen->mScreenObj->search('Pmodel_l')->hide();

	JKRHeap* backup = JKRGetCurrentHeap();
	mDispEnemy->mDebugExpHeap->becomeCurrentHeap();

	mListScreen = new TListScreen(arc, 0);
	mListScreen->create("new_seibutuzukan_list.blo", 0x20000);
	mIsLouieRescued = false;
	if (mShowAllObjects) {
		mIsLouieRescued = true;
	} else {
		if (sys->getPlayCommonData()->isLouieRescued()) {
			mIsLouieRescued = true;
		}
	}

	mSujiScreen = new TScreenBase(arc, 0);
	mSujiScreen->create("new_seibutuzukan_suji.blo", 0x20000);

	mValueCounter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), 4, 4, mArchive);
	mValueCounter->init(mSujiScreen->mScreenObj, 'Pgisei15', 'Pgisei14', 'Pgisei12', &mInfoVal1, true);
	mValueCounter->setPuyoAnim(true);
	mSujiScreen->mScreenObj->addCallBack('Pgisei15', mValueCounter);

	mPikiLostCounter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), 10, 4, mArchive);
	mPikiLostCounter->init(mSujiScreen->mScreenObj, 'Pgisei00', 'Pgisei01', 'Pgisei03', &mInfoVal2, true);
	mPikiLostCounter->setPuyoAnim(true);
	mSujiScreen->mScreenObj->addCallBack('Pgisei00', mPikiLostCounter);

	mDefeatedCounter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), 10, 4, mArchive);
	mDefeatedCounter->init(mSujiScreen->mScreenObj, 'Ptaosi00', 'Ptaosi01', 'Ptaosi03', &mInfoVal3, true);
	mDefeatedCounter->setPuyoAnim(true);
	mSujiScreen->mScreenObj->addCallBack('Ptaosi00', mDefeatedCounter);

	mSelIndexCounter = setScaleUpCounter(mSujiScreen->mScreenObj, 'Ptekino1', &mDisplayIndex, 3, mArchive);
	if (mIsPreDebt) {
		// hide the current index display before paying the debt
		if (!mIsSection) {
			mSelIndexCounter->getMotherPane()->hide();
		}
		if (mZukanCategoryTest) {
			mSelIndexCounter->getMotherPane()->show();
		}
	}

	mSujiScreen->mScreenObj->search('Pgisei00')->hide();
	mSujiScreen->mScreenObj->search('Pgisei01')->hide();
	mSujiScreen->mScreenObj->search('Pgisei02')->hide();
	mSujiScreen->mScreenObj->search('Pgisei03')->hide();
	mSujiScreen->mScreenObj->search('Pgisei12')->hide();
	mSujiScreen->mScreenObj->search('Pgisei13')->hide();
	mSujiScreen->mScreenObj->search('Pgisei14')->hide();
	mSujiScreen->mScreenObj->search('Pgisei15')->hide();
	mSujiScreen->mScreenObj->search('Ptaosi00')->hide();
	mSujiScreen->mScreenObj->search('Ptaosi01')->hide();
	mSujiScreen->mScreenObj->search('Ptaosi02')->hide();
	mSujiScreen->mScreenObj->search('Ptaosi03')->hide();

	mWindow = new TZukanWindow(arc, 2);
	mWindow->create("zukan_mess_window.blo", 0x20000);
	mWindow->addAnim("zukan_mess_window.bck");
	mWindow->addAnim("zukan_mess_window.bpk");
	mStickPicMesg        = og::Screen::setCallBack_3DStickSmall(mArchive, mWindow->mScreenObj, 'ota3ds');
	mPaneMesgWindowStick = mWindow->mScreenObj->search('ota3ds');
	P2ASSERTLINE(2265, mPaneMesgWindowStick);
	P2ASSERTLINE(2266, mStickPicMesg);
	mStickPicMesg->mAnimGroup->setSpeed(1.0f);
	mStickPicMesg->mAnimGroup->start();

	mPaneMesgWindowStickCap = mWindow->mScreenObj->search('P3dcap');
	P2ASSERTLINE(2271, mPaneMesgWindowStickCap);

	mYajiScreen = new TScreenBase(arc, 0);
	mYajiScreen->create("new_seibutuzukan_yajirushi.blo", 0x20000);

	u64 ntags[2]    = { '1301_00', '1310_00' };
	mOffsetMsgNames = new TOffsetMsgSet(ntags, '1300_00', 2);

	u64 xtags[2]     = { '1801_00', '1810_00' };
	mOffsetMsg_XDesc = new TOffsetMsgSet(xtags, '1800_00', 2);

	u64 ytags[2]     = { '1701_00', '1710_00' };
	mOffsetMsg_YDesc = new TOffsetMsgSet(ytags, '1700_00', 2);

	// olimar message box background
	mMessageWindowColor[0].r = 165;
	mMessageWindowColor[0].g = 0;
	mMessageWindowColor[0].b = 0;
	mMessageWindowColor[0].a = 255;

	// louie message box background
	mMessageWindowColor[1].r = 0;
	mMessageWindowColor[1].g = 195;
	mMessageWindowColor[1].b = 213;
	mMessageWindowColor[1].a = 255;

	// olimar icon background
	mIconColor1[0].r = 255;
	mIconColor1[0].g = 40;
	mIconColor1[0].b = 40;
	mIconColor1[0].a = 0;

	// louie icon background
	mIconColor1[1].r = 40;
	mIconColor1[1].g = 40;
	mIconColor1[1].b = 255;
	mIconColor1[1].a = 0;

	// olimar icon secondary background
	mIconColor2[0].r = 255;
	mIconColor2[0].g = 200;
	mIconColor2[0].b = 200;
	mIconColor2[0].a = 255;

	// louie icon secondary background
	mIconColor2[1].r = 200;
	mIconColor2[1].g = 200;
	mIconColor2[1].b = 255;
	mIconColor2[1].a = 255;

	if (mIsPreDebt) {
		int max = 0;
		for (int i = 0; i < mMaxPane; i++) {
			max = (mIsBigIconList[mViewablePanelIDList[i]]) ? max + 6 : max + 1;
		}
		mMaxSelectZukan = max;
	} else {
		mMaxSelectZukan = getIdMax();
	}

	TZukanBase::doCreate(arc);

	f32 yoffs = mIndexPaneList[1]->getPaneOffsetY() - mIndexPaneList[0]->getPaneOffsetY();

	if (mIsPreDebt && mMaxSelectZukan <= (mNumActiveRows - 1) * 3) {
		mCanScroll = false;
	}

	f32 xoffs = 0.0f;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < mNumActiveRows; j++) {
			f32 y = mIndexPaneList[j]->mYOffset;
			mIndexPaneList[j]->mPane->setOffsetY(y + yoffs);
			mIndexPaneList[j]->mYOffset = mIndexPaneList[j]->mPane->mOffset.y;
		}
		updateIndex(false);
		TIndexGroup* grp   = mIndexGroup;
		grp->mScrollOffset = xoffs;
		grp->mStateID      = 0;
		changePaneInfo();
	}

	int index = -1;
	if (mDispEnemy->mPrevSelection && mDispEnemy->getMemberID() == MEMBER_ZUKAN_ENEMY) {
		index = *mDispEnemy->mPrevSelection;
	}

	if (index < 0) {
		for (int i = 0; i < getIdMax(); i++) {
			if (isNewSupply(i, false)) {
				index = i;
				if (mIsPreDebt) {
					index = mViewablePanelIDList[i];
				}
				break;
			}
		}
	}

	if (index >= 0) {
		int backupindex = index;
		int max2        = mMaxSelectZukan;
		if (mIsPreDebt) {
			for (int i = 0; i < mMaxPane; i++) {
				// backupindex = i;
				if (index == mViewablePanelIDList[i]) {
					index = i;
					break;
				}
				// 	break;
				// max2--;
				// backupindex = index;
			}
		}
		if (index > 2) {
			while (true) {
				int listIndex = mIndexPaneList[mCurrActiveRowSel]->getListIndex(); // r3
				int index2    = listIndex + 3;                                     // r4
				if (mIsPreDebt) {
					// int max = _234;
					if (_234 >= 0 && listIndex < _234 && index2 > _234) {
						index2 = _234;
					}
				}
				if (index2 > index && (listIndex == index || mIndexPaneList[mCurrActiveRowSel]->mSizeType == TIndexPane::Size_Small)) {
					if (mIndexPaneList[mCurrActiveRowSel]->mSizeType != TIndexPane::Size_Small) {
						yoffs = -yoffs * 0.5f;
						for (int j = 0; j < mNumActiveRows; j++) {
							updateIDPaneYOffset(j, yoffs);
						}
						mRightOffset = 1;
					} else {
						mRightOffset = index - listIndex;
						P2ASSERTBOUNDSLINE(2431, 0, mRightOffset, 3);
					}
					changePaneInfo();
					break;
				}

				for (int j = 0; j < mNumActiveRows; j++) {
					updateIDPaneYOffset(j, -yoffs);
				}
				updateIndex(true);
				TIndexGroup* grp   = mIndexGroup;
				grp->mScrollOffset = xoffs;
				grp->mStateID      = 0.0f;
				changePaneInfo();
			}

		} else {
			mRightOffset = index % 3;
			changePaneInfo();
		}
	}

	mCurrIndex = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	if (mCurrIndex >= 0) {
		J2DPane* pane = mPaneMessageDemo;
		u64 tag       = getXMsgID(mCurrIndex);
		pane->setMsgID(tag);
	}

	backup->becomeCurrentHeap();
}

/**
 * @note Address: 0x80376338
 * @note Size: 0x1D8
 */
void TEnemyZukan::setDetail()
{
	int cindex = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	mInfoVal1  = getPrice(cindex);
	JUT_ASSERTLINE(2491, mInfoVal1 < 10000, "price (%d) = %d\n", cindex, mInfoVal1);

	mInfoVal2 = getKilledNum(cindex);
	mInfoVal3 = getDefeatNum(cindex);

	if (isListShow(cindex)) {
		mIsCurrentSelUnlocked = true;
		mValueCounter->setBlind(false);
		mDefeatedCounter->setBlind(false);
		mPikiLostCounter->setBlind(false);

		switch (cindex) {
		// Enemies who hide the poko value (ie no corpse)
		case Zukan_Baby:
		case Zukan_Fart:
		case Zukan_Kurage:
		case Zukan_OniKurage:
		case Zukan_Damagumo:
		case Zukan_Houdai:
		case Zukan_BlackMan:
		case Zukan_BigFoot:
		case Zukan_BigTreasure:
			mValueCounter->setBlind(true);
			break;
		// Enemies that hide just pikmin lost
		case Zukan_UjiA:
		case Zukan_Imomushi:
		case Zukan_TamagoMushi:
		case Zukan_Sarai:
		case Zukan_Demon:
		case Zukan_Fuefuki:
		case Zukan_Tadpole:
		case Zukan_Sokkuri:
		case Zukan_ShijimiChou:
		case Zukan_Miulin:
			mPikiLostCounter->setBlind(true);
			break;
		// Enemies that hide both price and pikmin lost
		case Zukan_Mar:
		case Zukan_Hanachirashi:
		case Zukan_Kogane:
		case Zukan_Wealthy:
		case Zukan_Qurione:
		case Zukan_PelPlant:
			mValueCounter->setBlind(true);
			mPikiLostCounter->setBlind(true);
			break;
		// Enemies that hide all 3 stats
		case Zukan_BluePom:
		case Zukan_RedPom:
		case Zukan_YellowPom:
		case Zukan_BlackPom:
		case Zukan_WhitePom:
		case Zukan_RandPom:
		case Zukan_HikariKinoko:
		case Zukan_Clover:
		case Zukan_Ooinu_l:
		case Zukan_Tanpopo:
		case Zukan_Watage:
		case Zukan_Tukushi:
		case Zukan_Nekojarashi:
		case Zukan_DaiodoRed:
		case Zukan_Magaret:
		case Zukan_Zenmai:
		case Zukan_Wakame_l:
			mValueCounter->setBlind(true);
			mPikiLostCounter->setBlind(true);
			mDefeatedCounter->setBlind(true);
		}
	} else {
		mIsCurrentSelUnlocked = false;
		mValueCounter->setBlind(true);
		mDefeatedCounter->setBlind(true);
		mPikiLostCounter->setBlind(true);
	}
	mSelIndexCounter->forceScaleUp(false);
	mValueCounter->forceScaleUp(false);
	mDefeatedCounter->forceScaleUp(false);
	mPikiLostCounter->forceScaleUp(false);
}

/**
 * @note Address: 0x80376510
 * @note Size: 0x48
 */
void TEnemyZukan::setShortenIndex(int paneID, int index, bool flag)
{
	if (mIsPreDebt && !mCanScroll && mMaxSelectZukan <= 18) {
		index = -1;
	}
	TZukanBase::setShortenIndex(paneID, index, flag);
}

/**
 * @note Address: 0x80376558
 * @note Size: 0xD8
 */
bool TEnemyZukan::isListShow(int index)
{
	if (index < 0)
		return false;

	if (mShowAllObjects)
		return true;

	if (mIsSection)
		return mDebugUnlockedList[index];

	if (Game::playData) {
		TEnemyZukanIndex& data     = TEnemyZukanIndex::getIndexInfo(index);
		Game::TekiStat::Info* info = Game::playData->mTekiStatMgr.getTekiInfo(data.mEnemyID);
		if (info->mState.isSet(TEKISTAT_STATE_UPDATED)) {
			return true;
		} else {
			return false;
		}
	}
	return true;
}

/**
 * @note Address: 0x80376630
 * @note Size: 0x718
 */
void TEnemyZukan::indexPaneInit(J2DScreen* screen)
{
	mCurrMinActiveRow = 0;
	mCurrActiveRowSel = 4;
	mCurrMaxActiveRow = mNumActiveRows - 1;

	mNumActiveRows    = 14; // 14 rows of enemies are active at once
	mCurrActiveRowSel = 6;  // active row is 6 down from the uppermost one
	mCurrMaxActiveRow = mNumActiveRows - 1;

	u64 tags[14] = { 'Tmenu12', 'Tmenu13', 'Tmenu00', 'Tmenu01', 'Tmenu02', 'Tmenu03', 'Tmenu04',
		             'Tmenu05', 'Tmenu07', 'Tmenu06', 'Tmenu08', 'Tmenu09', 'Tmenu10', 'Tmenu11' };

	J2DPane* pane = screen->search(tags[mCurrMinActiveRow]);
	P2ASSERTLINE(2650, pane);
	mMinSelYOffset = pane->mOffset.y;

	J2DPane* pane2 = screen->search(tags[mCurrMaxActiveRow]);
	P2ASSERTLINE(2653, pane2);
	mMaxSelYOffset = pane2->mOffset.y;

	// clang-format off
	u64 panetags[14][4][3] = {
							'Pn12_0_1', 'Pn12_1_1', 'Pn12_2_1',
							'Pn12_0_2', 'Pn12_1_2', 'Pn12_2_2',
							'Pim12_00', 'Pim12_01', 'Pim12_02',
							'Pme12_00', 'Pme12_01', 'Pme12_02',

							'Pn13_0_1', 'Pn13_1_1', 'Pn13_2_1',
							'Pn13_0_2', 'Pn13_1_2', 'Pn13_2_2',
							'Pim13_00', 'Pim13_01', 'Pim13_02',
							'Pme13_00', 'Pme13_01', 'Pme13_02',

							'Pn00_0_1', 'Pn00_1_1', 'Pn00_2_1',
							'Pn00_0_2', 'Pn00_1_2', 'Pn00_2_2',
							'Pim00_00', 'Pim00_01', 'Pim00_02',
							'Pme00_00', 'Pme00_01', 'Pme00_02',

							'Pn01_0_1', 'Pn01_1_1', 'Pn01_2_1',
							'Pn01_0_2', 'Pn01_1_2', 'Pn01_2_2',
							'Pim01_00', 'Pim01_01', 'Pim01_02',
							'Pme01_00', 'Pme01_01', 'Pme01_02',

							'Pn02_0_1', 'Pn02_1_1', 'Pn02_2_1',
							'Pn02_0_2', 'Pn02_1_2', 'Pn02_2_2',
							'Pim02_00', 'Pim02_01', 'Pim02_02',
							'Pme02_00', 'Pme02_01', 'Pme02_02',

							'Pn03_0_1', 'Pn03_1_1', 'Pn03_2_1',
							'Pn03_0_2', 'Pn03_1_2', 'Pn03_2_2',
							'Pim03_00', 'Pim03_01', 'Pim03_02',
							'Pme03_00', 'Pme03_01', 'Pme03_02',

							'Pn04_0_1', 'Pn04_1_1', 'Pn04_2_1',
							'Pn04_0_2', 'Pn04_1_2', 'Pn04_2_2',
							'Pim04_00', 'Pim04_01', 'Pim04_02',
							'Pme04_00', 'Pme04_01', 'Pme04_02',

							'Pn05_0_1', 'Pn05_1_1', 'Pn05_2_1',
							'Pn05_0_2', 'Pn05_1_2', 'Pn05_2_2',
							'Pim05_00', 'Pim05_01', 'Pim05_02',
							'Pme05_00', 'Pme05_01', 'Pme05_02',

							'Pn07_0_1', 'Pn07_1_1', 'Pn07_2_1',
							'Pn07_0_2', 'Pn07_1_2', 'Pn07_2_2',
							'Pim07_00', 'Pim07_01', 'Pim07_02',
							'Pme07_00', 'Pme07_01', 'Pme07_02',

							'Pn06_0_1', 'Pn06_1_1', 'Pn06_2_1',
							'Pn06_0_2', 'Pn06_1_2', 'Pn06_2_2',
							'Pim06_00', 'Pim06_01', 'Pim06_02',
							'Pme06_00', 'Pme06_01', 'Pme06_02',

							'Pn08_0_1', 'Pn08_1_1', 'Pn08_2_1',
							'Pn08_0_2', 'Pn08_1_2', 'Pn08_2_2',
							'Pim08_00', 'Pim08_01', 'Pim08_02',
							'Pme08_00', 'Pme08_01', 'Pme07_05',

							'Pn09_0_1', 'Pn09_1_1', 'Pn09_2_1',
							'Pn09_0_2', 'Pn09_1_2', 'Pn09_2_2',
							'Pim09_00', 'Pim09_01', 'Pim09_02',
							'Pme09_00', 'Pme09_01', 'Pme09_02',

							'Pn10_0_1', 'Pn10_1_1', 'Pn10_2_1',
							'Pn10_0_2', 'Pn10_1_2', 'Pn10_2_2',
							'Pim10_00', 'Pim10_01', 'Pim09_03',
							'Pme10_00', 'Pme10_01', 'Pme10_02',

							'Pn11_0_1', 'Pn11_1_1', 'Pn11_2_1',
							'Pn11_0_2', 'Pn11_1_2', 'Pn11_2_2',
							'Pim09_08', 'Pim11_01', 'Pim11_02',
							'Pme11_00', 'Pme11_01', 'Pme11_02' };
	// clang-format on

	if (mIsPreDebt) {
		_243 = true;
	}

	bool flag = false;
	if (mIsPreDebt && mMaxPane == 0) {
		flag = true;
	}

	mIndexPaneList = new TIndexPane*[mNumActiveRows];
	for (int i = 0; i < mNumActiveRows; i++) {
		mIndexPaneList[i] = nullptr;
	}

	int prevIndex = 0;
	for (int i = 0; i < mNumActiveRows; i++) {
		mIndexPaneList[i] = new TIndexPane(this, static_cast<P2DScreen::Mgr_tuning*>(screen), tags[i]);
		mIndexPaneList[i]->createIconInfo(3, getIdMax());
		TIconInfo* icon;
		for (int j = 0; j < 3; j++) {
			icon                             = mIndexPaneList[i]->mIconInfos[j];
			P2DScreen::Mgr_tuning* screenobj = mListScreen->mScreenObj;
			icon->init(setScaleUpCounter2(screenobj, panetags[i][0][j], panetags[i][1][j], &icon->mParentIndex, 2, mArchive),
			           screen->search(panetags[i][2][j]), screen->search(panetags[i][3][j]));

			if (mCanComplete) {
				J2DPictureEx* pic = new J2DPictureEx('test', *screen->search(panetags[i][3][j])->getBounds(), "w08_48_gra.bti", 0x1100000);
				P2ASSERTLINE(2705, pic);
				mIndexPaneList[i]->mIconInfos[j]->mPic = pic;
				screen->search(tags[i])->appendChild(pic);
				screen->search(tags[i])->appendChild(screen->search(panetags[i][3][j]));
				pic->setBasePosition(J2DPOS_Center);
			}
		}

		J2DPane* pane                = mIndexPaneList[i]->mPane;
		int index                    = i * mRowSize;
		mIndexPaneList[i]->mSizeType = TIndexPane::Size_Small;
		if (mIsPreDebt) {
			index = prevIndex;
		}

		if (mDoEnableBigIcon && i > 0) {
			int listIndex = mIndexPaneList[i - 1]->getListIndex();
			index         = listIndex;
			bool test     = true;
			switch (mIndexPaneList[i - 1]->mSizeType) {
			case TIndexPane::Size_Small:
				// index = prevIndex;
				if (prevIndex == _234) {
					index = prevIndex;
				} else {
					index = listIndex + mRowSize;
				}
				break;
			case TIndexPane::Size_Small2:
				index = listIndex + 1;
				break;
			case TIndexPane::Size_Big:
			case TIndexPane::Size_Big2:
				test                         = false;
				mIndexPaneList[i]->mSizeType = TIndexPane::Size_Small2;
			}

			if (test) {
				if (mIsPreDebt) {
					if (index < mMaxPane && mIsBigIconList[mViewablePanelIDList[index]]) {
						mIndexPaneList[i]->mSizeType = TIndexPane::Size_Big;
					}
				} else {
					if (mIsBigIconList[index]) {
						mIndexPaneList[i]->mSizeType = TIndexPane::Size_Big;
					}
				}
			}
		}

		if (mIsPreDebt) {
			if (flag) {
				setShortenIndex(i, -1, true);
			} else {
				getUpdateIndex(index, true);
				setShortenIndex(i, prevIndex, true);

				if (prevIndex < _234 && prevIndex + 3 > _234) {
					prevIndex = index = _234;
				}
				if (index == 0 && prevIndex != 0) {
					flag = true;
				}

				if (mMaxSelectZukan < 3) {
					flag = true;
				}
				prevIndex = index;
			}

			mCurrMinActiveRow++;
			if (mCurrMinActiveRow >= mNumActiveRows) {
				mCurrMinActiveRow = 0;
			}
		} else {
			setShortenIndex(i, index, true);
		}
		if (index >= 0 && _B0) {
			pane->setMsgID(getNameID(index));
		}
	}

	for (int i = 0; i < mNumActiveRows; i++) {
		// some commented out/debug code here
	}
	_243 = false;
}

/**
 * @note Address: 0x80376D48
 * @note Size: 0x970
 */
void TEnemyZukan::getUpdateIndex(int& id, bool flag)
{
	if (flag) {
		if (mIsPreDebt && _243) {
			P2ASSERTLINE(2853, id >= 0);

			if (mIsBigIconList[mViewablePanelIDList[id]]) {
				// int test = mIndexPaneList[mCurrMinActiveRow]->mSizeType;
				switch (mIndexPaneList[mCurrMinActiveRow]->mSizeType) {
				case TIndexPane::Size_Small2:
					id++;
					break;
				case TIndexPane::Size_Big:
					break;
				}
			} else {
				id += mRowSize;
			}
			int id2 = getIdMax();
			if (mIsPreDebt) {
				id2 = mMaxPane;
			}
			if (id >= id2)
				id = 0;
			return;
		}

		if (mMaxSelectZukan <= mNumActiveRows * 3) {
			id = mIndexPaneList[mCurrMinActiveRow]->getListIndex();
			return;
		}
		bool flag2 = false; // r31
		bool flag3 = false; // r30

		mIndexPaneList[mCurrMinActiveRow]->mSizeType = TIndexPane::Size_Small;
		if (id == mIndexPaneList[mCurrMaxActiveRow]->getListIndex()) {
			flag3 = true;
		}

		int count = 0;
		for (int i = 0; i < mNumActiveRows; i++) {
			if (mIndexPaneList[i]->getListIndex() == id) {
				count++;
			}
		}

		if (count == 2) {
			flag2 = true;
			id++;

		} else {
			switch (mIndexPaneList[mCurrMaxActiveRow]->mSizeType) {
			case TIndexPane::Size_Big:
				if (flag3) {
					mIndexPaneList[mCurrMinActiveRow]->mSizeType = TIndexPane::Size_Small2;
				} else {
					JUT_PANICLINE(2921, nullptr);
				}
				break;
			case TIndexPane::Size_Small2:
			case TIndexPane::Size_Big2:
				if (flag3) {
					mIndexPaneList[mCurrMaxActiveRow]->mSizeType = TIndexPane::Size_Big;
					if (mIsPreDebt) {
						setShortenIndex(mCurrMaxActiveRow, id, flag);
					} else {
						mIndexPaneList[mCurrMaxActiveRow]->setIndex(id);
					}
					mIndexPaneList[mCurrMinActiveRow]->mSizeType = TIndexPane::Size_Small2;
				} else {
					flag2 = true;
					id++;
				}
				break;
			case 0:
				if (_234 >= 0) {
					if (count < 2) {
						int nextRowId = id + mRowSize;
						if (id < _234 && nextRowId > _234) {
							id = _234;
						} else {
							id = nextRowId;
						}
					} else if (flag3 && mIsBigIconList[mViewablePanelIDList[id]]) {
						id++;
					} else {
						id += mRowSize;
					}
				} else {
					id += mRowSize;
				}
				flag2 = true;
				break;
			}
		}

		int idmax = getIdMax();
		if (mIsPreDebt) {
			idmax = mMaxPane;
		}
		if (flag2) {
			int test = id;
			if (test < idmax && test >= 0) {
				if (mIsPreDebt) {
					test = mViewablePanelIDList[test];
				}
				if (mIsBigIconList[test]) {
					mIndexPaneList[mCurrMinActiveRow]->mSizeType = TIndexPane::Size_Big;
				}
			}
		}
		if (id >= idmax) {
			id = 0;
		}
		mIndexPaneList[mCurrMinActiveRow]->setIndex(id);
		return;
	}

	if (mIsPreDebt && !_243) {
		if (mMaxSelectZukan <= mNumActiveRows * 3) {
			id = mIndexPaneList[mCurrMaxActiveRow]->getListIndex();
			return;
		}
	}

	int newIndex = mCurrMaxActiveRow - 1;
	if (newIndex < 0) {
		newIndex = mNumActiveRows - 1;
	}

	if (mIndexPaneList[newIndex]->mSizeType == TIndexPane::Size_Small2) {
		if (mIndexPaneList[newIndex]->getListIndex() == mIndexPaneList[mCurrMaxActiveRow]->getListIndex()) {
			mIndexPaneList[newIndex]->mSizeType = TIndexPane::Size_Big;
			if (mIsPreDebt) {
				setShortenIndex(newIndex, mIndexPaneList[newIndex]->getListIndex(), flag);
			} else {
				mIndexPaneList[newIndex]->setIndex(mIndexPaneList[newIndex]->getListIndex());
			}
		}
	}

	bool flag2 = false;
	bool flag3 = false;

	mIndexPaneList[mCurrMaxActiveRow]->mSizeType = TIndexPane::Size_Small;
	if (id == mIndexPaneList[mCurrMinActiveRow]->getListIndex()) {
		flag3 = true;
	}

	int count = 0;
	for (int i = 0; i < mNumActiveRows; i++) {
		if (mIndexPaneList[i]->getListIndex() == id) {
			count++;
		}
	}

	if (count == 2) {
		int prevIdx = id - 1;
		if (mIsPreDebt && id > 0) {
			prevIdx = mViewablePanelIDList[prevIdx];
		}

		if (id > 0 && mIsBigIconList[prevIdx]) {
			id--;
		} else if (_234 >= 0 && id == _234) {
			int newIdx;
			if (_234 < 3) {
				newIdx = _234;
			} else {
				newIdx = _234 % 3;
				if (newIdx == 0) {
					newIdx = 3;
				}
			}
			id = _234 - newIdx;
		} else {
			id -= mRowSize;
		}

		flag2 = true;
	} else {
		switch (mIndexPaneList[mCurrMinActiveRow]->mSizeType) {
		case TIndexPane::Size_Big2:
			if (flag3) {
				mIndexPaneList[mCurrMaxActiveRow]->mSizeType = TIndexPane::Size_Small2;
			} else {
				JUT_PANICLINE(3068, nullptr);
			}
			break;
		case TIndexPane::Size_Small2:
		case TIndexPane::Size_Big:
			if (flag3) {
				mIndexPaneList[mCurrMinActiveRow]->mSizeType = TIndexPane::Size_Big2;
				if (mIsPreDebt) {
					setShortenIndex(mCurrMinActiveRow, id, flag);
				} else {
					mIndexPaneList[mCurrMinActiveRow]->setIndex(id);
				}
				mIndexPaneList[mCurrMaxActiveRow]->mSizeType = TIndexPane::Size_Small2;
			} else {
				flag2 = true;
				id--;
			}
			break;
		case TIndexPane::Size_Small:
			int prevIdx = id - 1;
			if (mIsPreDebt && id > 0) {
				prevIdx = mViewablePanelIDList[prevIdx];
			}

			if (id > 0 && mIsBigIconList[prevIdx]) {
				id--;
			} else if (_234 >= 0 && id == _234) {
				int newIdx;
				if (_234 < 3) {
					newIdx = _234;
				} else {
					newIdx = _234 % 3;
					if (newIdx == 0) {
						newIdx = 3;
					}
				}
				id = _234 - newIdx;
			} else {
				id -= mRowSize;
			}

			int maxId = getIdMax() - 1;
			if (mIsPreDebt) {
				if (_234 >= 0) {
					maxId = mMaxPane - 1;
				} else {
					int newIdx;
					if (mMaxPane < 3) {
						newIdx = mMaxPane;
					} else {
						newIdx = mMaxPane % 3;
						if (newIdx == 0) {
							newIdx = 3;
						}
					}
					maxId = mMaxPane - newIdx;
				}
			}
			if (id < 0) {
				id = maxId;
			}
			flag2 = true;
			break;
		}
	}

	if (flag2) {
		if (id >= 0) {
			int test = id;
			if (mIsPreDebt && mViewablePanelIDList) {
				test = mViewablePanelIDList[test];
			}
			if (mIsBigIconList[test]) {
				mIndexPaneList[mCurrMaxActiveRow]->mSizeType = TIndexPane::Size_Big2;
			}
		}
	}
	if (id < 0) {
		if (mIsPreDebt) {
			id = mMaxPane - mRowSize;
		} else {
			id = getIdMax() - mRowSize;
		}
	}
	mIndexPaneList[mCurrMaxActiveRow]->setIndex(id);
}

/**
 * @note Address: 0x803776B8
 * @note Size: 0x24
 */
u64 TEnemyZukan::getNameID(int id) { return mOffsetMsgNames->getMsgID(id); }

/**
 * @note Address: 0x803776DC
 * @note Size: 0x24
 */
u64 TEnemyZukan::getXMsgID(int id) { return mOffsetMsg_XDesc->getMsgID(id); }

/**
 * @note Address: 0x80377700
 * @note Size: 0x24
 */
u64 TEnemyZukan::getYMsgID(int id) { return mOffsetMsg_YDesc->getMsgID(id); }

/**
 * @note Address: 0x80377724
 * @note Size: 0x50
 */
int TEnemyZukan::getModelIndex(int index) { return TEnemyZukanIndex::getIndexInfo(index).mEnemyID; }

/**
 * @note Address: 0x80377774
 * @note Size: 0x60
 */
void TEnemyZukan::setXWindow()
{
	PSSystem::spSysIF->playSystemSe(PSSE_SY_ZUKAN_SCRIPT_ORIMA, 0);
	mWindow->setWindowColor(mMessageWindowColor[0]);
	mWindow->onIcon(0);
	mWindow->setIconColor(mIconColor1[0], mIconColor2[0]);
}

/**
 * @note Address: 0x803777D4
 * @note Size: 0x60
 */
void TEnemyZukan::setYWindow()
{
	PSSystem::spSysIF->playSystemSe(PSSE_SY_ZUKAN_SCRIPT_LOUIE, 0);
	mWindow->setWindowColor(mMessageWindowColor[1]);
	mWindow->onIcon(1);
	mWindow->setIconColor(mIconColor1[1], mIconColor2[1]);
}

/**
 * @note Address: 0x80377834
 * @note Size: 0x34
 */
bool TEnemyZukan::isOpenConfirmWindow() { return static_cast<TDEnemyScene*>(getOwner())->mConfirmEndWindow->mHasDrawn; }

/**
 * @note Address: 0x80377868
 * @note Size: 0xFC
 */
bool TEnemyZukan::isNewSupply(int index, bool flag)
{
	if (mAllNewSupply)
		return true;

	if (Game::playData && index >= 0) {
		if (!flag && mIsPreDebt) {
			if (mMaxPane == 0) {
				return false;
			}
			index = mViewablePanelIDList[index];
		}

		TEnemyZukanIndex& data     = TEnemyZukanIndex::getIndexInfo(index);
		Game::TekiStat::Info* info = Game::playData->mTekiStatMgr.getTekiInfo(data.mEnemyID);
		if (info && info->mState.isSet(TEKISTAT_STATE_UPDATED) && !(info->mState.isSet(TEKISTAT_STATE_OUT_OF_DATE))) {
			return true;
		} else {
			return false;
		}
	}
	return false;
}

/**
 * @note Address: 0x80377964
 * @note Size: 0xE4
 */
bool TEnemyZukan::isPanelExist()
{
	int id = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	if (id < 0)
		return false;

	int max = getIdMax();
	if (mIsPreDebt) {
		int max2 = mMaxPane;
		if (max2 < 1) {
			return false;
		}

		max = mViewablePanelIDList[max2 - 1];
		if (_234 >= 0 && id < mViewablePanelIDList[_234]) {
			max = mViewablePanelIDList[_234 - 1];
		}
	}

	if (id == max) {
		return false;
	}
	return (u8)(id + mRightOffset <= max);
}

/**
 * @note Address: 0x80377A48
 * @note Size: 0x4C
 */
void TEnemyZukan::openConfirmWindow()
{
	mMessageBoxBGAlpha = 0;
	static_cast<TDEnemyScene*>(getOwner())->mConfirmEndWindow->start(nullptr);
}

/**
 * @note Address: 0x80377A94
 * @note Size: 0x134
 */
u32 TEnemyZukan::getPrice(int index)
{
	if (mShowAllObjects || mIsSection) {
		return randFloat() * 1000.0f + 1.0f;
	}

	if (Game::playData) {
		TEnemyZukanIndex& data     = TEnemyZukanIndex::getIndexInfo(index);
		int id                     = data.mEnemyID;
		Game::TekiStat::Info* info = Game::playData->mTekiStatMgr.getTekiInfo(id);
		if (!(info->mState.isSet(TEKISTAT_STATE_UPDATED))) {
			return 0;
		}

		Game::PelletConfigList* list = Game::PelletList::Mgr::getConfigList(Game::PelletList::PLK_Carcass);
		Game::PelletConfig* config   = list->getPelletConfig(Game::EnemyInfoFunc::getEnemyName(id, 0xffff));
		if (config) {
			return config->mParams.mMoney.mData;
		}
	}
	return 0;
}

/**
 * @note Address: 0x80377BC8
 * @note Size: 0xF8
 */
u32 TEnemyZukan::getDefeatNum(int index)
{
	if (mShowAllObjects || mIsSection) {
		return randFloat() * 100000.0f + 1;
	}

	if (Game::playData) {
		TEnemyZukanIndex& data     = TEnemyZukanIndex::getIndexInfo(index);
		Game::TekiStat::Info* info = Game::playData->mTekiStatMgr.getTekiInfo(data.mEnemyID);
		if (info) {
			if (info->mState.isSet(TEKISTAT_STATE_UPDATED)) {
				return info->mKilledTekiCount;
			}
			return 0;
		}
	}
	return 0;
}

/**
 * @note Address: 0x80377CC0
 * @note Size: 0x12C
 */
u32 TEnemyZukan::getKilledNum(int index)
{
	if (mShowAllObjects || mIsSection) {
		return randFloat() * 100000.0f + 1.0f;
	}

	if (Game::playData) {
		TEnemyZukanIndex& data     = TEnemyZukanIndex::getIndexInfo(index);
		Game::TekiStat::Info* info = Game::playData->mTekiStatMgr.getTekiInfo(data.mEnemyID);
		if (info) {
			if (info->mState.isSet(TEKISTAT_STATE_UPDATED)) {
				return info->mKilledPikminCount;
			}
			return 0;
		}
	}
	return randFloat() * 100000.0f + 1.0f;
}

/**
 * @note Address: 0x80377DEC
 * @note Size: 0x54
 */
TDEnemyScene::TDEnemyScene() { mConfirmEndWindow = nullptr; }

/**
 * @note Address: 0x80377E40
 * @note Size: 0xDC
 */
void TDEnemyScene::doCreateObj(JKRArchive* arc)
{
	TEnemyZukan* obj = new TEnemyZukan;
	registObj(obj, arc);
	mObject           = obj;
	mConfirmEndWindow = new TConfirmEndWindow("endWindow");
	registObj(mConfirmEndWindow, arc);
	mConfirmEndWindow->setRetireMsg('6018_00'); // "Go to Area Selection"
}

/**
 * @note Address: 0x80377F1C
 * @note Size: 0x34
 */
bool TDEnemyScene::doStart(Screen::StartSceneArg* arg)
{
	mObject->start(arg);
	return true;
}

/**
 * @note Address: 0x80377F50
 * @note Size: 0x28
 */
bool TDEnemyScene::isAppearConfirmWindow()
{
	if (mConfirmEndWindow && mConfirmEndWindow->mHasDrawn) {
		return true;
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
bool TItemZukan::isCategoryComplete()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x148
 */
TItemZukan::TItemZukan()
    : TZukanBase("itemZukan")
{
	mColorAnmItem           = nullptr;
	mValueCounter           = nullptr;
	mWeightCounter          = nullptr;
	mOrimaIconTexture       = nullptr;
	mCurrCharacterIconID    = 1;
	mOffsetMsgCategoryNames = nullptr;
	mEfxTimer               = 0;
	mDemoState              = ZUKANDEMO_Init;
	mDemoScrollTargetRow    = 0;
	mDemoStateButtonAlpha   = 0.0f;
	for (int i = 0; i < TREASUREHOARD_CATEGORY_NUM; i++) {
		mCategoryShowUnlock[i] = false;
		mCategoryIsComplete[i] = false;
	}
}

/**
 * @note Address: 80377F78
 * @note Size: 0x124
 */
TItemZukan::~TItemZukan() { mDispItem->mDebugExpHeap->freeAll(); }

/**
 * @note Address: 0x8037809C
 * @note Size: 0x424
 */
bool TItemZukan::doUpdate()
{
	if (mIsInDemo && mCanInput) {
		mColorAnmItem->update();
		switch (mDemoState) {
		case ZUKANDEMO_Init:
			int id = mSelection;
			if (mCategoryShowUnlock[id]) {
				mEfxTimer  = 0;
				int id2    = 0;
				mDemoState = ZUKANDEMO_Scrolling;
				if (mSelection > 0) {
					id2 = mCategoryArray[mSelection - 1];
				}
				mDemoScrollTargetRow = id2;
				mDemoScrollTargetRow = mCategoryArray[mSelection] - 1;
				if (mIsPreDebt) {
					for (int i = 0; i < mMaxPane; i++) {
						if (mDemoScrollTargetRow == mViewablePanelIDList[i]) {
							mRightOffset = i % 3;
							break;
						}
					}

				} else {
					mRightOffset = mDemoScrollTargetRow % 3;
				}
			} else {
				mSelection = id + 1;
				if (mSelection >= TREASUREHOARD_CATEGORY_NUM) {
					mIsInDemo = false;
				}
			}
			break;
		case ZUKANDEMO_Scrolling:
			demoSet();
			break;
		case 2:
			break;
		case ZUKANDEMO_Reading:
			if (mController->getButtonDown() & (Controller::PRESS_A | Controller::PRESS_B)) {
				mEfxTimer  = 0;
				mDemoState = ZUKANDEMO_AppearEffect;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				mWindow->windowClose();
			}

			// scroll through message box with analog stick
			f32 z = mController->mMStick.mYPos;
			if (mController->mMStick.mYPos >= 0.5f || mController->mMStick.mYPos <= -0.5f) {
				if (mController->mMStick.mYPos <= -0.5f) {
					z = -1.0f;
				}
				if (z >= 0.5f) {
					z = 1.0f;
				}
				mWindow->msgScroll(z);
				if (mWindow->getPosRate() == 0.0f || mWindow->getPosRate() == 1.0f) {
					z = 0.0f;
				}
				if (z != 0.0f) {
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMO_SCROLL, 0);
				}
				mWindow->moveIcon(z);
			}
			break;
		case ZUKANDEMO_AppearEffect:
			if (mWindow->mState == TZukanWindow::STATE_Inactive) {
				if (mEfxTimer == 0) {
					J2DPane* pane = mYButtonPane;
					Vector2f pos(pane->mGlobalMtx[0][3], pane->mGlobalMtx[1][3]);
					pos.y -= 2.0f * pane->getHeight();
					PSSystem::spSysIF->playSystemSe(PSSE_SY_WMAP_ZUKAN_NEW, 0);
					for (int i = 0; i < 5; i++) {
						efx2d::Arg arg(pos);
						arg.x += i * 30.0f;
						efx2d::T2DChangesmoke efx;

						efx.create(&arg);
					}
				}
				mEfxTimer++;
				if (mEfxTimer > 30) {
					mSelection++;
					if (mSelection >= TREASUREHOARD_CATEGORY_NUM) {
						mIsInDemo     = false;
						mYButtonAlpha = 1.0f;
					} else {
						mDemoState = ZUKANDEMO_Init;
					}
				}
			}
			break;
		}
	}
	TZukanBase::doUpdate();
}

/**
 * @note Address: 0x803784C0
 * @note Size: 0xA8
 */
void TItemZukan::demoSet()
{
	if (mDemoScrollTargetRow != mIndexPaneList[mCurrActiveRowSel]->getIndex()) {
		mIndexGroup->downIndex();
	} else {
		if (mWindow->mState == TZukanWindow::STATE_Inactive) {
			mPaneMessageDemo->setMsgID(mOffsetMsgCategoryNames->getMsgID(mSelection));
			mMessageBoxBGAlpha = 0;
			mWindow->windowOpen();
			setYWindow();
			mDemoState = ZUKANDEMO_Reading;
		}
	}
}

/**
 * @note Address: 0x80378568
 * @note Size: 0x45C
 */
void TItemZukan::setShortenIndex(int paneID, int index, bool flag)
{
	TZukanBase::setShortenIndex(paneID, index, flag);

	TIndexPane* pane = nullptr;
	int id           = 1;
	int id2          = paneID;
	if (mCanScroll) {
		if ((_3B4 % 2) == 1) {
			if (flag) {
				id = 3;
				id2--;
				if (id2 < 0) {
					id2 = mNumActiveRows - 1;
				}
				pane = mIndexPaneList[id2];
			} else {
				id2++;
				if (id2 >= mNumActiveRows) {
					id2 = 0;
				}
				pane = mIndexPaneList[id2];
			}
		}
	}

	bool active = false;
	if (pane) {
		int id2 = -1;
		for (int i = 0; i < id; i++) {
			// TIconInfo* icon = pane->mIconInfos[i];
			if (pane->mIconInfos[i]->mParentIndex) {
				id2 = pane->mIconInfos[i]->mCategoryID;
			}
		}
		if (id2 >= 0) {
			if (flag) {
				for (int i = 0; i < 3; i++) {
					TIconInfo* icon = mIndexPaneList[paneID]->mIconInfos[i];
					int catId       = icon->mCategoryID;
					if (id2 != catId && icon->mParentIndex) {
						active                  = true;
						mCategoryColorID[catId] = 1 - mCategoryColorID[id2];
						id2                     = catId;
					}
				}
			} else {
				for (int i = 2; i >= 0; i--) {
					TIconInfo* icon = mIndexPaneList[paneID]->mIconInfos[i];
					int catId       = icon->mCategoryID;
					if (id2 != catId && icon->mParentIndex) {
						active                  = true;
						mCategoryColorID[catId] = 1 - mCategoryColorID[id2];
						id2                     = catId;
					}
				}
			}
		}
	}

	if (active) {
		for (int i = 0; i < mNumActiveRows; i++) {
			if (!mIndexPaneList[i]) {
				return;
			}
			for (int j = 0; j < 3; j++) {
				TIconInfo* icon    = mIndexPaneList[i]->mIconInfos[j];
				J2DPictureEx* pane = icon->mPic;
				if (getCategoryColorId(icon->mCategoryID) == COLOR_Color0) {
					pane->setBlackWhite(mCategoryColor0b, mCategoryColor0w); // green highlight
				} else {
					pane->setBlackWhite(mCategoryColor1b, mCategoryColor1w); // blue highlight
				}
			}
		}
	} else {
		for (int j = 0; j < 3; j++) {
			TIconInfo* icon    = mIndexPaneList[paneID]->mIconInfos[j];
			J2DPictureEx* pane = icon->mPic;
			if (getCategoryColorId(icon->mCategoryID) == COLOR_Color0) {
				pane->setBlackWhite(mCategoryColor0b, mCategoryColor0w); // green highlight
			} else {
				pane->setBlackWhite(mCategoryColor1b, mCategoryColor1w); // blue highlight
			}
		}
	}
}

/**
 * @note Address: 0x803789D4
 * @note Size: 0x2D4
 */
void TItemZukan::doUpdateOut()
{
	TZukanBase::doUpdateOut();
	if (mCanComplete) {
		for (int i = 0; i < mNumActiveRows; i++) {
			// get anim alpha as proportion between 0 and 1
			JUtility::TColor color = mColorAnm->mColor;
			f32 baseAlpha          = (f32)color.a / 255.0f;
			if (baseAlpha < 0.0f) {
				baseAlpha = 0.0f;
			}
			if (baseAlpha > 1.0f) {
				baseAlpha = 1.0f;
			}

			// get complementary alphas for each kind of category (green vs blue)
			// but set a min alpha to show (always show some color)
			f32 compAlpha = 1.0f - baseAlpha;
			if (baseAlpha < 0.1f) {
				baseAlpha = 0.1f;
			}
			if (compAlpha < 0.1f) {
				compAlpha = 0.1f;
			}

			// put alphas back to 0-255
			f32 greenAlpha = 255.0f * baseAlpha;
			f32 blueAlpha  = 255.0f * compAlpha;
			// set alphas for all (3) items in row
			for (int j = 0; j < 3; j++) {
				TIconInfo* elemInfo = mIndexPaneList[i]->mIconInfos[j];
				J2DPane* elemPane   = elemInfo->mPic;
				if (mCategoryIsComplete[elemInfo->mCategoryID]) {
					elemPane->setAlpha(255.0f * mCategoryAlphaRate);
				} else {
					if (getCategoryColorId(elemInfo->mCategoryID) == COLOR_Color0) {
						elemPane->setAlpha(greenAlpha * mCategoryAlphaRate); // green highlight
					} else {
						elemPane->setAlpha(blueAlpha * mCategoryAlphaRate); // blue highlight
					}
				}
			}
		}
	}

	if (mIsInDemo) {
		if (mDemoState == ZUKANDEMO_Scrolling) {
			mDemoStateButtonAlpha -= 0.1f;
			if (mDemoStateButtonAlpha < 0.0f) {
				mDemoStateButtonAlpha = 0.0f;
			}
		} else if ((f32)mEfxTimer == 0.0f) {
			mDemoStateButtonAlpha = 0.0f;
		} else {
			mDemoStateButtonAlpha = 1.0f;
		}
		mYButtonAlpha = mDemoStateButtonAlpha;
		mYButtonPane->setAlpha(mDemoStateButtonAlpha * 255.0f);
	}
}

/**
 * @note Address: 0x80378CA8
 * @note Size: 0xC0
 */
void TItemZukan::getUpdateIndex(int& id, bool flag)
{
	if (mIsPreDebt) {
		if (flag) {
			id += mRowSize;
			if (id >= mMaxPane) {
				id = 0;
			}
		} else {
			id -= mRowSize;
			if (id < 0) {
				int newIdx;
				if (mMaxPane < 3) {
					newIdx = mMaxPane;
				} else {
					newIdx = mMaxPane % 3;
					if (newIdx == 0) {
						newIdx = 3;
					}
				}
				id = mMaxPane - newIdx;
			}
		}
	} else {
		TScrollList::getUpdateIndex(id, flag);
	}
}

/**
 * @note Address: 0x80378D68
 * @note Size: 0x3C
 */
u64 TItemZukan::getNameID(int id) { return mOffsetMsgNames->getMsgID(Game::PelletList::Mgr::getOffsetFromDictionaryNo(id)); }

/**
 * @note Address: 0x80378DA4
 * @note Size: 0x3C
 */
u64 TItemZukan::getXMsgID(int id) { return mOffsetMsg_XDesc->getMsgID(Game::PelletList::Mgr::getOffsetFromDictionaryNo(id)); }

/**
 * @note Address: 0x80378DE0
 * @note Size: 0x3C
 */
u64 TItemZukan::getYMsgID(int id) { return mOffsetMsg_YDesc->getMsgID(Game::PelletList::Mgr::getOffsetFromDictionaryNo(id)); }

/**
 * @note Address: 0x80378E1C
 * @note Size: 0x34
 */
int TItemZukan::getModelIndex(int id)
{
	if (id < 0) {
		return -1;
	}
	return Game::PelletList::Mgr::getOffsetFromDictionaryNo(id);
}

/**
 * @note Address: 0x80378E50
 * @note Size: 0x20
 */
int TItemZukan::getIdMax() { return Game::PelletList::Mgr::getDictionaryNum(); }

/**
 * @note Address: 0x80378E70
 * @note Size: 0x1690
 */
void TItemZukan::doCreate(JKRArchive* arc)
{
	mScrollParm.mMaxRollSpeed        = 10.0f;
	mScrollParm.mRollSpeedMod        = 1.1f;
	mScrollParm.mSpeedSlowdownFactor = 0.99f;
	mScrollParm.mSpeedSpeedupFactor  = 1.25f;
	mScrollParm.mInitialRollSpeed    = 2.0f;

	mCategoryColor0w.setRGB(0, 95, 0);
	mCategoryColor0b.setRGB(230, 230, 0);

	mCategoryColor1w.setRGB(0, 0, 255);
	mCategoryColor1b.setRGB(0, 128, 255);

	mColorAnmItem = new kh::Screen::khUtilColorAnm(nullptr, 'dummy', 3, 50);
	mColorAnmItem->mColorList[0].set(mCategoryColor0w);
	mColorAnmItem->mColorList[1].set(mCategoryColor0b);
	mColorAnmItem->mColorList[2].set(mCategoryColor0w);
	mColorAnmItem->mUpdateMode = 1;

	mArchive = arc;

	DispMemberZukanItem* disp = static_cast<DispMemberZukanItem*>(getDispMember());
	if (disp->isID(OWNER_MRMR, MEMBER_ZUKAN_ITEM)) {
		mDispItem = disp;
	} else {
		mIsSection = true;
	}

	if (mIsSection) {
		if (mDebugHeapParent) {
			mDebugHeap = JKRExpHeap::create(0x100000, mDebugHeapParent, true);
			P2ASSERTLINE(4150, mDebugHeap);
			mDispItem                = new (mDebugHeap, 0) DispMemberZukanItem;
			mDispItem->mDebugExpHeap = mDebugHeap;
			mIsSection               = true;
			mDebugUnlockedList       = new bool[getIdMax()];
			for (int i = 0; i < getIdMax(); i++) {
				mDebugUnlockedList[i] = false;
				if (randFloat() < mRandShowRate) {
					mDebugUnlockedList[i] = true;
				}
			}
			mDispItem->mPrevSelection = new (mDebugHeap, 0) u32;
			rand();
			getIdMax();
			*mDispItem->mPrevSelection       = 0;
			mDispItem->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
			getOwner()->setDispMember(mDispItem);
		} else {
			JUT_PANICLINE(4174, "set DebugHeapParent. mail to morimun.\n");
		}
	} else {
		mDispItem->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
	}

	if (mIsSection && !mZukanShortenTest) {
		mIsPreDebt = false;
	}

	if (Game::playData && Game::playData->mStoryFlags & Game::STORY_DebtPaid) {
		mIsPreDebt = false;
	}
	mCanComplete = true;

	if (mIsPreDebt) {
		if (mIsSection) {
			int test = randInt(150);
			for (int i = 0; i < test; i++) {
				if (i % 2 == 0) {
					mMaxPane++;
				}
			}
			int max2 = mMaxPane;
			if (max2 == 0) {
				mCanScroll = false;
			} else {
				mViewablePanelIDList = new int[max2];
			}
			int k = 0;
			for (int i = 0; i < test; i++) {
				if (i % 2 == 0) {
					mViewablePanelIDList[k] = i;
					k++;
				}
			}
		} else {
			for (int i = 0; i < getIdMax(); i++) {
				if (isListShow(i)) {
					mMaxPane++;
				}
			}
			int max2 = mMaxPane;
			if (max2 == 0) {
				mCanScroll = false;
			} else {
				mViewablePanelIDList = new int[max2];
			}
			int k = 0;
			for (int i = 0; i < getIdMax(); i++) {
				if (isListShow(i)) {
					mViewablePanelIDList[k] = i;
					k++;
				}
			}
		}
	}

	if (mIsPreDebt && mMaxPane <= (mNumActiveRows - 1) * 3) {
		mCanScroll = false;
	}

	u64 ntags[3]    = { '0101_00', '0110_00', '0200_00' };
	mOffsetMsgNames = new TOffsetMsgSet(ntags, '0100_00', 3);

	u64 xtags[3]     = { '0401_00', '0410_00', '0500_00' };
	mOffsetMsg_XDesc = new TOffsetMsgSet(xtags, '0400_00', 3);

	u64 ytags[3]     = { '0701_00', '0710_00', '0800_00' };
	mOffsetMsg_YDesc = new TOffsetMsgSet(ytags, '0700_00', 3);

	u64 ctags[2]            = { '1431_00', '1440_00' };
	mOffsetMsgCategoryNames = new TOffsetMsgSet(ctags, '1430_00', 2);

	for (int i = 0; i < TREASUREHOARD_CATEGORY_NUM; i++) {
		mCategoryIsComplete[i] = true;
		mCategoryShowUnlock[i] = 0;
		mCategoryColorID[i]    = -1;
	}
	_3B4 = 0;

	int cColorID = 0;
	for (int i = 0; i < TREASUREHOARD_CATEGORY_NUM; i++) {
		int startID = 0;
		if (i > 0) {
			startID = mCategoryArray[i - 1];
		}
		bool setComplete = false;
		// check if the current set is complete
		for (int j = startID; j < mCategoryArray[i]; j++) {
			if (!isListShow(j)) {
				setComplete            = false;
				mCategoryIsComplete[i] = false;
				break;
			}
			if (isNewSupply(j, true)) {
				setComplete = true;
			}
		}

		// if the set is complete, and you havent checked the hoard yet, add it to categories to be unlocked in the cutscene
		if (setComplete) {
			if (mIsSection || ((int)(*mDispItem->mPrevSelection) < 0 && mDispItem->getMemberID() == MEMBER_ZUKAN_ITEM)) {
				mCategoryShowUnlock[i] = true;
				mIsInDemo              = true;
			}
		}

		if (mCanComplete) {

			for (int j = startID; j < mCategoryArray[i]; j++) {
				if (!mIsSection || !mIsPreDebt || !mMaxPane || j <= mViewablePanelIDList[mMaxPane - 1]) {
					if (isListShow(j)) {
						_3B4++;
						mCategoryColorID[i] = cColorID;
						cColorID            = 1 - cColorID;
					} else {
						continue;
					}
				}
				break;
			}
		}
	}

	// This first color isnt used, except to replace the second color right after it was already set, of course
	mMessageWindowColor[0].r = 120;
	mMessageWindowColor[0].g = 120;
	mMessageWindowColor[0].b = 120;
	mMessageWindowColor[0].a = 255;

	mMessageWindowColor[1].r = 240;
	mMessageWindowColor[1].g = 240;
	mMessageWindowColor[1].b = 240;
	mMessageWindowColor[1].a = 255;

	mMessageWindowColor[1].r = mMessageWindowColor[0].r;
	mMessageWindowColor[1].g = mMessageWindowColor[0].g;
	mMessageWindowColor[1].b = mMessageWindowColor[0].b;
	mMessageWindowColor[1].a = mMessageWindowColor[0].a;

	mIconColor1[0].r = 255;
	mIconColor1[0].g = 255;
	mIconColor1[0].b = 0;
	mIconColor1[0].a = 0;

	mIconColor2[0].r = 255;
	mIconColor2[0].g = 200;
	mIconColor2[0].b = 200;
	mIconColor2[0].a = 255;

	mIconColor1[1].r = 255;
	mIconColor1[1].g = 40;
	mIconColor1[1].b = 40;
	mIconColor1[1].a = 0;

	mIconColor2[1].r = 255;
	mIconColor2[1].g = 200;
	mIconColor2[1].b = 200;
	mIconColor2[1].a = 255;

	mOrimaMesgWindowColor.r = 165;
	mOrimaMesgWindowColor.g = 0;
	mOrimaMesgWindowColor.b = 0;
	mOrimaMesgWindowColor.a = 255;

	mOrimaMesgIconColor1.r = 255;
	mOrimaMesgIconColor1.g = 40;
	mOrimaMesgIconColor1.b = 40;
	mOrimaMesgIconColor1.a = 0;

	mOrimaMesgIconColor2.r = 255;
	mOrimaMesgIconColor2.g = 200;
	mOrimaMesgIconColor2.b = 200;
	mOrimaMesgIconColor2.a = 255;

	mOrimaIconTexture = static_cast<ResTIMG*>(mArchive->getResource("timg/olimar_icon.bti"));
	P2ASSERTLINE(4363, mOrimaIconTexture);

	mListScreen = new TListScreen(arc, 0);
	mListScreen->create("new_otakarazukan_list.blo", 0x20000);

	JKRHeap* backup = JKRGetCurrentHeap();

	mDispItem->mDebugExpHeap->becomeCurrentHeap();

	mMainScreen = new TScreenBase(arc, 2);
	mMainScreen->create("new_otakarazukan_main.blo", 0x20000);
	mMainScreen->addAnim("new_otakarazukan_main.bck");
	mMainScreen->addAnim("new_otakarazukan_main.bpk");

	mPaneMenu = mMainScreen->mScreenObj->search('Tlmenu1');
	P2ASSERTLINE(4396, mPaneMenu);

	mMessageItemName = new og::Screen::CallBack_Message;
	mMainScreen->mScreenObj->addCallBack('Tlmenu1', mMessageItemName);

	mControlStickPic = og::Screen::setCallBack_3DStickSmall(mArchive, mMainScreen->mScreenObj, 'ota3dl');
	mPane3DStick     = mMainScreen->mScreenObj->search('ota3dl');
	P2ASSERTLINE(4407, mPane3DStick);
	P2ASSERTLINE(4408, mControlStickPic);
	mControlStickPic->mAnimGroup->setSpeed(0.0f);
	mControlStickPic->mAnimGroup->start();
	mStickAnim = new og::Screen::StickAnimMgr(mControlStickPic);
	P2ASSERTLINE(4414, mStickAnim);

	mBGScreen = new TScreenBase(arc, 0);
	mBGScreen->create("new_otakarazukan_bg.blo", 0x20000);
	mEffectScreen = new TScreenBase(arc, 1);
	mEffectScreen->create("new_otakarazukan_effect.blo", 0x20000);
	mEffectScreen->addAnim("new_otakarazukan_effect.btk");
	mEffectScreen->mScreenObj->search('Pmodel_l')->hide();

	mWindow = new TZukanWindow(arc, 2);
	mWindow->create("zukan_mess_window.blo", 0x20000);
	mWindow->addAnim("zukan_mess_window.bck");
	mWindow->addAnim("zukan_mess_window.bpk");
	mStickPicMesg        = og::Screen::setCallBack_3DStickSmall(mArchive, mWindow->mScreenObj, 'ota3ds');
	mPaneMesgWindowStick = mWindow->mScreenObj->search('ota3ds');
	P2ASSERTLINE(4436, mPaneMesgWindowStick);
	P2ASSERTLINE(4437, mStickPicMesg);
	mStickPicMesg->mAnimGroup->setSpeed(1.0f);
	mStickPicMesg->mAnimGroup->start();

	mPaneMesgWindowStickCap = mWindow->mScreenObj->search('Pbtn_cup');
	P2ASSERTLINE(4442, mPaneMesgWindowStickCap);

	mYajiScreen = new TScreenBase(arc, 0);
	mYajiScreen->create("new_otakarazukan_yajirusi.blo", 0x20000);

	if (mShowAllObjects || (Game::playData && Game::playData->mStoryFlags & Game::STORY_DebtPaid)) {
		mCurrCharacterIconID = 0;
		mWindow->setWindowColor(mMessageWindowColor[1]);
		mWindow->onIcon(1);
		mWindow->setIconColor(mIconColor1[1], mIconColor2[1]);
	}
	mWindow->changeIconTexture(mCurrCharacterIconID, mOrimaIconTexture);

	mSujiScreen = new TScreenBase(arc, 0);
	mSujiScreen->create("new_otakarazukan_main_suji.blo", 0x20000);

	mValueCounter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), 4, 4, mArchive);
	mValueCounter->init(mSujiScreen->mScreenObj, 'Pgisei15', 'Pgisei14', 'Pgisei12', &mInfoVal1, true);
	mValueCounter->setPuyoAnim(true);
	mSujiScreen->mScreenObj->addCallBack('Pgisei15', mValueCounter);

	mWeightCounter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), 4, 2, mArchive);
	mWeightCounter->init(mSujiScreen->mScreenObj, 'Ptaosi00', 'Ptaosi01', 'Ptaosi01', &mInfoVal2, mArchive != 0);
	mWeightCounter->setPuyoAnim(true);
	mSujiScreen->mScreenObj->addCallBack('Ptaosi00', mWeightCounter);

	mSelIndexCounter = setScaleUpCounter(mSujiScreen->mScreenObj, 'Ptekino1', &mDisplayIndex, 3, mArchive);
	if (mIsPreDebt) {
		if (!mIsSection) {
			mSelIndexCounter->getMotherPane()->hide();
		}
		if (mZukanCategoryTest) {
			mSelIndexCounter->getMotherPane()->show();
		}
	}

	mSujiScreen->mScreenObj->search('Ptaosi00')->hide();
	mSujiScreen->mScreenObj->search('Ptaosi01')->hide();
	mSujiScreen->mScreenObj->search('Pgisei12')->hide();
	mSujiScreen->mScreenObj->search('Pgisei13')->hide();
	mSujiScreen->mScreenObj->search('Pgisei14')->hide();
	mSujiScreen->mScreenObj->search('Pgisei15')->hide();

	TZukanBase::doCreate(arc);

	f32 yoffs       = mIndexPaneList[1]->mPane->getOffsetY() - mIndexPaneList[0]->mPane->getOffsetY();
	mMaxSelectZukan = mMaxPane;

	if (!mIsPreDebt) {
		mMaxSelectZukan = getIdMax();
	}

	f32 xoffs = 0.0f;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < mNumActiveRows; j++) {
			updateIDPaneYOffset(j, yoffs);
		}
		updateIndex(false);
		TIndexGroup* grp   = mIndexGroup;
		grp->mScrollOffset = xoffs;
		grp->mStateID      = 0;
		changePaneInfo();
	}

	int index = -1;
	if (mDispItem->mPrevSelection && mDispItem->getMemberID() == MEMBER_ZUKAN_ITEM) {
		index = *mDispItem->mPrevSelection;
	}

	if (index < 0) {
		for (int i = 0; i < getIdMax(); i++) {
			if (isNewSupply(i, false)) {
				index = i;
				if (mIsPreDebt) {
					P2ASSERTLINE(4533, mViewablePanelIDList);
					index = mViewablePanelIDList[i];
				}
				break;
			}
		}
	}

	if (index >= 0) {
		int max2 = mMaxSelectZukan;
		if (mIsPreDebt) {
			for (int i = 0; i < mMaxPane; i++) {
				// index = i;
				if (index == mViewablePanelIDList[i]) {
					index = i;
					break;
				}

				max2--;
				// backupindex = index;
			}
		}
		mRightOffset = index % 3;

		if (index > 2) {
			for (int i = 0; i < index / 3; i++) {
				for (int j = 0; j < mNumActiveRows; j++) {
					updateIDPaneYOffset(j, -yoffs);
				}
				updateIndex(true);
				TIndexGroup* grp   = mIndexGroup;
				grp->mScrollOffset = xoffs;
				grp->mStateID      = 0;
				changePaneInfo();
			}
		} else {
			changePaneInfo();
		}
	}

	mCurrIndex = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	if (mCurrIndex >= 0) {
		J2DPane* pane = mPaneMessageDemo;
		u64 tag       = getXMsgID(mCurrIndex);
		pane->setMsgID(tag);
	}

	backup->becomeCurrentHeap();
}

/**
 * @note Address: 0x8037A500
 * @note Size: 0x7B4
 */
void TItemZukan::doDemoDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = gfx.getPerspGraph();

	u8 alpha = mDemoStateButtonAlpha * 255.0f;
	gfx.mOrthoGraph.setPort();

	J2DPane* pane1 = mMainScreen->mScreenObj->search('Pzbtn3');
	pane1->setAlpha(alpha);
	static_cast<J2DPicture*>(pane1)->draw(pane1->getGlbVtx(GLBVTX_BtmLeft).x, pane1->getGlbVtx(GLBVTX_BtmRight).y, pane1->getWidth(),
	                                      pane1->getHeight(), false, false, false);
	pane1->calcMtx();
	pane1->setAlpha(255);

	J2DPane* pane2;
	pane2 = mMainScreen->mScreenObj->search('Pzbtn2');
	pane2->setAlpha(alpha);
	static_cast<J2DPicture*>(pane2)->draw(pane2->getGlbVtx(GLBVTX_BtmLeft).x, pane2->getGlbVtx(GLBVTX_BtmRight).y, pane2->getWidth(),
	                                      pane2->getHeight(), false, false, false);
	pane2->calcMtx();
	pane2->setAlpha(255);

	gfx.getPerspGraph()->setPort();

	mPaneMenu->setAlpha(alpha);
	mMessageItemName->draw(gfx, *graf);
	mPaneMenu->setAlpha(255);
	gfx.mOrthoGraph.setPort();

	GXSetScissor(mPanelListBounds.i.x, mPanelListBounds.i.y, mPanelListBounds.getWidth(), mPanelListBounds.getHeight());

	for (int i = 0; i < mNumActiveRows; i++) {
		for (int j = 0; j < 3; j++) {
			TIconInfo* icon = mIndexPaneList[i]->mIconInfos[j];
			if (mSelection == icon->mCategoryID && icon->mPane->isVisible()) {
				u8 alpha = mMessageBoxBGAlpha * mCategoryAlphaRate;
				J2DPictureEx* pane2;
				J2DPictureEx* pane3;
				J2DPictureEx* pane1 = icon->mPic;
				u8 oldalpha         = pane1->mAlpha;
				pane1->setAlpha(alpha);
				pane1->draw(pane1->getGlbVtx(GLBVTX_BtmLeft).x + 8.0f, pane1->getGlbVtx(GLBVTX_BtmLeft).y + 2.5f, pane1->getWidth(),
				            pane1->getHeight(), false, false, false);
				pane1->calcMtx();
				pane1->setAlpha(oldalpha);

				pane2    = static_cast<J2DPictureEx*>(mIndexPaneList[i]->mIconInfos[j]->mPane);
				oldalpha = pane2->mAlpha;
				pane2->setAlpha(mMessageBoxBGAlpha);
				pane2->draw(pane2->getGlbVtx(GLBVTX_BtmLeft).x, pane2->getGlbVtx(GLBVTX_BtmLeft).y, pane2->getWidth(), pane2->getHeight(),
				            false, false, false);
				pane2->calcMtx();
				pane2->setAlpha(oldalpha);

				pane3    = static_cast<J2DPictureEx*>(mIndexPaneList[i]->mIconInfos[j]->mPane2);
				oldalpha = pane3->mAlpha;
				pane3->setAlpha(mMessageBoxBGAlpha);
				pane3->draw(pane3->getGlbVtx(GLBVTX_BtmLeft).x, pane3->getGlbVtx(GLBVTX_BtmLeft).y, pane3->getWidth(), pane3->getHeight(),
				            false, false, false);
				pane3->calcMtx();
				pane3->setAlpha(oldalpha);
			}
		}
	}

	gfx.mPerspGraph.setPort();

	if (mDemoState == ZUKANDEMO_Reading) {
		GXSetScissor(mPanelListBounds.i.x, mPanelListBounds.i.y, mPanelListBounds.f.x - mPanelListBounds.i.x,
		             mPanelListBounds.f.y - mPanelListBounds.i.y);

		mPaneNew1->setMsgID('9001_00'); // "Clear"
		JUtility::TColor color = mColorAnmItem->mColor;
		mPaneNew1->setAlpha(color.a);
		color.a = 0;
		mPaneNew1->setBlack(color);
		mIconScreen->draw(gfx, *graf);

		for (int i = 0; i < mNumActiveRows; i++) {
			if (mIndexPaneList[i]->mPane->isVisible()) {
				for (int j = 0; j < 3; j++) {
					TIconInfo* icon = mIndexPaneList[i]->mIconInfos[j];
					if (mSelection == icon->mCategoryID) {
						if (mSelection == icon->mCategoryID && icon->mParentIndex) {
							mPaneNew1->mGlobalMtx[0][3] = mNewOffset.x + mIndexPaneList[i]->mIconInfos[j]->mPane->mGlobalMtx[0][3];
							mPaneNew1->mGlobalMtx[1][3] = mNewOffset.y + mIndexPaneList[i]->mIconInfos[j]->mPane->mGlobalMtx[1][3];
							mMessageNew->draw(gfx, *graf);
						}
					}
				}
			}
		}

		mPaneNew1->setMsgID('9000_00'); // "New"
		GXSetScissor(0, 0, 640, 480);
	}

	mWindow->draw(gfx, graf);
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stmw     r23, 0x9c(r1)
	mr       r24, r3
	mr       r25, r4
	lfs      f1, lbl_8051EB70@sda21(r2)
	addi     r3, r25, 0xbc
	lfs      f0, 0x3b8(r24)
	addi     r31, r25, 0x190
	lwz      r12, 0xbc(r4)
	fmuls    f0, f1, f0
	lwz      r12, 0x14(r12)
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r26, 0x8c(r1)
	mtctr    r12
	bctrl
	lwz      r4, 0x7c(r24)
	lis      r3, 0x62746E33@ha
	addi     r6, r3, 0x62746E33@l
	li       r5, 0x507a
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r23, r3
	mr       r4, r26
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r4, r23
	addi     r3, r1, 0x70
	li       r5, 1
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r4, r23
	addi     r3, r1, 0x7c
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r3, r23
	lfs      f3, 0x28(r23)
	lwz      r12, 0(r23)
	li       r4, 0
	lfs      f2, 0x20(r23)
	li       r5, 0
	lfs      f1, 0x2c(r23)
	li       r6, 0
	lfs      f0, 0x24(r23)
	fsubs    f3, f3, f2
	lwz      r12, 0xec(r12)
	fsubs    f4, f1, f0
	lfs      f1, 0x7c(r1)
	lfs      f2, 0x74(r1)
	mtctr    r12
	bctrl
	mr       r3, r23
	lwz      r12, 0(r23)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	li       r4, 0xff
	lwz      r12, 0(r23)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x7c(r24)
	lis      r3, 0x62746E32@ha
	addi     r6, r3, 0x62746E32@l
	li       r5, 0x507a
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r23, r3
	mr       r4, r26
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r4, r23
	addi     r3, r1, 0x58
	li       r5, 1
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r4, r23
	addi     r3, r1, 0x64
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r3, r23
	lfs      f3, 0x28(r23)
	lwz      r12, 0(r23)
	li       r4, 0
	lfs      f2, 0x20(r23)
	li       r5, 0
	lfs      f1, 0x2c(r23)
	li       r6, 0
	lfs      f0, 0x24(r23)
	fsubs    f3, f3, f2
	lwz      r12, 0xec(r12)
	fsubs    f4, f1, f0
	lfs      f1, 0x64(r1)
	lfs      f2, 0x5c(r1)
	mtctr    r12
	bctrl
	mr       r3, r23
	lwz      r12, 0(r23)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	li       r4, 0xff
	lwz      r12, 0(r23)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xf4(r24)
	mr       r4, r26
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd0(r24)
	mr       r4, r25
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xf4(r24)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r3, r25, 0xbc
	lwz      r12, 0xbc(r25)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x1a4(r24)
	lfs      f0, 0x1ac(r24)
	lfs      f30, 0x1a0(r24)
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	lfs      f0, 0x1a8(r24)
	mr       r28, r3
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r27, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r26, r3
	bl       __cvt_fp2unsigned
	mr       r4, r26
	mr       r5, r27
	mr       r6, r28
	bl       GXSetScissor
	li       r28, 0
	li       r29, 0
	b        lbl_8037AA68

lbl_8037A7B4:
	li       r27, 0
	li       r30, 0

lbl_8037A7BC:
	lwz      r0, 0x88(r24)
	lwz      r3, 0x23c(r24)
	lwzx     r4, r29, r0
	lwz      r4, 0x20(r4)
	lwzx     r4, r4, r30
	lwz      r0, 0(r4)
	cmpw     r3, r0
	bne      lbl_8037AA50
	lwz      r3, 0x10(r4)
	lbz      r0, 0xb0(r3)
	cmplwi   r0, 0
	beq      lbl_8037AA50
	lbz      r3, 0x214(r24)
	lis      r0, 0x4330
	lwz      r23, 4(r4)
	stw      r3, 0x8c(r1)
	mr       r3, r23
	lfd      f2, lbl_8051EB90@sda21(r2)
	stw      r0, 0x88(r1)
	lwz      r12, 0(r23)
	lfd      f1, 0x88(r1)
	lfs      f0, mCategoryAlphaRate__Q28Morimura10TZukanBase@sda21(r13)
	fsubs    f1, f1, f2
	lwz      r12, 0x24(r12)
	lbz      r26, 0xb2(r23)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r4, 0x94(r1)
	mtctr    r12
	bctrl
	mr       r4, r23
	addi     r3, r1, 0x40
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x44(r1)
	mr       r4, r23
	lfs      f0, lbl_8051EB48@sda21(r2)
	addi     r3, r1, 0x4c
	li       r5, 0
	fadds    f31, f0, f1
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x4c(r1)
	fmr      f2, f31
	lfs      f0, lbl_8051EBDC@sda21(r2)
	mr       r3, r23
	lwz      r12, 0(r23)
	li       r4, 0
	fadds    f1, f0, f1
	lfs      f5, 0x28(r23)
	li       r5, 0
	lfs      f3, 0x20(r23)
	li       r6, 0
	lfs      f4, 0x2c(r23)
	lfs      f0, 0x24(r23)
	fsubs    f3, f5, f3
	lwz      r12, 0xec(r12)
	fsubs    f4, f4, f0
	mtctr    r12
	bctrl
	mr       r3, r23
	lwz      r12, 0(r23)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	mr       r4, r26
	lwz      r12, 0(r23)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x88(r24)
	lbz      r4, 0x214(r24)
	lwzx     r3, r29, r0
	lwz      r3, 0x20(r3)
	lwzx     r3, r3, r30
	lwz      r23, 0x10(r3)
	mr       r3, r23
	lbz      r26, 0xb2(r23)
	lwz      r12, 0(r23)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r4, r23
	addi     r3, r1, 0x28
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r4, r23
	addi     r3, r1, 0x34
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r3, r23
	lfs      f3, 0x28(r23)
	lwz      r12, 0(r23)
	li       r4, 0
	lfs      f2, 0x20(r23)
	li       r5, 0
	lfs      f1, 0x2c(r23)
	li       r6, 0
	lfs      f0, 0x24(r23)
	fsubs    f3, f3, f2
	lwz      r12, 0xec(r12)
	fsubs    f4, f1, f0
	lfs      f1, 0x34(r1)
	lfs      f2, 0x2c(r1)
	mtctr    r12
	bctrl
	mr       r3, r23
	lwz      r12, 0(r23)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	mr       r4, r26
	lwz      r12, 0(r23)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x88(r24)
	lbz      r4, 0x214(r24)
	lwzx     r3, r29, r0
	lwz      r3, 0x20(r3)
	lwzx     r3, r3, r30
	lwz      r23, 0xc(r3)
	mr       r3, r23
	lbz      r26, 0xb2(r23)
	lwz      r12, 0(r23)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r4, r23
	addi     r3, r1, 0x10
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r4, r23
	addi     r3, r1, 0x1c
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r3, r23
	lfs      f3, 0x28(r23)
	lwz      r12, 0(r23)
	li       r4, 0
	lfs      f2, 0x20(r23)
	li       r5, 0
	lfs      f1, 0x2c(r23)
	li       r6, 0
	lfs      f0, 0x24(r23)
	fsubs    f3, f3, f2
	lwz      r12, 0xec(r12)
	fsubs    f4, f1, f0
	lfs      f1, 0x1c(r1)
	lfs      f2, 0x14(r1)
	mtctr    r12
	bctrl
	mr       r3, r23
	lwz      r12, 0(r23)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	mr       r4, r26
	lwz      r12, 0(r23)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_8037AA50:
	addi     r27, r27, 1
	addi     r30, r30, 4
	cmpwi    r27, 3
	blt      lbl_8037A7BC
	addi     r29, r29, 4
	addi     r28, r28, 1

lbl_8037AA68:
	lha      r0, 0x8e(r24)
	cmpw     r28, r0
	blt      lbl_8037A7B4
	addi     r3, r25, 0x190
	lwz      r12, 0x190(r25)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x3ac(r24)
	cmpwi    r0, 3
	bne      lbl_8037AC74
	lfs      f30, 0x1a4(r24)
	lfs      f0, 0x1ac(r24)
	lfs      f31, 0x1a0(r24)
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	lfs      f0, 0x1a8(r24)
	mr       r28, r3
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r27, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r26, r3
	bl       __cvt_fp2unsigned
	mr       r4, r26
	mr       r5, r27
	mr       r6, r28
	bl       GXSetScissor
	lis      r4, 0x315F3030@ha
	lwz      r3, 0xf0(r24)
	addi     r0, r4, 0x315F3030@l
	lis      r4, 0x00393030@ha
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00393030@l
	stw      r0, 0x18(r3)
	lwz      r4, 0x24c(r24)
	lwz      r3, 0xf0(r24)
	lwz      r0, 0x20(r4)
	lwz      r12, 0(r3)
	stw      r0, 0xc(r1)
	lwz      r12, 0x24(r12)
	lbz      r4, 0xf(r1)
	mtctr    r12
	bctrl
	li       r0, 0
	addi     r4, r1, 8
	stb      r0, 0xf(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lwz      r3, 0xf0(r24)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc8(r24)
	mr       r4, r25
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	li       r27, 0
	li       r30, 0
	addi     r28, r13, mNewOffset__Q28Morimura10TZukanBase@sda21
	b        lbl_8037AC38

lbl_8037AB74:
	lwz      r3, 0x88(r24)
	lwzx     r3, r3, r30
	lwz      r3, 4(r3)
	lbz      r0, 0xb0(r3)
	cmplwi   r0, 0
	beq      lbl_8037AC30
	li       r26, 0
	li       r29, 0

lbl_8037AB94:
	lwz      r0, 0x88(r24)
	lwz      r4, 0x23c(r24)
	lwzx     r3, r30, r0
	lwz      r3, 0x20(r3)
	lwzx     r3, r3, r29
	lwz      r0, 0(r3)
	cmpw     r4, r0
	bne      lbl_8037AC20
	bne      lbl_8037AC20
	lwz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_8037AC20
	lwz      r3, 0x10(r3)
	mr       r4, r25
	lfs      f1, mNewOffset__Q28Morimura10TZukanBase@sda21(r13)
	mr       r5, r31
	lfs      f0, 0x8c(r3)
	lwz      r3, 0xf0(r24)
	fadds    f0, f1, f0
	stfs     f0, 0x8c(r3)
	lwz      r0, 0x88(r24)
	lfs      f1, 4(r28)
	lwzx     r6, r30, r0
	lwz      r3, 0xf0(r24)
	lwz      r6, 0x20(r6)
	lwzx     r6, r6, r29
	lwz      r6, 0x10(r6)
	lfs      f0, 0x9c(r6)
	fadds    f0, f1, f0
	stfs     f0, 0x9c(r3)
	lwz      r3, 0xcc(r24)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8037AC20:
	addi     r26, r26, 1
	addi     r29, r29, 4
	cmpwi    r26, 3
	blt      lbl_8037AB94

lbl_8037AC30:
	addi     r30, r30, 4
	addi     r27, r27, 1

lbl_8037AC38:
	lha      r0, 0x8e(r24)
	cmpw     r27, r0
	blt      lbl_8037AB74
	lis      r3, 0x305F3030@ha
	lwz      r5, 0xf0(r24)
	addi     r0, r3, 0x305F3030@l
	lis      r3, 0x00393030@ha
	stw      r0, 0x1c(r5)
	addi     r0, r3, 0x00393030@l
	li       r3, 0
	li       r4, 0
	stw      r0, 0x18(r5)
	li       r5, 0x280
	li       r6, 0x1e0
	bl       GXSetScissor

lbl_8037AC74:
	lwz      r3, 0xdc(r24)
	mr       r4, r25
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lmw      r23, 0x9c(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x8037ACB4
 * @note Size: 0x170
 */
void TItemZukan::setDetail()
{
	int id = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	if (id < 0) {
		mIsCurrentSelUnlocked = false;
		mValueCounter->setBlind(true);
		mWeightCounter->setBlind(true);
	} else {
		mInfoVal1 = getPrice(id);
		JUT_ASSERTLINE(4726, mInfoVal1 < 10000, "price (%d) = %d\n", id, mInfoVal1);

		mInfoVal2 = getWeight(id);
		JUT_ASSERTLINE(4728, mInfoVal2 < 10000, "weight (%d) = %d\n", id, mInfoVal2);

		if (isListShow(id)) {
			mIsCurrentSelUnlocked = true;
			mValueCounter->setBlind(false);
			mWeightCounter->setBlind(false);
		} else {
			mIsCurrentSelUnlocked = false;
			mValueCounter->setBlind(true);
			mWeightCounter->setBlind(true);
		}
		mSelIndexCounter->forceScaleUp(false);
		mValueCounter->forceScaleUp(false);
		mWeightCounter->forceScaleUp(false);
	}
}

/**
 * @note Address: 0x8037AE24
 * @note Size: 0x90
 */
bool TItemZukan::isComplete()
{
	if (mCanComplete) {
		int id = mIndexPaneList[mCurrActiveRowSel]->mIconInfos[mRightOffset]->mCategoryID;
		if (id < 0)
			return false;

		if (mCategoryIsComplete[id]) {
			if (mIsInDemo) {
				if (mWindow->mState == TZukanWindow::STATE_Active)
					return true;
			} else
				return true;
		}
		return false;
	}
	return true;
}

/**
 * @note Address: 0x8037AEB4
 * @note Size: 0x80
 */
bool TItemZukan::isListShow(int id)
{
	if (id < 0)
		return false;

	if (mShowAllObjects) {
		return true;
	}

	if (mIsSection) {
		return mDebugUnlockedList[id];
	}

	if (!Game::playData)
		return true;

	return Game::playData->isPelletZukanVisible(id) != 0;
}

/**
 * @note Address: 0x8037AF34
 * @note Size: 0x6C
 */
void TItemZukan::setXWindow()
{
	mWindow->mCharacterIconXOffset = 0.0f;
	PSSystem::spSysIF->playSystemSe(PSSE_SY_ZUKAN_SCRIPT_ORIMA, 0);
	mWindow->setWindowColor(mOrimaMesgWindowColor);
	mWindow->onIcon(mCurrCharacterIconID);
	mWindow->setIconColor(mOrimaMesgIconColor1, mOrimaMesgIconColor2);
}

/**
 * @note Address: 0x8037AFA0
 * @note Size: 0xA8
 */
void TItemZukan::setYWindow()
{
	// pod appears on right during sales pitch complete message
	if (mIsInDemo) {
		mWindow->mCharacterIconXOffset = mPodIconOffsetX;
	} else {
		mWindow->mCharacterIconXOffset = 0.0f;
	}

	PSSystem::spSysIF->playSystemSe(PSSE_SY_ZUKAN_SCRIPT_POD, 0);
	int id = 1 - mCurrCharacterIconID;
	mWindow->setWindowColor(mMessageWindowColor[id]);
	mWindow->onIcon(id);
	mWindow->setIconColor(mIconColor1[id], mIconColor2[id]);
}

/**
 * @note Address: 0x8037B048
 * @note Size: 0xC0
 */
u32 TItemZukan::getPrice(int id)
{
	if (!mIsSection && Game::playData) {
		Game::PelletConfig* config = Game::PelletList::Mgr::getConfigFromDictionaryNo(id);
		if (config && (mShowAllObjects || Game::playData->isPelletZukanVisible(id))) {
			return config->mParams.mMoney.mData;
		}
		return 0;
	} else {
		return randFloat() * 1000.0f + 1;
	}
}

/**
 * @note Address: 0x8037B108
 * @note Size: 0xC8
 */
u32 TItemZukan::getWeight(int id)
{
	if (!mIsSection && Game::playData) {
		Game::PelletConfig* config = Game::PelletList::Mgr::getConfigFromDictionaryNo(id);
		if (config && (mShowAllObjects || Game::playData->isPelletZukanVisible(id))) {
			// doomsday apparatus check
			u32 ret = config->mParams.mMin.mData;
			if (ret == 128) {
				ret = 1000;
			}
			return ret;
		}
		return 0;
	} else {
		return randFloat() * 1000.0f;
	}
}

/**
 * @note Address: 0x8037B1D0
 * @note Size: 0x98
 */
bool TItemZukan::isNewSupply(int id, bool flag)
{
	if (mAllNewSupply) {
		return true;
	}

	if (Game::playData && id >= 0) {
		if (!flag && mIsPreDebt) {
			if (mMaxPane == 0)
				return false;
			id = mViewablePanelIDList[id];
		}

		return Game::playData->isPelletZukanWhatsNew(id) != 0;
	}
	return false;
}

/**
 * @note Address: 0x8037B268
 * @note Size: 0xC4
 */
bool TItemZukan::isPanelExist()
{
	int id = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	if (id < 0) {
		return false;
	}

	int max = getIdMax();
	if (mIsPreDebt) {
		if (mMaxPane < 1) {
			return false;
		}
		max = mViewablePanelIDList[mMaxPane - 1];
	}

	if (id == max) {
		return false;
	}
	return (u8)(max >= id + mRightOffset);
}

/**
 * @note Address: 0x8037B32C
 * @note Size: 0x34
 */
bool TItemZukan::isOpenConfirmWindow() { return static_cast<TDItemScene*>(getOwner())->mConfirmEndWindow->mHasDrawn; }

/**
 * @note Address: 0x8037B360
 * @note Size: 0x4C
 */
void TItemZukan::openConfirmWindow()
{
	mMessageBoxBGAlpha = 0;
	static_cast<TDItemScene*>(getOwner())->mConfirmEndWindow->start(nullptr);
}

/**
 * @note Address: 0x8037B3AC
 * @note Size: 0x54
 */
TDItemScene::TDItemScene() { mConfirmEndWindow = nullptr; }

/**
 * @note Address: 0x8037B400
 * @note Size: 0x1C8
 */
void TDItemScene::doCreateObj(JKRArchive* arc)
{
	TItemZukan* obj = new TItemZukan;
	registObj(obj, arc);
	mObject           = obj;
	mConfirmEndWindow = new TConfirmEndWindow("endWindow");
	registObj(mConfirmEndWindow, arc);
	mConfirmEndWindow->setRetireMsg('6018_00'); // "Go to Area Selection"
}

/**
 * @note Address: 0x8037B5C8
 * @note Size: 0x34
 */
bool TDItemScene::doStart(Screen::StartSceneArg* arg)
{
	mObject->start(arg);
	return true;
}

/**
 * @note Address: 0x8037B5FC
 * @note Size: 0x28
 */
bool TDItemScene::isAppearConfirmWindow()
{
	if (mConfirmEndWindow && mConfirmEndWindow->mHasDrawn) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8037B624
 * @note Size: 0x80
 */
TCallbackScrollMsg::TCallbackScrollMsg()
{
	mScrollTimer            = 0.0f;
	TZukanBase::mLineSpace  = 48.0f;
	TZukanBase::mWarpRadius = 15.0f;

	mControl = new P2JME::IllustratedBook::TControl;
	mControl->init();
	reset();
}

/**
 * @note Address: 0x8037B6A4
 * @note Size: 0x70
 */
void TCallbackScrollMsg::doInit()
{
	P2ASSERTLINE(5025, mPane->getTypeID() == PANETYPE_TextBox);
	mControl->setTextBoxInfo(static_cast<J2DTextBox*>(mPane));
}

/**
 * @note Address: 0x8037B714
 * @note Size: 0x38
 */
void TCallbackScrollMsg::update() { mControl->update(nullptr, nullptr); }

/**
 * @note Address: 0x8037B74C
 * @note Size: 0xC8
 */
void TCallbackScrollMsg::reset()
{
	mScrollTimer = 20.0f;
	mControl->reset();
	if (mPane) {
		P2JME::convertU64ToMessageID(mPane->mMessageID, &mMessageIDAs2UL[0], &mMessageIDAs2UL[1]);
		mControl->setMessageID(mMessageIDAs2UL[0], mMessageIDAs2UL[1]);

		P2JME::Window::TRenderingProcessor* proc = static_cast<P2JME::Window::TRenderingProcessor*>(mControl->mTextRenderProc);
		proc->setTextBoxInfo(mPane);
		f32 space              = TZukanBase::mLineSpace;
		proc->_C0              = space;
		proc->mLineHeight      = space;
		proc->mSpeed           = TZukanBase::mWarpRadius;
		mControl->_6C          = TZukanBase::mScrollValueCoe;
		mControl->mScrollSpeed = TZukanBase::mScrollSpeedCoe;
	}
}

/**
 * @note Address: 0x8037B814
 * @note Size: 0x34
 */
void TCallbackScrollMsg::scroll(f32 speed)
{
	mScrollTimer += 5.0f;
	mControl->scroll(speed);
}

/**
 * @note Address: 0x8037B848
 * @note Size: 0x48
 */
void TCallbackScrollMsg::draw(Graphics& gfx, J2DGrafContext& graf)
{
	if (mPane->isVisible()) {
		mControl->draw(nullptr, graf.mPosMtx);
	}
}

/**
 * @note Address: 0x8037B890
 * @note Size: 0x24
 */
f32 TCallbackScrollMsg::getPosRate() { return mControl->getScrollPosition(); }

/**
 * @note Address: 0x8037B8B4
 * @note Size: 0x80
 */
TZukanWindow::TZukanWindow(JKRArchive* arc, int anims)
    : TScreenBase(arc, anims)
{
	_18                   = 0;
	mCharacterIconXOffset = 0.0f;
	mState                = STATE_Inactive;
	mAnimPaneLR           = nullptr;
	mAnimPaneLight        = nullptr;
	mMsgCallback          = nullptr;
	mScissor              = nullptr;
	mPaneWinCap           = nullptr;
	mPaneIcon             = nullptr;
	mPaneWinMap           = nullptr;
	mPaneIconLight        = nullptr;
	mScrollPosition       = 0.0f;
	mIconYHeightSin       = 0.0f;
	mCharacterIcon[0]     = nullptr;
	mCharacterIcon[1]     = nullptr;
}

/**
 * @note Address: 0x8037B934
 * @note Size: 0x538
 */
void TZukanWindow::create(char const* filename, u32 flag)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(filename, flag, mArchive);

	mScissor          = new TCallbackScissor;
	mScissor->mBounds = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mScreenObj->addCallBack('mg_demo', mScissor);

	mPaneWinCap = mScreenObj->search('Wwincap');
	P2ASSERTLINE(5177, mPaneWinCap);

	mMsgCallback = new TCallbackScrollMsg;
	mScreenObj->addCallBack('mg_demo', mMsgCallback);

	TCallbackScissor* scissor = new TCallbackScissor;
	scissor->mBounds          = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mScreenObj->addCallBack('mg_demo', scissor);

	mAnimScreens = new og::Screen::AnimScreen*[mAnimScreenCountMax];

	og::Screen::setAlphaScreen(mScreenObj);

	mPaneIcon = mScreenObj->search('Nicon');
	P2ASSERTLINE(5193, mPaneIcon);

	mPaneWinMap = mScreenObj->search('Pwinmap');
	P2ASSERTLINE(5197, mPaneWinMap);

	mPaneIconLight = mScreenObj->search('P_icon_l');
	P2ASSERTLINE(5201, mPaneIconLight);
	mPaneIconLight->setInfluencedAlpha(false, false);

	mAnimPaneLight = new og::Screen::AnimPane;
	mAnimPaneLight->init(mArchive, mScreenObj, 'P_icon_l', "zukan_mess_window.bck");
	mAnimPaneLight->mSpeed = 0.5f;

	mAnimPaneLR = new og::Screen::AnimPane;
	mAnimPaneLR->init(mArchive, mScreenObj, 'mg_yaji', "zukan_mess_window.bck");

	mCharacterIcon[0] = static_cast<J2DPicture*>(mScreenObj->search('P_icon_a'));
	mCharacterIcon[1] = static_cast<J2DPicture*>(mScreenObj->search('P_icon_b'));

	mScaleMgr = new og::Screen::ScaleMgr;
}

/**
 * @note Address: 0x8037BE6C
 * @note Size: 0x390
 */
void TZukanWindow::update()
{
	switch (mState) {
	case STATE_Inactive:
		return;
	case STATE_Appear:
		if (mAnimScreens[0]->mCurrentFrame == 0.0f) {
			mScaleMgr->up(0.5f, 30.0f, 0.6f, 0.0f);
		}
		if (mAnimScreens[0]->mCurrentFrame > 12.0f) {
			mState = STATE_Active;
		}
		break;
	case STATE_Active:
		if (mAnimScreens[0]->mCurrentFrame > 12.0f) {
			mAnimScreens[0]->mCurrentFrame = 12.0f;
		}
		break;
	case STATE_Exit:
		if (mAnimScreens[0]->mCurrentFrame <= 1.0f) {
			mAnimScreens[0]->mCurrentFrame = 0.0f;
			mState                         = STATE_Inactive;
		}
		break;
	}

	if (mScreenObj) {
		mScreenObj->update();
		for (int i = 0; i < mAnimScreenCountMax; i++) {
			mAnimScreens[i]->update();
			if (i > 0 && mAnimScreens[i]->mCurrentFrame > 100.0f) {
				mAnimScreens[i]->mCurrentFrame = 0.0f;
			}
		}

		mAnimPaneLight->mCurrentFrame = mAnimScreens[1]->mCurrentFrame;
		mAnimPaneLight->update();
		mAnimPaneLR->update();

		// we have loop keyframes at home! (loop keyframes at home)
		if (mAnimPaneLR->mCurrentFrame > 86.0f) {
			mAnimPaneLR->mCurrentFrame = 13.0f;
		}

		mScreenObj->animation();

		f32 scale  = mScaleMgr->calc();
		f32 scale2 = mAnimScreens[0]->mCurrentFrame * 2.0f / 12.0f;
		if (scale2 > 1.0f) {
			scale2 = 1.0f;
		}
		mPaneIcon->updateScale(scale2 * scale);
		mIconYHeightSin += 0.3f;
		if (mIconYHeightSin > TAU) {
			mIconYHeightSin -= TAU;
		}
		f32 y = FABS(mScrollPosition);
		y     = ((15.0f - y) / 15.0f);
		if (TZukanBase::mIconMove) {
			mPaneIcon->setOffset(mCharacterIconXOffset + mPaneIcon->mOffset.x,
			                     y * sinf(mIconYHeightSin) + (mScrollPosition + mPaneIcon->getOffsetY()));
		}
	}
	JGeometry::TVec3f pos1 = mPaneWinCap->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f pos2 = mPaneWinCap->getGlbVtx(GLBVTX_TopRight);
	pos1.x += 10.0f;
	pos1.y += 5.0f;
	pos2.x -= 10.0f;
	pos2.y -= 10.0f;
	JGeometry::TBox2f box(pos1.x, pos1.y, pos2.x, pos2.y);
	mScissor->mBounds = box;
}

/**
 * @note Address: 0x8037C1FC
 * @note Size: 0x2C
 */
void TZukanWindow::draw(Graphics& gfx, J2DPerspGraph* graf)
{
	if (mState != STATE_Inactive) {
		TScreenBase::draw(gfx, graf);
	}
}

/**
 * @note Address: 0x8037C228
 * @note Size: 0xF0
 */
void TZukanWindow::windowOpen()
{
	mAnimScreens[0]->mCurrentFrame = 0.0f;
	mAnimScreens[0]->mSpeed        = 0.5f;
	mState                         = STATE_Appear;
	mMsgCallback->reset();
}

/**
 * @note Address: 0x8037C318
 * @note Size: 0x30
 */
void TZukanWindow::windowClose()
{
	if (mState == STATE_Active || mState == STATE_Appear) {
		mAnimScreens[0]->mSpeed = -0.5f; // set animation speed to negative to close box
	}
	mState = STATE_Exit;
}

/**
 * @note Address: 0x8037C348
 * @note Size: 0x38
 */
void TZukanWindow::msgScroll(f32 scroll) { mMsgCallback->scroll(scroll); }

/**
 * @note Address: 0x8037C380
 * @note Size: 0x30
 * Returns a ratio of how far through the message box you are
 */
f32 TZukanWindow::getPosRate() { return 1.0f - mMsgCallback->mControl->getScrollPosition(); }

/**
 * @note Address: 0x8037C3B0
 * @note Size: 0x6C
 */
void TZukanWindow::setWindowColor(J2DGXColorS10& color)
{
	static_cast<J2DPictureEx*>(mPaneWinMap)->getMaterial()->mTevBlock->setTevColor(1, color);
}

/**
 * @note Address: 0x8037C41C
 * @note Size: 0xF0
 */
void TZukanWindow::setIconColor(J2DGXColorS10& color1, J2DGXColorS10& color2)
{
	static_cast<J2DPictureEx*>(mPaneIconLight)->getMaterial()->mTevBlock->setTevColor(0, color1);
	static_cast<J2DPictureEx*>(mPaneIconLight)->getMaterial()->mTevBlock->setTevColor(1, color2);

	J2DMaterial* mat        = static_cast<J2DPictureEx*>(mPaneIconLight)->getMaterial();
	mat->mMaterialAlphaCalc = 1;
}

/**
 * @note Address: 0x8037C50C
 * @note Size: 0x8C
 */
void TZukanWindow::onIcon(int id)
{
	P2ASSERTLINE(5415, id < 2);
	if (mCharacterIcon[id]) {
		mCharacterIcon[id]->show();
		mCharacterIcon[1 - id]->hide();
	}
}

/**
 * @note Address: 0x8037C598
 * @note Size: 0xD4
 */
void TZukanWindow::moveIcon(f32 x)
{
	if (TZukanBase::mIconMove) {
		if (FABS(x) < 0.1f) {
			x = 0.0f;
		}
		if (FABS(mScrollPosition) < 1.0f) {
			mScrollPosition = 0.0f;
		}
		if (mScrollPosition == 0.0f && x != 0.0f) {
			mScaleMgr->up(0.05f, 1.0f, 0.2f, 0.0f);
		}

		f32 test = 0.1f;
		if (x == 0.0f) {
			test = 0.15f;
		}
		mScrollPosition += test * (x * 5.0f - mScrollPosition);
	}
}

/**
 * @note Address: 0x8037C66C
 * @note Size: 0x40
 */
void TZukanWindow::changeIconTexture(int id, ResTIMG* file) { mCharacterIcon[id]->changeTexture(file, 0); }

TZukanBase::StaticValues TZukanBase::mScrollParm;

} // namespace Morimura
