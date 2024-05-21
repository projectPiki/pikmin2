#ifndef _MENU_
#define _MENU_

#include "types.h"
#include "JSystem/JSupport/JSUList.h"
#include "IDelegate.h"

struct Menu {
	enum State {
		Inactive = 0,
		FadeIn   = 1,
		Active   = 2,
		FadeOut  = 3,
	};

	/**
	 * @struct Menu::KeyEvent
	 * @brief Represents a key event in the menu.
	 */
	struct KeyEvent {
		/**
		 * @enum cTypeFlag
		 * @brief Flags for the key event type.
		 */
		enum cTypeFlag {
			U0                            = 0,
			U1                            = 1,
			U2                            = 2,
			U3                            = 4,
			U4                            = 8,
			INVOKE_ACTION_ON_BUTTON_PRESS = 16,
			U6                            = 32,
		};

		/**
		 * @brief Constructs a KeyEvent object.
		 * @param type The type of the key event.
		 * @param param The parameter of the key event.
		 * @param action The action to be performed when the key event occurs.
		 */
		KeyEvent(cTypeFlag type, u32 param, IDelegate1<Menu&>* action);

		inline void invokeMenuAction(Menu* menu) { mAction->invoke(*menu); }

		int mType;                  // _00
		int mButton;                // _04
		IDelegate1<Menu&>* mAction; // _08
		JSULink<KeyEvent> mLink;    // _0C
	};

	/**
	 * @struct Menu::MenuItem
	 * @brief Represents a menu item.
	 */
	struct MenuItem {
		/**
		 * @enum cTypeFlag
		 * @brief Flags for the menu item type.
		 */
		enum cTypeFlag {
			UNK0 = 0,
			UNK1 = 1,
			UNK2 = 2,
		};

		/**
		 * @brief Constructs a MenuItem object.
		 * @param type The type of the menu item.
		 * @param sectionFlags The section flags of the menu item.
		 * @param name The name of the menu item.
		 */
		MenuItem(cTypeFlag type, int sectionFlags, char* name);

		/**
		 * @brief Gets the next menu item.
		 * @return A pointer to the next menu item.
		 */
		MenuItem* getNext();

		/**
		 * @brief Gets the previous menu item.
		 * @return A pointer to the previous menu item.
		 */
		MenuItem* getPrev();

		/**
		 * @brief Checks the events of the menu item.
		 * @param menu A pointer to the Menu object.
		 * @param param The parameter of the menu item.
		 */
		bool checkEvents(Menu* menu, int param);

		Menu* mParentMenu;            // _00
		bool mIsActive;               // _04
		char* mName;                  // _08
		int mSectionFlags;            // _0C
		int mType;                    // _10
		JSUList<KeyEvent> mEventList; // _14
		JSULink<MenuItem> mItemLink;  // _20
	};

	/**
	 * @brief Constructs a Menu object.
	 * @param control A pointer to the JUTGamePad object.
	 * @param font A pointer to the JUTFont object.
	 * @param flag A boolean indicating the flag of the menu.
	 */
	Menu(JUTGamePad* control, JUTFont* font, bool flag);

	/**
	 * @brief Adds a key event to the menu.
	 * @param type The type of the key event.
	 * @param param The parameter of the key event.
	 * @param action The action to be performed when the key event occurs.
	 */
	void addKeyEvent(KeyEvent::cTypeFlag type, u32 param, IDelegate1<Menu&>* action);

	/**
	 * @brief Adds an option to the menu.
	 * @param i The index of the option.
	 * @param name The name of the option.
	 * @param action The action to be performed when the option is selected.
	 * @param isActive A boolean indicating whether the option is active or not.
	 */
	void addOption(int i, char* name, IDelegate1<Menu&>* action, bool isActive);

	/**
	 * @brief Updates the menu.
	 * @param flag A boolean indicating whether the menu should be updated or not.
	 */
	Menu* doUpdate(bool flag);

	/**
	 * @brief Sets the position of the menu.
	 * @param x The x-coordinate of the menu position.
	 * @param y The y-coordinate of the menu position.
	 */
	inline void setPosition(int x, int y)
	{
		mPositionX = x;
		mPositionY = y;
	}

	// unused/inlined:
	void open();
	void close();

	JUTGamePad* mControl;                     // _00
	JUTFont* mFont;                           // _04
	bool mFlag;                               // _08
	Menu* mPreviousMenu;                      // _0C
	Menu* mActiveMenu;                        // _10
	Menu* mCurrentItemParent;                 // _14
	JSUList<MenuItem> mItemList;              // _18
	MenuItem* mCurrentItem;                   // _24
	MenuItem* mLastItem;                      // _28
	int _2C;                                  // _2C
	int mItemCount;                           // _30
	int mState;                               // _34
	f32 mTimer;                               // _38
	f32 mTimer2;                              // _3C
	int mPositionX;                           // _40
	int mPositionY;                           // _44
	int _48;                                  // _48
	IDelegate1<Menu&>* mOnInitialiseCallback; // _4C
	IDelegate1<Menu&>* mOnInactiveCallback;   // _50
	IDelegate1<Menu&>* mOnUpdateCallback;     // _54
	bool mIsInitialised;                      // _58
	bool mIsUpdated;                          // _59
	int mButtonValue;                         // _5C
};

#endif
