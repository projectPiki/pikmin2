#include "Morimura/challengeSelect2d.h"
#include "Dolphin/rand.h"
#include "Game/gameChallenge2D.h"
#include "trig.h"
#include "Game/GameConfig.h"
#include "efx2d/efx2dEffect.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "Game/Data.h"
#include "PSSystem/PSSystemIF.h"
#include "Controller.h"
#include "Screen/Game2DMgr.h"

namespace Morimura {

static const char name[] = "challengeSelect2D";

bool TChallengeSelect::mSelected1p       = true;
f32 TChallengeSelect::mAlphaSpeed        = 0.05f;
s16 TChallengeSelect::mFlashAnimInterval = 300;
f32 TChallengeSelect::mTextFlashVal      = 1.0f;
bool TChallengeSelect::mConnect2p        = true;
f32 TChallengeSelect::mPanelMoveVal      = 1.0f;
f32 TChallengeSelect::mPanelMoveRate     = 0.25f;
f32 TChallengeSelect::mCircleY           = 100.0f;
f32 TChallengeSelect::mTimerSpeed        = 0.15f;
f32 TChallengeSelect::mMoveSpeed         = 12.0f;
f32 TChallengeSelect::mSelectIconScale   = 1.5f;

int TChallengeSelect::mRightOffset     = 0;
int TChallengeSelect::mDownOffset      = 0;
u8 TChallengeSelect::mFrameAnimAlpha   = 0;
bool TChallengeSelect::mAllCourseOpen  = false;
bool TChallengeSelect::mForceDemoStart = false;
int TChallengeSelect::mDivePikiNum     = 0;
TChallengeSelect::StaticValues TChallengeSelect::mMetOffset;
JKRHeap* TChallengeSelect::mDebugHeapParent = nullptr;
JKRExpHeap* TChallengeSelect::mDebugHeap    = nullptr;

ResTIMG* TChallengeSelect::mIconTexture[4] = { nullptr, nullptr, nullptr, nullptr };

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
TChallengePiki::TChallengePiki(J2DPane* pane1, J2DPane* pane2, J2DPane* pane3)
{
	mMaxPiki  = 0;
	mPanes[0] = pane1;
	mPanes[1] = pane2;
	mPanes[2] = pane3;
	for (int i = 0; i < 3; i++) {
		P2ASSERTLINE(72, mPanes[i]);
	}
	reset();
}

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
void TChallengePiki::reset()
{
	mGoalXPos = 0.0f;
	mGoalYPos = 0.0f;
	mYOffset  = 0.0f;
	for (int i = 0; i < 50; i++) {
		mPosInfo[i].mState = ChallengePiki_Inactive;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2D8
 */
void TChallengePiki::jumpStart(f32 time)
{
	mVec[0].set(mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).x - mPanes[1]->getGlbVtx(GLBVTX_BtmRight).x,
	            mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).y - mPanes[1]->getGlbVtx(GLBVTX_BtmRight).y);
	mVec[1].set(mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).x - mPanes[2]->getGlbVtx(GLBVTX_BtmLeft).x,
	            mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).y - mPanes[2]->getGlbVtx(GLBVTX_BtmLeft).y);

	mYOffset = -500.0f;
	for (int i = 0; i < 50; i++) {
		mPosInfo[i].mTimer        = 0.1f * randFloat() + -(0.1f * i - time);
		mPosInfo[i].mCurrentPos   = Vector2f(mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).x, mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).y);
		mPosInfo[i].mInitialPos.x = mPosInfo[i].mCurrentPos.x;
		mPosInfo[i].mInitialPos.y = mPosInfo[i].mCurrentPos.y;
		mPosInfo[i]._08           = i % 3;

		mPosInfo[i].mDeviation.x = 30.0f * randFloat();
		if (randFloat() > 0.5f) {
			mPosInfo[i].mDeviation.x *= -1.0f;
		}
		mPosInfo[i].mDeviation.y = 10.0f * randFloat() + 15.0f;
		mPosInfo[i].mState       = ChallengePiki_Standby;
	}
}

/**
 * @note Address: 0x8038C48C
 * @note Size: 0x46C
 */
