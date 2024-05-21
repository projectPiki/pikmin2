#include "Controller.h"
#include "System.h"
#include "menu.h"
#include "PSSystem/PSSystemIF.h"
#include "SoundID.h"

/**
 * @note Address: 0x80456184
 * @note Size: 0x12C
 */
Menu::Menu(JUTGamePad* control, JUTFont* font, bool flag)
{
	mControl = control;
	mControl->setButtonRepeat(0xc000000, 15, 3);
	mFont = font;
	mFlag = flag;
	_0C   = 0;

	MenuItem* rootItem  = new MenuItem(MenuItem::UNK0, 0, "root");
	rootItem->mIsActive = false;
	mItemList.append(&rootItem->mLink);

	_2C            = 0;
	mItemCount     = 0;
	mLastItem      = nullptr;
	mCurrentItem   = nullptr;
	_14            = nullptr;
	mSelf          = nullptr;
	_4C            = 0;
	_50            = 0;
	_54            = 0;
	mPositionX     = 190;
	mPositionY     = 220;
	_48            = 260;
	mIsInitialised = true;
	mIsUpdated     = true;
	mState         = Inactive;
	mTimer         = 0.0f;
	mTimer2        = 0.0f;

	volatile int idk1, idk2, idk3, idk4;
	idk4 = 190;
	idk3 = 220;
	idk2 = 190;
	idk1 = 220;

	mButtonValue = Controller::PRESS_A;
}

/**
 * @note Address: 0x804562B0
 * @note Size: 0xC0
 */
void Menu::addOption(int optionIdx, char* optionName, IDelegate1<Menu&>* pressAction, bool isActive)
{
	mLastItem            = new MenuItem(MenuItem::UNK1, optionIdx, optionName);
	mLastItem->mIsActive = isActive;
	mItemList.append(&mLastItem->mLink);
	if (pressAction) {
		addKeyEvent(KeyEvent::UNK0, mButtonValue, pressAction);
	}

	if (!mCurrentItem && mLastItem->mIsActive) {
		mCurrentItem = mLastItem;
	}

	mItemCount++;
}

/**
 * @note Address: 0x80456370
 * @note Size: 0xC8
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

/**
 * @note Address: 0x80456438
 * @note Size: 0x3A0
 */
Menu* Menu::doUpdate(bool flag)
{
	Menu* menu = this;

	mSelf = this;
	mTimer2 += sys->mDeltaTime * 7.0f;
	switch (mState) {
	case FadeIn:
		mTimer += sys->mDeltaTime * 8.0f;
		if (mTimer >= 1.0f) {
			mTimer = 1.0f;
			mState = Active;
		}
		break;
	case FadeOut:
		mTimer = -(sys->mDeltaTime * 8.0f - mTimer);
		if (mTimer < 0.0f) {
			mTimer = 0.0f;
			mState = Inactive;
			menu   = _14;
		}
		break;
	case Active:
		if (flag) {
			mIsUpdated = true;
		}

		u32 input = mControl->mButton.mRepeat; // WHY
		if (input & Controller::PRESS_DOWN) {
			mCurrentItem->checkEvents(this, 2);
			mCurrentItem = mCurrentItem->getNext();

			if (!mCurrentItem) {
				mCurrentItem = (MenuItem*)mItemList.mHead->mValue;
			}

			while (!mCurrentItem->mName || !mCurrentItem->mIsActive) {
				mCurrentItem = mCurrentItem->getNext();
				if (!mCurrentItem) {
					mCurrentItem = (MenuItem*)mItemList.mHead->mValue;
				}
			}

			mIsUpdated = true;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		} else if (input & Controller::PRESS_UP) {
			mCurrentItem->checkEvents(this, 2);
			mCurrentItem = mCurrentItem->getPrev();

			if (!mCurrentItem) {
				mCurrentItem = (MenuItem*)mItemList.mTail->mValue;
			}

			while (!mCurrentItem->mName || !mCurrentItem->mIsActive) {
				mCurrentItem = mCurrentItem->getPrev();
				if (!mCurrentItem) {
					mCurrentItem = (MenuItem*)mItemList.mTail->mValue;
				}
			}
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}

		if (mIsInitialised) {
			if (_4C) {
				_4C->invoke(*this);
			}
			mIsInitialised = false;
			mIsUpdated     = true;
		}

		u32 id = 0x10000 - 4;
		if (mIsUpdated) {
			id |= 1;
			if (_54) {
				_54->invoke(*this);
			}
			mTimer2    = 0.0f;
			mIsUpdated = false;
		}

		if (!mCurrentItem->checkEvents(this, id)) {
			((MenuItem*)menu->mItemList.getFirstLink()->getObjectPtr())->checkEvents(this, id);
		}

		if (mSelf != this) {
			mCurrentItem->checkEvents(this, 2);

			if (_50) {
				_50->invoke(*this);
			}

			if (mSelf) {
				menu         = mSelf;
				menu->mTimer = 0.0f;
				menu->mState = FadeIn;
				menu->nextItem();
				menu = mSelf;
			} else {
				if (!_0C) {
					mSelf = (Menu*)_0C;
				}
				mTimer = 1.0f;
				mState = FadeOut;
			}
			_14 = mSelf;
		}

		break;
	}

	return menu;
}

