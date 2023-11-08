#include "Morimura/Zukan.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"
#include "Game/IconTexture.h"
#include "Game/ResultTexMgr.h"
#include "Game/IllustratedBook.h"
#include "trig.h"
#include "Dolphin/rand.h"
#include "Game/gamePlayData.h"
#include "System.h"
#include "Game/Data.h"
#include "Game/enemyInfo.h"
#include "Game/TekiStat.h"
#include "Game/PelletList.h"
#include "P2JME/P2JME.h"
#include "efx2d/T2DChangesmoke.h"

static const int unusedArray[] = { 0, 0, 0 };

namespace Morimura {
s16 TZukanBase::mRequestTimerMax    = 10;
bool TZukanBase::mIconMove          = true;
f32 TZukanBase::mLineSpace          = 48.0f; // [vertical spacing between lines of text in message box]
f32 TZukanBase::mWarpRadius         = 15.0f;
f32 TZukanBase::mScrollValueCoe     = 3.5f;  // 3.5f  [max scroll speed]
f32 TZukanBase::mScrollSpeedCoe     = 0.08f; // 0.08f [acceleration]
f32 TZukanBase::mNewScale           = 0.7f;
f32 TZukanBase::mPodIconOffsetX     = 480.0f; // 480.0f
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
// this table connects piklopedia order to the actual game enemy id order
int eIDInfo[ENEMY_ZUKAN_COUNT][2] = {
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
	{ TEnemyZukan::Zukan_UjiA, Game::EnemyTypeID::EnemyID_UjiA },
	{ TEnemyZukan::Zukan_UjiB, Game::EnemyTypeID::EnemyID_UjiB },
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
	{ TEnemyZukan::Zukan_Kurage, Game::EnemyTypeID::EnemyID_Kurage },
	{ TEnemyZukan::Zukan_OniKurage, Game::EnemyTypeID::EnemyID_OniKurage },
	{ TEnemyZukan::Zukan_FireOtakara, Game::EnemyTypeID::EnemyID_FireOtakara },
	{ TEnemyZukan::Zukan_ElecOtakara, Game::EnemyTypeID::EnemyID_ElecOtakara },
	{ TEnemyZukan::Zukan_WaterOtakara, Game::EnemyTypeID::EnemyID_WaterOtakara },
	{ TEnemyZukan::Zukan_GasOtakara, Game::EnemyTypeID::EnemyID_GasOtakara },
	{ TEnemyZukan::Zukan_BombOtakara, Game::EnemyTypeID::EnemyID_BombOtakara },
	{ TEnemyZukan::Zukan_UmiMushiBlind, Game::EnemyTypeID::EnemyID_UmiMushiBlind },
	{ TEnemyZukan::Zukan_Frog, Game::EnemyTypeID::EnemyID_Frog },
	{ TEnemyZukan::Zukan_MaroFrog, Game::EnemyTypeID::EnemyID_MaroFrog },
	{ TEnemyZukan::Zukan_Tadpole, Game::EnemyTypeID::EnemyID_Tadpole },
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
	{ TEnemyZukan::Zukan_Miulin, Game::EnemyTypeID::EnemyID_Miulin },
	{ TEnemyZukan::Zukan_PanModoki, Game::EnemyTypeID::EnemyID_PanModoki },
	{ TEnemyZukan::Zukan_PelPlant, Game::EnemyTypeID::EnemyID_Pelplant },
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
	{ TEnemyZukan::Zukan_Queen, Game::EnemyTypeID::EnemyID_Queen },
	{ TEnemyZukan::Zukan_SnakeCrow, Game::EnemyTypeID::EnemyID_SnakeCrow },
	{ TEnemyZukan::Zukan_Damagumo, Game::EnemyTypeID::EnemyID_Damagumo },
	{ TEnemyZukan::Zukan_KingChappy, Game::EnemyTypeID::EnemyID_KingChappy },
	{ TEnemyZukan::Zukan_OoPanModoki, Game::EnemyTypeID::EnemyID_OoPanModoki },
	{ TEnemyZukan::Zukan_SnakeWhole, Game::EnemyTypeID::EnemyID_SnakeWhole },
	{ TEnemyZukan::Zukan_Houdai, Game::EnemyTypeID::EnemyID_Houdai },
	{ TEnemyZukan::Zukan_UmiMushi, Game::EnemyTypeID::EnemyID_UmiMushi },
	{ TEnemyZukan::Zukan_BlackMan, Game::EnemyTypeID::EnemyID_BlackMan },
	{ TEnemyZukan::Zukan_DangoMushi, Game::EnemyTypeID::EnemyID_DangoMushi },
	{ TEnemyZukan::Zukan_BigFoot, Game::EnemyTypeID::EnemyID_BigFoot },
	{ TEnemyZukan::Zukan_BigTreasure, Game::EnemyTypeID::EnemyID_BigTreasure },
};

// these represent the highest index (index that the hoard shows you in-game) of each sets treasures
// for example the first set is ids 1 through 7
int TItemZukan::mCategoryArray[TREASUREHOARD_CATEGORY_NUM]
    = { 7, 16, 22, 27, 42, 51, 57, 63, 71, 79, 86, 94, 103, 109, 120, 126, 146, 156, 160, 166, 168, 176, 183, 196, 201 };

/*
 * --INFO--
 * Address:	80370C08
 * Size:	000204
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
    , mState(0)
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
	mMaxSelect             = 10;
	mRowSize               = 3;
	mTimerLength           = 0.25f;
	mPaneCursorCorners[0]  = nullptr;
	mPaneCursorCorners[1]  = nullptr;
	mPaneCursorCorners[2]  = nullptr;
	mPaneCursorCorners[3]  = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void TZukanBase::setDebugHeapParent(JKRHeap* heap)
{
	mDebugHeapParent = heap;
	P2ASSERTLINE(69, mDebugHeapParent);
}

/*
 * --INFO--
 * Address:	80370FCC
 * Size:	00090C
 */
void TZukanBase::doCreate(JKRArchive*)
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
	float diff      = mIndexPaneList[1]->mPane->mOffset.y - idpane->mOffset.y;
	idpane->show();

	mIndexGroup          = new TIndexGroup;
	mIndexGroup->mHeight = diff;
	TIndexGroup* group   = mIndexGroup;
	group->mMaxRollSpeed = mScrollParm._00;
	group->_04           = mScrollParm._04;
	group->mRollSpeedMod = mScrollParm._08;
	group->_0C           = mScrollParm._0C;
	group->_10           = mScrollParm._10;

	paneInit();
	changePaneInfo();
}

/*
 * --INFO--
 * Address:	803718D8
 * Size:	000FC8
 */
