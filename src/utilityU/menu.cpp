#include "Controller.h"
#include "System.h"
#include "menu.h"
#include "PSSystem/PSSystemIF.h"
#include "SoundID.h"

/*
 * --INFO--
 * Address:	80456184
 * Size:	00012C
 */
Menu::Menu(JUTGamePad* control, JUTFont* font, bool flag)
{
	mControl = control;
	mControl->setButtonRepeat(0xc000000, 15, 3);
	mFont = font;
	mFlag = flag;
	_0C   = 0;

	MenuItem* rootItem = new MenuItem(MenuItem::UNK0, 0, "root");
	rootItem->_04      = false;
	mItemList.append(&rootItem->mLink);

	_2C          = 0;
	mItemCount   = 0;
	mLastItem    = nullptr;
	mCurrentItem = nullptr;
	mSelf2       = nullptr;
	mSelf        = nullptr;
	_4C          = 0;
	_50          = 0;
	_54          = 0;
	_40          = 190;
	_44          = 220;
	_48          = 260;
	_58          = true;
	_59          = true;
	mState       = 0;
	mTimer       = 0.0f;
	mTimer2      = 0.0f;

	volatile int idk1, idk2, idk3, idk4;
	idk4 = 190;
	idk3 = 220;
	idk2 = 190;
	idk1 = 220;

	_5C = 256;
}

/*
 * --INFO--
 * Address:	804562B0
 * Size:	0000C0
 */
void Menu::addOption(int index, char* name, IDelegate1<Menu&>* delegate, bool flag)
{
	mLastItem      = new MenuItem(MenuItem::UNK1, index, name);
	mLastItem->_04 = flag;
	mItemList.append(&mLastItem->mLink);
	if (delegate) {
		addKeyEvent(KeyEvent::UNK0, _5C, delegate);
	}

	if (!mCurrentItem && mLastItem->_04) {
		mCurrentItem = mLastItem;
	}

	mItemCount++;
}

/*
 * --INFO--
 * Address:	80456370
 * Size:	0000C8
 */
void Menu::addKeyEvent(KeyEvent::cTypeFlag type, u32 a1, IDelegate1<Menu&>* delegate)
{
	KeyEvent* key = new KeyEvent(type, a1, delegate);

	if (mLastItem) {
		mLastItem->mList.append(&key->mLink);
	} else {
		JSUPtrLink* list = mItemList.mHead;
		if (list) {
			((MenuItem*)list->mValue)->mList.append(&key->mLink);
		} else {
			JUT_PANICLINE(183, "MenuList is wrong.\n");
		}
	}
}

/*
 * --INFO--
 * Address:	80456438
 * Size:	0003A0
 */
