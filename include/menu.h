#ifndef _MENU_
#define _MENU_

#include "types.h"
#include "JSystem/JSupport/JSUList.h"
#include "IDelegate.h"

struct Menu {
	/**
	 * @struct Menu::KeyEvent
	 * @brief Represents a key event in the menu.
	 */
	struct KeyEvent {
		/**
		 * @enum cTypeFlag
		 * @brief Flags for the key event type.
		 */
		enum cTypeFlag { UNK0 = 16, UNK1 = 32 };

		/**
		 * @brief Constructs a KeyEvent object.
		 * @param type The type of the key event.
		 * @param param The parameter of the key event.
		 * @param action The action to be performed when the key event occurs.
		 */
		KeyEvent(cTypeFlag type, u32 param, IDelegate1<Menu&>* action);

		int mType;   // _00
		int mButton; // _04
		IDelegate1<Menu&>* mAction;
		JSUPtrLink mLink;
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
		enum cTypeFlag { UNK0 = 0, UNK1 = 1 };

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

		Menu* mMenu;       // _00
		bool mIsActive;    // _04
		char* mName;       // _08
		int mSectionFlags; // _0C
		int mType;         // _10
		JSUPtrList mList;  // _14
		JSUPtrLink mLink;  // _20
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

	JUTGamePad* mControl;   // _00
	JUTFont* mFont;         // _04
	bool mFlag;             // _08
	u32 _0C;                // _0C, possibly Menu*
	Menu* mSelf;            // _10
	Menu* _14;              // _14
	JSUPtrList mItemList;   // _18
	MenuItem* mCurrentItem; // _24
	MenuItem* mLastItem;    // _28
	int _2C;                // _2C
	int mItemCount;         // _30
	int mState;             // _34
	f32 mTimer;             // _38
	f32 mTimer2;            // _3C
	int mPositionX;         // _40
	int mPositionY;         // _44
	int _48;                // _48
	IDelegate1<Menu&>* _4C; // _4C
	IDelegate1<Menu&>* _50; // _50
	IDelegate1<Menu&>* _54; // _54
	bool mIsInitialised;    // _58
	bool mIsUpdated;        // _59
	int mButtonValue;       // _5C
};

#endif
