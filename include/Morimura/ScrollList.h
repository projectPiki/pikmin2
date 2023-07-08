#ifndef _MORIMURA_SCROLLLIST_H
#define _MORIMURA_SCROLLLIST_H

#include "Morimura/Bases.h"

namespace Morimura {
struct TScaleUpCounter;

struct TIndexGroup {
	TIndexGroup();

	void downIndex();
	void upIndex();

	f32 _00;     // _00
	f32 _04;     // _04
	f32 _08;     // _08
	f32 _0C;     // _0C
	f32 _10;     // _10
	f32 _14;     // _14
	f32 mHeight; // _18
	f32 _1C;     // _1C
	int _20;     // _20, unknown
	u8 _24;      // _24
	f32 _28;     // _28
	u8 _2C[0x4]; // _2C, unknown
};

struct TIconInfo {
	void startScaleUp(f32);
	void setInfo(int, const ResTIMG*);
	void init(TScaleUpCounter*, J2DPane*, J2DPane*);

	int mCategoryID;                  // _00
	J2DPictureEx* mPic;               // _04
	TScaleUpCounter* mScaleUpCounter; // _08
	J2DPane* mPane2;                  // _0C
	J2DPane* mPane;                   // _10
	og::Screen::ScaleMgr* mScaleMgr;  // _14
	u32 _18;                          // _18
};

struct TIndexPane {
	TIndexPane(TTestBase* owner, P2DScreen::Mgr_tuning* scrn, u64 tag)
	{
		J2DPane* pane = scrn->search(tag);
		mIndex        = 0;
		mPane         = pane;
		mPane2        = nullptr;
		mSizeType     = 0;
		_10           = 0;
		_18           = 0.0f;
		mIconInfos    = nullptr;
		mOwner        = owner;
		_1C           = mPane->mOffset.y;
	}

	void setIndex(int);
	int getIndex();
	int getListIndex();
	void createIconInfo(int, int);
	void update();

	int mIndex;             // _00
	J2DPane* mPane;         // _04
	J2DPane* mPane2;        // _08
	int mSizeType;          // _0C
	int _10;                // _10
	int _14;                // _14
	f32 _18;                // _18
	f32 _1C;                // _1C
	TIconInfo** mIconInfos; // _20
	TTestBase* mOwner;      // _24
};

struct TListScreen : public TScreenBase {
	TListScreen(JKRArchive* arc, int id)
	    : TScreenBase(arc, id)
	{
	}
	virtual void create(const char*, u32); // _08

	// _00     = VTBL
	// _00-_18 = TScreenBase
};

struct TScrollList : public TTestBase {
	TScrollList(char*);

	virtual ~TScrollList() { }                       // _08 (weak)
	virtual bool isListShow(int) { return true; }    // _7C (weak)
	virtual void paneInit()       = 0;               // _80
	virtual void changePaneInfo() = 0;               // _84
	virtual int getIdMax()        = 0;               // _88
	virtual u64 getNameID(int)    = 0;               // _8C
	virtual void getUpdateIndex(int&, bool);         // _90
	virtual void setShortenIndex(int, int, bool) { } // _94 (weak)
	virtual void doUpdateIn() { }                    // _98 (weak)
	virtual void doUpdateOut() { }                   // _9C (weak)
	virtual void changeTextTevBlock(int) { }         // _A0 (weak)
	virtual void updateIndex(bool);                  // _A4
	virtual void setPaneCharacter(int) { }           // _A8 (weak)

	bool updateList();
	void changeIndex();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* mArchive;        // _78
	TScreenBase* mMainScreen;    // _7C
	Controller* mController;     // _80
	TIndexGroup* mIndexGroup;    // _84
	TIndexPane** mIndexPaneList; // _88, array of ptrs?
	bool mDoEnableBigIcon;       // _8C
	s16 mMaxSelect;              // _8E
	int _90;                     // _90
	int mCurrentSelect;          // _94
	int _98;                     // _98
	int mRowSize;                // _9C
	f32 _A0;                     // _A0
	f32 _A4;                     // _A4
	f32 mYOffset;                // _A8
	f32 _AC;                     // _AC
	u8 _B0;                      // _B0

	static int mRightOffset;
	static bool mForceResetParm;
};
} // namespace Morimura

#endif