void Menu::doUpdate(bool flag)
{
	mSelf = this;
	mTimer2 += sys->mDeltaTime * 7.0f;
	switch (mState) {
	case 1:
		mTimer += sys->mDeltaTime * 8.0f;
		if (mTimer > 1.0f) {
			mTimer = 1.0f;
			mState = 0;
		}
		break;
	case 3:
		mTimer = -(sys->mDeltaTime * 8.0f - mTimer);
		if (mTimer < 0.0f) {
			mTimer = 0.0f;
			mState = 0;
		}
		break;
	case 2:
		if (flag) {
			_59 = true;
		}
		u32 input = mControl->getButtonDown();
		if (input & Controller::PRESS_DOWN) {
			mCurrentItem->checkEvents(this, 2);
			mCurrentItem = mCurrentItem->getNext();
			if (!mCurrentItem) {
				mCurrentItem = (MenuItem*)mItemList.mHead->mValue;
			}
			MenuItem* item;
			while (item = mCurrentItem, !item->mName || !item->_04) {
				item         = mCurrentItem->getNext();
				mCurrentItem = item;
				if (!mCurrentItem) {
					mCurrentItem = (MenuItem*)mItemList.mHead->mValue;
				}
			}
			_59 = true;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		} else if (input & Controller::PRESS_UP) {
			mCurrentItem->checkEvents(this, 2);
			mCurrentItem = mCurrentItem->getPrev();
			if (!mCurrentItem) {
				mCurrentItem = (MenuItem*)mItemList.mHead->mValue;
			}
			MenuItem* item;
			while (item = mCurrentItem, !item->mName || !item->_04) {
				item         = mCurrentItem->getPrev();
				mCurrentItem = item;
				if (!mCurrentItem) {
					mCurrentItem = (MenuItem*)mItemList.mHead->mValue;
				}
			}
			_59 = true;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}
		if (_58) {
			_58 = false;
			_59 = true;
		}
		break;
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f2, lbl_80520BF8@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r31, r30
	stw      r29, 0x14(r1)
	stw      r30, 0x10(r3)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x3c(r30)
	lfs      f1, 0x54(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x3c(r30)
	lwz      r0, 0x34(r30)
	cmpwi    r0, 2
	beq      lbl_80456514
	bge      lbl_80456490
	cmpwi    r0, 1
	bge      lbl_8045649C
	b        lbl_804567B8

lbl_80456490:
	cmpwi    r0, 4
	bge      lbl_804567B8
	b        lbl_804564D8

lbl_8045649C:
	lwz      r3, sys@sda21(r13)
	lfs      f3, lbl_80520BFC@sda21(r2)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x38(r30)
	lfs      f0, lbl_80520BF4@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x38(r30)
	lfs      f1, 0x38(r30)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_804567B8
	stfs     f0, 0x38(r30)
	li       r0, 2
	stw      r0, 0x34(r30)
	b        lbl_804567B8

lbl_804564D8:
	lwz      r3, sys@sda21(r13)
	lfs      f3, lbl_80520BFC@sda21(r2)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x38(r30)
	lfs      f0, lbl_80520BF0@sda21(r2)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x38(r30)
	lfs      f1, 0x38(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_804567B8
	stfs     f0, 0x38(r30)
	li       r0, 0
	stw      r0, 0x34(r30)
	lwz      r31, 0x14(r30)
	b        lbl_804567B8

lbl_80456514:
	clrlwi.  r0, r4, 0x18
	beq      lbl_80456524
	li       r0, 1
	stb      r0, 0x59(r30)

lbl_80456524:
	lwz      r4, 0(r30)
	lis      r3, 0x04000004@ha
	addi     r0, r3, 0x04000004@l
	lwz      r4, 0x30(r4)
	and.     r0, r4, r0
	beq      lbl_804565CC
	lwz      r3, 0x24(r30)
	mr       r4, r30
	li       r5, 2
	bl       checkEvents__Q24Menu8MenuItemFP4Menui
	lwz      r3, 0x24(r30)
	bl       getNext__Q24Menu8MenuItemFv
	stw      r3, 0x24(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_80456594
	lwz      r3, 0x18(r30)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r30)
	b        lbl_80456594

lbl_80456574:
	bl       getNext__Q24Menu8MenuItemFv
	stw      r3, 0x24(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_80456594
	lwz      r3, 0x18(r30)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r30)

lbl_80456594:
	lwz      r3, 0x24(r30)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80456574
	lbz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80456574
	li       r0, 1
	li       r4, 0x1802
	stb      r0, 0x59(r30)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80456660

lbl_804565CC:
	lis      r3, 0x08000008@ha
	addi     r0, r3, 0x08000008@l
	and.     r0, r4, r0
	beq      lbl_80456660
	lwz      r3, 0x24(r30)
	mr       r4, r30
	li       r5, 2
	bl       checkEvents__Q24Menu8MenuItemFP4Menui
	lwz      r3, 0x24(r30)
	bl       getPrev__Q24Menu8MenuItemFv
	stw      r3, 0x24(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_80456634
	lwz      r3, 0x1c(r30)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r30)
	b        lbl_80456634

lbl_80456614:
	bl       getPrev__Q24Menu8MenuItemFv
	stw      r3, 0x24(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_80456634
	lwz      r3, 0x1c(r30)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r30)

lbl_80456634:
	lwz      r3, 0x24(r30)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80456614
	lbz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80456614
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1802
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80456660:
	lbz      r0, 0x58(r30)
	cmplwi   r0, 0
	beq      lbl_8045669C
	lwz      r3, 0x4c(r30)
	cmplwi   r3, 0
	beq      lbl_8045668C
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8045668C:
	li       r3, 0
	li       r0, 1
	stb      r3, 0x58(r30)
	stb      r0, 0x59(r30)

lbl_8045669C:
	lbz      r0, 0x59(r30)
	lis      r3, 0x0000FFFC@ha
	addi     r29, r3, 0x0000FFFC@l
	cmplwi   r0, 0
	beq      lbl_804566E4
	lwz      r3, 0x54(r30)
	ori      r29, r29, 1
	cmplwi   r3, 0
	beq      lbl_804566D4
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_804566D4:
	lfs      f0, lbl_80520BF0@sda21(r2)
	li       r0, 0
	stfs     f0, 0x3c(r30)
	stb      r0, 0x59(r30)

lbl_804566E4:
	lwz      r3, 0x24(r30)
	mr       r4, r30
	mr       r5, r29
	bl       checkEvents__Q24Menu8MenuItemFP4Menui
	clrlwi.  r0, r3, 0x18
	bne      lbl_80456710
	lwz      r3, 0x18(r30)
	mr       r4, r30
	mr       r5, r29
	lwz      r3, 0(r3)
	bl       checkEvents__Q24Menu8MenuItemFP4Menui

lbl_80456710:
	lwz      r0, 0x10(r30)
	cmplw    r0, r30
	beq      lbl_804567B8
	lwz      r3, 0x24(r30)
	mr       r4, r30
	li       r5, 2
	bl       checkEvents__Q24Menu8MenuItemFP4Menui
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_8045674C
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8045674C:
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_80456790
	lfs      f0, lbl_80520BF0@sda21(r2)
	li       r0, 1
	stfs     f0, 0x38(r3)
	stw      r0, 0x34(r3)
	lwz      r0, 0x24(r3)
	cmplwi   r0, 0
	bne      lbl_80456788
	lwz      r4, 0x18(r3)
	cmplwi   r4, 0
	bne      lbl_80456788
	lwz      r0, 0(r4)
	stw      r0, 0x24(r3)

lbl_80456788:
	lwz      r31, 0x10(r30)
	b        lbl_804567B0

lbl_80456790:
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_804567A0
	stw      r0, 0x10(r30)

lbl_804567A0:
	lfs      f0, lbl_80520BF4@sda21(r2)
	li       r0, 3
	stfs     f0, 0x38(r30)
	stw      r0, 0x34(r30)

lbl_804567B0:
	lwz      r0, 0x10(r30)
	stw      r0, 0x14(r30)

lbl_804567B8:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804567D8
 * Size:	000068
 */
Menu::KeyEvent::KeyEvent(cTypeFlag type, u32 a1, IDelegate1<Menu&>* delegate)
    : mLink(this)
{
	mType   = type;
	_04     = a1;
	mAction = delegate;
}

/*
 * --INFO--
 * Address:	80456840
 * Size:	000080
 */
Menu::MenuItem::MenuItem(cTypeFlag type, int a1, char* name)
    : mLink(this)
{
	_04   = 1;
	mName = name;
	_0C   = a1;
	mType = type;
	_00   = 0;
}

/*
 * --INFO--
 * Address:	804568C0
 * Size:	00001C
 */
Menu::MenuItem* Menu::MenuItem::getNext()
{
	JSUPtrLink* link = mLink.mNext;
	if (link) {
		return (Menu::MenuItem*)link->mValue;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	804568DC
 * Size:	00001C
 */
Menu::MenuItem* Menu::MenuItem::getPrev()
{
	JSUPtrLink* link = mLink.mPrev;
	if (link) {
		return (Menu::MenuItem*)link->mValue;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	804568F8
 * Size:	000200
 */
void Menu::MenuItem::checkEvents(Menu*, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	mr       r28, r5
	li       r30, 0
	lwz      r31, 0x14(r3)
	b        lbl_80456AD8

lbl_80456920:
	lwz      r4, 0(r31)
	li       r29, 0
	lwz      r5, 0(r4)
	and.     r0, r28, r5
	beq      lbl_80456AD4
	cmplwi   r5, 0x20
	bgt      lbl_80456ACC
	lis      r3, lbl_804EDCC8@ha
	slwi     r0, r5, 2
	addi     r3, r3, lbl_804EDCC8@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_80456954:
	lwz      r3, 8(r4)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80456ACC

lbl_80456970:
	lwz      r3, 8(r4)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80456ACC

lbl_8045698C:
	lwz      r3, 0(r27)
	lwz      r0, 4(r4)
	lwz      r3, 0x18(r3)
	and.     r0, r3, r0
	beq      lbl_80456ACC
	lwz      r3, 8(r4)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80456ACC

lbl_804569BC:

lbl_804569BC:
	lwz      r3, 0(r27)
	lwz      r0, 4(r4)
	lwz      r3, 0x1c(r3)
	and.     r0, r3, r0
	beq      lbl_80456ACC
	lwz      r3, 8(r4)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r30, 1
	li       r29, 1
	b        lbl_80456ACC

lbl_804569F4:
	lwz      r3, 0(r27)
	lwz      r0, 4(r4)
	lwz      r3, 0x1c(r3)
	and.     r0, r3, r0
	beq      lbl_80456ACC
	lwz      r3, 0x24(r27)
	lwz      r0, 0x10(r3)
	cmpwi    r0, 2
	bne      lbl_80456AAC
	mr       r3, r26
	mr       r4, r27
	li       r5, 2
	bl       checkEvents__Q24Menu8MenuItemFP4Menui
	lwz      r0, 0xc(r27)
	cmplwi   r0, 0
	bne      lbl_80456A38
	stw      r0, 0x10(r27)

lbl_80456A38:
	lfs      f1, lbl_80520BF4@sda21(r2)
	li       r3, 3
	lfs      f0, lbl_80520BF0@sda21(r2)
	li       r0, 1
	stfs     f1, 0x38(r27)
	stw      r3, 0x34(r27)
	stw      r27, 0x10(r27)
	lwz      r3, 0x24(r27)
	lwz      r3, 0(r3)
	stw      r3, 0x14(r27)
	lwz      r3, 0x14(r27)
	stfs     f0, 0x38(r3)
	stw      r0, 0x34(r3)
	lwz      r0, 0x24(r3)
	cmplwi   r0, 0
	bne      lbl_80456A8C
	lwz      r4, 0x18(r3)
	cmplwi   r4, 0
	bne      lbl_80456A8C
	lwz      r0, 0(r4)
	stw      r0, 0x24(r3)

lbl_80456A8C:
	li       r0, 1
	li       r30, 0
	stb      r0, 0x58(r27)
	li       r29, 1
	lwz      r3, 0x24(r27)
	lwz      r3, 0(r3)
	stb      r0, 0x58(r3)
	b        lbl_80456ACC

lbl_80456AAC:
	lwz      r3, 8(r4)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r30, 1
	li       r29, 1

lbl_80456ACC:
	clrlwi.  r0, r29, 0x18
	bne      lbl_80456AE0

lbl_80456AD4:
	lwz      r31, 0xc(r31)

lbl_80456AD8:
	cmplwi   r31, 0
	bne      lbl_80456920

lbl_80456AE0:
	mr       r3, r30
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
