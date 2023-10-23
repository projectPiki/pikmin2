#include "Morimura/ScrollList.h"
#include "Morimura/Zukan.h"

namespace Morimura {
/*
 * --INFO--
 * Address:	803A2154
 * Size:	00004C
 */
TIndexGroup::TIndexGroup()
{
	_14           = 0.0f;
	mHeight       = 0.0f;
	mRollSpeed    = 0.0f;
	mStateID      = 0;
	_24           = 0;
	mMoveTimer    = 0.0f;
	mMaxRollSpeed = 8.0f;
	_04           = 0.9f;
	mRollSpeedMod = 1.1f;
	_0C           = 1.5f;
	_10           = 2.0f;
}

/*
 * --INFO--
 * Address:	803A21A0
 * Size:	00006C
 */
bool TIndexGroup::upIndex()
{
	bool ret = false;
	if (mStateID == 0) {
		if (mMoveTimer <= 0.0f) {
			mRollSpeed = _10;
		}
		mMoveTimer = 1.0f;
		mStateID   = 2;
		ret        = true;
	}
	rollSpUp();
	return ret;
}

/*
 * --INFO--
 * Address:	803A220C
 * Size:	00006C
 */
bool TIndexGroup::downIndex()
{
	bool ret = false;
	if (mStateID == 0) {
		if (mMoveTimer >= 0.0f) {
			mRollSpeed = _10;
		}
		mMoveTimer = -1.0f;
		mStateID   = 1;
		ret        = true;
	}
	rollSpUp();
	return ret;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void TIndexGroup::speedUpdate(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void TIndexGroup::offsetUpdate(f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803A2278
 * Size:	000030
 */
void TIndexGroup::rollSpUp()
{
	mRollSpeed *= mRollSpeedMod;
	_24 = 1;
	if (mRollSpeed > mMaxRollSpeed) {
		mRollSpeed = mMaxRollSpeed;
	}
}

/*
 * --INFO--
 * Address:	803A22A8
 * Size:	00009C
 */
void TIndexPane::update()
{
	if (mIconInfos) {
		f32 calc = 1.0f;
		if (_18 != 0.0f) {
			calc = 2.0f;
		}
		for (int i = 0; i < mIconCount; i++) {
			mIconInfos[i]->update(calc);
		}
	}
}

/*
 * --INFO--
 * Address:	803A2344
 * Size:	000094
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

/*
 * --INFO--
 * Address:	803A23D8
 * Size:	0001E4
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
			if (mSizeType == 1 || mMaxTextureId > index + i) {
				mIconInfos[i]->setInfo(-1, nullptr);
				if (i == 1) {
					mIconInfos[i]->mParentIndex = mIndex + 1;
				}
			} else {
				offs += index;
				const ResTIMG* timg = nullptr;
				if (mOwner->isListShow(offs)) {
					timg = static_cast<TZukanBase*>(mOwner)->getTexInfo(offs);
					P2ASSERTLINE(193, timg);
					mIconInfos[i]->setInfo(offs, timg);
				}
			}
		}
		switch (mSizeType) {
		case 0:
			_18 = 0.0f;
			break;
		case 3:
			mIconInfos[0]->setInfo(-1, nullptr);
			mIconInfos[2]->setInfo(-1, nullptr);
			_18 = -20.0f;
			break;
		case 2:
			mIconInfos[0]->setInfo(-1, nullptr);
			mIconInfos[2]->setInfo(-1, nullptr);
			_18 = 20.0f;
			break;
		case 1:
			_18 = 0.01f;
			break;
		}
		doIconOffsetY();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r29, r4
	mr       r28, r3
	stw      r29, 0(r3)
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_803A25A8
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	beq      lbl_803A25A8
	li       r30, 0
	li       r31, 0
	b        lbl_803A24EC

lbl_803A2418:
	lwz      r0, 0xc(r28)
	mr       r4, r30
	cmpwi    r0, 0
	beq      lbl_803A242C
	li       r4, 0

lbl_803A242C:
	cmpwi    r0, 1
	beq      lbl_803A2444
	lwz      r0, 0x14(r28)
	add      r3, r29, r30
	cmpw     r3, r0
	ble      lbl_803A2478

lbl_803A2444:
	lwz      r3, 0x20(r28)
	li       r4, -1
	li       r5, 0
	lwzx     r3, r3, r31
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	cmpwi    r30, 1
	bne      lbl_803A24E4
	lwz      r3, 0x20(r28)
	lwz      r4, 0(r28)
	lwzx     r3, r3, r31
	addi     r0, r4, 1
	stw      r0, 0x18(r3)
	b        lbl_803A24E4

lbl_803A2478:
	lwz      r3, 0x24(r28)
	add      r27, r29, r4
	mr       r4, r27
	li       r26, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A24D0
	lwz      r3, 0x24(r28)
	mr       r4, r27
	bl       getTexInfo__Q28Morimura10TZukanBaseFi
	or.      r26, r3, r3
	bne      lbl_803A24D0
	lis      r3, lbl_80495210@ha
	lis      r5, lbl_80495220@ha
	addi     r3, r3, lbl_80495210@l
	li       r4, 0xc1
	addi     r5, r5, lbl_80495220@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A24D0:
	lwz      r3, 0x20(r28)
	mr       r4, r27
	mr       r5, r26
	lwzx     r3, r3, r31
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG

lbl_803A24E4:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_803A24EC:
	lwz      r0, 0x10(r28)
	cmpw     r30, r0
	blt      lbl_803A2418
	lwz      r0, 0xc(r28)
	cmpwi    r0, 2
	beq      lbl_803A2564
	bge      lbl_803A2518
	cmpwi    r0, 0
	beq      lbl_803A2524
	bge      lbl_803A2598
	b        lbl_803A25A0

lbl_803A2518:
	cmpwi    r0, 4
	bge      lbl_803A25A0
	b        lbl_803A2530

lbl_803A2524:
	lfs      f0, lbl_8051F2F8@sda21(r2)
	stfs     f0, 0x18(r28)
	b        lbl_803A25A0

lbl_803A2530:
	lwz      r3, 0x20(r28)
	li       r4, -1
	li       r5, 0
	lwz      r3, 0(r3)
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	lwz      r3, 0x20(r28)
	li       r4, -1
	li       r5, 0
	lwz      r3, 8(r3)
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	lfs      f0, lbl_8051F31C@sda21(r2)
	stfs     f0, 0x18(r28)
	b        lbl_803A25A0

lbl_803A2564:
	lwz      r3, 0x20(r28)
	li       r4, -1
	li       r5, 0
	lwz      r3, 0(r3)
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	lwz      r3, 0x20(r28)
	li       r4, -1
	li       r5, 0
	lwz      r3, 8(r3)
	bl       setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
	lfs      f0, lbl_8051F320@sda21(r2)
	stfs     f0, 0x18(r28)
	b        lbl_803A25A0

lbl_803A2598:
	lfs      f0, lbl_8051F324@sda21(r2)
	stfs     f0, 0x18(r28)

lbl_803A25A0:
	mr       r3, r28
	bl       doIconOffsetY__Q28Morimura10TIndexPaneFv

lbl_803A25A8:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A25BC
 * Size:	000058
 */
int TIndexPane::getIndex()
{
	if (mIconInfos) {
		if (mSizeType == 0) {
			int id = mIconInfos[TScrollList::mRightOffset]->mParentIndex - 1;
			if (id < 0) {
				return id;
			}
			return -1;
		}

		int id = mIconInfos[1]->mParentIndex - 1;
		if (id < 0) {
			return id;
		}
		return -1;
	}
	return mIndex;

	/*
	lwz      r4, 0x20(r3)
	cmplwi   r4, 0
	beq      lbl_803A260C
	lwz      r0, 0xc(r3)
	cmpwi    r0, 0
	bne      lbl_803A25F4
	lwz      r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
	slwi     r0, r0, 2
	lwzx     r3, r4, r0
	lwz      r3, 0x18(r3)
	addic.   r3, r3, -1
	bgelr
	li       r3, -1
	blr

lbl_803A25F4:
	lwz      r3, 4(r4)
	lwz      r3, 0x18(r3)
	addic.   r3, r3, -1
	bgelr
	li       r3, -1
	blr

lbl_803A260C:
	lwz      r3, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A2614
 * Size:	000008
 */
int TIndexPane::getListIndex() { return mIndex; }

/*
 * --INFO--
 * Address:	803A261C
 * Size:	0000F4
 */
void TIndexPane::doIconOffsetY()
{
	if (mIconInfos) {
		J2DPane* pane = mIconInfos[1]->mPane2;
		pane->addOffsetY(_18);
		pane->updateScale(1.0f);
		if (_18 != 0.0f) {
			pane->updateScale(2.0f);
		}
		if (mIconInfos[1]->mPic) {
			mIconInfos[1]->mPic->setOffsetY(_18 - 13.5f);
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0x20(r3)
	cmplwi   r4, 0
	beq      lbl_803A26F8
	lwz      r3, 0(r4)
	lwz      r4, 4(r4)
	lwz      r3, 0x10(r3)
	lfs      f2, 0x18(r30)
	lfs      f1, 0xd8(r3)
	lwz      r31, 0x10(r4)
	fadds    f1, f2, f1
	mr       r3, r31
	stfs     f1, 0xd8(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051F310@sda21(r2)
	mr       r3, r31
	stfs     f0, 0xcc(r31)
	stfs     f0, 0xd0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051F2F8@sda21(r2)
	lfs      f0, 0x18(r30)
	fcmpu    cr0, f1, f0
	beq      lbl_803A26C4
	lfs      f0, lbl_8051F30C@sda21(r2)
	mr       r3, r31
	stfs     f0, 0xcc(r31)
	stfs     f0, 0xd0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_803A26C4:
	lwz      r3, 0x20(r30)
	lwz      r3, 4(r3)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_803A26F8
	lfs      f2, 0x18(r30)
	lfs      f1, lbl_8051F328@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_803A26F8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A2710
 * Size:	000068
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

/*
 * --INFO--
 * Address:	803A2778
 * Size:	0000D0
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

/*
 * --INFO--
 * Address:	803A2848
 * Size:	000198
 */
void TIconInfo::update(f32 base)
{
	if (mScaleMgr) {
		f32 calc = mScaleMgr->calc();
		if (TScrollList::mWideWindow) {
			if (base == 2.0f) {
				mPane->updateScale(calc * 3.0f, base * calc);
				mPane2->updateScale(2 / 3, 1.0f);
				mCounter->getMotherPane()->setOffset(-30.5f, mCounter->getMotherPane()->mOffset.y);
				mCounter->setScale(2 / 3, 1.0f);
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

/*
 * --INFO--
 * Address:	803A29E0
 * Size:	0001B4
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

/*
 * --INFO--
 * Address:	803A2B94
 * Size:	000040
 */
void TIconInfo::startScaleUp(f32 scale)
{
	if (mScaleMgr) {
		mScaleMgr->up(scale * 0.2f, 30.0f, 0.6f, 0.0f);
	}
}

/*
 * --INFO--
 * Address:	803A2BD4
 * Size:	0000E4
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

/*
 * --INFO--
 * Address:	803A2CB8
 * Size:	000090
 */
TScrollList::TScrollList(char* name)
    : TTestBase(name)
{
	mMainScreen      = nullptr;
	mController      = nullptr;
	mIndexGroup      = nullptr;
	mIndexPaneList   = nullptr;
	mDoEnableBigIcon = false;
	mMaxSelect       = 0;
	_90              = 0;
	mCurrentSelect   = 0;
	_98              = 0;
	mRowSize         = 1;
	_A0              = 0.0f;
	_A4              = 0.0f;
	mYOffset         = 0.0f;
	_AC              = 0.0f;
	_B0              = 0.0f;
	mRightOffset     = 0;
}

/*
 * --INFO--
 * Address:	803A2D48
 * Size:	000428
 */
void TScrollList::updateIndex(bool)
{
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

/*
 * --INFO--
 * Address:	803A3170
 * Size:	0000DC
 */
void TScrollList::getUpdateIndex(int& id, bool flag)
{
	if (flag) {
		id = id + mRowSize;
		if (id >= getIdMax()) {
			id = 0;
		}
		mIndexPaneList[_90]->setIndex(id);
	} else {
		id = id - mRowSize;
		if (id < 0) {
			id = getIdMax() - mRowSize;
		}
		mIndexPaneList[_98]->setIndex(id);
	}
}

/*
 * --INFO--
 * Address:	803A324C
 * Size:	000390
 */
bool TScrollList::updateList()
{
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

/*
 * --INFO--
 * Address:	803A35DC
 * Size:	000060
 */
void TScrollList::changeIndex()
{
	updateIndex(mIndexGroup->mStateID == 1);
	mIndexGroup->reset();
}

} // namespace Morimura
