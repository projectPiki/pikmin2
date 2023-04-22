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

/*
 * __ct__Q32og6Screen12AnimBaseBaseFv
 *
 * --INFO--
 * Address:	........
 * Size:	000088
 */
AnimBaseBase::AnimBaseBase()
{
	mType         = 0;
	mCurrentFrame = 0.0f;
	mLastFrame    = 1.0f;
	mSpeed        = 1.0f;
	_24           = 1.0f;
	mIsRepeating  = true;
	_39           = false;
	_2C           = 0.0f;
	mArea         = 1.0f;
	_34           = mArea - _2C;
	_28           = sys->mDeltaTime / SINGLE_FRAME_LENGTH;
	mAnm          = nullptr;
	mResourcePath = nullptr;
	_08           = false;
	_0C           = 0.0f;
	_10           = 1;
	mAlpha        = 255;
	mDoSetAlpha   = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void AnimBaseBase::setArea(f32 frame, f32 area)
{
	_2C           = frame;
	mArea         = area;
	_34           = area - frame;
	mCurrentFrame = frame;
	_10           = 1;
}

/*
 * init__Q32og6Screen12AnimBaseBaseFP10JKRArchivePc
 *
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void AnimBaseBase::init(JKRArchive* archive, char* resourcePath)
{
	mResourcePath = resourcePath;

	void* resource = JKRFileLoader::getGlbResource(resourcePath, archive);
	JUT_ASSERTLINE(87, resource, "no name resource (%s) \n", resourcePath);
	mAnm = J2DAnmLoaderDataBase::load(resource);

	mLastFrame = mAnm->mFrameLength - 1;
	_2C        = 0.0f;
	mArea      = mLastFrame;
	_34        = mArea - _2C;
	_08        = false;
	_0C        = 0.0f;
	_10        = 1;

	OSInitFastCast();
}

/*
 * --INFO--
 * Address:	80304CB0
 * Size:	000010
 */
void AnimBaseBase::start(f32 p1)
{
	_08 = true;
	_0C = p1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void AnimBaseBase::setAllArea()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80304CC0
 * Size:	000150
 */
bool AnimBaseBase::updateSub()
{
	bool result = true;

	_39 = false;
	if (_10 != 0) {
		_10 = 0;
	} else {
		mCurrentFrame += mSpeed * _28 * _24;
		if (mCurrentFrame > mArea) {
			if (mIsRepeating) {
				f32 temp = mCurrentFrame - mArea;
				if (temp >= _34) {
					temp = 0.0f;
				}

				mCurrentFrame = _2C + temp;
				_39           = true;
			} else {
				mCurrentFrame = mArea;
				moveAnim();
				result = false;
			}
		} else if (mCurrentFrame < _2C) {
			if (mIsRepeating) {
				f32 temp = _2C - mCurrentFrame;
				if (temp >= _34) {
					temp = 0.0f;
				}

				mCurrentFrame = mArea - temp;
				_39           = true;
			} else {
				mCurrentFrame = _2C;
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

/*
 * update__Q32og6Screen12AnimBaseBaseFv
 *
 * --INFO--
 * Address:	80304E10
 * Size:	000078
 */
bool AnimBaseBase::update()
{
	if (_08) {
		_0C -= sys->mDeltaTime;
		if (_0C <= 0.0f) {
			_08 = false;
			_0C = 0.0f;
			start();
		}

		return true;
	}

	return updateSub();
}

/*
 * __ct__Q32og6Screen10AnimScreenFv
 *
 * --INFO--
 * Address:	80304E88
 * Size:	00009C
 */
AnimScreen::AnimScreen()
{
	mScreen = nullptr;
	mType   = 1;
}

/*
 * init__Q32og6Screen10AnimScreenFP10JKRArchiveP9J2DScreenPc
 *
 * --INFO--
 * Address:	80304F24
 * Size:	000164
 */
void AnimScreen::init(JKRArchive* archive, J2DScreen* screen, char* resourcePath)
{
	AnimBaseBase::init(archive, resourcePath);
	updateScreen(screen, mAnm);
	moveAnim();
}

/*
 * start__Q32og6Screen10AnimScreenFv
 *
 * --INFO--
 * Address:	80305088
 * Size:	000090
 */
void AnimScreen::start()
{
	if (mScreen) {
		_08 = false;
		_0C = 0.0f;
		_10 = 1;
		update();
	}
}

/*
 * --INFO--
 * Address:	80305118
 * Size:	000060
 */
void AnimScreen::moveAnim()
{
	mAnm->mCurrentFrame = mCurrentFrame;
	mScreen->animation();
	if (mDoSetAlpha != 0) {
		mScreen->setAlpha(mAlpha);
	}
}

/*
 * __ct__Q32og6Screen8AnimPaneFv
 *
 * --INFO--
 * Address:	80305178
 * Size:	0000A0
 */
AnimPane::AnimPane()
{
	mPane = nullptr;
	mType = 2;
}

/*
 * init__Q32og6Screen8AnimPaneFP10JKRArchiveP9J2DScreenUxPc
 *
 * --INFO--
 * Address:	80305218
 * Size:	000150
 */
void AnimPane::init(JKRArchive* archive, J2DScreen* parentScreen, u64 tag, char* resourcePath)
{
	AnimBaseBase::init(archive, resourcePath);
	updatePane(parentScreen, tag, mAnm);
}

/*
 * start__Q32og6Screen8AnimPaneFv
 *
 * --INFO--
 * Address:	80305368
 * Size:	000090
 */
void AnimPane::start()
{
	if (mPane) {
		_08 = false;
		_0C = 0.0f;
		_10 = 1;
		update();
	}
}

/*
 * moveAnim__Q32og6Screen8AnimPaneFv
 *
 * --INFO--
 * Address:	803053F8
 * Size:	000060
 */
void AnimPane::moveAnim()
{
	mAnm->mCurrentFrame = mCurrentFrame;
	mPane->animationTransform();
	if (mDoSetAlpha != 0) {
		mPane->setAlpha(mAlpha);
	}
}

/*
 * __ct__Q32og6Screen9AnimGroupFi
 *
 * --INFO--
 * Address:	80305458
 * Size:	000090
 */
AnimGroup::AnimGroup(int limit)
{
	mAnimPanes = new AnimBaseBase*[limit];

	mPaneCount = 0;
	mPaneLimit = limit;
	for (int i = 0; i < mPaneLimit; i++) {
		mAnimPanes[i] = nullptr;
	}

	_0C = 0;
	_10 = 0.0f;
	_14 = 0.0f;
	_18 = 0.0f;
}

/* setAnim__Q32og6Screen9AnimGroup
 * --INFO--
 * Address:	........
 * Size:	000064
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

/*
 * update__Q32og6Screen9AnimGroupFv
 *
 * --INFO--
 * Address:	803054E8
 * Size:	0001C0
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
	if (_0C && (int)getFrame() == (int)getVal()) {
		setArea(_14, _18);
		start();
		_0C = 0;
	}

	return anyUpdated;
}

/*
 * --INFO--
 * Address:	803056A8
 * Size:	00005C
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
			default:
				break;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80305704
 * Size:	00005C
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
			default:
				break;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80305760
 * Size:	00005C
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
			default:
				break;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
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

/*
 * setAllArea__Q32og6Screen9AnimGroupFv
 *
 * --INFO--
 * Address:	803057BC
 * Size:	000054
 */
void AnimGroup::setAllArea()
{
	for (int i = 0; i < mPaneLimit; i++) {
		AnimBaseBase* pane = mAnimPanes[i];

		if (pane) {
			pane->_2C   = 0.0f;
			pane->mArea = pane->mLastFrame;
			pane->_34   = pane->mArea - pane->_2C;
		}
	}
}

/*
 * --INFO--
 * Address:	80305810
 * Size:	000020
 */
f32 AnimGroup::getFrame()
{
	f32 result = 0.0f;

	if (mPaneCount > 0) {
		result = mAnimPanes[0]->mCurrentFrame;
	}

	return result;
}

/*
 * setArea__Q32og6Screen9AnimGroupFff
 *
 * --INFO--
 * Address:	80305830
 * Size:	000088
 */
void AnimGroup::setArea(f32 frame, f32 area)
{
	for (int i = 0; i < mPaneLimit; i++) {
		if (mAnimPanes[i]) {
			switch (mAnimPanes[i]->mType) {
			case 1:
				mAnimPanes[i]->setArea(frame, area);
				break;
			case 2:
				mAnimPanes[i]->setArea(frame, area);
				break;
			default:
				break;
			}
		}
	}
}

/*
 * start__Q32og6Screen9AnimGroupFv
 *
 * --INFO--
 * Address:	803058B8
 * Size:	0000A8
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
			default:
				break;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80305960
 * Size:	000018
 */
void AnimGroup::reservAnim(f32 p1, f32 p2, f32 p3)
{
	_0C = 1;
	_10 = p1;
	_14 = p2;
	_18 = p3;
}

/*
 * --INFO--
 * Address:	80305978
 * Size:	000020
 */
f32 AnimGroup::getLastFrame()
{
	f32 result = 0.0f;

	if (mPaneCount > 0) {
		result = mAnimPanes[0]->mLastFrame;
	}

	return result;
}

/*
 * --INFO--
 * Address:	80305998
 * Size:	000254
 */
void registAnimGroupScreen(AnimGroup* group, JKRArchive* archive, J2DScreen* screen, char* resourcePath, f32 p5)
{
	AnimScreen* newGroupScreen = new AnimScreen();
	newGroupScreen->init(archive, screen, resourcePath);
	newGroupScreen->_24 = p5;
	group->setAnim(newGroupScreen);
}

/*
 * --INFO--
 * Address:	80305BEC
 * Size:	00025C
 */
void registAnimGroupPane(AnimGroup* group, JKRArchive* archive, J2DScreen* parentScreen, u64 tag, char* resourcePath, f32 p6)
{
	AnimPane* newGroupPane = new AnimPane();
	newGroupPane->init(archive, parentScreen, tag, resourcePath);
	newGroupPane->_24 = p6;
	group->setAnim(newGroupPane);
}

} // namespace Screen
} // namespace og
