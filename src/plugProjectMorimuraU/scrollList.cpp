#include "Morimura/ScrollList.h"
#include "Morimura/Zukan.h"

namespace Morimura {
int TScrollList::mRightOffset;
bool TScrollList::mForceResetParm;
bool TScrollList::mWideWindow = true;
/**
 * @note Address: 0x803A2154
 * @note Size: 0x4C
 */
TIndexGroup::TIndexGroup()
{
	mScrollOffset        = 0.0f;
	mHeight              = 0.0f;
	mRollSpeed           = 0.0f;
	mStateID             = 0;
	mIsActiveSpeedUp     = false;
	mMoveDirection       = 0.0f;
	mMaxRollSpeed        = 8.0f;
	mSpeedSlowdownFactor = 0.9f;
	mRollSpeedMod        = 1.1f;
	mSpeedSpeedupFactor  = 1.5f;
	mInitialRollSpeed    = 2.0f;
}

/**
 * @note Address: 0x803A21A0
 * @note Size: 0x6C
 */
bool TIndexGroup::upIndex()
{
	bool ret = false;
	if (mStateID == IDGroup_Idle) {
		if (mMoveDirection <= 0.0f) {
			mRollSpeed = mInitialRollSpeed;
		}
		mMoveDirection = 1.0f;
		mStateID       = IDGroup_Up;
		ret            = true;
	}
	rollSpUp();
	return ret;
}

/**
 * @note Address: 0x803A220C
 * @note Size: 0x6C
 */
bool TIndexGroup::downIndex()
{
	bool ret = false;
	if (mStateID == IDGroup_Idle) {
		if (mMoveDirection >= 0.0f) {
			mRollSpeed = mInitialRollSpeed;
		}
		mMoveDirection = -1.0f;
		mStateID       = IDGroup_Down;
		ret            = true;
	}
	rollSpUp();
	return ret;
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void TIndexGroup::speedUpdate(bool check)
{
	if (mRollSpeed > mInitialRollSpeed && !mIsActiveSpeedUp) {
		if (absF(mScrollOffset) < 0.7f * mHeight) {
			mRollSpeed *= mSpeedSpeedupFactor;
		} else {
			mRollSpeed *= mSpeedSlowdownFactor;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
bool TIndexGroup::offsetUpdate(f32 offset)
{
	if (mStateID != IDGroup_Idle) {
		f32 val = (mStateID == IDGroup_Up) ? mRollSpeed : -mRollSpeed;
		mScrollOffset += val;

		if (mScrollOffset > offset) {
			mOffsetDifference = mScrollOffset - offset;
			mScrollOffset     = offset;
			return true;
		}

		if (mScrollOffset < -offset) {
			mOffsetDifference = mScrollOffset + offset;
			mScrollOffset     = -offset;
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x803A2278
 * @note Size: 0x30
 */
void TIndexGroup::rollSpUp()
{
	mRollSpeed *= mRollSpeedMod;
	mIsActiveSpeedUp = 1;
	if (mRollSpeed > mMaxRollSpeed) {
		mRollSpeed = mMaxRollSpeed;
	}
}

/**
 * @note Address: 0x803A22A8
 * @note Size: 0x9C
 */
void TIndexPane::update()
{
	if (mIconInfos) {
		f32 scale = 1.0f;
		if (mPaneSize != 0.0f) {
			scale = 2.0f;
		}
		for (int i = 0; i < mIconCount; i++) {
			mIconInfos[i]->update(scale);
		}
	}
}

/**
 * @note Address: 0x803A2344
 * @note Size: 0x94
 */
void TIndexPane::createIconInfo(int num, int entries)
{
	mIconCount    = num;
	mMaxTextureId = entries;
	mIconInfos    = new TIconInfo*[num];
	for (int i = 0; i < num; i++) {
		mIconInfos[i] = new TIconInfo;
	}
}

/**
 * @note Address: 0x803A23D8
 * @note Size: 0x1E4
 */
void TIndexPane::setIndex(int index)
{
	mIndex = index;
	if (mIconInfos && mOwner) {
		for (int i = 0; i < mIconCount; i++) {
			int offs = i;
			if (mSizeType) {
				offs = 0;
			}
			if (mSizeType == Size_Small2 || index + i > mMaxTextureId) {
				mIconInfos[i]->setInfo(-1, nullptr);
				if (i == 1) {
					mIconInfos[i]->mParentIndex = mIndex + 1;
				}
			} else {
				int infoIdx         = index + offs;
				const ResTIMG* timg = nullptr;
				if (mOwner->isListShow(infoIdx)) {
					timg = static_cast<TZukanBase*>(mOwner)->getTexInfo(infoIdx);
					P2ASSERTLINE(193, timg);
				}
				mIconInfos[i]->setInfo(infoIdx, timg);
			}
		}
		switch (mSizeType) {
		case Size_Small:
			mPaneSize = 0.0f;
			break;
		case Size_Big2:
			mIconInfos[0]->setInfo(-1, nullptr);
			mIconInfos[2]->setInfo(-1, nullptr);
			mPaneSize = -20.0f;
			break;
		case Size_Big:
			mIconInfos[0]->setInfo(-1, nullptr);
			mIconInfos[2]->setInfo(-1, nullptr);
			mPaneSize = 20.0f;
			break;
		case Size_Small2:
			mPaneSize = 0.01f;
			break;
		}
		doIconOffsetY();
	}
}

/**
 * @note Address: 0x803A25BC
 * @note Size: 0x58
 */
int TIndexPane::getIndex()
{
	int id;
	if (mIconInfos) {
		if (mSizeType == Size_Small) {
			id = mIconInfos[TScrollList::mRightOffset]->mParentIndex - 1;
			if (id < 0) {
				id = -1;
			}
			return id;
		}
		id = mIconInfos[1]->mParentIndex - 1;
		if (id < 0) {
			id = -1;
		}
		return id;
	}
	return mIndex;
}

/**
 * @note Address: 0x803A2614
 * @note Size: 0x8
 */
int TIndexPane::getListIndex()
{
	return mIndex;
}

/**
 * @note Address: 0x803A261C
 * @note Size: 0xF4
 */
void TIndexPane::doIconOffsetY()
{
	if (mIconInfos) {
		J2DPane* pane = mIconInfos[1]->mPane;
		pane->setOffset(pane->mOffset.x, mPaneSize + mIconInfos[0]->mPane->mOffset.y);
		pane->updateScale(1.0f);
		if (mPaneSize != 0.0f) {
			pane->updateScale(2.0f);
		}
		if (mIconInfos[1]->mPic) {
			mIconInfos[1]->mPic->setOffset(mIconInfos[1]->mPic->mOffset.x, mPaneSize - 13.5f);
		}
	}
}

/**
 * @note Address: 0x803A2710
 * @note Size: 0x68
 */
TIconInfo::TIconInfo()
{
	mCategoryID  = 0;
	mPic         = nullptr;
	mCounter     = nullptr;
	mPane2       = nullptr;
	mPane        = nullptr;
	mScaleMgr    = nullptr;
	mParentIndex = 0;
	mScaleMgr    = new og::Screen::ScaleMgr;
}

/**
 * @note Address: 0x803A2778
 * @note Size: 0xD0
 */
void TIconInfo::init(TScaleUpCounter* counter, J2DPane* pane1, J2DPane* pane2)
{
	mCounter = counter;
	P2ASSERTLINE(326, mCounter);
	mCounter->_A9 = true;
	mPane2        = pane1;
	P2ASSERTLINE(330, mPane2);
	mPane = pane2;
	P2ASSERTLINE(333, mPane);
}

/**
 * @note Address: 0x803A2848
 * @note Size: 0x198
 */
void TIconInfo::update(f32 base)
{
	if (mScaleMgr) {
		f32 calc = mScaleMgr->calc();
		if (TScrollList::mWideWindow) {
			if (base == 2.0f) {
				mPane->updateScale(calc * 3.0f, base * calc);
				mPane2->updateScale(0.66666667f, 1.0f);
				mCounter->getMotherPane()->setOffset(-30.5f, mCounter->getMotherPane()->mOffset.y);
				mCounter->setScale(0.66666667f, 1.0f);
			} else {
				mPane->updateScale(base * calc, base * calc);
				mPane2->updateScale(1.0f, 1.0f);
				mCounter->getMotherPane()->setOffset(-28.0f, mCounter->getMotherPane()->mOffset.y);
				mCounter->setScale(1.0f, 1.0f);
			}
		} else {
			mPane->updateScale(base * calc, base * calc);
		}
	}
}

/**
 * @note Address: 0x803A29E0
 * @note Size: 0x1B4
 */
void TIconInfo::setInfo(int id, ResTIMG const* timg)
{
	if (id >= 0) {
		mParentIndex = id + 1;
		if (mPic) {
			for (int i = 0; i < TREASUREHOARD_CATEGORY_NUM; i++) {
				if (id < TItemZukan::mCategoryArray[i]) {
					mCategoryID = i;
					break;
				}
			}
		}
		if (mPane) {
			mPane->show();
		}
		if (timg) {
			if (mCounter) {
				mCounter->hide();
			}
			static_cast<J2DPictureEx*>(mPane2)->changeTexture(timg, 0);
			mPane2->show();
		} else {
			if (mCounter) {
				mCounter->show();
			}
			mPane2->hide();
		}
	} else {
		mParentIndex = 0;
		if (mPane) {
			mPane->hide();
		}
		if (mCounter) {
			mCounter->hide();
		}
		mPane2->hide();
	}
}

/**
 * @note Address: 0x803A2B94
 * @note Size: 0x40
 */
void TIconInfo::startScaleUp(f32 scale)
{
	if (mScaleMgr) {
		mScaleMgr->up(scale * 0.2f, 30.0f, 0.6f, 0.0f);
	}
}

/**
 * @note Address: 0x803A2BD4
 * @note Size: 0xE4
 */
void TListScreen::create(char const* filename, u32 flag)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(filename, flag, mArchive);
	og::Screen::setCallBackMessage(mScreenObj);
	new TCallbackScissor;
	mAnimScreens = new og::Screen::AnimScreen*[mAnimScreenCountMax];
	og::Screen::setAlphaScreen(mScreenObj);
}

/**
 * @note Address: 0x803A2CB8
 * @note Size: 0x90
 */
TScrollList::TScrollList(char* name)
    : TTestBase(name)
{
	mMainScreen             = nullptr;
	mController             = nullptr;
	mIndexGroup             = nullptr;
	mIndexPaneList          = nullptr;
	mDoEnableBigIcon        = false;
	mNumActiveRows          = 0;
	mCurrMinActiveRow       = 0;
	mCurrActiveRowSel       = 0;
	mCurrMaxActiveRow       = 0;
	mRowSize                = 1;
	mMinSelYOffset          = 0.0f;
	mMaxSelYOffset          = 0.0f;
	mSelectionYOffset       = 0.0f;
	mCursorSelectionYOffset = 0.0f;
	_B0                     = false;
	mRightOffset            = 0;
}

/**
 * @note Address: 0x803A2D48
 * @note Size: 0x428
 */
void TScrollList::updateIndex(bool doScrollDown)
{
	// find the index of a pane within the bounds of the current selection position
	int idx = -1;
	for (int i = 0; i < mNumActiveRows; i++) {
		getIndexPane(i)->alignPaneY();
		if (getIndexPane(i)->getPaneYOffset() < mCursorSelectionYOffset && getIndexPane(i)->getPaneYOffset() > mSelectionYOffset) {
			idx = i;
		}
	}

	if (mDoEnableBigIcon) {
		if (idx < 0) {
			for (int i = 0; i < mNumActiveRows; i++) {
				if (mIndexPaneList[i]->mYOffset < mCursorSelectionYOffset + 20.0f
				    && mIndexPaneList[i]->mYOffset > mSelectionYOffset - 20.0f) {
					idx = i;
				}
			}
		}
		P2ASSERTLINE(517, idx >= 0);
		mCurrActiveRowSel = idx;
	}

	getIdMax();

	while (true) {
		bool check2 = false;
		if (!mDoEnableBigIcon) {
			check2 = true;
		}
		if (doScrollDown) {
			mIndexPaneList[mCurrMinActiveRow]->mYOffset = mIndexPaneList[mCurrMaxActiveRow]->mPane->mOffset.y + mIndexGroup->getHeight();
			if (mIndexPaneList[mCurrMinActiveRow]->mYOffset >= mMaxSelYOffset) {
				check2 = true;
			}

			mIndexPaneList[mCurrMinActiveRow]->setOffset(0.0f);

			int updateIdx = mIndexPaneList[mCurrMaxActiveRow]->mIndex;
			getUpdateIndex(updateIdx, doScrollDown);
			setShortenIndex(mCurrMinActiveRow, updateIdx, doScrollDown);
			setPaneCharacter(mCurrMinActiveRow);
			mCurrMaxActiveRow = mCurrMinActiveRow;
			mCurrMinActiveRow++;
			if (mCurrMinActiveRow >= mNumActiveRows) {
				mCurrMinActiveRow = 0;
			}

			if (!mDoEnableBigIcon) {
				mCurrActiveRowSel++;
				if (mCurrActiveRowSel >= mNumActiveRows) {
					mCurrActiveRowSel = 0;
				}
			}
			if (check2) {
				break;
			}
		} else {
			mIndexPaneList[mCurrMaxActiveRow]->mYOffset = mIndexPaneList[mCurrMinActiveRow]->mPane->mOffset.y - mIndexGroup->getHeight();
			if (mIndexPaneList[mCurrMinActiveRow]->getPaneYOffset() - 1.25 * mIndexGroup->getHeight() <= mMinSelYOffset) {
				check2 = true;
			}

			mIndexPaneList[mCurrMaxActiveRow]->setOffset(0.0f);

			int updateIdx = mIndexPaneList[mCurrMinActiveRow]->mIndex;
			getUpdateIndex(updateIdx, doScrollDown);
			setShortenIndex(mCurrMaxActiveRow, updateIdx, doScrollDown);
			setPaneCharacter(mCurrMaxActiveRow);
			mCurrMinActiveRow = mCurrMaxActiveRow;
			mCurrMaxActiveRow--;
			if (mCurrMaxActiveRow < 0) {
				mCurrMaxActiveRow = mNumActiveRows - 1;
			}

			if (!mDoEnableBigIcon) {
				mCurrActiveRowSel--;
				if (mCurrActiveRowSel < 0) {
					mCurrActiveRowSel = mNumActiveRows - 1;
				}
			}
			if (check2) {
				break;
			}
		}
	}
}

/**
 * @note Address: 0x803A3170
 * @note Size: 0xDC
 */
void TScrollList::getUpdateIndex(int& id, bool doScrollDown)
{
	if (doScrollDown) {
		id = id + mRowSize;
		if (id >= getIdMax()) {
			id = 0;
		}
		mIndexPaneList[mCurrMinActiveRow]->setIndex(id);
	} else {
		id = id - mRowSize;
		if (id < 0) {
			id = getIdMax() - mRowSize;
		}
		mIndexPaneList[mCurrMaxActiveRow]->setIndex(id);
	}
}

/**
 * @note Address: 0x803A324C
 * @note Size: 0x390
 */
bool TScrollList::updateList()
{
	if (mIndexGroup->isActive() != false) {
		mIndexGroup->mRollSpeed = mIndexGroup->mInitialRollSpeed;
	}

	mIndexGroup->speedUpdate(true);

	f32 val               = 1.0f;
	TIndexPane* indexPane = mIndexPaneList[mCurrActiveRowSel];
	if (indexPane->mSizeType != TIndexPane::Size_Small) {
		val += 0.5f;
	}

	TIndexPane* nextPane;
	TIndexPane* prevPane;
	TIndexGroup* group = mIndexGroup;

	bool isDown = group->isState(TIndexGroup::IDGroup_Down);
	if (isDown) {
		int rows = mNumActiveRows;
		int idx  = mCurrActiveRowSel + 1;
		if (idx >= rows) {
			idx = 0;
		}

		nextPane = mIndexPaneList[idx];
		if (nextPane->mSizeType != TIndexPane::Size_Small) {
			val += 0.5f;
			if (indexPane->mIndex == nextPane->mIndex) {
				idx++;
				val -= 0.5f;
				if (idx >= rows) {
					idx = 0;
				}

				if (mIndexPaneList[idx]->mSizeType != TIndexPane::Size_Small) {
					val += 0.5f;
				}
			}
		}
	} else if (group->mStateID != TIndexGroup::IDGroup_Idle) {
		int idx = mCurrActiveRowSel - 1;
		if (idx < 0) {
			idx = mNumActiveRows - 1;
		}

		prevPane = mIndexPaneList[idx];
		if (prevPane->mSizeType != TIndexPane::Size_Small) {
			val += 0.5f;
			if (indexPane->mIndex == prevPane->mIndex) {
				val -= 0.5f;
				idx--;
				if (idx < 0) {
					idx = mNumActiveRows - 1;
				}

				if (mIndexPaneList[idx]->mSizeType != TIndexPane::Size_Small) {
					val += 0.5f;
				}
			}
		}
	}

	group->mOffsetDifference = 0.0f;
	bool result              = group->offsetUpdate(group->mHeight * val);

	f32 val2 = mIndexGroup->mScrollOffset;
	for (int i = 0; i < mNumActiveRows; i++) {
		mIndexPaneList[i]->setOffset(val2);
		changeTextTevBlock(i);
	}

	if (result) {
		if (mIndexGroup->mIsActiveSpeedUp) {
			val2 = mIndexGroup->mOffsetDifference;
		} else {
			val2 = 0.0f;
		}

		changeIndex();
	} else if (mIndexGroup->isActive() != false) {
		f32 val3 = -0.5f * mIndexGroup->mScrollOffset;
		val2     = mIndexGroup->mScrollOffset + val3;
	}

	mIndexGroup->mScrollOffset = val2;
	for (int i = 0; i < mNumActiveRows; i++) {
		mIndexPaneList[i]->setOffset(val2);
	}

	mIndexGroup->mIsActiveSpeedUp = 0;

	return result;
}

/**
 * @note Address: 0x803A35DC
 * @note Size: 0x60
 */
void TScrollList::changeIndex()
{
	updateIndex(mIndexGroup->isState(1));
	mIndexGroup->reset();
}

} // namespace Morimura