/**
 * @note Address: 0x804567D8
 * @note Size: 0x68
 */
Menu::KeyEvent::KeyEvent(cTypeFlag type, u32 button, IDelegate1<Menu&>* delegate)
    : mLink(this)
{
	mType   = type;
	mButton = button;
	mAction = delegate;
}

/**
 * @note Address: 0x80456840
 * @note Size: 0x80
 */
Menu::MenuItem::MenuItem(cTypeFlag type, int a1, char* name)
    : mLink(this)
{
	mIsActive     = true;
	mName         = name;
	mSectionFlags = a1;
	mType         = type;
	mMenu         = nullptr;
}

/**
 * @note Address: 0x804568C0
 * @note Size: 0x1C
 */
Menu::MenuItem* Menu::MenuItem::getNext()
{
	JSUPtrLink* link = mLink.mNext;
	if (link) {
		return (Menu::MenuItem*)link->mValue;
	}
	return nullptr;
}

/**
 * @note Address: 0x804568DC
 * @note Size: 0x1C
 */
Menu::MenuItem* Menu::MenuItem::getPrev()
{
	JSUPtrLink* link = mLink.mPrev;
	if (link) {
		return (Menu::MenuItem*)link->mValue;
	}
	return nullptr;
}

/**
 * @note Address: 0x804568F8
 * @note Size: 0x200
 * this function is a clusterfuck. -EpochFlame
 */
bool Menu::MenuItem::checkEvents(Menu* menu, int type)
{
	JSUPtrLink* link;
	bool ret = false;
	bool doFinish;

	for (link = mList.mHead; link; link = (JSUPtrLink*)link->getNext()) {

		doFinish      = false;
		KeyEvent* obj = (KeyEvent*)link->getObjectPtr();
		if (type & obj->mType) {
			switch (obj->mType) {
			case 1:
				obj->mAction->invoke(*menu);
				break;
			case 2:
				obj->mAction->invoke(*menu);
				break;
			case 4:
				if (menu->mControl->isButton(obj->mButton)) {
					obj->mAction->invoke(*menu);
				}
				break;
			case 8:
			case 32:
				if (menu->mControl->isButtonDown(obj->mButton)) {
					obj->mAction->invoke(*menu);
					ret      = true;
					doFinish = true;
				}
				break;
			case 16:
				if (menu->mControl->isButtonDown(obj->mButton)) {
					if (menu->mCurrentItem->mType == 2) {
						checkEvents(menu, 2);
						if (!menu->_0C) {
							menu->mSelf = (Menu*)menu->_0C;
						}
						menu->mTimer = 7.0f;
						menu->mState = FadeOut;
						menu->mSelf  = menu;
						menu->_14    = menu->mCurrentItem->mMenu;
						Menu* temp   = menu->_14; // might be an inline
						temp->mTimer = 1.0f;
						temp->mState = FadeIn;

						if (!menu->mCurrentItem && !menu->mItemList.getFirstLink()) {
							menu->mCurrentItem = (MenuItem*)menu->mItemList.getFirstLink()->getObjectPtr();
						}

						ret                                       = 0;
						menu->mIsInitialised                      = true;
						doFinish                                  = true;
						menu->mCurrentItem->mMenu->mIsInitialised = true;
					} else {
						obj->mAction->invoke(*menu);
						ret      = true;
						doFinish = true;
					}
				}
				break;
			}

			if (doFinish) {
				break;
			}
		}
	}
	return ret;

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
