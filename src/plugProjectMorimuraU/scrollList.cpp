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
		if (FABS(mScrollOffset) < 0.7f * mHeight) {
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

		val = -offset;
		if (mScrollOffset < val) {
			mOffsetDifference = mScrollOffset + offset;
			mScrollOffset     = val;
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
int TIndexPane::getListIndex() { return mIndex; }

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
		mIndexPaneList[i]->mYOffset = mIndexPaneList[i]->mPane->mOffset.y;
		if (mIndexPaneList[i]->mYOffset < mCursorSelectionYOffset && mIndexPaneList[i]->mYOffset > mSelectionYOffset) {
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

			mIndexPaneList[mCurrMinActiveRow]->setPaneOffset(0.0f);

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
			if (mIndexGroup->getHeight() * (mIndexPaneList[mCurrMinActiveRow]->mYOffset - 1.25) <= mMinSelYOffset) { // mismatch here
				check2 = true;
			}

			mIndexPaneList[mCurrMaxActiveRow]->setPaneOffset(0.0f);

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

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r6, 0
	li       r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, -1
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_803A2DC0

lbl_803A2D7C:
	lwz      r3, 0x88(r28)
	lwzx     r4, r3, r5
	lwz      r3, 4(r4)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x1c(r4)
	lwz      r3, 0x88(r28)
	lfs      f0, 0xac(r28)
	lwzx     r3, r3, r5
	lfs      f1, 0x1c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_803A2DB8
	lfs      f0, 0xa8(r28)
	fcmpo    cr0, f1, f0
	ble      lbl_803A2DB8
	mr       r31, r6

lbl_803A2DB8:
	addi     r5, r5, 4
	addi     r6, r6, 1

lbl_803A2DC0:
	lha      r3, 0x8e(r28)
	cmpw     r6, r3
	blt      lbl_803A2D7C
	lbz      r0, 0x8c(r28)
	cmplwi   r0, 0
	beq      lbl_803A2E5C
	cmpwi    r31, 0
	bge      lbl_803A2E34
	lfs      f1, lbl_8051F320@sda21(r2)
	li       r5, 0
	li       r4, 0
	mtctr    r3
	cmpwi    r3, 0
	ble      lbl_803A2E34

lbl_803A2DF8:
	lwz      r3, 0x88(r28)
	lfs      f0, 0xac(r28)
	lwzx     r3, r3, r4
	fadds    f0, f1, f0
	lfs      f2, 0x1c(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_803A2E28
	lfs      f0, 0xa8(r28)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	ble      lbl_803A2E28
	mr       r31, r5

lbl_803A2E28:
	addi     r4, r4, 4
	addi     r5, r5, 1
	bdnz     lbl_803A2DF8

lbl_803A2E34:
	cmpwi    r31, 0
	bge      lbl_803A2E58
	lis      r3, lbl_80495210@ha
	lis      r5, lbl_80495220@ha
	addi     r3, r3, lbl_80495210@l
	li       r4, 0x205
	addi     r5, r5, lbl_80495220@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A2E58:
	stw      r31, 0x94(r28)

lbl_803A2E5C:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	clrlwi   r31, r29, 0x18

lbl_803A2E74:
	lbz      r0, 0x8c(r28)
	li       r30, 0
	cmplwi   r0, 0
	bne      lbl_803A2E88
	li       r30, 1

lbl_803A2E88:
	cmplwi   r31, 0
	beq      lbl_803A2FE4
	lwz      r0, 0x98(r28)
	lwz      r5, 0x88(r28)
	slwi     r0, r0, 2
	lwz      r3, 0x84(r28)
	lwzx     r4, r5, r0
	lwz      r0, 0x90(r28)
	lwz      r4, 4(r4)
	slwi     r0, r0, 2
	lfs      f0, 0x18(r3)
	lfs      f1, 0xd8(r4)
	lwzx     r3, r5, r0
	fadds    f0, f1, f0
	stfs     f0, 0x1c(r3)
	lwz      r0, 0x90(r28)
	lwz      r3, 0x88(r28)
	slwi     r0, r0, 2
	lfs      f0, 0xa4(r28)
	lwzx     r4, r3, r0
	lfs      f1, 0x1c(r4)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803A2EEC
	li       r30, 1

lbl_803A2EEC:
	lfs      f1, 0x1c(r4)
	lfs      f0, lbl_8051F2F8@sda21(r2)
	lwz      r3, 4(r4)
	fadds    f0, f1, f0
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x98(r28)
	mr       r3, r28
	lwz      r6, 0x88(r28)
	mr       r5, r29
	slwi     r0, r0, 2
	addi     r4, r1, 0xc
	lwzx     r6, r6, r0
	lwz      r0, 0(r6)
	stw      r0, 0xc(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r6, r29
	lwz      r12, 0(r28)
	lwz      r4, 0x90(r28)
	lwz      r12, 0x94(r12)
	lwz      r5, 0xc(r1)
	mtctr    r12
	bctrl
	mr       r3, r28
	lwz      r4, 0x90(r28)
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x90(r28)
	stw      r0, 0x98(r28)
	lwz      r3, 0x90(r28)
	addi     r0, r3, 1
	stw      r0, 0x90(r28)
	lwz      r3, 0x90(r28)
	lha      r0, 0x8e(r28)
	cmpw     r3, r0
	blt      lbl_803A2FA8
	li       r0, 0
	stw      r0, 0x90(r28)

lbl_803A2FA8:
	lbz      r0, 0x8c(r28)
	cmplwi   r0, 0
	bne      lbl_803A2FD8
	lwz      r3, 0x94(r28)
	addi     r0, r3, 1
	stw      r0, 0x94(r28)
	lwz      r3, 0x94(r28)
	lha      r0, 0x8e(r28)
	cmpw     r3, r0
	blt      lbl_803A2FD8
	li       r0, 0
	stw      r0, 0x94(r28)

lbl_803A2FD8:
	clrlwi.  r0, r30, 0x18
	bne      lbl_803A3150
	b        lbl_803A2E74

lbl_803A2FE4:
	lwz      r0, 0x90(r28)
	lwz      r5, 0x88(r28)
	slwi     r0, r0, 2
	lwz      r3, 0x84(r28)
	lwzx     r4, r5, r0
	lwz      r0, 0x98(r28)
	lwz      r4, 4(r4)
	slwi     r0, r0, 2
	lfs      f0, 0x18(r3)
	lfs      f1, 0xd8(r4)
	lwzx     r3, r5, r0
	fsubs    f0, f1, f0
	lfd      f2, lbl_8051F348@sda21(r2)
	stfs     f0, 0x1c(r3)
	lwz      r0, 0x90(r28)
	lwz      r5, 0x88(r28)
	slwi     r0, r0, 2
	lwz      r3, 0x84(r28)
	lwzx     r4, r5, r0
	lfs      f1, 0x18(r3)
	lfs      f3, 0x1c(r4)
	lfs      f0, 0xa0(r28)
	fnmsub   f1, f2, f1, f3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803A3050
	li       r30, 1

lbl_803A3050:
	lwz      r0, 0x98(r28)
	lfs      f0, lbl_8051F2F8@sda21(r2)
	slwi     r0, r0, 2
	lwzx     r4, r5, r0
	lfs      f1, 0x1c(r4)
	lwz      r3, 4(r4)
	fadds    f0, f1, f0
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x90(r28)
	mr       r3, r28
	lwz      r6, 0x88(r28)
	mr       r5, r29
	slwi     r0, r0, 2
	addi     r4, r1, 8
	lwzx     r6, r6, r0
	lwz      r0, 0(r6)
	stw      r0, 8(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r6, r29
	lwz      r12, 0(r28)
	lwz      r4, 0x98(r28)
	lwz      r12, 0x94(r12)
	lwz      r5, 8(r1)
	mtctr    r12
	bctrl
	mr       r3, r28
	lwz      r4, 0x98(r28)
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x98(r28)
	stw      r0, 0x90(r28)
	lwz      r3, 0x98(r28)
	addi     r0, r3, -1
	stw      r0, 0x98(r28)
	lwz      r0, 0x98(r28)
	cmpwi    r0, 0
	bge      lbl_803A3118
	lha      r3, 0x8e(r28)
	addi     r0, r3, -1
	stw      r0, 0x98(r28)

lbl_803A3118:
	lbz      r0, 0x8c(r28)
	cmplwi   r0, 0
	bne      lbl_803A3148
	lwz      r3, 0x94(r28)
	addi     r0, r3, -1
	stw      r0, 0x94(r28)
	lwz      r0, 0x94(r28)
	cmpwi    r0, 0
	bge      lbl_803A3148
	lha      r3, 0x8e(r28)
	addi     r0, r3, -1
	stw      r0, 0x94(r28)

lbl_803A3148:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A2E74

lbl_803A3150:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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

	TIndexGroup* group = mIndexGroup;

	if (mIndexGroup->isState(1) != false) {
		int idx = mCurrActiveRowSel + 1;
		if (idx >= mNumActiveRows) {
			idx = 0;
		}

		TIndexPane* nextPane = mIndexPaneList[idx];
		if (nextPane->mSizeType != TIndexPane::Size_Small) {
			val += 0.5f;
			if (indexPane->mIndex == nextPane->mIndex) {
				idx++;
				val -= 0.5f;
				if (idx >= mNumActiveRows) {
					idx = 0;
				}

				if (mIndexPaneList[idx]->mSizeType != TIndexPane::Size_Small) {
					val += 0.5f;
				}
			}
		}
	} else if (mIndexGroup->mStateID != TIndexGroup::IDGroup_Idle) {
		int idx = mCurrActiveRowSel - 1;
		if (idx < 0) {
			idx = mNumActiveRows - 1;
		}

		TIndexPane* prevPane = mIndexPaneList[idx];
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
		mIndexPaneList[i]->setPaneOffset(val2);
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
		mIndexPaneList[i]->setPaneOffset(val2);
	}

	mIndexGroup->mIsActiveSpeedUp = 0;

	return result;

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r31, r3
	lwz      r3, 0x84(r3)
	lwz      r0, 0x20(r3)
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_803A3290
	lfs      f0, 0x10(r3)
	stfs     f0, 0x1c(r3)

lbl_803A3290:
	lwz      r3, 0x84(r31)
	lfs      f2, 0x1c(r3)
	lfs      f0, 0x10(r3)
	fcmpo    cr0, f2, f0
	ble      lbl_803A32EC
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	bne      lbl_803A32EC
	lfs      f0, 0x14(r3)
	lfs      f1, lbl_8051F318@sda21(r2)
	fabs     f3, f0
	lfs      f0, 0x18(r3)
	fmuls    f0, f1, f0
	frsp     f1, f3
	fcmpo    cr0, f1, f0
	bge      lbl_803A32E0
	lfs      f0, 0xc(r3)
	fmuls    f0, f2, f0
	stfs     f0, 0x1c(r3)
	b        lbl_803A32EC

lbl_803A32E0:
	lfs      f0, 4(r3)
	fmuls    f0, f2, f0
	stfs     f0, 0x1c(r3)

lbl_803A32EC:
	lwz      r4, 0x94(r31)
	lwz      r5, 0x88(r31)
	slwi     r0, r4, 2
	lfs      f1, lbl_8051F310@sda21(r2)
	lwzx     r7, r5, r0
	lwz      r0, 0xc(r7)
	cmpwi    r0, 0
	beq      lbl_803A3314
	lfs      f0, lbl_8051F350@sda21(r2)
	fadds    f1, f1, f0

lbl_803A3314:
	lwz      r3, 0x84(r31)
	lwz      r6, 0x20(r3)
	subfic   r0, r6, 1
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_803A33A0
	lha      r8, 0x8e(r31)
	addi     r9, r4, 1
	cmpw     r9, r8
	blt      lbl_803A3340
	li       r9, 0

lbl_803A3340:
	slwi     r0, r9, 2
	lwzx     r6, r5, r0
	lwz      r0, 0xc(r6)
	cmpwi    r0, 0
	beq      lbl_803A3414
	lfs      f0, lbl_8051F350@sda21(r2)
	lwz      r4, 0(r7)
	lwz      r0, 0(r6)
	fadds    f1, f1, f0
	cmpw     r4, r0
	bne      lbl_803A3414
	addi     r9, r9, 1
	fsubs    f1, f1, f0
	cmpw     r9, r8
	blt      lbl_803A3380
	li       r9, 0

lbl_803A3380:
	slwi     r0, r9, 2
	lwzx     r4, r5, r0
	lwz      r0, 0xc(r4)
	cmpwi    r0, 0
	beq      lbl_803A3414
	lfs      f0, lbl_8051F350@sda21(r2)
	fadds    f1, f1, f0
	b        lbl_803A3414

lbl_803A33A0:
	cmpwi    r6, 0
	beq      lbl_803A3414
	addic.   r8, r4, -1
	bge      lbl_803A33B8
	lha      r4, 0x8e(r31)
	addi     r8, r4, -1

lbl_803A33B8:
	slwi     r0, r8, 2
	lwzx     r6, r5, r0
	lwz      r0, 0xc(r6)
	cmpwi    r0, 0
	beq      lbl_803A3414
	lfs      f0, lbl_8051F350@sda21(r2)
	lwz      r4, 0(r7)
	lwz      r0, 0(r6)
	fadds    f1, f1, f0
	cmpw     r4, r0
	bne      lbl_803A3414
	fsubs    f1, f1, f0
	addic.   r8, r8, -1
	bge      lbl_803A33F8
	lha      r4, 0x8e(r31)
	addi     r8, r4, -1

lbl_803A33F8:
	slwi     r0, r8, 2
	lwzx     r4, r5, r0
	lwz      r0, 0xc(r4)
	cmpwi    r0, 0
	beq      lbl_803A3414
	lfs      f0, lbl_8051F350@sda21(r2)
	fadds    f1, f1, f0

lbl_803A3414:
	lfs      f0, lbl_8051F2F8@sda21(r2)
	stfs     f0, 0x2c(r3)
	lfs      f0, 0x18(r3)
	lwz      r0, 0x20(r3)
	fmuls    f1, f0, f1
	cmpwi    r0, 0
	beq      lbl_803A3494
	cmpwi    r0, 2
	bne      lbl_803A3440
	lfs      f2, 0x1c(r3)
	b        lbl_803A3448

lbl_803A3440:
	lfs      f0, 0x1c(r3)
	fneg     f2, f0

lbl_803A3448:
	lfs      f0, 0x14(r3)
	fadds    f0, f0, f2
	stfs     f0, 0x14(r3)
	lfs      f0, 0x14(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_803A3474
	fsubs    f0, f0, f1
	li       r30, 1
	stfs     f0, 0x2c(r3)
	stfs     f1, 0x14(r3)
	b        lbl_803A3498

lbl_803A3474:
	fneg     f2, f1
	fcmpo    cr0, f0, f2
	bge      lbl_803A3494
	fadds    f0, f0, f1
	li       r30, 1
	stfs     f0, 0x2c(r3)
	stfs     f2, 0x14(r3)
	b        lbl_803A3498

lbl_803A3494:
	li       r30, 0

lbl_803A3498:
	lwz      r3, 0x84(r31)
	li       r28, 0
	li       r29, 0
	lfs      f31, 0x14(r3)
	b        lbl_803A34F4

lbl_803A34AC:
	lwz      r3, 0x88(r31)
	lwzx     r4, r3, r29
	lfs      f0, 0x1c(r4)
	lwz      r3, 4(r4)
	fadds    f0, f0, f31
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	mr       r4, r28
	lwz      r12, 0(r31)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 4
	addi     r28, r28, 1

lbl_803A34F4:
	lha      r0, 0x8e(r31)
	cmpw     r28, r0
	blt      lbl_803A34AC
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A3530
	lwz      r3, 0x84(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_803A3520
	lfs      f31, 0x2c(r3)
	b        lbl_803A3524

lbl_803A3520:
	lfs      f31, lbl_8051F2F8@sda21(r2)

lbl_803A3524:
	mr       r3, r31
	bl       changeIndex__Q28Morimura11TScrollListFv
	b        lbl_803A3554

lbl_803A3530:
	lwz      r3, 0x84(r31)
	lwz      r0, 0x20(r3)
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_803A3554
	lfs      f1, 0x14(r3)
	lfs      f0, lbl_8051F354@sda21(r2)
	fmuls    f0, f0, f1
	fadds    f31, f1, f0

lbl_803A3554:
	lwz      r3, 0x84(r31)
	li       r28, 0
	li       r29, 0
	stfs     f31, 0x14(r3)
	b        lbl_803A3598

lbl_803A3568:
	lwz      r3, 0x88(r31)
	lwzx     r4, r3, r29
	lfs      f0, 0x1c(r4)
	lwz      r3, 4(r4)
	fadds    f0, f0, f31
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 4
	addi     r28, r28, 1

lbl_803A3598:
	lha      r0, 0x8e(r31)
	cmpw     r28, r0
	blt      lbl_803A3568
	lwz      r4, 0x84(r31)
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x24(r4)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