void TChallengePiki::update()
{
	if (mMaxPiki > 0) {
		for (int i = 0; i < 3; i++) {
			mPanes[i]->setOffset(mPanes[i]->getOffsetX(), mPanes[i]->getOffsetY() + mYOffset);
		}
	}

	for (int i = 0; i < mMaxPiki; i++) {

		if (i < 50) {
			bool isJump = false;
			if (mPosInfo[i].mTimer < 0.0f) {
				isJump = true;
			}
			mPosInfo[i].mTimer += TChallengeSelect::mTimerSpeed;

			if (isJump && mPosInfo[i].mTimer > 0.0f) {
				JAISound* sound = PSSystem::SingletonBase<PSGame::SeMgr>::getInstance()
				                      ->mSetSeList[PSGame::SeMgr::SETSE_ChallengeModeTop]
				                      ->playSystemSe(PSSE_PK_VC_JUMP_INTO_HOLE, 0);
				if (sound) {
					sound->setPan(0.7f, 0, SOUNDPARAM_Unk0);
				}
			}

			f32 time = mPosInfo[i].mTimer;
			if (time > TAU) {
				mPosInfo[i].mTimer -= TAU;
			}
			switch (mPosInfo[i].mState) {
			case ChallengePiki_Standby:
				f32 time = mPosInfo[i].mTimer;
				if (!(time < 0.0f)) {
					if (time > HALF_PI) {
						mPosInfo[i].mState = 3;
					}
					mPosInfo[i].mCurrentPos.x = -(mPosInfo[i].mDeviation.x * sinf(mPosInfo[i].mTimer) - mPosInfo[i].mInitialPos.x);
					f32 offY                  = absF(sinf(mPosInfo[i].mTimer * 2.0f) * mPosInfo[i].mDeviation.y);
					mPosInfo[i].mCurrentPos.y = (mPosInfo[i].mInitialPos.y - offY);
				}
				break;
			case 1:
				break;
			case 3:
				if (mPosInfo[i].mCurrentPos.y > TChallengeSelect::mCircleY) {
					mPosInfo[i].mCurrentPos.y -= TChallengeSelect::mMoveSpeed;
				} else {
					mPosInfo[i].mState        = ChallengePiki_Jumping;
					mPosInfo[i].mInitialPos.x = mPosInfo[i].mCurrentPos.x;
					mPosInfo[i].mInitialPos.y = mPosInfo[i].mCurrentPos.y;
					mPosInfo[i].mTimer        = 0.0f;
				}
				break;
			case ChallengePiki_Jumping:
				if (mPosInfo[i].mTimer > PI) {
					mPosInfo[i].mState = ChallengePiki_Falling;
					mPosInfo[i].mTimer = PI;
				}
				int thing = mPosInfo[i]._08;
				f32 calc  = 0.0f;
				if (thing == 0) {
					calc = -8.0f;
				}
				if (thing == 1) {
					calc = 8.0f;
				}
				mPosInfo[i].mCurrentPos.x
				    = mPosInfo[i].mInitialPos.x + (mPosInfo[i].mTimer * (mGoalXPos - mPosInfo[i].mInitialPos.x + calc)) / PI;
				mPosInfo[i].mCurrentPos.y = -(sinf(mPosInfo[i].mTimer) * 70.0f - mPosInfo[i].mInitialPos.y);
				break;
			case ChallengePiki_Falling:
				if (mPosInfo[i].mCurrentPos.y < mGoalYPos - 40.0f) {
					mPosInfo[i].mCurrentPos.y += TChallengeSelect::mMoveSpeed;
				} else {
					JAISound* sound
					    = PSSystem::SingletonBase<PSGame::SeMgr>::getInstance()->mSetSeList[5]->playSystemSe(PSSE_PK_SE_ONY_SEED_GROUND, 0);
					if (sound) {
						sound->setPan(0.3f, 0, SOUNDPARAM_Unk0);
					}
					mPosInfo[i].mCurrentPos.y = -100.0f;
					TChallengeSelect::mDivePikiNum++;
					mPosInfo[i].mState = ChallengePiki_Inactive;
				}
				break;
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x19C
 */
void TChallengePiki::draw()
{
	int max = mMaxPiki;
	if (max > 50) {
		max = 50;
	}
	for (int i = max - 1; i >= 0; i--) {
		J2DPicture* p;

		p = static_cast<J2DPicture*>(mPanes[0]);
		p->draw(mPosInfo[i].mCurrentPos.x, mPosInfo[i].mCurrentPos.y, p->getWidth(), p->getHeight(), false, false, false);
		p->calcMtx();

		p = static_cast<J2DPicture*>(mPanes[1]);
		p->draw(mPosInfo[i].mCurrentPos.x - mVec[0].x, mPosInfo[i].mCurrentPos.y - mVec[0].y, -p->getWidth(), p->getHeight(), false, false,
		        false);
		p->calcMtx();

		p = static_cast<J2DPicture*>(mPanes[2]);
		p->draw(mPosInfo[i].mCurrentPos.x - mVec[1].x, mPosInfo[i].mCurrentPos.y - mVec[1].y, p->getWidth(), p->getHeight(), false, false,
		        false);
		p->calcMtx();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void TChallengePiki::setGoalPos(Vector2f& pos)
{
	mGoalXPos = pos.x - 10.0f;
	mGoalYPos = pos.y;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
bool TChallengePiki::isDemoEnd()
{
	int max = mMaxPiki;
	if (max == 0) {
		return true;
	}

	if (max > 50) {
		max = 50;
	}

	for (int i = 0; i < max; i++) {
		if (mPosInfo[i].mState != ChallengePiki_Inactive) {
			return false;
		}
	}

	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
TChallengeDoping::TChallengeDoping(J2DPane* pane1, J2DPane* pane2, J2DPane* pane3, J2DPane* pane4)
{
	mPaneBase         = pane1;
	mGoalFillLevel    = 0.0f;
	mCurrentFillLevel = 0.0f;
	P2ASSERTLINE(284, mPaneBase);
	mPaneBase->setBasePosition(J2DPOS_BottomCenter);

	mBubblePanes[0] = pane2;
	mBubblePanes[1] = pane3;
	mBubblePanes[2] = pane4;
	for (int i = 0; i < 3; i++) {
		P2ASSERTLINE(290, mBubblePanes[i]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void TChallengeDoping::setLevel(int level)
{
	mCurrentFillLevel = mGoalFillLevel;
	mBubblePanes[0]->hide();
	mBubblePanes[1]->hide();
	mBubblePanes[2]->hide();
	mGoalFillLevel = level / 3.0f;
	if (mGoalFillLevel > 1.0f) {
		mGoalFillLevel = 1.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x120
 */
void TChallengeDoping::update()
{
	f32 diff = mGoalFillLevel - mCurrentFillLevel;
	if (FABS(diff) > 0.05f) {
		diff *= 0.1f;
	}
	mCurrentFillLevel += diff;
	if (mCurrentFillLevel < 0.0f) {
		mCurrentFillLevel = 0.0f;
	}
	if (mCurrentFillLevel > 1.0f) {
		mCurrentFillLevel = 1.0f;
	}
	mPaneBase->updateScale(1.0f, mCurrentFillLevel);

	f32 calc = mCurrentFillLevel * 3.0f;
	mBubblePanes[0]->hide();
	mBubblePanes[1]->hide();
	mBubblePanes[2]->hide();
	if (calc >= 3.0f) {
		mBubblePanes[0]->show();
	}
	if (calc >= 2.0f) {
		mBubblePanes[1]->show();
	}
	if (calc >= 1.0f) {
		mBubblePanes[2]->show();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
TChallengePanel::TChallengePanel(J2DPictureEx* pane1, J2DPane* pane2, J2DPane* pane3)
{
	mArchive         = nullptr;
	mPane1           = pane1;
	mPane2           = pane2;
	mPane3           = pane3;
	mScaleMgr        = nullptr;
	mCurrentScale    = 1.0f;
	mSelectAnimAlpha = 0.0f;
	mState           = 0;
	mAfterState      = 0;
	mIsUnlock        = false;
	mTimer           = 0.0f;
	P2ASSERTLINE(358, pane1);
	P2ASSERTLINE(359, pane2);
	P2ASSERTLINE(360, pane3);
	mScaleMgr = new og::Screen::ScaleMgr;
	mXOffset  = 0.0f;
	mYOffset  = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void TChallengePanel::stateInitialize(JKRArchive* arc, int state, int index)
{
	mArchive = arc;
	mPane1->changeTexture(TChallengeSelect::mIconTexture[state], 0);
	mState = state;
	mIndex = index;
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void TChallengePanel::changeState()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x16C
 */
void TChallengePanel::addAlpha()
{
	mCurrentScale = TChallengeSelect::mSelectIconScale;
	if (mCurrentScale > TChallengeSelect::mSelectIconScale) {
		mCurrentScale = TChallengeSelect::mSelectIconScale;
	}

	if (mSelectAnimAlpha + TChallengeSelect::mAlphaSpeed < 1.0f) {
		mSelectAnimAlpha += TChallengeSelect::mAlphaSpeed;
	} else {
		if (mIsUnlock) {
			startScaleUp();
			mIsUnlock = false;
			if (mState < 3) {
				mState = mAfterState;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_FLOWER, 0);
				mPane1->changeTexture(TChallengeSelect::mIconTexture[mState], 0);
				J2DPane* pane = mPane1;
				Vector2f pos(pane->mGlobalMtx[0][3], pane->mGlobalMtx[1][3]);
				efx2d::Arg arg(pos);
				efx2d::T2DChangesmoke efx;
				efx.create(&arg);
			}
		}
		mSelectAnimAlpha = 1.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void TChallengePanel::decAlpha()
{
	mCurrentScale *= 0.95f;
	if (mCurrentScale < 1.0f) {
		mCurrentScale = 1.0f;
	}
	if (mSelectAnimAlpha > TChallengeSelect::mAlphaSpeed) {
		mSelectAnimAlpha -= TChallengeSelect::mAlphaSpeed;
	} else {
		mSelectAnimAlpha = 0.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void TChallengePanel::alphaUpdate(f32 mult)
{
	f32 alpha = TChallengeSelect::mFrameAnimAlpha * (mult * mSelectAnimAlpha);
	mPane2->setAlpha(alpha);
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
bool TChallengePanel::canSelect()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8038C8F8
 * @note Size: 0x3D0
 */
void TChallengePanel::update(int index, bool flag)
{
	if (flag) {
		mTimer = 0.0f;
	}
	mTimer += TChallengeSelect::mPanelMoveRate;
	if (mTimer > TAU) {
		mTimer -= TAU;
	}

	int id = mIndex;
	// this is wrong, I hate it here
	int a1 = (index % 5);
	int a2 = (index / 5);
	int a3 = (id % 5);
	int a4 = (id / 5);

	if (index != id) {
		if (a1 == a3) {
			f32 dir = 1.0f;
			if (a2 < a4)
				dir = -1.0f;
			f32 s = sinf(mTimer);
			mYOffset += (TChallengeSelect::mPanelMoveVal * dir * absF(s) - mYOffset) * 0.2f;
			mXOffset *= 0.9f;
		} else if (a2 == a4) {
			f32 dir = 1.0f;
			if (a1 < a3)
				dir = -1.0f;
			f32 s = sinf(mTimer);
			mXOffset += (TChallengeSelect::mPanelMoveVal * dir * absF(s) - mXOffset) * 0.2f;
			mYOffset *= 0.9f;
		} else {
			mXOffset *= 0.9f;
			mYOffset *= 0.9f;
		}
	} else {
		mXOffset *= 0.9f;
		mYOffset *= 0.9f;
	}

	f32 scale = mScaleMgr->calc();

	mPane1->setOffset(mPane1->getOffsetX() + mXOffset, mPane1->getOffsetY() + mYOffset);
	mPane1->setBasePosition(J2DPOS_Center);
	mPane1->updateScale(mPane1->getScaleX() * scale * mCurrentScale, mPane1->getScaleY() * scale * mCurrentScale);

	mPane2->setOffset(mPane2->getOffsetX() + mXOffset, mPane2->getOffsetY() + mYOffset);
	mPane2->setBasePosition(J2DPOS_Center);
	mPane2->updateScale(mPane2->getScaleX() * scale, mPane2->getScaleY() * scale);

	mPane3->setOffset(mPane3->getOffsetX() + mXOffset, mPane3->getOffsetY() + mYOffset);
	mPane3->setBasePosition(J2DPOS_Center);
	mPane3->updateScale(mPane3->getScaleX() * scale * mCurrentScale, mPane3->getScaleY() * scale * mCurrentScale);
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void TChallengePanel::startScaleUp()
{
	mScaleMgr->up(0.3f, 30.0f, 0.6f, 0.0f);
}

/**
 * @note Address: 0x8038CCC8
 * @note Size: 0xA0
 */
TChallengeScreen::TChallengeScreen(JKRArchive* arc, int anims)
    : TScreenBase(arc, anims)
{
	mAnimPaneCount = 0;
	mCounter       = 0;
	_28            = 0;
	mCounterMax    = TChallengeSelect::mFlashAnimInterval * randFloat();
}

/**
 * @note Address: 0x8038CD68
 * @note Size: 0x3C0
 */
void TChallengeScreen::create(char const* path, u32 flags)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(path, flags, mArchive);

	TCallbackScissor* scis = new TCallbackScissor;
	scis->mBounds          = JGeometry::TBox2f(320.0f, 70.0f, 560.0f, 100.0f);
#if defined(VERSION_PAL)
	P2ASSERTLINE(569, mScreenObj->search('Tmapti3'));
#elif defined(VERSION_JP)
	P2ASSERTLINE(567, mScreenObj->search('Tmapti3'));
#else
	P2ASSERTLINE(568, mScreenObj->search('Tmapti3'));
#endif
	mScreenObj->addCallBack('Tmapti3', scis);

	og::Screen::CallBack_Message* mesg = new og::Screen::CallBack_Message;
#if defined(VERSION_PAL)
	P2ASSERTLINE(577, mScreenObj->search('Tyel2'));
#elif defined(VERSION_JP)
	P2ASSERTLINE(575, mScreenObj->search('Tyel2'));
#else
	P2ASSERTLINE(576, mScreenObj->search('Tyel2'));
#endif
	mScreenObj->addCallBack('Tyel2', mesg);

	og::Screen::CallBack_Message* mesg2 = new og::Screen::CallBack_Message;
#if defined(VERSION_PAL)
	P2ASSERTLINE(582, mScreenObj->search('Tyel1'));
#elif defined(VERSION_JP)
	P2ASSERTLINE(580, mScreenObj->search('Tyel1'));
#else
	P2ASSERTLINE(581, mScreenObj->search('Tyel1'));
#endif
	mScreenObj->addCallBack('Tyel1', mesg2);

	TCallbackScissor* scis2 = new TCallbackScissor;
	scis2->mBounds          = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mScreenObj->addCallBack('Tyel1', scis2);

	J2DPane* pane1 = mScreenObj->search('Tyel1');
	J2DPane* pane2 = mScreenObj->search('Tyel2');
	pane1->removeFromParent();
	pane2->removeFromParent();
	og::Screen::setCallBackMessage(mScreenObj);
	mScreenObj->appendChild(pane2);
	mScreenObj->appendChild(pane1);
	mAnimScreens = new og::Screen::AnimScreen*[mAnimScreenCountMax];
	og::Screen::setAlphaScreen(mScreenObj);
}

/**
 * @note Address: 0x8038D128
 * @note Size: 0xD8
 */
void TChallengeScreen::createAnimPane(char* path)
{
	u64 tags[16]   = { 'Nhl_00', 'Nhl_01', 'Nhl_02', 'Nhl_03', 'Nhl_04', 'Nhl_05', 'Nhl_06', 'Nhl_07',
	                   'Nhl_08', 'Nhl_09', 'Nhl_10', 'Nhl_11', 'Nhl_12', 'Nhl_13', 'Nhl_14', 'NULL_001' };
	mAnimPaneCount = 15;
	mAnimPanes     = new og::Screen::AnimPane*[mAnimPaneCount];
	for (int i = 0; i < mAnimPaneCount; i++) {
		mAnimPanes[i] = new og::Screen::AnimPane;
		mAnimPanes[i]->init(mArchive, mScreenObj, tags[i], path);
	}
}

/**
 * @note Address: 0x8038D200
 * @note Size: 0x18C
 */
void TChallengeScreen::update()
{
	if (mScreenObj) {
		mScreenObj->update();
		for (int i = 0; i < mAnimScreenCountMax; i++) {
			if (i != 1) {
				mAnimScreens[i]->update();
			} else {
				mAnimScreens[i]->mCurrentFrame = mAnimScreens[0]->mCurrentFrame;
				mAnimScreens[i]->update();
			}
		}

		if (!_28) {
			mCounter++;
			if (mCounter > mCounterMax) {
				mCounter = 0;
				for (int i = 0; i < mAnimPaneCount; i++) {
					mAnimPanes[i]->mCurrentFrame = 0.0f;
				}
				_28         = true;
				mCounterMax = TChallengeSelect::mFlashAnimInterval * (randFloat() * 0.9f + 0.1f);
			}
		}
		updateBckPane();
		mScreenObj->animation();
	}
}

/**
 * @note Address: 0x8038D38C
 * @note Size: 0xB0
 */
void TChallengeScreen::updateBckPane()
{
	for (int i = 0; i < mAnimPaneCount; i++) {
		mAnimPanes[i]->update();
		if (mAnimPanes[i]->mCurrentFrame >= 32.0f || !_28) {
			mAnimPanes[i]->mCurrentFrame = 32.0f;
			_28                          = false;
		}
	}
}

/**
 * @note Address: 0x8038D43C
 * @note Size: 0x20
 */
bool TChallengeScreen::isRandAnimStart()
{
	return mAnimPanes[0]->mCurrentFrame == 2.0f;
}

/**
 * @note Address: 0x8038D45C
 * @note Size: 0x128
 */
TChallengePlayModeScreen::TChallengePlayModeScreen(JKRArchive* arc, int anims)
    : TScreenBase(arc, anims)
{
	mSphereTex          = nullptr;
	mPaneLouie          = nullptr;
	mFuriko             = nullptr;
	mEfxCursor1         = nullptr;
	mEfxCursor2         = nullptr;
	mState              = 0;
	mDoShowNoController = false;
	mNoControllerTimer  = 0.0f;
	mTimer              = 0.0f;

#if !defined(VERSION_JP)
	mTimer2 = 0.0f;
#endif
	mMovePos      = 800.0f;
	mPaneList0[0] = nullptr;
	mScaleMgr[0]  = nullptr;
	mPaneOlimarP1 = nullptr;
	mAlphaTimer   = 0.0f;
	mPaneList0[1] = nullptr;
	mScaleMgr[1]  = nullptr;
	mPaneOlimarP2 = nullptr;
	mScale        = 0.0f;
	for (int i = 0; i < 3; i++) {
		mPaneList1[i]   = nullptr;
		mAngleTimers[i] = TAU * randFloat();
	}
	for (int i = 0; i < 4; i++) {
		mAnimScreen[i] = nullptr;
	}
}

/**
 * @note Address: 0x8038D584
 * @note Size: 0x598
 */
void TChallengePlayModeScreen::create(char const* path, u32 flags)
{
	TScreenBase::create(path, flags);

#if !defined(VERSION_JP)
	mScreenObj->search('il00')->hide();
	mScreenObj->search('ir00')->hide();
	mScreenObj->search('il01')->hide();
	mScreenObj->search('ir01')->hide();
#endif
	mEfxCursor2 = new efx2d::T2DCursor(&mEfxCursorPos2);
	mEfxCursor1 = new efx2d::T2DCursor(&mEfxCursorPos1);

	mPaneList0[0] = mScreenObj->search('nu_01');
#if defined(VERSION_PAL)
	P2ASSERTLINE(765, mPaneList0[0]);
#elif defined(VERSION_JP)
	P2ASSERTLINE(754, mPaneList0[0]);
#else
	P2ASSERTLINE(764, mPaneList0[0]);
#endif

	mPaneList0[1] = mScreenObj->search('nu_02');
#if defined(VERSION_PAL)
	P2ASSERTLINE(768, mPaneList0[1]);
#elif defined(VERSION_JP)
	P2ASSERTLINE(757, mPaneList0[1]);
#else
	P2ASSERTLINE(767, mPaneList0[1]);
#endif

	for (int i = 0; i < 2; i++) {
		mScaleMgr[i] = new og::Screen::ScaleMgr;
	}

	mFuriko = og::Screen::setCallBack_Furiko(mScreenObj, 'furiko00');
#if defined(VERSION_PAL)
	P2ASSERTLINE(777, mFuriko);
#elif defined(VERSION_JP)
	P2ASSERTLINE(766, mFuriko);
#else
	P2ASSERTLINE(776, mFuriko);
#endif
	mFuriko->stop();

	u64 tags[4] = { 'h_00', 'h_01', 'h_02', 'h_03' };
	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			mAnimScreen[i] = og::Screen::setMenuTitleScreen(mArchive, mScreenObj, tags[i]);
		} else if (i == 3) {
			mAnimScreen[i] = og::Screen::setAnimTextScreen(mArchive, mScreenObj, tags[i]);
		} else {
			mAnimScreen[i] = og::Screen::setMenuScreen(mArchive, mScreenObj, tags[i]);
		}
#if defined(VERSION_PAL)
		P2ASSERTLINE(787, mAnimScreen[i]);
#elif defined(VERSION_JP)
		P2ASSERTLINE(776, mAnimScreen[i]);
#else
		P2ASSERTLINE(786, mAnimScreen[i]);
#endif
		mAnimScreen[i]->stop();
	}

	mAnimScreen[0]->mMesgAlpha = 1.0f - mNoControllerTimer;
	mAnimScreen[3]->mMesgAlpha = mNoControllerTimer;

	mPaneOlimarP1 = mScreenObj->search('P1orima');
#if defined(VERSION_PAL)
	P2ASSERTLINE(796, mPaneOlimarP1);
#elif defined(VERSION_JP)
	P2ASSERTLINE(785, mPaneOlimarP1);
#else
	P2ASSERTLINE(795, mPaneOlimarP1);
#endif
	mPaneList1[0] = mScreenObj->search('P1ori_l');
#if defined(VERSION_PAL)
	P2ASSERTLINE(798, mPaneList1[0]);
#elif defined(VERSION_JP)
	P2ASSERTLINE(787, mPaneList1[0]);
#else
	P2ASSERTLINE(797, mPaneList1[0]);
#endif
	mPaneOlimarP2 = mScreenObj->search('P2orima');
#if defined(VERSION_PAL)
	P2ASSERTLINE(801, mPaneOlimarP2);
#elif defined(VERSION_JP)
	P2ASSERTLINE(790, mPaneOlimarP2);
#else
	P2ASSERTLINE(800, mPaneOlimarP2);
#endif
	mPaneList1[1] = mScreenObj->search('P2ori_l');
#if defined(VERSION_PAL)
	P2ASSERTLINE(803, mPaneList1[1]);
#elif defined(VERSION_JP)
	P2ASSERTLINE(792, mPaneList1[1]);
#else
	P2ASSERTLINE(802, mPaneList1[1]);
#endif
	mPaneLouie = mScreenObj->search('Plui');
#if defined(VERSION_PAL)
	P2ASSERTLINE(807, mPaneLouie);
#elif defined(VERSION_JP)
	P2ASSERTLINE(796, mPaneLouie);
#else
	P2ASSERTLINE(806, mPaneLouie);
#endif
	mPaneList1[2] = mScreenObj->search('P2lui_l');
#if defined(VERSION_PAL)
	P2ASSERTLINE(809, mPaneList1[2]);
#elif defined(VERSION_JP)
	P2ASSERTLINE(798, mPaneList1[2]);
#else
	P2ASSERTLINE(808, mPaneList1[2]);
#endif
}

/**
 * @note Address: 0x8038DB1C
 * @note Size: 0x7FC
 */
void TChallengePlayModeScreen::update()
{
#if !defined(VERSION_JP)
	mPane1Pos.x = mScreenObj->search('il00')->mGlobalMtx[0][3];
	mPane1Pos.y = mScreenObj->search('ir00')->mGlobalMtx[1][3];
	mPane2Pos.x = mScreenObj->search('ir00')->mGlobalMtx[0][3];
	mPane2Pos.y = mScreenObj->search('ir01')->mGlobalMtx[1][3];

#endif
#if defined(VERSION_JP)
	f32 x = 144.0f - mEfxCursorPos1.x;
#else
	f32 x = mPane1Pos.x - mEfxCursorPos1.x;
#endif
	if (FABS(x) < 2.0f) {
#if defined(VERSION_JP)
		mEfxCursorPos1.x = 144.0f;
#else
		mEfxCursorPos1.x = mPane1Pos.x;
#endif
		x = 0.0f;
	} else {
		x *= 0.3f;
	}
	mEfxCursorPos1.x += x;

#if defined(VERSION_JP)
	f32 x2 = 440.0f - mEfxCursorPos2.x;
#else
	f32 x2 = mPane2Pos.x - mEfxCursorPos2.x;
#endif
	if (FABS(x2) < 2.0f) {
#if defined(VERSION_JP)
		mEfxCursorPos2.x = 440.0f;
#else
		mEfxCursorPos2.x = mPane2Pos.x;
#endif
		x2 = 0.0f;
	} else {
		x2 *= 0.3f;
	}
	mEfxCursorPos2.x += x2;

	if (TChallengeSelect::mSelected1p) {
		mAlphaTimer += 0.1f;
		if (mAlphaTimer > 1.0f) {
			mAlphaTimer = 1.0f;
		}
		mScale -= 0.1f;
		if (mScale < 0.0f) {
			mScale = 0.0f;
		}

#if defined(VERSION_JP)
		f32 y = 234.0f - mEfxCursorPos2.y;
#else
		f32 y = mPane1Pos.y - mEfxCursorPos2.y;
#endif
		if (FABS(y) < 2.0f) {
#if defined(VERSION_JP)
			mEfxCursorPos2.y = 234.0f;
#else
			mEfxCursorPos2.y = mPane1Pos.y;
#endif
			y = 0.0f;
		} else {
			y *= 0.3f;
		}
		mEfxCursorPos2.y += y;
		mEfxCursorPos1.y = mEfxCursorPos2.y;
	} else {
		if (TChallengeSelect::mConnect2p) {
			mScale += 0.1f;
			if (mScale > 1.0f) {
				mScale = 1.0f;
			}
		} else {
			mScale -= 0.1f;
			if (mScale < 0.0f) {
				mScale = 0.0f;
			}
		}
		mAlphaTimer -= 0.1f;
		if (mAlphaTimer < 0.0f) {
			mAlphaTimer = 0.0f;
		}

#if defined(VERSION_JP)
		f32 y = 278.0f - mEfxCursorPos2.y;
#else
		f32 y = mPane2Pos.y - mEfxCursorPos2.y;
#endif
		if (FABS(y) < 2.0f) {
#if defined(VERSION_JP)
			mEfxCursorPos2.y = 278.0f;
#else
			mEfxCursorPos2.y = mPane2Pos.y;
#endif
			y = 0.0f;
		} else {
			y *= 0.3f;
		}
		mEfxCursorPos2.y += y;
		mEfxCursorPos1.y = mEfxCursorPos2.y;
	}

	for (int i = 0; i < 3; i++) {
		f32 sin = 0.0f;
		f32 scale;
		if (i == 0) {
			scale = mAlphaTimer;
		} else {
			scale = mScale;
		}
		if (scale == 1.0f) {
			mAngleTimers[i] += 0.2f;
			if (mAngleTimers[i] > TAU) {
				mAngleTimers[i] -= TAU;
			}
			sin = FABS(sinf(mAngleTimers[i]) * 75.0f);
		}
		mPaneList1[i]->setAlpha(255.0f * scale - sin);
	}

	if (mState == 0) {
		mFuriko->stop();
		mMovePos = 400.0f;
		mTimer   = 0.0f;
#if !defined(VERSION_JP)
		mTimer2 = 0.0f;
#endif
	} else {
		if (mScreenObj) {
			mScreenObj->update();
			for (int i = 0; i < mAnimScreenCountMax; i++) {
				mAnimScreens[i]->update();
			}

			switch (mState) {
			case 1:
				mTimer += sys->mDeltaTime;
				mMovePos = (1.0f - og::Screen::calcSmooth0to1(mTimer, 0.3f)) * 800.0f;
				if (mMovePos <= 0.0f) {
#if defined(VERSION_JP)
					mState = 2;
					if (TChallengeSelect::mSelected1p) {
						mEfxCursorPos1 = Vector2f(144.0f, 234.0f);
						mEfxCursorPos2 = Vector2f(440.0f, 234.0f);
					} else {
						mEfxCursorPos1 = Vector2f(144.0f, 278.0f);
						mEfxCursorPos2 = Vector2f(440.0f, 278.0f);
					}
					mEfxCursor1->create(nullptr);
					mEfxCursor2->create(nullptr);
#else
					mTimer2 += sys->mDeltaTime;
					if (mTimer2 > 0.5f) {
						mState = 2;
						if (TChallengeSelect::mSelected1p) {
							mEfxCursorPos2
							    = Vector2f(mScreenObj->search('ir00')->mGlobalMtx[0][3], mScreenObj->search('ir00')->mGlobalMtx[1][3]);
							mEfxCursorPos1
							    = Vector2f(mScreenObj->search('il00')->mGlobalMtx[0][3], mScreenObj->search('il00')->mGlobalMtx[1][3]);
						} else {
							mEfxCursorPos2
							    = Vector2f(mScreenObj->search('ir01')->mGlobalMtx[0][3], mScreenObj->search('ir01')->mGlobalMtx[1][3]);
							mEfxCursorPos1
							    = Vector2f(mScreenObj->search('il01')->mGlobalMtx[0][3], mScreenObj->search('il01')->mGlobalMtx[1][3]);
						}
						mEfxCursor1->create(nullptr);
						mEfxCursor2->create(nullptr);
					}
#endif
				}
				break;
			case 0:
				break;
			case 3:
				mTimer += sys->mDeltaTime;
				mMovePos = og::Screen::calcSmooth0to1(mTimer, 0.3f) * -800.0f;
				if (mTimer >= 0.3f) {
					mState = 0;
				}
				break;
			}

			if (TChallengeSelect::mConnect2p) {
				mPaneList0[1]->setAlpha(255);
				mAnimScreen[2]->mMesgAlpha = 1.0f;
			} else {
				mPaneList0[1]->setAlpha(128);
				mAnimScreen[2]->mMesgAlpha = 0.5f;
			}
			mScreenObj->animation();
			if (mDoShowNoController) {
				mNoControllerTimer += 0.2f;
				if (mNoControllerTimer > 1.0f) {
					mNoControllerTimer = 1.0f;
				}
			} else {
				mNoControllerTimer -= 0.2f;
				if (mNoControllerTimer < 0.0f) {
					mNoControllerTimer = 0.0f;
				}
			}
			mAnimScreen[0]->mMesgAlpha = 1.0f - mNoControllerTimer;
			mAnimScreen[3]->mMesgAlpha = mNoControllerTimer;
			if (mState >= 2) {
				for (int i = 0; i < 2; i++) {
					mPaneList0[i]->updateScale(mScaleMgr[i]->calc());
				}
			}
			mScreenObj->setXY(mMovePos, 0.0f);
		}
	}
}

/**
 * @note Address: 0x8038E318
 * @note Size: 0x660
 */
void TChallengePlayModeScreen::draw(Graphics& gfx, J2DPerspGraph* persp)
{
	if (mState) {
		TScreenBase::draw(gfx, persp);
		gfx.mOrthoGraph.setPort();

		GXSetScissor(TChallengeSelect::mMetOffset._00 + mPaneOlimarP1->mGlobalMtx[0][3],
		             (1.0f - mAlphaTimer) * (mSphereTex->getHeight() * mPaneOlimarP1->getScaleY() * 1.1f)
		                 + (TChallengeSelect::mMetOffset._04 + mPaneOlimarP1->mGlobalMtx[1][3]),
		             mSphereTex->getWidth() * mPaneOlimarP1->getScaleX() * 1.1f,
		             mSphereTex->getHeight() * mPaneOlimarP1->getScaleY() * 1.1f);
		mSphereTex->draw(TChallengeSelect::mMetOffset._00 + mPaneOlimarP1->mGlobalMtx[0][3],
		                 TChallengeSelect::mMetOffset._04 + mPaneOlimarP1->mGlobalMtx[1][3],
		                 mSphereTex->getWidth() * mPaneOlimarP1->getScaleX() * 1.1f,
		                 mSphereTex->getHeight() * mPaneOlimarP1->getScaleY() * 1.1f, false, false, false);
		mSphereTex->calcMtx();

		GXSetScissor(TChallengeSelect::mMetOffset._00 + mPaneLouie->mGlobalMtx[0][3],
		             (1.0f - mScale) * (mSphereTex->getHeight() * mPaneLouie->getScaleY() * 1.1f)
		                 + (TChallengeSelect::mMetOffset._04 + mPaneLouie->mGlobalMtx[1][3]),
		             (mSphereTex->getWidth() * mPaneLouie->getScaleX() * 1.1f) * 2.0f,
		             mSphereTex->getHeight() * mPaneLouie->getScaleY() * 1.1f);
		mSphereTex->draw(TChallengeSelect::mMetOffset._00 + mPaneLouie->mGlobalMtx[0][3],
		                 TChallengeSelect::mMetOffset._04 + mPaneLouie->mGlobalMtx[1][3],
		                 mSphereTex->getWidth() * mPaneLouie->getScaleX() * 1.1f, mSphereTex->getHeight() * mPaneLouie->getScaleY() * 1.1f,
		                 false, false, false);
		mSphereTex->calcMtx();

		GXSetScissor(0, 0, 640, 480);

		J2DPicture* pane = static_cast<J2DPicture*>(mScreenObj->search('P2orimaF'));
		pane->setAlpha(mPaneList0[1]->mAlpha);
		pane->draw(pane->getGlbVtx(GLBVTX_BtmLeft).x + pane->getWidth(), pane->getGlbVtx(GLBVTX_BtmRight).y, -pane->getWidth(),
		           pane->getHeight(), false, false, false);
		pane->calcMtx();
		pane->setAlpha(0);

		pane = static_cast<J2DPicture*>(mPaneOlimarP2);
		pane->setAlpha(mPaneList0[1]->mAlpha);
		pane->draw(pane->getGlbVtx(GLBVTX_BtmLeft).x + pane->getWidth(), pane->getGlbVtx(GLBVTX_BtmRight).y, -pane->getWidth(),
		           pane->getHeight(), false, false, false);
		pane->calcMtx();
		pane->setAlpha(0);

		pane = static_cast<J2DPicture*>(mPaneList1[1]);
		pane->setAlpha(mPaneList1[1]->mAlpha);
		pane->draw(pane->getGlbVtx(GLBVTX_BtmLeft).x + pane->getWidth(), pane->getGlbVtx(GLBVTX_BtmRight).y, -pane->getWidth(),
		           pane->getHeight(), false, false, false);
		pane->calcMtx();

		GXSetScissor(TChallengeSelect::mMetOffset._00 + mPaneLouie->mGlobalMtx[0][3],
		             (1.0f - mScale) * (mSphereTex->getHeight() * mPaneLouie->getScaleY() * 1.1f)
		                 + (TChallengeSelect::mMetOffset._04 + mPaneLouie->mGlobalMtx[1][3]),
		             (mSphereTex->getWidth() * mPaneLouie->getScaleX() * 1.1f) * 2.0f,
		             mSphereTex->getHeight() * mPaneLouie->getScaleY() * 1.1f);
		mSphereTex->draw(TChallengeSelect::mMetOffset._00 + mPaneOlimarP2->mGlobalMtx[0][3],
		                 TChallengeSelect::mMetOffset._04 + mPaneOlimarP2->mGlobalMtx[1][3],
		                 mSphereTex->getWidth() * mPaneOlimarP2->getScaleX() * 1.1f,
		                 mSphereTex->getHeight() * mPaneOlimarP2->getScaleY() * 1.1f, false, false, false);
		mSphereTex->calcMtx();

		GXSetScissor(0, 0, 640, 480);
		gfx.mPerspGraph.setPort();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void TChallengePlayModeScreen::setState(PlayModeScreenState state)
{
	mState = state;
	switch (mState) {
	case PlayModeScreen_Open:
		mTimer = 0.0f;
		for (int i = 0; i < 4; i++) {
			mAnimScreen[i]->open((0.1f * (f32)i) + 0.1f);
		}
		break;
	case PlayModeScreen_Close:
		mTimer = 0.0f;
		for (int i = 0; i < 4; i++) {
			mAnimScreen[i]->close();
		}
		mEfxCursor1->kill();
		mEfxCursor2->kill();
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void TChallengePlayModeScreen::setBlink(f32 max)
{
	if (!TChallengeSelect::mSelected1p) {
		mScaleMgr[0]->up(0.25f, 20.0f, 0.4f, 0.0f);
		mAnimScreen[1]->blink(max, 0.0f);
		mAnimScreen[2]->blink(0.0f, 0.0f);
	} else {
		mAnimScreen[1]->blink(0.0f, 0.0f);
		mAnimScreen[2]->blink(max, 0.0f);
		if (TChallengeSelect::mConnect2p) {
			mScaleMgr[1]->up(0.25f, 20.0f, 0.4f, 0.0f);
		} else {
			mScaleMgr[1]->up(0.15f, 15.0f, 0.3f, 0.0f);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void TChallengePlayModeScreen::reset()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void TChallengePlayModeScreen::createMetPicture(ResTIMG const* data)
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(1208, data);
#elif defined(VERSION_JP)
	P2ASSERTLINE(1167, data);
#else
	P2ASSERTLINE(1207, data);
#endif
	mSphereTex = new J2DPicture(data);
}

/**
 * @note Address: 0x8038E978
 * @note Size: 0x3C
 */
void TChallengeSelectExplanationWindow::create(char const* path, u32 flags)
{
	TScreenBase::create(path, flags);
	mTransXModifier = 800.0f;
	mTransYModifier = 0.0f;
}

/**
 * @note Address: 0x8038E9B4
 * @note Size: 0x4
 */
void TChallengeSelectExplanationWindow::screenScaleUp()
{
}

/**
 * @note Address: 0x8038E9B8
 * @note Size: 0x13C
 */
TChallengeSelect::TChallengeSelect()
    : TTestBase("challengeSelect")
{
	mStageList            = nullptr;
	mSelectScreen         = nullptr;
	mPlayModeScreen       = nullptr;
	mRulesScreen          = nullptr;
	mControls             = nullptr;
	mDisp                 = nullptr;
	mPanelList            = nullptr;
	mFloorCounter         = nullptr;
	mPaneSelect           = nullptr;
	mOffsMesg             = nullptr;
	mEfxDive              = nullptr;
	mCurrentSelection     = 0;
	mFloorCount           = 0;
	mBgAlpha              = 0;
	mStageChangeCounter   = 0;
	_134                  = true;
	mIsInDemo             = false;
	_136                  = false;
	mSelectionEffectAngle = 0.0f;
	mLevelNameMoveTimer   = 1.0f;
	mLevelNameMoveState   = -1;
	mDoCreatePikiDiveEfx  = false;
	_148                  = 0.0f;
	_14C                  = 1.0f;

	mRightOffset = 0;
	mDownOffset  = 0;
	mSelected1p  = true;
	mDivePikiNum = 0;

	for (int i = 0; i < 5; i++) {
		mChallengePiki[i] = nullptr;
		mPikiCounters[i]  = nullptr;
		mPikiCounts[i]    = 0;
	}

	for (int i = 0; i < 2; i++) {
		mHighScoreCounter[i] = nullptr;
		mHighScoreValue[i]   = 0;
		mPaneLevelName[i]    = nullptr;
		mDopeCounter[i]      = nullptr;
		mDopeCount[i]        = 0;
		mDoping[i]           = nullptr;
	}
}

/**
 * @note Address: N/A
 * @note Size:
 */
TChallengeSelect::~TChallengeSelect()
{
	if (mDebugHeap) {
		mDisp->mDebugExpHeap->freeAll();
		mDebugHeap->destroy();
	}
	mDebugHeap = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 * Probably something like this
 */
void TChallengeSelect::setDebugHeapParent(JKRHeap* heap)
{
	mDebugHeap = static_cast<JKRExpHeap*>(heap);
}

/**
 * @note Address: 0x8038EBE8
 * @note Size: 0x1B98
 */
void TChallengeSelect::doCreate(JKRArchive* arc)
{
	int selection                   = 0;
	mArchive                        = arc;
	DispMemberChallengeSelect* disp = static_cast<DispMemberChallengeSelect*>(getDispMember());
	if (disp->isID(OWNER_MRMR, MEMBER_CHALLENGE_SELECT)) {
		mDisp     = disp;
		selection = mDisp->mSelectedStageIndex;
	} else {
		mIsSection = true;
	}

	if (mIsSection) {
		if (mDebugHeapParent) {
			mDebugHeap = JKRExpHeap::create(0x100000, mDebugHeapParent, true);
#if defined(VERSION_PAL)
			P2ASSERTLINE(1340, mDebugHeap);
#elif defined(VERSION_JP)
			P2ASSERTLINE(1299, mDebugHeap);
#else
			P2ASSERTLINE(1339, mDebugHeap);
#endif
			mDisp                        = new (mDebugHeap, 0) DispMemberChallengeSelect;
			mDisp->mDebugExpHeap         = mDebugHeap;
			mDisp->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
			getOwner()->setDispMember(mDisp);
		} else {
#if defined(VERSION_PAL)
			JUT_PANICLINE(1350, "set DebugHeapParent. mail to morimun.\n");
#elif defined(VERSION_JP)
			JUT_PANICLINE(1309, "set DebugHeapParent. mail to morimun.\n");
#else
			JUT_PANICLINE(1349, "set DebugHeapParent. mail to morimun.\n");
#endif
		}
		mStageList = new Game::ChallengeGame::StageList;
		void* file = JKRDvdRipper::loadToMainRAM("/user/Matoba/challenge/stages.txt", nullptr, Switch_0, 0, nullptr,
		                                         JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
		if (file) {
			RamStream strm(file, -1);
			strm.setMode(STREAM_MODE_TEXT, 1);
			mStageList->read(strm);
		}
	}

	if (!mIsSection) {
		mDisp->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
	}

	if (mIsSection) {
		int id = randInt(30);
		if (mAllCourseOpen) {
			id = CHALLENGE_COURSE_COUNT;
		}
		selection  = randInt(id);
		mStageData = new DebugStageData*[CHALLENGE_COURSE_COUNT];
		for (int i = 0; i < CHALLENGE_COURSE_COUNT; i++) {
			mStageData[i]              = new DebugStageData;
			mStageData[i]->mIsPerfect  = false;
			mStageData[i]->mIsComplete = false;
			mStageData[i]->mIsChange   = false;
			mStageData[i]->mIsUnlocked = false;
			if (i <= id) {
				f32 comp = randFloat();
				if (comp < 0.2f) {
					mStageData[i]->mIsPerfect = true;
				} else if (comp < 0.5f) {
					mStageData[i]->mIsComplete = true;
				} else {
					mStageData[i]->mIsUnlocked = true;
				}
				if (!mStageData[i]->mIsPerfect) {
					if (randFloat() < 0.5f) {
						mStageData[i]->mIsChange = true;
					}
				}
				Game::ChallengeGame::StageData* data = mStageList->getStageData(i);
				if (data) {
					mStageData[i]->mFloors      = data->mFloorCounts;
					mStageData[i]->mBitterSpray = data->mStartNumBitter;
					mStageData[i]->mSpicySpray  = data->mStartNumSpicy;
					mStageData[i]->mPikis[0]    = 100;
					mStageData[i]->mPikis[1]    = data->mPikiContainer.getColorSum(0);
					mStageData[i]->mPikis[2]    = data->mPikiContainer.getColorSum(2);
					mStageData[i]->mPikis[3]    = data->mPikiContainer.getColorSum(4);
					mStageData[i]->mPikis[4]    = data->mPikiContainer.getColorSum(3);
					mStageData[i]->mScore1      = -1;
					mStageData[i]->mScore2      = -1;
					if (randFloat() < 0.5f) {
						mStageData[i]->mScore1 = randFloat() * 100000.0f;
						mStageData[i]->mScore2 = randFloat() * 100000.0f;
					}
				}
			}
		}
	}

	mCurrentSelection = selection;
	int offs          = selection / 5;
	mDownOffset       = offs;
	mRightOffset      = selection % 5;

	u64 tags[2] = { '4901_00', '4910_00' };
	mOffsMesg   = new TOffsetMsgSet(tags, '4900_00', 2);
	mControls   = getGamePad();

	char* paths[4] = { "timg/flower_seed.bti", "timg/leaf_icon.bti", "timg/flower_icon.bti", "timg/flower_p_icon.bti" };
	for (int i = 0; i < 4; i++) {
		mIconTexture[i] = static_cast<ResTIMG*>(mArchive->getResource(paths[i]));
#if defined(VERSION_PAL)
		P2ASSERTLINE(1465, mIconTexture[i]);
#elif defined(VERSION_JP)
		P2ASSERTLINE(1424, mIconTexture[i]);
#else
		P2ASSERTLINE(1464, mIconTexture[i]);
#endif
	}

	mPlayModeScreen = new TChallengePlayModeScreen(arc, 0);
	mPlayModeScreen->create("challenge_modo_1p_2p.blo", 0x20000);

	mRulesScreen = new TChallengeSelectExplanationWindow(arc, 5);
	mRulesScreen->create("challenge_rule_window.blo", 0x1040000);
	mRulesScreen->addAnim("challenge_rule_window.btk");
	mRulesScreen->addAnim("challenge_rule_window_02.btk");
	mRulesScreen->addAnim("challenge_rule_window_03.btk");
	mRulesScreen->addAnim("challenge_rule_window_04.btk");
	mRulesScreen->addAnim("challenge_rule_window_05.btk");

	mEfxDive        = new efx2d::T2DChalDive;
	JKRHeap* backup = JKRGetCurrentHeap();
	mDisp->mDebugExpHeap->becomeCurrentHeap();

	mSelectScreen = new TChallengeScreen(arc, 10);
	mSelectScreen->create("challengemodo_select.blo", 0x1040000);
	mSelectScreen->createAnimPane("challengemodo_select.bck");
	mSelectScreen->addAnim("challengemodo_select.bck");
	mSelectScreen->addAnim("challengemodo_select.bpk");
	mSelectScreen->addAnim("challengemodo_select.btk");
	mSelectScreen->addAnim("challengemodo_select_02.btk");
	mSelectScreen->addAnim("challengemodo_select_03.btk");
	mSelectScreen->addAnim("challengemodo_select_04.btk");
	mSelectScreen->addAnim("challengemodo_select_05.btk");
	mSelectScreen->addAnim("challengemodo_select_06.btk");
	mSelectScreen->addAnim("challengemodo_select_07.btk");
	mSelectScreen->addAnim("challengemodo_select_08.btk");

	P2DScreen::Mgr_tuning* screen = mSelectScreen->getScreenObj();

	mChallengePiki[0] = new TChallengePiki(screen->search('Pr_pk_l'), screen->search('Pr_pk_r'), screen->search('Pr_fw'));
	mChallengePiki[1] = new TChallengePiki(screen->search('Py_pk_l'), screen->search('Py_pk_r'), screen->search('Py_fw'));
	mChallengePiki[2] = new TChallengePiki(screen->search('Pb_pk_l'), screen->search('Pb_pk_r'), screen->search('Pb_fw'));
	mChallengePiki[3] = new TChallengePiki(screen->search('Pw_pk_r'), screen->search('PICT_020'), screen->search('Pw_fw'));
	mChallengePiki[4] = new TChallengePiki(screen->search('Pbl_pk_l'), screen->search('Pbl_pk_r'), screen->search('Pbl_fw'));

	mPaneLevelName[0] = screen->search('Tyel1');
	mPaneLevelName[1] = screen->search('Tyel2');
	for (int i = 0; i < 2; i++) {
#if defined(VERSION_PAL)
		P2ASSERTLINE(1526, mPaneLevelName[i]);
#elif defined(VERSION_JP)
		P2ASSERTLINE(1485, mPaneLevelName[i]);
#else
		P2ASSERTLINE(1525, mPaneLevelName[i]);
#endif
	}

	mDoping[0] = new TChallengeDoping(screen->search('PICT_013'), screen->search('PICT_023'), screen->search('PICT_022'),
	                                  screen->search('PICT_024'));
	mDoping[1] = new TChallengeDoping(screen->search('PICT_007'), screen->search('PICT_026'), screen->search('PICT_025'),
	                                  screen->search('PICT_027'));

	J2DPane* pane = screen->search('Peffect');
#if defined(VERSION_PAL)
	P2ASSERTLINE(1537, pane);
#elif defined(VERSION_JP)
	P2ASSERTLINE(1496, pane);
#else
	P2ASSERTLINE(1536, pane);
#endif
	pane->show();
	mPaneSelect = screen->search('Pselec00');
#if defined(VERSION_PAL)
	P2ASSERTLINE(1542, mPaneSelect);
#elif defined(VERSION_JP)
	P2ASSERTLINE(1501, mPaneSelect);
#else
	P2ASSERTLINE(1541, mPaneSelect);
#endif

	mHighScoreCounter[0] = setScaleUpCounter(screen, 'Phs1p1', &mHighScoreValue[0], 5, mArchive);
	mHighScoreCounter[1] = setScaleUpCounter(screen, 'Phs2p1', &mHighScoreValue[1], 5, mArchive);

	u64 countertags[5] = { 'Prp1', 'Pyp1', 'Pbp1', 'Pwp1', 'Pblp1' };
	for (int i = 0; i < 5; i++) {
		mPikiCounters[i] = setScaleUpCounter(screen, countertags[i], &mPikiCounts[i], 3, mArchive);
	}

	mDopeCounter[0] = setScaleUpCounter(screen, 'Pekis_p1', &mDopeCount[0], 2, mArchive);
	mDopeCounter[1] = setScaleUpCounter(screen, 'Pekis_r1', &mDopeCount[1], 2, mArchive);
	mFloorCounter   = setScaleUpCounter(screen, 'Pfloor1', &mFloorCount, 2, mArchive);

	// clang-format off
	u64 panelTags[30][3] = {
			'Pfl00', 'Pselec00', 'Pana00',
			'Pfl01', 'Pselec01', 'Pana01',
			'Pfl02', 'Pselec02', 'Pana02',
			'Pfl03', 'Pselec03', 'Pana03',
			'Pfl04', 'Pselec04', 'Pana04',
			'Pfl05', 'Pselec05', 'Pana09',
			'Pfl06', 'Pselec06', 'Pana08',
			'Pfl07', 'Pselec07', 'Pana07',
			'Pfl08', 'Pselec08', 'Pana06',
			'Pfl09', 'Pselec09', 'Pana05',
			'Pfl10', 'Pselec10', 'Pana14',
			'Pfl11', 'Pselec11', 'Pana13',
			'Pfl12', 'Pselec12', 'Pana12',
			'Pfl13', 'Pselec13', 'Pana11',
			'Pfl14', 'Pselec14', 'Pana10',
			'Pfl15', 'Pselec15', 'Pana19',
			'Pfl16', 'Pselec16', 'Pana18',
			'Pfl17', 'Pselec17', 'Pana17',
			'Pfl18', 'Pselec18', 'Pana16',
			'Pfl19', 'Pselec19', 'Pana15',
			'Pfl20', 'Pselec20', 'Pana24',
			'Pfl21', 'Pselec21', 'Pana23',
			'Pfl22', 'Pselec22', 'Pana22',
			'Pfl23', 'Pselec23', 'Pana21',
			'Pfl24', 'Pselec24', 'Pana20',
			'Pfl25', 'Pselec25', 'Pana29',
			'Pfl26', 'Pselec26', 'Pana28',
			'Pfl27', 'Pselec27', 'Pana27',
			'Pfl28', 'Pselec28', 'Pana26',
			'Pfl29', 'Pselec29', 'Pana25' };
	// clang-format on

	mPanelList = new TChallengePanel*[CHALLENGE_COURSE_COUNT];
	for (int i = 0; i < CHALLENGE_COURSE_COUNT; i++) {
		mPanelList[i] = new TChallengePanel(static_cast<J2DPictureEx*>(screen->search(panelTags[i][0])), screen->search(panelTags[i][1]),
		                                    screen->search(panelTags[i][2]));
		int state     = getState(i);
		mPanelList[i]->stateInitialize(mArchive, state, i);
		mPanelList[i]->mAfterState = getAfterState(i);
	}

	mMaxStages = getIndexMax();
	if (mMaxStages > 0) {
		mMaxStages--;
	}
	setInfo(mCurrentSelection);
	setStageName(mCurrentSelection);
	for (int i = 0; i <= mMaxStages; i++) {
		if (isChangeState(i)) {
			TChallengePanel* panel = mPanelList[i];
			if (panel->mState < 3) {
				panel->mIsUnlock = true;
			}
		}
	}

#if defined(VERSION_US_DEMO1) || defined(VERSION_PAL)

	if (JUTGamePad::mPadStatus[1].err == -1 || Game::gGameConfig.mParms.mNintendoVersion()) {
		mConnect2p = false;
	} else {
		mConnect2p = true;
	}
	mSelected1p = true;

#else

	mSelected1p = true;
	if (JUTGamePad::mPadStatus[1].err != -1) {
		mConnect2p = true;
	} else {
		mConnect2p = false;
	}

#endif

	if (mDisp->mPlayType == 1) {
		mSelected1p = false;
	}
	if (!mConnect2p) {
		mSelected1p = true;
	}

	mPlayModeScreen->createMetPicture(static_cast<ResTIMG*>(mArchive->getResource("timg/sphere.bti")));
	backup->becomeCurrentHeap();
}

/**
 * @note Address: 0x80390780
 * @note Size: 0x14CC
 */
bool TChallengeSelect::doUpdate()
{
	TChallengePlayModeScreen* screen;
	if (mPlayModeScreen->isState(TChallengePlayModeScreen::PlayModeScreen_Active) != 0) {
		// Check that player 2s controller is plugged in
#if defined(VERSION_US_DEMO1) || defined(VERSION_PAL)
		if (JUTGamePad::mPadStatus[1].err == -1 || Game::gGameConfig.mParms.mNintendoVersion()) {
#else
		if (JUTGamePad::mPadStatus[1].err == -1) {
#endif
			mConnect2p = false;
		} else {
			if (!mConnect2p) {
				mPlayModeScreen->mDoShowNoController = false;
			}
			mConnect2p = true;
		}
	}

	bool updatePanel = false;
	bool rulesClosed = false;
	if (!mRulesScreen->mState) {
		rulesClosed = true;
	}
	int oldSelState = mLevelNameMoveState;
	int oldID       = mCurrentSelection;

	if (mCanInput && mDisp->mStatus == Screen::Game2DMgr::CHECK2D_ChallengeSelect_Default
	    && !static_cast<TChallengeSelectScene*>(getOwner())->mConfirmEndWindow->mHasDrawn) {
		if (mControls->getButtonDown() & Controller::PRESS_Z && mPlayModeScreen->mState == 0) {
			if (mRulesScreen->mScaleGrowRate <= 0.0f) {
				openWindow();
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
			} else {
				closeWindow();
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
			}
		} else if (mControls->getButtonDown() & (Controller::PRESS_A | Controller::PRESS_START) && rulesClosed) {
			screen      = mPlayModeScreen;
			bool isOpen = screen->isOpen();
			if (isOpen) {
				if (screen->isState(2)) {
					if (mSelected1p || (mConnect2p && !mSelected1p)) {
						screen->setState(TChallengePlayModeScreen::PlayModeScreen_Close);
						if (!mIsSection) {
							_134 = true;
							demoStart();
							mDisp->mStatus = Screen::Game2DMgr::CHECK2D_ChallengeSelect_InDemo;
						}
						mDisp->mStageNumber = mCurrentSelection;
						mDisp->mPlayType    = 0;
						if (!mSelected1p) {
							mDisp->mPlayType = 1;
						}
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
					} else {
						screen->mDoShowNoController = true;
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
					}
				}
			} else {
				if (TChallengeSelect::mSelected1p) {
					screen->mAnimScreen[1]->blink(TChallengeSelect::mTextFlashVal, 0.0f);
					screen->mAnimScreen[2]->blink(0.0f, 0.0f);
				} else {
					screen->mAnimScreen[1]->blink(0.0f, 0.0f);
					screen->mAnimScreen[2]->blink(TChallengeSelect::mTextFlashVal, 0.0f);
				}
				mPlayModeScreen->mDoShowNoController = false;
				mPlayModeScreen->setState(TChallengePlayModeScreen::PlayModeScreen_Open);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
			}
		} else if (mControls->getButtonDown() & Controller::PRESS_B) {
			screen      = mPlayModeScreen;
			bool isOpen = screen->isOpen();
			if (isOpen) {
				if (screen->isState(2)) {
					screen->setState(TChallengePlayModeScreen::PlayModeScreen_Close);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				}
			} else {
				if (!rulesClosed) {
					closeWindow();
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				} else {
					mBgAlpha = 0;
					static_cast<TChallengeSelectScene*>(getOwner())->mConfirmEndWindow->start(nullptr);
				}
			}
		} else {
			bool isOpen = mPlayModeScreen->isOpen();
			if (!isOpen) {
				if (rulesClosed) {
					u32 button = mControls->getButton();
					if ((button & Controller::ANALOG_DOWN) || (button & Controller::PRESS_DPAD_DOWN)) {
						if (mStageChangeCounter == 0) {
							if (mLevelNameMoveState < 0)
								mLevelNameMoveState = 1;
							int max = mMaxStages;
							if (mDownOffset < max / 5 && mRightOffset + (mDownOffset + 1) * 5 <= max) {
								mDownOffset++;
								updatePanel = true;
							} else {
								updatePanel = true;
								mDownOffset = 0;
							}
						}
						mStageChangeCounter++;
					} else if ((button & Controller::ANALOG_UP) || (button & Controller::PRESS_DPAD_UP)) {
						if (mStageChangeCounter == 0) {
							if (mLevelNameMoveState < 0) {
								mLevelNameMoveState = 0;
							}
							if (mDownOffset > 0) {
								mDownOffset--;
								updatePanel = true;
							} else {
								int max     = mMaxStages;
								updatePanel = true;
								mDownOffset = max / 5;
								if (mRightOffset + mDownOffset * 5 > mMaxStages) {
									mDownOffset--;
								}
							}
						}
						mStageChangeCounter++;
					} else if ((button & Controller::ANALOG_RIGHT) || (button & Controller::PRESS_DPAD_RIGHT)) {
						if (mStageChangeCounter == 0) {
							if (mLevelNameMoveState < 0) {
								mLevelNameMoveState = 3;
							}

							if (mRightOffset < 4 && mRightOffset + mDownOffset * 5 < mMaxStages) {
								mRightOffset++;
								updatePanel = true;
							} else {
								mRightOffset = 0;
								updatePanel  = true;
							}
						}
						mStageChangeCounter++;
					} else if ((button & Controller::ANALOG_LEFT) || (button & Controller::PRESS_DPAD_LEFT)) {
						if (mStageChangeCounter == 0) {
							if (mLevelNameMoveState < 0) {
								mLevelNameMoveState = 2;
							}

							if (mRightOffset > 0) {
								mRightOffset--;
								updatePanel = true;
							} else {
								mRightOffset = 4;
								updatePanel  = true;
							}
						}
						mStageChangeCounter++;
					} else {
						mStageChangeCounter = 0;
						if (_14C < 1.0f) {
							_14C = 1.0f;
						}
						_14C += 0.2f;
						if (_14C >= 2.0f) {
							_14C = 2.0f;
						}
					}
				}
			} else {
				u32 button = mControls->getButton();
				if ((button & Controller::ANALOG_DOWN) || (button & Controller::PRESS_DPAD_DOWN)) {
					if (mSelected1p) {
						mPlayModeScreen->setBlink(mTextFlashVal);
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
					}
					mSelected1p = false;
				} else if ((button & Controller::ANALOG_UP) || (button & Controller::PRESS_DPAD_UP)) {
					if (!mSelected1p) {
						mPlayModeScreen->setBlink(mTextFlashVal);
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
					}
					mSelected1p                          = true;
					mPlayModeScreen->mDoShowNoController = false;
				}
			}
		}
	}

	if (mDisp->mDispWorldMapInfoWin0->mResult == 1 && !mIsSection) {
		_134           = false;
		mDisp->mStatus = Screen::Game2DMgr::CHECK2D_ChallengeSelect_InDemo;
		getOwner()->endScene(nullptr);
	}

	if (mRightOffset + mDownOffset * 5 >= mMaxStages) {
		mDownOffset  = mMaxStages / 5;
		mRightOffset = mMaxStages % 5;
		if (mRightOffset >= mMaxStages) {
			mRightOffset = mMaxStages;
		}
		mCurrentSelection = mRightOffset + mDownOffset * 5;
		if (mCurrentSelection > mMaxStages) {
			mCurrentSelection = 0;
		}
	}

	if (oldSelState >= 0 && oldSelState != mLevelNameMoveState) {
		mStageChangeCounter = 0;
		_14C                = 2.0f;
	}

	if (mStageChangeCounter > _14C * 8.0f) {
		mStageChangeCounter = 0;
		_14C *= 0.7f;
		if (_14C < 0.25f) {
			_14C = 0.25f;
		}
	}

	if (updatePanel) {
		mCurrentSelection = mRightOffset + mDownOffset * 5;
		if (oldID != mCurrentSelection) {
			_136 = true;
			setInfo(mCurrentSelection);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
			mPanelList[mCurrentSelection]->startScaleUp();
		} else {
			mStageChangeCounter = 0;
			_14C                = 2.0f;
		}
	}

	mSelectScreen->update();
	mPlayModeScreen->update();
	mRulesScreen->update();

	mFrameAnimAlpha = mSelectScreen->getScreenAlpha();
	if (mIsInDemo && mFrameAnimAlpha < 150) {
		mFrameAnimAlpha = 150;
	}

	// update the 30 level icons
	for (int i = 0; i < CHALLENGE_COURSE_COUNT; i++) {
		TChallengePanel* panel = mPanelList[i];
		panel->update(mCurrentSelection, updatePanel);
		if (i == mCurrentSelection || panel->mIsUnlock) {
			panel->addAlpha();
		} else {
			panel->decAlpha();
		}
		panel->alphaUpdate(1.0f);
	}

	// update the 5 pikmin types
	for (int i = 0; i < 5; i++) {
		mChallengePiki[i]->update();
	}

	// update the state of the level name when it moves
#if defined(VERSION_PAL)
	if (mDisp && mDisp->mStatus == Screen::Game2DMgr::CHECK2D_ChallengeSelect_InDemo) {
		mLevelNameMoveTimer += 0.25f;
		if (mLevelNameMoveState > 1) {
			mLevelNameMoveTimer += 0.15f;
		}
		if (mLevelNameMoveTimer > 1.0f) {
			mLevelNameMoveTimer = 1.0f;
			mLevelNameMoveState = -1;
		}
	} else
#endif
	    if (_136) {
		mLevelNameMoveTimer *= 0.65f;
		if (mLevelNameMoveTimer < 0.2f) {
			_136 = false;
			setStageName(mCurrentSelection);
			switch (mLevelNameMoveState) {
			case 0:
				mLevelNameMoveState = 1;
				break;
			case 1:
				mLevelNameMoveState = 0;
				break;
			case 2:
				mLevelNameMoveState = 3;
				break;
			case 3:
				mLevelNameMoveState = 2;
				break;
			}
		}
	} else if (f32(mStageChangeCounter) == 0.0f && _14C == 2.0f) {
		mLevelNameMoveTimer += 0.25f;
		if (mLevelNameMoveState > 1) {
			mLevelNameMoveTimer += 0.15f;
		}
		if (mLevelNameMoveTimer > 1.0f) {
			mLevelNameMoveTimer = 1.0f;
			mLevelNameMoveState = -1;
		}
	}

	// update spray bottles and the level name
	for (int i = 0; i < 2; i++) {
		mDoping[i]->update();

		// update the movement of the level name as needed
		mPaneLevelName[i]->setAlpha(255);
		f32 XGoal = 0.0f;
		f32 YGoal = 0.0f;
		f32 calc  = 1.0f - mLevelNameMoveTimer;
		switch (mLevelNameMoveState) {
		case 0:
			YGoal = 1.3f;
			break;
		case 1:
			YGoal = -1.3f;
			break;
		case 2:
#if defined(VERSION_PAL)
			XGoal = 1.4f;
#else
			XGoal = 1.25f;
#endif
			break;
		case 3:
#if defined(VERSION_PAL)
			XGoal = -1.4f;
#else
			XGoal = -1.25f;
#endif
			break;
		}
		J2DPane* namePane = mPaneLevelName[i];
		JGeometry::TVec2f size(namePane->getWidth(), namePane->getHeight());
		JGeometry::TVec2f offset;
		offset.x              = namePane->mTranslateX;
		offset.y              = namePane->mTranslateY;
		namePane->mTranslateX = calc * (XGoal * size.x) + offset.x;
		namePane->mTranslateY = calc * (YGoal * size.y) + offset.y;
		namePane->calcMtx();
	}

	// when in the entering demo, rotate the circular selection effect in the X axis
	if (mIsInDemo) {
		mSelectionEffectAngle += 5.0f;
		f32 max = -(mDownOffset * 5.0f - 90.0f);
		if (mSelectionEffectAngle > max) {
			mSelectionEffectAngle = max;
		}
	}
	mPanelList[mCurrentSelection]->mPane2->setAngleX(mSelectionEffectAngle);

	// Check ending the scene and beginning the game, once all pikmin are done moving
	if (mIsInDemo) {
		bool end = true;
		for (int i = 0; i < 5; i++) {
			if (!mChallengePiki[i]->isDemoEnd()) {
				end = false;
			}
		}

		if (end) {
			mEfxDive->fade();
#if !defined(VERSION_JP)
			if (mDivePikiNum > 0)
#endif
			{
				J2DPane* pane = mPanelList[mCurrentSelection]->mPane2;
				Vector2f pos(pane->mGlobalMtx[0][3], pane->mGlobalMtx[1][3]);
				efx2d::Arg arg(pos);
				efx2d::T2DChalDiveEnd efx;
				efx.create(&arg);
			}
			mIsInDemo = false;
			if (mIsSection) {
				reset();
			} else {
				getOwner()->endScene(nullptr);
			}
		}
	}

	// Check making a dive effect when needed
	if (mDivePikiNum && !mDoCreatePikiDiveEfx) {
		mDoCreatePikiDiveEfx = true;
		J2DPane* pane        = mPanelList[mCurrentSelection]->mPane2;
		Vector2f pos(pane->mGlobalMtx[0][3], pane->mGlobalMtx[1][3]);
		efx2d::Arg arg(pos);
		mEfxDive->create(&arg);
	}

	// debug for forcing the entering demo to start
	if (mIsSection && mForceDemoStart) {
		mForceDemoStart = false;
		demoStart();
	}

	return false;
}

/**
 * @note Address: 0x80391C4C
 * @note Size: 0x514
 */
void TChallengeSelect::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	mSelectScreen->draw(gfx, graf);

	gfx.mOrthoGraph.setPort();
	for (int i = 0; i < 5; i++) {
		mChallengePiki[i]->draw();
	}

	bool drawBg = false;
	if (static_cast<TChallengeSelectScene*>(getOwner())->mConfirmEndWindow->mHasDrawn) {
		drawBg = true;
		if (static_cast<TChallengeSelectScene*>(getOwner())->mConfirmEndWindow->mIsActive) {
			mBgAlpha += 20;
			if (mBgAlpha > 200) {
				mBgAlpha = 200;
			}
		} else {
			if (mBgAlpha > 20) {
				mBgAlpha -= 20;
			} else {
				mBgAlpha = 0;
			}
		}
	} else {
		int rulestate = mRulesScreen->mState;
		if (rulestate) {
			drawBg = true;
			if (rulestate == 3) {
				if (mBgAlpha > 25) {
					mBgAlpha -= 25;
				} else {
					mBgAlpha = 0;
				}
			} else {
				mBgAlpha += 20;
				if (mBgAlpha > 200) {
					mBgAlpha = 200;
				}
			}
		} else {
			if (mPlayModeScreen->isState(0) == false) {
				drawBg = true;
				if (mPlayModeScreen->isState(3)) {
					if (mBgAlpha > 30) {
						mBgAlpha -= 30;
					} else {
						mBgAlpha = 0;
					}

				} else {
					mBgAlpha += 20;
					if (mBgAlpha > 200) {
						mBgAlpha = 200;
					}
				}
			}
		}
	}

	gfx.mPerspGraph.setPort();

	if (drawBg) {
		JUtility::TColor color1;
		color1.set(0, 0, 80, 0);
		color1.a = mBgAlpha;
		drawFillScreen(graf, color1);
	}

	mPlayModeScreen->draw(gfx, graf);
	mRulesScreen->draw(gfx, graf);

	JUtility::TColor color1;
	color1.set(0, 0, 0, 255 - mFadeAlpha);
	drawFillScreen(graf, color1);
}

/**
 * @note Address: 0x80392160
 * @note Size: 0x78
 */
void TChallengeSelect::doUpdateFadeoutFinish()
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(2229, mDisp);
#elif defined(VERSION_JP)
	P2ASSERTLINE(2176, mDisp);
#elif defined(VERSION_US_DEMO1)
	P2ASSERTLINE(2220, mDisp);
#else
	P2ASSERTLINE(2218, mDisp);
#endif
	if (_134) {
		mDisp->mStatus = Screen::Game2DMgr::CHECK2D_ChallengeSelect_ExitFinished;
	} else {
		mDisp->mStatus = Screen::Game2DMgr::CHECK2D_ChallengeSelect_CancelToTitle;
	}
}

/**
 * @note Address: 0x803921D8
 * @note Size: 0x3F8
 */
void TChallengeSelect::setInfo(int stageID)
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(2241, stageID < CHALLENGE_COURSE_COUNT);
#elif defined(VERSION_JP)
	P2ASSERTLINE(2188, stageID < CHALLENGE_COURSE_COUNT);
#elif defined(VERSION_US_DEMO1)
	P2ASSERTLINE(2232, stageID < CHALLENGE_COURSE_COUNT);
#else
	P2ASSERTLINE(2230, stageID < CHALLENGE_COURSE_COUNT);
#endif

	if (mIsSection) {
		// debug way of setting stage data
		DebugStageData* data = mStageData[stageID];
		mPikiCounts[0]       = data->mPikis[0];
		mPikiCounts[1]       = data->mPikis[2];
		mPikiCounts[2]       = data->mPikis[1];
		mPikiCounts[3]       = data->mPikis[3];
		mPikiCounts[4]       = data->mPikis[4];
		mDopeCount[0]        = data->mBitterSpray;
		mDopeCount[1]        = data->mSpicySpray;
		mFloorCount          = data->mFloors;
		if (data->mScore1 == -1) {
			mHighScoreCounter[0]->setBlind(true);
		} else {
			mHighScoreValue[0] = data->mScore1;
			mHighScoreCounter[0]->setBlind(false);
		}

		if (data->mScore2 == -1) {
			mHighScoreCounter[1]->setBlind(true);
		} else {
			mHighScoreValue[1] = data->mScore2;
			mHighScoreCounter[1]->setBlind(false);
		}
	} else {
		// regular way of setting stage data
		Game::Challenge2D_TitleInfo::Info* info = (*mDisp->mTitleInfo)(stageID);
		mPikiCounts[0]                          = info->mPikiContainer->getColorSum(Game::Red);
		mPikiCounts[1]                          = info->mPikiContainer->getColorSum(Game::Yellow);
		mPikiCounts[2]                          = info->mPikiContainer->getColorSum(Game::Blue);
		mPikiCounts[3]                          = info->mPikiContainer->getColorSum(Game::White);
		mPikiCounts[4]                          = info->mPikiContainer->getColorSum(Game::Purple);
		mDopeCount[0]                           = info->mSprayCounts[0];
		mDopeCount[1]                           = info->mSprayCounts[1];
		mFloorCount                             = info->mFloorCount;

		if (info->mHighscore1P->getScore(0) == -1) {
			mHighScoreCounter[0]->setBlind(true);
		} else {
			mHighScoreValue[0] = info->mHighscore1P->getScore(0);
			mHighScoreCounter[0]->setBlind(false);
		}

		if (info->mHighscore2P->getScore(0) == -1) {
			mHighScoreCounter[1]->setBlind(true);
		} else {
			mHighScoreValue[1] = info->mHighscore2P->getScore(0);
			mHighScoreCounter[1]->setBlind(false);
		}
	}

	// make sure all new values are legal
#if defined(VERSION_PAL)
	JUT_ASSERTLINE(2306, mHighScoreValue[0] <= 1000000, "hiscore1p = %d\n", mHighScoreValue[0]);
#elif defined(VERSION_JP)
	JUT_ASSERTLINE(2253, mHighScoreValue[0] <= 1000000, "hiscore1p = %d\n", mHighScoreValue[0]);
#elif defined(VERSION_US_DEMO1)
	JUT_ASSERTLINE(2297, mHighScoreValue[0] <= 1000000, "hiscore1p = %d\n", mHighScoreValue[0]);
#else
	JUT_ASSERTLINE(2295, mHighScoreValue[0] <= 1000000, "hiscore1p = %d\n", mHighScoreValue[0]);
#endif
#if defined(VERSION_PAL)
	JUT_ASSERTLINE(2307, mHighScoreValue[1] <= 1000000, "hiscore2p = %d\n", mHighScoreValue[1]);
#elif defined(VERSION_JP)
	JUT_ASSERTLINE(2254, mHighScoreValue[1] <= 1000000, "hiscore2p = %d\n", mHighScoreValue[1]);
#elif defined(VERSION_US_DEMO1)
	JUT_ASSERTLINE(2298, mHighScoreValue[1] <= 1000000, "hiscore2p = %d\n", mHighScoreValue[1]);
#else
	JUT_ASSERTLINE(2296, mHighScoreValue[1] <= 1000000, "hiscore2p = %d\n", mHighScoreValue[1]);
#endif
	for (int i = 0; i < 5; i++) {
#if defined(VERSION_PAL)
		JUT_ASSERTLINE(2309, mPikiCounts[i] <= 100, "piki(%d) = %d\n", i, mPikiCounts[i]);
#elif defined(VERSION_JP)
		JUT_ASSERTLINE(2256, mPikiCounts[i] <= 100, "piki(%d) = %d\n", i, mPikiCounts[i]);
#elif defined(VERSION_US_DEMO1)
		JUT_ASSERTLINE(2300, mPikiCounts[i] <= 100, "piki(%d) = %d\n", i, mPikiCounts[i]);
#else
		JUT_ASSERTLINE(2298, mPikiCounts[i] <= 100, "piki(%d) = %d\n", i, mPikiCounts[i]);
#endif
	}
	for (int i = 0; i < 2; i++) {
#if defined(VERSION_PAL)
		JUT_ASSERTLINE(2313, mDopeCount[i] <= 100, "doping(%d) = %d\n", i, mDopeCount[i]);
#elif defined(VERSION_JP)
		JUT_ASSERTLINE(2260, mDopeCount[i] <= 100, "doping(%d) = %d\n", i, mDopeCount[i]);
#elif defined(VERSION_US_DEMO1)
		JUT_ASSERTLINE(2304, mDopeCount[i] <= 100, "doping(%d) = %d\n", i, mDopeCount[i]);
#else
		JUT_ASSERTLINE(2302, mDopeCount[i] <= 100, "doping(%d) = %d\n", i, mDopeCount[i]);
#endif
	}
#if defined(VERSION_PAL)
	JUT_ASSERTLINE(2316, mFloorCount <= 100, "floor = %d\n", mFloorCount);
#elif defined(VERSION_JP)
	JUT_ASSERTLINE(2263, mFloorCount <= 100, "floor = %d\n", mFloorCount);
#elif defined(VERSION_US_DEMO1)
	JUT_ASSERTLINE(2307, mFloorCount <= 100, "floor = %d\n", mFloorCount);
#else
	JUT_ASSERTLINE(2305, mFloorCount <= 100, "floor = %d\n", mFloorCount);
#endif

	// make all the counters shake
	for (int i = 0; i < 2; i++) {
		mHighScoreCounter[i]->forceScaleUp(true);
		mDopeCounter[i]->forceScaleUp(true);
		mDoping[i]->setLevel(mDopeCount[i]);
	}
	for (int i = 0; i < 5; i++) {
		mPikiCounters[i]->forceScaleUp(true);
	}
	mFloorCounter->forceScaleUp(true);
}

/**
 * @note Address: 0x803925D0
 * @note Size: 0xD0
 */
void TChallengeSelect::setStageName(int id)
{
	J2DPane* pane1 = mPaneLevelName[0];
	if (mIsSection) {
		Game::ChallengeGame::StageData* data = mStageList->getStageData(id);
		pane1->setMsgID(mOffsMesg->getMsgID(data->mStageIndex - 1));
		pane1 = mPaneLevelName[1];
		pane1->setMsgID(mOffsMesg->getMsgID(data->mStageIndex - 1));
	} else {
		Game::Challenge2D_TitleInfo& title      = *mDisp->mTitleInfo;
		Game::Challenge2D_TitleInfo::Info* info = title(id);
		pane1->setMsgID(mOffsMesg->getMsgID(info->mStageIndex - 1));
		pane1 = mPaneLevelName[1];
		pane1->setMsgID(mOffsMesg->getMsgID(info->mStageIndex - 1));
	}
}

/**
 * @note Address: 0x803926A0
 * @note Size: 0x12C
 */
int TChallengeSelect::getState(int id)
{
	FORCE_DONT_INLINE; // bad but needed for isChangeState, unless theres a proper way

#if defined(VERSION_PAL)
	P2ASSERTLINE(2370, id < CHALLENGE_COURSE_COUNT);
#elif defined(VERSION_JP)
	P2ASSERTLINE(2317, id < CHALLENGE_COURSE_COUNT);
#elif defined(VERSION_US_DEMO1)
	P2ASSERTLINE(2361, id < CHALLENGE_COURSE_COUNT);
#else
	P2ASSERTLINE(2359, id < CHALLENGE_COURSE_COUNT);
#endif
	if (mIsSection) {
		if (mStageData[id]->mIsPerfect) {
			return TChallengePanel::ChallengePanel_Perfect;
		}
		if (mStageData[id]->mIsComplete) {
			return TChallengePanel::ChallengePanel_Cleared;
		}
		if (mStageData[id]->mIsUnlocked) {
			return TChallengePanel::ChallengePanel_Unbeaten;
		}
	} else {
		u8 flag = (*mDisp->mTitleInfo)(id)->mDisplayFlag.typeView;
		if (flag & 0x20) {
			return (int)(-(flag >> 4 & 1)) + 2; // highly questionable
		}
		if (flag & 0x10) {
			return TChallengePanel::ChallengePanel_Unbeaten;
		}
		if (flag & 8) {
			return TChallengePanel::ChallengePanel_NotOpen;
		}
		if (flag & 4) {
			return TChallengePanel::ChallengePanel_Perfect;
		}
		if (flag & 2) {
			return TChallengePanel::ChallengePanel_Cleared;
		}
		if (flag & 1) {
			return TChallengePanel::ChallengePanel_Unbeaten;
		}
	}
	return TChallengePanel::ChallengePanel_NotOpen;
}

/**
 * @note Address: 0x803927CC
 * @note Size: 0xA4
 */
int TChallengeSelect::getAfterState(int id)
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(2420, id < CHALLENGE_COURSE_COUNT);
#elif defined(VERSION_JP)
	P2ASSERTLINE(2367, id < CHALLENGE_COURSE_COUNT);
#elif defined(VERSION_US_DEMO1)
	P2ASSERTLINE(2411, id < CHALLENGE_COURSE_COUNT);
#else
	P2ASSERTLINE(2409, id < CHALLENGE_COURSE_COUNT);
#endif
	if (mIsSection) {
		return TChallengePanel::ChallengePanel_Perfect;
	} else {
		Game::Challenge2D_TitleInfo::Info* info = (*mDisp->mTitleInfo)(id);
		if (info->mDisplayFlag.isSet(Game::PlayChallengeGameData::CourseState::CSF_IsKunsho)) {
			return TChallengePanel::ChallengePanel_Perfect;
		} else if (info->mDisplayFlag.isSet(Game::PlayChallengeGameData::CourseState::CSF_IsClear)) {
			return TChallengePanel::ChallengePanel_Cleared;
		} else if (info->mDisplayFlag.isSet(Game::PlayChallengeGameData::CourseState::CSF_IsOpen)) {
			return TChallengePanel::ChallengePanel_Unbeaten;
		}
		return TChallengePanel::ChallengePanel_NotOpen;
	}
}

/**
 * @note Address: 0x80392870
 * @note Size: 0xE4
 */
bool TChallengeSelect::isChangeState(int id)
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(2446, id < CHALLENGE_COURSE_COUNT);
#elif defined(VERSION_JP)
	P2ASSERTLINE(2393, id < CHALLENGE_COURSE_COUNT);
#elif defined(VERSION_US_DEMO1)
	P2ASSERTLINE(2437, id < CHALLENGE_COURSE_COUNT);
#else
	P2ASSERTLINE(2435, id < CHALLENGE_COURSE_COUNT);
#endif
	if (mIsSection) {
		if (mStageData[id]->mIsChange)
			return true;
	} else {
		Game::Challenge2D_TitleInfo::Info* info = (*mDisp->mTitleInfo)(id);
		getState(id);
		if (info->mDisplayFlag.isSet(8)) {
			return true;
		}
		if (info->mDisplayFlag.isSet(16)) {
			return true;
		}
		if (info->mDisplayFlag.isSet(32)) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x80392954
 * @note Size: 0x1CC
 */
int TChallengeSelect::getIndexMax()
{
	if (mIsSection) {
		for (int i = 0; i < CHALLENGE_COURSE_COUNT; i++) {
			if (mPanelList[i]->mState == TChallengePanel::ChallengePanel_NotOpen) {
				return i;
			}
		}
	} else {
		for (int i = 0; i < CHALLENGE_COURSE_COUNT; i++) {
			Game::Challenge2D_TitleInfo::Info* info = (*mDisp->mTitleInfo)(i);
			if (mPanelList[i]->mState == TChallengePanel::ChallengePanel_NotOpen && !(info->mDisplayFlag.isSet(8))) {
				return i;
			}
		}
	}
	return CHALLENGE_COURSE_COUNT;
}

/**
 * @note Address: 0x80392B20
 * @note Size: 0x24
 */
void TChallengeSelect::openWindow()
{
	mRulesScreen->openWindow();
}

/**
 * @note Address: 0x80392B44
 * @note Size: 0x24
 */
void TChallengeSelect::closeWindow()
{
	mRulesScreen->closeWindow();
}

/**
 * @note Address: 0x80392B68
 * @note Size: 0x140
 */
void TChallengeSelect::reset()
{
	mIsInDemo             = false;
	mSelectionEffectAngle = 0.0f;
	for (int i = 0; i < 5; i++) {
		mChallengePiki[i]->reset();
		mChallengePiki[i]->mMaxPiki = mPikiCounts[i];
	}
	mDivePikiNum         = 0;
	mDoCreatePikiDiveEfx = false;
}

/**
 * @note Address: N/A
 * @note Size: 0x374
 */
void TChallengeSelect::jumpStart()
{
	J2DPane* pane = mPanelList[mCurrentSelection]->mPane2;
	Vector2f pos(pane->mGlobalMtx[0][3], pane->mGlobalMtx[1][3]);

	for (int i = 0; i < 5; i++) {
		mChallengePiki[i]->setGoalPos(pos);
		mChallengePiki[i]->jumpStart(i * -0.5f);
	}
}

/**
 * @note Address: 0x80392CA8
 * @note Size: 0x4C0
 */
void TChallengeSelect::demoStart()
{
	reset();
	mIsInDemo = true;
	jumpStart();
}

/**
 * @note Address: 0x80393168
 * @note Size: 0x9C
 */
void TChallengeSelectScene::doCreateObj(JKRArchive* arc)
{
	TChallengeSelect* obj = new TChallengeSelect;
	registObj(obj, arc);
	mObject = obj;

	mConfirmEndWindow = new TConfirmEndWindow("endWindow");
	registObj(mConfirmEndWindow, arc);
}

/**
 * @note Address: 0x80393204
 * @note Size: 0x34
 */
bool TChallengeSelectScene::doStart(Screen::StartSceneArg* arg)
{
	mObject->start(arg);
	return true;
}

} // namespace Morimura
