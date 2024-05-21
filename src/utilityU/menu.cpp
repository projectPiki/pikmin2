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
	mFont         = font;
	mFlag         = flag;
	mPreviousMenu = nullptr;

	MenuItem* rootItem  = new MenuItem(MenuItem::UNK0, 0, "root");
	rootItem->mIsActive = false;
	mItemList.append(&rootItem->mItemLink);

	_2C                   = 0;
	mItemCount            = 0;
	mLastItem             = nullptr;
	mCurrentItem          = nullptr;
	mCurrentItemParent    = nullptr;
	mActiveMenu           = nullptr;
	mOnInitialiseCallback = 0;
	mOnInactiveCallback   = nullptr;
	mOnUpdateCallback     = 0;
	mPositionX            = 190;
	mPositionY            = 220;
	_48                   = 260;
	mIsInitialised        = true;
	mIsUpdated            = true;
	mState                = Inactive;
	mTimer                = 0.0f;
	mTimer2               = 0.0f;

	volatile int idk1, idk2, idk3, idk4;
	idk4 = 190;
	idk3 = 220;
	idk2 = 190;
	idk1 = 220;

	mButtonValue = Controller::PRESS_A;
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
void Menu::open()
{
	mTimer = 0.0f;
	mState = FadeIn;

	if (!mCurrentItem && !mItemList.getFirstLink()) {
		mCurrentItem = (MenuItem*)mItemList.getFirstLink()->getObjectPtr();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
void Menu::close()
{
	if (!mPreviousMenu) {
		mActiveMenu = mPreviousMenu;
	}
	mTimer = 1.0f;
	mState = FadeOut;
}

/**
 * @note Address: 0x804562B0
 * @note Size: 0xC0
 */
void Menu::addOption(int optionIdx, char* optionName, IDelegate1<Menu&>* pressAction, bool isActive)
{
	mLastItem            = new MenuItem(MenuItem::UNK1, optionIdx, optionName);
	mLastItem->mIsActive = isActive;
	mItemList.append(&mLastItem->mItemLink);
	if (pressAction) {
		addKeyEvent(KeyEvent::INVOKE_ACTION_ON_BUTTON_PRESS, mButtonValue, pressAction);
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
void Menu::addKeyEvent(KeyEvent::cTypeFlag type, u32 button, IDelegate1<Menu&>* delegate)
{
	KeyEvent* key = new KeyEvent(type, button, delegate);

	if (mLastItem) {
		mLastItem->mEventList.append(&key->mLink);
	} else {
		JSUPtrLink* list = mItemList.mHead;
		if (list) {
			((MenuItem*)list->mValue)->mEventList.append(&key->mLink);
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

	mActiveMenu = this;
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
			menu   = mCurrentItemParent;
		}
		break;
	case Active:
		if (flag) {
			mIsUpdated = true;
		}

		u32 input = mControl->mButton.mRepeat; // WHY
		if (input & Controller::PRESS_DOWN) {
			mCurrentItem->checkEvents(this, KeyEvent::U2);
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
			mCurrentItem->checkEvents(this, KeyEvent::U2);
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
			if (mOnInitialiseCallback) {
				mOnInitialiseCallback->invoke(*this);
			}
			mIsInitialised = false;
			mIsUpdated     = true;
		}

		u32 eventType = 0xFFFC; // everything except 0x1 and 0x2
		if (mIsUpdated) {
			eventType |= KeyEvent::U1;
			if (mOnUpdateCallback) {
				mOnUpdateCallback->invoke(*this);
			}
			mTimer2    = 0.0f;
			mIsUpdated = false;
		}

		if (!mCurrentItem->checkEvents(this, eventType)) {
			menu->mItemList.getFirst()->getObject()->checkEvents(this, eventType);
		}

		if (mActiveMenu != this) {
			mCurrentItem->checkEvents(this, KeyEvent::U2);

			if (mOnInactiveCallback) {
				mOnInactiveCallback->invoke(*this);
			}

			if (mActiveMenu) {
				mActiveMenu->open();
				menu = mActiveMenu;
			} else {
				close();
			}
			mCurrentItemParent = mActiveMenu;
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
    : mItemLink(this)
{
	mIsActive     = true;
	mName         = name;
	mSectionFlags = a1;
	mType         = type;
	mParentMenu   = nullptr;
}

/**
 * @note Address: 0x804568C0
 * @note Size: 0x1C
 */
Menu::MenuItem* Menu::MenuItem::getNext()
{
	if (mItemLink.getNext()) {
		return mItemLink.getNext()->getObject();
	}
	return nullptr;
}

/**
 * @note Address: 0x804568DC
 * @note Size: 0x1C
 */
Menu::MenuItem* Menu::MenuItem::getPrev()
{
	if (mItemLink.getPrev()) {
		return mItemLink.getPrev()->getObject();
	}
	return nullptr;
}

/**
 * @note Address: 0x804568F8
 * @note Size: 0x200
 */
bool Menu::MenuItem::checkEvents(Menu* menu, int eventType)
{
	JSULink<KeyEvent>* link;
	bool success = false;

	for (link = mEventList.getFirst(); link; link = link->getNext()) {
		bool doFinish = false;

		KeyEvent* menuEvent = link->getObject();
		if (!(eventType & menuEvent->mType)) {
			continue;
		}

		switch (menuEvent->mType) {
		case KeyEvent::U1:
			menuEvent->invokeMenuAction(menu);
			break;

		case KeyEvent::U2:
			menuEvent->invokeMenuAction(menu);
			break;

		case KeyEvent::U3:
			if (menu->mControl->isButtonHeld(menuEvent->mButton)) {
				menuEvent->invokeMenuAction(menu);
			}
			break;

		case KeyEvent::U4:
		case KeyEvent::U6:
			if (menu->mControl->isButtonDown(menuEvent->mButton)) {
				menuEvent->invokeMenuAction(menu);
				success  = true;
				doFinish = true;
			}
			break;

		case KeyEvent::INVOKE_ACTION_ON_BUTTON_PRESS:
			if (menu->mControl->isButtonDown(menuEvent->mButton)) {
				if (menu->mCurrentItem->mType == MenuItem::UNK2) {
					checkEvents(menu, KeyEvent::U2);

					if (!menu->mPreviousMenu) {
						menu->mActiveMenu = menu->mPreviousMenu;
					}

					menu->mTimer             = 1.0f;
					menu->mState             = FadeOut;
					menu->mActiveMenu        = menu;
					menu->mCurrentItemParent = menu->mCurrentItem->mParentMenu;
					menu->mCurrentItemParent->open();

					menu->mIsInitialised = true;

					// mCurrentItem->mParentMenu IS menu!!!! wtf?
					menu->mCurrentItem->mParentMenu->mIsInitialised = true;
					success                                         = false;
					doFinish                                        = true;
				} else {
					menuEvent->invokeMenuAction(menu);

					success  = true;
					doFinish = true;
				}
			}

			break;
		}

		if (doFinish) {
			break;
		}
	}
	return success;
}