bool TZukanBase::doUpdate()
{
	if (!mIsInDemo) {
		doUpdateIn();
	}

	if (!mIsInDemo && mState < 2) {
		mState = 0;
		if (mIsDrawScene) {
			mState            = 1;
			mIsDrawScene      = false;
			mIsEffectRequired = false;
			if (mIsBigWindowOpened) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
			}
			mIsBigWindowOpened = false;
			mRequestTimer      = 0;
		} else if (isListShow(mIndexPaneList[mCurrentSelect]->getIndex()) && mIndexPaneList[mCurrentSelect]->getIndex() == mCurrIndex) {
			if (!mIsEffectRequired) {
				if (mRequestTimer > mRequestTimerMax) {
					mState = 1;
					if (mIsSection) {
						mIsEffectRequired = true;
					}
				} else {
					mRequestTimer++;
				}
			}
		} else {
			mCurrIndex        = mIndexPaneList[mCurrentSelect]->getIndex();
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
	if (!mIsInDemo && !mCanInput && mState < 2) {
		mIsInFadeInOut = true;
	}

	if (!mIsInDemo && mCanInput && mState < 2 && !isOpenConfirmWindow()) {
		mIsInFadeInOut = false;
		if (!mIsBigWindowOpened && !mWindow->mStatus) {
			Controller* pad = mController;
			if (pad->getButton() & Controller::ANALOG_UP) {
				if (!mIsPreDebt || !mCanScroll) {
					if (mCurrentSelect > 0) {
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
				if (!mIsPreDebt || !mCanScroll) {
					bool cantScroll = true;
					if (_234 < 0) {
						if ((float)mCurrentSelect < (float)mMaxSelectZukan / 3.0f - 1.0f) {
							cantScroll = false;
						}
					} else {
						if (mIndexPaneList[mCurrentSelect]->getListIndex() < mMaxPane - 1) {
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
				if (mIndexPaneList[mCurrentSelect]->mSizeType == 0 && isPanelExist()) {
					mRightOffset++;
					if (mRightOffset > 2) {
						mRightOffset = 2;
					} else {
						isHorizontalScroll = true;
					}
				}
			} else if (pad->getButtonDown() & Controller::ANALOG_LEFT) {
				if (mIndexPaneList[mCurrentSelect]->mSizeType == 0) {
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
				mState = 1;
				doPushXButton();
			} else if (pad->getButtonDown() & Controller::PRESS_Y) {
				mState = 1;
				doPushYButton();
			} else if (pad->getButtonDown() & (Controller::PRESS_L | Controller::PRESS_R)) {
				if (mIsBigWindowOpened) {
					PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
					mIsBigWindowOpened = false;
				}
				if (mWindow->mStatus) {
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
					mWindow->windowClose();
				}
			} else if (pad->getButtonDown() & Controller::PRESS_B) {
				doPushBButton();
			} else if (pad->getButtonDown() & Controller::PRESS_A) {
				mState = 1;
				if (mCameraFadeInLevel < 0.5f) {
					if (!mIsBigWindowOpened) {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
					}
					mIsBigWindowOpened = true;
				}
				if (mWindow->mStatus) {
					windowOpenClose(getXMsgID(mIndexPaneList[mCurrentSelect]->getIndex()));
				}
			} else {
				if (!(u8)mWindow->mStatus) {
					// scroll through message box with analog stick
					f32 z = pad->mMStick.mYPos;
					if (z >= 0.5f || z <= -0.5f) {
						if (z <= -0.5f) {
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

	if (getDispDataZukan()->mDispWorldMapInfoWin0->mResult == 1 && !mIsSection && mState < 2) {
		mState = 2;
		getOwner()->endScene(nullptr);
	}

	if (!mIsBigWindowOpened && mWindow->mStatus == 0) {
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
		TIndexPane* pane = mIndexPaneList[mCurrentSelect];
		if (pane->mSizeType) {
			for (int i = 0; i < mMaxSelect; i++) {
				if (mIndexPaneList[mCurrentSelect]->getListIndex() == mIndexPaneList[i]->getListIndex()) {
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
		f32 factor = 0.5f;
		win->updateScale((scale + 1.0f) * factor);
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
	static_cast<J2DPicture*>(mWindow->mPaneIconLight)->setAlpha(mWindow->getAnimColor().a);

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
	if ((u8)mWindow->mStatus != 1) {
		f32 calc = mWindow->getPosRate();
		if (calc < 0.2f) {
			calc *= 5.0f;
		} else {
			calc = 1.0f;
		}
		mWindow->mScreenObj->search('mg_yaji')->setAlpha(calc * 255.0f);
		mWindow->mScreenObj->search('Pbtn_cu1')->setAlpha(calc * 255.0f);
		mPaneMesgWindowStickCap->setAlpha(calc);
		mPaneMesgWindowStick->setAlpha(calc);
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
	if (mState == 1) {
		mCurrObjectID = getModelIndex(mIndexPaneList[mCurrentSelect]->getIndex());
		if (!mIsCurrentSelUnlocked) {
			mCurrObjectID = -1;
		}
	}
	doUpdateOut();

	if (mForceResetParm) {
		mForceResetParm      = false;
		TIndexGroup* group   = mIndexGroup;
		group->mMaxRollSpeed = mScrollParm._00;
		group->_04           = mScrollParm._04;
		group->mRollSpeedMod = mScrollParm._08;
		group->_0C           = mScrollParm._0C;
		group->_10           = mScrollParm._10;
	}

	if (getDispDataZukan()->mPrevSelection && mCanInput) {
		*getDispDataZukan()->mPrevSelection = mIndexPaneList[mCurrentSelect]->getIndex();
	}

	return false;
}

/*
 * --INFO--
 * Address:	803728A8
 * Size:	0002B8
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

/*
 * --INFO--
 * Address:	80372B68
 * Size:	000714
 */
void TZukanBase::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	mBGScreen->draw(gfx, graf);

	GXSetScissor(mPanelListBounds.i.x, mPanelListBounds.i.y, mPanelListBounds.f.x - mPanelListBounds.i.x,
	             mPanelListBounds.f.y - mPanelListBounds.i.y);
	mListScreen->draw(gfx, graf);
	mIconScreen->draw(gfx, *graf);

	for (int i = 0; i < mMaxSelect; i++) {
		TIndexPane* idpane = mIndexPaneList[i];
		if (idpane->mPane->isVisible()) {
			if (idpane->mSizeType == 0) {
				for (int j = 0; j < 3; j++) {
					int id = mIndexPaneList[i]->getListIndex() + j;
					if (mIndexPaneList[i]->mIconInfos[j]->mParentIndex && isNewSupply(id, false)) {
						mPaneNew1->mGlobalMtx[0][3] = mNewOffset.x + mIndexPaneList[i]->mIconInfos[j]->mPane->mGlobalMtx[0][3];
						mPaneNew1->mGlobalMtx[1][3] = mNewOffset.y + mIndexPaneList[i]->mIconInfos[j]->mPane->mGlobalMtx[1][3];
						mMessageNew->draw(gfx, *graf);
					}
				}
			} else if (idpane->mSizeType != 1) {
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

	if (!(mWindow->mStatus & 4)) {
		if (mWindow->mStatus == 3) {
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
		u32 y    = System::getRenderModeObj()->efbHeight;
		u32 x    = System::getRenderModeObj()->fbWidth;
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
			if (mMessageBoxBGAlpha > 21) {
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

	JUtility::TColor c(0, 0, 0, 255 - mFadeAlpha);
	graf->setColor(c);
	GXSetAlphaUpdate(GX_FALSE);
	u32 y    = System::getRenderModeObj()->efbHeight;
	u32 x    = System::getRenderModeObj()->fbWidth;
	f32 zero = 0.0f;
	JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
	graf->fillBox(box);
	GXSetAlphaUpdate(GX_TRUE);
}

/*
 * --INFO--
 * Address:	80373280
 * Size:	000018
 */
void TZukanBase::doUpdateFadeoutFinish()
{
	if (mState == 2) {
		mState = 3;
	}
}

/*
 * --INFO--
 * Address:	80373298
 * Size:	000578
 */
void TZukanBase::indexPaneInit(J2DScreen* screen)
{
	_90            = 0;
	mCurrentSelect = 4;
	_98            = mMaxSelect - 1;

	u64 tags[10] = { 'Tmenu00', 'Tmenu01', 'Tmenu02', 'Tmenu03', 'Tmenu04', 'Tmenu05', 'Tmenu07', 'Tmenu06', 'Tmenu08', 'Tmenu09' };

	J2DPane* pane = screen->search(tags[_90]);
	P2ASSERTLINE(1083, pane);
	_A0 = pane->mOffset.y;

	J2DPane* pane2 = screen->search(tags[_98]);
	P2ASSERTLINE(1086, pane2);
	_A4 = pane2->mOffset.y;

	// clang-format off
	u64 panetags[10][4][3] = {	'Pn00_0_1', 'Pn00_1_1', 'Pn00_2_1',
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

	mIndexPaneList = new TIndexPane*[mMaxSelect];
	for (int i = 0; i < mMaxSelect; i++) {
		mIndexPaneList[i] = nullptr;
	}

	int idk = 0;
	for (int i = 0; i < mMaxSelect; i++) {
		mIndexPaneList[i] = new TIndexPane(this, static_cast<P2DScreen::Mgr_tuning*>(screen), tags[i]);
		mIndexPaneList[i]->createIconInfo(3, getIdMax());
		for (int j = 0; j < 3; j++) {
			TIconInfo* icon = mIndexPaneList[i]->mIconInfos[j];
			J2DPane* pane1  = screen->search(panetags[i][3][j]);
			J2DPane* pane2  = screen->search(panetags[i][2][j]);
			TScaleUpCounter* counter
			    = setScaleUpCounter2(mListScreen->mScreenObj, panetags[i][0][j], panetags[i][1][j], &icon->mParentIndex, 3, mArchive);
			icon->init(counter, pane1, pane2);
			if (mCanComplete) {
				J2DPictureEx* pic = new J2DPictureEx('test', *screen->search(panetags[i][0][j])->getBounds(), "w08_48_gra.bti", 0x1100000);
				P2ASSERTLINE(1129, pic);
				mIndexPaneList[i]->mIconInfos[j]->mPic = pic;
				screen->search(tags[i])->appendChild(pic);
				screen->search(tags[i])->appendChild(screen->search(panetags[i][3][j]));
				pic->setBasePosition(J2DPOS_Center);
			}
		}
		J2DPane* pane = mIndexPaneList[i]->mPane;
		int test      = i * mRowSize;
		if (mIsPreDebt) {
			test = idk;
		}

		if (mIsPreDebt) {
			if (flag) {
				setShortenIndex(i, -1, true);
			} else {
				getUpdateIndex(test, true);
				setShortenIndex(i, idk, true);
				if (!test && idk) {
					flag = true;
				}
				idk = test;
				if (mMaxPane < 3) {
					flag = true;
				}
			}
		} else {
			setShortenIndex(i, test, true);
		}
		if (idk > -1 && _B0) {
			pane->setMsgID(getNameID(idk));
		}
	}

	/*
	stwu     r1, -0x470(r1)
	mflr     r0
	lis      r5, lbl_80492520@ha
	stw      r0, 0x474(r1)
	li       r0, 0
	stmw     r16, 0x430(r1)
	addi     r22, r5, lbl_80492520@l
	mr       r24, r4
	mr       r23, r3
	addi     r5, r1, 0x14
	addi     r4, r22, 0x44
	stw      r0, 0x90(r3)
	li       r3, 4
	li       r0, 0xa
	stw      r3, 0x94(r23)
	lha      r3, 0x8e(r23)
	addi     r3, r3, -1
	stw      r3, 0x98(r23)
	mtctr    r0

lbl_803732E4:
	lwz      r3, 4(r4)
	lwzu     r0, 8(r4)
	stw      r3, 4(r5)
	stwu     r0, 8(r5)
	bdnz     lbl_803732E4
	mr       r3, r24
	lwz      r4, 0x90(r23)
	lwz      r12, 0(r24)
	addi     r0, r1, 0x18
	slwi     r4, r4, 3
	lwz      r12, 0x3c(r12)
	add      r6, r0, r4
	lwz      r5, 0(r6)
	lwz      r6, 4(r6)
	mtctr    r12
	bctrl
	or.      r17, r3, r3
	bne      lbl_80373340
	addi     r3, r22, 0xc
	addi     r5, r22, 0x18
	li       r4, 0x43b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80373340:
	lfs      f0, 0xd8(r17)
	mr       r3, r24
	addi     r0, r1, 0x18
	stfs     f0, 0xa0(r23)
	lwz      r4, 0x98(r23)
	lwz      r12, 0(r24)
	slwi     r4, r4, 3
	add      r6, r0, r4
	lwz      r12, 0x3c(r12)
	lwz      r5, 0(r6)
	lwz      r6, 4(r6)
	mtctr    r12
	bctrl
	or.      r17, r3, r3
	bne      lbl_80373390
	addi     r3, r22, 0xc
	addi     r5, r22, 0x18
	li       r4, 0x43e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80373390:
	lfs      f0, 0xd8(r17)
	li       r0, 0x78
	addi     r5, r1, 0x64
	addi     r4, r22, 0x94
	stfs     f0, 0xa4(r23)
	mtctr    r0

lbl_803733A8:
	lwz      r3, 4(r4)
	lwzu     r0, 8(r4)
	stw      r3, 4(r5)
	stwu     r0, 8(r5)
	bdnz     lbl_803733A8
	lbz      r0, 0x240(r23)
	li       r28, 0
	cmplwi   r0, 0
	beq      lbl_803733DC
	lwz      r0, 0x230(r23)
	cmpwi    r0, 0
	bne      lbl_803733DC
	li       r28, 1

lbl_803733DC:
	lha      r0, 0x8e(r23)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x88(r23)
	mr       r4, r5
	li       r6, 0
	b        lbl_8037340C

lbl_803733FC:
	lwz      r3, 0x88(r23)
	addi     r6, r6, 1
	stwx     r4, r3, r5
	addi     r5, r5, 4

lbl_8037340C:
	lha      r0, 0x8e(r23)
	cmpw     r6, r0
	blt      lbl_803733FC
	addi     r31, r1, 0x18
	addi     r29, r1, 0x68
	li       r27, 0
	li       r26, 0
	li       r30, 0
	b        lbl_803737A8

lbl_80373430:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r17, r3, r3
	beq      lbl_80373490
	mr       r3, r24
	lwz      r5, 0(r31)
	lwz      r12, 0(r24)
	lwz      r6, 4(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_8051EB20@sda21(r2)
	stw      r0, 0(r17)
	stw      r3, 4(r17)
	stw      r0, 8(r17)
	stw      r0, 0xc(r17)
	stw      r0, 0x10(r17)
	stfs     f0, 0x18(r17)
	stw      r0, 0x20(r17)
	stw      r23, 0x24(r17)
	lwz      r3, 4(r17)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x1c(r17)

lbl_80373490:
	lwz      r4, 0x88(r23)
	mr       r3, r23
	stwx     r17, r4, r30
	lwz      r12, 0(r23)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x88(r23)
	mr       r5, r3
	li       r4, 3
	lwzx     r3, r6, r30
	bl       createIconInfo__Q28Morimura10TIndexPaneFii
	mr       r19, r29
	li       r25, 0
	li       r20, 0

lbl_803734CC:
	lwz      r0, 0x88(r23)
	mr       r3, r24
	lwz      r12, 0(r24)
	lwzx     r5, r30, r0
	lwz      r4, 0xb4(r23)
	lwz      r5, 0x20(r5)
	lwz      r12, 0x3c(r12)
	lwzx     r21, r5, r20
	lwz      r16, 8(r4)
	lwz      r5, 0x48(r19)
	lwz      r6, 0x4c(r19)
	mtctr    r12
	bctrl
	mr       r17, r3
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r5, 0x30(r19)
	lwz      r12, 0x3c(r12)
	lwz      r6, 0x34(r19)
	mtctr    r12
	bctrl
	lwz      r0, 0x78(r23)
	mr       r18, r3
	mr       r3, r16
	addi     r9, r21, 0x18
	stw      r0, 8(r1)
	li       r10, 3
	lwz      r5, 0(r19)
	lwz      r6, 4(r19)
	lwz      r7, 0x18(r19)
	lwz      r8, 0x1c(r19)
	bl setScaleUpCounter2__8MorimuraFPQ29P2DScreen3MgrUxUxPUlUsP10JKRArchive mr
r4, r3 mr       r3, r21 mr       r5, r18 mr       r6, r17 bl
init__Q28Morimura9TIconInfoFPQ28Morimura15TScaleUpCounterP7J2DPaneP7J2DPane lbz
r0, 0x241(r23) cmplwi   r0, 0 beq      lbl_80373664 li       r3, 0x1a8 bl
__nw__FUl or.      r21, r3, r3 beq      lbl_803735C0 mr       r3, r24 lwz r5,
0x48(r19) lwz      r12, 0(r24) lwz      r6, 0x4c(r19) lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	bl       getBounds__7J2DPaneFv
	lis      r4, 0x74657374@ha
	mr       r7, r3
	mr       r3, r21
	addi     r8, r22, 0x458
	addi     r6, r4, 0x74657374@l
	li       r5, 0
	lis      r9, 0x110
	bl       "__ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PCcUl"
	mr       r21, r3

lbl_803735C0:
	cmplwi   r21, 0
	bne      lbl_803735DC
	addi     r3, r22, 0xc
	addi     r5, r22, 0x18
	li       r4, 0x469
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803735DC:
	lwz      r0, 0x88(r23)
	mr       r3, r24
	lwzx     r4, r30, r0
	lwz      r4, 0x20(r4)
	lwzx     r4, r4, r20
	stw      r21, 4(r4)
	lwz      r12, 0(r24)
	lwz      r5, 0(r31)
	lwz      r12, 0x3c(r12)
	lwz      r6, 4(r31)
	mtctr    r12
	bctrl
	mr       r4, r21
	bl       appendChild__7J2DPaneFP7J2DPane
	mr       r3, r24
	lwz      r5, 0x48(r19)
	lwz      r12, 0(r24)
	lwz      r6, 0x4c(r19)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r18, r3
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r5, 0(r31)
	lwz      r12, 0x3c(r12)
	lwz      r6, 4(r31)
	mtctr    r12
	bctrl
	mr       r4, r18
	bl       appendChild__7J2DPaneFP7J2DPane
	mr       r3, r21
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition

lbl_80373664:
	addi     r25, r25, 1
	addi     r19, r19, 8
	cmpwi    r25, 3
	addi     r20, r20, 4
	blt      lbl_803734CC
	lwz      r0, 0x9c(r23)
	lwz      r3, 0x88(r23)
	mullw    r0, r26, r0
	lwzx     r3, r3, r30
	lwz      r19, 4(r3)
	stw      r0, 0x10(r1)
	lbz      r0, 0x240(r23)
	cmplwi   r0, 0
	beq      lbl_803736A0
	stw      r27, 0x10(r1)

lbl_803736A0:
	lbz      r0, 0x240(r23)
	cmplwi   r0, 0
	beq      lbl_80373744
	clrlwi.  r0, r28, 0x18
	beq      lbl_803736D8
	mr       r3, r23
	mr       r4, r26
	lwz      r12, 0(r23)
	li       r5, -1
	li       r6, 1
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	b        lbl_80373764

lbl_803736D8:
	mr       r3, r23
	addi     r4, r1, 0x10
	lwz      r12, 0(r23)
	li       r5, 1
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	mr       r4, r26
	lwz      r12, 0(r23)
	mr       r5, r27
	li       r6, 1
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r1)
	cmpwi    r3, 0
	bne      lbl_8037372C
	cmpwi    r27, 0
	beq      lbl_8037372C
	li       r28, 1

lbl_8037372C:
	lwz      r0, 0x230(r23)
	cmpwi    r0, 3
	bge      lbl_8037373C
	li       r28, 1

lbl_8037373C:
	mr       r27, r3
	b        lbl_80373764

lbl_80373744:
	mr       r3, r23
	mr       r4, r26
	lwz      r12, 0(r23)
	li       r6, 1
	lwz      r5, 0x10(r1)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl

lbl_80373764:
	lwz      r4, 0x10(r1)
	cmpwi    r4, 0
	blt      lbl_80373798
	lbz      r0, 0xb0(r23)
	cmplwi   r0, 0
	beq      lbl_80373798
	lwz      r12, 0(r23)
	mr       r3, r23
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	stw      r4, 0x1c(r19)
	stw      r3, 0x18(r19)

lbl_80373798:
	addi     r31, r31, 8
	addi     r30, r30, 4
	addi     r29, r29, 0x60
	addi     r26, r26, 1

lbl_803737A8:
	lha      r4, 0x8e(r23)
	cmpw     r26, r4
	blt      lbl_80373430
	cmpwi    r4, 0
	li       r5, 0
	ble      lbl_803737FC
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_803737E8
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_803737E8

lbl_803737E0:
	addi     r5, r5, 8
	bdnz     lbl_803737E0

lbl_803737E8:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bge      lbl_803737FC

lbl_803737F8:
	bdnz     lbl_803737F8

lbl_803737FC:
	lmw      r16, 0x430(r1)
	lwz      r0, 0x474(r1)
	mtlr     r0
	addi     r1, r1, 0x470
	blr
	*/
}

/*
 * --INFO--
 * Address:	80373810
 * Size:	000258
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

	f32 offs = 20.0f;
	mYOffset = mIndexPaneList[mCurrentSelect]->_1C - 10.0f;
	_AC      = mYOffset + offs;
}

/*
 * --INFO--
 * Address:	80373A68
 * Size:	0000C8
 */
void TZukanBase::changePaneInfo()
{
	mIsErrorSoundState = true;
	mDoFadeNameAlpha   = true;
	mDisplayIndex      = mIndexPaneList[mCurrentSelect]->getIndex() + 1;
	setDetail();

	// Before paying debt, change stick anim if youre at the bottom or top of the list
	if (mIsPreDebt && !mCanScroll) {
		int sel = mCurrentSelect;
		if (sel == 0) {
			mStickAnim->stickDown();
		} else if (sel == mMaxSelectZukan / 3) {
			mStickAnim->stickUp();
		} else {
			mStickAnim->stickUpDown();
		}
	}
}

/*
 * --INFO--
 * Address:	80373B30
 * Size:	0000A8
 */
void TZukanBase::changeName()
{
	int id = mIndexPaneList[mCurrentSelect]->getIndex();
	if (id >= 0) {
		J2DTextBoxEx* pane = mPaneEnemyName;
		pane->setMsgID(getNameID(id));
		if (mPaneEnemyNameShadow) {
			pane = mPaneEnemyNameShadow;
		}
		pane->setMsgID(getNameID(id));
	}
}

/*
 * --INFO--
 * Address:	80373BD8
 * Size:	00005C
 */
void TZukanBase::doUpdateIn()
{
	if ((u8)mWindow->mStatus != TZukanWindow::STATE_Inactive && mWindow->_18) {
		mWindow->_18 = false;
		if (mCurrCharacterOpened) {
			doPushXButton();
		} else {
			doPushYButton();
		}
	}
}

/*
 * --INFO--
 * Address:	80373C34
 * Size:	000630
 */
void TZukanBase::doUpdateOut()
{
	mCursorAnimTimer += mCursorAnimSpeed;
	if (mCursorAnimTimer > TAU) {
		mCursorAnimTimer -= TAU;
	}
	mCursorScale = sinf(mCursorAnimTimer) * mCursorAnimMagnitude + 0.85f;

	for (int i = 0; i < mMaxSelect; i++) {
		mIndexPaneList[i]->update();
	}
	int offs2 = mRightOffset;

	TIndexPane* pane = mIndexPaneList[mCurrentSelect];
	if (pane->mSizeType != 0) {
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
			mIndexPaneList[mCurrentSelect]->mIconInfos[mRightOffset]->startScaleUp(1.0f);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}
		mPaneSelectIcon->setOffset(mSelectIconPos.x + (mRightOffset * 62.0f), mSelectIconPos.y);
	}

	J2DPane* panel = mIndexPaneList[mCurrentSelect]->mIconInfos[offs2]->mPane;
	for (u8 i = 0; i < 4; i++) {
		if (mIsPreDebt && !mMaxPane) {
			mPaneCursorCorners[i]->hide();
		} else {
			f32 x = panel->getGlbVtx(i).x - panel->mGlobalMtx[0][3];
			f32 y = panel->getGlbVtx(i).y - panel->mGlobalMtx[1][3];
			mPaneCursorCorners[i]->setOffset(mCursorScale * x, mCursorScale * y);
		}
	}

	for (int i = 0; i < mMaxSelect; i++) {
		if (mIsPreDebt) {
			bool test = true;
			if (!mCanScroll && (i != mCurrentSelect || mMaxPane == 0)) {
				int id1 = mIndexPaneList[i]->getListIndex();
				int id2 = mIndexPaneList[mCurrentSelect]->getListIndex();
				if (id1 < 0 || mMaxSelectZukan <= 3) {
					test = false;
				} else if (id1 > id2) {
					if (mIndexPaneList[i]->_1C > mIndexPaneList[mCurrentSelect]->_1C) { // fcmpo swap
						test = false;
					}
				} else {
					if (mIndexPaneList[i]->_1C < mIndexPaneList[mCurrentSelect]->_1C) { // fcmpo swap
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
					if (mIndexPaneList[i]->mSizeType == 0) {
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

/*
 * --INFO--
 * Address:	80374264
 * Size:	000114
 */
void TZukanBase::doPushXButton()
{
	if (mIsCurrentSelUnlocked) {
		if (mIsBigWindowOpened) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
		}
		mIsBigWindowOpened = false;
		if (mWindow->mStatus == 0) {
			mCurrCharacterOpened = false;
			windowOpenClose(getXMsgID(mIndexPaneList[mCurrentSelect]->getIndex()));
			setXWindow();
		} else {
			windowOpenClose(getXMsgID(mIndexPaneList[mCurrentSelect]->getIndex()));
			if (mCurrCharacterOpened) {
				mWindow->_18 = 1;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80374378
 * Size:	000130
 */
void TZukanBase::doPushYButton()
{
	if (mIsCurrentSelUnlocked && isComplete()) {
		if (mIsBigWindowOpened) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
		}
		mIsBigWindowOpened = false;
		if (mWindow->mStatus == 0) {
			mCurrCharacterOpened = true;
			windowOpenClose(getYMsgID(mIndexPaneList[mCurrentSelect]->getIndex()));
			setYWindow();
		} else {
			windowOpenClose(getYMsgID(mIndexPaneList[mCurrentSelect]->getIndex()));
			if (!mCurrCharacterOpened) {
				mWindow->_18 = 1;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	803744A8
 * Size:	0000B0
 */
void TZukanBase::doPushBButton()
{
	if (mIsBigWindowOpened) {
		mIsBigWindowOpened = false;
		PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
	} else {
		if (mWindow->mStatus != 0) {
			windowOpenClose(getXMsgID(mIndexPaneList[mCurrentSelect]->getIndex()));
		} else {
			openConfirmWindow();
		}
	}
}

/*
 * --INFO--
 * Address:	80374558
 * Size:	000244
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
			if (pane->mSizeType != 1) {
				if (mIsSection)
					pane->mIconInfos[1]->setInfo(mViewablePanelIDList[index], nullptr);
				else {
					TIconInfo* info     = pane->mIconInfos[1];
					const ResTIMG* timg = getTexInfo(mViewablePanelIDList[index]);
					info->setInfo(mViewablePanelIDList[index], timg);
				}
			} else {
				pane->mIconInfos[1]->mParentIndex = mViewablePanelIDList[index] + 1;
			}
		} else {
			int test = 0;
			for (int i = 0; test <= 2 && i < 3; i++) {
				if (index >= 0) {
					test = test++ + index;
					if (mMaxPane < test && _234 >= 0 && _234 >= test) {
						mIndexPaneList[paneID]->mIconInfos[i]->setInfo(-1, nullptr);
					} else if (mIsSection) {
						mIndexPaneList[paneID]->mIconInfos[i]->setInfo(mViewablePanelIDList[test], nullptr);
					} else {
						TIconInfo* info     = mIndexPaneList[paneID]->mIconInfos[i];
						const ResTIMG* timg = getTexInfo(mViewablePanelIDList[test]);
						info->setInfo(mViewablePanelIDList[test], timg);
					}
				} else {
					mIndexPaneList[paneID]->mIconInfos[i]->setInfo(-1, nullptr);
				}
			}
		}
	} else {
		mIndexPaneList[paneID]->setIndex(index);
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r26, r3
	mr       r27, r5
	lbz      r0, 0x240(r3)
	cmplwi   r0, 0
	beq      lbl_80374774
	lwz      r3, 0x88(r26)
	slwi     r30, r4, 2
	lwzx     r3, r3, r30
	lwz      r0, 0(r3)
	cmpwi    r0, 0
	bge      lbl_80374598
	li       r27, -1

lbl_80374598:
	stw      r27, 0(r3)
	lbz      r0, 0x8c(r26)
	cmplwi   r0, 0
	beq      lbl_80374670
	cmpwi    r27, 0
	blt      lbl_80374670
	lwz      r0, 0x230(r26)
	cmpw     r27, r0
	bge      lbl_80374670
	lwz      r3, 0x22c(r26)
	slwi     r31, r27, 2
	lwz      r4, 0x184(r26)
	lwzx     r0, r3, r31
	lbzx     r0, r4, r0
	cmplwi   r0, 0
	beq      lbl_80374670
	lwz      r3, 0x88(r26)
	mr       r4, r27
	lwzx     r3, r3, r30
	bl       setIndex__Q28Morimura10TIndexPaneFi
	lwz      r3, 0x88(r26)
	lwzx     r3, r3, r30
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	beq      lbl_80374654
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80374624
	lwz      r3, 0x20(r3)
	li       r5, 0
	lwz      r4, 0x22c(r26)
	lwz      r3, 4(r3)
	lwzx     r4, r4, r31
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	b        lbl_80374788

lbl_80374624:
	lwz      r5, 0x20(r3)
	mr       r3, r26
	lwz      r4, 0x22c(r26)
	lwz      r27, 4(r5)
	lwzx     r4, r4, r31
	bl       getTexInfo__Q28Morimura10TZukanBaseFi
	lwz      r4, 0x22c(r26)
	mr       r5, r3
	mr       r3, r27
	lwzx     r4, r4, r31
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	b        lbl_80374788

lbl_80374654:
	lwz      r4, 0x22c(r26)
	lwz      r3, 0x20(r3)
	lwzx     r4, r4, r31
	lwz      r3, 4(r3)
	addi     r0, r4, 1
	stw      r0, 0x18(r3)
	b        lbl_80374788

lbl_80374670:
	li       r29, 0
	li       r28, 0
	li       r31, 0

lbl_8037467C:
	cmpwi    r27, 0
	blt      lbl_80374738
	lwz      r0, 0x230(r26)
	add      r3, r28, r27
	cmpw     r3, r0
	bge      lbl_80374738
	lwz      r0, 0x234(r26)
	cmpwi    r0, 0
	blt      lbl_803746C8
	cmpw     r3, r0
	blt      lbl_803746C8
	lwz      r0, 0x88(r26)
	li       r4, -1
	li       r5, 0
	lwzx     r3, r30, r0
	lwz      r3, 0x20(r3)
	lwzx     r3, r3, r31
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	b        lbl_80374754

lbl_803746C8:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803746FC
	lwz      r4, 0x88(r26)
	slwi     r0, r3, 2
	lwz      r3, 0x22c(r26)
	li       r5, 0
	lwzx     r6, r30, r4
	lwzx     r4, r3, r0
	lwz      r3, 0x20(r6)
	lwzx     r3, r3, r31
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	b        lbl_80374754

lbl_803746FC:
	lwz      r0, 0x88(r26)
	slwi     r24, r3, 2
	lwz      r4, 0x22c(r26)
	mr       r3, r26
	lwzx     r5, r30, r0
	lwzx     r4, r4, r24
	lwz      r5, 0x20(r5)
	lwzx     r25, r5, r31
	bl       getTexInfo__Q28Morimura10TZukanBaseFi
	lwz      r4, 0x22c(r26)
	mr       r5, r3
	mr       r3, r25
	lwzx     r4, r4, r24
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	b        lbl_80374754

lbl_80374738:
	lwz      r0, 0x88(r26)
	li       r4, -1
	li       r5, 0
	lwzx     r3, r30, r0
	lwz      r3, 0x20(r3)
	lwzx     r3, r3, r31
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG

lbl_80374754:
	addi     r29, r29, 1
	addi     r31, r31, 4
	cmpwi    r29, 2
	bgt      lbl_80374788
	addi     r28, r28, 1
	cmpwi    r28, 3
	blt      lbl_8037467C
	b        lbl_80374788

lbl_80374774:
	lwz      r3, 0x88(r26)
	slwi     r0, r4, 2
	mr       r4, r27
	lwzx     r3, r3, r0
	bl       setIndex__Q28Morimura10TIndexPaneFi

lbl_80374788:
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8037479C
 * Size:	000088
 */
void TZukanBase::windowOpenClose(u64 mesg)
{
	if (mIsCurrentSelUnlocked) {
		int flag = mWindow->mStatus;
		if ((u8)flag & 5) {

			mPaneMessageDemo->setMsgID(mesg);
			mMessageBoxBGAlpha = 0;
			mWindow->windowOpen();
		} else if (flag != 3) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
			mWindow->windowClose();
		}
	}
}

/*
 * --INFO--
 * Address:	80374824
 * Size:	000074
 */
bool TZukanBase::isPanelExist() { return (mIndexPaneList[mCurrentSelect]->getIndex() + mRightOffset) < getIdMax(); }

/*
 * --INFO--
 * Address:	80374898
 * Size:	000018
 */
void TZukanBase::requireRequest()
{
	mIsDrawScene      = true;
	mRequestTimer     = 0;
	mIsEffectRequired = false;
}

/*
 * --INFO--
 * Address:	803748B0
 * Size:	00000C
 */
void TZukanBase::requireEffectOff() { mIsEffectRequired = true; }

/*
 * --INFO--
 * Address:	803748BC
 * Size:	00001C
 */
bool TZukanBase::isEnlargedWindow()
{
	if (mIsInDemo) {
		return true;
	}
	return mIsBigWindowOpened;
}

/*
 * --INFO--
 * Address:	803748D8
 * Size:	000020
 */
bool TZukanBase::isMemoWindow()
{
	if (checkMemoWindow()) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void TZukanBase::requireSceneEnd()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803748F8
 * Size:	000010
 */
int TZukanBase::checkRequest(int& data)
{
	data = mCurrObjectID;
	return mState;
}

/*
 * --INFO--
 * Address:	80374908
 * Size:	000068
 */
int TZukanBase::getCurrSelectId()
{
	if (mIsCurrentSelUnlocked) {
		return getModelIndex(mIndexPaneList[mCurrentSelect]->getIndex());
	} else {
		return -1;
	}
}

/*
 * --INFO--
 * Address:	80374970
 * Size:	000124
 */
const ResTIMG* TZukanBase::getTexInfo(int id)
{
	if (mIsSection) {
		return static_cast<const ResTIMG*>(mArchive->getResource("timg/flower_icon.bti"));
	} else {
		if (getDispDataZukan()->getMemberID() == MEMBER_ZUKAN_ENEMY) {
			return getDispDataZukan()->mEnemyTexMgr->getTexture(getModelIndex(id))->mTexInfo;
		} else {
			int sel = getModelIndex(id);
			return getDispDataZukan()->mResultTexMgr->getOtakaraItemTexture(sel)->mTexInfo;
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void TZukanBase::resetDebugShow()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void TEnemyZukanIndex::getIndexInfo(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80374BB8
 * Size:	001734
 */
void TEnemyZukan::doCreate(JKRArchive* arc)
{
	mScrollParm._00 = 10.0f;
	mScrollParm._04 = 1.1f;
	mScrollParm._08 = 0.99f;
	mScrollParm._0C = 1.5f;
	mScrollParm._10 = 2.5f;

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
		if (mDebugHeapParent) {
			mDebugHeap = JKRExpHeap::create(0x100000, mDebugHeapParent, true);
			P2ASSERTLINE(1986, mDebugHeap);
			mDispEnemy                = new (mDebugHeap, 0) DispMemberZukanEnemy;
			mDispEnemy->mDebugExpHeap = mDebugHeap;
			mIsSection                = true;
			mDebugUnlockedList        = new bool[ENEMY_ZUKAN_COUNT];
			for (int i = 0; i < ENEMY_ZUKAN_COUNT; i++) {
				mDebugUnlockedList[i] = false;
				if (randFloat() < mRandShowRate) {
					mDebugUnlockedList[i] = true;
				}
			}
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
			int max  = getIdMax();
			int test = randWeightFloat(50.0f);
			test++;
			int test2 = randFloat() * 10.0f;
			test2     = 85 - test2;
			for (int i = 0; i < max; i++) {
				if (i < test || test2 > i) {
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
				if (i < test || test2 < i) {
					mViewablePanelIDList[i] = i;
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
			for (int i = 0; i < getIdMax(); i++) {
				if (isListShow(i)) {
					mViewablePanelIDList[i] = i;
					if (_234 < 0 && mIsBigIconList[i]) {
						_234 = i;
					}
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
			max++;
			if (mIsBigIconList[mViewablePanelIDList[i]]) {
				max += 6;
			}
		}
		mMaxSelectZukan = max;
	} else {
		mMaxSelectZukan = getIdMax();
	}

	TZukanBase::doCreate(arc);

	f32 yoffs = mIndexPaneList[1]->mPane->mOffset.y - mIndexPaneList[0]->mPane->mOffset.y;

	if (mIsPreDebt && mMaxSelectZukan <= (mMaxSelect - 1) * 3) {
		mCanScroll = false;
	}

	f32 xoffs = 0.0f;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < mMaxSelect; j++) {
			TIndexPane* idpane = mIndexPaneList[j];
			J2DPane* pane      = idpane->mPane;
			pane->mOffset.y    = idpane->_1C + yoffs;
			pane->calcMtx();
			mIndexPaneList[j]->_1C = mIndexPaneList[j]->mPane->mOffset.y;
		}
		updateIndex(false);
		TIndexGroup* grp = mIndexGroup;
		grp->_14         = xoffs;
		grp->mStateID    = 0;
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
			for (int i = 0; i < mMaxSelectZukan; i++) {
				backupindex = i;
				if (index == mViewablePanelIDList[i])
					break;
				max2--;
				backupindex = index;
			}
		}
		if (backupindex < 3) {
			while (true) {
				int index  = mIndexPaneList[mCurrentSelect]->getListIndex();
				int index2 = index + 3;
				if (mIsPreDebt) {
					int max = _234;
					if (max >= 0 && index < max && index2 > max) {
						index2 = max;
					}
				}
				if (backupindex > index2 && (index == backupindex || mIndexPaneList[mCurrentSelect]->mSizeType != 0))
					break;

				for (int j = 0; j < mMaxSelect; j++) {
					TIndexPane* idpane = mIndexPaneList[j];
					J2DPane* pane      = idpane->mPane;
					pane->mOffset.y    = idpane->_1C - yoffs;
					pane->calcMtx();
					mIndexPaneList[j]->_1C = mIndexPaneList[j]->mPane->mOffset.y;
				}
				mRightOffset = 1; // backupindex - max2;

				// updateIndex(true);
				// TIndexGroup* grp = mIndexGroup;
				// grp->_14         = xoffs;
				// grp->_20         = 0.0f;
				// changePaneInfo();
			}

			mRightOffset = backupindex - max2;
			bool assert  = false;
			if (mRightOffset < 0 || mRightOffset < 3) {
				assert = true;
			}
			P2ASSERTLINE(2431, assert);

			if (mIndexPaneList[mCurrentSelect]->mSizeType == 0) {
				yoffs = -yoffs * 0.5f;
				for (int j = 0; j < mMaxSelect; j++) {
					TIndexPane* idpane = mIndexPaneList[j];
					J2DPane* pane      = idpane->mPane;
					pane->mOffset.y    = idpane->_1C - yoffs;
					pane->calcMtx();
					mIndexPaneList[j]->_1C = mIndexPaneList[j]->mPane->mOffset.y;
				}
				// mRightOffset = 1;
			} else {
				updateIndex(true);
				TIndexGroup* grp = mIndexGroup;
				grp->_14         = xoffs;
				grp->mStateID    = 0;
				// mRightOffset = backupindex - max2;
				// if (mRightOffset < 0 || mRightOffset > 2) {
				//	JUT_PANICLINE(2431, "P2ASSERT");
				//}
			}
			changePaneInfo();
		} else {
			mRightOffset = backupindex % 3;
			changePaneInfo();
		}
	}

	mCurrIndex = mIndexPaneList[mCurrentSelect]->getIndex();
	if (mCurrIndex >= 0) {
		J2DPane* pane = mPaneMessageDemo;
		u64 tag       = getXMsgID(mCurrIndex);
		pane->setMsgID(tag);
	}

	backup->becomeCurrentHeap();
}

/*
 * --INFO--
 * Address:	80376338
 * Size:	0001D8
 */
void TEnemyZukan::setDetail()
{
	int cindex = mIndexPaneList[mCurrentSelect]->getIndex();
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

/*
 * --INFO--
 * Address:	80376510
 * Size:	000048
 */
void TEnemyZukan::setShortenIndex(int paneID, int index, bool flag)
{
	if (mIsPreDebt && !mCanScroll && mMaxSelectZukan <= 18) {
		index = -1;
	}
	TZukanBase::setShortenIndex(paneID, index, flag);
}

/*
 * --INFO--
 * Address:	80376558
 * Size:	0000D8
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
		int* data = eIDInfo[0];
		for (int i = 0; i < ENEMY_ZUKAN_COUNT; i++) {
			if (eIDInfo[i][0] == index) {
				data = eIDInfo[i];
				break;
			}
		}
		Game::TekiStat::Info* info = Game::playData->mTekiStatMgr.getTekiInfo(data[1]);
		if (info->mState.isSet(TEKISTAT_STATE_UPDATED)) {
			return true;
		} else {
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	80376630
 * Size:	000718
 */
void TEnemyZukan::indexPaneInit(J2DScreen* screen)
{
	_90            = 0;
	mCurrentSelect = 4;
	_98            = mMaxSelect - 1;
	mMaxSelect     = 14;
	mCurrentSelect = 6;
	_98            = mMaxSelect - 1;

	u64 tags[14] = { 'Tmenu12', 'Tmenu13', 'Tmenu00', 'Tmenu01', 'Tmenu02', 'Tmenu03', 'Tmenu04',
		             'Tmenu05', 'Tmenu07', 'Tmenu06', 'Tmenu08', 'Tmenu09', 'Tmenu10', 'Tmenu11' };

	J2DPane* pane = screen->search(tags[_90]);
	P2ASSERTLINE(1083, pane);
	_A0 = pane->mOffset.y;

	J2DPane* pane2 = screen->search(tags[_98]);
	P2ASSERTLINE(1086, pane2);
	_A4 = pane2->mOffset.y;

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
							'Pme11_00', 'Pme11_01', 'Pme11_02'	 };
	// clang-format on

	bool flag = false;
	if (mIsPreDebt && mMaxPane == 0) {
		flag = true;
	}

	mIndexPaneList = new TIndexPane*[mMaxSelect];
	for (int i = 0; i < mMaxSelect; i++) {
		mIndexPaneList[i] = nullptr;
	}

	int idk = 0;
	for (int i = 0; i < mMaxSelect; i++) {
		mIndexPaneList[i] = new TIndexPane(this, static_cast<P2DScreen::Mgr_tuning*>(screen), tags[i]);
		mIndexPaneList[i]->createIconInfo(3, getIdMax());
		for (int j = 0; j < 3; j++) {
			TIconInfo* icon = mIndexPaneList[i]->mIconInfos[j];
			J2DPane* pane1  = screen->search(panetags[i][3][j]);
			J2DPane* pane2  = screen->search(panetags[i][2][j]);
			TScaleUpCounter* counter
			    = setScaleUpCounter2(mListScreen->mScreenObj, panetags[i][0][j], panetags[i][1][j], &icon->mParentIndex, 3, mArchive);
			icon->init(counter, pane1, pane2);
			if (mCanComplete) {
				J2DPictureEx* pic = new J2DPictureEx('test', *screen->search(panetags[i][0][j])->getBounds(), "w08_48_gra.bti", 0x1100000);
				P2ASSERTLINE(1129, pic);
				mIndexPaneList[i]->mIconInfos[j]->mPic = pic;
				screen->search(tags[i])->appendChild(pic);
				screen->search(tags[i])->appendChild(screen->search(panetags[i][3][j]));
				pic->setBasePosition(J2DPOS_Center);
			}
		}
		J2DPane* pane = mIndexPaneList[i]->mPane;
		int test      = i * mRowSize;
		if (mIsPreDebt) {
			test = idk;
		}

		if (mDoEnableBigIcon && i > 0) {
			int id    = mIndexPaneList[i]->getListIndex();
			bool test = true;
			switch (mIndexPaneList[i - 1]->mSizeType) {
			case 1:
				test = id + 1;
				break;
			case 2:
				test = id;
				break;
			case 0:
				test = idk;
				if (idk != _234) {
					test = idk + mRowSize;
				}
				break;
			case 3:
				test                             = false;
				mIndexPaneList[i - 1]->mSizeType = 1;
			}
			if (test) {
				if (mIsPreDebt) {
					if (test < mMaxSelectZukan && mIsBigIconList[mViewablePanelIDList[test]]) {
						mIndexPaneList[i]->mSizeType = 2;
					}
				} else {
					if (mIsBigIconList[test]) {
						mIndexPaneList[i]->mSizeType = 2;
					}
				}
			}
		}

		if (mIsPreDebt) {
			if (flag) {
				setShortenIndex(i, -1, true);
			} else {
				getUpdateIndex(test, true);
				setShortenIndex(i, idk, true);
				if (!test && idk) {
					flag = true;
				}
				idk = test;
				if (mMaxPane < 3) {
					flag = true;
				}
			}
		} else {
			setShortenIndex(i, test, true);
		}
		if (idk > -1 && _B0) {
			pane->setMsgID(getNameID(idk));
		}
	}
	_243 = false;
	/*
	stwu     r1, -0x610(r1)
	mflr     r0
	li       r6, 0xe
	stw      r0, 0x614(r1)
	li       r0, 0
	addi     r5, r1, 0x14
	stmw     r16, 0x5d0(r1)
	mr       r23, r3
	mr       r24, r4
	stw      r0, 0x90(r3)
	li       r0, 4
	lis      r3, lbl_80492520@ha
	stw      r0, 0x94(r23)
	addi     r22, r3, lbl_80492520@l
	li       r0, 6
	lha      r3, 0x8e(r23)
	addi     r4, r22, 0x63c
	addi     r3, r3, -1
	stw      r3, 0x98(r23)
	sth      r6, 0x8e(r23)
	stw      r0, 0x94(r23)
	lha      r3, 0x8e(r23)
	addi     r0, r3, -1
	stw      r0, 0x98(r23)
	mtctr    r6

lbl_80376694:
	lwz      r3, 4(r4)
	lwzu     r0, 8(r4)
	stw      r3, 4(r5)
	stwu     r0, 8(r5)
	bdnz     lbl_80376694
	mr       r3, r24
	lwz      r4, 0x90(r23)
	lwz      r12, 0(r24)
	addi     r0, r1, 0x18
	slwi     r4, r4, 3
	lwz      r12, 0x3c(r12)
	add      r6, r0, r4
	lwz      r5, 0(r6)
	lwz      r6, 4(r6)
	mtctr    r12
	bctrl
	or.      r17, r3, r3
	bne      lbl_803766F0
	addi     r3, r22, 0xc
	addi     r5, r22, 0x18
	li       r4, 0xa5a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803766F0:
	lfs      f0, 0xd8(r17)
	mr       r3, r24
	addi     r0, r1, 0x18
	stfs     f0, 0xa0(r23)
	lwz      r4, 0x98(r23)
	lwz      r12, 0(r24)
	slwi     r4, r4, 3
	add      r6, r0, r4
	lwz      r12, 0x3c(r12)
	lwz      r5, 0(r6)
	lwz      r6, 4(r6)
	mtctr    r12
	bctrl
	or.      r17, r3, r3
	bne      lbl_80376740
	addi     r3, r22, 0xc
	addi     r5, r22, 0x18
	li       r4, 0xa5d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80376740:
	lfs      f0, 0xd8(r17)
	li       r0, 0xa8
	addi     r5, r1, 0x84
	addi     r4, r22, 0x6ac
	stfs     f0, 0xa4(r23)
	mtctr    r0

lbl_80376758:
	lwz      r3, 4(r4)
	lwzu     r0, 8(r4)
	stw      r3, 4(r5)
	stwu     r0, 8(r5)
	bdnz     lbl_80376758
	lbz      r0, 0x240(r23)
	cmplwi   r0, 0
	beq      lbl_80376780
	li       r0, 1
	stb      r0, 0x243(r23)

lbl_80376780:
	lbz      r0, 0x240(r23)
	li       r28, 0
	cmplwi   r0, 0
	beq      lbl_803767A0
	lwz      r0, 0x230(r23)
	cmpwi    r0, 0
	bne      lbl_803767A0
	li       r28, 1

lbl_803767A0:
	lha      r0, 0x8e(r23)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x88(r23)
	mr       r4, r5
	li       r6, 0
	b        lbl_803767D0

lbl_803767C0:
	lwz      r3, 0x88(r23)
	addi     r6, r6, 1
	stwx     r4, r3, r5
	addi     r5, r5, 4

lbl_803767D0:
	lha      r0, 0x8e(r23)
	cmpw     r6, r0
	blt      lbl_803767C0
	addi     r31, r1, 0x18
	addi     r29, r1, 0x88
	li       r27, 0
	li       r26, 0
	li       r30, 0
	b        lbl_80376CD8

lbl_803767F4:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r17, r3, r3
	beq      lbl_80376854
	mr       r3, r24
	lwz      r5, 0(r31)
	lwz      r12, 0(r24)
	lwz      r6, 4(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_8051EB20@sda21(r2)
	stw      r0, 0(r17)
	stw      r3, 4(r17)
	stw      r0, 8(r17)
	stw      r0, 0xc(r17)
	stw      r0, 0x10(r17)
	stfs     f0, 0x18(r17)
	stw      r0, 0x20(r17)
	stw      r23, 0x24(r17)
	lwz      r3, 4(r17)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x1c(r17)

lbl_80376854:
	lwz      r4, 0x88(r23)
	mr       r3, r23
	stwx     r17, r4, r30
	lwz      r12, 0(r23)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x88(r23)
	mr       r5, r3
	li       r4, 3
	lwzx     r3, r6, r30
	bl       createIconInfo__Q28Morimura10TIndexPaneFii
	mr       r19, r29
	li       r25, 0
	li       r20, 0

lbl_80376890:
	lwz      r0, 0x88(r23)
	mr       r3, r24
	lwz      r12, 0(r24)
	lwzx     r5, r30, r0
	lwz      r4, 0xb4(r23)
	lwz      r5, 0x20(r5)
	lwz      r12, 0x3c(r12)
	lwzx     r21, r5, r20
	lwz      r16, 8(r4)
	lwz      r5, 0x48(r19)
	lwz      r6, 0x4c(r19)
	mtctr    r12
	bctrl
	mr       r17, r3
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r5, 0x30(r19)
	lwz      r12, 0x3c(r12)
	lwz      r6, 0x34(r19)
	mtctr    r12
	bctrl
	lwz      r0, 0x78(r23)
	mr       r18, r3
	mr       r3, r16
	addi     r9, r21, 0x18
	stw      r0, 8(r1)
	li       r10, 2
	lwz      r5, 0(r19)
	lwz      r6, 4(r19)
	lwz      r7, 0x18(r19)
	lwz      r8, 0x1c(r19)
	bl setScaleUpCounter2__8MorimuraFPQ29P2DScreen3MgrUxUxPUlUsP10JKRArchive mr
r4, r3 mr       r3, r21 mr       r5, r18 mr       r6, r17 bl
init__Q28Morimura9TIconInfoFPQ28Morimura15TScaleUpCounterP7J2DPaneP7J2DPane lbz
r0, 0x241(r23) cmplwi   r0, 0 beq      lbl_80376A28 li       r3, 0x1a8 bl
__nw__FUl or.      r21, r3, r3 beq      lbl_80376984 mr       r3, r24 lwz r5,
0x48(r19) lwz      r12, 0(r24) lwz      r6, 0x4c(r19) lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	bl       getBounds__7J2DPaneFv
	lis      r4, 0x74657374@ha
	mr       r7, r3
	mr       r3, r21
	addi     r8, r22, 0x458
	addi     r6, r4, 0x74657374@l
	li       r5, 0
	lis      r9, 0x110
	bl       "__ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PCcUl"
	mr       r21, r3

lbl_80376984:
	cmplwi   r21, 0
	bne      lbl_803769A0
	addi     r3, r22, 0xc
	addi     r5, r22, 0x18
	li       r4, 0xa91
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803769A0:
	lwz      r0, 0x88(r23)
	mr       r3, r24
	lwzx     r4, r30, r0
	lwz      r4, 0x20(r4)
	lwzx     r4, r4, r20
	stw      r21, 4(r4)
	lwz      r12, 0(r24)
	lwz      r5, 0(r31)
	lwz      r12, 0x3c(r12)
	lwz      r6, 4(r31)
	mtctr    r12
	bctrl
	mr       r4, r21
	bl       appendChild__7J2DPaneFP7J2DPane
	mr       r3, r24
	lwz      r5, 0x48(r19)
	lwz      r12, 0(r24)
	lwz      r6, 0x4c(r19)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r18, r3
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r5, 0(r31)
	lwz      r12, 0x3c(r12)
	lwz      r6, 4(r31)
	mtctr    r12
	bctrl
	mr       r4, r18
	bl       appendChild__7J2DPaneFP7J2DPane
	mr       r3, r21
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition

lbl_80376A28:
	addi     r25, r25, 1
	addi     r19, r19, 8
	cmpwi    r25, 3
	addi     r20, r20, 4
	blt      lbl_80376890
	lwz      r3, 0x9c(r23)
	li       r0, 0
	lwz      r4, 0x88(r23)
	mullw    r3, r26, r3
	lwzx     r4, r4, r30
	lwz      r19, 4(r4)
	stw      r3, 0x10(r1)
	lwz      r3, 0x88(r23)
	lwzx     r3, r3, r30
	stw      r0, 0xc(r3)
	lbz      r0, 0x240(r23)
	cmplwi   r0, 0
	beq      lbl_80376A74
	stw      r27, 0x10(r1)

lbl_80376A74:
	lbz      r0, 0x8c(r23)
	cmplwi   r0, 0
	beq      lbl_80376B8C
	cmpwi    r26, 0
	ble      lbl_80376B8C
	lwz      r3, 0x88(r23)
	addi     r0, r30, -4
	lwzx     r3, r3, r0
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	stw      r3, 0x10(r1)
	li       r6, 1
	lwz      r0, 0x88(r23)
	add      r5, r0, r30
	lwz      r4, -4(r5)
	lwz      r0, 0xc(r4)
	cmpwi    r0, 1
	beq      lbl_80376AF8
	bge      lbl_80376AC8
	cmpwi    r0, 0
	bge      lbl_80376AD4
	b        lbl_80376B14

lbl_80376AC8:
	cmpwi    r0, 4
	bge      lbl_80376B14
	b        lbl_80376B04

lbl_80376AD4:
	lwz      r0, 0x234(r23)
	cmpw     r27, r0
	bne      lbl_80376AE8
	stw      r27, 0x10(r1)
	b        lbl_80376B14

lbl_80376AE8:
	lwz      r0, 0x9c(r23)
	add      r0, r3, r0
	stw      r0, 0x10(r1)
	b        lbl_80376B14

lbl_80376AF8:
	addi     r0, r3, 1
	stw      r0, 0x10(r1)
	b        lbl_80376B14

lbl_80376B04:
	lwz      r3, 0(r5)
	li       r0, 1
	li       r6, 0
	stw      r0, 0xc(r3)

lbl_80376B14:
	clrlwi.  r0, r6, 0x18
	beq      lbl_80376B8C
	lbz      r0, 0x240(r23)
	cmplwi   r0, 0
	beq      lbl_80376B68
	lwz      r4, 0x10(r1)
	lwz      r0, 0x230(r23)
	cmpw     r4, r0
	bge      lbl_80376B8C
	lwz      r3, 0x22c(r23)
	slwi     r0, r4, 2
	lwz      r4, 0x184(r23)
	lwzx     r0, r3, r0
	lbzx     r0, r4, r0
	cmplwi   r0, 0
	beq      lbl_80376B8C
	lwz      r3, 0x88(r23)
	li       r0, 2
	lwzx     r3, r3, r30
	stw      r0, 0xc(r3)
	b        lbl_80376B8C

lbl_80376B68:
	lwz      r3, 0x184(r23)
	lwz      r0, 0x10(r1)
	lbzx     r0, r3, r0
	cmplwi   r0, 0
	beq      lbl_80376B8C
	lwz      r3, 0x88(r23)
	li       r0, 2
	lwzx     r3, r3, r30
	stw      r0, 0xc(r3)

lbl_80376B8C:
	lbz      r0, 0x240(r23)
	cmplwi   r0, 0
	beq      lbl_80376C74
	clrlwi.  r0, r28, 0x18
	beq      lbl_80376BC4
	mr       r3, r23
	mr       r4, r26
	lwz      r12, 0(r23)
	li       r5, -1
	li       r6, 1
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	b        lbl_80376C4C

lbl_80376BC4:
	mr       r3, r23
	addi     r4, r1, 0x10
	lwz      r12, 0(r23)
	li       r5, 1
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	mr       r4, r26
	lwz      r12, 0(r23)
	mr       r5, r27
	li       r6, 1
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x234(r23)
	cmpw     r27, r3
	bge      lbl_80376C20
	addi     r0, r27, 3
	cmpw     r0, r3
	ble      lbl_80376C20
	stw      r3, 0x10(r1)
	mr       r27, r3

lbl_80376C20:
	lwz      r3, 0x10(r1)
	cmpwi    r3, 0
	bne      lbl_80376C38
	cmpwi    r27, 0
	beq      lbl_80376C38
	li       r28, 1

lbl_80376C38:
	lwz      r0, 0x238(r23)
	cmpwi    r0, 3
	bge      lbl_80376C48
	li       r28, 1

lbl_80376C48:
	mr       r27, r3

lbl_80376C4C:
	lwz      r3, 0x90(r23)
	addi     r0, r3, 1
	stw      r0, 0x90(r23)
	lwz      r3, 0x90(r23)
	lha      r0, 0x8e(r23)
	cmpw     r3, r0
	blt      lbl_80376C94
	li       r0, 0
	stw      r0, 0x90(r23)
	b        lbl_80376C94

lbl_80376C74:
	mr       r3, r23
	mr       r4, r26
	lwz      r12, 0(r23)
	li       r6, 1
	lwz      r5, 0x10(r1)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl

lbl_80376C94:
	lwz      r4, 0x10(r1)
	cmpwi    r4, 0
	blt      lbl_80376CC8
	lbz      r0, 0xb0(r23)
	cmplwi   r0, 0
	beq      lbl_80376CC8
	lwz      r12, 0(r23)
	mr       r3, r23
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	stw      r4, 0x1c(r19)
	stw      r3, 0x18(r19)

lbl_80376CC8:
	addi     r31, r31, 8
	addi     r30, r30, 4
	addi     r29, r29, 0x60
	addi     r26, r26, 1

lbl_80376CD8:
	lha      r4, 0x8e(r23)
	cmpw     r26, r4
	blt      lbl_803767F4
	cmpwi    r4, 0
	li       r5, 0
	ble      lbl_80376D2C
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_80376D18
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80376D18

lbl_80376D10:
	addi     r5, r5, 8
	bdnz     lbl_80376D10

lbl_80376D18:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bge      lbl_80376D2C

lbl_80376D28:
	bdnz     lbl_80376D28

lbl_80376D2C:
	li       r0, 0
	stb      r0, 0x243(r23)
	lmw      r16, 0x5d0(r1)
	lwz      r0, 0x614(r1)
	mtlr     r0
	addi     r1, r1, 0x610
	blr
	*/
}

/*
 * --INFO--
 * Address:	80376D48
 * Size:	000970
 */
void TEnemyZukan::getUpdateIndex(int& id, bool flag)
{
	if (flag) {
		if (mIsPreDebt && _243) {
			P2ASSERTLINE(2853, id >= 0);
		}
		int id2 = id;
		if (mIsBigIconList[mViewablePanelIDList[id2]]) {
			int test = mIndexPaneList[_90]->mSizeType;
			switch (test) {
			case 1:
			case 3:
				id = id2 + 1;
			}
		} else {
			id = id2 + mRowSize;
		}
		id2 = getIdMax();
		if (mIsPreDebt) {
			id2 = mMaxSelectZukan;
		}
		if (id2 > id)
			id = 0;
		return;
	}

	if (mMaxSelectZukan <= mMaxSelect * 3) {
		id = mIndexPaneList[_90]->getListIndex();
		return;
	}

	bool flag2                     = false;
	mIndexPaneList[_90]->mSizeType = 0;
	bool flag3                     = id != mIndexPaneList[_90]->getListIndex();
	int count                      = 0;
	for (int i = 0; i < mMaxSelect; i++) {
		if (mIndexPaneList[_90]->getListIndex() == id) {
			count++;
		}
	}

	if (count == 2) {
		flag2 = true;
		id++;
	} else {
		TIndexPane* pane = mIndexPaneList[_90];
		switch (pane->mSizeType) {
		case 2:
			if (flag3) {
				mIndexPaneList[_90]->mSizeType = 1;
			} else {
				JUT_PANICLINE(2921, nullptr);
			}
			break;
		case 0:
			int id2 = _234;
			if (id2 < 0) {
				id += mRowSize;
			} else if (count < 2) {
				count = id + mRowSize;
				if (id < pane->mSizeType && pane->mSizeType < count) {
					id = pane->mSizeType;
				} else {
					id = count;
				}
			} else if (flag3 || mIsBigIconList[mViewablePanelIDList[id]]) {
				id += mRowSize;
			} else {
				id++;
			}
			break;
		case 1:
			if (flag3) {
				pane->mSizeType = 2;
				if (mIsPreDebt) {
					mIndexPaneList[_90]->setIndex(id);
				} else {
					setShortenIndex(_90, id, flag);
				}
			} else {
				flag2 = true;
				id++;
			}
			mIndexPaneList[_90]->mSizeType = 1;
		}
	}

	int idmax = getIdMax();
	if (mIsPreDebt) {
		idmax = mMaxSelectZukan;
	}
	if (flag2) {
		int test = id;
		if (test < idmax && test >= 0) {
			if (mIsPreDebt) {
				test = mViewablePanelIDList[test];
			}
			if (mIsBigIconList[test]) {
				mIndexPaneList[_90]->mSizeType = 2;
			}
		}
	}
	if (id > idmax) {
		id = idmax;
	}
	mIndexPaneList[_90]->setIndex(id);

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	clrlwi.  r0, r5, 0x18
	stmw     r24, 0x10(r1)
	mr       r29, r5
	mr       r27, r3
	mr       r28, r4
	beq      lbl_80377164
	lbz      r0, 0x240(r27)
	cmplwi   r0, 0
	beq      lbl_80376E4C
	lbz      r0, 0x243(r27)
	cmplwi   r0, 0
	beq      lbl_80376E4C
	lwz      r0, 0(r28)
	cmpwi    r0, 0
	bge      lbl_80376DAC
	lis      r3, lbl_8049252C@ha
	lis      r5, lbl_80492538@ha
	addi     r3, r3, lbl_8049252C@l
	li       r4, 0xb25
	addi     r5, r5, lbl_80492538@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80376DAC:
	lwz      r4, 0(r28)
	lwz      r3, 0x22c(r27)
	slwi     r0, r4, 2
	lwz      r5, 0x184(r27)
	lwzx     r0, r3, r0
	lbzx     r0, r5, r0
	cmplwi   r0, 0
	beq      lbl_80376E04
	lwz      r0, 0x90(r27)
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	cmpwi    r0, 2
	beq      lbl_80376E10
	bge      lbl_80376E10
	cmpwi    r0, 1
	bge      lbl_80376DF8
	b        lbl_80376E10

lbl_80376DF8:
	addi     r0, r4, 1
	stw      r0, 0(r28)
	b        lbl_80376E10

lbl_80376E04:
	lwz      r0, 0x9c(r27)
	add      r0, r4, r0
	stw      r0, 0(r28)

lbl_80376E10:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x240(r27)
	cmplwi   r0, 0
	beq      lbl_80376E34
	lwz      r3, 0x230(r27)

lbl_80376E34:
	lwz      r0, 0(r28)
	cmpw     r0, r3
	blt      lbl_803776A4
	li       r0, 0
	stw      r0, 0(r28)
	b        lbl_803776A4

lbl_80376E4C:
	lha      r0, 0x8e(r27)
	lwz      r3, 0x238(r27)
	mulli    r0, r0, 3
	cmpw     r3, r0
	bgt      lbl_80376E7C
	lwz      r0, 0x90(r27)
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	stw      r3, 0(r28)
	b        lbl_803776A4

lbl_80376E7C:
	lwz      r0, 0x90(r27)
	li       r4, 0
	lwz      r3, 0x88(r27)
	li       r31, 0
	slwi     r0, r0, 2
	li       r30, 0
	lwzx     r3, r3, r0
	stw      r4, 0xc(r3)
	lwz      r0, 0x98(r27)
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	lwz      r0, 0(r28)
	cmpw     r0, r3
	bne      lbl_80376EC0
	li       r30, 1

lbl_80376EC0:
	li       r25, 0
	li       r24, 0
	li       r26, 0
	b        lbl_80376EF4

lbl_80376ED0:
	lwz      r3, 0x88(r27)
	lwzx     r3, r3, r26
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	lwz      r0, 0(r28)
	cmpw     r0, r3
	bne      lbl_80376EEC
	addi     r25, r25, 1

lbl_80376EEC:
	addi     r26, r26, 4
	addi     r24, r24, 1

lbl_80376EF4:
	lha      r0, 0x8e(r27)
	cmpw     r24, r0
	blt      lbl_80376ED0
	cmpwi    r25, 2
	bne      lbl_80376F1C
	lwz      r3, 0(r28)
	li       r31, 1
	addi     r0, r3, 1
	stw      r0, 0(r28)
	b        lbl_803770B8

lbl_80376F1C:
	lwz      r0, 0x98(r27)
	lwz      r5, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r3, r5, r0
	lwz      r0, 0xc(r3)
	cmpwi    r0, 2
	beq      lbl_80376F58
	bge      lbl_80376F4C
	cmpwi    r0, 0
	beq      lbl_8037701C
	bge      lbl_80376F94
	b        lbl_803770B8

lbl_80376F4C:
	cmpwi    r0, 4
	bge      lbl_803770B8
	b        lbl_80376F94

lbl_80376F58:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80376F78
	lwz      r0, 0x90(r27)
	li       r4, 1
	slwi     r0, r0, 2
	lwzx     r3, r5, r0
	stw      r4, 0xc(r3)
	b        lbl_803770B8

lbl_80376F78:
	lis      r3, lbl_8049252C@ha
	li       r4, 0xb69
	addi     r3, r3, lbl_8049252C@l
	li       r5, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_803770B8

lbl_80376F94:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80377008
	li       r0, 2
	stw      r0, 0xc(r3)
	lbz      r0, 0x240(r27)
	cmplwi   r0, 0
	beq      lbl_80376FD4
	mr       r3, r27
	mr       r6, r29
	lwz      r12, 0(r27)
	lwz      r4, 0x98(r27)
	lwz      r12, 0x94(r12)
	lwz      r5, 0(r28)
	mtctr    r12
	bctrl
	b        lbl_80376FEC

lbl_80376FD4:
	lwz      r0, 0x98(r27)
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwz      r4, 0(r28)
	lwzx     r3, r3, r0
	bl       setIndex__Q28Morimura10TIndexPaneFi

lbl_80376FEC:
	lwz      r0, 0x90(r27)
	li       r4, 1
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	stw      r4, 0xc(r3)
	b        lbl_803770B8

lbl_80377008:
	lwz      r3, 0(r28)
	li       r31, 1
	addi     r0, r3, 1
	stw      r0, 0(r28)
	b        lbl_803770B8

lbl_8037701C:
	lwz      r3, 0x234(r27)
	cmpwi    r3, 0
	blt      lbl_803770A4
	cmpwi    r25, 2
	bge      lbl_8037705C
	lwz      r4, 0(r28)
	lwz      r0, 0x9c(r27)
	cmpw     r4, r3
	add      r0, r4, r0
	bge      lbl_80377054
	cmpw     r0, r3
	ble      lbl_80377054
	stw      r3, 0(r28)
	b        lbl_803770B4

lbl_80377054:
	stw      r0, 0(r28)
	b        lbl_803770B4

lbl_8037705C:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80377090
	lwz      r3, 0(r28)
	lwz      r4, 0x22c(r27)
	slwi     r0, r3, 2
	lwz      r5, 0x184(r27)
	lwzx     r0, r4, r0
	lbzx     r0, r5, r0
	cmplwi   r0, 0
	beq      lbl_80377090
	addi     r0, r3, 1
	stw      r0, 0(r28)
	b        lbl_803770B4

lbl_80377090:
	lwz      r3, 0(r28)
	lwz      r0, 0x9c(r27)
	add      r0, r3, r0
	stw      r0, 0(r28)
	b        lbl_803770B4

lbl_803770A4:
	lwz      r3, 0(r28)
	lwz      r0, 0x9c(r27)
	add      r0, r3, r0
	stw      r0, 0(r28)

lbl_803770B4:
	li       r31, 1

lbl_803770B8:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lbz      r4, 0x240(r27)
	cmplwi   r4, 0
	beq      lbl_803770DC
	lwz      r3, 0x230(r27)

lbl_803770DC:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80377134
	lwz      r0, 0(r28)
	cmpw     r0, r3
	bge      lbl_80377134
	cmpwi    r0, 0
	blt      lbl_80377134
	cmplwi   r4, 0
	beq      lbl_8037710C
	lwz      r4, 0x22c(r27)
	slwi     r0, r0, 2
	lwzx     r0, r4, r0

lbl_8037710C:
	lwz      r4, 0x184(r27)
	lbzx     r0, r4, r0
	cmplwi   r0, 0
	beq      lbl_80377134
	lwz      r0, 0x90(r27)
	li       r5, 2
	lwz      r4, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	stw      r5, 0xc(r4)

lbl_80377134:
	lwz      r0, 0(r28)
	cmpw     r0, r3
	blt      lbl_80377148
	li       r0, 0
	stw      r0, 0(r28)

lbl_80377148:
	lwz      r0, 0x90(r27)
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwz      r4, 0(r28)
	lwzx     r3, r3, r0
	bl       setIndex__Q28Morimura10TIndexPaneFi
	b        lbl_803776A4

lbl_80377164:
	lbz      r0, 0x240(r27)
	cmplwi   r0, 0
	beq      lbl_803771AC
	lbz      r0, 0x243(r27)
	cmplwi   r0, 0
	bne      lbl_803771AC
	lha      r0, 0x8e(r27)
	lwz      r3, 0x238(r27)
	mulli    r0, r0, 3
	cmpw     r3, r0
	bgt      lbl_803771AC
	lwz      r0, 0x98(r27)
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	stw      r3, 0(r28)
	b        lbl_803776A4

lbl_803771AC:
	lwz      r4, 0x98(r27)
	addic.   r24, r4, -1
	bge      lbl_803771C0
	lha      r3, 0x8e(r27)
	addi     r24, r3, -1

lbl_803771C0:
	lwz      r5, 0x88(r27)
	slwi     r31, r24, 2
	lwzx     r3, r5, r31
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_80377264
	slwi     r0, r4, 2
	lwzx     r3, r5, r0
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	lwz      r4, 0x88(r27)
	mr       r30, r3
	lwzx     r3, r4, r31
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	cmpw     r3, r30
	bne      lbl_80377264
	lwz      r3, 0x88(r27)
	li       r0, 2
	lwzx     r3, r3, r31
	stw      r0, 0xc(r3)
	lbz      r0, 0x240(r27)
	cmplwi   r0, 0
	beq      lbl_80377248
	lwz      r3, 0x88(r27)
	lwzx     r3, r3, r31
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	lwz      r12, 0(r27)
	mr       r5, r3
	mr       r3, r27
	mr       r4, r24
	lwz      r12, 0x94(r12)
	mr       r6, r29
	mtctr    r12
	bctrl
	b        lbl_80377264

lbl_80377248:
	lwz      r3, 0x88(r27)
	lwzx     r3, r3, r31
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	lwz      r5, 0x88(r27)
	mr       r4, r3
	lwzx     r3, r5, r31
	bl       setIndex__Q28Morimura10TIndexPaneFi

lbl_80377264:
	lwz      r0, 0x98(r27)
	li       r4, 0
	lwz      r3, 0x88(r27)
	li       r30, 0
	slwi     r0, r0, 2
	li       r31, 0
	lwzx     r3, r3, r0
	stw      r4, 0xc(r3)
	lwz      r0, 0x90(r27)
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	lwz      r0, 0(r28)
	cmpw     r0, r3
	bne      lbl_803772A8
	li       r31, 1

lbl_803772A8:
	li       r24, 0
	li       r25, 0
	li       r26, 0
	b        lbl_803772DC

lbl_803772B8:
	lwz      r3, 0x88(r27)
	lwzx     r3, r3, r26
	bl       getListIndex__Q28Morimura10TIndexPaneFv
	lwz      r0, 0(r28)
	cmpw     r0, r3
	bne      lbl_803772D4
	addi     r24, r24, 1

lbl_803772D4:
	addi     r26, r26, 4
	addi     r25, r25, 1

lbl_803772DC:
	lha      r0, 0x8e(r27)
	cmpw     r25, r0
	blt      lbl_803772B8
	cmpwi    r24, 2
	bne      lbl_803773AC
	lbz      r0, 0x240(r27)
	lwz      r4, 0(r28)
	cmplwi   r0, 0
	addi     r0, r4, -1
	beq      lbl_80377318
	cmpwi    r4, 0
	ble      lbl_80377318
	lwz      r3, 0x22c(r27)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0

lbl_80377318:
	cmpwi    r4, 0
	ble      lbl_80377340
	lwz      r3, 0x184(r27)
	lbzx     r0, r3, r0
	cmplwi   r0, 0
	beq      lbl_80377340
	lwz      r3, 0(r28)
	addi     r0, r3, -1
	stw      r0, 0(r28)
	b        lbl_803773A4

lbl_80377340:
	lwz      r5, 0x234(r27)
	cmpwi    r5, 0
	blt      lbl_80377394
	cmpw     r4, r5
	bne      lbl_80377394
	cmpwi    r5, 3
	bge      lbl_80377364
	mr       r0, r5
	b        lbl_80377388

lbl_80377364:
	lis      r3, 0x55555556@ha
	addi     r0, r3, 0x55555556@l
	mulhw    r3, r0, r5
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf.    r0, r0, r5
	bne      lbl_80377388
	li       r0, 3

lbl_80377388:
	subf     r0, r0, r5
	stw      r0, 0(r28)
	b        lbl_803773A4

lbl_80377394:
	lwz      r3, 0x9c(r27)
	lwz      r0, 0(r28)
	subf     r0, r3, r0
	stw      r0, 0(r28)

lbl_803773A4:
	li       r30, 1
	b        lbl_803775E0

lbl_803773AC:
	lwz      r0, 0x90(r27)
	lwz      r5, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r3, r5, r0
	lwz      r0, 0xc(r3)
	cmpwi    r0, 3
	beq      lbl_803773DC
	bge      lbl_803775E0
	cmpwi    r0, 0
	beq      lbl_803774A0
	bge      lbl_80377418
	b        lbl_803775E0

lbl_803773DC:
	clrlwi.  r0, r31, 0x18
	beq      lbl_803773FC
	lwz      r0, 0x98(r27)
	li       r4, 1
	slwi     r0, r0, 2
	lwzx     r3, r5, r0
	stw      r4, 0xc(r3)
	b        lbl_803775E0

lbl_803773FC:
	lis      r3, lbl_8049252C@ha
	li       r4, 0xbfc
	addi     r3, r3, lbl_8049252C@l
	li       r5, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_803775E0

lbl_80377418:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8037748C
	li       r0, 3
	stw      r0, 0xc(r3)
	lbz      r0, 0x240(r27)
	cmplwi   r0, 0
	beq      lbl_80377458
	mr       r3, r27
	mr       r6, r29
	lwz      r12, 0(r27)
	lwz      r4, 0x90(r27)
	lwz      r12, 0x94(r12)
	lwz      r5, 0(r28)
	mtctr    r12
	bctrl
	b        lbl_80377470

lbl_80377458:
	lwz      r0, 0x90(r27)
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwz      r4, 0(r28)
	lwzx     r3, r3, r0
	bl       setIndex__Q28Morimura10TIndexPaneFi

lbl_80377470:
	lwz      r0, 0x98(r27)
	li       r4, 1
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	stw      r4, 0xc(r3)
	b        lbl_803775E0

lbl_8037748C:
	lwz      r3, 0(r28)
	li       r30, 1
	addi     r0, r3, -1
	stw      r0, 0(r28)
	b        lbl_803775E0

lbl_803774A0:
	lbz      r0, 0x240(r27)
	lwz      r4, 0(r28)
	cmplwi   r0, 0
	addi     r0, r4, -1
	beq      lbl_803774C8
	cmpwi    r4, 0
	ble      lbl_803774C8
	lwz      r3, 0x22c(r27)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0

lbl_803774C8:
	cmpwi    r4, 0
	ble      lbl_803774F0
	lwz      r3, 0x184(r27)
	lbzx     r0, r3, r0
	cmplwi   r0, 0
	beq      lbl_803774F0
	lwz      r3, 0(r28)
	addi     r0, r3, -1
	stw      r0, 0(r28)
	b        lbl_80377554

lbl_803774F0:
	lwz      r5, 0x234(r27)
	cmpwi    r5, 0
	blt      lbl_80377544
	cmpw     r4, r5
	bne      lbl_80377544
	cmpwi    r5, 3
	bge      lbl_80377514
	mr       r0, r5
	b        lbl_80377538

lbl_80377514:
	lis      r3, 0x55555556@ha
	addi     r0, r3, 0x55555556@l
	mulhw    r3, r0, r5
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf.    r0, r0, r5
	bne      lbl_80377538
	li       r0, 3

lbl_80377538:
	subf     r0, r0, r5
	stw      r0, 0(r28)
	b        lbl_80377554

lbl_80377544:
	lwz      r3, 0x9c(r27)
	lwz      r0, 0(r28)
	subf     r0, r3, r0
	stw      r0, 0(r28)

lbl_80377554:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x240(r27)
	addi     r3, r3, -1
	cmplwi   r0, 0
	beq      lbl_803775CC
	lwz      r0, 0x234(r27)
	cmpwi    r0, 0
	blt      lbl_80377590
	lwz      r3, 0x230(r27)
	addi     r3, r3, -1
	b        lbl_803775CC

lbl_80377590:
	lwz      r4, 0x230(r27)
	cmpwi    r4, 3
	bge      lbl_803775A4
	mr       r0, r4
	b        lbl_803775C8

lbl_803775A4:
	lis      r3, 0x55555556@ha
	addi     r0, r3, 0x55555556@l
	mulhw    r3, r0, r4
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf.    r0, r0, r4
	bne      lbl_803775C8
	li       r0, 3

lbl_803775C8:
	subf     r3, r0, r4

lbl_803775CC:
	lwz      r0, 0(r28)
	cmpwi    r0, 0
	bge      lbl_803775DC
	stw      r3, 0(r28)

lbl_803775DC:
	li       r30, 1

lbl_803775E0:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80377640
	lwz      r3, 0(r28)
	cmpwi    r3, 0
	blt      lbl_80377640
	lbz      r0, 0x240(r27)
	mr       r5, r3
	cmplwi   r0, 0
	beq      lbl_80377618
	lwz      r4, 0x22c(r27)
	cmplwi   r4, 0
	beq      lbl_80377618
	slwi     r0, r3, 2
	lwzx     r5, r4, r0

lbl_80377618:
	lwz      r3, 0x184(r27)
	lbzx     r0, r3, r5
	cmplwi   r0, 0
	beq      lbl_80377640
	lwz      r0, 0x98(r27)
	li       r4, 3
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	stw      r4, 0xc(r3)

lbl_80377640:
	lwz      r0, 0(r28)
	cmpwi    r0, 0
	bge      lbl_8037768C
	lbz      r0, 0x240(r27)
	cmplwi   r0, 0
	beq      lbl_8037766C
	lwz      r3, 0x9c(r27)
	lwz      r0, 0x230(r27)
	subf     r0, r3, r0
	stw      r0, 0(r28)
	b        lbl_8037768C

lbl_8037766C:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x9c(r27)
	subf     r0, r0, r3
	stw      r0, 0(r28)

lbl_8037768C:
	lwz      r0, 0x98(r27)
	lwz      r3, 0x88(r27)
	slwi     r0, r0, 2
	lwz      r4, 0(r28)
	lwzx     r3, r3, r0
	bl       setIndex__Q28Morimura10TIndexPaneFi

lbl_803776A4:
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803776B8
 * Size:	000024
 */
u64 TEnemyZukan::getNameID(int id) { return mOffsetMsgNames->getMsgID(id); }

/*
 * --INFO--
 * Address:	803776DC
 * Size:	000024
 */
u64 TEnemyZukan::getXMsgID(int id) { return mOffsetMsg_XDesc->getMsgID(id); }

/*
 * --INFO--
 * Address:	80377700
 * Size:	000024
 */
u64 TEnemyZukan::getYMsgID(int id) { return mOffsetMsg_YDesc->getMsgID(id); }

/*
 * --INFO--
 * Address:	80377724
 * Size:	000050
 */
int TEnemyZukan::getModelIndex(int index)
{
	int i = 0;
	int j = 1;
	while (i < ENEMY_ZUKAN_COUNT) {
		if (index == eIDInfo[i][0]) {
			return eIDInfo[i][j];
		}
		i++;
	}
	return eIDInfo[0][j];
}

/*
 * --INFO--
 * Address:	80377774
 * Size:	000060
 */
void TEnemyZukan::setXWindow()
{
	PSSystem::spSysIF->playSystemSe(PSSE_SY_ZUKAN_SCRIPT_ORIMA, 0);
	mWindow->setWindowColor(mMessageWindowColor[0]);
	mWindow->onIcon(0);
	mWindow->setIconColor(mIconColor1[0], mIconColor2[0]);
}

/*
 * --INFO--
 * Address:	803777D4
 * Size:	000060
 */
void TEnemyZukan::setYWindow()
{
	PSSystem::spSysIF->playSystemSe(PSSE_SY_ZUKAN_SCRIPT_LOUIE, 0);
	mWindow->setWindowColor(mMessageWindowColor[1]);
	mWindow->onIcon(1);
	mWindow->setIconColor(mIconColor1[1], mIconColor2[1]);
}

/*
 * --INFO--
 * Address:	80377834
 * Size:	000034
 */
bool TEnemyZukan::isOpenConfirmWindow() { return static_cast<TDEnemyScene*>(getOwner())->mConfirmEndWindow->mHasDrawn; }

/*
 * --INFO--
 * Address:	80377868
 * Size:	0000FC
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

		int* data = eIDInfo[0];
		for (int i = 0; i < ENEMY_ZUKAN_COUNT; i++) {
			if (eIDInfo[i][0] == index) {
				data = eIDInfo[i];
				break;
			}
		}
		Game::TekiStat::Info* info = Game::playData->mTekiStatMgr.getTekiInfo(data[1]);
		if (info && info->mState.isSet(TEKISTAT_STATE_UPDATED) && !(info->mState.isSet(TEKISTAT_STATE_OUT_OF_DATE))) {
			return true;
		} else {
			return false;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	80377964
 * Size:	0000E4
 */
bool TEnemyZukan::isPanelExist()
{
	int id = mIndexPaneList[mCurrentSelect]->getIndex();
	if (id < 0)
		return false;

	int max = getIdMax();
	if (mIsPreDebt) {
		int max2 = mMaxPane;
		if (max2 < 1) {
			return false;
		}

		int id2 = _234;
		max     = mViewablePanelIDList[max2 - 1];
		if (id2 >= 0 && id < mViewablePanelIDList[id2]) {
			max = mViewablePanelIDList[id2 - 1];
		}
	}

	if (id == max) {
		return false;
	} else {
		return mRightOffset < max;
	}
}

/*
 * --INFO--
 * Address:	80377A48
 * Size:	00004C
 */
void TEnemyZukan::openConfirmWindow()
{
	mMessageBoxBGAlpha = 0;
	static_cast<TDEnemyScene*>(getOwner())->mConfirmEndWindow->start(nullptr);
}

/*
 * --INFO--
 * Address:	80377A94
 * Size:	000134
 */
u32 TEnemyZukan::getPrice(int index)
{
	if (mShowAllObjects || mIsSection) {
		return randFloat() * 1000.0f + 1;
	}

	if (Game::playData) {
		int* data = eIDInfo[0];
		for (int i = 0; i < ENEMY_ZUKAN_COUNT; i++) {
			if (eIDInfo[i][0] == index) {
				data = eIDInfo[i];
				break;
			}
		}
		Game::TekiStat::Info* info = Game::playData->mTekiStatMgr.getTekiInfo(data[1]);
		if (!(info->mState.isSet(TEKISTAT_STATE_UPDATED))) {
			return 0;
		}

		Game::PelletConfigList* list = Game::PelletList::Mgr::getConfigList(Game::PelletList::CARCASS);
		Game::PelletConfig* config   = list->getPelletConfig(Game::EnemyInfoFunc::getEnemyName(data[1], 0xffff));
		if (config) {
			return config->mParams.mMoney.mData;
		}
	}
	return 0;
}

/*
 * --INFO--
 * Address:	80377BC8
 * Size:	0000F8
 */
u32 TEnemyZukan::getDefeatNum(int index)
{
	if (mShowAllObjects || mIsSection) {
		return randFloat() * 100000.0f + 1;
	}

	if (Game::playData) {
		int* data = eIDInfo[0];
		for (int i = 0; i < ENEMY_ZUKAN_COUNT; i++) {
			if (eIDInfo[i][0] == index) {
				data = eIDInfo[i];
				break;
			}
		}
		Game::TekiStat::Info* info = Game::playData->mTekiStatMgr.getTekiInfo(data[1]);
		if (info && info->mState.isSet(TEKISTAT_STATE_UPDATED)) {
			return info->mKilledTekiCount;
		}
		return 0;
	}
	return 0;
}

/*
 * --INFO--
 * Address:	80377CC0
 * Size:	00012C
 */
u32 TEnemyZukan::getKilledNum(int index)
{
	if (mShowAllObjects || mIsSection) {
		return randWeightFloat(100000.0f) + 1.0f;
	}

	if (Game::playData) {
		int* data = eIDInfo[0];
		for (int i = 0; i < ENEMY_ZUKAN_COUNT; i++) {
			if (eIDInfo[i][0] == index) {
				data = eIDInfo[i];
				break;
			}
		}
		Game::TekiStat::Info* info = Game::playData->mTekiStatMgr.getTekiInfo(data[1]);
		if (info && info->mState.isSet(TEKISTAT_STATE_UPDATED)) {
			return info->mKilledPikminCount;
		}
		return 0;
	}
	return randWeightFloat(100000.0f) + 1.0f;
}

/*
 * --INFO--
 * Address:	80377DEC
 * Size:	000054
 */
TDEnemyScene::TDEnemyScene() { mConfirmEndWindow = nullptr; }

/*
 * --INFO--
 * Address:	80377E40
 * Size:	0000DC
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

/*
 * --INFO--
 * Address:	80377F1C
 * Size:	000034
 */
bool TDEnemyScene::doStart(Screen::StartSceneArg* arg)
{
	mObject->start(arg);
	return true;
}

/*
 * --INFO--
 * Address:	80377F50
 * Size:	000028
 */
bool TDEnemyScene::isAppearConfirmWindow()
{
	if (mConfirmEndWindow && mConfirmEndWindow->mHasDrawn) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
bool TItemZukan::isCategoryComplete()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8037809C
 * Size:	000424
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
			if (mController->mButton.mButtonDown & (Controller::PRESS_A | Controller::PRESS_B)) {
				mEfxTimer  = 0;
				mDemoState = ZUKANDEMO_AppearEffect;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				mWindow->windowClose();
			}

			// scroll through message box with analog stick
			f32 z = mController->mMStick.mYPos;
			if (z >= 0.5f || z <= -0.5f) {
				if (z <= -0.5f) {
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
			if (mWindow->mStatus == TZukanWindow::STATE_Inactive) {
				if (mEfxTimer == 0) {
					J2DPane* pane = mYButtonPane;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_WMAP_ZUKAN_NEW, 0);
					for (int i = 0; i < 5; i++) {
						efx2d::Arg arg(30.0f * i + pane->mPositionMtx[0][3], -((pane->getHeight()) * 2.0f - pane->mPositionMtx[1][3]));
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

/*
 * --INFO--
 * Address:	803784C0
 * Size:	0000A8
 */
void TItemZukan::demoSet()
{
	if (mDemoScrollTargetRow != mIndexPaneList[mCurrentSelect]->getIndex()) {
		mIndexGroup->downIndex();
	} else {
		if (mWindow->mStatus == TZukanWindow::STATE_Inactive) {
			mPaneMessageDemo->setMsgID(mOffsetMsgCategoryNames->getMsgID(mSelection));
			mMessageBoxBGAlpha = 0;
			mWindow->windowOpen();
			setYWindow();
			mDemoState = ZUKANDEMO_Reading;
		}
	}
}

/*
 * --INFO--
 * Address:	80378568
 * Size:	00045C
 */
void TItemZukan::setShortenIndex(int paneID, int index, bool flag)
{
	TZukanBase::setShortenIndex(paneID, index, flag);

	TIndexPane* pane = nullptr;
	int id           = 1;
	if (mCanScroll && (bool)_3B4 == 1) {
		if (flag) {
			int id2 = paneID - 1;
			if (id2 > mMaxSelect) {
				id2 = 0;
			}
			pane = mIndexPaneList[id2];
		} else {
			int id2 = paneID + 1;
			id      = 3;
			if (id2 > 0) {
				id2 = mMaxSelect - 1;
			}
			pane = mIndexPaneList[id2];
		}
	}

	bool active = false;
	if (pane) {
		int id2 = -1;
		for (; id != 0; id--) {
			TIconInfo* icon = pane->mIconInfos[id];
			if (icon->mParentIndex) {
				id2 = icon->mCategoryID;
			}
		}
		if (id2 >= 0) {
			if (flag) {
				TIconInfo* icon = mIndexPaneList[paneID]->mIconInfos[0];
				if (id2 == icon->mCategoryID && icon->mParentIndex) {
					active                              = true;
					mCategoryColorID[icon->mCategoryID] = 1 - mCategoryColorID[id2];
				}
				icon = mIndexPaneList[paneID]->mIconInfos[1];
				if (id2 == icon->mCategoryID && icon->mParentIndex) {
					active                              = true;
					mCategoryColorID[icon->mCategoryID] = 1 - mCategoryColorID[id2];
				}
				icon = mIndexPaneList[paneID]->mIconInfos[2];
				if (id2 == icon->mCategoryID && icon->mParentIndex) {
					active                              = true;
					mCategoryColorID[icon->mCategoryID] = 1 - mCategoryColorID[id2];
				}
			} else {
				TIconInfo* icon = mIndexPaneList[paneID]->mIconInfos[2];
				if (id2 == icon->mCategoryID && icon->mParentIndex) {
					active                              = true;
					mCategoryColorID[icon->mCategoryID] = 1 - mCategoryColorID[id2];
				}
				icon = mIndexPaneList[paneID]->mIconInfos[1];
				if (id2 == icon->mCategoryID && icon->mParentIndex) {
					active                              = true;
					mCategoryColorID[icon->mCategoryID] = 1 - mCategoryColorID[id2];
				}
				icon = mIndexPaneList[paneID]->mIconInfos[0];
				if (id2 == icon->mCategoryID && icon->mParentIndex) {
					active                              = true;
					mCategoryColorID[icon->mCategoryID] = 1 - mCategoryColorID[id2];
				}
			}
		}
	}

	if (active) {
		for (int i = 0; i < mMaxSelect; i++) {
			if (mIndexPaneList[i]) {
				for (int j = 0; j < 3; j++) {
					TIconInfo* icon    = mIndexPaneList[i]->mIconInfos[j];
					J2DPictureEx* pane = icon->mPic;
					if (getCategoryColorId(icon->mCategoryID) == 0) {
						pane->setBlackWhite(mCategoryColor0b, mCategoryColor0w);
					} else {
						pane->setBlackWhite(mCategoryColor1b, mCategoryColor1w);
					}
				}
			}
		}
	} else {
		for (int j = 0; j < 3; j++) {
			TIconInfo* icon    = mIndexPaneList[paneID]->mIconInfos[j];
			J2DPictureEx* pane = icon->mPic;
			if (getCategoryColorId(icon->mCategoryID) == 0) {
				pane->setBlackWhite(mCategoryColor0b, mCategoryColor0w);
			} else {
				pane->setBlackWhite(mCategoryColor1b, mCategoryColor1w);
			}
		}
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r26, 0x28(r1)
	mr       r29, r3
	mr       r30, r4
	mr       r31, r6
	bl       setShortenIndex__Q28Morimura10TZukanBaseFiib
	lbz      r0, 0x242(r29)
	li       r7, 0
	li       r4, 1
	cmplwi   r0, 0
	beq      lbl_80378604
	lwz      r0, 0x3b4(r29)
	srwi     r3, r0, 0x1f
	clrlwi   r0, r0, 0x1f
	xor      r0, r0, r3
	subf     r0, r3, r0
	cmpwi    r0, 1
	bne      lbl_80378604
	clrlwi.  r0, r31, 0x18
	beq      lbl_803785E4
	addic.   r5, r30, -1
	li       r4, 3
	bge      lbl_803785D4
	lha      r3, 0x8e(r29)
	addi     r5, r3, -1

lbl_803785D4:
	lwz      r3, 0x88(r29)
	slwi     r0, r5, 2
	lwzx     r7, r3, r0
	b        lbl_80378604

lbl_803785E4:
	lha      r0, 0x8e(r29)
	addi     r5, r30, 1
	cmpw     r5, r0
	blt      lbl_803785F8
	li       r5, 0

lbl_803785F8:
	lwz      r3, 0x88(r29)
	slwi     r0, r5, 2
	lwzx     r7, r3, r0

lbl_80378604:
	cmplwi   r7, 0
	li       r0, 0
	beq      lbl_80378820
	li       r3, -1
	li       r5, 0
	mtctr    r4
	cmpwi    r4, 0
	ble      lbl_80378644

lbl_80378624:
	lwz      r4, 0x20(r7)
	lwzx     r6, r4, r5
	lwz      r4, 0x18(r6)
	cmplwi   r4, 0
	beq      lbl_8037863C
	lwz      r3, 0(r6)

lbl_8037863C:
	addi     r5, r5, 4
	bdnz     lbl_80378624

lbl_80378644:
	cmpwi    r3, 0
	blt      lbl_80378820
	clrlwi.  r4, r31, 0x18
	beq      lbl_8037873C
	lwz      r4, 0x88(r29)
	slwi     r6, r30, 2
	lwzx     r4, r6, r4
	lwz      r4, 0x20(r4)
	lwz      r4, 0(r4)
	lwz      r7, 0(r4)
	cmpw     r3, r7
	beq      lbl_803786A4
	lwz      r4, 0x18(r4)
	cmplwi   r4, 0
	beq      lbl_803786A4
	slwi     r3, r3, 2
	slwi     r4, r7, 2
	addi     r5, r3, 0x340
	mr       r3, r7
	lwzx     r5, r29, r5
	addi     r4, r4, 0x340
	li       r0, 1
	subfic   r5, r5, 1
	stwx     r5, r29, r4

lbl_803786A4:
	lwz      r4, 0x88(r29)
	lwzx     r4, r6, r4
	lwz      r4, 0x20(r4)
	lwz      r4, 4(r4)
	lwz      r7, 0(r4)
	cmpw     r3, r7
	beq      lbl_803786F0
	lwz      r4, 0x18(r4)
	cmplwi   r4, 0
	beq      lbl_803786F0
	slwi     r3, r3, 2
	slwi     r4, r7, 2
	addi     r5, r3, 0x340
	mr       r3, r7
	lwzx     r5, r29, r5
	addi     r4, r4, 0x340
	li       r0, 1
	subfic   r5, r5, 1
	stwx     r5, r29, r4

lbl_803786F0:
	lwz      r4, 0x88(r29)
	lwzx     r4, r6, r4
	lwz      r4, 0x20(r4)
	lwz      r4, 8(r4)
	lwz      r7, 0(r4)
	cmpw     r3, r7
	beq      lbl_80378820
	lwz      r4, 0x18(r4)
	cmplwi   r4, 0
	beq      lbl_80378820
	slwi     r3, r3, 2
	slwi     r4, r7, 2
	addi     r5, r3, 0x340
	li       r0, 1
	lwzx     r5, r29, r5
	addi     r4, r4, 0x340
	subfic   r5, r5, 1
	stwx     r5, r29, r4
	b        lbl_80378820

lbl_8037873C:
	lwz      r4, 0x88(r29)
	slwi     r6, r30, 2
	lwzx     r4, r6, r4
	lwz      r4, 0x20(r4)
	lwz      r4, 8(r4)
	lwz      r7, 0(r4)
	cmpw     r3, r7
	beq      lbl_8037878C
	lwz      r4, 0x18(r4)
	cmplwi   r4, 0
	beq      lbl_8037878C
	slwi     r3, r3, 2
	slwi     r4, r7, 2
	addi     r5, r3, 0x340
	mr       r3, r7
	lwzx     r5, r29, r5
	addi     r4, r4, 0x340
	li       r0, 1
	subfic   r5, r5, 1
	stwx     r5, r29, r4

lbl_8037878C:
	lwz      r4, 0x88(r29)
	lwzx     r4, r6, r4
	lwz      r4, 0x20(r4)
	lwz      r4, 4(r4)
	lwz      r7, 0(r4)
	cmpw     r3, r7
	beq      lbl_803787D8
	lwz      r4, 0x18(r4)
	cmplwi   r4, 0
	beq      lbl_803787D8
	slwi     r3, r3, 2
	slwi     r4, r7, 2
	addi     r5, r3, 0x340
	mr       r3, r7
	lwzx     r5, r29, r5
	addi     r4, r4, 0x340
	li       r0, 1
	subfic   r5, r5, 1
	stwx     r5, r29, r4

lbl_803787D8:
	lwz      r4, 0x88(r29)
	lwzx     r4, r6, r4
	lwz      r4, 0x20(r4)
	lwz      r4, 0(r4)
	lwz      r7, 0(r4)
	cmpw     r3, r7
	beq      lbl_80378820
	lwz      r4, 0x18(r4)
	cmplwi   r4, 0
	beq      lbl_80378820
	slwi     r3, r3, 2
	slwi     r4, r7, 2
	addi     r5, r3, 0x340
	li       r0, 1
	lwzx     r5, r29, r5
	addi     r4, r4, 0x340
	subfic   r5, r5, 1
	stwx     r5, r29, r4

lbl_80378820:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80378904
	li       r28, 0
	li       r31, 0
	b        lbl_803788F4

lbl_80378834:
	lwz      r3, 0x88(r29)
	lwzx     r0, r3, r31
	cmplwi   r0, 0
	beq      lbl_803789B0
	li       r27, 0
	li       r30, 0

lbl_8037884C:
	lwz      r0, 0x88(r29)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwzx     r4, r31, r0
	lwz      r12, 0xb0(r12)
	lwz      r4, 0x20(r4)
	lwzx     r4, r4, r30
	lwz      r26, 4(r4)
	lwz      r4, 0(r4)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_803788B0
	lwz      r5, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
	mr       r3, r26
	lwz      r0, mCategoryColor0b__Q28Morimura10TZukanBase@sda21(r13)
	addi     r4, r1, 0x24
	stw      r5, 0x20(r1)
	addi     r5, r1, 0x20
	stw      r0, 0x24(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x130(r12)
	mtctr    r12
	bctrl
	b        lbl_803788DC

lbl_803788B0:
	lwz      r5, mCategoryColor1w__Q28Morimura10TZukanBase@sda21(r13)
	mr       r3, r26
	lwz      r0, mCategoryColor1b__Q28Morimura10TZukanBase@sda21(r13)
	addi     r4, r1, 0x1c
	stw      r5, 0x18(r1)
	addi     r5, r1, 0x18
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x130(r12)
	mtctr    r12
	bctrl

lbl_803788DC:
	addi     r27, r27, 1
	addi     r30, r30, 4
	cmpwi    r27, 3
	blt      lbl_8037884C
	addi     r31, r31, 4
	addi     r28, r28, 1

lbl_803788F4:
	lha      r0, 0x8e(r29)
	cmpw     r28, r0
	blt      lbl_80378834
	b        lbl_803789B0

lbl_80378904:
	slwi     r31, r30, 2
	li       r26, 0
	li       r30, 0

lbl_80378910:
	lwz      r0, 0x88(r29)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwzx     r4, r31, r0
	lwz      r12, 0xb0(r12)
	lwz      r4, 0x20(r4)
	lwzx     r4, r4, r30
	lwz      r27, 4(r4)
	lwz      r4, 0(r4)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_80378974
	lwz      r5, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
	mr       r3, r27
	lwz      r0, mCategoryColor0b__Q28Morimura10TZukanBase@sda21(r13)
	addi     r4, r1, 0x14
	stw      r5, 0x10(r1)
	addi     r5, r1, 0x10
	stw      r0, 0x14(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x130(r12)
	mtctr    r12
	bctrl
	b        lbl_803789A0

lbl_80378974:
	lwz      r5, mCategoryColor1w__Q28Morimura10TZukanBase@sda21(r13)
	mr       r3, r27
	lwz      r0, mCategoryColor1b__Q28Morimura10TZukanBase@sda21(r13)
	addi     r4, r1, 0xc
	stw      r5, 8(r1)
	addi     r5, r1, 8
	stw      r0, 0xc(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x130(r12)
	mtctr    r12
	bctrl

lbl_803789A0:
	addi     r26, r26, 1
	addi     r30, r30, 4
	cmpwi    r26, 3
	blt      lbl_80378910

lbl_803789B0:
	lmw      r26, 0x28(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803789D4
 * Size:	0002D4
 */
void TItemZukan::doUpdateOut()
{
	TZukanBase::doUpdateOut();
	if (mCanComplete) {
		for (int i = 0; i < mMaxSelect; i++) {
			f32 alpha = (f32)mColorAnmItem->mColor.a / 255.0f;
			if (alpha < 0.0f) {
				alpha = 0.0f;
			}
			if (alpha > 1.0f) {
				alpha = 1.0f;
			}
			f32 alpha2 = alpha;
			if (alpha < 0.1f) {
				alpha2 = 0.1f;
			}
			f32 alpha3 = 1.0f - alpha;
			if (alpha3 < 0.1f) {
				alpha3 = 0.1f;
			}
			alpha2 *= 255.0f;
			alpha3 *= 255.0f;
			for (int j = 0; j < 3; j++) {
				TIconInfo* idpane = mIndexPaneList[i]->mIconInfos[j];
				J2DPane* pane     = idpane->mPic;
				if (mCategoryIsComplete[idpane->mCategoryID]) {
					pane->setAlpha(255.0f * mCategoryAlphaRate);
				} else {
					if (!getCategoryColorId(idpane->mCategoryID)) {
						pane->setAlpha(alpha2 * mCategoryAlphaRate);
					} else {
						pane->setAlpha(alpha3 * mCategoryAlphaRate);
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
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stfd     f26, 0x50(r1)
	psq_st   f26, 88(r1), 0, qr0
	stfd     f25, 0x40(r1)
	psq_st   f25, 72(r1), 0, qr0
	stmw     r25, 0x24(r1)
	mr       r31, r3
	bl       doUpdateOut__Q28Morimura10TZukanBaseFv
	lbz      r0, 0x241(r31)
	cmplwi   r0, 0
	beq      lbl_80378BAC
	lfs      f31, lbl_8051EB38@sda21(r2)
	li       r27, 0
	lfd      f27, lbl_8051EB90@sda21(r2)
	li       r28, 0
	lfs      f28, lbl_8051EB70@sda21(r2)
	lis      r30, 0x4330
	lfs      f29, lbl_8051EB20@sda21(r2)
	lfs      f30, lbl_8051EB24@sda21(r2)
	b        lbl_80378BA0

lbl_80378A54:
	lwz      r3, 0xd8(r31)
	stw      r30, 0x10(r1)
	lwz      r0, 0x20(r3)
	stw      r0, 8(r1)
	lbz      r0, 0xb(r1)
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f27
	fdivs    f0, f0, f28
	fcmpo    cr0, f0, f29
	bge      lbl_80378A84
	fmr      f0, f29

lbl_80378A84:
	fcmpo    cr0, f0, f30
	ble      lbl_80378A90
	fmr      f0, f30

lbl_80378A90:
	fcmpo    cr0, f0, f31
	fsubs    f1, f30, f0
	bge      lbl_80378AA0
	fmr      f0, f31

lbl_80378AA0:
	fcmpo    cr0, f1, f31
	bge      lbl_80378AAC
	fmr      f1, f31

lbl_80378AAC:
	fmuls    f26, f28, f0
	li       r26, 0
	fmuls    f25, f28, f1
	li       r29, 0

lbl_80378ABC:
	lwz      r0, 0x88(r31)
	lwzx     r3, r28, r0
	lwz      r3, 0x20(r3)
	lwzx     r3, r3, r29
	lwz      r4, 0(r3)
	lwz      r25, 4(r3)
	slwi     r3, r4, 2
	addi     r0, r3, 0x278
	lwzx     r0, r31, r0
	cmpwi    r0, 0
	beq      lbl_80378B18
	lfs      f1, lbl_8051EB70@sda21(r2)
	mr       r3, r25
	lfs      f0, mCategoryAlphaRate__Q28Morimura10TZukanBase@sda21(r13)
	lwz      r12, 0(r25)
	fmuls    f0, f1, f0
	lwz      r12, 0x24(r12)
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	mtctr    r12
	bctrl
	b        lbl_80378B88

lbl_80378B18:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_80378B60
	lfs      f0, mCategoryAlphaRate__Q28Morimura10TZukanBase@sda21(r13)
	mr       r3, r25
	lwz      r12, 0(r25)
	fmuls    f0, f26, f0
	lwz      r12, 0x24(r12)
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	mtctr    r12
	bctrl
	b        lbl_80378B88

lbl_80378B60:
	lfs      f0, mCategoryAlphaRate__Q28Morimura10TZukanBase@sda21(r13)
	mr       r3, r25
	lwz      r12, 0(r25)
	fmuls    f0, f25, f0
	lwz      r12, 0x24(r12)
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	mtctr    r12
	bctrl

lbl_80378B88:
	addi     r26, r26, 1
	addi     r29, r29, 4
	cmpwi    r26, 3
	blt      lbl_80378ABC
	addi     r28, r28, 4
	addi     r27, r27, 1

lbl_80378BA0:
	lha      r0, 0x8e(r31)
	cmpw     r27, r0
	blt      lbl_80378A54

lbl_80378BAC:
	lbz      r0, 0x244(r31)
	cmplwi   r0, 0
	beq      lbl_80378C5C
	lwz      r0, 0x3ac(r31)
	cmpwi    r0, 1
	bne      lbl_80378BEC
	lfs      f2, 0x3b8(r31)
	lfs      f1, lbl_8051EB38@sda21(r2)
	lfs      f0, lbl_8051EB20@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x3b8(r31)
	lfs      f1, 0x3b8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80378C28
	stfs     f0, 0x3b8(r31)
	b        lbl_80378C28

lbl_80378BEC:
	lwz      r3, 0x3a8(r31)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_8051EB80@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f2, lbl_8051EB20@sda21(r2)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fcmpu    cr0, f2, f0
	bne      lbl_80378C20
	stfs     f2, 0x3b8(r31)
	b        lbl_80378C28

lbl_80378C20:
	lfs      f0, lbl_8051EB24@sda21(r2)
	stfs     f0, 0x3b8(r31)

lbl_80378C28:
	lfs      f0, 0x3b8(r31)
	lfs      f1, lbl_8051EB70@sda21(r2)
	stfs     f0, 0x1f8(r31)
	lfs      f0, 0x3b8(r31)
	lwz      r3, 0x11c(r31)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	mtctr    r12
	bctrl

lbl_80378C5C:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	psq_l    f26, 88(r1), 0, qr0
	lfd      f26, 0x50(r1)
	psq_l    f25, 72(r1), 0, qr0
	lfd      f25, 0x40(r1)
	lmw      r25, 0x24(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80378CA8
 * Size:	0000C0
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
				int test2 = mMaxPane;
				if (mMaxPane >= 3) {
					test2 = mMaxPane % 3;
					if (!test2) {
						test2 = 3;
					}
				}
				id = mMaxPane - test2;
			}
		}
	} else {
		TScrollList::getUpdateIndex(id, flag);
	}
}

/*
 * --INFO--
 * Address:	80378D68
 * Size:	00003C
 */
u64 TItemZukan::getNameID(int id) { return mOffsetMsgNames->getMsgID(Game::PelletList::Mgr::getOffsetFromDictionaryNo(id)); }

/*
 * --INFO--
 * Address:	80378DA4
 * Size:	00003C
 */
u64 TItemZukan::getXMsgID(int id) { return mOffsetMsg_XDesc->getMsgID(Game::PelletList::Mgr::getOffsetFromDictionaryNo(id)); }

/*
 * --INFO--
 * Address:	80378DE0
 * Size:	00003C
 */
u64 TItemZukan::getYMsgID(int id) { return mOffsetMsg_YDesc->getMsgID(Game::PelletList::Mgr::getOffsetFromDictionaryNo(id)); }

/*
 * --INFO--
 * Address:	80378E1C
 * Size:	000034
 */
int TItemZukan::getModelIndex(int id)
{
	if (id < 0) {
		return -1;
	}
	return Game::PelletList::Mgr::getOffsetFromDictionaryNo(id);
}

/*
 * --INFO--
 * Address:	80378E50
 * Size:	000020
 */
int TItemZukan::getIdMax() { return Game::PelletList::Mgr::getDictionaryNum(); }

/*
 * --INFO--
 * Address:	80378E70
 * Size:	001690
 */
void TItemZukan::doCreate(JKRArchive* arc)
{
	mScrollParm._00 = 10.0f;
	mScrollParm._04 = 1.1f;
	mScrollParm._08 = 0.99f;
	mScrollParm._0C = 1.5f;
	mScrollParm._10 = 2.0f;

	mCategoryColor0b.g = 95;
	mCategoryColor0b.b = 0;               // ???
	mCategoryColor0b.setRGB(230, 230, 0); //???

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
			JUT_PANICLINE(4181, "set DebugHeapParent. mail to morimun.\n");
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
			int test = randFloat() * 150.0f;
			for (int i = 0; i < test; i++) {
				if (i != test) {
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
				if (i != test) {
					mViewablePanelIDList[i] = i;
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
			for (int i = 0; i < getIdMax(); i++) {
				if (isListShow(i)) {
					mViewablePanelIDList[i] = i;
				}
			}
		}
	}

	if (mIsPreDebt && mMaxSelectZukan <= (mMaxSelect - 1) * 3) {
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

		if (mCanComplete && !mIsSection || mIsPreDebt) {
			for (; startID < mCategoryArray[i]; startID++) {
				if ((mMaxPane && mViewablePanelIDList[mMaxPane - 1] > startID)) {
					break;
				}

				if (isListShow(startID)) {
					_3B4++;
					mCategoryColorID[i] = cColorID;
					cColorID            = 1 - cColorID;
					break;
				}
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

	f32 yoffs       = mIndexPaneList[0]->mPane->mOffset.y - mIndexPaneList[1]->mPane->mOffset.y;
	mMaxSelectZukan = mMaxPane;

	if (!mIsPreDebt) {
		mMaxSelectZukan = getIdMax();
	}

	f32 xoffs = 0.0f;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < mMaxSelect; j++) {
			TIndexPane* idpane = mIndexPaneList[j];
			J2DPane* pane      = idpane->mPane;
			pane->mOffset.y    = idpane->_1C + yoffs;
			pane->calcMtx();
			mIndexPaneList[j]->_1C = mIndexPaneList[j]->mPane->mOffset.y;
		}
		updateIndex(false);
		TIndexGroup* grp = mIndexGroup;
		grp->_14         = xoffs;
		grp->mStateID    = 0;
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
		int backupindex = index;
		int max2        = mMaxSelectZukan;
		if (mIsPreDebt) {
			for (int i = 0; i < mMaxSelectZukan; i++) {
				backupindex = i;
				if (index != mViewablePanelIDList[i])
					break;
				max2--;
				backupindex = index;
			}
		}
		mRightOffset = backupindex % 3;

		if (backupindex > 3) {
			for (int i = 0; i < backupindex / 3; i++) {
				for (int j = 0; j < mMaxSelect; j++) {
					TIndexPane* idpane = mIndexPaneList[j];
					J2DPane* pane      = idpane->mPane;
					pane->mOffset.y    = idpane->_1C - yoffs;
					pane->calcMtx();
					mIndexPaneList[j]->_1C = mIndexPaneList[j]->mPane->mOffset.y;
				}
				updateIndex(true);
				TIndexGroup* grp = mIndexGroup;
				grp->_14         = xoffs;
				grp->mStateID    = 0;
				changePaneInfo();
			}
		} else {
			changePaneInfo();
		}
	}

	mCurrIndex = mIndexPaneList[mCurrentSelect]->getIndex();
	if (mCurrIndex >= 0) {
		J2DPane* pane = mPaneMessageDemo;
		u64 tag       = getXMsgID(mCurrIndex);
		pane->setMsgID(tag);
	}

	backup->becomeCurrentHeap();
}

/*
 * --INFO--
 * Address:	8037A500
 * Size:	0007B4
 */
void TItemZukan::doDemoDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;

	u8 alpha = mDemoStateButtonAlpha * 255.0f;
	gfx.mOrthoGraph.setPort();

	J2DPicture* pane = static_cast<J2DPicture*>(mMainScreen->mScreenObj->search('Pzbtn3'));
	pane->setAlpha(alpha);
	pane->draw(pane->getGlbVtx(0).x, pane->getGlbVtx(1).y, pane->getWidth(), pane->getHeight(), false, false, false);
	pane->calcMtx();
	pane->setAlpha(255);

	pane = static_cast<J2DPicture*>(mMainScreen->mScreenObj->search('Pzbtn2'));
	pane->setAlpha(alpha);
	pane->draw(pane->getGlbVtx(0).x, pane->getGlbVtx(1).y, pane->getWidth(), pane->getHeight(), false, false, false);
	pane->calcMtx();
	pane->setAlpha(255);

	graf->setPort();

	mPaneMenu->setAlpha(alpha);
	mMessageItemName->draw(gfx, *graf);
	mPaneMenu->setAlpha(255);
	gfx.mOrthoGraph.setPort();

	GXSetScissor(mPanelListBounds.i.x, mPanelListBounds.i.y, mPanelListBounds.f.x - mPanelListBounds.i.x,
	             mPanelListBounds.f.y - mPanelListBounds.i.y);

	for (int i = 0; i < mMaxSelect; i++) {
		for (int j = 0; j < 3; j++) {
			TIconInfo* icon = mIndexPaneList[i]->mIconInfos[j];
			if (mSelection == icon->mCategoryID && icon->mPane->isVisible()) {
				int alpha          = mMessageBoxBGAlpha * mCategoryAlphaRate;
				J2DPictureEx* pane = icon->mPic;
				u8 oldalpha        = pane->mAlpha;
				pane->setAlpha(alpha);
				pane->draw(pane->getGlbVtx(0).x + 8.0f, pane->getGlbVtx(1).y + 2.5f, pane->getWidth(), pane->getHeight(), false, false,
				           false);
				pane->calcMtx();
				pane->setAlpha(oldalpha);

				pane     = static_cast<J2DPictureEx*>(mIndexPaneList[i]->mIconInfos[j]->mPane);
				oldalpha = pane->mAlpha;
				pane->setAlpha(mMessageBoxBGAlpha);
				pane->draw(pane->getGlbVtx(0).x, pane->getGlbVtx(1).y, pane->getWidth(), pane->getHeight(), false, false, false);
				pane->calcMtx();
				pane->setAlpha(oldalpha);

				pane     = static_cast<J2DPictureEx*>(mIndexPaneList[i]->mIconInfos[j]->mPane2);
				oldalpha = pane->mAlpha;
				pane->setAlpha(mMessageBoxBGAlpha);
				pane->draw(pane->getGlbVtx(0).x, pane->getGlbVtx(1).y, pane->getWidth(), pane->getHeight(), false, false, false);
				pane->calcMtx();
				pane->setAlpha(oldalpha);
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
		mPaneNew1->setBlack(color);
		mIconScreen->draw(gfx, *graf);

		for (int i = 0; i < mMaxSelect; i++) {
			if (mIndexPaneList[i]->mPane->isVisible()) {
				for (int j = 0; j < 3; j++) {
					TIconInfo* icon = mIndexPaneList[i]->mIconInfos[j];
					if (mSelection == icon->mCategoryID && icon->mParentIndex) {
						mPaneNew1->mGlobalMtx[0][3] = mNewOffset.x + mIndexPaneList[i]->mIconInfos[j]->mPane->mOffset.x;
						mPaneNew1->mGlobalMtx[1][3] = mNewOffset.y + mIndexPaneList[i]->mIconInfos[j]->mPane->mOffset.y;
						mMessageNew->draw(gfx, *graf);
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

/*
 * --INFO--
 * Address:	8037ACB4
 * Size:	000170
 */
void TItemZukan::setDetail()
{
	int id = mIndexPaneList[mCurrentSelect]->getIndex();
	if (id < 0) {
		mIsCurrentSelUnlocked = false;
		mValueCounter->setBlind(true);
		mWeightCounter->setBlind(true);
	} else {
		mInfoVal1 = getPrice(id);
		if (mInfoVal1 >= 10000)
			JUT_PANICLINE(4726, "price (%d) = %d\n", id, mInfoVal1);

		mInfoVal2 = getWeight(id);
		if (mInfoVal2 >= 10000)
			JUT_PANICLINE(4728, "weight (%d) = %d\n", id, mInfoVal2);

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

/*
 * --INFO--
 * Address:	8037AE24
 * Size:	000090
 */
bool TItemZukan::isComplete()
{
	if (mCanComplete) {
		int id = mIndexPaneList[mCurrentSelect]->mIconInfos[mRightOffset]->mCategoryID;
		if (id < 0)
			return false;

		if (mCategoryIsComplete[id]) {
			if (mIsInDemo) {
				if (mWindow->mStatus == TZukanWindow::STATE_Active)
					return true;
			} else
				return true;
		}
		return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	8037AEB4
 * Size:	000080
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

/*
 * --INFO--
 * Address:	8037AF34
 * Size:	00006C
 */
void TItemZukan::setXWindow()
{
	mWindow->mCharacterIconXOffset = 0.0f;
	PSSystem::spSysIF->playSystemSe(PSSE_SY_ZUKAN_SCRIPT_ORIMA, 0);
	mWindow->setWindowColor(mOrimaMesgWindowColor);
	mWindow->onIcon(mCurrCharacterIconID);
	mWindow->setIconColor(mOrimaMesgIconColor1, mOrimaMesgIconColor2);
}

/*
 * --INFO--
 * Address:	8037AFA0
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	8037B048
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	8037B108
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	8037B1D0
 * Size:	000098
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

/*
 * --INFO--
 * Address:	8037B268
 * Size:	0000C4
 */
bool TItemZukan::isPanelExist()
{
	int id = mIndexPaneList[mCurrentSelect]->getIndex();
	if (id < 0) {
		return false;
	}

	int max = getIdMax();
	if (mIsPreDebt) {
		if (mMaxPane < 1)
			return false;
		max = mViewablePanelIDList[max - 1];
	}

	if (id == max) {
		return false;
	} else {
		return max == id + mRightOffset;
	}
}

/*
 * --INFO--
 * Address:	8037B32C
 * Size:	000034
 */
bool TItemZukan::isOpenConfirmWindow() { return static_cast<TDItemScene*>(getOwner())->mConfirmEndWindow->mHasDrawn; }

/*
 * --INFO--
 * Address:	8037B360
 * Size:	00004C
 */
void TItemZukan::openConfirmWindow()
{
	mMessageBoxBGAlpha = 0;
	static_cast<TDItemScene*>(getOwner())->mConfirmEndWindow->start(nullptr);
}

/*
 * --INFO--
 * Address:	8037B3AC
 * Size:	000054
 */
TDItemScene::TDItemScene() { mConfirmEndWindow = nullptr; }

/*
 * --INFO--
 * Address:	8037B400
 * Size:	0001C8
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

/*
 * --INFO--
 * Address:	8037B5C8
 * Size:	000034
 */
bool TDItemScene::doStart(Screen::StartSceneArg* arg)
{
	mObject->start(arg);
	return true;
}

/*
 * --INFO--
 * Address:	8037B5FC
 * Size:	000028
 */
bool TDItemScene::isAppearConfirmWindow()
{
	if (mConfirmEndWindow && mConfirmEndWindow->mHasDrawn) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8037B624
 * Size:	000080
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

/*
 * --INFO--
 * Address:	8037B6A4
 * Size:	000070
 */
void TCallbackScrollMsg::doInit()
{
	P2ASSERTLINE(5025, mPane->getTypeID() == PANETYPE_TextBox);
	mControl->setTextBoxInfo(static_cast<J2DTextBox*>(mPane));
}

/*
 * --INFO--
 * Address:	8037B714
 * Size:	000038
 */
void TCallbackScrollMsg::update() { mControl->update(nullptr, nullptr); }

/*
 * --INFO--
 * Address:	8037B74C
 * Size:	0000C8
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
		proc->_C8              = space;
		proc->mSpeed           = TZukanBase::mWarpRadius;
		mControl->_6C          = TZukanBase::mScrollValueCoe;
		mControl->mScrollSpeed = TZukanBase::mScrollSpeedCoe;
	}
}

/*
 * --INFO--
 * Address:	8037B814
 * Size:	000034
 */
void TCallbackScrollMsg::scroll(f32 speed)
{
	mScrollTimer += 5.0f;
	mControl->scroll(speed);
}

/*
 * --INFO--
 * Address:	8037B848
 * Size:	000048
 */
void TCallbackScrollMsg::draw(Graphics& gfx, J2DGrafContext& graf)
{
	if (mPane->isVisible()) {
		mControl->draw(nullptr, graf.mPosMtx);
	}
}

/*
 * --INFO--
 * Address:	8037B890
 * Size:	000024
 */
f32 TCallbackScrollMsg::getPosRate() { return mControl->getScrollPosition(); }

/*
 * --INFO--
 * Address:	8037B8B4
 * Size:	000080
 */
TZukanWindow::TZukanWindow(JKRArchive* arc, int anims)
    : TScreenBase(arc, anims)
{
	_18                   = 0;
	mCharacterIconXOffset = 0.0f;
	mStatus               = STATE_Inactive;
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

/*
 * --INFO--
 * Address:	8037B934
 * Size:	000538
 */
void TZukanWindow::create(char const* filename, u32 flag)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(filename, flag, mArchive);

	mScissor = new TCallbackScissor;
	mScissor->setDefaultBounds();
	mScreenObj->addCallBack('mg_demo', mScissor);

	mPaneWinCap = mScreenObj->search('Wwincap');
	P2ASSERTLINE(5177, mPaneWinCap);

	mMsgCallback = new TCallbackScrollMsg;
	mScreenObj->addCallBack('mg_demo', mMsgCallback);

	TCallbackScissor* scissor = new TCallbackScissor;
	scissor->setDefaultBounds();
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

/*
 * --INFO--
 * Address:	8037BE6C
 * Size:	000390
 */
void TZukanWindow::update()
{
	switch (mStatus) {
	case STATE_Inactive:
		return;
	case STATE_Appear:
		if (mAnimScreens[0]->mCurrentFrame == 0.0f) {
			mScaleMgr->up(0.5f, 30.0f, 0.6f, 0.0f);
		}
		if (mAnimScreens[0]->mCurrentFrame > 12.0f) {
			mStatus = 2;
		}
		break;
	case STATE_Active:
		if (mAnimScreens[0]->mCurrentFrame > 12.0f) {
			mAnimScreens[0]->mCurrentFrame = 12.0f;
		}
		break;
	case STATE_Exit:
		if (mAnimScreens[0]->mCurrentFrame < 1.0f) {
			mStatus = STATE_Inactive;
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
		f32 scale2 = mAnimScreens[1]->mCurrentFrame * 2.0f / 12.0f;
		if (scale2 > 1.0f) {
			scale2 = 1.0f;
		}
		mPaneIcon->updateScale(scale2 * scale);
		mIconYHeightSin += 0.3f;
		if (mIconYHeightSin > TAU) {
			mIconYHeightSin -= TAU;
		}
		f32 y = mScrollPosition;
		if (TZukanBase::mIconMove) {
			mPaneIcon->setOffset(mCharacterIconXOffset + mPaneIcon->mOffset.x,
			                     ((15.0f - FABS(y)) / 15.0f) * sinf(mIconYHeightSin) + mScrollPosition + mPaneIcon->mOffset.y);
		}
	}
	Vector3f pos1             = mPaneWinCap->getGlbVtx(0);
	Vector3f pos2             = mPaneWinCap->getGlbVtx(3);
	TCallbackScissor* scissor = mScissor;
	scissor->mBounds.set(pos1.x + 10.0f, pos1.y + 5.0f, pos2.x - 10.0f, pos2.y - 10.0f);
}

/*
 * --INFO--
 * Address:	8037C1FC
 * Size:	00002C
 */
void TZukanWindow::draw(Graphics& gfx, J2DPerspGraph* graf)
{
	if (mStatus != STATE_Inactive) {
		TScreenBase::draw(gfx, graf);
	}
}

/*
 * --INFO--
 * Address:	8037C228
 * Size:	0000F0
 */
void TZukanWindow::windowOpen()
{
	mAnimScreens[0]->mCurrentFrame = 0.0f;
	mAnimScreens[0]->mSpeed        = 0.5f;
	mStatus                        = STATE_Appear;
	mMsgCallback->reset();
}

/*
 * --INFO--
 * Address:	8037C318
 * Size:	000030
 */
void TZukanWindow::windowClose()
{
	if (mStatus == STATE_Active || mStatus == STATE_Appear) {
		mAnimScreens[0]->mSpeed = -0.5f; // set animation speed to negative to close box
	}
	mStatus = STATE_Exit;
}

/*
 * --INFO--
 * Address:	8037C348
 * Size:	000038
 */
void TZukanWindow::msgScroll(f32 scroll) { mMsgCallback->scroll(scroll); }

/*
 * --INFO--
 * Address:	8037C380
 * Size:	000030
 * Retuns a ratio of how far through the message box you are
 */
f32 TZukanWindow::getPosRate() { return 1.0f - mMsgCallback->mControl->getScrollPosition(); }

/*
 * --INFO--
 * Address:	8037C3B0
 * Size:	00006C
 */
void TZukanWindow::setWindowColor(J2DGXColorS10& color)
{
	static_cast<J2DPictureEx*>(mPaneWinMap)->getMaterial()->mTevBlock->setTevColor(1, color);
}

/*
 * --INFO--
 * Address:	8037C41C
 * Size:	0000F0
 */
void TZukanWindow::setIconColor(J2DGXColorS10& color1, J2DGXColorS10& color2)
{
	static_cast<J2DPictureEx*>(mPaneIconLight)->getMaterial()->mTevBlock->setTevColor(0, color1);
	static_cast<J2DPictureEx*>(mPaneIconLight)->getMaterial()->mTevBlock->setTevColor(1, color2);

	J2DMaterial* mat        = static_cast<J2DPictureEx*>(mPaneIconLight)->getMaterial();
	mat->mMaterialAlphaCalc = 1;
}

/*
 * --INFO--
 * Address:	8037C50C
 * Size:	00008C
 */
void TZukanWindow::onIcon(int id)
{
	P2ASSERTLINE(5415, id < 2);
	if (mCharacterIcon[id]) {
		mCharacterIcon[id]->show();
		mCharacterIcon[1 - id]->hide();
	}
}

/*
 * --INFO--
 * Address:	8037C598
 * Size:	0000D4
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

/*
 * --INFO--
 * Address:	8037C66C
 * Size:	000040
 */
void TZukanWindow::changeIconTexture(int id, ResTIMG* file) { mCharacterIcon[id]->changeTexture(file, 0); }

TZukanBase::StaticValues TZukanBase::mScrollParm;

} // namespace Morimura
