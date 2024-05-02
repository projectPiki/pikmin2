#include "types.h"
#include "og/Screen/anime.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "og/Screen/ogScreen.h"
#include "System.h"

namespace og {
namespace Screen {

/**
 * __ct__Q32og6Screen12AnimBaseBaseFv
 *
 * @note Address: N/A
 * @note Size: 0x88
 */
AnimBaseBase::AnimBaseBase()
{
	mType           = 0;
	mCurrentFrame   = 0.0f;
	mLastFrame      = 1.0f;
	mSpeed          = 1.0f;
	mSpeedSub       = 1.0f;
	mIsRepeating    = true;
	mUnusedFlag     = false;
	mMinFrame       = 0.0f;
	mArea           = 1.0f;
	mLength         = mArea - mMinFrame;
	mDeltaTime      = sys->mDeltaTime / SINGLE_FRAME_LENGTH;
	mAnm            = nullptr;
	mResourcePath   = nullptr;
	mIsInStartDelay = false;
	mTimer          = 0.0f;
	mDoDelayUpdate  = 1;
	mAlpha          = 255;
	mDoSetAlpha     = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void AnimBaseBase::setArea(f32 frame, f32 area)
{
	mMinFrame      = frame;
	mArea          = area;
	mLength        = area - frame;
	mCurrentFrame  = frame;
	mDoDelayUpdate = 1;
}

/**
 * init__Q32og6Screen12AnimBaseBaseFP10JKRArchivePc
 *
 * @note Address: N/A
 * @note Size: 0x10C
 */
void AnimBaseBase::init(JKRArchive* archive, char* resourcePath)
{
	mResourcePath = resourcePath;

	void* resource = JKRFileLoader::getGlbResource(resourcePath, archive);
	JUT_ASSERTLINE(87, resource, "no name resource (%s) \n", resourcePath);
	mAnm = J2DAnmLoaderDataBase::load(resource);

	mLastFrame      = mAnm->mTotalFrameCount - 1;
	mMinFrame       = 0.0f;
	mArea           = mLastFrame;
	mLength         = mArea - mMinFrame;
	mIsInStartDelay = false;
	mTimer          = 0.0f;
	mDoDelayUpdate  = 1;

	OSInitFastCast();
}

/**
 * @note Address: 0x80304CB0
 * @note Size: 0x10
 */
void AnimBaseBase::start(f32 p1)
{
	mIsInStartDelay = true;
	mTimer          = p1;
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void AnimBaseBase::setAllArea()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80304CC0
 * @note Size: 0x150
 */
bool AnimBaseBase::updateSub()
{
	bool result = true;

	mUnusedFlag = false;
	if (mDoDelayUpdate != 0) {
		mDoDelayUpdate = 0;
	} else {
		mCurrentFrame += mSpeed * mDeltaTime * mSpeedSub;
		if (mCurrentFrame > mArea) {
			if (mIsRepeating) {
				f32 temp = mCurrentFrame - mArea;
				if (temp >= mLength) {
					temp = 0.0f;
				}

				mCurrentFrame = mMinFrame + temp;
				mUnusedFlag   = true;
			} else {
				mCurrentFrame = mArea;
				moveAnim();
				result = false;
			}
		} else if (mCurrentFrame < mMinFrame) {
			if (mIsRepeating) {
				f32 temp = mMinFrame - mCurrentFrame;
				if (temp >= mLength) {
					temp = 0.0f;
				}

				mCurrentFrame = mArea - temp;
				mUnusedFlag   = true;
			} else {
				mCurrentFrame = mMinFrame;
				moveAnim();
				result = false;
			}
		}
	}

	if (result) {
		moveAnim();
	}

	return result;
}

/**
 * update__Q32og6Screen12AnimBaseBaseFv
 *
 * @note Address: 0x80304E10
 * @note Size: 0x78
 */
bool AnimBaseBase::update()
{
	if (mIsInStartDelay) {
		mTimer -= sys->mDeltaTime;
		if (mTimer <= 0.0f) {
			mIsInStartDelay = false;
			mTimer          = 0.0f;
			start();
		}

		return true;
	}

	return updateSub();
}

/**
 * __ct__Q32og6Screen10AnimScreenFv
 *
 * @note Address: 0x80304E88
 * @note Size: 0x9C
 */
AnimScreen::AnimScreen()
{
	mScreen = nullptr;
	mType   = 1;
}

/**
 * init__Q32og6Screen10AnimScreenFP10JKRArchiveP9J2DScreenPc
 *
 * @note Address: 0x80304F24
 * @note Size: 0x164
 */
void AnimScreen::init(JKRArchive* archive, J2DScreen* screen, char* resourcePath)
{
	AnimBaseBase::init(archive, resourcePath);
	updateScreen(screen, mAnm);
	moveAnim();
}

/**
 * start__Q32og6Screen10AnimScreenFv
 *
 * @note Address: 0x80305088
 * @note Size: 0x90
 */
void AnimScreen::start()
{
	if (mScreen) {
		mIsInStartDelay = false;
		mTimer          = 0.0f;
		mDoDelayUpdate  = 1;
		update();
	}
}

/**
 * @note Address: 0x80305118
 * @note Size: 0x60
 */
void AnimScreen::moveAnim()
{
	mAnm->mCurrentFrame = mCurrentFrame;
	mScreen->animation();
	if (mDoSetAlpha != 0) {
		mScreen->setAlpha(mAlpha);
	}
}

/**
 * __ct__Q32og6Screen8AnimPaneFv
 *
 * @note Address: 0x80305178
 * @note Size: 0xA0
 */
AnimPane::AnimPane()
{
	mPane = nullptr;
	mType = 2;
}

/**
 * init__Q32og6Screen8AnimPaneFP10JKRArchiveP9J2DScreenUxPc
 *
 * @note Address: 0x80305218
 * @note Size: 0x150
 */
void AnimPane::init(JKRArchive* archive, J2DScreen* parentScreen, u64 tag, char* resourcePath)
{
	AnimBaseBase::init(archive, resourcePath);
	updatePane(parentScreen, tag, mAnm);
}

/**
 * start__Q32og6Screen8AnimPaneFv
 *
 * @note Address: 0x80305368
 * @note Size: 0x90
 */
void AnimPane::start()
{
	if (mPane) {
		mIsInStartDelay = false;
		mTimer          = 0.0f;
		mDoDelayUpdate  = 1;
		update();
	}
}

/**
 * moveAnim__Q32og6Screen8AnimPaneFv
 *
 * @note Address: 0x803053F8
 * @note Size: 0x60
 */
void AnimPane::moveAnim()
{
	mAnm->mCurrentFrame = mCurrentFrame;
	mPane->animationTransform();
	if (mDoSetAlpha != 0) {
		mPane->setAlpha(mAlpha);
	}
}

/**
 * __ct__Q32og6Screen9AnimGroupFi
 *
 * @note Address: 0x80305458
 * @note Size: 0x90
 */
AnimGroup::AnimGroup(int limit)
{
	mAnimPanes = new AnimBaseBase*[limit];

	mPaneCount = 0;
	mPaneLimit = limit;
	for (int i = 0; i < mPaneLimit; i++) {
		mAnimPanes[i] = nullptr;
	}

	mNeedRestart = 0;
	_10          = 0.0f;
	mMinFrame    = 0.0f;
	mMaxFrame    = 0.0f;
}

/* setAnim__Q32og6Screen9AnimGroup
 * @note Address: N/A
 * @note Size: 0x64
 */
void AnimGroup::setAnim(og::Screen::AnimBaseBase* newAnim)
{
	int count = mPaneCount;
	if (count >= mPaneLimit) {
		JUT_PANICLINE(323, "anim group is overflow!!\n");
		return;
	}

	mAnimPanes[count] = newAnim;
	mPaneCount++;
}

/**
 * update__Q32og6Screen9AnimGroupFv
 *
 * @note Address: 0x803054E8
 * @note Size: 0x1C0
 */
bool AnimGroup::update()
{
	bool anyUpdated = false;
	for (int i = 0; i < mPaneLimit; i++) {
		if (mAnimPanes[i]) {
			bool updateResult = true;
			switch (mAnimPanes[i]->mType) {
			case 1:
				updateResult = mAnimPanes[i]->update();
				break;
			case 2:
				updateResult = mAnimPanes[i]->update();
				break;
			default:
				break;
			}

			if (updateResult) {
				anyUpdated = true;
			}
		}
	}

	// TODO: Fix naming of getVal inline when we know what _10 is in AnimGroup
	if (mNeedRestart && (int)getFrame() == (int)getVal()) {
		setArea(mMinFrame, mMaxFrame);
		start();
		mNeedRestart = false;
	}

	return anyUpdated;
}

/**
 * @note Address: 0x803056A8
 * @note Size: 0x5C
 */
void AnimGroup::setSpeed(f32 speed)
{
	for (int i = 0; i < mPaneLimit; i++) {
		if (mAnimPanes[i]) {
			switch (mAnimPanes[i]->mType) {
			case 1:
				mAnimPanes[i]->mSpeed = speed;
				break;
			case 2:
				mAnimPanes[i]->mSpeed = speed;
				break;
			}
		}
	}
}

/**
 * @note Address: 0x80305704
 * @note Size: 0x5C
 */
void AnimGroup::setRepeat(bool repeat)
{
	for (int i = 0; i < mPaneLimit; i++) {
		if (mAnimPanes[i]) {
			switch (mAnimPanes[i]->mType) {
			case 1:
				mAnimPanes[i]->mIsRepeating = repeat;
				break;
			case 2:
				mAnimPanes[i]->mIsRepeating = repeat;
				break;
			}
		}
	}
}

/**
 * @note Address: 0x80305760
 * @note Size: 0x5C
 */
void AnimGroup::setFrame(f32 frame)
{
	for (int i = 0; i < mPaneLimit; i++) {
		if (mAnimPanes[i]) {
			switch (mAnimPanes[i]->mType) {
			case 1:
				mAnimPanes[i]->mCurrentFrame = frame;
				break;
			case 2:
				mAnimPanes[i]->mCurrentFrame = frame;
				break;
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void AnimGroup::setAlpha(u8 alpha)
{
	// UNUSED FUNCTION
	// TODO: Confirm size.
	for (int i = 0; i < mPaneLimit; i++) {
		if (mAnimPanes[i]) {
			mAnimPanes[i]->mAlpha = alpha;
		}
	}
}

/**
 * setAllArea__Q32og6Screen9AnimGroupFv
 *
 * @note Address: 0x803057BC
 * @note Size: 0x54
 */
void AnimGroup::setAllArea()
{
	for (int i = 0; i < mPaneLimit; i++) {
		AnimBaseBase* pane = mAnimPanes[i];

		if (pane) {
			pane->mMinFrame = 0.0f;
			pane->mArea     = pane->mLastFrame;
			pane->mLength   = pane->mArea - pane->mMinFrame;
		}
	}
}

/**
 * @note Address: 0x80305810
 * @note Size: 0x20
 */
f32 AnimGroup::getFrame()
{
	f32 result = 0.0f;

	if (mPaneCount > 0) {
		result = mAnimPanes[0]->mCurrentFrame;
	}

	return result;
}

/**
 * setArea__Q32og6Screen9AnimGroupFff
 *
 * @note Address: 0x80305830
 * @note Size: 0x88
 */
void AnimGroup::setArea(f32 min, f32 max)
{
	for (int i = 0; i < mPaneLimit; i++) {
		if (mAnimPanes[i]) {
			switch (mAnimPanes[i]->mType) {
			case 1:
				mAnimPanes[i]->setArea(min, max);
				break;
			case 2:
				mAnimPanes[i]->setArea(min, max);
				break;
			}
		}
	}
}

/**
 * start__Q32og6Screen9AnimGroupFv
 *
 * @note Address: 0x803058B8
 * @note Size: 0xA8
 */
void AnimGroup::start()
{
	for (int i = 0; i < mPaneLimit; i++) {
		if (mAnimPanes[i]) {
			switch (mAnimPanes[i]->mType) {
			case 1:
				mAnimPanes[i]->start();
				break;
			case 2:
				mAnimPanes[i]->start();
				break;
			}
		}
	}
}

/**
 * @note Address: 0x80305960
 * @note Size: 0x18
 */
void AnimGroup::reservAnim(f32 p1, f32 min, f32 max)
{
	mNeedRestart = true;
	_10          = p1;
	mMinFrame    = min;
	mMaxFrame    = max;
}

/**
 * @note Address: 0x80305978
 * @note Size: 0x20
 */
f32 AnimGroup::getLastFrame()
{
	f32 result = 0.0f;

	if (mPaneCount > 0) {
		result = mAnimPanes[0]->mLastFrame;
	}

	return result;
}

/**
 * @note Address: 0x80305998
 * @note Size: 0x254
 */
void registAnimGroupScreen(AnimGroup* group, JKRArchive* archive, J2DScreen* screen, char* resourcePath, f32 speed)
{
	AnimScreen* newGroupScreen = new AnimScreen;
	newGroupScreen->init(archive, screen, resourcePath);
	newGroupScreen->mSpeedSub = speed;
	group->setAnim(newGroupScreen);
}

/**
 * @note Address: 0x80305BEC
 * @note Size: 0x25C
 */
void registAnimGroupPane(AnimGroup* group, JKRArchive* archive, J2DScreen* parentScreen, u64 tag, char* resourcePath, f32 speed)
{
	AnimPane* newGroupPane = new AnimPane;
	newGroupPane->init(archive, parentScreen, tag, resourcePath);
	newGroupPane->mSpeedSub = speed;
	group->setAnim(newGroupPane);
}

} // namespace Screen
} // namespace og
