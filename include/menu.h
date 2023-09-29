#ifndef _MENU_
#define _MENU_

#include "types.h"
#include "JSystem/JSupport/JSUList.h"
#include "IDelegate.h"

struct JUTGamePad;
struct JUTFont;

struct Menu {
	struct KeyEvent {
		enum cTypeFlag { UNK0 = 16, UNK1 = 32 };

		KeyEvent(cTypeFlag, u32, IDelegate1<Menu&>*);

		int mType; // _00
		int _04;
		IDelegate1<Menu&>* mAction;
		JSUPtrLink mLink;
	};

	struct MenuItem {
		enum cTypeFlag { UNK0 = 0, UNK1 = 1 };

		MenuItem(cTypeFlag, int, char*);

		MenuItem* getNext();
		MenuItem* getPrev();
		void checkEvents(Menu*, int);

		int _00;     // _00
		bool _04;    // _04
		char* mName; // _08
		int _0C;     // _0C
		int mType;
		JSUPtrList mList; // _14
		JSUPtrLink mLink; // _20
	};

	Menu(JUTGamePad*, JUTFont*, bool);
	void addKeyEvent(KeyEvent::cTypeFlag, u32, IDelegate1<Menu&>*);
	void addOption(int i, char* name, IDelegate1<Menu&>*, bool);
	void doUpdate(bool);

	inline void setPosition(int x, int y)
	{
		_40 = x;
		_44 = y;
	}

	JUTGamePad* mControl;   // _00
	JUTFont* mFont;         // _04
	bool mFlag;             // _08
	int _0C;                // _0C
	Menu* mSelf;            // _10
	Menu* mSelf2;           // _14
	JSUPtrList mItemList;   // _18
	MenuItem* mCurrentItem; // _24
	MenuItem* mLastItem;    // _28
	int _2C;                // _2C
	int mItemCount;         // _30
	int mState;             // _34
	f32 mTimer;             // _38
	f32 mTimer2;            // _3C
	int _40;                // _40
	int _44;                // _44
	int _48;                // _48
	int _4C;                // _4C
	int _50;                // _50
	int _54;                // _54
	bool _58;               // _58
	bool _59;               // _59
	int _5C;
};

#endif
